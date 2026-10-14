/*
 * Reverse-Engineered Source for: libwebrtc_audio_preprocessing.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libwebrtc_audio_preprocessing"

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
#include "libwebrtc_audio_preprocessing.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: WebRtcAec_GetBufferFarendError */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_GetBufferFarendError(void) {
    ALOGD("WebRtcAec_GetBufferFarendError() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MaxAbsValueW16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxAbsValueW16 = NULL;

/* Demangled: webrtc::audioproc::Init::Init(webrtc::audioproc::Init const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4InitC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4InitC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Init11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc4Init11GetTypeNameEv() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_DelayMetrics>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc17Test_DelayMetricsEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc17Test_DelayMetricsEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::rev_conversion_needed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl21rev_conversion_neededEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl21rev_conversion_neededEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::is_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl10is_enabledEv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl10is_enabledEv() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::~LevelEstimatorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImplD2Ev(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImplD2Ev() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::ProcessClearBlock(std::__1::complex<float> const*, std::__1::complex<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer17ProcessClearBlockEPKNSt3__17complexIfEEPS3_(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer17ProcessClearBlockEPKNSt3__17complexIfEEPS3_() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::InitializeHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc15GainControlImpl16InitializeHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc15GainControlImpl16InitializeHandleEPv() called");
    return 0;
}

/* Demangled: WebRtc_SoftResetBinaryDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_SoftResetBinaryDelayEstimatorFarend(void) {
    ALOGD("WebRtc_SoftResetBinaryDelayEstimatorFarend() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadD2Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadD2Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetRedPayloadUb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetRedPayloadUb(void) {
    ALOGD("WebRtcIsac_GetRedPayloadUb() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQGainCdf_ptr */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQGainCdf_ptr = NULL;

/* Demangled: webrtc::AudioBuffer::channels() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer8channelsEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer8channelsEv() called");
    return 0;
}

/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc(void) {
    ALOGD("_ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc() called");
    return 0;
}

/* Demangled: void std::__1::vector<float, std::__1::allocator<float> >::__push_back_slow_path<float>(float&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIfEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIfEEvOT_() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitMasking */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitMasking(void) {
    ALOGD("WebRtcIsac_InitMasking() called");
    return 0;
}

/* Exported Object: WebRtcAec_PartitionDelay */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_PartitionDelay = NULL;

/* Demangled: WebRtcAecm_echo_path_size_bytes */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_echo_path_size_bytes(void) {
    ALOGD("WebRtcAecm_echo_path_size_bytes() called");
    return 0;
}

/* Demangled: WebRtcAecm_ProcessBlock */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_ProcessBlock(void) {
    ALOGD("WebRtcAecm_ProcessBlock() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc4Init5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::Event(webrtc::audioproc::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5EventC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5EventC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::keyboard_data() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer13keyboard_dataEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer13keyboard_dataEv() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Config_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc25_Config_default_instance_E = NULL;

/* Demangled: rtc::Time() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc4TimeEv(void) {
    ALOGD("_ZN3rtc4TimeEv() called");
    return 0;
}

/* Exported Object: scc_info_OutputData_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_OutputData_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto = NULL;

/* Exported Object: vtable for webrtc::ProcessingComponent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19ProcessingComponentE = NULL;

/* Demangled: webrtc::S16ToFloat(short const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10S16ToFloatEPKsjPf(void) {
    ALOGD("_ZN6webrtc10S16ToFloatEPKsjPf() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltMaxIndShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltMaxIndShape = NULL;

/* Exported Object: webrtc::Trace::level_filter_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc5Trace13level_filter_E = NULL;

/* Demangled: webrtc::TraceImpl::AddImpl(webrtc::TraceLevel, webrtc::TraceModule, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl7AddImplENS_10TraceLevelENS_11TraceModuleEiPKc(void) {
    ALOGD("_ZN6webrtc9TraceImpl7AddImplENS_10TraceLevelENS_11TraceModuleEiPKc() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream16default_instanceEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::PairDirection(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PairDirectionERKNS_14CartesianPointIfEES3_(void) {
    ALOGD("_ZN6webrtc13PairDirectionERKNS_14CartesianPointIfEES3_() called");
    return 0;
}

/* Demangled: WebRtcIsac_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Create(void) {
    ALOGD("WebRtcIsac_Create() called");
    return 0;
}

/* Demangled: android_getCpuCount */
extern "C" __attribute__((visibility("default"))) int android_getCpuCount(void) {
    ALOGD("android_getCpuCount() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsC1Ej(void) {
    ALOGD("_ZN6webrtc13MovingMomentsC1Ej() called");
    return 0;
}

/* Demangled: WebRtcSpl_SynthesisQMF */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_SynthesisQMF(void) {
    ALOGD("WebRtcSpl_SynthesisQMF() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltLevelsGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltLevelsGain = NULL;

/* Exported Object: WebRtcIsac_kQPitchLagStepsizeMid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagStepsizeMid = NULL;

/* Demangled: webrtc::RWLockPosix::ReleaseLockShared() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosix17ReleaseLockSharedEv(void) {
    ALOGD("_ZN6webrtc11RWLockPosix17ReleaseLockSharedEv() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::~MovingMoments() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsD2Ev(void) {
    ALOGD("_ZN6webrtc13MovingMomentsD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6StreamD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6StreamD1Ev() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::set_likelihood(webrtc::VoiceDetection::Likelihood) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImpl14set_likelihoodENS_14VoiceDetection10LikelihoodE(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImpl14set_likelihoodENS_14VoiceDetection10LikelihoodE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdfPtrMid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdfPtrMid = NULL;

/* Demangled: webrtc::audioproc::Init::~Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4InitD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4InitD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::InternalSwap(webrtc::audioproc::Test_Frame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancerC2Ev(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancerC2Ev() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::frame_size_ms() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18VoiceDetectionImpl13frame_size_msEv(void) {
    ALOGD("_ZNK6webrtc18VoiceDetectionImpl13frame_size_msEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::MaskRangeMean(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer13MaskRangeMeanEjj(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer13MaskRangeMeanEjj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQIndexUpperLimitLagMid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQIndexUpperLimitLagMid = NULL;

/* Demangled: WebRtcIsac_InitTransform */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitTransform(void) {
    ALOGD("WebRtcIsac_InitTransform() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec8Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec8Ub16 = NULL;

/* Demangled: webrtc::IFChannelBuffer::fbuf() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15IFChannelBuffer4fbufEv(void) {
    ALOGD("_ZN6webrtc15IFChannelBuffer4fbufEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeIntelligibility() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25InitializeIntelligibilityEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25InitializeIntelligibilityEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::GetDelayMetrics(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::ExtractFeatures(short const*, unsigned int, AudioFeatures*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures(void) {
    ALOGD("_ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures() called");
    return 0;
}

/* Demangled: webrtc::GetDirectionIfLinear(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20GetDirectionIfLinearERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN6webrtc20GetDirectionIfLinearERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetVars */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetVars(void) {
    ALOGD("WebRtcIsac_GetVars() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::MergeFrom(webrtc::audioproc::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5Event9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadC1Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadC1Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_Lar2Poly */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Lar2Poly(void) {
    ALOGD("WebRtcIsac_Lar2Poly() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQIndexLowerLimitLagMid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQIndexLowerLimitLagMid = NULL;

/* Demangled: WebRtcNsx_ComputeSpectralDifference */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_ComputeSpectralDifference(void) {
    ALOGD("WebRtcNsx_ComputeSpectralDifference() called");
    return 0;
}

/* Exported Object: WebRtc_GetCPUInfoNoASM */
extern "C" __attribute__((visibility("default"))) void* WebRtc_GetCPUInfoNoASM = NULL;

/* Demangled: WebRtcAecm_InitEchoPathCore */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_InitEchoPathCore(void) {
    ALOGD("WebRtcAecm_InitEchoPathCore() called");
    return 0;
}

/* Demangled: webrtc::Agc::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc5ResetEv(void) {
    ALOGD("_ZN6webrtc3Agc5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Test13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc4Test13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc21EchoControlMobileImpl10InitializeEv(void) {
    ALOGD("_ZThn4_N6webrtc21EchoControlMobileImpl10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::InitializeCPUSpecificFeatures() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv(void) {
    ALOGD("_ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::OutputData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputDataC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputDataC2Ev() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_compression_gain_db(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl23set_compression_gain_dbEi(void) {
    ALOGD("_ZN6webrtc15GainControlImpl23set_compression_gain_dbEi() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilterC1EPKfjS2_j(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilterC1EPKfjS2_j() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad6CreateEv(void) {
    ALOGD("_ZN6webrtc13StandaloneVad6CreateEv() called");
    return 0;
}

/* Demangled: rtc::TimestampWrapAroundHandler::Unwrap(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26TimestampWrapAroundHandler6UnwrapEj(void) {
    ALOGD("_ZN3rtc26TimestampWrapAroundHandler6UnwrapEj() called");
    return 0;
}

/* Demangled: webrtc::LappedTransform::LappedTransform(unsigned int, unsigned int, unsigned int, float const*, unsigned int, unsigned int, webrtc::LappedTransform::Callback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15LappedTransformC2EjjjPKfjjPNS0_8CallbackE(void) {
    ALOGD("_ZN6webrtc15LappedTransformC2EjjjPKfjjPNS0_8CallbackE() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerD2Ev(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::~SincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerD2Ev(void) {
    ALOGD("_ZN6webrtc13SincResamplerD2Ev() called");
    return 0;
}

/* Demangled: WebRtc_lookahead */
extern "C" __attribute__((visibility("default"))) int WebRtc_lookahead(void) {
    ALOGD("WebRtc_lookahead() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_bands(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer11split_bandsEj(void) {
    ALOGD("_ZN6webrtc11AudioBuffer11split_bandsEj() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::EchoCancellation */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc16EchoCancellationE = NULL;

/* Demangled: webrtc::NoiseSuppressionImpl::set_level(webrtc::NoiseSuppression::Level) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImpl9set_levelENS_16NoiseSuppression5LevelE(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImpl9set_levelENS_16NoiseSuppression5LevelE() called");
    return 0;
}

/* Demangled: rtc::xml_encode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10xml_encodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc10xml_encodeEPcjPKcj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdfSizeMid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdfSizeMid = NULL;

/* Demangled: WebRtcIsac_InitPostFilterbank */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitPostFilterbank(void) {
    ALOGD("WebRtcIsac_InitPostFilterbank() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::~TransientDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorD1Ev(void) {
    ALOGD("_ZN6webrtc17TransientDetectorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::Initialize(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: rtc::GlobalLockPod::Lock() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13GlobalLockPod4LockEv(void) {
    ALOGD("_ZN3rtc13GlobalLockPod4LockEv() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::DecayStep(std::__1::complex<float> const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArray9DecayStepEPKNSt3__17complexIfEEb(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArray9DecayStepEPKNSt3__17complexIfEEb() called");
    return 0;
}

/* Demangled: WebRtcIsac_CorrelateInterVec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_CorrelateInterVec(void) {
    ALOGD("WebRtcIsac_CorrelateInterVec() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeNumRecPointUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeNumRecPointUb12 = NULL;

/* Demangled: webrtc::AudioProcessingImpl::InitializeTransient() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19InitializeTransientEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19InitializeTransientEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecoderInit */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecoderInit(void) {
    ALOGD("WebRtcIsac_DecoderInit() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_channels_f(webrtc::Band) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer16split_channels_fENS_4BandE(void) {
    ALOGD("_ZN6webrtc11AudioBuffer16split_channels_fENS_4BandE() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::Synthesis(float const* const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBank9SynthesisEPKPKfjPf(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBank9SynthesisEPKPKfjPf() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxIndexW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxIndexW32(void) {
    ALOGD("WebRtcSpl_MaxIndexW32() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample8khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample8khzTo48khz(void) {
    ALOGD("WebRtcSpl_ResetResample8khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::RWLockWrapper::CreateRWLock() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13RWLockWrapper12CreateRWLockEv(void) {
    ALOGD("_ZN6webrtc13RWLockWrapper12CreateRWLockEv() called");
    return 0;
}

/* Demangled: WebRtcVad_InitCore */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_InitCore(void) {
    ALOGD("WebRtcVad_InitCore() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::BufferLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer11BufferLevelEv(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer11BufferLevelEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::NormalizeCovMats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer16NormalizeCovMatsEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer16NormalizeCovMatsEv() called");
    return 0;
}

/* Demangled: WebRtcAec_Process */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_Process(void) {
    ALOGD("WebRtcAec_Process() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4InitC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4InitC1Ev() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::NonlinearBeamformer(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::SphericalPoint<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformerC1ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformerC1ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE() called");
    return 0;
}

/* Demangled: webrtc::metrics::HistogramFactoryGetEnumeration(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: WebRtc_rdft */
extern "C" __attribute__((visibility("default"))) int WebRtc_rdft(void) {
    ALOGD("WebRtc_rdft() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeNumRecPointUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeNumRecPointUb16 = NULL;

/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetectorC1Ev(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetectorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream16default_instanceEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc5Event16default_instanceEv() called");
    return 0;
}

/* Demangled: WebRtcAec_InitResampler */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_InitResampler(void) {
    ALOGD("WebRtcAec_InitResampler() called");
    return 0;
}

/* Demangled: webrtc::SparseFIRFilter::Filter(float const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SparseFIRFilter6FilterEPKfjPf(void) {
    ALOGD("_ZN6webrtc15SparseFIRFilter6FilterEPKfjPf() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::BlockBasedMovingAverage(std::__1::complex<float> const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArray23BlockBasedMovingAverageEPKNSt3__17complexIfEEb(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArray23BlockBasedMovingAverageEPKNSt3__17complexIfEEb() called");
    return 0;
}

/* Demangled: WebRtcAecm_BufferFarend */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_BufferFarend(void) {
    ALOGD("WebRtcAecm_BufferFarend() called");
    return 0;
}

/* Demangled: webrtc::Agc::Process(short const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc7ProcessEPKsji(void) {
    ALOGD("_ZN6webrtc3Agc7ProcessEPKsji() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: rtc::SystemInfo::SystemInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfoC2Ev(void) {
    ALOGD("_ZN3rtc10SystemInfoC2Ev() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc2Cdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc2Cdf = NULL;

/* Demangled: WebRtcSpl_ScaleVector */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleVector(void) {
    ALOGD("WebRtcSpl_ScaleVector() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc5Event13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc5Event13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc16Test_EchoMetrics11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc16Test_EchoMetrics11GetTypeNameEv() called");
    return 0;
}

/* Demangled: webrtc::GetMinimumSpacing(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17GetMinimumSpacingERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN6webrtc17GetMinimumSpacingERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetNewFrameLength */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetNewFrameLength(void) {
    ALOGD("WebRtcIsac_GetNewFrameLength() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanGain2Q12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanGain2Q12 = NULL;

/* Exported Object: vtable for webrtc::TraceImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9TraceImplE = NULL;

/* Demangled: webrtc::ConditionVariablePosix::WakeAll() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosix7WakeAllEv(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosix7WakeAllEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::ReverseStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc13ReverseStreamE = NULL;

/* Demangled: webrtc::AudioBuffer::InitForNewData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer14InitForNewDataEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer14InitForNewDataEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::is_data_processed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl17is_data_processedEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl17is_data_processedEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::GetHandleError(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl14GetHandleErrorEPv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl14GetHandleErrorEPv() called");
    return 0;
}

/* Demangled: WebRtcVad_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Init(void) {
    ALOGD("WebRtcVad_Init() called");
    return 0;
}

/* Demangled: rtc::url_encode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10url_encodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc10url_encodeEPcjPKcj() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::WriteToFile(char const*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl11WriteToFileEPKct(void) {
    ALOGD("_ZN6webrtc9TraceImpl11WriteToFileEPKct() called");
    return 0;
}

/* Demangled: WebRtc_MoveReadPtr */
extern "C" __attribute__((visibility("default"))) int WebRtc_MoveReadPtr(void) {
    ALOGD("WebRtc_MoveReadPtr() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Config>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6ConfigEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6ConfigEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: rtc::SystemInfo::GetCpuArchitecture() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfo18GetCpuArchitectureEv(void) {
    ALOGD("_ZN3rtc10SystemInfo18GetCpuArchitectureEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<RingBuffer*, std::__1::allocator<RingBuffer*> >::__push_back_slow_path<RingBuffer*>(RingBuffer*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10RingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10RingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: webrtc::Resampler::~Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerD1Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc4Init21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::~ProcessingComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponentD2Ev(void) {
    ALOGD("_ZN6webrtc19ProcessingComponentD2Ev() called");
    return 0;
}

/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12FatalMessageC2EPKci(void) {
    ALOGD("_ZN3rtc12FatalMessageC2EPKci() called");
    return 0;
}

/* Demangled: rtc::SystemInfo::GetMaxCpus() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfo10GetMaxCpusEv(void) {
    ALOGD("_ZN3rtc10SystemInfo10GetMaxCpusEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc2Levels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc2Levels = NULL;

/* Demangled: webrtc::TraceImpl::AddMessage(char*, char const*, unsigned short) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9TraceImpl10AddMessageEPcPKct(void) {
    ALOGD("_ZNK6webrtc9TraceImpl10AddMessageEPcPKct() called");
    return 0;
}

/* Demangled: std::__1::complex<float> std::__1::operator/<float>(std::__1::complex<float> const&, std::__1::complex<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1dvIfEENS_7complexIT_EERKS3_S5_(void) {
    ALOGD("_ZNSt3__1dvIfEENS_7complexIT_EERKS3_S5_() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::DispatchAudio(webrtc::IntelligibilityEnhancer::AudioSource, std::__1::complex<float> const*, std::__1::complex<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer13DispatchAudioENS0_11AudioSourceEPKNSt3__17complexIfEEPS4_(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer13DispatchAudioENS0_11AudioSourceEPKNSt3__17complexIfEEPS4_() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeStoredDataLb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeStoredDataLb(void) {
    ALOGD("WebRtcIsac_EncodeStoredDataLb() called");
    return 0;
}

/* Demangled: WebRtcSpl_AllPassQMF */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AllPassQMF(void) {
    ALOGD("WebRtcSpl_AllPassQMF() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_stream_delay_ms(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi() called");
    return 0;
}

/* Exported Object: webrtc::ExtendedFilter const& webrtc::Config::default_value<webrtc::ExtendedFilter>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_14ExtendedFilterEEERKT_vE3def = NULL;

/* Demangled: WebRtc_SoftResetBinaryDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_SoftResetBinaryDelayEstimator(void) {
    ALOGD("WebRtc_SoftResetBinaryDelayEstimator() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::complex<float> std::__1::operator*<float>(std::__1::complex<float> const&, std::__1::complex<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1mlIfEENS_7complexIT_EERKS3_S5_(void) {
    ALOGD("_ZNSt3__1mlIfEENS_7complexIT_EERKS3_S5_() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::InitInterfAngles() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer16InitInterfAnglesEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer16InitInterfAnglesEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample16khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample16khzTo22khz(void) {
    ALOGD("WebRtcSpl_Resample16khzTo22khz() called");
    return 0;
}

/* Demangled: WebRtcSpl_ScaleAndAddVectors */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleAndAddVectors(void) {
    ALOGD("WebRtcSpl_ScaleAndAddVectors() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::Analysis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter8AnalysisEPKNS_15IFChannelBufferEPS1_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter8AnalysisEPKNS_15IFChannelBufferEPS1_() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::is_extended_filter_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl26is_extended_filter_enabledEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl26is_extended_filter_enabledEv() called");
    return 0;
}

/* Demangled: rtc::GlobalLock::GlobalLock() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10GlobalLockC1Ev(void) {
    ALOGD("_ZN3rtc10GlobalLockC1Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample22khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample22khzTo8khz(void) {
    ALOGD("WebRtcSpl_Resample22khzTo8khz() called");
    return 0;
}

/* Demangled: webrtc::KeySort(void*, void*, unsigned int, unsigned int, webrtc::Type) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7KeySortEPvS0_jjNS_4TypeE(void) {
    ALOGD("_ZN6webrtc7KeySortEPvS0_jjNS_4TypeE() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::Flush() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl5FlushEv(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl5FlushEv() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_OutputData_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc29_OutputData_default_instance_E = NULL;

/* Demangled: webrtc::GetRightAlign(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13GetRightAlignEPKvj(void) {
    ALOGD("_ZN6webrtc13GetRightAlignEPKvj() called");
    return 0;
}

/* Demangled: WebRtc_SoftResetDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_SoftResetDelayEstimator(void) {
    ALOGD("WebRtc_SoftResetDelayEstimator() called");
    return 0;
}

/* Exported Object: scc_info_Stream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Stream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto = NULL;

/* Demangled: webrtc::audioproc::OutputData::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: rtc::utf8_decode(char const*, unsigned int, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11utf8_decodeEPKcjPm(void) {
    ALOGD("_ZN3rtc11utf8_decodeEPKcjPm() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeLpcCoef */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeLpcCoef(void) {
    ALOGD("WebRtcIsac_DecodeLpcCoef() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag4Hi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag4Hi = NULL;

/* Demangled: WebRtc_GetCPUFeaturesARM */
extern "C" __attribute__((visibility("default"))) int WebRtc_GetCPUFeaturesARM(void) {
    ALOGD("WebRtc_GetCPUFeaturesARM() called");
    return 0;
}

/* Demangled: WebRtc_last_delay_quality */
extern "C" __attribute__((visibility("default"))) int WebRtc_last_delay_quality(void) {
    ALOGD("WebRtc_last_delay_quality() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Event>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc5EventEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc5EventEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Exported Object: scc_info_Test_DelayMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Test_DelayMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto = NULL;

/* Demangled: rtc::transform(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int (*)(char*, unsigned int, char const*, unsigned int)) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9transformERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjRKS6_PFjPcjPKcjE(void) {
    ALOGD("_ZN3rtc9transformERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjRKS6_PFjPcjPKcjE() called");
    return 0;
}

/* Demangled: webrtc::Histogram::RemoveTransient() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram15RemoveTransientEv(void) {
    ALOGD("_ZN6webrtc9Histogram15RemoveTransientEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::CopyFrom(webrtc::audioproc::Test_Frame const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::~Test() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4TestD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4TestD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferD0Ev(void) {
    ALOGD("_ZN6webrtc11AudioBufferD0Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::ProcessRenderAudio(webrtc::AudioBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl18ProcessRenderAudioEPKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl18ProcessRenderAudioEPKNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::num_handles_required() const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc15GainControlImpl20num_handles_requiredEv(void) {
    ALOGD("_ZThn4_NK6webrtc15GainControlImpl20num_handles_requiredEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::InternalSwap(webrtc::audioproc::Init*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Init12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: GetSubframesPitchParameters(int, double*, double*, int, int, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z27GetSubframesPitchParametersiPdS_iiS_S_S_S_(void) {
    ALOGD("_Z27GetSubframesPitchParametersiPdS_iiS_S_S_S_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcMeansShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcMeansShape = NULL;

/* Demangled: webrtc::Agc::~Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcD2Ev(void) {
    ALOGD("_ZN6webrtc3AgcD2Ev() called");
    return 0;
}

/* Demangled: rtc::ClosePlatformFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17ClosePlatformFileEi(void) {
    ALOGD("_ZN3rtc17ClosePlatformFileEi() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::CalculateMoments(float const*, unsigned int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_(void) {
    ALOGD("_ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::Create(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j() called");
    return 0;
}

/* Demangled: WebRtcIsac_AutoCorr */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AutoCorr(void) {
    ALOGD("WebRtcIsac_AutoCorr() called");
    return 0;
}

/* Demangled: rtc::TimeDiff(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8TimeDiffEjj(void) {
    ALOGD("_ZN3rtc8TimeDiffEjj() called");
    return 0;
}

/* Demangled: rtc::ErrorName(int, rtc::ConstantLabel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9ErrorNameEiPKNS_13ConstantLabelE(void) {
    ALOGD("_ZN3rtc9ErrorNameEiPKNS_13ConstantLabelE() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::PlatformThread(bool (*)(void*), void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadC2EPFbPvES1_PKc(void) {
    ALOGD("_ZN3rtc14PlatformThreadC2EPFbPvES1_PKc() called");
    return 0;
}

/* Demangled: rtc::html_encode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11html_encodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc11html_encodeEPcjPKcj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kNumQCellLpcGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kNumQCellLpcGain = NULL;

/* Exported Object: vtable for webrtc::FileWrapperImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc15FileWrapperImplE = NULL;

/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::Rewind() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc15FileWrapperImpl6RewindEv(void) {
    ALOGD("_ZThn4_N6webrtc15FileWrapperImpl6RewindEv() called");
    return 0;
}

/* Exported Object: WebRtcAec_ScaleErrorSignal */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_ScaleErrorSignal = NULL;

/* Exported Object: webrtc::audioproc::_Init_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc23_Init_default_instance_E = NULL;

/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&, webrtc::Beamformer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigEPNS_10BeamformerIfEE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigEPNS_10BeamformerIfEE() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned long, unsigned int>(unsigned long const&, unsigned int const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17MakeCheckOpStringImjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void) {
    ALOGD("_ZN3rtc17MakeCheckOpStringImjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxValueW16C */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxValueW16C(void) {
    ALOGD("WebRtcSpl_MaxValueW16C() called");
    return 0;
}

/* Demangled: WebRtcSpl_MinValueW16C */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MinValueW16C(void) {
    ALOGD("WebRtcSpl_MinValueW16C() called");
    return 0;
}

/* Exported Object: WebRtcAec_SubbandCoherence */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_SubbandCoherence = NULL;

/* Demangled: webrtc::audioproc::Test_Frame::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10Test_Frame13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc10Test_Frame13IsInitializedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc(void) {
    ALOGD("_ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::Enable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImpl6EnableEb(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImpl6EnableEb() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::~RWLockPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosixD1Ev(void) {
    ALOGD("_ZN6webrtc11RWLockPosixD1Ev() called");
    return 0;
}

/* Exported Object: scc_info_Config_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Config_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto = NULL;

/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc21EchoControlMobileImplD0Ev(void) {
    ALOGD("_ZThn4_N6webrtc21EchoControlMobileImplD0Ev() called");
    return 0;
}

/* Demangled: rtc::SystemInfo::GetCurCpus() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfo10GetCurCpusEv(void) {
    ALOGD("_ZN3rtc10SystemInfo10GetCurCpusEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Config12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc6Config12ByteSizeLongEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag3Lo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag3Lo = NULL;

/* Exported Object: WebRtcIsac_kTransform */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kTransform = NULL;

/* Demangled: webrtc::WPDTree::Update(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTree6UpdateEPKfj(void) {
    ALOGD("_ZN6webrtc7WPDTree6UpdateEPKfj() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::UpdateBuffers(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor13UpdateBuffersEPf(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor13UpdateBuffersEPf() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread4StopEv(void) {
    ALOGD("_ZN3rtc14PlatformThread4StopEv() called");
    return 0;
}

/* Demangled: webrtc::WindowGenerator::Hanning(int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15WindowGenerator7HanningEiPf(void) {
    ALOGD("_ZN6webrtc15WindowGenerator7HanningEiPf() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::OpenFromFileHandle(__sFILE*, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl18OpenFromFileHandleEP7__sFILEbbb(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl18OpenFromFileHandleEP7__sFILEbbb() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::~WPDTree() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeD1Ev(void) {
    ALOGD("_ZN6webrtc7WPDTreeD1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::Test() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4TestC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4TestC1Ev() called");
    return 0;
}

/* Exported Object: scc_info_Test_Frame_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Test_Frame_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto = NULL;

/* Exported Object: vtable for webrtc::ResampleConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc17ResampleConverterE = NULL;

/* Exported Object: WebRtcIsac_kUpperApFactorsFloat */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kUpperApFactorsFloat = NULL;

/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPfEEE4typeENSC_IS6_EES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPfEEE4typeENSC_IS6_EES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPfEEE4typeENSC_IS6_EES8_S8_() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def = NULL;

/* Demangled: rtc::CriticalSection::TryEnter() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CriticalSection8TryEnterEv(void) {
    ALOGD("_ZN3rtc15CriticalSection8TryEnterEv() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::~FileWrapperImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImplD1Ev(void) {
    ALOGD("_ZN6webrtc15FileWrapperImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Agc::Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcC1Ev(void) {
    ALOGD("_ZN6webrtc3AgcC1Ev() called");
    return 0;
}

/* Exported Object: webrtc::Intelligibility const& webrtc::Config::default_value<webrtc::Intelligibility>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_15IntelligibilityEEERKT_vE3def = NULL;

/* Demangled: rtc::Event::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5Event5ResetEv(void) {
    ALOGD("_ZN3rtc5Event5ResetEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kTransform1Float */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kTransform1Float = NULL;

/* Demangled: WebRtcSpl_GetScalingSquare */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_GetScalingSquare(void) {
    ALOGD("WebRtcSpl_GetScalingSquare() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::num_keyboard_frames() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer19num_keyboard_framesEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer19num_keyboard_framesEv() called");
    return 0;
}

/* Demangled: webrtc::TracePosix::~TracePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10TracePosixD1Ev(void) {
    ALOGD("_ZN6webrtc10TracePosixD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::CreateHandle() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl12CreateHandleEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl12CreateHandleEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::DestroyHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl13DestroyHandleEPv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl13DestroyHandleEPv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::complex<float>*, std::__1::allocator<std::__1::complex<float>*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPNS_7complexIfEENS_9allocatorIS3_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPNS_7complexIfEENS_9allocatorIS3_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::OutputData */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc10OutputDataE = NULL;

/* Demangled: webrtc::VoiceDetectionImpl::set_stream_has_voice(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImpl20set_stream_has_voiceEb(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImpl20set_stream_has_voiceEb() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst(void) {
    ALOGD("_ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeReceiveBw */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeReceiveBw(void) {
    ALOGD("WebRtcIsac_EncodeReceiveBw() called");
    return 0;
}

/* Demangled: WebRtcVad_GaussianProbability */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_GaussianProbability(void) {
    ALOGD("WebRtcVad_GaussianProbability() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::MergeFrom(webrtc::audioproc::Init const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Init9MergeFromERKS1_() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Test_Frame */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc10Test_FrameE = NULL;

/* Demangled: webrtc::AudioProcessingImpl::Initialize(int, int, int, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::~RMSLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevelD1Ev(void) {
    ALOGD("_ZN6webrtc8RMSLevelD1Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeBandwidth */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeBandwidth(void) {
    ALOGD("WebRtcIsac_EncodeBandwidth() called");
    return 0;
}

/* Demangled: WebRtcSpl_ElementwiseVectorMult */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ElementwiseVectorMult(void) {
    ALOGD("WebRtcSpl_ElementwiseVectorMult() called");
    return 0;
}

/* Demangled: WebRtcAecm_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Create(void) {
    ALOGD("WebRtcAecm_Create() called");
    return 0;
}

/* Demangled: webrtc::FloatToFloatS16(float const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FloatToFloatS16EPKfjPf(void) {
    ALOGD("_ZN6webrtc15FloatToFloatS16EPKfjPf() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::num_proc_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecorrelateInterVec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecorrelateInterVec(void) {
    ALOGD("WebRtcIsac_DecorrelateInterVec() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Test_EchoMetrics */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc16Test_EchoMetricsE = NULL;

/* Demangled: webrtc::AudioProcessingImpl::StartDebugRecording(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEPKc(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEPKc() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQCdfTableSizeGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQCdfTableSizeGain = NULL;

/* Exported Object: WebRtcSpl_CrossCorrelation */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_CrossCorrelation = NULL;

/* Demangled: webrtc::Histogram::CurrentRms() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9Histogram10CurrentRmsEv(void) {
    ALOGD("_ZNK6webrtc9Histogram10CurrentRmsEv() called");
    return 0;
}

/* Demangled: webrtc::Histogram::Histogram(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9HistogramC2Ei(void) {
    ALOGD("_ZN6webrtc9HistogramC2Ei() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::SetPriority(rtc::ThreadPriority) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE(void) {
    ALOGD("_ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE() called");
    return 0;
}

/* Demangled: webrtc::Blocker::Blocker(unsigned int, unsigned int, unsigned int, unsigned int, float const*, unsigned int, webrtc::BlockerCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7BlockerC2EjjjjPKfjPNS_15BlockerCallbackE(void) {
    ALOGD("_ZN6webrtc7BlockerC2EjjjjPKfjPNS_15BlockerCallbackE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics(webrtc::audioproc::Test_DelayMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetricsC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetricsC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::ProcessRenderAudio(float* const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer18ProcessRenderAudioEPKPfij(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer18ProcessRenderAudioEPKPfij() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::enable_delay_logging(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl20enable_delay_loggingEb(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl20enable_delay_loggingEb() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::ConditionVariablePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosixC2Ev(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosixC2Ev() called");
    return 0;
}

/* Demangled: WebRtc_FreeDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_FreeDelayEstimator(void) {
    ALOGD("WebRtc_FreeDelayEstimator() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::SetTraceCallbackImpl(webrtc::TraceCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl20SetTraceCallbackImplEPNS_13TraceCallbackE(void) {
    ALOGD("_ZN6webrtc9TraceImpl20SetTraceCallbackImplEPNS_13TraceCallbackE() called");
    return 0;
}

/* Exported Object: scc_info_ReverseStream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_ReverseStream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto = NULL;

/* Demangled: webrtc::audioproc::OutputData::InternalSwap(webrtc::audioproc::OutputData*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData12InternalSwapEPS1_() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MaxAbsValueW32 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxAbsValueW32 = NULL;

/* Demangled: WebRtcVad_CalcVad16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad16khz(void) {
    ALOGD("WebRtcVad_CalcVad16khz() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferC2Ei(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferC2Ei() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeLpc */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeLpc(void) {
    ALOGD("WebRtcIsac_DecodeLpc() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf4Mid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf4Mid = NULL;

/* Demangled: webrtc::FileWrapperImpl::Read(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl4ReadEPvj(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl4ReadEPvj() called");
    return 0;
}

/* Demangled: WebRtcAgc_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_Free(void) {
    ALOGD("WebRtcAgc_Free() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::a_nlp(webrtc::audioproc::Test_EchoMetrics const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal5a_nlpEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics9_Internal5a_nlpEPKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetricsC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetricsC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::num_output_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::aec_core() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl8aec_coreEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl8aec_coreEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeLb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeLb(void) {
    ALOGD("WebRtcIsac_EncodeLb() called");
    return 0;
}

/* Demangled: webrtc::Trace::CreateTrace() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace11CreateTraceEv(void) {
    ALOGD("_ZN6webrtc5Trace11CreateTraceEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::ProcessRenderAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl18ProcessRenderAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl18ProcessRenderAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: WebRtc_AddBinaryFarSpectrum */
extern "C" __attribute__((visibility("default"))) int WebRtc_AddBinaryFarSpectrum(void) {
    ALOGD("WebRtc_AddBinaryFarSpectrum() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::target_level_dbfs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl17target_level_dbfsEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl17target_level_dbfsEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeLeftRecPointUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeLeftRecPointUb12 = NULL;

/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC2Eiij(void) {
    ALOGD("_ZN6webrtc9ResamplerC2Eiij() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::data_f() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer6data_fEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer6data_fEv() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::Enable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImpl6EnableEb(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImpl6EnableEb() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: WebRtcAec_GetEchoStats */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_GetEchoStats(void) {
    ALOGD("WebRtcAec_GetEchoStats() called");
    return 0;
}

/* Demangled: WebRtcAec_GetSkew */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_GetSkew(void) {
    ALOGD("WebRtcAec_GetSkew() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::residual_echo_return_loss(webrtc::audioproc::Test_EchoMetrics const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal25residual_echo_return_lossEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics9_Internal25residual_echo_return_lossEPKS1_() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::~CriticalSection() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CriticalSectionD1Ev(void) {
    ALOGD("_ZN3rtc15CriticalSectionD1Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_Spec2time */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Spec2time(void) {
    ALOGD("WebRtcIsac_Spec2time() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncSampRate */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncSampRate(void) {
    ALOGD("WebRtcIsac_EncSampRate() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl19ProcessCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::UpdatePrior(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVad11UpdatePriorEd(void) {
    ALOGD("_ZN6webrtc13PitchBasedVad11UpdatePriorEd() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeLpcGainUb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeLpcGainUb(void) {
    ALOGD("WebRtcIsac_EncodeLpcGainUb() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdfPtrHi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdfPtrHi = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeLeftRecPointUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeLeftRecPointUb16 = NULL;

/* Demangled: WebRtcSpl_SqrtLocal */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_SqrtLocal(void) {
    ALOGD("WebRtcSpl_SqrtLocal() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecorrelateLPGain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecorrelateLPGain(void) {
    ALOGD("WebRtcIsac_DecorrelateLPGain() called");
    return 0;
}

/* Demangled: WebRtcSpl_ZerosArrayW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ZerosArrayW16(void) {
    ALOGD("WebRtcSpl_ZerosArrayW16() called");
    return 0;
}

/* Demangled: webrtc::Histogram::Histogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9HistogramC2Ev(void) {
    ALOGD("_ZN6webrtc9HistogramC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::~AudioRingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBufferD1Ev(void) {
    ALOGD("_ZN6webrtc15AudioRingBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::num_handles() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19ProcessingComponent11num_handlesEv(void) {
    ALOGD("_ZNK6webrtc19ProcessingComponent11num_handlesEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeGain2 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeGain2(void) {
    ALOGD("WebRtcIsac_DecodeGain2() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Reset(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Resampler5ResetEiij(void) {
    ALOGD("_ZN6webrtc9Resampler5ResetEiij() called");
    return 0;
}

/* Demangled: rtc::TryCritScope::locked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc12TryCritScope6lockedEv(void) {
    ALOGD("_ZNK3rtc12TryCritScope6lockedEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::InitDelaySumMasks() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer17InitDelaySumMasksEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer17InitDelaySumMasksEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_UpdateUplinkJitter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_UpdateUplinkJitter(void) {
    ALOGD("WebRtcIsac_UpdateUplinkJitter() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::Update(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNode6UpdateEPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNode6UpdateEPKfj() called");
    return 0;
}

/* Demangled: WebRtcVad_CalcVad48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad48khz(void) {
    ALOGD("WebRtcVad_CalcVad48khz() called");
    return 0;
}

/* Demangled: WebRtcIsacBw_SetBandwidthInfo */
extern "C" __attribute__((visibility("default"))) int WebRtcIsacBw_SetBandwidthInfo(void) {
    ALOGD("WebRtcIsacBw_SetBandwidthInfo() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::InternalSwap(webrtc::audioproc::Test_DelayMetrics*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics12InternalSwapEPS1_() called");
    return 0;
}

/* Exported Object: WebRtcAec_FilterFar */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_FilterFar = NULL;

/* Demangled: webrtc::audioproc::ReverseStream::~ReverseStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStreamD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStreamD0Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStream(webrtc::AudioFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPNS_10AudioFrameE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPNS_10AudioFrameE() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::stream_has_echo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl15stream_has_echoEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl15stream_has_echoEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::DestroyHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc15GainControlImpl13DestroyHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc15GainControlImpl13DestroyHandleEPv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf1Hi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf1Hi = NULL;

/* Demangled: WebRtcSpl_ResetResample16khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample16khzTo22khz(void) {
    ALOGD("WebRtcSpl_ResetResample16khzTo22khz() called");
    return 0;
}

/* Demangled: webrtc::LogMessage::Loggable(webrtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10LogMessage8LoggableENS_15LoggingSeverityE(void) {
    ALOGD("_ZN6webrtc10LogMessage8LoggableENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::SplitIntoFrequencyBands() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst(void) {
    ALOGD("_ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst() called");
    return 0;
}

/* Demangled: rtc::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageD2Ev(void) {
    ALOGD("_ZN3rtc10LogMessageD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::ReadFramesAvailable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15AudioRingBuffer19ReadFramesAvailableEv(void) {
    ALOGD("_ZNK6webrtc15AudioRingBuffer19ReadFramesAvailableEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::FileWrapper::Rewind() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc11FileWrapper6RewindEv(void) {
    ALOGD("_ZThn4_N6webrtc11FileWrapper6RewindEv() called");
    return 0;
}

/* Exported Object: cftmdl_wk1r */
extern "C" __attribute__((visibility("default"))) void* cftmdl_wk1r = NULL;

/* Exported Object: webrtc::NonlinearBeamformer::kHalfBeamWidthRadians */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc19NonlinearBeamformer21kHalfBeamWidthRadiansE = NULL;

/* Demangled: void std::__1::__nth_element<std::__1::__less<float, float>&, float*>(float*, float*, float*, std::__1::__less<float, float>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__nth_elementIRNS_6__lessIffEEPfEEvT0_S5_S5_T_(void) {
    ALOGD("_ZNSt3__113__nth_elementIRNS_6__lessIffEEPfEEvT0_S5_S5_T_() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitializePitch */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitializePitch(void) {
    ALOGD("WebRtcIsac_InitializePitch() called");
    return 0;
}

/* Demangled: WebRtcSpl_RealForwardFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RealForwardFFT(void) {
    ALOGD("WebRtcSpl_RealForwardFFT() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::set_routing_mode(webrtc::EchoControlMobile::RoutingMode) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS_17EchoControlMobile11RoutingModeE(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS_17EchoControlMobile11RoutingModeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::CreateHandle() const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc15GainControlImpl12CreateHandleEv(void) {
    ALOGD("_ZThn4_NK6webrtc15GainControlImpl12CreateHandleEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::InitDiffuseCovMats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer18InitDiffuseCovMatsEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer18InitDiffuseCovMatsEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncHistMulti */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncHistMulti(void) {
    ALOGD("WebRtcIsac_EncHistMulti() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample22khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample22khzTo8khz(void) {
    ALOGD("WebRtcSpl_ResetResample22khzTo8khz() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc14Test_Statistic24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc14Test_Statistic24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::num_frames_per_band() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer19num_frames_per_bandEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer19num_frames_per_bandEv() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::ProcessMuted(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevel12ProcessMutedEj(void) {
    ALOGD("_ZN6webrtc8RMSLevel12ProcessMutedEj() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::Resample(unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler8ResampleEjPf(void) {
    ALOGD("_ZN6webrtc13SincResampler8ResampleEjPf() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Stream13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc6Stream13SetCachedSizeEi() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltOffsetShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltOffsetShape = NULL;

/* Demangled: webrtc::AudioBuffer::channels_const_f() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer16channels_const_fEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer16channels_const_fEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kKltT2Shape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kKltT2Shape = NULL;

/* Demangled: webrtc::audioproc::Test::MergeFrom(webrtc::audioproc::Test const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Test9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: rtc::hex_encode_with_delimiter(char*, unsigned int, char const*, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc25hex_encode_with_delimiterEPcjPKcjc(void) {
    ALOGD("_ZN3rtc25hex_encode_with_delimiterEPcjPKcjc() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::~Test_Statistic() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_StatisticD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_StatisticD1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10OutputData24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc10OutputData24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::LevelEstimatorImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImplC1EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImplC1EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: webrtc::CriticalSectionPosix::~CriticalSectionPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CriticalSectionPosixD1Ev(void) {
    ALOGD("_ZN6webrtc20CriticalSectionPosixD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::Beamforming const& webrtc::Config::default_value<webrtc::Beamforming>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_11BeamformingEEERKT_vE3def = NULL;

/* Demangled: rtc::TryCritScope::~TryCritScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12TryCritScopeD1Ev(void) {
    ALOGD("_ZN3rtc12TryCritScopeD1Ev() called");
    return 0;
}

/* Demangled: rtc::TimeMicros() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10TimeMicrosEv(void) {
    ALOGD("_ZN3rtc10TimeMicrosEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetLpcCoefUb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetLpcCoefUb(void) {
    ALOGD("WebRtcIsac_GetLpcCoefUb() called");
    return 0;
}

/* Demangled: WebRtcIsac_Poly2Rc */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Poly2Rc(void) {
    ALOGD("WebRtcIsac_Poly2Rc() called");
    return 0;
}

/* Demangled: webrtc::Trace::Add(webrtc::TraceLevel, webrtc::TraceModule, int, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace3AddENS_10TraceLevelENS_11TraceModuleEiPKcz(void) {
    ALOGD("_ZN6webrtc5Trace3AddENS_10TraceLevelENS_11TraceModuleEiPKcz() called");
    return 0;
}

/* Demangled: webrtc::Trace::TraceFile(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace9TraceFileEPc(void) {
    ALOGD("_ZN6webrtc5Trace9TraceFileEPc() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::CopyFrom(webrtc::audioproc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6Config8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::EventTracer::GetCategoryEnabled(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11EventTracer18GetCategoryEnabledEPKc(void) {
    ALOGD("_ZN6webrtc11EventTracer18GetCategoryEnabledEPKc() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::AudioRingBuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBufferC1Ejj(void) {
    ALOGD("_ZN6webrtc15AudioRingBufferC1Ejj() called");
    return 0;
}

/* Demangled: std::__1::vector<int*, std::__1::allocator<int*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPiNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPiNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: WebRtcAec_set_config */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_set_config(void) {
    ALOGD("WebRtcAec_set_config() called");
    return 0;
}

/* Demangled: WebRtc_AddFarSpectrumFloat */
extern "C" __attribute__((visibility("default"))) int WebRtc_AddFarSpectrumFloat(void) {
    ALOGD("WebRtc_AddFarSpectrumFloat() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::timestamp_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage10timestamp_E = NULL;

/* Demangled: WebRtcSpl_ComplexFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ComplexFFT(void) {
    ALOGD("WebRtcSpl_ComplexFFT() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::~Test_Frame() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_FrameD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_FrameD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::data() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer4dataEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer4dataEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::GainControlImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void) {
    ALOGD("_ZN6webrtc15GainControlImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::echo_control_mobile() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl19echo_control_mobileEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl19echo_control_mobileEv() called");
    return 0;
}

/* Demangled: rtc::Event::Event(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventC2Ebb(void) {
    ALOGD("_ZN3rtc5EventC2Ebb() called");
    return 0;
}

/* Demangled: WebRtcIsac_Encode */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Encode(void) {
    ALOGD("WebRtcIsac_Encode() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::GetTrace(webrtc::TraceLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl8GetTraceENS_10TraceLevelE(void) {
    ALOGD("_ZN6webrtc9TraceImpl8GetTraceENS_10TraceLevelE() called");
    return 0;
}

/* Demangled: WebRtcAgc_InitDigital */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_InitDigital(void) {
    ALOGD("WebRtcAgc_InitDigital() called");
    return 0;
}

/* Exported Object: webrtc::DelayAgnostic const& webrtc::Config::default_value<webrtc::DelayAgnostic>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_13DelayAgnosticEEERKT_vE3def = NULL;

/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcD2Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcD2Ev() called");
    return 0;
}

/* Demangled: webrtc::RealFourier::ComplexLength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RealFourier13ComplexLengthEi(void) {
    ALOGD("_ZN6webrtc11RealFourier13ComplexLengthEi() called");
    return 0;
}

/* Demangled: WebRtc_DelayEstimatorProcessFloat */
extern "C" __attribute__((visibility("default"))) int WebRtc_DelayEstimatorProcessFloat(void) {
    ALOGD("WebRtc_DelayEstimatorProcessFloat() called");
    return 0;
}

/* Demangled: WebRtcAecm_UpdateFarHistory */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_UpdateFarHistory(void) {
    ALOGD("WebRtcAecm_UpdateFarHistory() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event_Type_Name(webrtc::audioproc::Event_Type) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc15Event_Type_NameENS0_10Event_TypeE(void) {
    ALOGD("_ZN6webrtc9audioproc15Event_Type_NameENS0_10Event_TypeE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::OutputData(webrtc::audioproc::OutputData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputDataC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputDataC1ERKS1_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag2Mid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag2Mid = NULL;

/* Exported Object: WebRtcIsac_kQArRc5Cdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc5Cdf = NULL;

/* Demangled: webrtc::audioproc::Event::Event() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5EventC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc5EventC2Ev() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::AllocateRenderQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl19AllocateRenderQueueEv(void) {
    ALOGD("_ZN6webrtc15GainControlImpl19AllocateRenderQueueEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc15GainControlImpl10InitializeEv(void) {
    ALOGD("_ZThn4_N6webrtc15GainControlImpl10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::RMS() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevel3RMSEv(void) {
    ALOGD("_ZN6webrtc8RMSLevel3RMSEv() called");
    return 0;
}

/* Demangled: webrtc::WindowGenerator::KaiserBesselDerived(float, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15WindowGenerator19KaiserBesselDerivedEfjPf(void) {
    ALOGD("_ZN6webrtc15WindowGenerator19KaiserBesselDerivedEfjPf() called");
    return 0;
}

/* Demangled: webrtc::RealFourier::FftLength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RealFourier9FftLengthEi(void) {
    ALOGD("_ZN6webrtc11RealFourier9FftLengthEi() called");
    return 0;
}

/* Demangled: android_setCpu */
extern "C" __attribute__((visibility("default"))) int android_setCpu(void) {
    ALOGD("android_setCpu() called");
    return 0;
}

/* Demangled: webrtc::ValidAlignment(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14ValidAlignmentEj(void) {
    ALOGD("_ZN6webrtc14ValidAlignmentEj() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::HighPassFilterImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImplC1EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImplC1EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterC::Filter(float const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10FIRFilterC6FilterEPKfjPf(void) {
    ALOGD("_ZN6webrtc10FIRFilterC6FilterEPKfjPf() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterC::FIRFilterC(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10FIRFilterCC2EPKfj(void) {
    ALOGD("_ZN6webrtc10FIRFilterCC2EPKfj() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeFrameLen */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeFrameLen(void) {
    ALOGD("WebRtcIsac_EncodeFrameLen() called");
    return 0;
}

/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12FatalMessageC1EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc12FatalMessageC1EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10LogMessageD2Ev(void) {
    ALOGD("_ZN6webrtc10LogMessageD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic(webrtc::audioproc::Test_Statistic const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_StatisticC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_StatisticC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::DotProduct(float const*, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer10DotProductEPKfS2_j(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer10DotProductEPKfS2_j() called");
    return 0;
}

/* Demangled: WebRtcIsac_RemoveLarMean */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_RemoveLarMean(void) {
    ALOGD("WebRtcIsac_RemoveLarMean() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::SortKey<signed char>*, std::__1::allocator<webrtc::SortKey<signed char>*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc7SortKeyIaEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc7SortKeyIaEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::VoiceDetectionImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImplC1EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImplC1EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::UpModulate(float const* const*, unsigned int, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBank10UpModulateEPKPKfjjPf(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBank10UpModulateEPKPKfjjPf() called");
    return 0;
}

/* Demangled: WebRtcAec_MoveFarReadPtr */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_MoveFarReadPtr(void) {
    ALOGD("WebRtcAec_MoveFarReadPtr() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::ReadQueuedRenderData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl20ReadQueuedRenderDataEv(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl20ReadQueuedRenderDataEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_LPBy2IntToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_LPBy2IntToInt(void) {
    ALOGD("WebRtcSpl_LPBy2IntToInt() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic5ClearEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_AnalysisQMF */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AnalysisQMF(void) {
    ALOGD("WebRtcSpl_AnalysisQMF() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArBoundaryLevels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArBoundaryLevels = NULL;

/* Exported Object: WebRtcIsac_kQKltModelInitIndex */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltModelInitIndex = NULL;

/* Demangled: WebRtcSpl_GetHanningWindow */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_GetHanningWindow(void) {
    ALOGD("WebRtcSpl_GetHanningWindow() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_FrameC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_FrameC1Ev() called");
    return 0;
}

/* Demangled: rtc::CritScope::~CritScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9CritScopeD1Ev(void) {
    ALOGD("_ZN3rtc9CritScopeD1Ev() called");
    return 0;
}

/* Exported Object: webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def = NULL;

/* Demangled: webrtc::GainControlImpl::GainControlImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void) {
    ALOGD("_ZN6webrtc15GainControlImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQInitIndexLagLo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQInitIndexLagLo = NULL;

/* Demangled: webrtc::RWLockPosix::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosix4InitEv(void) {
    ALOGD("_ZN6webrtc11RWLockPosix4InitEv() called");
    return 0;
}

/* Exported Object: WebRtcAecm_CalcLinearEnergies */
extern "C" __attribute__((visibility("default"))) void* WebRtcAecm_CalcLinearEnergies = NULL;

/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream(webrtc::audioproc::ReverseStream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStreamC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStreamC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::~TransientSuppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressorD1Ev(void) {
    ALOGD("_ZN6webrtc19TransientSuppressorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::is_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl10is_enabledEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl10is_enabledEv() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::~NoiseSuppressionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImplD0Ev(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImplD0Ev() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::Rms(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc3RmsEPdj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc3RmsEPdj() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcC1Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::AudioConverter(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AudioConverterC2Ejjjj(void) {
    ALOGD("_ZN6webrtc14AudioConverterC2Ejjjj() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPre */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPre(void) {
    ALOGD("WebRtcIsac_PitchfilterPre() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc14Test_Statistic11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc14Test_Statistic11GetTypeNameEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kIintraVecDecorrMatUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kIintraVecDecorrMatUb16 = NULL;

/* Exported Object: WebRtcIsac_kFrameLengthCdf_ptr */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kFrameLengthCdf_ptr = NULL;

/* Demangled: webrtc::Agc::set_target_level_dbfs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc21set_target_level_dbfsEi(void) {
    ALOGD("_ZN6webrtc3Agc21set_target_level_dbfsEi() called");
    return 0;
}

/* Demangled: WebRtcNsx_InitCore */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_InitCore(void) {
    ALOGD("WebRtcNsx_InitCore() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::~TraceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImplD1Ev(void) {
    ALOGD("_ZN6webrtc9TraceImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect10InitializeEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::~OutputData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputDataD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputDataD0Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::EchoControlMobile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc17EchoControlMobileE = NULL;

/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplD2Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplD2Ev() called");
    return 0;
}

/* Demangled: WebRtc_SoftResetDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_SoftResetDelayEstimatorFarend(void) {
    ALOGD("WebRtc_SoftResetDelayEstimatorFarend() called");
    return 0;
}

/* Exported Object: vtable for webrtc::GainControlImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc15GainControlImplE = NULL;

/* Demangled: rtc::FindLabel(int, rtc::ConstantLabel const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9FindLabelEiPKNS_13ConstantLabelE(void) {
    ALOGD("_ZN3rtc9FindLabelEiPKNS_13ConstantLabelE() called");
    return 0;
}

/* Demangled: WebRtcAec_GetMetrics */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_GetMetrics(void) {
    ALOGD("WebRtcAec_GetMetrics() called");
    return 0;
}

/* Exported Object: WebRtcAec_sqrtHanning */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_sqrtHanning = NULL;

/* Demangled: webrtc::audioproc::Config::Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6ConfigC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6ConfigC2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc17Test_DelayMetrics13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc17Test_DelayMetrics13IsInitializedEv() called");
    return 0;
}

/* Demangled: rtc::split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: void webrtc::DownmixInterleavedToMono<short>(short const*, unsigned int, int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_(void) {
    ALOGD("_ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_() called");
    return 0;
}

/* Demangled: webrtc::IFChannelBuffer::RefreshI() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15IFChannelBuffer8RefreshIEv(void) {
    ALOGD("_ZNK6webrtc15IFChannelBuffer8RefreshIEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_FilterAndCombineFloat */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_FilterAndCombineFloat(void) {
    ALOGD("WebRtcIsac_FilterAndCombineFloat() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kInterVecDecorrMatUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kInterVecDecorrMatUb12 = NULL;

/* Demangled: WebRtcSpl_Energy */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Energy(void) {
    ALOGD("WebRtcSpl_Energy() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10OutputData13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc10OutputData13IsInitializedEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::num_handles_required() const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc21EchoControlMobileImpl20num_handles_requiredEv(void) {
    ALOGD("_ZThn4_NK6webrtc21EchoControlMobileImpl20num_handles_requiredEv() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::~HighPassFilterImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImplD2Ev(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImplD2Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_AssignSize */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AssignSize(void) {
    ALOGD("WebRtcIsac_AssignSize() called");
    return 0;
}

/* Demangled: WebRtcIsac_SetMaxRate */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SetMaxRate(void) {
    ALOGD("WebRtcIsac_SetMaxRate() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::analysis_needed(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15analysis_neededEb(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15analysis_neededEb() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::are_metrics_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl19are_metrics_enabledEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl19are_metrics_enabledEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::ConfigureHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc20EchoCancellationImpl15ConfigureHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc20EchoCancellationImpl15ConfigureHandleEPv() called");
    return 0;
}

/* Demangled: rtc::tracing::StartInternalCapture(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing20StartInternalCaptureEPKc(void) {
    ALOGD("_ZN3rtc7tracing20StartInternalCaptureEPKc() called");
    return 0;
}

/* Demangled: WebRtcSpl_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Init(void) {
    ALOGD("WebRtcSpl_Init() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::NoiseSuppressionImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImplC1EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImplC1EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: WebRtcIsac_ResetBitstream */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_ResetBitstream(void) {
    ALOGD("WebRtcIsac_ResetBitstream() called");
    return 0;
}

/* Demangled: WebRtcIsac_Lar2PolyInterpolUB */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Lar2PolyInterpolUB(void) {
    ALOGD("WebRtcIsac_Lar2PolyInterpolUB() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_Statistic>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc14Test_StatisticEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc14Test_StatisticEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilterC2EPKfjS2_j(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilterC2EPKfjS2_j() called");
    return 0;
}

/* Demangled: webrtc::RealFourierOoura::RealFourierOoura(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16RealFourierOouraC2Ei(void) {
    ALOGD("_ZN6webrtc16RealFourierOouraC2Ei() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kInterVecDecorrMatUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kInterVecDecorrMatUb16 = NULL;

/* Exported Object: WebRtcIsac_kQKltQuantMinGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltQuantMinGain = NULL;

/* Demangled: webrtc::FileWrapperImpl::FlushImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl9FlushImplEv(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl9FlushImplEv() called");
    return 0;
}

/* Demangled: rtc::FdopenPlatformFileForWriting(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc28FdopenPlatformFileForWritingEi(void) {
    ALOGD("_ZN3rtc28FdopenPlatformFileForWritingEi() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImplD1Ev(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImplD1Ev() called");
    return 0;
}

/* Demangled: rtc::GlobalLockPod::Unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13GlobalLockPod6UnlockEv(void) {
    ALOGD("_ZN3rtc13GlobalLockPod6UnlockEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetDownLinkBwIndex */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetDownLinkBwIndex(void) {
    ALOGD("WebRtcIsac_GetDownLinkBwIndex() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf4Lo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf4Lo = NULL;

/* Demangled: webrtc::audioproc::Config::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc6Config5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE(void) {
    ALOGD("_ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE() called");
    return 0;
}

/* Demangled: WebRtcAec_SetSystemDelay */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_SetSystemDelay(void) {
    ALOGD("WebRtcAec_SetSystemDelay() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc13ReverseStream12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc13ReverseStream12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: webrtc::SparseFIRFilter::SparseFIRFilter(float const*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SparseFIRFilterC1EPKfjjj(void) {
    ALOGD("_ZN6webrtc15SparseFIRFilterC1EPKfjjj() called");
    return 0;
}

/* Demangled: webrtc::AzimuthToPoint(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AzimuthToPointEf(void) {
    ALOGD("_ZN6webrtc14AzimuthToPointEf() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::AcquireLockExclusive() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosix20AcquireLockExclusiveEv(void) {
    ALOGD("_ZN6webrtc11RWLockPosix20AcquireLockExclusiveEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::StreamConfig const&, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf(void) {
    ALOGD("_ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxAbsIndexW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxAbsIndexW16(void) {
    ALOGD("WebRtcSpl_MaxAbsIndexW16() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::DestroyHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl13DestroyHandleEPv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl13DestroyHandleEPv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::EchoControlMobileImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc21EchoControlMobileImplE = NULL;

/* Demangled: webrtc::GainControlImpl::stream_is_saturated() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl19stream_is_saturatedEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl19stream_is_saturatedEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::~Test_EchoMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetricsD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetricsD2Ev() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::Initialize(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor10InitializeEiii(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor10InitializeEiii() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event_Type_Parse(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, webrtc::audioproc::Event_Type*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Event_Type_ParseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS0_10Event_TypeE(void) {
    ALOGD("_ZN6webrtc9audioproc16Event_Type_ParseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS0_10Event_TypeE() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::Leave() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CriticalSection5LeaveEv(void) {
    ALOGD("_ZN3rtc15CriticalSection5LeaveEv() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::log_to_stderr_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage14log_to_stderr_E = NULL;

/* Demangled: rtc::hex_encode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::complex<float> std::__1::sqrt<float>(std::__1::complex<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14sqrtIfEENS_7complexIT_EERKS3_(void) {
    ALOGD("_ZNSt3__14sqrtIfEENS_7complexIT_EERKS3_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagStepsizeHi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagStepsizeHi = NULL;

/* Demangled: webrtc::AudioBuffer::CopyLowPassToReference() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer22CopyLowPassToReferenceEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer22CopyLowPassToReferenceEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_CopyFromEndW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_CopyFromEndW16(void) {
    ALOGD("WebRtcSpl_CopyFromEndW16() called");
    return 0;
}

/* Demangled: WebRtcSpl_LPBy2ShortToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_LPBy2ShortToInt(void) {
    ALOGD("WebRtcSpl_LPBy2ShortToInt() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_EchoMetrics>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc16Test_EchoMetricsEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc16Test_EchoMetricsEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::synthesis_needed(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl16synthesis_neededEb(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl16synthesis_neededEb() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::stream_has_voice() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18VoiceDetectionImpl16stream_has_voiceEv(void) {
    ALOGD("_ZNK6webrtc18VoiceDetectionImpl16stream_has_voiceEv() called");
    return 0;
}

/* Demangled: WebRtc_binary_last_delay */
extern "C" __attribute__((visibility("default"))) int WebRtc_binary_last_delay(void) {
    ALOGD("WebRtc_binary_last_delay() called");
    return 0;
}

/* Demangled: WebRtcIsac_version */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_version(void) {
    ALOGD("WebRtcIsac_version() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::~VoiceDetectionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImplD2Ev(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImplD2Ev() called");
    return 0;
}

/* Demangled: WebRtc_CreateBinaryDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_CreateBinaryDelayEstimatorFarend(void) {
    ALOGD("WebRtc_CreateBinaryDelayEstimatorFarend() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::ProcessAudioBlock(std::__1::complex<float> const* const*, unsigned int, unsigned int, unsigned int, std::__1::complex<float>* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::InitializeKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler16InitializeKernelEv(void) {
    ALOGD("_ZN6webrtc13SincResampler16InitializeKernelEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ScaleAndAddVectorsWithRoundC */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleAndAddVectorsWithRoundC(void) {
    ALOGD("WebRtcSpl_ScaleAndAddVectorsWithRoundC() called");
    return 0;
}

/* Demangled: webrtc::Atomic32::CompareExchange(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic3215CompareExchangeEii(void) {
    ALOGD("_ZN6webrtc8Atomic3215CompareExchangeEii() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessing::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioProcessing6CreateEv(void) {
    ALOGD("_ZN6webrtc15AudioProcessing6CreateEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::__map_value_compare<webrtc::ConfigOptionID, std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::less<webrtc::ConfigOptionID>, true>, std::__1::allocator<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kMeanLarUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kMeanLarUb12 = NULL;

/* Demangled: WebRtcSpl_VectorBitShiftW32ToW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_VectorBitShiftW32ToW16(void) {
    ALOGD("WebRtcSpl_VectorBitShiftW32ToW16() called");
    return 0;
}

/* Demangled: WebRtcAec_enable_delay_agnostic */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_enable_delay_agnostic(void) {
    ALOGD("WebRtcAec_enable_delay_agnostic() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeLevelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl24InitializeLevelEstimatorEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl24InitializeLevelEstimatorEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetricsC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetricsC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeCapture(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::GetLpcPolynomials(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj() called");
    return 0;
}

/* Demangled: rtc::GlobalLockScope::GlobalLockScope(rtc::GlobalLockPod*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15GlobalLockScopeC1EPNS_13GlobalLockPodE(void) {
    ALOGD("_ZN3rtc15GlobalLockScopeC1EPNS_13GlobalLockPodE() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::MoveReadPositionBackward(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBuffer24MoveReadPositionBackwardEj(void) {
    ALOGD("_ZN6webrtc15AudioRingBuffer24MoveReadPositionBackwardEj() called");
    return 0;
}

/* Demangled: WebRtc_set_lookahead */
extern "C" __attribute__((visibility("default"))) int WebRtc_set_lookahead(void) {
    ALOGD("WebRtc_set_lookahead() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadD1Ev(void) {
    ALOGD("_ZN6webrtc13StandaloneVadD1Ev() called");
    return 0;
}

/* Demangled: rtc::hex_decode(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: WebRtcAecm_BufferFarFrame */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_BufferFarFrame(void) {
    ALOGD("WebRtcAecm_BufferFarFrame() called");
    return 0;
}

/* Exported Object: vtable for webrtc::ComplexMatrix<float> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13ComplexMatrixIfEE = NULL;

/* Exported Object: WebRtcIsac_kMeanLarUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kMeanLarUb16 = NULL;

/* Demangled: WebRtcIsac_ZeroPoleFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_ZeroPoleFilter(void) {
    ALOGD("WebRtcIsac_ZeroPoleFilter() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::CopyFrom(webrtc::audioproc::ReverseStream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArray5ClearEv(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArray5ClearEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ZerosArrayW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ZerosArrayW32(void) {
    ALOGD("WebRtcSpl_ZerosArrayW32() called");
    return 0;
}

/* Demangled: webrtc::CriticalSectionPosix::Leave() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CriticalSectionPosix5LeaveEv(void) {
    ALOGD("_ZN6webrtc20CriticalSectionPosix5LeaveEv() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsC2Ej(void) {
    ALOGD("_ZN6webrtc13MovingMomentsC2Ej() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeSpec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeSpec(void) {
    ALOGD("WebRtcIsac_DecodeSpec() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodePitchGain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodePitchGain(void) {
    ALOGD("WebRtcIsac_EncodePitchGain() called");
    return 0;
}

/* Demangled: WebRtcAgc_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_Create(void) {
    ALOGD("WebRtcAgc_Create() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6StreamD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6StreamD2Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_Poly2Lar */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Poly2Lar(void) {
    ALOGD("WebRtcIsac_Poly2Lar() called");
    return 0;
}

/* Exported Object: WebRtcAecm_ResetAdaptiveChannel */
extern "C" __attribute__((visibility("default"))) void* WebRtcAecm_ResetAdaptiveChannel = NULL;

/* Demangled: WebRtc_AddFarSpectrumFix */
extern "C" __attribute__((visibility("default"))) int WebRtc_AddFarSpectrumFix(void) {
    ALOGD("WebRtc_AddFarSpectrumFix() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeRender(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: webrtc::CovarianceMatrixGenerator::AngledCovarianceMatrix(float, float, unsigned int, unsigned int, unsigned int, int, std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::ComplexMatrix<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25CovarianceMatrixGenerator22AngledCovarianceMatrixEffjjjiRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE(void) {
    ALOGD("_ZN6webrtc25CovarianceMatrixGenerator22AngledCovarianceMatrixEffjjjiRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::AnalyzeClearBlock(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer17AnalyzeClearBlockEf(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer17AnalyzeClearBlockEf() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::ReverseStream>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc13ReverseStreamEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc13ReverseStreamEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::Test(webrtc::audioproc::Test const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4TestC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4TestC2ERKS1_() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::ConfigureHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc15GainControlImpl15ConfigureHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc15GainControlImpl15ConfigureHandleEPv() called");
    return 0;
}

/* Demangled: WebRtcAec_CreateAec */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_CreateAec(void) {
    ALOGD("WebRtcAec_CreateAec() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec1Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec1Ub12 = NULL;

/* Demangled: WebRtcVad_Downsampling */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Downsampling(void) {
    ALOGD("WebRtcVad_Downsampling() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_EchoMetrics>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc16Test_EchoMetricsEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc16Test_EchoMetricsEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadC2Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadC2Ev() called");
    return 0;
}

/* Demangled: rtc::DumpBacktrace() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13DumpBacktraceEv(void) {
    ALOGD("_ZN3rtc13DumpBacktraceEv() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::SolveForLambda(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer14SolveForLambdaEfff(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer14SolveForLambdaEfff() called");
    return 0;
}

/* Demangled: WebRtcSpl_UpBy2ShortToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpBy2ShortToInt(void) {
    ALOGD("WebRtcSpl_UpBy2ShortToInt() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::SetCaptureMuted(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc5Event27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::MergeFrom(webrtc::audioproc::OutputData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::StartDebugRecordingForPlatformFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl34StartDebugRecordingForPlatformFileEi(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl34StartDebugRecordingForPlatformFileEi() called");
    return 0;
}

/* Demangled: webrtc::ArePerpendicular(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16ArePerpendicularERKNS_14CartesianPointIfEES3_(void) {
    ALOGD("_ZN6webrtc16ArePerpendicularERKNS_14CartesianPointIfEES3_() called");
    return 0;
}

/* Demangled: WebRtcIsac_Rc2Lar */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Rc2Lar(void) {
    ALOGD("WebRtcIsac_Rc2Lar() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorC1Ei(void) {
    ALOGD("_ZN6webrtc17TransientDetectorC1Ei() called");
    return 0;
}

/* Demangled: WebRtcAecm_CalcEnergies */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_CalcEnergies(void) {
    ALOGD("WebRtcAecm_CalcEnergies() called");
    return 0;
}

/* Demangled: WebRtcAgc_get_config */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_get_config(void) {
    ALOGD("WebRtcAgc_get_config() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::ConfigureHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl15ConfigureHandleEPv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl15ConfigureHandleEPv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::InitializeHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl16InitializeHandleEPv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl16InitializeHandleEPv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::assign(unsigned int, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignEjRKi(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignEjRKi() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kIntraVecDecorrMatUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kIntraVecDecorrMatUb12 = NULL;

/* Demangled: WebRtcIsac_SetEncSampRate */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SetEncSampRate(void) {
    ALOGD("WebRtcIsac_SetEncSampRate() called");
    return 0;
}

/* Demangled: WebRtcAec_echo_state */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_echo_state(void) {
    ALOGD("WebRtcAec_echo_state() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::Config(webrtc::audioproc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6ConfigC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6ConfigC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::set_num_channels(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer16set_num_channelsEj(void) {
    ALOGD("_ZN6webrtc11AudioBuffer16set_num_channelsEj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec1Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec1Ub16 = NULL;

/* Demangled: webrtc::TransientDetector::~TransientDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorD2Ev(void) {
    ALOGD("_ZN6webrtc17TransientDetectorD2Ev() called");
    return 0;
}

/* Demangled: WebRtc_available_write */
extern "C" __attribute__((visibility("default"))) int WebRtc_available_write(void) {
    ALOGD("WebRtc_available_write() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4TestEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4TestEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: rtc::TimeIsBetween(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13TimeIsBetweenEjjj(void) {
    ALOGD("_ZN3rtc13TimeIsBetweenEjjj() called");
    return 0;
}

/* Demangled: WebRtcSpl_ReverseOrderMultArrayElements */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ReverseOrderMultArrayElements(void) {
    ALOGD("WebRtcSpl_ReverseOrderMultArrayElements() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_bands_const_f(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer19split_bands_const_fEj(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer19split_bands_const_fEj() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<int, int>(int const&, int const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17MakeCheckOpStringIiiEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void) {
    ALOGD("_ZN3rtc17MakeCheckOpStringIiiEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::suppression_level() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl17suppression_levelEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl17suppression_levelEv() called");
    return 0;
}

/* Demangled: WebRtc_CreateBinaryDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_CreateBinaryDelayEstimator(void) {
    ALOGD("WebRtc_CreateBinaryDelayEstimator() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::PlatformThread(bool (*)(void*), void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadC1EPFbPvES1_PKc(void) {
    ALOGD("_ZN3rtc14PlatformThreadC1EPFbPvES1_PKc() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample22khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample22khzTo16khz(void) {
    ALOGD("WebRtcSpl_Resample22khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6StreamC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6StreamC1Ev() called");
    return 0;
}

/* Exported Object: rtc::SystemInfo::logical_cpus_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10SystemInfo13logical_cpus_E = NULL;

/* Exported Object: vtable for webrtc::NonlinearBeamformer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19NonlinearBeamformerE = NULL;

/* Demangled: webrtc::audioproc::Init::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4InitC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4InitC2Ev() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::compression_gain_db() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl19compression_gain_dbEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl19compression_gain_dbEv() called");
    return 0;
}

/* Demangled: rtc::make_char_safe_for_filename(char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc27make_char_safe_for_filenameEc(void) {
    ALOGD("_ZN3rtc27make_char_safe_for_filenameEc() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc4Levels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc4Levels = NULL;

/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStreamLocked(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AudioProcessingImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19AudioProcessingImplE = NULL;

/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetectorC2Ev(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetectorC2Ev() called");
    return 0;
}

/* Demangled: rtc::TmToSeconds(tm const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11TmToSecondsERK2tm(void) {
    ALOGD("_ZN3rtc11TmToSecondsERK2tm() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobile::echo_path_size_bytes() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17EchoControlMobile20echo_path_size_bytesEv(void) {
    ALOGD("_ZN6webrtc17EchoControlMobile20echo_path_size_bytesEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeLpcLb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeLpcLb(void) {
    ALOGD("WebRtcIsac_EncodeLpcLb() called");
    return 0;
}

/* Demangled: webrtc::Trace::SetTraceCallback(webrtc::TraceCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace16SetTraceCallbackEPNS_13TraceCallbackE(void) {
    ALOGD("_ZN6webrtc5Trace16SetTraceCallbackEPNS_13TraceCallbackE() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::~ConditionVariablePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosixD0Ev(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosixD0Ev() called");
    return 0;
}

/* Exported Object: cftfsub_128 */
extern "C" __attribute__((visibility("default"))) void* cftfsub_128 = NULL;

/* Demangled: webrtc::SplittingFilter::Synthesis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter9SynthesisEPKNS_15IFChannelBufferEPS1_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter9SynthesisEPKNS_15IFChannelBufferEPS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplD0Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplD0Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::set_stream_drift_samples(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl24set_stream_drift_samplesEi(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl24set_stream_drift_samplesEi() called");
    return 0;
}

/* Demangled: WebRtcAec_BufferFarendPartition */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_BufferFarendPartition(void) {
    ALOGD("WebRtcAec_BufferFarendPartition() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::EnableComponent(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponent15EnableComponentEb(void) {
    ALOGD("_ZN6webrtc19ProcessingComponent15EnableComponentEb() called");
    return 0;
}

/* Demangled: rtc::GlobalLockScope::~GlobalLockScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15GlobalLockScopeD1Ev(void) {
    ALOGD("_ZN3rtc15GlobalLockScopeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::TracePosix */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc10TracePosixE = NULL;

/* Demangled: webrtc::audioproc::Test_DelayMetrics::~Test_DelayMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetricsD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetricsD0Ev() called");
    return 0;
}

/* Exported Object: webrtc::Beamforming const& webrtc::Config::default_value<webrtc::Beamforming>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_11BeamformingEEERKT_vE3def = NULL;

/* Demangled: webrtc::TransientDetector::Detect(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetector6DetectEPKfjS2_j(void) {
    ALOGD("_ZN6webrtc17TransientDetector6DetectEPKfjS2_j() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_data_f() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer12split_data_fEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer12split_data_fEv() called");
    return 0;
}

/* Demangled: webrtc::Resampler::~Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerD2Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::CreateFileName(char const*, char*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9TraceImpl14CreateFileNameEPKcPcj(void) {
    ALOGD("_ZNK6webrtc9TraceImpl14CreateFileNameEPKcPcj() called");
    return 0;
}

/* Demangled: webrtc::Histogram::RemoveOldestEntryAndUpdate() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram26RemoveOldestEntryAndUpdateEv(void) {
    ALOGD("_ZN6webrtc9Histogram26RemoveOldestEntryAndUpdateEv() called");
    return 0;
}

/* Demangled: webrtc::RealFourier::Create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RealFourier6CreateEi(void) {
    ALOGD("_ZN6webrtc11RealFourier6CreateEi() called");
    return 0;
}

/* Demangled: WebRtcIsac_AllPoleFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AllPoleFilter(void) {
    ALOGD("WebRtcIsac_AllPoleFilter() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::AnalyzeCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::IsLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc15CriticalSection8IsLockedEv(void) {
    ALOGD("_ZNK3rtc15CriticalSection8IsLockedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_() called");
    return 0;
}

/* Demangled: WebRtcIsac_UpdateUplinkBwImpl */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_UpdateUplinkBwImpl(void) {
    ALOGD("WebRtcIsac_UpdateUplinkBwImpl() called");
    return 0;
}

/* Demangled: WebRtcSpl_SqrtOfOneMinusXSquared */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_SqrtOfOneMinusXSquared(void) {
    ALOGD("WebRtcSpl_SqrtOfOneMinusXSquared() called");
    return 0;
}

/* Exported Object: vtable for webrtc::EchoCancellationImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc20EchoCancellationImplE = NULL;

/* Demangled: webrtc::SplittingFilter::TwoBandsSynthesis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_15IFChannelBufferEPS1_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_15IFChannelBufferEPS1_() called");
    return 0;
}

/* Demangled: WebRtc_ReadBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_ReadBuffer(void) {
    ALOGD("WebRtc_ReadBuffer() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRcCdfPtr */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRcCdfPtr = NULL;

/* Exported Object: scc_info_Test_Statistic_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Test_Statistic_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto = NULL;

/* Demangled: webrtc::FloatS16ToFloat(float const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FloatS16ToFloatEPKfjPf(void) {
    ALOGD("_ZN6webrtc15FloatS16ToFloatEPKfjPf() called");
    return 0;
}

/* Exported Object: webrtc::AudioProcessing::kMaxAECMSampleRateHz */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15AudioProcessing20kMaxAECMSampleRateHzE = NULL;

/* Demangled: rtc::GlobalLock::GlobalLock() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10GlobalLockC2Ev(void) {
    ALOGD("_ZN3rtc10GlobalLockC2Ev() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::UpdateRegions(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler13UpdateRegionsEb(void) {
    ALOGD("_ZN6webrtc13SincResampler13UpdateRegionsEb() called");
    return 0;
}

/* Exported Object: WebRtcAec_StoreAsComplex */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_StoreAsComplex = NULL;

/* Demangled: webrtc::GainControlImpl::InitializeHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl16InitializeHandleEPv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl16InitializeHandleEPv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc1Cdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc1Cdf = NULL;

/* Demangled: WebRtcAec_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_Init(void) {
    ALOGD("WebRtcAec_Init() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Init12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc4Init12ByteSizeLongEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanGain1Q12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanGain1Q12 = NULL;

/* Demangled: webrtc::VoiceDetectionImpl::set_frame_size_ms(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImpl17set_frame_size_msEi(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImpl17set_frame_size_msEi() called");
    return 0;
}

/* Demangled: rtc::LogMessage::OutputToDebug(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityES9_(void) {
    ALOGD("_ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityES9_() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::TransformCallback::TransformCallback(webrtc::IntelligibilityEnhancer*, webrtc::IntelligibilityEnhancer::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC1EPS0_NS0_11AudioSourceE(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC1EPS0_NS0_11AudioSourceE() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeUb12 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeUb12(void) {
    ALOGD("WebRtcIsac_DecodeUb12() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::SortKey<unsigned short>*, std::__1::allocator<webrtc::SortKey<unsigned short>*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc7SortKeyItEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc7SortKeyItEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::InternalSwap(webrtc::audioproc::Stream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc17Test_DelayMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc17Test_DelayMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferD1Ev(void) {
    ALOGD("_ZN6webrtc11AudioBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::is_delay_agnostic_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl25is_delay_agnostic_enabledEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl25is_delay_agnostic_enabledEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc20EchoCancellationImplD0Ev(void) {
    ALOGD("_ZThn4_N6webrtc20EchoCancellationImplD0Ev() called");
    return 0;
}

/* Demangled: rtc::hex_decode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_decodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc10hex_decodeEPcjPKcj() called");
    return 0;
}

/* Demangled: WebRtcVad_CalcVad32khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad32khz(void) {
    ALOGD("WebRtcVad_CalcVad32khz() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::voice_probability() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect17voice_probabilityEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect17voice_probabilityEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Exported Object: scc_info_Event_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Event_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto = NULL;

/* Demangled: webrtc::AudioBuffer::activity() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer8activityEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer8activityEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::GetHandleError(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv(void) {
    ALOGD("_ZThn4_NK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::RemoveLogToStream(rtc::LogSink*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE(void) {
    ALOGD("_ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE() called");
    return 0;
}

/* Demangled: rtc::hex_encode(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_encodeEh(void) {
    ALOGD("_ZN3rtc10hex_encodeEh() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::VarianceArray(unsigned int, webrtc::intelligibility::VarianceArray::StepType, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArrayC1EjNS1_8StepTypeEjf(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArrayC1EjNS1_8StepTypeEjf() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxValueW32C */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxValueW32C(void) {
    ALOGD("WebRtcSpl_MaxValueW32C() called");
    return 0;
}

/* Demangled: WebRtcSpl_MinValueW32C */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MinValueW32C(void) {
    ALOGD("WebRtcSpl_MinValueW32C() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample32khzTo24khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample32khzTo24khz(void) {
    ALOGD("WebRtcSpl_Resample32khzTo24khz() called");
    return 0;
}

/* Demangled: WebRtc_set_allowed_offset */
extern "C" __attribute__((visibility("default"))) int WebRtc_set_allowed_offset(void) {
    ALOGD("WebRtc_set_allowed_offset() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::ProcessingComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponentC2Ev(void) {
    ALOGD("_ZN6webrtc19ProcessingComponentC2Ev() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC1Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerC1Ev() called");
    return 0;
}

/* Demangled: rtc::tracing::ShutdownInternalTracer() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing22ShutdownInternalTracerEv(void) {
    ALOGD("_ZN3rtc7tracing22ShutdownInternalTracerEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeUb16 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeUb16(void) {
    ALOGD("WebRtcIsac_DecodeUb16() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::_Internal::stream(webrtc::audioproc::Event const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event9_Internal6streamEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5Event9_Internal6streamEPKS1_() called");
    return 0;
}

/* Demangled: rtc::tokenize_append(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Event */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc5EventE = NULL;

/* Demangled: webrtc::NonlinearBeamformer::InitHighFrequencyCorrectionRanges() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer33InitHighFrequencyCorrectionRangesEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer33InitHighFrequencyCorrectionRangesEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec3Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec3Ub12 = NULL;

/* Demangled: webrtc::VadCircularBuffer::Set(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer3SetEid(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer3SetEid() called");
    return 0;
}

/* Demangled: webrtc::RealFourierOoura::Forward(float const*, std::__1::complex<float>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc16RealFourierOoura7ForwardEPKfPNSt3__17complexIfEE(void) {
    ALOGD("_ZNK6webrtc16RealFourierOoura7ForwardEPKfPNSt3__17complexIfEE() called");
    return 0;
}

/* Demangled: WebRtcNsx_set_policy_core */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_set_policy_core(void) {
    ALOGD("WebRtcNsx_set_policy_core() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::AddMessageToList(char const*, unsigned short, webrtc::TraceLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl16AddMessageToListEPKctNS_10TraceLevelE(void) {
    ALOGD("_ZN6webrtc9TraceImpl16AddMessageToListEPKctNS_10TraceLevelE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeHighPassFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::gain_control() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl12gain_controlEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl12gain_controlEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc15GainControlImplD0Ev(void) {
    ALOGD("_ZThn4_N6webrtc15GainControlImplD0Ev() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::~RWLockPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosixD2Ev(void) {
    ALOGD("_ZN6webrtc11RWLockPosixD2Ev() called");
    return 0;
}

/* Demangled: WebRtcVad_ValidRateAndFrameLength */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_ValidRateAndFrameLength(void) {
    ALOGD("WebRtcVad_ValidRateAndFrameLength() called");
    return 0;
}

/* Demangled: WebRtcAgc_SaturationCtrl */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_SaturationCtrl(void) {
    ALOGD("WebRtcAgc_SaturationCtrl() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics(webrtc::audioproc::Test_EchoMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetricsC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetricsC2ERKS1_() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc21EchoControlMobileImplD1Ev(void) {
    ALOGD("_ZThn4_N6webrtc21EchoControlMobileImplD1Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPre_gains */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPre_gains(void) {
    ALOGD("WebRtcIsac_PitchfilterPre_gains() called");
    return 0;
}

/* Demangled: std::__1::vector<short*, std::__1::allocator<short*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Config24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc6Config24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Test13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc4Test13IsInitializedEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag4Lo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag4Lo = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec3Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec3Ub16 = NULL;

/* Demangled: webrtc::IFChannelBuffer::IFChannelBuffer(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15IFChannelBufferC2Ejjj(void) {
    ALOGD("_ZN6webrtc15IFChannelBufferC2Ejjj() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::GetBankSize(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer11GetBankSizeEij(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer11GetBankSizeEij() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::AcquireLockShared() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosix17AcquireLockSharedEv(void) {
    ALOGD("_ZN6webrtc11RWLockPosix17AcquireLockSharedEv() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::~WPDTree() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeD2Ev(void) {
    ALOGD("_ZN6webrtc7WPDTreeD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::Test() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4TestC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4TestC2Ev() called");
    return 0;
}

/* Demangled: rtc::SystemInfo::GetMemorySize() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfo13GetMemorySizeEv(void) {
    ALOGD("_ZN3rtc10SystemInfo13GetMemorySizeEv() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::TransformCallback::ProcessAudioBlock(std::__1::complex<float> const* const*, unsigned int, unsigned int, unsigned int, std::__1::complex<float>* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer17TransformCallback17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS4_(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer17TransformCallback17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS4_() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecimateAllpass */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecimateAllpass(void) {
    ALOGD("WebRtcIsac_DecimateAllpass() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevel5ResetEv(void) {
    ALOGD("_ZN6webrtc8RMSLevel5ResetEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_Time2Spec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Time2Spec(void) {
    ALOGD("WebRtcIsac_Time2Spec() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeLar */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeLar(void) {
    ALOGD("WebRtcIsac_EncodeLar() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::~FileWrapperImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImplD2Ev(void) {
    ALOGD("_ZN6webrtc15FileWrapperImplD2Ev() called");
    return 0;
}

/* Demangled: webrtc::Agc::Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcC2Ev(void) {
    ALOGD("_ZN6webrtc3AgcC2Ev() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeEntropySearchUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeEntropySearchUb12 = NULL;

/* Demangled: webrtc::TraceImpl::UpdateFileName(char const*, char*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9TraceImpl14UpdateFileNameEPKcPcj(void) {
    ALOGD("_ZNK6webrtc9TraceImpl14UpdateFileNameEPKcPcj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcMeansGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcMeansGain = NULL;

/* Demangled: webrtc::TracePosix::~TracePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10TracePosixD2Ev(void) {
    ALOGD("_ZN6webrtc10TracePosixD2Ev() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::UpdateKeypress(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor14UpdateKeypressEb(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor14UpdateKeypressEb() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::~Event() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5EventD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc5EventD0Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::_Internal::echo_metrics(webrtc::audioproc::Test const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test9_Internal12echo_metricsEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Test9_Internal12echo_metricsEPKS1_() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImpl19ProcessCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: WebRtcSpl_32khzTo22khzIntToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_32khzTo22khzIntToInt(void) {
    ALOGD("WebRtcSpl_32khzTo22khzIntToInt() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::SortKey<unsigned int>*, std::__1::allocator<webrtc::SortKey<unsigned int>*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc7SortKeyIjEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc7SortKeyIjEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::~RMSLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevelD2Ev(void) {
    ALOGD("_ZN6webrtc8RMSLevelD2Ev() called");
    return 0;
}

/* Demangled: rtc::PrintError(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10PrintErrorEPKcz(void) {
    ALOGD("_ZN3rtc10PrintErrorEPKcz() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeEntropySearchUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeEntropySearchUb16 = NULL;

/* Demangled: WebRtcIsac_Highpass */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Highpass(void) {
    ALOGD("WebRtcIsac_Highpass() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::RWLockPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosixC1Ev(void) {
    ALOGD("_ZN6webrtc11RWLockPosixC1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame16default_instanceEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: webrtc::RealFourier::AllocCplxBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RealFourier15AllocCplxBufferEi(void) {
    ALOGD("_ZN6webrtc11RealFourier15AllocCplxBufferEi() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLowerApFactorsFloat */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLowerApFactorsFloat = NULL;

/* Demangled: WebRtcAecm_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Init(void) {
    ALOGD("WebRtcAecm_Init() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc5Event13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc5Event13IsInitializedEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::echo_return_loss(webrtc::audioproc::Test_EchoMetrics const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal16echo_return_lossEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics9_Internal16echo_return_lossEPKS1_() called");
    return 0;
}

/* Demangled: WebRtc_CreateDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_CreateDelayEstimator(void) {
    ALOGD("WebRtc_CreateDelayEstimator() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::AddToMean(std::__1::complex<float>, unsigned int, std::__1::complex<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility9AddToMeanENSt3__17complexIfEEjPS3_(void) {
    ALOGD("_ZN6webrtc15intelligibility9AddToMeanENSt3__17complexIfEEjPS3_() called");
    return 0;
}

/* Demangled: webrtc::FileWrapper::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11FileWrapper6CreateEv(void) {
    ALOGD("_ZN6webrtc11FileWrapper6CreateEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeBeamformer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20InitializeBeamformerEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20InitializeBeamformerEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplD0Ev(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::CreateHandle() const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc21EchoControlMobileImpl12CreateHandleEv(void) {
    ALOGD("_ZThn4_NK6webrtc21EchoControlMobileImpl12CreateHandleEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::ApplyMaskTimeSmoothing() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer22ApplyMaskTimeSmoothingEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer22ApplyMaskTimeSmoothingEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::mixed_low_pass_data() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer19mixed_low_pass_dataEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer19mixed_low_pass_dataEv() called");
    return 0;
}

/* Demangled: webrtc::Beamforming const& webrtc::Config::Get<webrtc::Beamforming>() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc6Config3GetINS_11BeamformingEEERKT_v(void) {
    ALOGD("_ZNK6webrtc6Config3GetINS_11BeamformingEEERKT_v() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponent10InitializeEv(void) {
    ALOGD("_ZN6webrtc19ProcessingComponent10InitializeEv() called");
    return 0;
}

/* Demangled: WebRtcAecm_ProcessFrame */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_ProcessFrame(void) {
    ALOGD("WebRtcAecm_ProcessFrame() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc14Test_Statistic13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc14Test_Statistic13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::is_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18VoiceDetectionImpl10is_enabledEv(void) {
    ALOGD("_ZNK6webrtc18VoiceDetectionImpl10is_enabledEv() called");
    return 0;
}

/* Demangled: rtc::TryCritScope::TryCritScope(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12TryCritScopeC1EPNS_15CriticalSectionE(void) {
    ALOGD("_ZN3rtc12TryCritScopeC1EPNS_15CriticalSectionE() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::TransformCallback::TransformCallback(webrtc::IntelligibilityEnhancer*, webrtc::IntelligibilityEnhancer::AudioSource) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC2EPS0_NS0_11AudioSourceE(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC2EPS0_NS0_11AudioSourceE() called");
    return 0;
}

/* Demangled: WebRtcIsac_UpdateRateModel */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_UpdateRateModel(void) {
    ALOGD("WebRtcIsac_UpdateRateModel() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::FileWrapperImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImplC1Ev(void) {
    ALOGD("_ZN6webrtc15FileWrapperImplC1Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_CreateRealFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_CreateRealFFT(void) {
    ALOGD("WebRtcSpl_CreateRealFFT() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::InternalSwap(webrtc::audioproc::Event*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5Event12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::_Internal::reverse_stream(webrtc::audioproc::Event const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event9_Internal14reverse_streamEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5Event9_Internal14reverse_streamEPKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10OutputData12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc10OutputData12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitPreFilterbank */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitPreFilterbank(void) {
    ALOGD("WebRtcIsac_InitPreFilterbank() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Test12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc4Test12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample22khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample22khzTo16khz(void) {
    ALOGD("WebRtcSpl_ResetResample22khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::Open() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15FileWrapperImpl4OpenEv(void) {
    ALOGD("_ZNK6webrtc15FileWrapperImpl4OpenEv() called");
    return 0;
}

/* Demangled: webrtc::TracePosix::TracePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10TracePosixC1Ev(void) {
    ALOGD("_ZN6webrtc10TracePosixC1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SetExtraOptions(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::num_handles_required() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl20num_handles_requiredEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl20num_handles_requiredEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeBandwidth */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeBandwidth(void) {
    ALOGD("WebRtcIsac_DecodeBandwidth() called");
    return 0;
}

/* Demangled: WebRtcIsac_ReadBwIndex */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_ReadBwIndex(void) {
    ALOGD("WebRtcIsac_ReadBwIndex() called");
    return 0;
}

/* Demangled: WebRtcAecm_GetBufferFarendError */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_GetBufferFarendError(void) {
    ALOGD("WebRtcAecm_GetBufferFarendError() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_channels_const_f(webrtc::Band) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer22split_channels_const_fENS_4BandE(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer22split_channels_const_fENS_4BandE() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::EchoCancellationImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::CurrentThreadIsOwner() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc15CriticalSection20CurrentThreadIsOwnerEv(void) {
    ALOGD("_ZNK3rtc15CriticalSection20CurrentThreadIsOwnerEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitPitchFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitPitchFilter(void) {
    ALOGD("WebRtcIsac_InitPitchFilter() called");
    return 0;
}

/* Exported Object: WebRtcNsx_NormalizeRealBuffer */
extern "C" __attribute__((visibility("default"))) void* WebRtcNsx_NormalizeRealBuffer = NULL;

/* Demangled: webrtc::TraceImpl::StaticInstance(webrtc::CountOperation, webrtc::TraceLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl14StaticInstanceENS_14CountOperationENS_10TraceLevelE(void) {
    ALOGD("_ZN6webrtc9TraceImpl14StaticInstanceENS_14CountOperationENS_10TraceLevelE() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Stream12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc6Stream12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::RMSLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevelC1Ev(void) {
    ALOGD("_ZN6webrtc8RMSLevelC1Ev() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::~PlatformThread() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadD0Ev(void) {
    ALOGD("_ZN3rtc14PlatformThreadD0Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStream(float const* const*, unsigned int, int, webrtc::AudioProcessing::ChannelLayout) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::CompositionConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc20CompositionConverterE = NULL;

/* Demangled: WebRtcSpl_DivW32W16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivW32W16(void) {
    ALOGD("WebRtcSpl_DivW32W16() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeQStepSizeUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeQStepSizeUb12 = NULL;

/* Demangled: WebRtc_available_read */
extern "C" __attribute__((visibility("default"))) int WebRtc_available_read(void) {
    ALOGD("WebRtc_available_read() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::~Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6ConfigD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6ConfigD0Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::GetHandleError(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::~CriticalSection() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CriticalSectionD2Ev(void) {
    ALOGD("_ZN3rtc15CriticalSectionD2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample16khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample16khzTo48khz(void) {
    ALOGD("WebRtcSpl_Resample16khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc4Init21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::num_handles_required() const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc20EchoCancellationImpl20num_handles_requiredEv(void) {
    ALOGD("_ZThn4_NK6webrtc20EchoCancellationImpl20num_handles_requiredEv() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Mean() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer4MeanEv(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer4MeanEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_DownsampleFastC */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownsampleFastC(void) {
    ALOGD("WebRtcSpl_DownsampleFastC() called");
    return 0;
}

/* Demangled: webrtc::Trace::ReturnTrace() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace11ReturnTraceEv(void) {
    ALOGD("_ZN6webrtc5Trace11ReturnTraceEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN6webrtc14CartesianPointIfEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6webrtc14CartesianPointIfEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN6webrtc14CartesianPointIfEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::VoicingProbability(AudioFeatures const&, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd(void) {
    ALOGD("_ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd() called");
    return 0;
}

/* Demangled: rtc::SystemInfo::GetMachineModel() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfo15GetMachineModelEv(void) {
    ALOGD("_ZN3rtc10SystemInfo15GetMachineModelEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ScaleVectorWithSat */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleVectorWithSat(void) {
    ALOGD("WebRtcSpl_ScaleVectorWithSat() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::_Internal::init(webrtc::audioproc::Event const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event9_Internal4initEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5Event9_Internal4initEPKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::Event(webrtc::audioproc::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5EventC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5EventC1ERKS1_() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::thread_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage7thread_E = NULL;

/* Demangled: webrtc::AudioRingBuffer::~AudioRingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBufferD2Ev(void) {
    ALOGD("_ZN6webrtc15AudioRingBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::InfiniteStep(std::__1::complex<float> const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArray12InfiniteStepEPKNSt3__17complexIfEEb(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArray12InfiniteStepEPKNSt3__17complexIfEEb() called");
    return 0;
}

/* Demangled: WebRtcIsac_DequantizeLpcGain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DequantizeLpcGain(void) {
    ALOGD("WebRtcIsac_DequantizeLpcGain() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeQStepSizeUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeQStepSizeUb16 = NULL;

/* Exported Object: vtable for webrtc::HighPassFilterImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18HighPassFilterImplE = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec5Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec5Ub12 = NULL;

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_front(float*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Init13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc4Init13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc16Test_EchoMetrics13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc16Test_EchoMetrics13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: webrtc::SparseFIRFilter::SparseFIRFilter(float const*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SparseFIRFilterC2EPKfjjj(void) {
    ALOGD("_ZN6webrtc15SparseFIRFilterC2EPKfjjj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf3Mid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf3Mid = NULL;

/* Demangled: webrtc::audioproc::Event::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc5Event5ClearEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::PushSincResampler*, std::__1::allocator<webrtc::PushSincResampler*> >::__push_back_slow_path<webrtc::PushSincResampler* const&>(webrtc::PushSincResampler* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc17PushSincResamplerENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc17PushSincResamplerENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::ConfigureHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl15ConfigureHandleEPv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl15ConfigureHandleEPv() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::is_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18LevelEstimatorImpl10is_enabledEv(void) {
    ALOGD("_ZNK6webrtc18LevelEstimatorImpl10is_enabledEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::~ReverseStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStreamD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStreamD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::EchoCancellationImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf2Hi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf2Hi = NULL;

/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeC2EjPKfS2_ji(void) {
    ALOGD("_ZN6webrtc7WPDTreeC2EjPKfS2_ji() called");
    return 0;
}

/* Demangled: webrtc::Histogram::Update(double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram6UpdateEdd(void) {
    ALOGD("_ZN6webrtc9Histogram6UpdateEdd() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kKltT1Gain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kKltT1Gain = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec5Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec5Ub16 = NULL;

/* Demangled: WebRtcSpl_DownBy2ShortToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownBy2ShortToInt(void) {
    ALOGD("WebRtcSpl_DownBy2ShortToInt() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::InterleaveTo(webrtc::AudioFrame*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer12InterleaveToEPNS_10AudioFrameEb(void) {
    ALOGD("_ZN6webrtc11AudioBuffer12InterleaveToEPNS_10AudioFrameEb() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_bands_f(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer13split_bands_fEj(void) {
    ALOGD("_ZN6webrtc11AudioBuffer13split_bands_fEj() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::Intelligibility const& webrtc::Config::default_value<webrtc::Intelligibility>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_15IntelligibilityEEERKT_vE3def = NULL;

/* Demangled: webrtc::GetNormalIfPlanar(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17GetNormalIfPlanarERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN6webrtc17GetNormalIfPlanarERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetUplinkBandwidth */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetUplinkBandwidth(void) {
    ALOGD("WebRtcIsac_GetUplinkBandwidth() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeLpcGainUb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeLpcGainUb(void) {
    ALOGD("WebRtcIsac_DecodeLpcGainUb() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::CriticalSection() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CriticalSectionC1Ev(void) {
    ALOGD("_ZN3rtc15CriticalSectionC1Ev() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_mode(webrtc::GainControl::Mode) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE() called");
    return 0;
}

/* Demangled: webrtc::Atomic32::~Atomic32() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32D1Ev(void) {
    ALOGD("_ZN6webrtc8Atomic32D1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc5Event24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc5Event24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::IFChannelBuffer::RefreshF() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15IFChannelBuffer8RefreshFEv(void) {
    ALOGD("_ZNK6webrtc15IFChannelBuffer8RefreshFEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdfPtrLo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdfPtrLo = NULL;

/* Demangled: rtc::PlatformThread::Run() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread3RunEv(void) {
    ALOGD("_ZN3rtc14PlatformThread3RunEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogThreads(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage10LogThreadsEb(void) {
    ALOGD("_ZN3rtc10LogMessage10LogThreadsEb() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::ApplyScale(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArray10ApplyScaleEf(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArray10ApplyScaleEf() called");
    return 0;
}

/* Demangled: Db2Loudness(double) */
extern "C" __attribute__((visibility("default"))) int _Z11Db2Loudnessd(void) {
    ALOGD("_Z11Db2Loudnessd() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_Frame>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10Test_FrameEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10Test_FrameEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::~Test_Statistic() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_StatisticD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_StatisticD2Ev() called");
    return 0;
}

/* Demangled: webrtc::CriticalSectionPosix::~CriticalSectionPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CriticalSectionPosixD2Ev(void) {
    ALOGD("_ZN6webrtc20CriticalSectionPosixD2Ev() called");
    return 0;
}

/* Demangled: rtc::TryCritScope::~TryCritScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12TryCritScopeD2Ev(void) {
    ALOGD("_ZN3rtc12TryCritScopeD2Ev() called");
    return 0;
}

/* Demangled: webrtc::CrossProduct(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12CrossProductERKNS_14CartesianPointIfEES3_(void) {
    ALOGD("_ZN6webrtc12CrossProductERKNS_14CartesianPointIfEES3_() called");
    return 0;
}

/* Demangled: webrtc::Atomic32::operator++() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32ppEv(void) {
    ALOGD("_ZN6webrtc8Atomic32ppEv() called");
    return 0;
}

/* Demangled: rtc::TryCritScope::TryCritScope(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12TryCritScopeC2EPNS_15CriticalSectionE(void) {
    ALOGD("_ZN3rtc12TryCritScopeC2EPNS_15CriticalSectionE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::UpmixConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc14UpmixConverterE = NULL;

/* Demangled: webrtc::audioproc::OutputData::CopyFrom(webrtc::audioproc::OutputData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::data() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer4dataEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer4dataEv() called");
    return 0;
}

/* Demangled: webrtc::AlignedFree(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AlignedFreeEPv(void) {
    ALOGD("_ZN6webrtc11AlignedFreeEPv() called");
    return 0;
}

/* Demangled: rtc::CurrentThreadRef() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc16CurrentThreadRefEv(void) {
    ALOGD("_ZN3rtc16CurrentThreadRefEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf1Lo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf1Lo = NULL;

/* Demangled: unsigned int rtc::sprintfn<char>(char*, unsigned int, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8sprintfnIcEEjPT_jPKS1_z(void) {
    ALOGD("_ZN3rtc8sprintfnIcEEjPT_jPKS1_z() called");
    return 0;
}

/* Demangled: webrtc::CovarianceMatrixGenerator::PhaseAlignmentMasks(unsigned int, unsigned int, int, float, std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, float, webrtc::ComplexMatrix<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25CovarianceMatrixGenerator19PhaseAlignmentMasksEjjifRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEfPNS_13ComplexMatrixIfEE(void) {
    ALOGD("_ZN6webrtc25CovarianceMatrixGenerator19PhaseAlignmentMasksEjjifRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEfPNS_13ComplexMatrixIfEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::~FileWrapperImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc15FileWrapperImplD0Ev(void) {
    ALOGD("_ZThn4_N6webrtc15FileWrapperImplD0Ev() called");
    return 0;
}

/* Demangled: WebRtcAgc_Process */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_Process(void) {
    ALOGD("WebRtcAgc_Process() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4TestEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4TestEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::is_component_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19ProcessingComponent20is_component_enabledEv(void) {
    ALOGD("_ZNK6webrtc19ProcessingComponent20is_component_enabledEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_back(float*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: WebRtcIsac_SetEncSampRateInDecoder */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SetEncSampRateInDecoder(void) {
    ALOGD("WebRtcIsac_SetEncSampRateInDecoder() called");
    return 0;
}

/* Demangled: rtc::Event::Wait(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5Event4WaitEi(void) {
    ALOGD("_ZN3rtc5Event4WaitEi() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kMeanLpcGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kMeanLpcGain = NULL;

/* Demangled: rtc::LogMultiline(rtc::LoggingSeverity, char const*, bool, void const*, unsigned int, bool, rtc::LogMultilineState*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12LogMultilineENS_15LoggingSeverityEPKcbPKvjbPNS_17LogMultilineStateE(void) {
    ALOGD("_ZN3rtc12LogMultilineENS_15LoggingSeverityEPKcbPKvjbPNS_17LogMultilineStateE() called");
    return 0;
}

/* Demangled: WebRtc_CreateDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_CreateDelayEstimatorFarend(void) {
    ALOGD("WebRtc_CreateDelayEstimatorFarend() called");
    return 0;
}

/* Demangled: WebRtc_AllocateHistoryBufferMemory */
extern "C" __attribute__((visibility("default"))) int WebRtc_AllocateHistoryBufferMemory(void) {
    ALOGD("WebRtc_AllocateHistoryBufferMemory() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc13ReverseStream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc13ReverseStream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc17Test_DelayMetrics11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc17Test_DelayMetrics11GetTypeNameEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_StatisticC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_StatisticC1Ev() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::ApplyMaskFrequencySmoothing() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer27ApplyMaskFrequencySmoothingEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer27ApplyMaskFrequencySmoothingEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQSizeLpcGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQSizeLpcGain = NULL;

/* Demangled: webrtc::CriticalSectionPosix::CriticalSectionPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CriticalSectionPosixC1Ev(void) {
    ALOGD("_ZN6webrtc20CriticalSectionPosixC1Ev() called");
    return 0;
}

/* Demangled: webrtc::LappedTransform::ProcessChunk(float const* const*, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15LappedTransform12ProcessChunkEPKPKfPKPf(void) {
    ALOGD("_ZN6webrtc15LappedTransform12ProcessChunkEPKPKfPKPf() called");
    return 0;
}

/* Demangled: WebRtcIsac_EstimateBandwidth */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EstimateBandwidth(void) {
    ALOGD("WebRtcIsac_EstimateBandwidth() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def = NULL;

/* Exported Object: WebRtcIsac_kQArRc1Levels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc1Levels = NULL;

/* Demangled: webrtc::GainControlImpl::is_limiter_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl18is_limiter_enabledEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl18is_limiter_enabledEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::VoiceDetectionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18VoiceDetectionImplE = NULL;

/* Demangled: WebRtcAec_SetConfigCore */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_SetConfigCore(void) {
    ALOGD("WebRtcAec_SetConfigCore() called");
    return 0;
}

/* Exported Object: cftmdl_128 */
extern "C" __attribute__((visibility("default"))) void* cftmdl_128 = NULL;

/* Demangled: WebRtcAecm_CalcStepSize */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_CalcStepSize(void) {
    ALOGD("WebRtcAecm_CalcStepSize() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_FrameC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_FrameC2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::MergeFrom(webrtc::audioproc::Test_Statistic const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics16default_instanceEv() called");
    return 0;
}

/* Demangled: rtc::CritScope::~CritScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9CritScopeD2Ev(void) {
    ALOGD("_ZN3rtc9CritScopeD2Ev() called");
    return 0;
}

/* Demangled: rtc::Event::Event(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventC1Ebb(void) {
    ALOGD("_ZN3rtc5EventC1Ebb() called");
    return 0;
}

/* Demangled: rtc::LogMessage::WallClockStartTime() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage18WallClockStartTimeEv(void) {
    ALOGD("_ZN3rtc10LogMessage18WallClockStartTimeEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_NormLatticeFilterMa */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_NormLatticeFilterMa(void) {
    ALOGD("WebRtcIsac_NormLatticeFilterMa() called");
    return 0;
}

/* Demangled: WebRtcIsac_ToLogDomainRemoveMean */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_ToLogDomainRemoveMean(void) {
    ALOGD("WebRtcIsac_ToLogDomainRemoveMean() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Init */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc4InitE = NULL;

/* Demangled: webrtc::audioproc::Test::_Internal::delay_metrics(webrtc::audioproc::Test const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test9_Internal13delay_metricsEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Test9_Internal13delay_metricsEPKS1_() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::~LevelEstimatorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImplD0Ev(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImplD0Ev() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::~NoiseSuppressionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImplD1Ev(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::level() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20NoiseSuppressionImpl5levelEv(void) {
    ALOGD("_ZNK6webrtc20NoiseSuppressionImpl5levelEv() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilterC2Ejjj(void) {
    ALOGD("_ZN6webrtc15SplittingFilterC2Ejjj() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcC2Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcC2Ev() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::Enter() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CriticalSection5EnterEv(void) {
    ALOGD("_ZN3rtc15CriticalSection5EnterEv() called");
    return 0;
}

/* Demangled: rtc::tracing::StopInternalCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing19StopInternalCaptureEv(void) {
    ALOGD("_ZN3rtc7tracing19StopInternalCaptureEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::IsInBeam(webrtc::SphericalPoint<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer8IsInBeamERKNS_14SphericalPointIfEE(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer8IsInBeamERKNS_14SphericalPointIfEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodePitchLag */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodePitchLag(void) {
    ALOGD("WebRtcIsac_DecodePitchLag() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLeftRecPointLpcGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLeftRecPointLpcGain = NULL;

/* Exported Object: WebRtcIsac_kCompositeApFactorsFloat */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kCompositeApFactorsFloat = NULL;

/* Demangled: webrtc::TransientSuppressor::UpdateRestoration(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor17UpdateRestorationEf(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor17UpdateRestorationEf() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::~TransientSuppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressorD2Ev(void) {
    ALOGD("_ZN6webrtc19TransientSuppressorD2Ev() called");
    return 0;
}

/* Demangled: rtc::CurrentThreadId() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CurrentThreadIdEv(void) {
    ALOGD("_ZN3rtc15CurrentThreadIdEv() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::GainApplier::GainApplier(unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility11GainApplierC2Ejf(void) {
    ALOGD("_ZN6webrtc15intelligibility11GainApplierC2Ejf() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc4Cdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc4Cdf = NULL;

/* Demangled: WebRtcSpl_DivW32W16ResW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivW32W16ResW16(void) {
    ALOGD("WebRtcSpl_DivW32W16ResW16() called");
    return 0;
}

/* Exported Object: scc_info_Test_EchoMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Test_EchoMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto = NULL;

/* Demangled: webrtc::AudioBuffer::num_frames() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer10num_framesEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer10num_framesEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_SplitAndFilterFloat */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SplitAndFilterFloat(void) {
    ALOGD("WebRtcIsac_SplitAndFilterFloat() called");
    return 0;
}

/* Demangled: webrtc::Blocker::ProcessChunk(float const* const*, unsigned int, unsigned int, unsigned int, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7Blocker12ProcessChunkEPKPKfjjjPKPf(void) {
    ALOGD("_ZN6webrtc7Blocker12ProcessChunkEPKPKfjjjPKPf() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanGain4Q12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanGain4Q12 = NULL;

/* Demangled: webrtc::TraceImpl::~TraceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImplD2Ev(void) {
    ALOGD("_ZN6webrtc9TraceImplD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::~OutputData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputDataD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputDataD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeExperimentalAgc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25InitializeExperimentalAgcEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25InitializeExperimentalAgcEv() called");
    return 0;
}

/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26TimestampWrapAroundHandlerC1Ev(void) {
    ALOGD("_ZN3rtc26TimestampWrapAroundHandlerC1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10Test_Frame11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc10Test_Frame11GetTypeNameEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::EstimateTargetPresence() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer22EstimateTargetPresenceEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer22EstimateTargetPresenceEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcGainDecorrMat */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainDecorrMat = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec7Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec7Ub12 = NULL;

/* Demangled: webrtc::audioproc::Init::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc4Init27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Exported Object: scc_info_Init_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Init_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto = NULL;

/* Demangled: webrtc::GainControlImpl::mode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl4modeEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl4modeEv() called");
    return 0;
}

/* Demangled: WebRtc_binary_last_delay_quality */
extern "C" __attribute__((visibility("default"))) int WebRtc_binary_last_delay_quality(void) {
    ALOGD("WebRtc_binary_last_delay_quality() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Event_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc24_Event_default_instance_E = NULL;

/* Exported Object: vtable for webrtc::DownmixConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc16DownmixConverterE = NULL;

/* Demangled: WebRtcIsac_SetBandwidthInfo */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SetBandwidthInfo(void) {
    ALOGD("WebRtcIsac_SetBandwidthInfo() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::Stream(webrtc::audioproc::Stream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6StreamC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6StreamC2ERKS1_() called");
    return 0;
}

/* Demangled: WebRtcAecm_FreeCore */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_FreeCore(void) {
    ALOGD("WebRtcAecm_FreeCore() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Test_DelayMetrics_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc36_Test_DelayMetrics_default_instance_E = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec7Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec7Ub16 = NULL;

/* Demangled: webrtc::FileWrapperImpl::WriteText(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl9WriteTextEPKcz(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl9WriteTextEPKcz() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::~Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4InitD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4InitD0Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::CopyFrom(webrtc::audioproc::Test const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Test8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::routing_mode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl12routing_modeEv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl12routing_modeEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc6Levels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc6Levels = NULL;

/* Demangled: webrtc::intelligibility::GainApplier::Apply(std::__1::complex<float> const*, std::__1::complex<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility11GainApplier5ApplyEPKNSt3__17complexIfEEPS4_(void) {
    ALOGD("_ZN6webrtc15intelligibility11GainApplier5ApplyEPKNSt3__17complexIfEEPS4_() called");
    return 0;
}

/* Demangled: WebRtcIsac_Rc2Poly */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Rc2Poly(void) {
    ALOGD("WebRtcIsac_Rc2Poly() called");
    return 0;
}

/* Demangled: WebRtcSpl_AutoCorrToReflCoef */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AutoCorrToReflCoef(void) {
    ALOGD("WebRtcSpl_AutoCorrToReflCoef() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::SortKey<short>*, std::__1::allocator<webrtc::SortKey<short>*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc7SortKeyIsEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc7SortKeyIsEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: vtable for webrtc::EventWrapperImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc16EventWrapperImplE = NULL;

/* Demangled: webrtc::audioproc::Test_Frame* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_Frame>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10Test_FrameEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10Test_FrameEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::TransientSuppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressorC1Ev(void) {
    ALOGD("_ZN6webrtc19TransientSuppressorC1Ev() called");
    return 0;
}

/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12FatalMessageC1EPKci(void) {
    ALOGD("_ZN3rtc12FatalMessageC1EPKci() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::InternalSwap(webrtc::audioproc::Test_Statistic*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::enable_drift_compensation(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl25enable_drift_compensationEb(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl25enable_drift_compensationEb() called");
    return 0;
}

/* Demangled: WebRtcSpl_AddAffineVectorToVector */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AddAffineVectorToVector(void) {
    ALOGD("WebRtcSpl_AddAffineVectorToVector() called");
    return 0;
}

/* Demangled: webrtc::CriticalSectionPosix::Enter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CriticalSectionPosix5EnterEv(void) {
    ALOGD("_ZN6webrtc20CriticalSectionPosix5EnterEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::InternalSwap(webrtc::audioproc::Config*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6Config12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: WebRtc_MeanEstimatorFix */
extern "C" __attribute__((visibility("default"))) int WebRtc_MeanEstimatorFix(void) {
    ALOGD("WebRtc_MeanEstimatorFix() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::min_sev_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage8min_sev_E = NULL;

/* Exported Object: vtable for webrtc::RealFourierOoura */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc16RealFourierOouraE = NULL;

/* Demangled: WebRtcIsac_DecodeLb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeLb(void) {
    ALOGD("WebRtcIsac_DecodeLb() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::OpenFile(char const*, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl8OpenFileEPKcbbb(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl8OpenFileEPKcbbb() called");
    return 0;
}

/* Exported Object: WebRtcAec_ComfortNoise */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_ComfortNoise = NULL;

/* Exported Object: vtable for webrtc::Agc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc3AgcE = NULL;

/* Demangled: webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImplD2Ev(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImplD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::Write(float const* const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBuffer5WriteEPKPKfjj(void) {
    ALOGD("_ZN6webrtc15AudioRingBuffer5WriteEPKPKfjj() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerD0Ev(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerD0Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample16khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample16khzTo48khz(void) {
    ALOGD("WebRtcSpl_ResetResample16khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::~SincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerD0Ev(void) {
    ALOGD("_ZN6webrtc13SincResamplerD0Ev() called");
    return 0;
}

/* Exported Object: rdft_wk1i */
extern "C" __attribute__((visibility("default"))) void* rdft_wk1i = NULL;

/* Demangled: webrtc::audioproc::Init::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Init24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc4Init24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: WebRtcSpl_UpsampleBy2 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpsampleBy2(void) {
    ALOGD("WebRtcSpl_UpsampleBy2() called");
    return 0;
}

/* Exported Object: WebRtcAecm_StoreAdaptiveChannel */
extern "C" __attribute__((visibility("default"))) void* WebRtcAecm_StoreAdaptiveChannel = NULL;

/* Demangled: void google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TypeHandler>(void**, void**, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal20RepeatedPtrFieldBase18MergeFromInnerLoopINS0_16RepeatedPtrFieldINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEE11TypeHandlerEEEvPPvSF_ii(void) {
    ALOGD("_ZN6google8protobuf8internal20RepeatedPtrFieldBase18MergeFromInnerLoopINS0_16RepeatedPtrFieldINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEE11TypeHandlerEEEvPPvSF_ii() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecLogisticMulti2 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecLogisticMulti2(void) {
    ALOGD("WebRtcIsac_DecLogisticMulti2() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::Create(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AudioConverter6CreateEjjjj(void) {
    ALOGD("_ZN6webrtc14AudioConverter6CreateEjjjj() called");
    return 0;
}

/* Demangled: WebRtcIsac_AddLarMean */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AddLarMean(void) {
    ALOGD("WebRtcIsac_AddLarMean() called");
    return 0;
}

/* Demangled: WebRtcSpl_ComplexIFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ComplexIFFT(void) {
    ALOGD("WebRtcSpl_ComplexIFFT() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::Wake() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosix4WakeEv(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosix4WakeEv() called");
    return 0;
}

/* Demangled: WebRtc_InitDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_InitDelayEstimator(void) {
    ALOGD("WebRtc_InitDelayEstimator() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::MergeFrom(webrtc::audioproc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6Config9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: WebRtc_is_robust_validation_enabled */
extern "C" __attribute__((visibility("default"))) int WebRtc_is_robust_validation_enabled(void) {
    ALOGD("WebRtc_is_robust_validation_enabled() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kIndexMultsGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kIndexMultsGain = NULL;

/* Demangled: webrtc::Atomic32::operator--() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32mmEv(void) {
    ALOGD("_ZN6webrtc8Atomic32mmEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc13ReverseStream13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc13ReverseStream13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::Enable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImpl6EnableEb(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImpl6EnableEb() called");
    return 0;
}

/* Demangled: WebRtc_history_size */
extern "C" __attribute__((visibility("default"))) int WebRtc_history_size(void) {
    ALOGD("WebRtc_history_size() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQGain2Levels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQGain2Levels = NULL;

/* Demangled: rtc::TimeIsLater(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11TimeIsLaterEjj(void) {
    ALOGD("_ZN3rtc11TimeIsLaterEjj() called");
    return 0;
}

/* Demangled: rtc::FatalMessage::Init(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12FatalMessage4InitEPKci(void) {
    ALOGD("_ZN3rtc12FatalMessage4InitEPKci() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPost */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPost(void) {
    ALOGD("WebRtcIsac_PitchfilterPost() called");
    return 0;
}

/* Demangled: WebRtcAgc_ExpCurve */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_ExpCurve(void) {
    ALOGD("WebRtcAgc_ExpCurve() called");
    return 0;
}

/* Exported Object: rdft_wk1r */
extern "C" __attribute__((visibility("default"))) void* rdft_wk1r = NULL;

/* Demangled: WebRtcAgc_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_Init(void) {
    ALOGD("WebRtcAgc_Init() called");
    return 0;
}

/* Demangled: WebRtcIsac_LevDurb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_LevDurb(void) {
    ALOGD("WebRtcIsac_LevDurb() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Oldest() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17VadCircularBuffer6OldestEv(void) {
    ALOGD("_ZNK6webrtc17VadCircularBuffer6OldestEv() called");
    return 0;
}

/* Demangled: rtc::tokenize_first(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_(void) {
    ALOGD("_ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetErrorCode */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetErrorCode(void) {
    ALOGD("WebRtcIsac_GetErrorCode() called");
    return 0;
}

/* Demangled: WebRtcAecm_AlignedFarend */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_AlignedFarend(void) {
    ALOGD("WebRtcAecm_AlignedFarend() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::high_pass_filter() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl16high_pass_filterEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl16high_pass_filterEv() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::Analysis(float const*, unsigned int, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBank8AnalysisEPKfjPKPf(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBank8AnalysisEPKfjPKPf() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::FindFirstSpectralPeaks(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<std::__1::pair<rtc::LogSink*, rtc::LoggingSeverity>, std::__1::allocator<std::__1::pair<rtc::LogSink*, rtc::LoggingSeverity> > >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impINS_4pairIPN3rtc7LogSinkENS2_15LoggingSeverityEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impINS_4pairIPN3rtc7LogSinkENS2_15LoggingSeverityEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecSampRate */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecSampRate(void) {
    ALOGD("WebRtcIsac_DecSampRate() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::CloseFile() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl9CloseFileEv(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl9CloseFileEv() called");
    return 0;
}

/* Demangled: WebRtcAecm_GetEchoPath */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_GetEchoPath(void) {
    ALOGD("WebRtcAecm_GetEchoPath() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::Destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponent7DestroyEv(void) {
    ALOGD("_ZN6webrtc19ProcessingComponent7DestroyEv() called");
    return 0;
}

/* Demangled: WebRtcAecm_Process */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Process(void) {
    ALOGD("WebRtcAecm_Process() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::ThreeBandFilterBank*, std::__1::allocator<webrtc::ThreeBandFilterBank*> >::__push_back_slow_path<webrtc::ThreeBandFilterBank* const&>(webrtc::ThreeBandFilterBank* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc19ThreeBandFilterBankENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc19ThreeBandFilterBankENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeLpcGainLb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeLpcGainLb(void) {
    ALOGD("WebRtcIsac_EncodeLpcGainLb() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc5Event12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc5Event12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: std::__1::vector<short, std::__1::allocator<short> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::~ProcessingComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponentD0Ev(void) {
    ALOGD("_ZN6webrtc19ProcessingComponentD0Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetUplinkMaxDelay */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetUplinkMaxDelay(void) {
    ALOGD("WebRtcIsac_GetUplinkMaxDelay() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::SortKey<int>*, std::__1::allocator<webrtc::SortKey<int>*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc7SortKeyIiEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc7SortKeyIiEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics(webrtc::audioproc::Test_DelayMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetricsC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetricsC1ERKS1_() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeSpec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeSpec(void) {
    ALOGD("WebRtcIsac_EncodeSpec() called");
    return 0;
}

/* Demangled: WebRtcAec_FreeAec */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_FreeAec(void) {
    ALOGD("WebRtcAec_FreeAec() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetricsC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetricsC2Ev() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::ExtendedFilter const& webrtc::Config::default_value<webrtc::ExtendedFilter>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_14ExtendedFilterEEERKT_vE3def = NULL;

/* Demangled: webrtc::StandaloneVad::GetActivity(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad11GetActivityEPdj(void) {
    ALOGD("_ZN6webrtc13StandaloneVad11GetActivityEPdj() called");
    return 0;
}

/* Demangled: WebRtcAecm_InitEchoPath */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_InitEchoPath(void) {
    ALOGD("WebRtcAecm_InitEchoPath() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC1EPNS_11GainControlEPNS_15VolumeCallbacksEi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC1EPNS_11GainControlEPNS_15VolumeCallbacksEi() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadD2Ev(void) {
    ALOGD("_ZN6webrtc13StandaloneVadD2Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_CorrelateLpcGain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_CorrelateLpcGain(void) {
    ALOGD("WebRtcIsac_CorrelateLpcGain() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics5ClearEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: webrtc::EchoControlMobileImpl::SetEchoPath(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl11SetEchoPathEPKvj(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl11SetEchoPathEPKvj() called");
    return 0;
}

/* Demangled: rtc::hex_decode(char, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_decodeEcPh(void) {
    ALOGD("_ZN3rtc10hex_decodeEcPh() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagStepsizeLo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagStepsizeLo = NULL;

/* Demangled: WebRtcIsac_GetVarsUB */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetVarsUB(void) {
    ALOGD("WebRtcIsac_GetVarsUB() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::StartDebugRecording(__sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEP7__sFILE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEP7__sFILE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::MergeFrequencyBands() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::num_handles_required() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl20num_handles_requiredEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl20num_handles_requiredEv() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::ThreeBandsAnalysis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_15IFChannelBufferEPS1_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_15IFChannelBufferEPS1_() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::ResetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc11ResetBufferEv(void) {
    ALOGD("_ZN6webrtc12VadAudioProc11ResetBufferEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17MakeCheckOpStringINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_EEPS7_RKT_RKT0_PKc(void) {
    ALOGD("_ZN3rtc17MakeCheckOpStringINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_EEPS7_RKT_RKT0_PKc() called");
    return 0;
}

/* Demangled: rtc::hex_encode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_encodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc10hex_encodeEPcjPKcj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag2Hi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag2Hi = NULL;

/* Exported Object: webrtc::Trace::kBoilerplateLength */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc5Trace18kBoilerplateLengthE = NULL;

/* Demangled: webrtc::audioproc::Event::CopyFrom(webrtc::audioproc::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5Event8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeRc */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeRc(void) {
    ALOGD("WebRtcIsac_EncodeRc() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQindexLowerLimitLagHi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQindexLowerLimitLagHi = NULL;

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_Statistic>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc14Test_StatisticEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc14Test_StatisticEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::~Test() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4TestD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4TestD0Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc16Test_EchoMetrics12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc16Test_EchoMetrics12ByteSizeLongEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Test */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc4TestE = NULL;

/* Demangled: webrtc::VoiceDetectionImpl::Initialize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImpl10InitializeEi(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImpl10InitializeEi() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::StopDebugRecording() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl18StopDebugRecordingEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl18StopDebugRecordingEv() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::RemoveTransient(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer15RemoveTransientEid(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer15RemoveTransientEid() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FileWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc11FileWrapperE = NULL;

/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferC2Ejjjjj(void) {
    ALOGD("_ZN6webrtc11AudioBufferC2Ejjjjj() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::num_bands() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer9num_bandsEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer9num_bandsEv() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Init>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4InitEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4InitEEEvPv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Test_Statistic */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc14Test_StatisticE = NULL;

/* Demangled: webrtc::Agc::~Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcD0Ev(void) {
    ALOGD("_ZN6webrtc3AgcD0Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AudioBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc11AudioBufferE = NULL;

/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorC2Ei(void) {
    ALOGD("_ZN6webrtc17TransientDetectorC2Ei() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC2EPNS_11GainControlEPNS_15VolumeCallbacksEi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC2EPNS_11GainControlEPNS_15VolumeCallbacksEi() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kCos */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kCos = NULL;

/* Demangled: webrtc::TransientSuppressor::HardRestoration(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor15HardRestorationEPf(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor15HardRestorationEPf() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::low_pass_reference(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer18low_pass_referenceEi(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer18low_pass_referenceEi() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::output_copy_needed(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl18output_copy_neededEb(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl18output_copy_neededEb() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::AllocateRenderQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl19AllocateRenderQueueEv(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl19AllocateRenderQueueEv() called");
    return 0;
}

/* Demangled: WebRtcNsx_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_Free(void) {
    ALOGD("WebRtcNsx_Free() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::InitLowFrequencyCorrectionRanges() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer32InitLowFrequencyCorrectionRangesEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer32InitLowFrequencyCorrectionRangesEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetLpcCoefLb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetLpcCoefLb(void) {
    ALOGD("WebRtcIsac_GetLpcCoefLb() called");
    return 0;
}

/* Demangled: WebRtcIsac_Lar2Rc */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Lar2Rc(void) {
    ALOGD("WebRtcIsac_Lar2Rc() called");
    return 0;
}

/* Exported Object: WebRtc_GetCPUInfo */
extern "C" __attribute__((visibility("default"))) void* WebRtc_GetCPUInfo = NULL;

/* Demangled: webrtc::metrics::HistogramAdd(webrtc::metrics::Histogram*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEi(void) {
    ALOGD("_ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::set_mode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad8set_modeEi(void) {
    ALOGD("_ZN6webrtc13StandaloneVad8set_modeEi() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer(webrtc::IntelligibilityEnhancer::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancerC2ERKNS0_6ConfigE(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancerC2ERKNS0_6ConfigE() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodePitchGain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodePitchGain(void) {
    ALOGD("WebRtcIsac_DecodePitchGain() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Stream13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc6Stream13IsInitializedEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::CreateHandle() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl12CreateHandleEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl12CreateHandleEv() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::is_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20NoiseSuppressionImpl10is_enabledEv(void) {
    ALOGD("_ZNK6webrtc20NoiseSuppressionImpl10is_enabledEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kIndexUpperLimitGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kIndexUpperLimitGain = NULL;

/* Exported Object: WebRtcIsac_kQIndexLowerLimitLagLo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQIndexLowerLimitLagLo = NULL;

/* Demangled: webrtc::GainControlImpl::GetHandleError(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl14GetHandleErrorEPv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl14GetHandleErrorEPv() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetDownlinkBwJitIndexImpl */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetDownlinkBwJitIndexImpl(void) {
    ALOGD("WebRtcIsac_GetDownlinkBwJitIndexImpl() called");
    return 0;
}

/* Exported Object: cft1st_128 */
extern "C" __attribute__((visibility("default"))) void* cft1st_128 = NULL;

/* Demangled: webrtc::audioproc::Stream::Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6StreamC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6StreamC2Ev() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::RMS() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImpl3RMSEv(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImpl3RMSEv() called");
    return 0;
}

/* Demangled: rtc::IsThreadRefEqual(long const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc16IsThreadRefEqualERKlS1_(void) {
    ALOGD("_ZN3rtc16IsThreadRefEqualERKlS1_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float> > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_7complexIfEENS_9allocatorIS2_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_7complexIfEENS_9allocatorIS2_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def = NULL;

/* Exported Object: rdft_wk2i */
extern "C" __attribute__((visibility("default"))) void* rdft_wk2i = NULL;

/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::echo_return_loss_enhancement(webrtc::audioproc::Test_EchoMetrics const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal28echo_return_loss_enhancementEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics9_Internal28echo_return_loss_enhancementEPKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::CopyFrom(webrtc::audioproc::Test_DelayMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::stream_analog_level() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl19stream_analog_levelEv(void) {
    ALOGD("_ZN6webrtc15GainControlImpl19stream_analog_levelEv() called");
    return 0;
}

/* Demangled: rtc::TimeAfter(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9TimeAfterEi(void) {
    ALOGD("_ZN3rtc9TimeAfterEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::AudioConverter*, std::__1::allocator<webrtc::AudioConverter*> >::__push_back_slow_path<webrtc::AudioConverter* const&>(webrtc::AudioConverter* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc14AudioConverterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc14AudioConverterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int*, std::__1::allocator<unsigned int*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPjNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPjNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Config>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6ConfigEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6ConfigEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Stream11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc6Stream11GetTypeNameEv() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerC2Ejj(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerC2Ejj() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::~ConditionVariablePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosixD1Ev(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosixD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::SetMaxLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect11SetMaxLevelEi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect11SetMaxLevelEi() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics16default_instanceEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_data_f() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer12split_data_fEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer12split_data_fEv() called");
    return 0;
}

/* Demangled: WebRtc_ProcessBinarySpectrum */
extern "C" __attribute__((visibility("default"))) int WebRtc_ProcessBinarySpectrum(void) {
    ALOGD("WebRtc_ProcessBinarySpectrum() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplD1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::Enable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl6EnableEb(void) {
    ALOGD("_ZN6webrtc15GainControlImpl6EnableEb() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::MoveReadPositionForward(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBuffer23MoveReadPositionForwardEj(void) {
    ALOGD("_ZN6webrtc15AudioRingBuffer23MoveReadPositionForwardEj() called");
    return 0;
}

/* Demangled: WebRtcAecm_UpdateChannel */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_UpdateChannel(void) {
    ALOGD("WebRtcAecm_UpdateChannel() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Push(short const*, unsigned int, short*, unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Resampler4PushEPKsjPsjRj(void) {
    ALOGD("_ZN6webrtc9Resampler4PushEPKsjPsjRj() called");
    return 0;
}

/* Demangled: rtc::GlobalLockScope::~GlobalLockScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15GlobalLockScopeD2Ev(void) {
    ALOGD("_ZN3rtc15GlobalLockScopeD2Ev() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::streams_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage8streams_E = NULL;

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::~Test_DelayMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetricsD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetricsD1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc14Test_Statistic12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc14Test_Statistic12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: rtc::hex_encode(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_encodeEPKcj(void) {
    ALOGD("_ZN3rtc10hex_encodeEPKcj() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::UpdateErbGains() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer14UpdateErbGainsEv(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer14UpdateErbGainsEv() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::ReferenceDetectionValue(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj(void) {
    ALOGD("_ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj() called");
    return 0;
}

/* Demangled: webrtc::Histogram::AudioContent() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9Histogram12AudioContentEv(void) {
    ALOGD("_ZNK6webrtc9Histogram12AudioContentEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc13ReverseStream11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc13ReverseStream11GetTypeNameEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Config13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc6Config13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeC2EjPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNodeC2EjPKfj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::num_reverse_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::analog_level_maximum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl20analog_level_maximumEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl20analog_level_maximumEv() called");
    return 0;
}

/* Demangled: WebRtc_InitBinaryDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_InitBinaryDelayEstimator(void) {
    ALOGD("WebRtc_InitBinaryDelayEstimator() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetDownlinkMaxDelay */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetDownlinkMaxDelay(void) {
    ALOGD("WebRtcIsac_GetDownlinkMaxDelay() called");
    return 0;
}

/* Exported Object: rdft_wk2r */
extern "C" __attribute__((visibility("default"))) void* rdft_wk2r = NULL;

/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame(webrtc::audioproc::Test_Frame const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_FrameC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_FrameC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::Init(webrtc::audioproc::Init const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4InitC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4InitC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::SubframeCorrelation(double*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeUb12 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeUb12(void) {
    ALOGD("WebRtcIsac_EncodeUb12() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::set_data(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNode8set_dataEPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNode8set_dataEPKfj() called");
    return 0;
}

/* Demangled: WebRtcAecm_set_config */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_set_config(void) {
    ALOGD("WebRtcAecm_set_config() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: rtc::LogMessage::ConfigureLogging(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage16ConfigureLoggingEPKc(void) {
    ALOGD("_ZN3rtc10LogMessage16ConfigureLoggingEPKc() called");
    return 0;
}

/* Demangled: webrtc::AreParallel(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AreParallelERKNS_14CartesianPointIfEES3_(void) {
    ALOGD("_ZN6webrtc11AreParallelERKNS_14CartesianPointIfEES3_() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeLpcCoefUB */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeLpcCoefUB(void) {
    ALOGD("WebRtcIsac_DecodeLpcCoefUB() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub160 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub160 = NULL;

/* Demangled: WebRtcNsx_CalcParametricNoiseEstimate */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_CalcParametricNoiseEstimate(void) {
    ALOGD("WebRtcNsx_CalcParametricNoiseEstimate() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::InternalSwap(webrtc::audioproc::Test_EchoMetrics*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: WebRtcSpl_DivResultInQ31 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivResultInQ31(void) {
    ALOGD("WebRtcSpl_DivResultInQ31() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub161 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub161 = NULL;

/* Demangled: webrtc::Histogram::~Histogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9HistogramD1Ev(void) {
    ALOGD("_ZN6webrtc9HistogramD1Ev() called");
    return 0;
}

/* Demangled: WebRtcAgc_AddFarendToDigital */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_AddFarendToDigital(void) {
    ALOGD("WebRtcAgc_AddFarendToDigital() called");
    return 0;
}

/* Demangled: WebRtcNsx_set_policy */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_set_policy(void) {
    ALOGD("WebRtcNsx_set_policy() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub162 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub162 = NULL;

/* Demangled: WebRtcSpl_Resample8khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample8khzTo22khz(void) {
    ALOGD("WebRtcSpl_Resample8khzTo22khz() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::MaybeInitialize(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15MaybeInitializeERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15MaybeInitializeERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeUb16 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeUb16(void) {
    ALOGD("WebRtcIsac_EncodeUb16() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub163 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub163 = NULL;

/* Demangled: webrtc::SincResampler::Flush() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler5FlushEv(void) {
    ALOGD("_ZN6webrtc13SincResampler5FlushEv() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MinValueW16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MinValueW16 = NULL;

/* Demangled: webrtc::Sort(void*, unsigned int, webrtc::Type) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4SortEPvjNS_4TypeE(void) {
    ALOGD("_ZN6webrtc4SortEPvjNS_4TypeE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::proc_split_sample_rate_hz() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::SetExtraOptions(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: WebRtc_FreeBinaryDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_FreeBinaryDelayEstimatorFarend(void) {
    ALOGD("WebRtc_FreeBinaryDelayEstimatorFarend() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub164 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub164 = NULL;

/* Demangled: android_getCpuFeatures */
extern "C" __attribute__((visibility("default"))) int android_getCpuFeatures(void) {
    ALOGD("android_getCpuFeatures() called");
    return 0;
}

/* Demangled: webrtc::Histogram::UpdateHist(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram10UpdateHistEii(void) {
    ALOGD("_ZN6webrtc9Histogram10UpdateHistEii() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferD2Ev(void) {
    ALOGD("_ZN6webrtc11AudioBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImpl10InitializeEv(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImpl10InitializeEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc20EchoCancellationImplD1Ev(void) {
    ALOGD("_ZThn4_N6webrtc20EchoCancellationImplD1Ev() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub165 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub165 = NULL;

/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC1Eiij(void) {
    ALOGD("_ZN6webrtc9ResamplerC1Eiij() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::channels_const() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer14channels_constEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer14channels_constEv() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferD1Ev(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned int, unsigned long>(unsigned int const&, unsigned long const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17MakeCheckOpStringIjmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void) {
    ALOGD("_ZN3rtc17MakeCheckOpStringIjmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc() called");
    return 0;
}

/* Exported Object: vtable for rtc::PlatformThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3rtc14PlatformThreadE = NULL;

/* Exported Object: WebRtcIsac_kKltT1Shape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kKltT1Shape = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub166 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub166 = NULL;

/* Demangled: webrtc::GainControlImpl::set_analog_level_limits(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl23set_analog_level_limitsEii(void) {
    ALOGD("_ZN6webrtc15GainControlImpl23set_analog_level_limitsEii() called");
    return 0;
}

/* Demangled: webrtc::LappedTransform::BlockThunk::ProcessBlock(float const* const*, unsigned int, unsigned int, unsigned int, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15LappedTransform10BlockThunk12ProcessBlockEPKPKfjjjPKPf(void) {
    ALOGD("_ZN6webrtc15LappedTransform10BlockThunk12ProcessBlockEPKPKfjjjPKPf() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC2Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerC2Ev() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::Write(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl5WriteEPKvj(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl5WriteEPKvj() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Config */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc6ConfigE = NULL;

/* Demangled: webrtc::EchoControlMobileImpl::CreateHandle() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl12CreateHandleEv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl12CreateHandleEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_target_level_dbfs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl21set_target_level_dbfsEi(void) {
    ALOGD("_ZN6webrtc15GainControlImpl21set_target_level_dbfsEi() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::AddAudio(short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad8AddAudioEPKsj(void) {
    ALOGD("_ZN6webrtc13StandaloneVad8AddAudioEPKsj() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::SoftRestoration(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor15SoftRestorationEPf(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor15SoftRestorationEPf() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::ConvertToLinearIndex(int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi(void) {
    ALOGD("_ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi() called");
    return 0;
}

/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag4Mid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag4Mid = NULL;

/* Demangled: WebRtcAgc_ProcessDigital */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_ProcessDigital(void) {
    ALOGD("WebRtcAgc_ProcessDigital() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream(webrtc::audioproc::ReverseStream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStreamC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStreamC1ERKS1_() called");
    return 0;
}

/* Demangled: WebRtcSpl_CrossCorrelationC */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_CrossCorrelationC(void) {
    ALOGD("WebRtcSpl_CrossCorrelationC() called");
    return 0;
}

/* Demangled: webrtc::SleepMs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7SleepMsEi(void) {
    ALOGD("_ZN6webrtc7SleepMsEi() called");
    return 0;
}

/* Demangled: WebRtcAecm_CalcSuppressionGain */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_CalcSuppressionGain(void) {
    ALOGD("WebRtcAecm_CalcSuppressionGain() called");
    return 0;
}

/* Exported Object: WebRtcSpl_ScaleAndAddVectorsWithRound */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_ScaleAndAddVectorsWithRound = NULL;

/* Demangled: WebRtcAecm_Control */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Control(void) {
    ALOGD("WebRtcAecm_Control() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectD1Ev(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectD1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc4Test16default_instanceEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc15GainControlImplD1Ev(void) {
    ALOGD("_ZThn4_N6webrtc15GainControlImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Get(int, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17VadCircularBuffer3GetEiPd(void) {
    ALOGD("_ZNK6webrtc17VadCircularBuffer3GetEiPd() called");
    return 0;
}

/* Demangled: WebRtcVad_set_mode_core */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_set_mode_core(void) {
    ALOGD("WebRtcVad_set_mode_core() called");
    return 0;
}

/* Exported Object: bitrv2_128 */
extern "C" __attribute__((visibility("default"))) void* bitrv2_128 = NULL;

/* Demangled: WebRtcSpl_RealInverseFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RealInverseFFT(void) {
    ALOGD("WebRtcSpl_RealInverseFFT() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer6CreateEi(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer6CreateEi() called");
    return 0;
}

/* Demangled: rtc::tracing::SetupInternalTracer() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing19SetupInternalTracerEv(void) {
    ALOGD("_ZN3rtc7tracing19SetupInternalTracerEv() called");
    return 0;
}

/* Demangled: webrtc::RealFourierOoura::Inverse(std::__1::complex<float> const*, float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc16RealFourierOoura7InverseEPKNSt3__17complexIfEEPf(void) {
    ALOGD("_ZNK6webrtc16RealFourierOoura7InverseEPKNSt3__17complexIfEEPf() called");
    return 0;
}

/* Demangled: WebRtcNsx_SpeechNoiseProb */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_SpeechNoiseProb(void) {
    ALOGD("WebRtcNsx_SpeechNoiseProb() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::SetExtraOptions(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE(void) {
    ALOGD("_ZThn4_N6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: WebRtcNsx_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_Create(void) {
    ALOGD("WebRtcNsx_Create() called");
    return 0;
}

/* Exported Object: rtc::kInvalidPlatformFileValue */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc25kInvalidPlatformFileValueE = NULL;

/* Demangled: webrtc::CovarianceMatrixGenerator::UniformCovarianceMatrix(float, std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::ComplexMatrix<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25CovarianceMatrixGenerator23UniformCovarianceMatrixEfRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE(void) {
    ALOGD("_ZN6webrtc25CovarianceMatrixGenerator23UniformCovarianceMatrixEfRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE() called");
    return 0;
}

/* Demangled: WebRtcAgc_InitVad */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_InitVad(void) {
    ALOGD("WebRtcAgc_InitVad() called");
    return 0;
}

/* Exported Object: WebRtcAecm_kCosTable */
extern "C" __attribute__((visibility("default"))) void* WebRtcAecm_kCosTable = NULL;

/* Demangled: webrtc::EchoCancellationImpl::GetDelayMetrics(int*, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_Pf(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_Pf() called");
    return 0;
}

/* Demangled: webrtc::SetupEventTracer(unsigned char const* (*)(char const*), void (*)(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char)) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE(void) {
    ALOGD("_ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE() called");
    return 0;
}

/* Demangled: WebRtcAec_enable_extended_filter */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_enable_extended_filter(void) {
    ALOGD("WebRtcAec_enable_extended_filter() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::Test(webrtc::audioproc::Test const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4TestC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4TestC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterC::FIRFilterC(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10FIRFilterCC1EPKfj(void) {
    ALOGD("_ZN6webrtc10FIRFilterCC1EPKfj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltInitIndexShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltInitIndexShape = NULL;

/* Exported Object: vtable for webrtc::PushSincResampler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc17PushSincResamplerE = NULL;

/* Demangled: webrtc::EchoCancellationImpl::is_drift_compensation_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl29is_drift_compensation_enabledEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl29is_drift_compensation_enabledEv() called");
    return 0;
}

/* Exported Object: rdft_wk3ri_first */
extern "C" __attribute__((visibility("default"))) void* rdft_wk3ri_first = NULL;

/* Demangled: webrtc::audioproc::Test::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc4Test27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::enable_metrics(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl14enable_metricsEb(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl14enable_metricsEb() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltModelCdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltModelCdf = NULL;

/* Demangled: webrtc::WPDNode::~WPDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeD1Ev(void) {
    ALOGD("_ZN6webrtc7WPDNodeD1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc4Test5ClearEv() called");
    return 0;
}

/* Demangled: WebRtc_set_history_size */
extern "C" __attribute__((visibility("default"))) int WebRtc_set_history_size(void) {
    ALOGD("WebRtc_set_history_size() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncLogisticMulti2 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncLogisticMulti2(void) {
    ALOGD("WebRtcIsac_EncLogisticMulti2() called");
    return 0;
}

/* Exported Object: WebRtcNsx_SynthesisUpdate */
extern "C" __attribute__((visibility("default"))) void* WebRtcNsx_SynthesisUpdate = NULL;

/* Demangled: WebRtcSpl_MaxAbsValueW16C */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxAbsValueW16C(void) {
    ALOGD("WebRtcSpl_MaxAbsValueW16C() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeC1EjPKfS2_ji(void) {
    ALOGD("_ZN6webrtc7WPDTreeC1EjPKfS2_ji() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::~Event() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5EventD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc5EventD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_output_will_be_muted(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb() called");
    return 0;
}

/* Demangled: rtc::SystemInfo::GetCpuVendor() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfo12GetCpuVendorEv(void) {
    ALOGD("_ZN3rtc10SystemInfo12GetCpuVendorEv() called");
    return 0;
}

/* Exported Object: rdft_wk3i */
extern "C" __attribute__((visibility("default"))) void* rdft_wk3i = NULL;

/* Exported Object: WebRtcIsac_kQPitchLagCdfSizeHi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdfSizeHi = NULL;

/* Demangled: WebRtcIsac_Assign */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Assign(void) {
    ALOGD("WebRtcIsac_Assign() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::RWLockPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosixC2Ev(void) {
    ALOGD("_ZN6webrtc11RWLockPosixC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_DownsampleBy2 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownsampleBy2(void) {
    ALOGD("WebRtcSpl_DownsampleBy2() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBankC1Ej(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBankC1Ej() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::InitInterfCovMats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer17InitInterfCovMatsEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer17InitInterfCovMatsEv() called");
    return 0;
}

/* Exported Object: WebRtcNsx_NoiseEstimation */
extern "C" __attribute__((visibility("default"))) void* WebRtcNsx_NoiseEstimation = NULL;

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::DestroyHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc20EchoCancellationImpl13DestroyHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc20EchoCancellationImpl13DestroyHandleEPv() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::SleepCS(webrtc::CriticalSectionWrapper&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperE(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::MergeFrom(webrtc::audioproc::Test_Frame const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::WriteInitMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16WriteInitMessageEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16WriteInitMessageEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::voice_detection() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15voice_detectionEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15voice_detectionEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::proc_sample_rate_hz() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv() called");
    return 0;
}

/* Demangled: WebRtcAgc_VirtualMic */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_VirtualMic(void) {
    ALOGD("WebRtcAgc_VirtualMic() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::CopyFrom(float const* const*, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE(void) {
    ALOGD("_ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::is_delay_logging_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl24is_delay_logging_enabledEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl24is_delay_logging_enabledEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplD1Ev(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplD1Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_MemSetW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MemSetW16(void) {
    ALOGD("WebRtcSpl_MemSetW16() called");
    return 0;
}

/* Demangled: webrtc::Trace::SetTraceFile(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace12SetTraceFileEPKcb(void) {
    ALOGD("_ZN6webrtc5Trace12SetTraceFileEPKcb() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Test_DelayMetrics */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc17Test_DelayMetricsE = NULL;

/* Demangled: webrtc::GainControlImpl::enable_limiter(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl14enable_limiterEb(void) {
    ALOGD("_ZN6webrtc15GainControlImpl14enable_limiterEb() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogToDebug(rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::~Test_Frame() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_FrameD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_FrameD0Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncoderInit */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncoderInit(void) {
    ALOGD("WebRtcIsac_EncoderInit() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::FileWrapperImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImplC2Ev(void) {
    ALOGD("_ZN6webrtc15FileWrapperImplC2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::GetMetrics(webrtc::EchoCancellation::Metrics*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl10GetMetricsEPNS_16EchoCancellation7MetricsE(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl10GetMetricsEPNS_16EchoCancellation7MetricsE() called");
    return 0;
}

/* Exported Object: rdft_wk3r */
extern "C" __attribute__((visibility("default"))) void* rdft_wk3r = NULL;

/* Demangled: WebRtcAgc_CalculateGainTable */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_CalculateGainTable(void) {
    ALOGD("WebRtcAgc_CalculateGainTable() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_channels_const(webrtc::Band) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer20split_channels_constENS_4BandE(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer20split_channels_constENS_4BandE() called");
    return 0;
}

/* Exported Object: webrtc::AudioProcessing::kMaxNativeSampleRateHz */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15AudioProcessing22kMaxNativeSampleRateHzE = NULL;

/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStreamLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl26ProcessReverseStreamLockedEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl26ProcessReverseStreamLockedEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetDownlinkBandwidth */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetDownlinkBandwidth(void) {
    ALOGD("WebRtcIsac_GetDownlinkBandwidth() called");
    return 0;
}

/* Demangled: WebRtcSpl_MemCpyReversedOrder */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MemCpyReversedOrder(void) {
    ALOGD("WebRtcSpl_MemCpyReversedOrder() called");
    return 0;
}

/* Demangled: webrtc::TracePosix::TracePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10TracePosixC2Ev(void) {
    ALOGD("_ZN6webrtc10TracePosixC2Ev() called");
    return 0;
}

/* Demangled: WebRtcAec_GetDelayMetricsCore */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_GetDelayMetricsCore(void) {
    ALOGD("WebRtcAec_GetDelayMetricsCore() called");
    return 0;
}

/* Demangled: webrtc::Agc::AnalyzePreproc(short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc14AnalyzePreprocEPKsj(void) {
    ALOGD("_ZN6webrtc3Agc14AnalyzePreprocEPKsj() called");
    return 0;
}

/* Demangled: webrtc::LogMessage::LogMessage(char const*, int, webrtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10LogMessageC1EPKciNS_15LoggingSeverityE(void) {
    ALOGD("_ZN6webrtc10LogMessageC1EPKciNS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: rtc::Event::Set() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5Event3SetEv(void) {
    ALOGD("_ZN3rtc5Event3SetEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltCdfShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltCdfShape = NULL;

/* Exported Object: rdft_wk3ri_second */
extern "C" __attribute__((visibility("default"))) void* rdft_wk3ri_second = NULL;

/* Exported Object: rftfsub_128 */
extern "C" __attribute__((visibility("default"))) void* rftfsub_128 = NULL;

/* Demangled: webrtc::NonlinearBeamformer::ProcessChunk(webrtc::ChannelBuffer<float> const&, webrtc::ChannelBuffer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer12ProcessChunkERKNS_13ChannelBufferIfEEPS2_(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer12ProcessChunkERKNS_13ChannelBufferIfEEPS2_() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosix6CreateEv(void) {
    ALOGD("_ZN6webrtc11RWLockPosix6CreateEv() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AnalyzePreProcess(short*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPsij(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPsij() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::MaybeUpdateHistograms() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl21MaybeUpdateHistogramsEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl21MaybeUpdateHistogramsEv() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::RMSLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevelC2Ev(void) {
    ALOGD("_ZN6webrtc8RMSLevelC2Ev() called");
    return 0;
}

/* Demangled: WebRtcVad_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Free(void) {
    ALOGD("WebRtcVad_Free() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::~PlatformThread() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadD1Ev(void) {
    ALOGD("_ZN3rtc14PlatformThreadD1Ev() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MaxValueW16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxValueW16 = NULL;

/* Exported Object: webrtc::Trace::kTimestampPosition */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc5Trace18kTimestampPositionE = NULL;

/* Exported Object: cftbsub_128 */
extern "C" __attribute__((visibility("default"))) void* cftbsub_128 = NULL;

/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, char const*, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc25hex_decode_with_delimiterEPcjPKcjc(void) {
    ALOGD("_ZN3rtc25hex_decode_with_delimiterEPcjPKcjc() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::Resample(short const*, unsigned int, short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResampler8ResampleEPKsjPsj(void) {
    ALOGD("_ZN6webrtc17PushSincResampler8ResampleEPKsjPsj() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Event>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc5EventEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc5EventEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::AnalyzeCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::RMSLevel::Process(short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RMSLevel7ProcessEPKsj(void) {
    ALOGD("_ZN6webrtc8RMSLevel7ProcessEPKsj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kTransform2Float */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kTransform2Float = NULL;

/* Exported Object: vtable for webrtc::CriticalSectionPosix */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc20CriticalSectionPosixE = NULL;

/* Demangled: WebRtcVad_CalcVad8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad8khz(void) {
    ALOGD("WebRtcVad_CalcVad8khz() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::~Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6ConfigD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6ConfigD1Ev() called");
    return 0;
}

/* Demangled: webrtc::IFChannelBuffer::ibuf_const() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15IFChannelBuffer10ibuf_constEv(void) {
    ALOGD("_ZNK6webrtc15IFChannelBuffer10ibuf_constEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl10InitializeEv(void) {
    ALOGD("_ZN6webrtc15GainControlImpl10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::WriteFramesAvailable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15AudioRingBuffer20WriteFramesAvailableEv(void) {
    ALOGD("_ZNK6webrtc15AudioRingBuffer20WriteFramesAvailableEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::delay_offset_ms() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15delay_offset_msEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15delay_offset_msEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodePitchLag */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodePitchLag(void) {
    ALOGD("WebRtcIsac_EncodePitchLag() called");
    return 0;
}

/* Demangled: WebRtcIsac_SetDecSampRate */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SetDecSampRate(void) {
    ALOGD("WebRtcIsac_SetDecSampRate() called");
    return 0;
}

/* Exported Object: WebRtcNsx_Denormalize */
extern "C" __attribute__((visibility("default"))) void* WebRtcNsx_Denormalize = NULL;

/* Demangled: webrtc::AgcManagerDirect::CheckVolumeAndReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect19CheckVolumeAndResetEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect19CheckVolumeAndResetEv() called");
    return 0;
}

/* Demangled: WebRtcAgc_SpeakerInactiveCtrl */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_SpeakerInactiveCtrl(void) {
    ALOGD("WebRtcAgc_SpeakerInactiveCtrl() called");
    return 0;
}

/* Exported Object: vtable for webrtc::GainControlForNewAgc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc20GainControlForNewAgcE = NULL;

/* Demangled: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_() called");
    return 0;
}

/* Demangled: rtc::Event::~Event() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventD1Ev(void) {
    ALOGD("_ZN3rtc5EventD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj() called");
    return 0;
}

/* Demangled: aec_rdft_forward_128 */
extern "C" __attribute__((visibility("default"))) int aec_rdft_forward_128(void) {
    ALOGD("aec_rdft_forward_128() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeStoredDataUb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeStoredDataUb(void) {
    ALOGD("WebRtcIsac_EncodeStoredDataUb() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc4Init16default_instanceEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::GainControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc11GainControlE = NULL;

/* Demangled: WebRtcIsac_NormLatticeFilterAr */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_NormLatticeFilterAr(void) {
    ALOGD("WebRtcIsac_NormLatticeFilterAr() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRcLevelsPtr */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRcLevelsPtr = NULL;

/* Demangled: WebRtcNsx_FeatureParameterExtraction */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_FeatureParameterExtraction(void) {
    ALOGD("WebRtcNsx_FeatureParameterExtraction() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitRateModel */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitRateModel(void) {
    ALOGD("WebRtcIsac_InitRateModel() called");
    return 0;
}

/* Demangled: WebRtcIsac_SetMaxPayloadSize */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SetMaxPayloadSize(void) {
    ALOGD("WebRtcIsac_SetMaxPayloadSize() called");
    return 0;
}

/* Demangled: WebRtcSpl_AffineTransformVector */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AffineTransformVector(void) {
    ALOGD("WebRtcSpl_AffineTransformVector() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::~ReverseStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStreamD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStreamD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc16Test_EchoMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc16Test_EchoMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::UpdateHistogramsOnCallEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25UpdateHistogramsOnCallEndEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25UpdateHistogramsOnCallEndEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplD0Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplD0Ev() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AudioConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc14AudioConverterE = NULL;

/* Exported Object: WebRtcIsac_kQPitchLagCdf3Hi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf3Hi = NULL;

/* Demangled: webrtc::ConditionVariablePosix::SleepCS(webrtc::CriticalSectionWrapper&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperEm(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperEm() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::data_f() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer6data_fEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer6data_fEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeVoiceDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl24InitializeVoiceDetectionEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl24InitializeVoiceDetectionEv() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::BlockedStep(std::__1::complex<float> const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArray11BlockedStepEPKNSt3__17complexIfEEb(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArray11BlockedStepEPKNSt3__17complexIfEEb() called");
    return 0;
}

/* Demangled: WebRtcAec_get_echo_status */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_get_echo_status(void) {
    ALOGD("WebRtcAec_get_echo_status() called");
    return 0;
}

/* Demangled: WebRtc_InitBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_InitBuffer(void) {
    ALOGD("WebRtc_InitBuffer() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetUplinkBw */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetUplinkBw(void) {
    ALOGD("WebRtcIsac_GetUplinkBw() called");
    return 0;
}

/* Demangled: webrtc::Atomic32::Atomic32(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32C1Ei(void) {
    ALOGD("_ZN6webrtc8Atomic32C1Ei() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::AddModuleAndId(char*, webrtc::TraceModule, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9TraceImpl14AddModuleAndIdEPcNS_11TraceModuleEi(void) {
    ALOGD("_ZNK6webrtc9TraceImpl14AddModuleAndIdEPcNS_11TraceModuleEi() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::is_comfort_noise_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::UpdateMinLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage20UpdateMinLogSeverityEv(void) {
    ALOGD("_ZN3rtc10LogMessage20UpdateMinLogSeverityEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_Control */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Control(void) {
    ALOGD("WebRtcIsac_Control() called");
    return 0;
}

/* Demangled: WebRtcAgc_ZeroCtrl */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_ZeroCtrl(void) {
    ALOGD("WebRtcAgc_ZeroCtrl() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::Filter(short const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilter6FilterEPKsjPf(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilter6FilterEPKsjPf() called");
    return 0;
}

/* Demangled: rtc::CriticalSection::CriticalSection() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CriticalSectionC2Ev(void) {
    ALOGD("_ZN3rtc15CriticalSectionC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample8khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample8khzTo22khz(void) {
    ALOGD("WebRtcSpl_ResetResample8khzTo22khz() called");
    return 0;
}

/* Demangled: webrtc::Atomic32::~Atomic32() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32D2Ev(void) {
    ALOGD("_ZN6webrtc8Atomic32D2Ev() called");
    return 0;
}

/* Exported Object: WebRtcAec_WindowData */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_WindowData = NULL;

/* Demangled: webrtc::audioproc::Init* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Init>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4InitEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4InitEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10Test_Frame13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc10Test_Frame13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::DeinterleaveFrom(webrtc::AudioFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer16DeinterleaveFromEPNS_10AudioFrameE(void) {
    ALOGD("_ZN6webrtc11AudioBuffer16DeinterleaveFromEPNS_10AudioFrameE() called");
    return 0;
}

/* Exported Object: webrtc::AudioProcessing::kNumNativeSampleRates */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15AudioProcessing21kNumNativeSampleRatesE = NULL;

/* Demangled: WebRtcSpl_ReflCoefToLpc */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ReflCoefToLpc(void) {
    ALOGD("WebRtcSpl_ReflCoefToLpc() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::~HighPassFilterImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImplD0Ev(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImplD0Ev() called");
    return 0;
}

/* Demangled: Dbfs2Loudness(double) */
extern "C" __attribute__((visibility("default"))) int _Z13Dbfs2Loudnessd(void) {
    ALOGD("_Z13Dbfs2Loudnessd() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Test11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc4Test11GetTypeNameEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltOffsetGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltOffsetGain = NULL;

/* Demangled: WebRtcSpl_Resample48khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample48khzTo16khz(void) {
    ALOGD("WebRtcSpl_Resample48khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::OutputData>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10OutputDataEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10OutputDataEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData16default_instanceEv() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::Configure() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponent9ConfigureEv(void) {
    ALOGD("_ZN6webrtc19ProcessingComponent9ConfigureEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_UpdateBwEstimate */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_UpdateBwEstimate(void) {
    ALOGD("WebRtcIsac_UpdateBwEstimate() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::ApplyMasks(std::__1::complex<float> const* const*, std::__1::complex<float>* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer10ApplyMasksEPKPKNSt3__17complexIfEEPKPS3_(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer10ApplyMasksEPKPKNSt3__17complexIfEEPKPS3_() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::UpdateFactor(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility12UpdateFactorEfff(void) {
    ALOGD("_ZN6webrtc15intelligibility12UpdateFactorEfff() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf2Mid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf2Mid = NULL;

/* Demangled: WebRtc_FreeBinaryDelayEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtc_FreeBinaryDelayEstimator(void) {
    ALOGD("WebRtc_FreeBinaryDelayEstimator() called");
    return 0;
}

/* Exported Object: vtable for webrtc::LappedTransform::BlockThunk */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc15LappedTransform10BlockThunkE = NULL;

/* Demangled: webrtc::IntelligibilityEnhancer::CreateErbBank() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer13CreateErbBankEv(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer13CreateErbBankEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStreamC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStreamC1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl10InitializeEv(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::NonlinearBeamformer(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::SphericalPoint<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformerC2ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformerC2ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::IntelligibilityEnhancer::TransformCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc23IntelligibilityEnhancer17TransformCallbackE = NULL;

/* Exported Object: WebRtcIsac_kQPitchLagCdf2Lo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf2Lo = NULL;

/* Demangled: rtc::PlatformThread::StartThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread11StartThreadEPv(void) {
    ALOGD("_ZN3rtc14PlatformThread11StartThreadEPv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kIndexLowerLimitGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kIndexLowerLimitGain = NULL;

/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::~FileWrapperImpl() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc15FileWrapperImplD1Ev(void) {
    ALOGD("_ZThn4_N6webrtc15FileWrapperImplD1Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::RWLockPosix */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc11RWLockPosixE = NULL;

/* Exported Object: webrtc::audioproc::_ReverseStream_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc32_ReverseStream_default_instance_E = NULL;

/* Demangled: webrtc::IFChannelBuffer::ibuf() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15IFChannelBuffer4ibufEv(void) {
    ALOGD("_ZN6webrtc15IFChannelBuffer4ibufEv() called");
    return 0;
}

/* Demangled: rtc::CritScope::CritScope(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9CritScopeC1EPNS_15CriticalSectionE(void) {
    ALOGD("_ZN3rtc9CritScopeC1EPNS_15CriticalSectionE() called");
    return 0;
}

/* Demangled: webrtc::Resampler::ResetIfNeeded(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Resampler13ResetIfNeededEiij(void) {
    ALOGD("_ZN6webrtc9Resampler13ResetIfNeededEiij() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc3Levels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc3Levels = NULL;

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::CreateHandle() const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc20EchoCancellationImpl12CreateHandleEv(void) {
    ALOGD("_ZThn4_NK6webrtc20EchoCancellationImpl12CreateHandleEv() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::AudioConverter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AudioConverterC2Ev(void) {
    ALOGD("_ZN6webrtc14AudioConverterC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::WriteConfigMessage(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl18WriteConfigMessageEb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl18WriteConfigMessageEb() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltCdfPtrShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltCdfPtrShape = NULL;

/* Demangled: webrtc::audioproc::Test_EchoMetrics::~Test_EchoMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetricsD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetricsD0Ev() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::ProcessNoiseBlock(std::__1::complex<float> const*, std::__1::complex<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer17ProcessNoiseBlockEPKNSt3__17complexIfEEPS3_(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer17ProcessNoiseBlockEPKNSt3__17complexIfEEPS3_() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::Rewind() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl6RewindEv(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl6RewindEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic16default_instanceEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::num_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer12num_channelsEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer12num_channelsEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::InitializeHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc21EchoControlMobileImpl16InitializeHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc21EchoControlMobileImpl16InitializeHandleEPv() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Test_Statistic_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc33_Test_Statistic_default_instance_E = NULL;

/* Demangled: webrtc::AudioBuffer::channels_f() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer10channels_fEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer10channels_fEv() called");
    return 0;
}

/* Demangled: WebRtcIsacBw_GetBandwidthInfo */
extern "C" __attribute__((visibility("default"))) int WebRtcIsacBw_GetBandwidthInfo(void) {
    ALOGD("WebRtcIsacBw_GetBandwidthInfo() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char*, std::__1::allocator<unsigned char*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPhNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPhNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_StatisticC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_StatisticC2Ev() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQInitIndexLagMid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQInitIndexLagMid = NULL;

/* Demangled: webrtc::CriticalSectionPosix::CriticalSectionPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CriticalSectionPosixC2Ev(void) {
    ALOGD("_ZN6webrtc20CriticalSectionPosixC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: WebRtcAec_GetDelayMetrics */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_GetDelayMetrics(void) {
    ALOGD("WebRtcAec_GetDelayMetrics() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config16default_instanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc6Config16default_instanceEv() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::~VoiceDetectionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImplD0Ev(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImplD0Ev() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread5StartEv(void) {
    ALOGD("_ZN3rtc14PlatformThread5StartEv() called");
    return 0;
}

/* Demangled: webrtc::Blocker::Blocker(unsigned int, unsigned int, unsigned int, unsigned int, float const*, unsigned int, webrtc::BlockerCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7BlockerC1EjjjjPKfjPNS_15BlockerCallbackE(void) {
    ALOGD("_ZN6webrtc7BlockerC1EjjjjPKfjPNS_15BlockerCallbackE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kFrameLengthCdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kFrameLengthCdf = NULL;

/* Demangled: WebRtcNsx_DataAnalysis */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_DataAnalysis(void) {
    ALOGD("WebRtcNsx_DataAnalysis() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MinValueW32 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MinValueW32 = NULL;

/* Demangled: webrtc::TransientSuppressor::Suppress(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor8SuppressEPfS1_S1_(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor8SuppressEPfS1_S1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc6Config21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl10InitializeEv(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl10InitializeEv() called");
    return 0;
}

/* Demangled: rtc::FatalMessage::~FatalMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12FatalMessageD1Ev(void) {
    ALOGD("_ZN3rtc12FatalMessageD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::GetHandleError(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc20EchoCancellationImpl14GetHandleErrorEPv(void) {
    ALOGD("_ZThn4_NK6webrtc20EchoCancellationImpl14GetHandleErrorEPv() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::VarianceArray(unsigned int, webrtc::intelligibility::VarianceArray::StepType, unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArrayC2EjNS1_8StepTypeEjf(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArrayC2EjNS1_8StepTypeEjf() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::AnalyzeCaptureAudio(float* const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer19AnalyzeCaptureAudioEPKPfij(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer19AnalyzeCaptureAudioEPKPfij() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::~LevelEstimatorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImplD1Ev(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::~NoiseSuppressionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImplD2Ev(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImplD2Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitBandwidthEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitBandwidthEstimator(void) {
    ALOGD("WebRtcIsac_InitBandwidthEstimator() called");
    return 0;
}

/* Demangled: WebRtc_last_delay */
extern "C" __attribute__((visibility("default"))) int WebRtc_last_delay(void) {
    ALOGD("WebRtc_last_delay() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadD1Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadD1Ev() called");
    return 0;
}

/* Demangled: WebRtcAgc_set_config */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_set_config(void) {
    ALOGD("WebRtcAgc_set_config() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::ReverseStream>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc13ReverseStreamEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc13ReverseStreamEEEvPv() called");
    return 0;
}

/* Demangled: WebRtcIsac_RateAllocation */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_RateAllocation(void) {
    ALOGD("WebRtcIsac_RateAllocation() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchGainCdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchGainCdf = NULL;

/* Exported Object: vtable for webrtc::SincResampler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13SincResamplerE = NULL;

/* Demangled: WebRtc_CreateBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_CreateBuffer(void) {
    ALOGD("WebRtc_CreateBuffer() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::AddDitherIfZero(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility15AddDitherIfZeroEf(void) {
    ALOGD("_ZN6webrtc15intelligibility15AddDitherIfZeroEf() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitWeightingFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitWeightingFilter(void) {
    ALOGD("WebRtcIsac_InitWeightingFilter() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::~OutputData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputDataD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputDataD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::CopyFrom(webrtc::audioproc::Test_EchoMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26TimestampWrapAroundHandlerC2Ev(void) {
    ALOGD("_ZN3rtc26TimestampWrapAroundHandlerC2Ev() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::SetTraceFileImpl(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl16SetTraceFileImplEPKcb(void) {
    ALOGD("_ZN6webrtc9TraceImpl16SetTraceFileImplEPKcb() called");
    return 0;
}

/* Exported Object: WebRtcAec_kExtendedSmoothingCoefficients */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_kExtendedSmoothingCoefficients = NULL;

/* Demangled: WebRtcVad_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Create(void) {
    ALOGD("WebRtcVad_Create() called");
    return 0;
}

/* Demangled: webrtc::GetArrayNormalIfExists(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22GetArrayNormalIfExistsERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN6webrtc22GetArrayNormalIfExistsERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: WebRtcNsx_DataSynthesis */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_DataSynthesis(void) {
    ALOGD("WebRtcNsx_DataSynthesis() called");
    return 0;
}

/* Demangled: WebRtc_InitDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_InitDelayEstimatorFarend(void) {
    ALOGD("WebRtc_InitDelayEstimatorFarend() called");
    return 0;
}

/* Demangled: WebRtcAecm_CreateCore */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_CreateCore(void) {
    ALOGD("WebRtcAecm_CreateCore() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::SortKey<unsigned char>*, std::__1::allocator<webrtc::SortKey<unsigned char>*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc7SortKeyIhEENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc7SortKeyIhEENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::FileName(char*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15FileWrapperImpl8FileNameEPcj(void) {
    ALOGD("_ZNK6webrtc15FileWrapperImpl8FileNameEPcj() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPre_la */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPre_la(void) {
    ALOGD("WebRtcIsac_PitchfilterPre_la() called");
    return 0;
}

/* Demangled: std::__1::deque<float, std::__1::allocator<float> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: WebRtcAec_system_delay */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_system_delay(void) {
    ALOGD("WebRtcAec_system_delay() called");
    return 0;
}

/* Demangled: WebRtc_WriteBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_WriteBuffer(void) {
    ALOGD("WebRtc_WriteBuffer() called");
    return 0;
}

/* Demangled: WebRtcSpl_DivU32U16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivU32U16(void) {
    ALOGD("WebRtcSpl_DivU32U16() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Init13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc4Init13IsInitializedEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10Test_Frame12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc10Test_Frame12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::ProcessRenderAudio(webrtc::AudioBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEPKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEPKNS_11AudioBufferE() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::DelayAgnostic const& webrtc::Config::default_value<webrtc::DelayAgnostic>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_13DelayAgnosticEEERKT_vE3def = NULL;

/* Demangled: WebRtc_InitBinaryDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_InitBinaryDelayEstimatorFarend(void) {
    ALOGD("WebRtc_InitBinaryDelayEstimatorFarend() called");
    return 0;
}

/* Demangled: webrtc::LappedTransform::LappedTransform(unsigned int, unsigned int, unsigned int, float const*, unsigned int, unsigned int, webrtc::LappedTransform::Callback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15LappedTransformC1EjjjPKfjjPNS0_8CallbackE(void) {
    ALOGD("_ZN6webrtc15LappedTransformC1EjjjPKfjjPNS0_8CallbackE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPtNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::~MovingMoments() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsD1Ev(void) {
    ALOGD("_ZN6webrtc13MovingMomentsD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Histogram::InsertNewestEntryAndUpdate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram26InsertNewestEntryAndUpdateEii(void) {
    ALOGD("_ZN6webrtc9Histogram26InsertNewestEntryAndUpdateEii() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::~Stream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6StreamD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6StreamD0Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc17Test_DelayMetrics12ByteSizeLongEv(void) {
    ALOGD("_ZNK6webrtc9audioproc17Test_DelayMetrics12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Init::~Init() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4InitD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4InitD1Ev() called");
    return 0;
}

/* Demangled: google::protobuf::internal::GenericTypeHandler<webrtc::audioproc::Test_Frame>::Merge(webrtc::audioproc::Test_Frame const&, webrtc::audioproc::Test_Frame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc10Test_FrameEE5MergeERKS5_PS5_(void) {
    ALOGD("_ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc10Test_FrameEE5MergeERKS5_PS5_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::level_estimator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15level_estimatorEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15level_estimatorEv() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::TwoBandsAnalysis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_15IFChannelBufferEPS1_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_15IFChannelBufferEPS1_() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancerC1Ev(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancerC1Ev() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec0Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec0Ub12 = NULL;

/* Demangled: webrtc::EchoControlMobileImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: WebRtcSpl_UpBy2IntToShort */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpBy2IntToShort(void) {
    ALOGD("WebRtcSpl_UpBy2IntToShort() called");
    return 0;
}

/* Demangled: webrtc::GetRightAlign(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13GetRightAlignEjj(void) {
    ALOGD("_ZN6webrtc13GetRightAlignEjj() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_data() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer10split_dataEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer10split_dataEv() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::HighPassFilterImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImplC2EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImplC2EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: std::__1::vector<void*, std::__1::allocator<void*> >::__append(unsigned int, void* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPvNS_9allocatorIS1_EEE8__appendEjRKS1_(void) {
    ALOGD("_ZNSt3__16vectorIPvNS_9allocatorIS1_EEE8__appendEjRKS1_() called");
    return 0;
}

/* Demangled: webrtc::LogMessage::LogMessage(char const*, int, webrtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10LogMessageC2EPKciNS_15LoggingSeverityE(void) {
    ALOGD("_ZN6webrtc10LogMessageC2EPKciNS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::TransientSuppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressorC2Ev(void) {
    ALOGD("_ZN6webrtc19TransientSuppressorC2Ev() called");
    return 0;
}

/* Demangled: WebRtcAecm_InitCore */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_InitCore(void) {
    ALOGD("WebRtcAecm_InitCore() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::CopyFrom(webrtc::audioproc::Test_Statistic const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogTimestamps(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage13LogTimestampsEb(void) {
    ALOGD("_ZN3rtc10LogMessage13LogTimestampsEb() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::GainApplier::GainApplier(unsigned int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility11GainApplierC1Ejf(void) {
    ALOGD("_ZN6webrtc15intelligibility11GainApplierC1Ejf() called");
    return 0;
}

/* Demangled: WebRtcIsac_TranscodeLPCCoef */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_TranscodeLPCCoef(void) {
    ALOGD("WebRtcIsac_TranscodeLPCCoef() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc3Cdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc3Cdf = NULL;

/* Demangled: webrtc::audioproc::Config::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc6Config21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanGain3Q12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanGain3Q12 = NULL;

/* Demangled: android_setCpuArm */
extern "C" __attribute__((visibility("default"))) int android_setCpuArm(void) {
    ALOGD("android_setCpuArm() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::TraceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImplC2Ev(void) {
    ALOGD("_ZN6webrtc9TraceImplC2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::OutputData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputDataC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputDataC1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics(webrtc::audioproc::Test_EchoMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetricsC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetricsC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::VoiceDetectionImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImplC2EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImplC2EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: rtc::CritScope::CritScope(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9CritScopeC2EPNS_15CriticalSectionE(void) {
    ALOGD("_ZN3rtc9CritScopeC2EPNS_15CriticalSectionE() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerD1Ev(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::~SincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerD1Ev(void) {
    ALOGD("_ZN6webrtc13SincResamplerD1Ev() called");
    return 0;
}

/* Demangled: android_getCpuFamily */
extern "C" __attribute__((visibility("default"))) int android_getCpuFamily(void) {
    ALOGD("android_getCpuFamily() called");
    return 0;
}

/* Demangled: WebRtc_enable_robust_validation */
extern "C" __attribute__((visibility("default"))) int WebRtc_enable_robust_validation(void) {
    ALOGD("WebRtc_enable_robust_validation() called");
    return 0;
}

/* Demangled: WebRtcVad_FindMinimum */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_FindMinimum(void) {
    ALOGD("WebRtcVad_FindMinimum() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_Statistic27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_Statistic27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::Matrix<std::__1::complex<float> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc6MatrixINSt3__17complexIfEEEE = NULL;

/* Demangled: WebRtcIsac_EncodeGain2 */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeGain2(void) {
    ALOGD("WebRtcIsac_EncodeGain2() called");
    return 0;
}

/* Demangled: WebRtcSpl_RandN */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RandN(void) {
    ALOGD("WebRtcSpl_RandN() called");
    return 0;
}

/* Exported Object: WebRtcAec_kMinFarendPSD */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_kMinFarendPSD = NULL;

/* Demangled: aec_rdft_inverse_128 */
extern "C" __attribute__((visibility("default"))) int aec_rdft_inverse_128(void) {
    ALOGD("aec_rdft_inverse_128() called");
    return 0;
}

/* Demangled: WebRtcSpl_Sqrt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Sqrt(void) {
    ALOGD("WebRtcSpl_Sqrt() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::CreateInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl14CreateInstanceEv(void) {
    ALOGD("_ZN6webrtc9TraceImpl14CreateInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::VoiceActivityDetector::ProcessChunk(short const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::UpdateGain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect10UpdateGainEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect10UpdateGainEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc4Test24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc4Test24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer(webrtc::IntelligibilityEnhancer::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancerC1ERKNS0_6ConfigE(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancerC1ERKNS0_6ConfigE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::echo_cancellation() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl17echo_cancellationEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl17echo_cancellationEv() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::Initialize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer10InitializeEii(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer10InitializeEii() called");
    return 0;
}

/* Demangled: WebRtcSpl_VectorBitShiftW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_VectorBitShiftW16(void) {
    ALOGD("WebRtcSpl_VectorBitShiftW16() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::likelihood() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18VoiceDetectionImpl10likelihoodEv(void) {
    ALOGD("_ZNK6webrtc18VoiceDetectionImpl10likelihoodEv() called");
    return 0;
}

/* Demangled: webrtc::FloatToS16(float const*, unsigned int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10FloatToS16EPKfjPs(void) {
    ALOGD("_ZN6webrtc10FloatToS16EPKfjPs() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltLevelsShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltLevelsShape = NULL;

/* Demangled: WebRtcIsac_AllZeroFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AllZeroFilter(void) {
    ALOGD("WebRtcIsac_AllZeroFilter() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::CloseFileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl13CloseFileImplEv(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl13CloseFileImplEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_MemSetW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MemSetW32(void) {
    ALOGD("WebRtcSpl_MemSetW32() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::OutputData(webrtc::audioproc::OutputData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputDataC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputDataC2ERKS1_() called");
    return 0;
}

/* Demangled: WebRtcIsac_StoreLpcGainUb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_StoreLpcGainUb(void) {
    ALOGD("WebRtcIsac_StoreLpcGainUb() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::FilterVariance(float const*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer14FilterVarianceEPKfPf(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer14FilterVarianceEPKfPf() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeSendBW */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeSendBW(void) {
    ALOGD("WebRtcIsac_DecodeSendBW() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc4Test21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: rtc::tracing::StartInternalCaptureToFile(__sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE(void) {
    ALOGD("_ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE() called");
    return 0;
}

/* Demangled: rtc::SystemInfo::SystemInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10SystemInfoC1Ev(void) {
    ALOGD("_ZN3rtc10SystemInfoC1Ev() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRcInitIndex */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRcInitIndex = NULL;

/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE(void) {
    ALOGD("_ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE() called");
    return 0;
}

/* Demangled: WebRtcSpl_RandU */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RandU(void) {
    ALOGD("WebRtcSpl_RandU() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc14Test_Statistic13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc14Test_Statistic13IsInitializedEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_(void) {
    ALOGD("_ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_() called");
    return 0;
}

/* Demangled: rtc::LogMessage::GetLogToStream(rtc::LogSink*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE(void) {
    ALOGD("_ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::MergeFrom(webrtc::audioproc::Test_EchoMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetrics9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetrics9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&, webrtc::Beamformer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigEPNS_10BeamformerIfEE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigEPNS_10BeamformerIfEE() called");
    return 0;
}

/* Demangled: webrtc::TracePosix::AddTime(char*, webrtc::TraceLevel) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc10TracePosix7AddTimeEPcNS_10TraceLevelE(void) {
    ALOGD("_ZNK6webrtc10TracePosix7AddTimeEPcNS_10TraceLevelE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_front(float* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic(webrtc::audioproc::Test_Statistic const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_StatisticC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_StatisticC2ERKS1_() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::DestroyHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc21EchoControlMobileImpl13DestroyHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc21EchoControlMobileImpl13DestroyHandleEPv() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Insert(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer6InsertEd(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer6InsertEd() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned long, unsigned long>(unsigned long const&, unsigned long const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17MakeCheckOpStringImmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void) {
    ALOGD("_ZN3rtc17MakeCheckOpStringImmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc() called");
    return 0;
}

/* Exported Object: webrtc::Trace::kTimestampLength */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc5Trace16kTimestampLengthE = NULL;

/* Demangled: webrtc::SplittingFilter::ThreeBandsSynthesis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_15IFChannelBufferEPS1_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_15IFChannelBufferEPS1_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_back(float*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::~ProcessingComponent() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ProcessingComponentD1Ev(void) {
    ALOGD("_ZN6webrtc19ProcessingComponentD1Ev() called");
    return 0;
}

/* Demangled: rtc::GlobalLockScope::GlobalLockScope(rtc::GlobalLockPod*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15GlobalLockScopeC2EPNS_13GlobalLockPodE(void) {
    ALOGD("_ZN3rtc15GlobalLockScopeC2EPNS_13GlobalLockPodE() called");
    return 0;
}

/* Exported Object: WebRtcSpl_DownsampleFast */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_DownsampleFast = NULL;

/* Exported Object: WebRtcSpl_MaxValueW32 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxValueW32 = NULL;

/* Demangled: webrtc::NoiseSuppressionImpl::NoiseSuppressionImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImplC2EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImplC2EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc4Test21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::Read(float* const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBuffer4ReadEPKPfjj(void) {
    ALOGD("_ZN6webrtc15AudioRingBuffer4ReadEPKPfjj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQindexUpperLimitLagHi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQindexUpperLimitLagHi = NULL;

/* Demangled: WebRtcSpl_Resample48khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample48khzTo8khz(void) {
    ALOGD("WebRtcSpl_Resample48khzTo8khz() called");
    return 0;
}

/* Demangled: webrtc::IFChannelBuffer::fbuf_const() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15IFChannelBuffer10fbuf_constEv(void) {
    ALOGD("_ZNK6webrtc15IFChannelBuffer10fbuf_constEv() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::LevelEstimatorImpl(rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImplC2EPN3rtc15CriticalSectionE(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImplC2EPN3rtc15CriticalSectionE() called");
    return 0;
}

/* Demangled: WebRtcIsac_Fftns */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Fftns(void) {
    ALOGD("WebRtcIsac_Fftns() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::ReleaseLockExclusive() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosix20ReleaseLockExclusiveEv(void) {
    ALOGD("_ZN6webrtc11RWLockPosix20ReleaseLockExclusiveEv() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::SetMaxFileSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImpl14SetMaxFileSizeEj(void) {
    ALOGD("_ZN6webrtc15FileWrapperImpl14SetMaxFileSizeEj() called");
    return 0;
}

/* Demangled: WebRtcSpl_RandUArray */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RandUArray(void) {
    ALOGD("WebRtcSpl_RandUArray() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::WriteMessageToDebugFile(webrtc::FileWrapper*, rtc::CriticalSection*, webrtc::AudioProcessingImpl::ApmDebugDumpThreadState*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl23WriteMessageToDebugFileEPNS_11FileWrapperEPN3rtc15CriticalSectionEPNS0_23ApmDebugDumpThreadStateE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl23WriteMessageToDebugFileEPNS_11FileWrapperEPN3rtc15CriticalSectionEPNS0_23ApmDebugDumpThreadStateE() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::NonlinearBeamformer::ProcessAudioBlock(std::__1::complex<float> const* const*, unsigned int, unsigned int, unsigned int, std::__1::complex<float>* const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_(void) {
    ALOGD("_ZThn4_N6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcGainCdfMat */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainCdfMat = NULL;

/* Demangled: WebRtcIsac_GetNewBitStream */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetNewBitStream(void) {
    ALOGD("WebRtcIsac_GetNewBitStream() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::TwoBandsStates, std::__1::allocator<webrtc::TwoBandsStates> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEE8__appendEj() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_(void) {
    ALOGD("_ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag3Hi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag3Hi = NULL;

/* Demangled: webrtc::audioproc::Event::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN6webrtc9audioproc5Event21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Config11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc6Config11GetTypeNameEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_delay_offset_ms(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19set_delay_offset_msEi(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19set_delay_offset_msEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc20EchoCancellationImpl10InitializeEv(void) {
    ALOGD("_ZThn4_N6webrtc20EchoCancellationImpl10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::~Test() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4TestD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc4TestD1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc16Test_EchoMetrics13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc16Test_EchoMetrics13IsInitializedEv() called");
    return 0;
}

/* Demangled: WebRtcVad_Process */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Process(void) {
    ALOGD("WebRtcVad_Process() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogStartTime() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage12LogStartTimeEv(void) {
    ALOGD("_ZN3rtc10LogMessage12LogStartTimeEv() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::zerofudge(std::__1::complex<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility9zerofudgeENSt3__17complexIfEE(void) {
    ALOGD("_ZN6webrtc15intelligibility9zerofudgeENSt3__17complexIfEE() called");
    return 0;
}

/* Exported Object: WebRtcNsx_PrepareSpectrum */
extern "C" __attribute__((visibility("default"))) void* WebRtcNsx_PrepareSpectrum = NULL;

/* Exported Object: WebRtcAec_overDriveCurve */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_overDriveCurve = NULL;

/* Demangled: webrtc::audioproc::Stream::MergeFrom(webrtc::audioproc::Stream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitPitchAnalysis */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitPitchAnalysis(void) {
    ALOGD("WebRtcIsac_InitPitchAnalysis() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::CheckSizes(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc14AudioConverter10CheckSizesEjj(void) {
    ALOGD("_ZNK6webrtc14AudioConverter10CheckSizesEjj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltInitIndexGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltInitIndexGain = NULL;

/* Demangled: webrtc::TraceImpl::AddThreadId(char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9TraceImpl11AddThreadIdEPc(void) {
    ALOGD("_ZNK6webrtc9TraceImpl11AddThreadIdEPc() called");
    return 0;
}

/* Demangled: webrtc::ProcessingComponent::handle(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19ProcessingComponent6handleEj(void) {
    ALOGD("_ZNK6webrtc19ProcessingComponent6handleEj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQIndexUpperLimitLagLo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQIndexUpperLimitLagLo = NULL;

/* Demangled: webrtc::SincResampler::Convolve_C(float const*, float const*, float const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d(void) {
    ALOGD("_ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d() called");
    return 0;
}

/* Demangled: webrtc::Agc::~Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcD1Ev(void) {
    ALOGD("_ZN6webrtc3AgcD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Histogram::Create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram6CreateEi(void) {
    ALOGD("_ZN6webrtc9Histogram6CreateEi() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_DelayMetrics>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc17Test_DelayMetricsEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc17Test_DelayMetricsEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(webrtc::AudioFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPNS_10AudioFrameE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl13ProcessStreamEPNS_10AudioFrameE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcGainEntropySearch */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainEntropySearch = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec2Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec2Ub12 = NULL;

/* Demangled: webrtc::PushSincResampler::Run(unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResampler3RunEjPf(void) {
    ALOGD("_ZN6webrtc17PushSincResampler3RunEjPf() called");
    return 0;
}

/* Demangled: WebRtcAec_extended_filter_enabled */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_extended_filter_enabled(void) {
    ALOGD("WebRtcAec_extended_filter_enabled() called");
    return 0;
}

/* Demangled: WebRtc_DelayEstimatorProcessFix */
extern "C" __attribute__((visibility("default"))) int WebRtc_DelayEstimatorProcessFix(void) {
    ALOGD("WebRtc_DelayEstimatorProcessFix() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::Enable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl6EnableEb(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl6EnableEb() called");
    return 0;
}

/* Demangled: webrtc::CpuInfo::DetectNumberOfCores() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7CpuInfo19DetectNumberOfCoresEv(void) {
    ALOGD("_ZN6webrtc7CpuInfo19DetectNumberOfCoresEv() called");
    return 0;
}

/* Demangled: google::protobuf::internal::GenericTypeHandler<webrtc::audioproc::Test>::Merge(webrtc::audioproc::Test const&, webrtc::audioproc::Test*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc4TestEE5MergeERKS5_PS5_(void) {
    ALOGD("_ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc4TestEE5MergeERKS5_PS5_() called");
    return 0;
}

/* Demangled: WebRtcVad_set_mode */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_set_mode(void) {
    ALOGD("WebRtcVad_set_mode() called");
    return 0;
}

/* Demangled: rtc::encode(char*, unsigned int, char const*, unsigned int, char const*, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc6encodeEPcjPKcjS2_c(void) {
    ALOGD("_ZN3rtc6encodeEPcjPKcjS2_c() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeInterpolLpcUb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeInterpolLpcUb(void) {
    ALOGD("WebRtcIsac_DecodeInterpolLpcUb() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQGainCdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQGainCdf = NULL;

/* Demangled: webrtc::ConditionVariablePosix::Construct() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosix9ConstructEv(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosix9ConstructEv() called");
    return 0;
}

/* Exported Object: WebRtcAec_weightCurve */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_weightCurve = NULL;

/* Demangled: webrtc::EchoCancellationImpl::ReadQueuedRenderData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl20ReadQueuedRenderDataEv(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl20ReadQueuedRenderDataEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::num_input_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::analog_level_minimum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl20analog_level_minimumEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl20analog_level_minimumEv() called");
    return 0;
}

/* Demangled: rtc::s_transform(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int (*)(char*, unsigned int, char const*, unsigned int)) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11s_transformERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPFjPcjPKcjE(void) {
    ALOGD("_ZN3rtc11s_transformERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPFjPcjPKcjE() called");
    return 0;
}

/* Demangled: WebRtcIsac_UpdateBandwidthEstimator */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_UpdateBandwidthEstimator(void) {
    ALOGD("WebRtcIsac_UpdateBandwidthEstimator() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec2Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec2Ub16 = NULL;

/* Demangled: webrtc::Trace::level_filter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace12level_filterEv(void) {
    ALOGD("_ZN6webrtc5Trace12level_filterEv() called");
    return 0;
}

/* Demangled: webrtc::RWLockPosix::~RWLockPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RWLockPosixD0Ev(void) {
    ALOGD("_ZN6webrtc11RWLockPosixD0Ev() called");
    return 0;
}

/* Demangled: webrtc::IFChannelBuffer::IFChannelBuffer(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15IFChannelBufferC1Ejjj(void) {
    ALOGD("_ZN6webrtc15IFChannelBufferC1Ejjj() called");
    return 0;
}

/* Demangled: rtc::xml_decode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10xml_decodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc10xml_decodeEPcjPKcj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltModelCdfPtr */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltModelCdfPtr = NULL;

/* Demangled: WebRtcIsac_CorrelateIntraVec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_CorrelateIntraVec(void) {
    ALOGD("WebRtcIsac_CorrelateIntraVec() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeJitterInfo */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeJitterInfo(void) {
    ALOGD("WebRtcIsac_DecodeJitterInfo() called");
    return 0;
}

/* Demangled: WebRtcIsac_Decode */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Decode(void) {
    ALOGD("WebRtcIsac_Decode() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag2Lo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag2Lo = NULL;

/* Demangled: WebRtcAec_BufferFarend */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_BufferFarend(void) {
    ALOGD("WebRtcAec_BufferFarend() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: webrtc::EchoControlMobileImpl::enable_comfort_noise(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb() called");
    return 0;
}

/* Demangled: WebRtc_get_allowed_offset */
extern "C" __attribute__((visibility("default"))) int WebRtc_get_allowed_offset(void) {
    ALOGD("WebRtc_get_allowed_offset() called");
    return 0;
}

/* Demangled: rtc::unescape(char*, unsigned int, char const*, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8unescapeEPcjPKcjc(void) {
    ALOGD("_ZN3rtc8unescapeEPcjPKcjc() called");
    return 0;
}

/* Demangled: WebRtcNsx_ProcessCore */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_ProcessCore(void) {
    ALOGD("WebRtcNsx_ProcessCore() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::Initialize(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20NoiseSuppressionImpl10InitializeEji(void) {
    ALOGD("_ZN6webrtc20NoiseSuppressionImpl10InitializeEji() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::AimAt(webrtc::SphericalPoint<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer5AimAtERKNS_14SphericalPointIfEE(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer5AimAtERKNS_14SphericalPointIfEE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQGain2BoundaryLevels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQGain2BoundaryLevels = NULL;

/* Demangled: WebRtcIsac_SetInitialBweBottleneck */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SetInitialBweBottleneck(void) {
    ALOGD("WebRtcIsac_SetInitialBweBottleneck() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::~ConditionVariablePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosixD2Ev(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosixD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::InternalSwap(webrtc::audioproc::ReverseStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: WebRtcIsac_QuantizeLpcGain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_QuantizeLpcGain(void) {
    ALOGD("WebRtcIsac_QuantizeLpcGain() called");
    return 0;
}

/* Demangled: WebRtcIsac_WeightingFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_WeightingFilter(void) {
    ALOGD("WebRtcIsac_WeightingFilter() called");
    return 0;
}

/* Demangled: webrtc::FileWrapperImpl::~FileWrapperImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FileWrapperImplD0Ev(void) {
    ALOGD("_ZN6webrtc15FileWrapperImplD0Ev() called");
    return 0;
}

/* Demangled: WebRtcAecm_FetchFarFrame */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_FetchFarFrame(void) {
    ALOGD("WebRtcAecm_FetchFarFrame() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplD2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplD2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::Enable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl6EnableEb(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl6EnableEb() called");
    return 0;
}

/* Demangled: WebRtcSpl_MinIndexW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MinIndexW16(void) {
    ALOGD("WebRtcSpl_MinIndexW16() called");
    return 0;
}

/* Demangled: webrtc::TracePosix::~TracePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10TracePosixD0Ev(void) {
    ALOGD("_ZN6webrtc10TracePosixD0Ev() called");
    return 0;
}

/* Demangled: webrtc::Histogram::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram6CreateEv(void) {
    ALOGD("_ZN6webrtc9Histogram6CreateEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::~Test_DelayMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetricsD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetricsD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeNoiseSuppression() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl26InitializeNoiseSuppressionEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl26InitializeNoiseSuppressionEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::set_suppression_level(webrtc::EchoCancellation::SuppressionLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImpl21set_suppression_levelENS_16EchoCancellation16SuppressionLevelE(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImpl21set_suppression_levelENS_16EchoCancellation16SuppressionLevelE() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::CalculatePostfilterMask(webrtc::ComplexMatrix<float> const&, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer23CalculatePostfilterMaskERKNS_13ComplexMatrixIfEEfff(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer23CalculatePostfilterMaskERKNS_13ComplexMatrixIfEEfff() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10OutputData11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc10OutputData11GetTypeNameEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::SetLogToStderr(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage14SetLogToStderrEb(void) {
    ALOGD("_ZN3rtc10LogMessage14SetLogToStderrEb() called");
    return 0;
}

/* Demangled: WebRtcIsac_BwExpand */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_BwExpand(void) {
    ALOGD("WebRtcIsac_BwExpand() called");
    return 0;
}

/* Demangled: std::__1::vector<signed char*, std::__1::allocator<signed char*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPaNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPaNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Stream_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc25_Stream_default_instance_E = NULL;

/* Exported Object: WebRtcAec_FilterAdaptation */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_FilterAdaptation = NULL;

/* Demangled: webrtc::audioproc::Init::CopyFrom(webrtc::audioproc::Init const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Init8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Init8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImpl19ProcessCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: rtc::url_decode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10url_decodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc10url_decodeEPcjPKcj() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::set_activity(webrtc::AudioFrame::VADActivity) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer12set_activityENS_10AudioFrame11VADActivityE(void) {
    ALOGD("_ZN6webrtc11AudioBuffer12set_activityENS_10AudioFrame11VADActivityE() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::Resample(float const*, unsigned int, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResampler8ResampleEPKfjPfj(void) {
    ALOGD("_ZN6webrtc17PushSincResampler8ResampleEPKfjPfj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16InitializeLockedEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16InitializeLockedEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample48khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample48khzTo16khz(void) {
    ALOGD("WebRtcSpl_ResetResample48khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::Histogram::Histogram(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9HistogramC1Ei(void) {
    ALOGD("_ZN6webrtc9HistogramC1Ei() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessing::Create(webrtc::Config const&, webrtc::Beamformer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigEPNS_10BeamformerIfEE(void) {
    ALOGD("_ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigEPNS_10BeamformerIfEE() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::active() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc23IntelligibilityEnhancer6activeEv(void) {
    ALOGD("_ZNK6webrtc23IntelligibilityEnhancer6activeEv() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerC1Ejj(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerC1Ejj() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::PitchAnalysis(double*, double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j(void) {
    ALOGD("_ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j() called");
    return 0;
}

/* Exported Object: vtable for webrtc::CopyConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13CopyConverterE = NULL;

/* Demangled: WebRtcIsac_EncodeLpcUB */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeLpcUB(void) {
    ALOGD("WebRtcIsac_EncodeLpcUB() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeRcu */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeRcu(void) {
    ALOGD("WebRtcIsac_DecodeRcu() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::ConditionVariablePosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosixC1Ev(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosixC1Ev() called");
    return 0;
}

/* Demangled: webrtc::Histogram::~Histogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9HistogramD2Ev(void) {
    ALOGD("_ZN6webrtc9HistogramD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(webrtc::AudioFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPNS_10AudioFrameE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPNS_10AudioFrameE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::noise_suppression() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl17noise_suppressionEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl17noise_suppressionEv() called");
    return 0;
}

/* Demangled: rtc::SetCurrentThreadName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc20SetCurrentThreadNameEPKc(void) {
    ALOGD("_ZN3rtc20SetCurrentThreadNameEPKc() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::InitTargetCovMats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer17InitTargetCovMatsEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer17InitTargetCovMatsEv() called");
    return 0;
}

/* Demangled: WebRtc_FreeDelayEstimatorFarend */
extern "C" __attribute__((visibility("default"))) int WebRtc_FreeDelayEstimatorFarend(void) {
    ALOGD("WebRtc_FreeDelayEstimatorFarend() called");
    return 0;
}

/* Demangled: webrtc::Histogram::GetBinIndex(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram11GetBinIndexEd(void) {
    ALOGD("_ZN6webrtc9Histogram11GetBinIndexEd() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::ChunkSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc13SincResampler9ChunkSizeEv(void) {
    ALOGD("_ZNK6webrtc13SincResampler9ChunkSizeEv() called");
    return 0;
}

/* Exported Object: WebRtcNsx_AnalysisUpdate */
extern "C" __attribute__((visibility("default"))) void* WebRtcNsx_AnalysisUpdate = NULL;

/* Demangled: void google::protobuf::internal::arena_destruct_object<google::protobuf::internal::InternalMetadataWithArenaBase<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, google::protobuf::internal::InternalMetadataWithArenaLite>::Container>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS1_29InternalMetadataWithArenaLiteEE9ContainerEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS1_29InternalMetadataWithArenaLiteEE9ContainerEEEvPv() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::OutputData>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10OutputDataEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10OutputDataEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferC1Ei(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferC1Ei() called");
    return 0;
}

/* Demangled: WebRtcIsac_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Free(void) {
    ALOGD("WebRtcIsac_Free() called");
    return 0;
}

/* Demangled: WebRtcIsac_UpdateUplinkBw */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_UpdateUplinkBw(void) {
    ALOGD("WebRtcIsac_UpdateUplinkBw() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetricsC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetricsC1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::num_handles_required() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl20num_handles_requiredEv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl20num_handles_requiredEv() called");
    return 0;
}

/* Demangled: rtc::escape(char*, unsigned int, char const*, unsigned int, char const*, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc6escapeEPcjPKcjS2_c(void) {
    ALOGD("_ZN3rtc6escapeEPcjPKcjS2_c() called");
    return 0;
}

/* Demangled: webrtc::AlignedMalloc(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13AlignedMallocEjj(void) {
    ALOGD("_ZN6webrtc13AlignedMallocEjj() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecHistOneStepMulti */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecHistOneStepMulti(void) {
    ALOGD("WebRtcIsac_DecHistOneStepMulti() called");
    return 0;
}

/* Demangled: WebRtcIsac_ControlBwe */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_ControlBwe(void) {
    ALOGD("WebRtcIsac_ControlBwe() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event_Type_IsValid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc18Event_Type_IsValidEi(void) {
    ALOGD("_ZN6webrtc9audioproc18Event_Type_IsValidEi() called");
    return 0;
}

/* Demangled: webrtc::EventTracer::AddTraceEvent(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh(void) {
    ALOGD("_ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferD2Ev(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferD2Ev() called");
    return 0;
}

/* Demangled: WebRtcAgc_AddFarend */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_AddFarend(void) {
    ALOGD("WebRtcAgc_AddFarend() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_stream_key_pressed(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb() called");
    return 0;
}

/* Demangled: rtc::utf8_encode(char*, unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11utf8_encodeEPcjm(void) {
    ALOGD("_ZN3rtc11utf8_encodeEPcjm() called");
    return 0;
}

/* Exported Object: webrtc::NonlinearBeamformer::kNumFreqBins */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc19NonlinearBeamformer12kNumFreqBinsE = NULL;

/* Demangled: WebRtcIsac_ReadFrameLen */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_ReadFrameLen(void) {
    ALOGD("WebRtcIsac_ReadFrameLen() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::TraceFileImpl(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImpl13TraceFileImplEPc(void) {
    ALOGD("_ZN6webrtc9TraceImpl13TraceFileImplEPc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::SparseFIRFilter*, std::__1::allocator<webrtc::SparseFIRFilter*> >::__push_back_slow_path<webrtc::SparseFIRFilter* const&>(webrtc::SparseFIRFilter* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc15SparseFIRFilterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc15SparseFIRFilterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: WebRtcSpl_LpcToReflCoef */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_LpcToReflCoef(void) {
    ALOGD("WebRtcSpl_LpcToReflCoef() called");
    return 0;
}

/* Demangled: WebRtcAec_aec_core */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_aec_core(void) {
    ALOGD("WebRtcAec_aec_core() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetNewFrameLen */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetNewFrameLen(void) {
    ALOGD("WebRtcIsac_GetNewFrameLen() called");
    return 0;
}

/* Demangled: WebRtcSpl_FilterARFastQ12 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_FilterARFastQ12(void) {
    ALOGD("WebRtcSpl_FilterARFastQ12() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::UpdateCompressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect16UpdateCompressorEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect16UpdateCompressorEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::CopyFrom(webrtc::audioproc::Stream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream8CopyFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: rtc::tokenize_with_empty_tokens(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: GetCPUInfoNoASM(CPUFeature) */
extern "C" __attribute__((visibility("default"))) int _Z15GetCPUInfoNoASM10CPUFeature(void) {
    ALOGD("_Z15GetCPUInfoNoASM10CPUFeature() called");
    return 0;
}

/* Demangled: webrtc::FileWrapper::Rewind() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11FileWrapper6RewindEv(void) {
    ALOGD("_ZN6webrtc11FileWrapper6RewindEv() called");
    return 0;
}

/* Demangled: WebRtcAec_ResampleLinear */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_ResampleLinear(void) {
    ALOGD("WebRtcAec_ResampleLinear() called");
    return 0;
}

/* Exported Object: rdft_w */
extern "C" __attribute__((visibility("default"))) void* rdft_w = NULL;

/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectD2Ev(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectD2Ev() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::Enable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImpl6EnableEb(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImpl6EnableEb() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetLpcGain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetLpcGain(void) {
    ALOGD("WebRtcIsac_GetLpcGain() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec4Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec4Ub12 = NULL;

/* Demangled: webrtc::Histogram::Histogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9HistogramC1Ev(void) {
    ALOGD("_ZN6webrtc9HistogramC1Ev() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_stream_analog_level(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl23set_stream_analog_levelEi(void) {
    ALOGD("_ZN6webrtc15GainControlImpl23set_stream_analog_levelEi() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::is_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl10is_enabledEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl10is_enabledEv() called");
    return 0;
}

/* Demangled: rtc::html_decode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11html_decodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc11html_decodeEPcjPKcj() called");
    return 0;
}

/* Demangled: WebRtcNsx_ComputeSpectralFlatness */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_ComputeSpectralFlatness(void) {
    ALOGD("WebRtcNsx_ComputeSpectralFlatness() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc5Event21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::Config(webrtc::audioproc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6ConfigC2ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6ConfigC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_DelayMetrics::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc17Test_DelayMetrics13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc17Test_DelayMetrics13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: rtc::unsafe_filename_characters() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26unsafe_filename_charactersEv(void) {
    ALOGD("_ZN3rtc26unsafe_filename_charactersEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltCdfGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltCdfGain = NULL;

/* Demangled: WebRtcSpl_MaxAbsValueW32C */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxAbsValueW32C(void) {
    ALOGD("WebRtcSpl_MaxAbsValueW32C() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressor::Suppress(float*, unsigned int, int, float const*, unsigned int, float const*, unsigned int, float, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19TransientSuppressor8SuppressEPfjiPKfjS3_jfb(void) {
    ALOGD("_ZN6webrtc19TransientSuppressor8SuppressEPfjiPKfjS3_jfb() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::ConfigureHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv() called");
    return 0;
}

/* Demangled: webrtc::AudioRingBuffer::AudioRingBuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioRingBufferC2Ejj(void) {
    ALOGD("_ZN6webrtc15AudioRingBufferC2Ejj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec01Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec01Ub16 = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec4Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec4Ub16 = NULL;

/* Demangled: WebRtcSpl_DownBy2IntToShort */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownBy2IntToShort(void) {
    ALOGD("WebRtcSpl_DownBy2IntToShort() called");
    return 0;
}

/* Demangled: android_getCpuIdArm */
extern "C" __attribute__((visibility("default"))) int android_getCpuIdArm(void) {
    ALOGD("android_getCpuIdArm() called");
    return 0;
}

/* Demangled: Loudness2Db(double) */
extern "C" __attribute__((visibility("default"))) int _Z11Loudness2Dbd(void) {
    ALOGD("_Z11Loudness2Dbd() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::Stream(webrtc::audioproc::Stream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6StreamC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc6StreamC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10OutputData13SetCachedSizeEi(void) {
    ALOGD("_ZNK6webrtc9audioproc10OutputData13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: WebRtcNsx_Process */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_Process(void) {
    ALOGD("WebRtcNsx_Process() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample44khzTo32khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample44khzTo32khz(void) {
    ALOGD("WebRtcSpl_Resample44khzTo32khz() called");
    return 0;
}

/* Exported Object: WebRtcAecm_kSinTable */
extern "C" __attribute__((visibility("default"))) void* WebRtcAecm_kSinTable = NULL;

/* Demangled: webrtc::audioproc::Stream* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Stream>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6StreamEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6StreamEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: rtc::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageD1Ev(void) {
    ALOGD("_ZN3rtc10LogMessageD1Ev() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::ApplyLowFrequencyCorrection() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer27ApplyLowFrequencyCorrectionEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer27ApplyLowFrequencyCorrectionEv() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::VarianceArray::WindowedStep(std::__1::complex<float> const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility13VarianceArray12WindowedStepEPKNSt3__17complexIfEEb(void) {
    ALOGD("_ZN6webrtc15intelligibility13VarianceArray12WindowedStepEPKNSt3__17complexIfEEb() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample48khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample48khzTo8khz(void) {
    ALOGD("WebRtcSpl_ResetResample48khzTo8khz() called");
    return 0;
}

/* Demangled: webrtc::Trace::set_level_filter(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Trace16set_level_filterEi(void) {
    ALOGD("_ZN6webrtc5Trace16set_level_filterEi() called");
    return 0;
}

/* Demangled: WebRtcAec_CreateResampler */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_CreateResampler(void) {
    ALOGD("WebRtcAec_CreateResampler() called");
    return 0;
}

/* Demangled: WebRtcAecm_AsymFilt */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_AsymFilt(void) {
    ALOGD("WebRtcAecm_AsymFilt() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::InitializeHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc20EchoCancellationImpl16InitializeHandleEPv(void) {
    ALOGD("_ZThn4_NK6webrtc20EchoCancellationImpl16InitializeHandleEPv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQArRc5Levels */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc5Levels = NULL;

/* Demangled: webrtc::WPDNode::~WPDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeD2Ev(void) {
    ALOGD("_ZN6webrtc7WPDNodeD2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Stream5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc6Stream5ClearEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQMeanLag3Mid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQMeanLag3Mid = NULL;

/* Exported Object: WebRtcIsac_kQArRc6Cdf */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQArRc6Cdf = NULL;

/* Demangled: webrtc::audioproc::Event::~Event() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5EventD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc5EventD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl10InitializeEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::InitializeHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl16InitializeHandleEPv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl16InitializeHandleEPv() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::is_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18HighPassFilterImpl10is_enabledEv(void) {
    ALOGD("_ZNK6webrtc18HighPassFilterImpl10is_enabledEv() called");
    return 0;
}

/* Demangled: rtc::CurrentTmTime(tm*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13CurrentTmTimeEP2tmPi(void) {
    ALOGD("_ZN3rtc13CurrentTmTimeEP2tmPi() called");
    return 0;
}

/* Demangled: rtc::VPrintError(char const*, std::__va_list) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11VPrintErrorEPKcSt9__va_list(void) {
    ALOGD("_ZN3rtc11VPrintErrorEPKcSt9__va_list() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecHistBisectMulti */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecHistBisectMulti(void) {
    ALOGD("WebRtcIsac_DecHistBisectMulti() called");
    return 0;
}

/* Demangled: WebRtcSpl_VectorBitShiftW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_VectorBitShiftW32(void) {
    ALOGD("WebRtcSpl_VectorBitShiftW32() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc13ReverseStream13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc13ReverseStream13IsInitializedEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned int, unsigned int>(unsigned int const&, unsigned int const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17MakeCheckOpStringIjjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void) {
    ALOGD("_ZN3rtc17MakeCheckOpStringIjjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc() called");
    return 0;
}

/* Demangled: webrtc::intelligibility::NewMean(std::__1::complex<float>, std::__1::complex<float>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15intelligibility7NewMeanENSt3__17complexIfEES3_j(void) {
    ALOGD("_ZN6webrtc15intelligibility7NewMeanENSt3__17complexIfEES3_j() called");
    return 0;
}

/* Demangled: WebRtcSpl_AddVectorsAndShift */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AddVectorsAndShift(void) {
    ALOGD("WebRtcSpl_AddVectorsAndShift() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::is_rev_processed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl16is_rev_processedEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl16is_rev_processedEv() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBankC2Ej(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBankC2Ej() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxIndexW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxIndexW16(void) {
    ALOGD("WebRtcSpl_MaxIndexW16() called");
    return 0;
}

/* Demangled: webrtc::Atomic32::operator+=(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32pLEi(void) {
    ALOGD("_ZN6webrtc8Atomic32pLEi() called");
    return 0;
}

/* Exported Object: WebRtcAec_OverdriveAndSuppress */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_OverdriveAndSuppress = NULL;

/* Demangled: webrtc::audioproc::Test_Statistic::~Test_Statistic() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc14Test_StatisticD0Ev(void) {
    ALOGD("_ZN6webrtc9audioproc14Test_StatisticD0Ev() called");
    return 0;
}

/* Demangled: webrtc::CriticalSectionPosix::~CriticalSectionPosix() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CriticalSectionPosixD0Ev(void) {
    ALOGD("_ZN6webrtc20CriticalSectionPosixD0Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6Config27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc6Config27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc10Test_Frame24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc10Test_Frame24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_bands_const(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer17split_bands_constEj(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer17split_bands_constEj() called");
    return 0;
}

/* Demangled: std::__1::vector<rtc::scoped_ptr<webrtc::NoiseSuppressionImpl::Suppressor, rtc::DefaultDeleter<webrtc::NoiseSuppressionImpl::Suppressor> >, std::__1::allocator<rtc::scoped_ptr<webrtc::NoiseSuppressionImpl::Suppressor, rtc::DefaultDeleter<webrtc::NoiseSuppressionImpl::Suppressor> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN3rtc10scoped_ptrIN6webrtc20NoiseSuppressionImpl10SuppressorENS1_14DefaultDeleterIS5_EEEENS_9allocatorIS8_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN3rtc10scoped_ptrIN6webrtc20NoiseSuppressionImpl10SuppressorENS1_14DefaultDeleterIS5_EEEENS_9allocatorIS8_EEE8__appendEj() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeRc */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeRc(void) {
    ALOGD("WebRtcIsac_DecodeRc() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodePlc */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodePlc(void) {
    ALOGD("WebRtcIsac_DecodePlc() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample48khzTo32khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample48khzTo32khz(void) {
    ALOGD("WebRtcSpl_Resample48khzTo32khz() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplD2Ev(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplD2Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::NoiseSuppressionImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc20NoiseSuppressionImplE = NULL;

/* Demangled: WebRtcIsac_DecorrelateIntraVec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecorrelateIntraVec(void) {
    ALOGD("WebRtcIsac_DecorrelateIntraVec() called");
    return 0;
}

/* Demangled: WebRtcSpl_AutoCorrelation */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AutoCorrelation(void) {
    ALOGD("WebRtcSpl_AutoCorrelation() called");
    return 0;
}

/* Demangled: webrtc::ConditionVariablePosix::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ConditionVariablePosix6CreateEv(void) {
    ALOGD("_ZN6webrtc22ConditionVariablePosix6CreateEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_DotProductWithScale */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DotProductWithScale(void) {
    ALOGD("WebRtcSpl_DotProductWithScale() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::~Test_Frame() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_FrameD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_FrameD1Ev() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer5ResetEv(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer5ResetEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FIRFilterC */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc10FIRFilterCE = NULL;

/* Exported Object: WebRtcIsac_kQInitIndexLagHi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQInitIndexLagHi = NULL;

/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcD1Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::GainControlImpl::GetHandleError(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZThn4_NK6webrtc15GainControlImpl14GetHandleErrorEPv(void) {
    ALOGD("_ZThn4_NK6webrtc15GainControlImpl14GetHandleErrorEPv() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressionImpl::speech_probability() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20NoiseSuppressionImpl18speech_probabilityEv(void) {
    ALOGD("_ZNK6webrtc20NoiseSuppressionImpl18speech_probabilityEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltMaxIndGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltMaxIndGain = NULL;

/* Demangled: webrtc::audioproc::Event::Event() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5EventC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc5EventC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::stream_delay_ms() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::IsRunning() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc14PlatformThread9IsRunningEv(void) {
    ALOGD("_ZNK3rtc14PlatformThread9IsRunningEv() called");
    return 0;
}

/* Exported Object: WebRtcAec_kNormalSmoothingCoefficients */
extern "C" __attribute__((visibility("default"))) void* WebRtcAec_kNormalSmoothingCoefficients = NULL;

/* Demangled: webrtc::GainControlImpl::ReadQueuedRenderData() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl20ReadQueuedRenderDataEv(void) {
    ALOGD("_ZN6webrtc15GainControlImpl20ReadQueuedRenderDataEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_Poly2LarUB */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Poly2LarUB(void) {
    ALOGD("WebRtcIsac_Poly2LarUB() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdfSizeLo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdfSizeLo = NULL;

/* Demangled: WebRtcSpl_UpBy2IntToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpBy2IntToInt(void) {
    ALOGD("WebRtcSpl_UpBy2IntToInt() called");
    return 0;
}

/* Demangled: WebRtcAec_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_Create(void) {
    ALOGD("WebRtcAec_Create() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Stream::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Stream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK6webrtc9audioproc6Stream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessStreamLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19ProcessStreamLockedEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19ProcessStreamLockedEv() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::~PlatformThread() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadD2Ev(void) {
    ALOGD("_ZN3rtc14PlatformThreadD2Ev() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltCdfPtrGain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltCdfPtrGain = NULL;

/* Demangled: WebRtcSpl_LevinsonDurbin */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_LevinsonDurbin(void) {
    ALOGD("WebRtcSpl_LevinsonDurbin() called");
    return 0;
}

/* Demangled: webrtc::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10LogMessageD1Ev(void) {
    ALOGD("_ZN6webrtc10LogMessageD1Ev() called");
    return 0;
}

/* Demangled: webrtc::NonlinearBeamformer::ApplyHighFrequencyCorrection() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NonlinearBeamformer28ApplyHighFrequencyCorrectionEv(void) {
    ALOGD("_ZN6webrtc19NonlinearBeamformer28ApplyHighFrequencyCorrectionEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQGainInitIndex */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQGainInitIndex = NULL;

/* Demangled: webrtc::audioproc::ReverseStream::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE() called");
    return 0;
}

/* Demangled: webrtc::metrics::HistogramFactoryGetCounts(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii(void) {
    ALOGD("_ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii() called");
    return 0;
}

/* Demangled: WebRtcIsac_AddMeanToLinearDomain */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AddMeanToLinearDomain(void) {
    ALOGD("WebRtcIsac_AddMeanToLinearDomain() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::~Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6ConfigD2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6ConfigD2Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::audioproc::Stream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc9audioproc6StreamE = NULL;

/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame(webrtc::audioproc::Test_Frame const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_FrameC1ERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_FrameC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::stream_drift_samples() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20EchoCancellationImpl20stream_drift_samplesEv(void) {
    ALOGD("_ZNK6webrtc20EchoCancellationImpl20stream_drift_samplesEv() called");
    return 0;
}

/* Demangled: rtc::TimeNanos() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9TimeNanosEv(void) {
    ALOGD("_ZN3rtc9TimeNanosEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::ConditionVariablePosix */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc22ConditionVariablePosixE = NULL;

/* Demangled: WebRtc_FreeBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_FreeBuffer(void) {
    ALOGD("WebRtc_FreeBuffer() called");
    return 0;
}

/* Demangled: WebRtc_AllocateFarendBufferMemory */
extern "C" __attribute__((visibility("default"))) int WebRtc_AllocateFarendBufferMemory(void) {
    ALOGD("WebRtc_AllocateFarendBufferMemory() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncodeJitterInfo */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncodeJitterInfo(void) {
    ALOGD("WebRtcIsac_EncodeJitterInfo() called");
    return 0;
}

/* Demangled: WebRtcSpl_FreeRealFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_FreeRealFFT(void) {
    ALOGD("WebRtcSpl_FreeRealFFT() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilterC1Ejjj(void) {
    ALOGD("_ZN6webrtc15SplittingFilterC1Ejjj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImpl19ProcessCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: rtc::Event::~Event() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventD2Ev(void) {
    ALOGD("_ZN3rtc5EventD2Ev() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::dbg_sev_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage8dbg_sev_E = NULL;

/* Demangled: WebRtcSpl_DivW32HiLow */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivW32HiLow(void) {
    ALOGD("WebRtcSpl_DivW32HiLow() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_Frame::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10Test_Frame5ClearEv(void) {
    ALOGD("_ZN6webrtc9audioproc10Test_Frame5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::AllocateRenderQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl19AllocateRenderQueueEv(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl19AllocateRenderQueueEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample8khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample8khzTo48khz(void) {
    ALOGD("WebRtcSpl_Resample8khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::Histogram::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Histogram5ResetEv(void) {
    ALOGD("_ZN6webrtc9Histogram5ResetEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::AddLogToStream(rtc::LogSink*, rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: WebRtcIsac_QuantizeUncorrLar */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_QuantizeUncorrLar(void) {
    ALOGD("WebRtcIsac_QuantizeUncorrLar() called");
    return 0;
}

/* Demangled: WebRtcIsac_AllpassFilterForDec */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AllpassFilterForDec(void) {
    ALOGD("WebRtcIsac_AllpassFilterForDec() called");
    return 0;
}

/* Demangled: WebRtcAec_InitAec */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_InitAec(void) {
    ALOGD("WebRtcAec_InitAec() called");
    return 0;
}

/* Demangled: WebRtcAec_ProcessFrames */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_ProcessFrames(void) {
    ALOGD("WebRtcAec_ProcessFrames() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::SetLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect8SetLevelEi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect8SetLevelEi() called");
    return 0;
}

/* Demangled: webrtc::audioproc::OutputData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc10OutputData27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN6webrtc9audioproc10OutputData27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetRedPayload */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetRedPayload(void) {
    ALOGD("WebRtcIsac_GetRedPayload() called");
    return 0;
}

/* Demangled: webrtc::CriticalSectionWrapper::CreateCriticalSection() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22CriticalSectionWrapper21CreateCriticalSectionEv(void) {
    ALOGD("_ZN6webrtc22CriticalSectionWrapper21CreateCriticalSectionEv() called");
    return 0;
}

/* Demangled: WebRtcAec_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_Free(void) {
    ALOGD("WebRtcAec_Free() called");
    return 0;
}

/* Demangled: WebRtcNsx_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcNsx_Init(void) {
    ALOGD("WebRtcNsx_Init() called");
    return 0;
}

/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12FatalMessageC2EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc12FatalMessageC2EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec6Ub12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec6Ub12 = NULL;

/* Demangled: webrtc::TraceImpl::~TraceImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9TraceImplD0Ev(void) {
    ALOGD("_ZN6webrtc9TraceImplD0Ev() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::NodeAt(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTree6NodeAtEii(void) {
    ALOGD("_ZN6webrtc7WPDTree6NodeAtEii() called");
    return 0;
}

/* Demangled: WebRtcAgc_AddMic */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_AddMic(void) {
    ALOGD("WebRtcAgc_AddMic() called");
    return 0;
}

/* Demangled: WebRtcAgc_ProcessVad */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_ProcessVad(void) {
    ALOGD("WebRtcAgc_ProcessVad() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_channels(webrtc::Band) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer14split_channelsENS_4BandE(void) {
    ALOGD("_ZN6webrtc11AudioBuffer14split_channelsENS_4BandE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplD1Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplD1Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchAnalysis */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchAnalysis(void) {
    ALOGD("WebRtcIsac_PitchAnalysis() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf4Hi */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf4Hi = NULL;

/* Demangled: webrtc::audioproc::Event::_Internal::config(webrtc::audioproc::Event const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc5Event9_Internal6configEPKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc5Event9_Internal6configEPKS1_() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Test_EchoMetrics_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc35_Test_EchoMetrics_default_instance_E = NULL;

/* Exported Object: scc_info_Test_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Test_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfMatUb12 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfMatUb12 = NULL;

/* Demangled: webrtc::Atomic32::Atomic32(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32C2Ei(void) {
    ALOGD("_ZN6webrtc8Atomic32C2Ei() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::TraceCheck(webrtc::TraceLevel) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9TraceImpl10TraceCheckENS_10TraceLevelE(void) {
    ALOGD("_ZNK6webrtc9TraceImpl10TraceCheckENS_10TraceLevelE() called");
    return 0;
}

/* Exported Object: rftbsub_128 */
extern "C" __attribute__((visibility("default"))) void* rftbsub_128 = NULL;

/* Demangled: webrtc::AgcManagerDirect::Process(short const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect7ProcessEPKsji(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect7ProcessEPKsji() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kKltT2Gain */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kKltT2Gain = NULL;

/* Exported Object: WebRtcIsac_kLpcShapeCdfVec6Ub16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfVec6Ub16 = NULL;

/* Demangled: webrtc::audioproc::Config::Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc6ConfigC1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc6ConfigC1Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Event::GetTypeName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc5Event11GetTypeNameEv(void) {
    ALOGD("_ZNK6webrtc9audioproc5Event11GetTypeNameEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferC1Ejjjjj(void) {
    ALOGD("_ZN6webrtc11AudioBufferC1Ejjjjj() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::ConfigureHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Test_Frame_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc29_Test_Frame_default_instance_E = NULL;

/* Demangled: webrtc::HighPassFilterImpl::Initialize(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImpl10InitializeEji(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImpl10InitializeEji() called");
    return 0;
}

/* Demangled: rtc::hex_encode_with_delimiter(char const*, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc25hex_encode_with_delimiterEPKcjc(void) {
    ALOGD("_ZN3rtc25hex_encode_with_delimiterEPKcjc() called");
    return 0;
}

/* Demangled: webrtc::FIRFilter::Create(float const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9FIRFilter6CreateEPKfjj(void) {
    ALOGD("_ZN6webrtc9FIRFilter6CreateEPKfjj() called");
    return 0;
}

/* Demangled: webrtc::RealFourier::FftOrder(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RealFourier8FftOrderEj(void) {
    ALOGD("_ZN6webrtc11RealFourier8FftOrderEj() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilterImpl::~HighPassFilterImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18HighPassFilterImplD1Ev(void) {
    ALOGD("_ZN6webrtc18HighPassFilterImplD1Ev() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetSnr */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetSnr(void) {
    ALOGD("WebRtcIsac_GetSnr() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcShapeCdfMatUb16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcShapeCdfMatUb16 = NULL;

/* Demangled: WebRtcIsac_DequantizeLpcParam */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DequantizeLpcParam(void) {
    ALOGD("WebRtcIsac_DequantizeLpcParam() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcGainCdfVec0 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainCdfVec0 = NULL;

/* Demangled: webrtc::SincResampler::SetRatio(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler8SetRatioEd(void) {
    ALOGD("_ZN6webrtc13SincResampler8SetRatioEd() called");
    return 0;
}

/* Demangled: WebRtcAgc_GetAddFarendError */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_GetAddFarendError(void) {
    ALOGD("WebRtcAgc_GetAddFarendError() called");
    return 0;
}

/* Demangled: WebRtcIsac_EncTerminate */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_EncTerminate(void) {
    ALOGD("WebRtcIsac_EncTerminate() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcGainCdfVec1 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainCdfVec1 = NULL;

/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(float const* const*, unsigned int, int, webrtc::AudioProcessing::ChannelLayout, int, webrtc::AudioProcessing::ChannelLayout, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutEiS6_PKPf(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutEiS6_PKPf() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::GetEchoPath(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl11GetEchoPathEPvj(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl11GetEchoPathEPvj() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcGainCdfVec2 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainCdfVec2 = NULL;

/* Demangled: WebRtcAgc_ProcessAnalog */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_ProcessAnalog(void) {
    ALOGD("WebRtcAgc_ProcessAnalog() called");
    return 0;
}

/* Exported Object: webrtc::AudioProcessing::kNativeSampleRatesHz */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15AudioProcessing20kNativeSampleRatesHzE = NULL;

/* Demangled: webrtc::RealFourierOoura::RealFourierOoura(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16RealFourierOouraC1Ei(void) {
    ALOGD("_ZN6webrtc16RealFourierOouraC1Ei() called");
    return 0;
}

/* Demangled: webrtc::IntelligibilityEnhancer::SolveForGainsGivenLambda(float, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23IntelligibilityEnhancer24SolveForGainsGivenLambdaEfjPf(void) {
    ALOGD("_ZN6webrtc23IntelligibilityEnhancer24SolveForGainsGivenLambdaEfjPf() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLpcGainCdfVec3 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainCdfVec3 = NULL;

/* Demangled: webrtc::TracePosix::AddDateTimeInfo(char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc10TracePosix15AddDateTimeInfoEPc(void) {
    ALOGD("_ZNK6webrtc10TracePosix15AddDateTimeInfoEPc() called");
    return 0;
}

/* Demangled: WebRtcAec_FreeResampler */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_FreeResampler(void) {
    ALOGD("WebRtcAec_FreeResampler() called");
    return 0;
}

/* Demangled: WebRtcAgc_UpdateAgcThresholds */
extern "C" __attribute__((visibility("default"))) int WebRtcAgc_UpdateAgcThresholds(void) {
    ALOGD("WebRtcAgc_UpdateAgcThresholds() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Stream>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6StreamEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6StreamEEEvPv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_() called");
    return 0;
}

/* Demangled: rtc::TimeIsLaterOrEqual(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc18TimeIsLaterOrEqualEjj(void) {
    ALOGD("_ZN3rtc18TimeIsLaterOrEqualEjj() called");
    return 0;
}

/* Demangled: webrtc::DotProduct(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10DotProductERKNS_14CartesianPointIfEES3_(void) {
    ALOGD("_ZN6webrtc10DotProductERKNS_14CartesianPointIfEES3_() called");
    return 0;
}

/* Exported Object: webrtc::RealFourier::kFftBufferAlignment */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc11RealFourier19kFftBufferAlignmentE = NULL;

/* Exported Object: WebRtcIsac_kLpcGainCdfVec4 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainCdfVec4 = NULL;

/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStreamC2Ev(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStreamC2Ev() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test::InternalSwap(webrtc::audioproc::Test*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc4Test12InternalSwapEPS1_(void) {
    ALOGD("_ZN6webrtc9audioproc4Test12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessing::Create(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCancellationImplD0Ev(void) {
    ALOGD("_ZN6webrtc20EchoCancellationImplD0Ev() called");
    return 0;
}

/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, char, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf3Lo */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf3Lo = NULL;

/* Exported Object: WebRtcIsac_kLpcGainCdfVec5 */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLpcGainCdfVec5 = NULL;

/* Demangled: WebRtcSpl_MinIndexW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MinIndexW32(void) {
    ALOGD("WebRtcSpl_MinIndexW32() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::input_sample_rate_hz() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl20input_sample_rate_hzEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl20input_sample_rate_hzEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::ComplexMatrix<float>*, std::__1::allocator<webrtc::ComplexMatrix<float>*> >::__push_back_slow_path<webrtc::ComplexMatrix<float>* const&>(webrtc::ComplexMatrix<float>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc13ComplexMatrixIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc13ComplexMatrixIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kFrameLengthInitIndex */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kFrameLengthInitIndex = NULL;

/* Demangled: webrtc::audioproc::Test_DelayMetrics::MergeFrom(webrtc::audioproc::Test_DelayMetrics const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc17Test_DelayMetrics9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc17Test_DelayMetrics9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimatorImpl::ProcessStream(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18LevelEstimatorImpl13ProcessStreamEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc18LevelEstimatorImpl13ProcessStreamEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::FloatS16ToS16(float const*, unsigned int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FloatS16ToS16EPKfjPs(void) {
    ALOGD("_ZN6webrtc13FloatS16ToS16EPKfjPs() called");
    return 0;
}

/* Demangled: webrtc::Atomic32::operator-=(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Atomic32mIEi(void) {
    ALOGD("_ZN6webrtc8Atomic32mIEi() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Config::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9audioproc6Config13IsInitializedEv(void) {
    ALOGD("_ZNK6webrtc9audioproc6Config13IsInitializedEv() called");
    return 0;
}

/* Demangled: webrtc::audioproc::ReverseStream::MergeFrom(webrtc::audioproc::ReverseStream const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc13ReverseStream9MergeFromERKS1_(void) {
    ALOGD("_ZN6webrtc9audioproc13ReverseStream9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::was_stream_delay_set() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl20was_stream_delay_setEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl20was_stream_delay_setEv() called");
    return 0;
}

/* Demangled: webrtc::RealFourier::AllocRealBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11RealFourier15AllocRealBufferEi(void) {
    ALOGD("_ZN6webrtc11RealFourier15AllocRealBufferEi() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetCrc */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetCrc(void) {
    ALOGD("WebRtcIsac_GetCrc() called");
    return 0;
}

/* Demangled: WebRtcSpl_FilterMAFastQ12 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_FilterMAFastQ12(void) {
    ALOGD("WebRtcSpl_FilterMAFastQ12() called");
    return 0;
}

/* Demangled: webrtc::audioproc::Test_EchoMetrics::~Test_EchoMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9audioproc16Test_EchoMetricsD1Ev(void) {
    ALOGD("_ZN6webrtc9audioproc16Test_EchoMetricsD1Ev() called");
    return 0;
}

/* Exported Object: webrtc::audioproc::_Test_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc9audioproc23_Test_default_instance_E = NULL;

/* Demangled: webrtc::AudioProcessingImpl::render_check_rev_conversion_needed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl34render_check_rev_conversion_neededEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl34render_check_rev_conversion_neededEv() called");
    return 0;
}

/* Demangled: rtc::decode(char*, unsigned int, char const*, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc6decodeEPcjPKcjc(void) {
    ALOGD("_ZN3rtc6decodeEPcjPKcjc() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::ChannelBuffer<float>*, std::__1::allocator<webrtc::ChannelBuffer<float>*> >::__push_back_slow_path<webrtc::ChannelBuffer<float>* const&>(webrtc::ChannelBuffer<float>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6webrtc13ChannelBufferIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6webrtc13ChannelBufferIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQKltQuantMinShape */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQKltQuantMinShape = NULL;

/* Demangled: WebRtcSpl_FilterAR */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_FilterAR(void) {
    ALOGD("WebRtcSpl_FilterAR() called");
    return 0;
}

/* Demangled: webrtc::EventWrapper::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12EventWrapper6CreateEv(void) {
    ALOGD("_ZN6webrtc12EventWrapper6CreateEv() called");
    return 0;
}

/* Demangled: webrtc::TraceImpl::AddLevel(char*, webrtc::TraceLevel) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9TraceImpl8AddLevelEPcNS_10TraceLevelE(void) {
    ALOGD("_ZNK6webrtc9TraceImpl8AddLevelEPcNS_10TraceLevelE() called");
    return 0;
}

/* Demangled: WebRtcVad_CalculateFeatures */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalculateFeatures(void) {
    ALOGD("WebRtcVad_CalculateFeatures() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetMinBytes */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetMinBytes(void) {
    ALOGD("WebRtcIsac_GetMinBytes() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kTransformTranspose */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kTransformTranspose = NULL;

/* Demangled: webrtc::ConditionVariableWrapper::CreateConditionVariable() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24ConditionVariableWrapper23CreateConditionVariableEv(void) {
    ALOGD("_ZN6webrtc24ConditionVariableWrapper23CreateConditionVariableEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::split_data() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer10split_dataEv(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer10split_dataEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::LevelEstimatorImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18LevelEstimatorImplE = NULL;

/* Demangled: webrtc::ThreeBandFilterBank::DownModulate(float const*, unsigned int, unsigned int, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBank12DownModulateEPKfjjPKPf(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBank12DownModulateEPKfjjPKPf() called");
    return 0;
}

/* Demangled: WebRtcIsac_DecodeFrameLen */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_DecodeFrameLen(void) {
    ALOGD("WebRtcIsac_DecodeFrameLen() called");
    return 0;
}

/* Demangled: WebRtcIsac_GetBandwidthInfo */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_GetBandwidthInfo(void) {
    ALOGD("WebRtcIsac_GetBandwidthInfo() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kQPitchLagCdf1Mid */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kQPitchLagCdf1Mid = NULL;

/* Demangled: WebRtcIsac_Dir2Lat */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_Dir2Lat(void) {
    ALOGD("WebRtcIsac_Dir2Lat() called");
    return 0;
}

/* Demangled: WebRtcAec_delay_agnostic_enabled */
extern "C" __attribute__((visibility("default"))) int WebRtcAec_delay_agnostic_enabled(void) {
    ALOGD("WebRtcAec_delay_agnostic_enabled() called");
    return 0;
}

/* Demangled: WebRtcAecm_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Free(void) {
    ALOGD("WebRtcAecm_Free() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::DestroyHandle(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl13DestroyHandleEPv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl13DestroyHandleEPv() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetectionImpl::~VoiceDetectionImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18VoiceDetectionImplD1Ev(void) {
    ALOGD("_ZN6webrtc18VoiceDetectionImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EvaluateGmm(double const*, webrtc::GmmParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE(void) {
    ALOGD("_ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeC1EjPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNodeC1EjPKfj() called");
    return 0;
}

/* Demangled: aec_rdft_init */
extern "C" __attribute__((visibility("default"))) int aec_rdft_init(void) {
    ALOGD("aec_rdft_init() called");
    return 0;
}

/* Demangled: Linear2Loudness(double) */
extern "C" __attribute__((visibility("default"))) int _Z15Linear2Loudnessd(void) {
    ALOGD("_Z15Linear2Loudnessd() called");
    return 0;
}

/* Demangled: webrtc::Agc::GetRmsErrorDb(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc13GetRmsErrorDbEPi(void) {
    ALOGD("_ZN6webrtc3Agc13GetRmsErrorDbEPi() called");
    return 0;
}

/* Demangled: rtc::FatalMessage::~FatalMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc12FatalMessageD2Ev(void) {
    ALOGD("_ZN3rtc12FatalMessageD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::Write(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N6webrtc15FileWrapperImpl5WriteEPKvj(void) {
    ALOGD("_ZThn4_N6webrtc15FileWrapperImpl5WriteEPKvj() called");
    return 0;
}
