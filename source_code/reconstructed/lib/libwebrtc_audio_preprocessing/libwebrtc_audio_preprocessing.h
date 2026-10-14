/*
 * Reverse-Engineered ABI Specification for: libwebrtc_audio_preprocessing.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwebrtc_audio_preprocessing.so
 */

#ifndef BEGONIA_RE_LIBWEBRTC_AUDIO_PREPROCESSING_H
#define BEGONIA_RE_LIBWEBRTC_AUDIO_PREPROCESSING_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: WebRtcAec_GetBufferFarendError */
/* Demangled: WebRtcAec_GetBufferFarendError */
int WebRtcAec_GetBufferFarendError(void);

/* Symbol: WebRtcSpl_MaxAbsValueW16 */
/* Demangled: WebRtcSpl_MaxAbsValueW16 */
extern void* WebRtcSpl_MaxAbsValueW16;

/* Symbol: _ZN6webrtc9audioproc4InitC1ERKS1_ */
/* Demangled: webrtc::audioproc::Init::Init(webrtc::audioproc::Init const&) */
int _ZN6webrtc9audioproc4InitC1ERKS1_(void);

/* Symbol: _ZNK6webrtc9audioproc4Init11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Init::GetTypeName() const */
int _ZNK6webrtc9audioproc4Init11GetTypeNameEv(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc17Test_DelayMetricsEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_DelayMetrics>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc17Test_DelayMetricsEEEvPv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl21rev_conversion_neededEv */
/* Demangled: webrtc::AudioProcessingImpl::rev_conversion_needed() const */
int _ZNK6webrtc19AudioProcessingImpl21rev_conversion_neededEv(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl10is_enabledEv */
/* Demangled: webrtc::EchoControlMobileImpl::is_enabled() const */
int _ZNK6webrtc21EchoControlMobileImpl10is_enabledEv(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImplD2Ev */
/* Demangled: webrtc::LevelEstimatorImpl::~LevelEstimatorImpl() */
int _ZN6webrtc18LevelEstimatorImplD2Ev(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer17ProcessClearBlockEPKNSt3__17complexIfEEPS3_ */
/* Demangled: webrtc::IntelligibilityEnhancer::ProcessClearBlock(std::__1::complex<float> const*, std::__1::complex<float>*) */
int _ZN6webrtc23IntelligibilityEnhancer17ProcessClearBlockEPKNSt3__17complexIfEEPS3_(void);

/* Symbol: _ZThn4_NK6webrtc15GainControlImpl16InitializeHandleEPv */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::InitializeHandle(void*) const */
int _ZThn4_NK6webrtc15GainControlImpl16InitializeHandleEPv(void);

/* Symbol: WebRtc_SoftResetBinaryDelayEstimatorFarend */
/* Demangled: WebRtc_SoftResetBinaryDelayEstimatorFarend */
int WebRtc_SoftResetBinaryDelayEstimatorFarend(void);

/* Symbol: _ZN6webrtc13PitchBasedVadD2Ev */
/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadD2Ev(void);

/* Symbol: WebRtcIsac_GetRedPayloadUb */
/* Demangled: WebRtcIsac_GetRedPayloadUb */
int WebRtcIsac_GetRedPayloadUb(void);

/* Symbol: WebRtcIsac_kQGainCdf_ptr */
/* Demangled: WebRtcIsac_kQGainCdf_ptr */
extern void* WebRtcIsac_kQGainCdf_ptr;

/* Symbol: _ZN6webrtc11AudioBuffer8channelsEv */
/* Demangled: webrtc::AudioBuffer::channels() */
int _ZN6webrtc11AudioBuffer8channelsEv(void);

/* Symbol: _ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc */
/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
int _ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIfEEvOT_ */
/* Demangled: void std::__1::vector<float, std::__1::allocator<float> >::__push_back_slow_path<float>(float&&) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE21__push_back_slow_pathIfEEvOT_(void);

/* Symbol: WebRtcIsac_InitMasking */
/* Demangled: WebRtcIsac_InitMasking */
int WebRtcIsac_InitMasking(void);

/* Symbol: WebRtcAec_PartitionDelay */
/* Demangled: WebRtcAec_PartitionDelay */
extern void* WebRtcAec_PartitionDelay;

/* Symbol: WebRtcAecm_echo_path_size_bytes */
/* Demangled: WebRtcAecm_echo_path_size_bytes */
int WebRtcAecm_echo_path_size_bytes(void);

/* Symbol: WebRtcAecm_ProcessBlock */
/* Demangled: WebRtcAecm_ProcessBlock */
int WebRtcAecm_ProcessBlock(void);

/* Symbol: _ZN6webrtc9audioproc4Init5ClearEv */
/* Demangled: webrtc::audioproc::Init::Clear() */
int _ZN6webrtc9audioproc4Init5ClearEv(void);

/* Symbol: _ZN6webrtc9audioproc5EventC2ERKS1_ */
/* Demangled: webrtc::audioproc::Event::Event(webrtc::audioproc::Event const&) */
int _ZN6webrtc9audioproc5EventC2ERKS1_(void);

/* Symbol: _ZNK6webrtc11AudioBuffer13keyboard_dataEv */
/* Demangled: webrtc::AudioBuffer::keyboard_data() const */
int _ZNK6webrtc11AudioBuffer13keyboard_dataEv(void);

/* Symbol: _ZN6webrtc9audioproc25_Config_default_instance_E */
/* Demangled: webrtc::audioproc::_Config_default_instance_ */
extern void* _ZN6webrtc9audioproc25_Config_default_instance_E;

/* Symbol: _ZN3rtc4TimeEv */
/* Demangled: rtc::Time() */
int _ZN3rtc4TimeEv(void);

/* Symbol: scc_info_OutputData_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
/* Demangled: scc_info_OutputData_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern void* scc_info_OutputData_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto;

/* Symbol: _ZTVN6webrtc19ProcessingComponentE */
/* Demangled: vtable for webrtc::ProcessingComponent */
extern void* _ZTVN6webrtc19ProcessingComponentE;

/* Symbol: _ZN6webrtc10S16ToFloatEPKsjPf */
/* Demangled: webrtc::S16ToFloat(short const*, unsigned int, float*) */
int _ZN6webrtc10S16ToFloatEPKsjPf(void);

/* Symbol: WebRtcIsac_kQKltMaxIndShape */
/* Demangled: WebRtcIsac_kQKltMaxIndShape */
extern void* WebRtcIsac_kQKltMaxIndShape;

/* Symbol: _ZN6webrtc5Trace13level_filter_E */
/* Demangled: webrtc::Trace::level_filter_ */
extern void* _ZN6webrtc5Trace13level_filter_E;

/* Symbol: _ZN6webrtc9TraceImpl7AddImplENS_10TraceLevelENS_11TraceModuleEiPKc */
/* Demangled: webrtc::TraceImpl::AddImpl(webrtc::TraceLevel, webrtc::TraceModule, int, char const*) */
int _ZN6webrtc9TraceImpl7AddImplENS_10TraceLevelENS_11TraceModuleEiPKc(void);

/* Symbol: _ZN6webrtc9audioproc6Stream16default_instanceEv */
/* Demangled: webrtc::audioproc::Stream::default_instance() */
int _ZN6webrtc9audioproc6Stream16default_instanceEv(void);

/* Symbol: _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc13PairDirectionERKNS_14CartesianPointIfEES3_ */
/* Demangled: webrtc::PairDirection(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
int _ZN6webrtc13PairDirectionERKNS_14CartesianPointIfEES3_(void);

/* Symbol: WebRtcIsac_Create */
/* Demangled: WebRtcIsac_Create */
int WebRtcIsac_Create(void);

/* Symbol: android_getCpuCount */
/* Demangled: android_getCpuCount */
int android_getCpuCount(void);

/* Symbol: _ZN6webrtc13MovingMomentsC1Ej */
/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
int _ZN6webrtc13MovingMomentsC1Ej(void);

/* Symbol: WebRtcSpl_SynthesisQMF */
/* Demangled: WebRtcSpl_SynthesisQMF */
int WebRtcSpl_SynthesisQMF(void);

/* Symbol: WebRtcIsac_kQKltLevelsGain */
/* Demangled: WebRtcIsac_kQKltLevelsGain */
extern void* WebRtcIsac_kQKltLevelsGain;

/* Symbol: WebRtcIsac_kQPitchLagStepsizeMid */
/* Demangled: WebRtcIsac_kQPitchLagStepsizeMid */
extern void* WebRtcIsac_kQPitchLagStepsizeMid;

/* Symbol: _ZN6webrtc11RWLockPosix17ReleaseLockSharedEv */
/* Demangled: webrtc::RWLockPosix::ReleaseLockShared() */
int _ZN6webrtc11RWLockPosix17ReleaseLockSharedEv(void);

/* Symbol: _ZN6webrtc13MovingMomentsD2Ev */
/* Demangled: webrtc::MovingMoments::~MovingMoments() */
int _ZN6webrtc13MovingMomentsD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc6StreamD1Ev */
/* Demangled: webrtc::audioproc::Stream::~Stream() */
int _ZN6webrtc9audioproc6StreamD1Ev(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImpl14set_likelihoodENS_14VoiceDetection10LikelihoodE */
/* Demangled: webrtc::VoiceDetectionImpl::set_likelihood(webrtc::VoiceDetection::Likelihood) */
int _ZN6webrtc18VoiceDetectionImpl14set_likelihoodENS_14VoiceDetection10LikelihoodE(void);

/* Symbol: WebRtcIsac_kQPitchLagCdfPtrMid */
/* Demangled: WebRtcIsac_kQPitchLagCdfPtrMid */
extern void* WebRtcIsac_kQPitchLagCdfPtrMid;

/* Symbol: _ZN6webrtc9audioproc4InitD2Ev */
/* Demangled: webrtc::audioproc::Init::~Init() */
int _ZN6webrtc9audioproc4InitD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Test_Frame::InternalSwap(webrtc::audioproc::Test_Frame*) */
int _ZN6webrtc9audioproc10Test_Frame12InternalSwapEPS1_(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancerC2Ev */
/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer() */
int _ZN6webrtc23IntelligibilityEnhancerC2Ev(void);

/* Symbol: _ZNK6webrtc18VoiceDetectionImpl13frame_size_msEv */
/* Demangled: webrtc::VoiceDetectionImpl::frame_size_ms() const */
int _ZNK6webrtc18VoiceDetectionImpl13frame_size_msEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer13MaskRangeMeanEjj */
/* Demangled: webrtc::NonlinearBeamformer::MaskRangeMean(unsigned int, unsigned int) */
int _ZN6webrtc19NonlinearBeamformer13MaskRangeMeanEjj(void);

/* Symbol: WebRtcIsac_kQIndexUpperLimitLagMid */
/* Demangled: WebRtcIsac_kQIndexUpperLimitLagMid */
extern void* WebRtcIsac_kQIndexUpperLimitLagMid;

/* Symbol: WebRtcIsac_InitTransform */
/* Demangled: WebRtcIsac_InitTransform */
int WebRtcIsac_InitTransform(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec8Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec8Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec8Ub16;

/* Symbol: _ZN6webrtc15IFChannelBuffer4fbufEv */
/* Demangled: webrtc::IFChannelBuffer::fbuf() */
int _ZN6webrtc15IFChannelBuffer4fbufEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25InitializeIntelligibilityEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeIntelligibility() */
int _ZN6webrtc19AudioProcessingImpl25InitializeIntelligibilityEv(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_ */
/* Demangled: webrtc::EchoCancellationImpl::GetDelayMetrics(int*, int*) */
int _ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_(void);

/* Symbol: _ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures */
/* Demangled: webrtc::VadAudioProc::ExtractFeatures(short const*, unsigned int, AudioFeatures*) */
int _ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures(void);

/* Symbol: _ZN6webrtc20GetDirectionIfLinearERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE */
/* Demangled: webrtc::GetDirectionIfLinear(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
int _ZN6webrtc20GetDirectionIfLinearERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void);

/* Symbol: WebRtcIsac_GetVars */
/* Demangled: WebRtcIsac_GetVars */
int WebRtcIsac_GetVars(void);

/* Symbol: _ZN6webrtc9audioproc5Event9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Event::MergeFrom(webrtc::audioproc::Event const&) */
int _ZN6webrtc9audioproc5Event9MergeFromERKS1_(void);

/* Symbol: _ZN6webrtc13PitchBasedVadC1Ev */
/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadC1Ev(void);

/* Symbol: WebRtcIsac_Lar2Poly */
/* Demangled: WebRtcIsac_Lar2Poly */
int WebRtcIsac_Lar2Poly(void);

/* Symbol: WebRtcIsac_kQIndexLowerLimitLagMid */
/* Demangled: WebRtcIsac_kQIndexLowerLimitLagMid */
extern void* WebRtcIsac_kQIndexLowerLimitLagMid;

/* Symbol: WebRtcNsx_ComputeSpectralDifference */
/* Demangled: WebRtcNsx_ComputeSpectralDifference */
int WebRtcNsx_ComputeSpectralDifference(void);

/* Symbol: WebRtc_GetCPUInfoNoASM */
/* Demangled: WebRtc_GetCPUInfoNoASM */
extern void* WebRtc_GetCPUInfoNoASM;

/* Symbol: WebRtcAecm_InitEchoPathCore */
/* Demangled: WebRtcAecm_InitEchoPathCore */
int WebRtcAecm_InitEchoPathCore(void);

/* Symbol: _ZN6webrtc3Agc5ResetEv */
/* Demangled: webrtc::Agc::Reset() */
int _ZN6webrtc3Agc5ResetEv(void);

/* Symbol: _ZNK6webrtc9audioproc4Test13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Test::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc4Test13SetCachedSizeEi(void);

/* Symbol: _ZThn4_N6webrtc21EchoControlMobileImpl10InitializeEv */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::Initialize() */
int _ZThn4_N6webrtc21EchoControlMobileImpl10InitializeEv(void);

/* Symbol: _ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv */
/* Demangled: webrtc::SincResampler::InitializeCPUSpecificFeatures() */
int _ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv(void);

/* Symbol: _ZN6webrtc9audioproc10OutputDataC2Ev */
/* Demangled: webrtc::audioproc::OutputData::OutputData() */
int _ZN6webrtc9audioproc10OutputDataC2Ev(void);

/* Symbol: _ZN6webrtc15GainControlImpl23set_compression_gain_dbEi */
/* Demangled: webrtc::GainControlImpl::set_compression_gain_db(int) */
int _ZN6webrtc15GainControlImpl23set_compression_gain_dbEi(void);

/* Symbol: _ZN6webrtc14PoleZeroFilterC1EPKfjS2_j */
/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc14PoleZeroFilterC1EPKfjS2_j(void);

/* Symbol: _ZN6webrtc13StandaloneVad6CreateEv */
/* Demangled: webrtc::StandaloneVad::Create() */
int _ZN6webrtc13StandaloneVad6CreateEv(void);

/* Symbol: _ZN3rtc26TimestampWrapAroundHandler6UnwrapEj */
/* Demangled: rtc::TimestampWrapAroundHandler::Unwrap(unsigned int) */
int _ZN3rtc26TimestampWrapAroundHandler6UnwrapEj(void);

/* Symbol: _ZN6webrtc15LappedTransformC2EjjjPKfjjPNS0_8CallbackE */
/* Demangled: webrtc::LappedTransform::LappedTransform(unsigned int, unsigned int, unsigned int, float const*, unsigned int, unsigned int, webrtc::LappedTransform::Callback*) */
int _ZN6webrtc15LappedTransformC2EjjjPKfjjPNS0_8CallbackE(void);

/* Symbol: _ZN6webrtc17PushSincResamplerD2Ev */
/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
int _ZN6webrtc17PushSincResamplerD2Ev(void);

/* Symbol: _ZN6webrtc13SincResamplerD2Ev */
/* Demangled: webrtc::SincResampler::~SincResampler() */
int _ZN6webrtc13SincResamplerD2Ev(void);

/* Symbol: WebRtc_lookahead */
/* Demangled: WebRtc_lookahead */
int WebRtc_lookahead(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc16Test_EchoMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZN6webrtc11AudioBuffer11split_bandsEj */
/* Demangled: webrtc::AudioBuffer::split_bands(unsigned int) */
int _ZN6webrtc11AudioBuffer11split_bandsEj(void);

/* Symbol: _ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::GainControlImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZTVN6webrtc16EchoCancellationE */
/* Demangled: vtable for webrtc::EchoCancellation */
extern void* _ZTVN6webrtc16EchoCancellationE;

/* Symbol: _ZN6webrtc20NoiseSuppressionImpl9set_levelENS_16NoiseSuppression5LevelE */
/* Demangled: webrtc::NoiseSuppressionImpl::set_level(webrtc::NoiseSuppression::Level) */
int _ZN6webrtc20NoiseSuppressionImpl9set_levelENS_16NoiseSuppression5LevelE(void);

/* Symbol: _ZN3rtc10xml_encodeEPcjPKcj */
/* Demangled: rtc::xml_encode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc10xml_encodeEPcjPKcj(void);

/* Symbol: WebRtcIsac_kQPitchLagCdfSizeMid */
/* Demangled: WebRtcIsac_kQPitchLagCdfSizeMid */
extern void* WebRtcIsac_kQPitchLagCdfSizeMid;

/* Symbol: WebRtcIsac_InitPostFilterbank */
/* Demangled: WebRtcIsac_InitPostFilterbank */
int WebRtcIsac_InitPostFilterbank(void);

/* Symbol: _ZN6webrtc17TransientDetectorD1Ev */
/* Demangled: webrtc::TransientDetector::~TransientDetector() */
int _ZN6webrtc17TransientDetectorD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::Initialize(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE(void);

/* Symbol: _ZN3rtc13GlobalLockPod4LockEv */
/* Demangled: rtc::GlobalLockPod::Lock() */
int _ZN3rtc13GlobalLockPod4LockEv(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArray9DecayStepEPKNSt3__17complexIfEEb */
/* Demangled: webrtc::intelligibility::VarianceArray::DecayStep(std::__1::complex<float> const*, bool) */
int _ZN6webrtc15intelligibility13VarianceArray9DecayStepEPKNSt3__17complexIfEEb(void);

/* Symbol: WebRtcIsac_CorrelateInterVec */
/* Demangled: WebRtcIsac_CorrelateInterVec */
int WebRtcIsac_CorrelateInterVec(void);

/* Symbol: WebRtcIsac_kLpcShapeNumRecPointUb12 */
/* Demangled: WebRtcIsac_kLpcShapeNumRecPointUb12 */
extern void* WebRtcIsac_kLpcShapeNumRecPointUb12;

/* Symbol: _ZN6webrtc19AudioProcessingImpl19InitializeTransientEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeTransient() */
int _ZN6webrtc19AudioProcessingImpl19InitializeTransientEv(void);

/* Symbol: WebRtcIsac_DecoderInit */
/* Demangled: WebRtcIsac_DecoderInit */
int WebRtcIsac_DecoderInit(void);

/* Symbol: _ZN6webrtc11AudioBuffer16split_channels_fENS_4BandE */
/* Demangled: webrtc::AudioBuffer::split_channels_f(webrtc::Band) */
int _ZN6webrtc11AudioBuffer16split_channels_fENS_4BandE(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBank9SynthesisEPKPKfjPf */
/* Demangled: webrtc::ThreeBandFilterBank::Synthesis(float const* const*, unsigned int, float*) */
int _ZN6webrtc19ThreeBandFilterBank9SynthesisEPKPKfjPf(void);

/* Symbol: WebRtcSpl_MaxIndexW32 */
/* Demangled: WebRtcSpl_MaxIndexW32 */
int WebRtcSpl_MaxIndexW32(void);

/* Symbol: WebRtcSpl_ResetResample8khzTo48khz */
/* Demangled: WebRtcSpl_ResetResample8khzTo48khz */
int WebRtcSpl_ResetResample8khzTo48khz(void);

/* Symbol: _ZN6webrtc13RWLockWrapper12CreateRWLockEv */
/* Demangled: webrtc::RWLockWrapper::CreateRWLock() */
int _ZN6webrtc13RWLockWrapper12CreateRWLockEv(void);

/* Symbol: WebRtcVad_InitCore */
/* Demangled: WebRtcVad_InitCore */
int WebRtcVad_InitCore(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer11BufferLevelEv */
/* Demangled: webrtc::VadCircularBuffer::BufferLevel() */
int _ZN6webrtc17VadCircularBuffer11BufferLevelEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer16NormalizeCovMatsEv */
/* Demangled: webrtc::NonlinearBeamformer::NormalizeCovMats() */
int _ZN6webrtc19NonlinearBeamformer16NormalizeCovMatsEv(void);

/* Symbol: WebRtcAec_Process */
/* Demangled: WebRtcAec_Process */
int WebRtcAec_Process(void);

/* Symbol: _ZN6webrtc9audioproc4InitC1Ev */
/* Demangled: webrtc::audioproc::Init::Init() */
int _ZN6webrtc9audioproc4InitC1Ev(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformerC1ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE */
/* Demangled: webrtc::NonlinearBeamformer::NonlinearBeamformer(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::SphericalPoint<float>) */
int _ZN6webrtc19NonlinearBeamformerC1ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE(void);

/* Symbol: _ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: webrtc::metrics::HistogramFactoryGetEnumeration(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: WebRtc_rdft */
/* Demangled: WebRtc_rdft */
int WebRtc_rdft(void);

/* Symbol: WebRtcIsac_kLpcShapeNumRecPointUb16 */
/* Demangled: WebRtcIsac_kLpcShapeNumRecPointUb16 */
extern void* WebRtcIsac_kLpcShapeNumRecPointUb16;

/* Symbol: _ZN6webrtc21VoiceActivityDetectorC1Ev */
/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
int _ZN6webrtc21VoiceActivityDetectorC1Ev(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStream16default_instanceEv */
/* Demangled: webrtc::audioproc::ReverseStream::default_instance() */
int _ZN6webrtc9audioproc13ReverseStream16default_instanceEv(void);

/* Symbol: _ZN6webrtc9audioproc5Event16default_instanceEv */
/* Demangled: webrtc::audioproc::Event::default_instance() */
int _ZN6webrtc9audioproc5Event16default_instanceEv(void);

/* Symbol: WebRtcAec_InitResampler */
/* Demangled: WebRtcAec_InitResampler */
int WebRtcAec_InitResampler(void);

/* Symbol: _ZN6webrtc15SparseFIRFilter6FilterEPKfjPf */
/* Demangled: webrtc::SparseFIRFilter::Filter(float const*, unsigned int, float*) */
int _ZN6webrtc15SparseFIRFilter6FilterEPKfjPf(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArray23BlockBasedMovingAverageEPKNSt3__17complexIfEEb */
/* Demangled: webrtc::intelligibility::VarianceArray::BlockBasedMovingAverage(std::__1::complex<float> const*, bool) */
int _ZN6webrtc15intelligibility13VarianceArray23BlockBasedMovingAverageEPKNSt3__17complexIfEEb(void);

/* Symbol: WebRtcAecm_BufferFarend */
/* Demangled: WebRtcAecm_BufferFarend */
int WebRtcAecm_BufferFarend(void);

/* Symbol: _ZN6webrtc3Agc7ProcessEPKsji */
/* Demangled: webrtc::Agc::Process(short const*, unsigned int, int) */
int _ZN6webrtc3Agc7ProcessEPKsji(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN3rtc10SystemInfoC2Ev */
/* Demangled: rtc::SystemInfo::SystemInfo() */
int _ZN3rtc10SystemInfoC2Ev(void);

/* Symbol: WebRtcIsac_kQArRc2Cdf */
/* Demangled: WebRtcIsac_kQArRc2Cdf */
extern void* WebRtcIsac_kQArRc2Cdf;

/* Symbol: WebRtcSpl_ScaleVector */
/* Demangled: WebRtcSpl_ScaleVector */
int WebRtcSpl_ScaleVector(void);

/* Symbol: _ZNK6webrtc9audioproc5Event13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Event::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc5Event13SetCachedSizeEi(void);

/* Symbol: _ZNK6webrtc9audioproc16Test_EchoMetrics11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::GetTypeName() const */
int _ZNK6webrtc9audioproc16Test_EchoMetrics11GetTypeNameEv(void);

/* Symbol: _ZN6webrtc17GetMinimumSpacingERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE */
/* Demangled: webrtc::GetMinimumSpacing(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
int _ZN6webrtc17GetMinimumSpacingERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void);

/* Symbol: WebRtcIsac_GetNewFrameLength */
/* Demangled: WebRtcIsac_GetNewFrameLength */
int WebRtcIsac_GetNewFrameLength(void);

/* Symbol: WebRtcIsac_kQMeanGain2Q12 */
/* Demangled: WebRtcIsac_kQMeanGain2Q12 */
extern void* WebRtcIsac_kQMeanGain2Q12;

/* Symbol: _ZTVN6webrtc9TraceImplE */
/* Demangled: vtable for webrtc::TraceImpl */
extern void* _ZTVN6webrtc9TraceImplE;

/* Symbol: _ZN6webrtc22ConditionVariablePosix7WakeAllEv */
/* Demangled: webrtc::ConditionVariablePosix::WakeAll() */
int _ZN6webrtc22ConditionVariablePosix7WakeAllEv(void);

/* Symbol: _ZTVN6webrtc9audioproc13ReverseStreamE */
/* Demangled: vtable for webrtc::audioproc::ReverseStream */
extern void* _ZTVN6webrtc9audioproc13ReverseStreamE;

/* Symbol: _ZN6webrtc11AudioBuffer14InitForNewDataEv */
/* Demangled: webrtc::AudioBuffer::InitForNewData() */
int _ZN6webrtc11AudioBuffer14InitForNewDataEv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl17is_data_processedEv */
/* Demangled: webrtc::AudioProcessingImpl::is_data_processed() const */
int _ZNK6webrtc19AudioProcessingImpl17is_data_processedEv(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl14GetHandleErrorEPv */
/* Demangled: webrtc::EchoCancellationImpl::GetHandleError(void*) const */
int _ZNK6webrtc20EchoCancellationImpl14GetHandleErrorEPv(void);

/* Symbol: WebRtcVad_Init */
/* Demangled: WebRtcVad_Init */
int WebRtcVad_Init(void);

/* Symbol: _ZN3rtc10url_encodeEPcjPKcj */
/* Demangled: rtc::url_encode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc10url_encodeEPcjPKcj(void);

/* Symbol: _ZN6webrtc9TraceImpl11WriteToFileEPKct */
/* Demangled: webrtc::TraceImpl::WriteToFile(char const*, unsigned short) */
int _ZN6webrtc9TraceImpl11WriteToFileEPKct(void);

/* Symbol: WebRtc_MoveReadPtr */
/* Demangled: WebRtc_MoveReadPtr */
int WebRtc_MoveReadPtr(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6ConfigEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Config* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Config>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6ConfigEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN3rtc10SystemInfo18GetCpuArchitectureEv */
/* Demangled: rtc::SystemInfo::GetCpuArchitecture() */
int _ZN3rtc10SystemInfo18GetCpuArchitectureEv(void);

/* Symbol: _ZNSt3__16vectorIP10RingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<RingBuffer*, std::__1::allocator<RingBuffer*> >::__push_back_slow_path<RingBuffer*>(RingBuffer*&&) */
int _ZNSt3__16vectorIP10RingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN6webrtc9ResamplerD1Ev */
/* Demangled: webrtc::Resampler::~Resampler() */
int _ZN6webrtc9ResamplerD1Ev(void);

/* Symbol: _ZN6webrtc9audioproc4Init21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Init::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc4Init21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc19ProcessingComponentD2Ev */
/* Demangled: webrtc::ProcessingComponent::~ProcessingComponent() */
int _ZN6webrtc19ProcessingComponentD2Ev(void);

/* Symbol: _ZN3rtc12FatalMessageC2EPKci */
/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int) */
int _ZN3rtc12FatalMessageC2EPKci(void);

/* Symbol: _ZN3rtc10SystemInfo10GetMaxCpusEv */
/* Demangled: rtc::SystemInfo::GetMaxCpus() */
int _ZN3rtc10SystemInfo10GetMaxCpusEv(void);

/* Symbol: WebRtcIsac_kQArRc2Levels */
/* Demangled: WebRtcIsac_kQArRc2Levels */
extern void* WebRtcIsac_kQArRc2Levels;

/* Symbol: _ZNK6webrtc9TraceImpl10AddMessageEPcPKct */
/* Demangled: webrtc::TraceImpl::AddMessage(char*, char const*, unsigned short) const */
int _ZNK6webrtc9TraceImpl10AddMessageEPcPKct(void);

/* Symbol: _ZNSt3__1dvIfEENS_7complexIT_EERKS3_S5_ */
/* Demangled: std::__1::complex<float> std::__1::operator/<float>(std::__1::complex<float> const&, std::__1::complex<float> const&) */
int _ZNSt3__1dvIfEENS_7complexIT_EERKS3_S5_(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer13DispatchAudioENS0_11AudioSourceEPKNSt3__17complexIfEEPS4_ */
/* Demangled: webrtc::IntelligibilityEnhancer::DispatchAudio(webrtc::IntelligibilityEnhancer::AudioSource, std::__1::complex<float> const*, std::__1::complex<float>*) */
int _ZN6webrtc23IntelligibilityEnhancer13DispatchAudioENS0_11AudioSourceEPKNSt3__17complexIfEEPS4_(void);

/* Symbol: WebRtcIsac_EncodeStoredDataLb */
/* Demangled: WebRtcIsac_EncodeStoredDataLb */
int WebRtcIsac_EncodeStoredDataLb(void);

/* Symbol: WebRtcSpl_AllPassQMF */
/* Demangled: WebRtcSpl_AllPassQMF */
int WebRtcSpl_AllPassQMF(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi */
/* Demangled: webrtc::AudioProcessingImpl::set_stream_delay_ms(int) */
int _ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_14ExtendedFilterEEERKT_vE3def */
/* Demangled: webrtc::ExtendedFilter const& webrtc::Config::default_value<webrtc::ExtendedFilter>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_14ExtendedFilterEEERKT_vE3def;

/* Symbol: WebRtc_SoftResetBinaryDelayEstimator */
/* Demangled: WebRtc_SoftResetBinaryDelayEstimator */
int WebRtc_SoftResetBinaryDelayEstimator(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStream21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::ReverseStream::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc13ReverseStream21InitAsDefaultInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj */
/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__append(unsigned int) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj(void);

/* Symbol: _ZNSt3__1mlIfEENS_7complexIT_EERKS3_S5_ */
/* Demangled: std::__1::complex<float> std::__1::operator*<float>(std::__1::complex<float> const&, std::__1::complex<float> const&) */
int _ZNSt3__1mlIfEENS_7complexIT_EERKS3_S5_(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer16InitInterfAnglesEv */
/* Demangled: webrtc::NonlinearBeamformer::InitInterfAngles() */
int _ZN6webrtc19NonlinearBeamformer16InitInterfAnglesEv(void);

/* Symbol: WebRtcSpl_Resample16khzTo22khz */
/* Demangled: WebRtcSpl_Resample16khzTo22khz */
int WebRtcSpl_Resample16khzTo22khz(void);

/* Symbol: WebRtcSpl_ScaleAndAddVectors */
/* Demangled: WebRtcSpl_ScaleAndAddVectors */
int WebRtcSpl_ScaleAndAddVectors(void);

/* Symbol: _ZN6webrtc15SplittingFilter8AnalysisEPKNS_15IFChannelBufferEPS1_ */
/* Demangled: webrtc::SplittingFilter::Analysis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
int _ZN6webrtc15SplittingFilter8AnalysisEPKNS_15IFChannelBufferEPS1_(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl26is_extended_filter_enabledEv */
/* Demangled: webrtc::EchoCancellationImpl::is_extended_filter_enabled() const */
int _ZNK6webrtc20EchoCancellationImpl26is_extended_filter_enabledEv(void);

/* Symbol: _ZN3rtc10GlobalLockC1Ev */
/* Demangled: rtc::GlobalLock::GlobalLock() */
int _ZN3rtc10GlobalLockC1Ev(void);

/* Symbol: WebRtcSpl_Resample22khzTo8khz */
/* Demangled: WebRtcSpl_Resample22khzTo8khz */
int WebRtcSpl_Resample22khzTo8khz(void);

/* Symbol: _ZN6webrtc7KeySortEPvS0_jjNS_4TypeE */
/* Demangled: webrtc::KeySort(void*, void*, unsigned int, unsigned int, webrtc::Type) */
int _ZN6webrtc7KeySortEPvS0_jjNS_4TypeE(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl5FlushEv */
/* Demangled: webrtc::FileWrapperImpl::Flush() */
int _ZN6webrtc15FileWrapperImpl5FlushEv(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEEEvPv(void);

/* Symbol: _ZN6webrtc9audioproc29_OutputData_default_instance_E */
/* Demangled: webrtc::audioproc::_OutputData_default_instance_ */
extern void* _ZN6webrtc9audioproc29_OutputData_default_instance_E;

/* Symbol: _ZN6webrtc13GetRightAlignEPKvj */
/* Demangled: webrtc::GetRightAlign(void const*, unsigned int) */
int _ZN6webrtc13GetRightAlignEPKvj(void);

/* Symbol: WebRtc_SoftResetDelayEstimator */
/* Demangled: WebRtc_SoftResetDelayEstimator */
int WebRtc_SoftResetDelayEstimator(void);

/* Symbol: scc_info_Stream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
/* Demangled: scc_info_Stream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern void* scc_info_Stream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto;

/* Symbol: _ZN6webrtc9audioproc10OutputData21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::OutputData::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc10OutputData21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZN3rtc11utf8_decodeEPKcjPm */
/* Demangled: rtc::utf8_decode(char const*, unsigned int, unsigned long*) */
int _ZN3rtc11utf8_decodeEPKcjPm(void);

/* Symbol: WebRtcIsac_DecodeLpcCoef */
/* Demangled: WebRtcIsac_DecodeLpcCoef */
int WebRtcIsac_DecodeLpcCoef(void);

/* Symbol: WebRtcIsac_kQMeanLag4Hi */
/* Demangled: WebRtcIsac_kQMeanLag4Hi */
extern void* WebRtcIsac_kQMeanLag4Hi;

/* Symbol: WebRtc_GetCPUFeaturesARM */
/* Demangled: WebRtc_GetCPUFeaturesARM */
int WebRtc_GetCPUFeaturesARM(void);

/* Symbol: WebRtc_last_delay_quality */
/* Demangled: WebRtc_last_delay_quality */
int WebRtc_last_delay_quality(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc5EventEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Event* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Event>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc5EventEJEEEPT_PS1_DpOT0_(void);

/* Symbol: scc_info_Test_DelayMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
/* Demangled: scc_info_Test_DelayMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern void* scc_info_Test_DelayMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto;

/* Symbol: _ZN3rtc9transformERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjRKS6_PFjPcjPKcjE */
/* Demangled: rtc::transform(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int (*)(char*, unsigned int, char const*, unsigned int)) */
int _ZN3rtc9transformERNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEjRKS6_PFjPcjPKcjE(void);

/* Symbol: _ZN6webrtc9Histogram15RemoveTransientEv */
/* Demangled: webrtc::Histogram::RemoveTransient() */
int _ZN6webrtc9Histogram15RemoveTransientEv(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_Frame::CopyFrom(webrtc::audioproc::Test_Frame const&) */
int _ZN6webrtc9audioproc10Test_Frame8CopyFromERKS1_(void);

/* Symbol: _ZN6webrtc9audioproc4TestD2Ev */
/* Demangled: webrtc::audioproc::Test::~Test() */
int _ZN6webrtc9audioproc4TestD2Ev(void);

/* Symbol: _ZN6webrtc11AudioBufferD0Ev */
/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
int _ZN6webrtc11AudioBufferD0Ev(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl18ProcessRenderAudioEPKNS_11AudioBufferE */
/* Demangled: webrtc::EchoCancellationImpl::ProcessRenderAudio(webrtc::AudioBuffer const*) */
int _ZN6webrtc20EchoCancellationImpl18ProcessRenderAudioEPKNS_11AudioBufferE(void);

/* Symbol: _ZThn4_NK6webrtc15GainControlImpl20num_handles_requiredEv */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::num_handles_required() const */
int _ZThn4_NK6webrtc15GainControlImpl20num_handles_requiredEv(void);

/* Symbol: _ZN6webrtc9audioproc4Init12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Init::InternalSwap(webrtc::audioproc::Init*) */
int _ZN6webrtc9audioproc4Init12InternalSwapEPS1_(void);

/* Symbol: _Z27GetSubframesPitchParametersiPdS_iiS_S_S_S_ */
/* Demangled: GetSubframesPitchParameters(int, double*, double*, int, int, double*, double*, double*, double*) */
int _Z27GetSubframesPitchParametersiPdS_iiS_S_S_S_(void);

/* Symbol: WebRtcIsac_kLpcMeansShape */
/* Demangled: WebRtcIsac_kLpcMeansShape */
extern void* WebRtcIsac_kLpcMeansShape;

/* Symbol: _ZN6webrtc3AgcD2Ev */
/* Demangled: webrtc::Agc::~Agc() */
int _ZN6webrtc3AgcD2Ev(void);

/* Symbol: _ZN3rtc17ClosePlatformFileEi */
/* Demangled: rtc::ClosePlatformFile(int) */
int _ZN3rtc17ClosePlatformFileEi(void);

/* Symbol: _ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_ */
/* Demangled: webrtc::MovingMoments::CalculateMoments(float const*, unsigned int, float*, float*) */
int _ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_(void);

/* Symbol: _ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j */
/* Demangled: webrtc::PoleZeroFilter::Create(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j(void);

/* Symbol: WebRtcIsac_AutoCorr */
/* Demangled: WebRtcIsac_AutoCorr */
int WebRtcIsac_AutoCorr(void);

/* Symbol: _ZN3rtc8TimeDiffEjj */
/* Demangled: rtc::TimeDiff(unsigned int, unsigned int) */
int _ZN3rtc8TimeDiffEjj(void);

/* Symbol: _ZN3rtc9ErrorNameEiPKNS_13ConstantLabelE */
/* Demangled: rtc::ErrorName(int, rtc::ConstantLabel const*) */
int _ZN3rtc9ErrorNameEiPKNS_13ConstantLabelE(void);

/* Symbol: _ZN3rtc14PlatformThreadC2EPFbPvES1_PKc */
/* Demangled: rtc::PlatformThread::PlatformThread(bool (*)(void*), void*, char const*) */
int _ZN3rtc14PlatformThreadC2EPFbPvES1_PKc(void);

/* Symbol: _ZN3rtc11html_encodeEPcjPKcj */
/* Demangled: rtc::html_encode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc11html_encodeEPcjPKcj(void);

/* Symbol: WebRtcIsac_kNumQCellLpcGain */
/* Demangled: WebRtcIsac_kNumQCellLpcGain */
extern void* WebRtcIsac_kNumQCellLpcGain;

/* Symbol: _ZTVN6webrtc15FileWrapperImplE */
/* Demangled: vtable for webrtc::FileWrapperImpl */
extern void* _ZTVN6webrtc15FileWrapperImplE;

/* Symbol: _ZThn4_N6webrtc15FileWrapperImpl6RewindEv */
/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::Rewind() */
int _ZThn4_N6webrtc15FileWrapperImpl6RewindEv(void);

/* Symbol: WebRtcAec_ScaleErrorSignal */
/* Demangled: WebRtcAec_ScaleErrorSignal */
extern void* WebRtcAec_ScaleErrorSignal;

/* Symbol: _ZN6webrtc9audioproc23_Init_default_instance_E */
/* Demangled: webrtc::audioproc::_Init_default_instance_ */
extern void* _ZN6webrtc9audioproc23_Init_default_instance_E;

/* Symbol: _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigEPNS_10BeamformerIfEE */
/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&, webrtc::Beamformer<float>*) */
int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigEPNS_10BeamformerIfEE(void);

/* Symbol: _ZN3rtc17MakeCheckOpStringImjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned long, unsigned int>(unsigned long const&, unsigned int const&, char const*) */
int _ZN3rtc17MakeCheckOpStringImjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void);

/* Symbol: WebRtcSpl_MaxValueW16C */
/* Demangled: WebRtcSpl_MaxValueW16C */
int WebRtcSpl_MaxValueW16C(void);

/* Symbol: WebRtcSpl_MinValueW16C */
/* Demangled: WebRtcSpl_MinValueW16C */
int WebRtcSpl_MinValueW16C(void);

/* Symbol: WebRtcAec_SubbandCoherence */
/* Demangled: WebRtcAec_SubbandCoherence */
extern void* WebRtcAec_SubbandCoherence;

/* Symbol: _ZNK6webrtc9audioproc10Test_Frame13IsInitializedEv */
/* Demangled: webrtc::audioproc::Test_Frame::IsInitialized() const */
int _ZNK6webrtc9audioproc10Test_Frame13IsInitializedEv(void);

/* Symbol: _ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*) */
int _ZNSt3__1lsINS_11char_traitsIcEEEERNS_13basic_ostreamIcT_EES6_PKc(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImpl6EnableEb */
/* Demangled: webrtc::LevelEstimatorImpl::Enable(bool) */
int _ZN6webrtc18LevelEstimatorImpl6EnableEb(void);

/* Symbol: _ZN6webrtc11RWLockPosixD1Ev */
/* Demangled: webrtc::RWLockPosix::~RWLockPosix() */
int _ZN6webrtc11RWLockPosixD1Ev(void);

/* Symbol: scc_info_Config_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
/* Demangled: scc_info_Config_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern void* scc_info_Config_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto;

/* Symbol: _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf */
/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void);

/* Symbol: _ZThn4_N6webrtc21EchoControlMobileImplD0Ev */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
int _ZThn4_N6webrtc21EchoControlMobileImplD0Ev(void);

/* Symbol: _ZN3rtc10SystemInfo10GetCurCpusEv */
/* Demangled: rtc::SystemInfo::GetCurCpus() */
int _ZN3rtc10SystemInfo10GetCurCpusEv(void);

/* Symbol: _ZNK6webrtc9audioproc6Config12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Config::ByteSizeLong() const */
int _ZNK6webrtc9audioproc6Config12ByteSizeLongEv(void);

/* Symbol: WebRtcIsac_kQMeanLag3Lo */
/* Demangled: WebRtcIsac_kQMeanLag3Lo */
extern void* WebRtcIsac_kQMeanLag3Lo;

/* Symbol: WebRtcIsac_kTransform */
/* Demangled: WebRtcIsac_kTransform */
extern void* WebRtcIsac_kTransform;

/* Symbol: _ZN6webrtc7WPDTree6UpdateEPKfj */
/* Demangled: webrtc::WPDTree::Update(float const*, unsigned int) */
int _ZN6webrtc7WPDTree6UpdateEPKfj(void);

/* Symbol: _ZN6webrtc19TransientSuppressor13UpdateBuffersEPf */
/* Demangled: webrtc::TransientSuppressor::UpdateBuffers(float*) */
int _ZN6webrtc19TransientSuppressor13UpdateBuffersEPf(void);

/* Symbol: _ZN3rtc14PlatformThread4StopEv */
/* Demangled: rtc::PlatformThread::Stop() */
int _ZN3rtc14PlatformThread4StopEv(void);

/* Symbol: _ZN6webrtc15WindowGenerator7HanningEiPf */
/* Demangled: webrtc::WindowGenerator::Hanning(int, float*) */
int _ZN6webrtc15WindowGenerator7HanningEiPf(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl18OpenFromFileHandleEP7__sFILEbbb */
/* Demangled: webrtc::FileWrapperImpl::OpenFromFileHandle(__sFILE*, bool, bool, bool) */
int _ZN6webrtc15FileWrapperImpl18OpenFromFileHandleEP7__sFILEbbb(void);

/* Symbol: _ZN6webrtc7WPDTreeD1Ev */
/* Demangled: webrtc::WPDTree::~WPDTree() */
int _ZN6webrtc7WPDTreeD1Ev(void);

/* Symbol: _ZN6webrtc9audioproc4TestC1Ev */
/* Demangled: webrtc::audioproc::Test::Test() */
int _ZN6webrtc9audioproc4TestC1Ev(void);

/* Symbol: scc_info_Test_Frame_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
/* Demangled: scc_info_Test_Frame_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern void* scc_info_Test_Frame_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto;

/* Symbol: _ZTVN6webrtc17ResampleConverterE */
/* Demangled: vtable for webrtc::ResampleConverter */
extern void* _ZTVN6webrtc17ResampleConverterE;

/* Symbol: WebRtcIsac_kUpperApFactorsFloat */
/* Demangled: WebRtcIsac_kUpperApFactorsFloat */
extern void* WebRtcIsac_kUpperApFactorsFloat;

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPfEEE4typeENSC_IS6_EES8_S8_ */
/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPfEEE4typeENSC_IS6_EES8_S8_ */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPKfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPfEEE4typeENSC_IS6_EES8_S8_(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def */
/* Demangled: guard variable for webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def;

/* Symbol: _ZN3rtc15CriticalSection8TryEnterEv */
/* Demangled: rtc::CriticalSection::TryEnter() */
int _ZN3rtc15CriticalSection8TryEnterEv(void);

/* Symbol: _ZN6webrtc15FileWrapperImplD1Ev */
/* Demangled: webrtc::FileWrapperImpl::~FileWrapperImpl() */
int _ZN6webrtc15FileWrapperImplD1Ev(void);

/* Symbol: _ZN6webrtc3AgcC1Ev */
/* Demangled: webrtc::Agc::Agc() */
int _ZN6webrtc3AgcC1Ev(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_15IntelligibilityEEERKT_vE3def */
/* Demangled: webrtc::Intelligibility const& webrtc::Config::default_value<webrtc::Intelligibility>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_15IntelligibilityEEERKT_vE3def;

/* Symbol: _ZN3rtc5Event5ResetEv */
/* Demangled: rtc::Event::Reset() */
int _ZN3rtc5Event5ResetEv(void);

/* Symbol: WebRtcIsac_kTransform1Float */
/* Demangled: WebRtcIsac_kTransform1Float */
extern void* WebRtcIsac_kTransform1Float;

/* Symbol: WebRtcSpl_GetScalingSquare */
/* Demangled: WebRtcSpl_GetScalingSquare */
int WebRtcSpl_GetScalingSquare(void);

/* Symbol: _ZNK6webrtc11AudioBuffer19num_keyboard_framesEv */
/* Demangled: webrtc::AudioBuffer::num_keyboard_frames() const */
int _ZNK6webrtc11AudioBuffer19num_keyboard_framesEv(void);

/* Symbol: _ZN6webrtc10TracePosixD1Ev */
/* Demangled: webrtc::TracePosix::~TracePosix() */
int _ZN6webrtc10TracePosixD1Ev(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl12CreateHandleEv */
/* Demangled: webrtc::EchoCancellationImpl::CreateHandle() const */
int _ZNK6webrtc20EchoCancellationImpl12CreateHandleEv(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl13DestroyHandleEPv */
/* Demangled: webrtc::EchoControlMobileImpl::DestroyHandle(void*) const */
int _ZNK6webrtc21EchoControlMobileImpl13DestroyHandleEPv(void);

/* Symbol: _ZNSt3__16vectorIPNS_7complexIfEENS_9allocatorIS3_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::complex<float>*, std::__1::allocator<std::__1::complex<float>*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPNS_7complexIfEENS_9allocatorIS3_EEE8__appendEj(void);

/* Symbol: _ZTVN6webrtc9audioproc10OutputDataE */
/* Demangled: vtable for webrtc::audioproc::OutputData */
extern void* _ZTVN6webrtc9audioproc10OutputDataE;

/* Symbol: _ZN6webrtc18VoiceDetectionImpl20set_stream_has_voiceEb */
/* Demangled: webrtc::VoiceDetectionImpl::set_stream_has_voice(bool) */
int _ZN6webrtc18VoiceDetectionImpl20set_stream_has_voiceEb(void);

/* Symbol: _ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst */
/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
int _ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst(void);

/* Symbol: WebRtcIsac_EncodeReceiveBw */
/* Demangled: WebRtcIsac_EncodeReceiveBw */
int WebRtcIsac_EncodeReceiveBw(void);

/* Symbol: WebRtcVad_GaussianProbability */
/* Demangled: WebRtcVad_GaussianProbability */
int WebRtcVad_GaussianProbability(void);

/* Symbol: _ZN6webrtc9audioproc4Init9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Init::MergeFrom(webrtc::audioproc::Init const&) */
int _ZN6webrtc9audioproc4Init9MergeFromERKS1_(void);

/* Symbol: _ZTVN6webrtc9audioproc10Test_FrameE */
/* Demangled: vtable for webrtc::audioproc::Test_Frame */
extern void* _ZTVN6webrtc9audioproc10Test_FrameE;

/* Symbol: _ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_ */
/* Demangled: webrtc::AudioProcessingImpl::Initialize(int, int, int, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout) */
int _ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_(void);

/* Symbol: _ZN6webrtc8RMSLevelD1Ev */
/* Demangled: webrtc::RMSLevel::~RMSLevel() */
int _ZN6webrtc8RMSLevelD1Ev(void);

/* Symbol: WebRtcIsac_EncodeBandwidth */
/* Demangled: WebRtcIsac_EncodeBandwidth */
int WebRtcIsac_EncodeBandwidth(void);

/* Symbol: WebRtcSpl_ElementwiseVectorMult */
/* Demangled: WebRtcSpl_ElementwiseVectorMult */
int WebRtcSpl_ElementwiseVectorMult(void);

/* Symbol: WebRtcAecm_Create */
/* Demangled: WebRtcAecm_Create */
int WebRtcAecm_Create(void);

/* Symbol: _ZN6webrtc15FloatToFloatS16EPKfjPf */
/* Demangled: webrtc::FloatToFloatS16(float const*, unsigned int, float*) */
int _ZN6webrtc15FloatToFloatS16EPKfjPf(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_proc_channels() const */
int _ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv(void);

/* Symbol: WebRtcIsac_DecorrelateInterVec */
/* Demangled: WebRtcIsac_DecorrelateInterVec */
int WebRtcIsac_DecorrelateInterVec(void);

/* Symbol: _ZTVN6webrtc9audioproc16Test_EchoMetricsE */
/* Demangled: vtable for webrtc::audioproc::Test_EchoMetrics */
extern void* _ZTVN6webrtc9audioproc16Test_EchoMetricsE;

/* Symbol: _ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEPKc */
/* Demangled: webrtc::AudioProcessingImpl::StartDebugRecording(char const*) */
int _ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEPKc(void);

/* Symbol: WebRtcIsac_kQCdfTableSizeGain */
/* Demangled: WebRtcIsac_kQCdfTableSizeGain */
extern void* WebRtcIsac_kQCdfTableSizeGain;

/* Symbol: WebRtcSpl_CrossCorrelation */
/* Demangled: WebRtcSpl_CrossCorrelation */
extern void* WebRtcSpl_CrossCorrelation;

/* Symbol: _ZNK6webrtc9Histogram10CurrentRmsEv */
/* Demangled: webrtc::Histogram::CurrentRms() const */
int _ZNK6webrtc9Histogram10CurrentRmsEv(void);

/* Symbol: _ZN6webrtc9HistogramC2Ei */
/* Demangled: webrtc::Histogram::Histogram(int) */
int _ZN6webrtc9HistogramC2Ei(void);

/* Symbol: _ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE */
/* Demangled: rtc::PlatformThread::SetPriority(rtc::ThreadPriority) */
int _ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE(void);

/* Symbol: _ZN6webrtc7BlockerC2EjjjjPKfjPNS_15BlockerCallbackE */
/* Demangled: webrtc::Blocker::Blocker(unsigned int, unsigned int, unsigned int, unsigned int, float const*, unsigned int, webrtc::BlockerCallback*) */
int _ZN6webrtc7BlockerC2EjjjjPKfjPNS_15BlockerCallbackE(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetricsC2ERKS1_ */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics(webrtc::audioproc::Test_DelayMetrics const&) */
int _ZN6webrtc9audioproc17Test_DelayMetricsC2ERKS1_(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer18ProcessRenderAudioEPKPfij */
/* Demangled: webrtc::IntelligibilityEnhancer::ProcessRenderAudio(float* const*, int, unsigned int) */
int _ZN6webrtc23IntelligibilityEnhancer18ProcessRenderAudioEPKPfij(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl20enable_delay_loggingEb */
/* Demangled: webrtc::EchoCancellationImpl::enable_delay_logging(bool) */
int _ZN6webrtc20EchoCancellationImpl20enable_delay_loggingEb(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosixC2Ev */
/* Demangled: webrtc::ConditionVariablePosix::ConditionVariablePosix() */
int _ZN6webrtc22ConditionVariablePosixC2Ev(void);

/* Symbol: WebRtc_FreeDelayEstimator */
/* Demangled: WebRtc_FreeDelayEstimator */
int WebRtc_FreeDelayEstimator(void);

/* Symbol: _ZN6webrtc9TraceImpl20SetTraceCallbackImplEPNS_13TraceCallbackE */
/* Demangled: webrtc::TraceImpl::SetTraceCallbackImpl(webrtc::TraceCallback*) */
int _ZN6webrtc9TraceImpl20SetTraceCallbackImplEPNS_13TraceCallbackE(void);

/* Symbol: scc_info_ReverseStream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
/* Demangled: scc_info_ReverseStream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern void* scc_info_ReverseStream_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto;

/* Symbol: _ZN6webrtc9audioproc10OutputData12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::OutputData::InternalSwap(webrtc::audioproc::OutputData*) */
int _ZN6webrtc9audioproc10OutputData12InternalSwapEPS1_(void);

/* Symbol: WebRtcSpl_MaxAbsValueW32 */
/* Demangled: WebRtcSpl_MaxAbsValueW32 */
extern void* WebRtcSpl_MaxAbsValueW32;

/* Symbol: WebRtcVad_CalcVad16khz */
/* Demangled: WebRtcVad_CalcVad16khz */
int WebRtcVad_CalcVad16khz(void);

/* Symbol: _ZN6webrtc17VadCircularBufferC2Ei */
/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
int _ZN6webrtc17VadCircularBufferC2Ei(void);

/* Symbol: WebRtcIsac_DecodeLpc */
/* Demangled: WebRtcIsac_DecodeLpc */
int WebRtcIsac_DecodeLpc(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf4Mid */
/* Demangled: WebRtcIsac_kQPitchLagCdf4Mid */
extern void* WebRtcIsac_kQPitchLagCdf4Mid;

/* Symbol: _ZN6webrtc15FileWrapperImpl4ReadEPvj */
/* Demangled: webrtc::FileWrapperImpl::Read(void*, unsigned int) */
int _ZN6webrtc15FileWrapperImpl4ReadEPvj(void);

/* Symbol: WebRtcAgc_Free */
/* Demangled: WebRtcAgc_Free */
int WebRtcAgc_Free(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal5a_nlpEPKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::a_nlp(webrtc::audioproc::Test_EchoMetrics const*) */
int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal5a_nlpEPKS1_(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetricsC2Ev */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics() */
int _ZN6webrtc9audioproc17Test_DelayMetricsC2Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_output_channels() const */
int _ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl8aec_coreEv */
/* Demangled: webrtc::EchoCancellationImpl::aec_core() const */
int _ZNK6webrtc20EchoCancellationImpl8aec_coreEv(void);

/* Symbol: WebRtcIsac_EncodeLb */
/* Demangled: WebRtcIsac_EncodeLb */
int WebRtcIsac_EncodeLb(void);

/* Symbol: _ZN6webrtc5Trace11CreateTraceEv */
/* Demangled: webrtc::Trace::CreateTrace() */
int _ZN6webrtc5Trace11CreateTraceEv(void);

/* Symbol: _ZN6webrtc15GainControlImpl18ProcessRenderAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::GainControlImpl::ProcessRenderAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc15GainControlImpl18ProcessRenderAudioEPNS_11AudioBufferE(void);

/* Symbol: WebRtc_AddBinaryFarSpectrum */
/* Demangled: WebRtc_AddBinaryFarSpectrum */
int WebRtc_AddBinaryFarSpectrum(void);

/* Symbol: _ZNK6webrtc15GainControlImpl17target_level_dbfsEv */
/* Demangled: webrtc::GainControlImpl::target_level_dbfs() const */
int _ZNK6webrtc15GainControlImpl17target_level_dbfsEv(void);

/* Symbol: WebRtcIsac_kLpcShapeLeftRecPointUb12 */
/* Demangled: WebRtcIsac_kLpcShapeLeftRecPointUb12 */
extern void* WebRtcIsac_kLpcShapeLeftRecPointUb12;

/* Symbol: _ZN6webrtc9ResamplerC2Eiij */
/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
int _ZN6webrtc9ResamplerC2Eiij(void);

/* Symbol: _ZNK6webrtc11AudioBuffer6data_fEv */
/* Demangled: webrtc::AudioBuffer::data_f() const */
int _ZNK6webrtc11AudioBuffer6data_fEv(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImpl6EnableEb */
/* Demangled: webrtc::VoiceDetectionImpl::Enable(bool) */
int _ZN6webrtc18VoiceDetectionImpl6EnableEb(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: WebRtcAec_GetEchoStats */
/* Demangled: WebRtcAec_GetEchoStats */
int WebRtcAec_GetEchoStats(void);

/* Symbol: WebRtcAec_GetSkew */
/* Demangled: WebRtcAec_GetSkew */
int WebRtcAec_GetSkew(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal25residual_echo_return_lossEPKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::residual_echo_return_loss(webrtc::audioproc::Test_EchoMetrics const*) */
int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal25residual_echo_return_lossEPKS1_(void);

/* Symbol: _ZN3rtc15CriticalSectionD1Ev */
/* Demangled: rtc::CriticalSection::~CriticalSection() */
int _ZN3rtc15CriticalSectionD1Ev(void);

/* Symbol: WebRtcIsac_Spec2time */
/* Demangled: WebRtcIsac_Spec2time */
int WebRtcIsac_Spec2time(void);

/* Symbol: WebRtcIsac_EncSampRate */
/* Demangled: WebRtcIsac_EncSampRate */
int WebRtcIsac_EncSampRate(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl19ProcessCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::EchoCancellationImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc20EchoCancellationImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc13PitchBasedVad11UpdatePriorEd */
/* Demangled: webrtc::PitchBasedVad::UpdatePrior(double) */
int _ZN6webrtc13PitchBasedVad11UpdatePriorEd(void);

/* Symbol: WebRtcIsac_EncodeLpcGainUb */
/* Demangled: WebRtcIsac_EncodeLpcGainUb */
int WebRtcIsac_EncodeLpcGainUb(void);

/* Symbol: WebRtcIsac_kQPitchLagCdfPtrHi */
/* Demangled: WebRtcIsac_kQPitchLagCdfPtrHi */
extern void* WebRtcIsac_kQPitchLagCdfPtrHi;

/* Symbol: WebRtcIsac_kLpcShapeLeftRecPointUb16 */
/* Demangled: WebRtcIsac_kLpcShapeLeftRecPointUb16 */
extern void* WebRtcIsac_kLpcShapeLeftRecPointUb16;

/* Symbol: WebRtcSpl_SqrtLocal */
/* Demangled: WebRtcSpl_SqrtLocal */
int WebRtcSpl_SqrtLocal(void);

/* Symbol: WebRtcIsac_DecorrelateLPGain */
/* Demangled: WebRtcIsac_DecorrelateLPGain */
int WebRtcIsac_DecorrelateLPGain(void);

/* Symbol: WebRtcSpl_ZerosArrayW16 */
/* Demangled: WebRtcSpl_ZerosArrayW16 */
int WebRtcSpl_ZerosArrayW16(void);

/* Symbol: _ZN6webrtc9HistogramC2Ev */
/* Demangled: webrtc::Histogram::Histogram() */
int _ZN6webrtc9HistogramC2Ev(void);

/* Symbol: _ZN6webrtc15AudioRingBufferD1Ev */
/* Demangled: webrtc::AudioRingBuffer::~AudioRingBuffer() */
int _ZN6webrtc15AudioRingBufferD1Ev(void);

/* Symbol: _ZNK6webrtc19ProcessingComponent11num_handlesEv */
/* Demangled: webrtc::ProcessingComponent::num_handles() const */
int _ZNK6webrtc19ProcessingComponent11num_handlesEv(void);

/* Symbol: WebRtcIsac_DecodeGain2 */
/* Demangled: WebRtcIsac_DecodeGain2 */
int WebRtcIsac_DecodeGain2(void);

/* Symbol: _ZN6webrtc9Resampler5ResetEiij */
/* Demangled: webrtc::Resampler::Reset(int, int, unsigned int) */
int _ZN6webrtc9Resampler5ResetEiij(void);

/* Symbol: _ZNK3rtc12TryCritScope6lockedEv */
/* Demangled: rtc::TryCritScope::locked() const */
int _ZNK3rtc12TryCritScope6lockedEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer17InitDelaySumMasksEv */
/* Demangled: webrtc::NonlinearBeamformer::InitDelaySumMasks() */
int _ZN6webrtc19NonlinearBeamformer17InitDelaySumMasksEv(void);

/* Symbol: WebRtcIsac_UpdateUplinkJitter */
/* Demangled: WebRtcIsac_UpdateUplinkJitter */
int WebRtcIsac_UpdateUplinkJitter(void);

/* Symbol: _ZN6webrtc7WPDNode6UpdateEPKfj */
/* Demangled: webrtc::WPDNode::Update(float const*, unsigned int) */
int _ZN6webrtc7WPDNode6UpdateEPKfj(void);

/* Symbol: WebRtcVad_CalcVad48khz */
/* Demangled: WebRtcVad_CalcVad48khz */
int WebRtcVad_CalcVad48khz(void);

/* Symbol: WebRtcIsacBw_SetBandwidthInfo */
/* Demangled: WebRtcIsacBw_SetBandwidthInfo */
int WebRtcIsacBw_SetBandwidthInfo(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::InternalSwap(webrtc::audioproc::Test_DelayMetrics*) */
int _ZN6webrtc9audioproc17Test_DelayMetrics12InternalSwapEPS1_(void);

/* Symbol: WebRtcAec_FilterFar */
/* Demangled: WebRtcAec_FilterFar */
extern void* WebRtcAec_FilterFar;

/* Symbol: _ZN6webrtc9audioproc13ReverseStreamD0Ev */
/* Demangled: webrtc::audioproc::ReverseStream::~ReverseStream() */
int _ZN6webrtc9audioproc13ReverseStreamD0Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPNS_10AudioFrameE */
/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStream(webrtc::AudioFrame*) */
int _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPNS_10AudioFrameE(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl15stream_has_echoEv */
/* Demangled: webrtc::EchoCancellationImpl::stream_has_echo() const */
int _ZNK6webrtc20EchoCancellationImpl15stream_has_echoEv(void);

/* Symbol: _ZThn4_NK6webrtc15GainControlImpl13DestroyHandleEPv */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::DestroyHandle(void*) const */
int _ZThn4_NK6webrtc15GainControlImpl13DestroyHandleEPv(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf1Hi */
/* Demangled: WebRtcIsac_kQPitchLagCdf1Hi */
extern void* WebRtcIsac_kQPitchLagCdf1Hi;

/* Symbol: WebRtcSpl_ResetResample16khzTo22khz */
/* Demangled: WebRtcSpl_ResetResample16khzTo22khz */
int WebRtcSpl_ResetResample16khzTo22khz(void);

/* Symbol: _ZN6webrtc10LogMessage8LoggableENS_15LoggingSeverityE */
/* Demangled: webrtc::LogMessage::Loggable(webrtc::LoggingSeverity) */
int _ZN6webrtc10LogMessage8LoggableENS_15LoggingSeverityE(void);

/* Symbol: _ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv */
/* Demangled: webrtc::AudioBuffer::SplitIntoFrequencyBands() */
int _ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv(void);

/* Symbol: _ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst */
/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
int _ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst(void);

/* Symbol: _ZN3rtc10LogMessageD2Ev */
/* Demangled: rtc::LogMessage::~LogMessage() */
int _ZN3rtc10LogMessageD2Ev(void);

/* Symbol: _ZNK6webrtc15AudioRingBuffer19ReadFramesAvailableEv */
/* Demangled: webrtc::AudioRingBuffer::ReadFramesAvailable() const */
int _ZNK6webrtc15AudioRingBuffer19ReadFramesAvailableEv(void);

/* Symbol: _ZThn4_N6webrtc11FileWrapper6RewindEv */
/* Demangled: non-virtual thunk to webrtc::FileWrapper::Rewind() */
int _ZThn4_N6webrtc11FileWrapper6RewindEv(void);

/* Symbol: cftmdl_wk1r */
/* Demangled: cftmdl_wk1r */
extern void* cftmdl_wk1r;

/* Symbol: _ZN6webrtc19NonlinearBeamformer21kHalfBeamWidthRadiansE */
/* Demangled: webrtc::NonlinearBeamformer::kHalfBeamWidthRadians */
extern void* _ZN6webrtc19NonlinearBeamformer21kHalfBeamWidthRadiansE;

/* Symbol: _ZNSt3__113__nth_elementIRNS_6__lessIffEEPfEEvT0_S5_S5_T_ */
/* Demangled: void std::__1::__nth_element<std::__1::__less<float, float>&, float*>(float*, float*, float*, std::__1::__less<float, float>&) */
int _ZNSt3__113__nth_elementIRNS_6__lessIffEEPfEEvT0_S5_S5_T_(void);

/* Symbol: WebRtcIsac_InitializePitch */
/* Demangled: WebRtcIsac_InitializePitch */
int WebRtcIsac_InitializePitch(void);

/* Symbol: WebRtcSpl_RealForwardFFT */
/* Demangled: WebRtcSpl_RealForwardFFT */
int WebRtcSpl_RealForwardFFT(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS_17EchoControlMobile11RoutingModeE */
/* Demangled: webrtc::EchoControlMobileImpl::set_routing_mode(webrtc::EchoControlMobile::RoutingMode) */
int _ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS_17EchoControlMobile11RoutingModeE(void);

/* Symbol: _ZThn4_NK6webrtc15GainControlImpl12CreateHandleEv */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::CreateHandle() const */
int _ZThn4_NK6webrtc15GainControlImpl12CreateHandleEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer18InitDiffuseCovMatsEv */
/* Demangled: webrtc::NonlinearBeamformer::InitDiffuseCovMats() */
int _ZN6webrtc19NonlinearBeamformer18InitDiffuseCovMatsEv(void);

/* Symbol: WebRtcIsac_EncHistMulti */
/* Demangled: WebRtcIsac_EncHistMulti */
int WebRtcIsac_EncHistMulti(void);

/* Symbol: WebRtcSpl_ResetResample22khzTo8khz */
/* Demangled: WebRtcSpl_ResetResample22khzTo8khz */
int WebRtcSpl_ResetResample22khzTo8khz(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc16Test_EchoMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZNK6webrtc9audioproc14Test_Statistic24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Test_Statistic::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc14Test_Statistic24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZNK6webrtc11AudioBuffer19num_frames_per_bandEv */
/* Demangled: webrtc::AudioBuffer::num_frames_per_band() const */
int _ZNK6webrtc11AudioBuffer19num_frames_per_bandEv(void);

/* Symbol: _ZN6webrtc8RMSLevel12ProcessMutedEj */
/* Demangled: webrtc::RMSLevel::ProcessMuted(unsigned int) */
int _ZN6webrtc8RMSLevel12ProcessMutedEj(void);

/* Symbol: _ZN6webrtc13SincResampler8ResampleEjPf */
/* Demangled: webrtc::SincResampler::Resample(unsigned int, float*) */
int _ZN6webrtc13SincResampler8ResampleEjPf(void);

/* Symbol: _ZNK6webrtc9audioproc6Stream13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Stream::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc6Stream13SetCachedSizeEi(void);

/* Symbol: WebRtcIsac_kQKltOffsetShape */
/* Demangled: WebRtcIsac_kQKltOffsetShape */
extern void* WebRtcIsac_kQKltOffsetShape;

/* Symbol: _ZNK6webrtc11AudioBuffer16channels_const_fEv */
/* Demangled: webrtc::AudioBuffer::channels_const_f() const */
int _ZNK6webrtc11AudioBuffer16channels_const_fEv(void);

/* Symbol: WebRtcIsac_kKltT2Shape */
/* Demangled: WebRtcIsac_kKltT2Shape */
extern void* WebRtcIsac_kKltT2Shape;

/* Symbol: _ZN6webrtc9audioproc4Test9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Test::MergeFrom(webrtc::audioproc::Test const&) */
int _ZN6webrtc9audioproc4Test9MergeFromERKS1_(void);

/* Symbol: _ZN3rtc25hex_encode_with_delimiterEPcjPKcjc */
/* Demangled: rtc::hex_encode_with_delimiter(char*, unsigned int, char const*, unsigned int, char) */
int _ZN3rtc25hex_encode_with_delimiterEPcjPKcjc(void);

/* Symbol: _ZN6webrtc9audioproc14Test_StatisticD1Ev */
/* Demangled: webrtc::audioproc::Test_Statistic::~Test_Statistic() */
int _ZN6webrtc9audioproc14Test_StatisticD1Ev(void);

/* Symbol: _ZNK6webrtc9audioproc10OutputData24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::OutputData::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc10OutputData24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImplC1EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::LevelEstimatorImpl::LevelEstimatorImpl(rtc::CriticalSection*) */
int _ZN6webrtc18LevelEstimatorImplC1EPN3rtc15CriticalSectionE(void);

/* Symbol: _ZN6webrtc20CriticalSectionPosixD1Ev */
/* Demangled: webrtc::CriticalSectionPosix::~CriticalSectionPosix() */
int _ZN6webrtc20CriticalSectionPosixD1Ev(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_11BeamformingEEERKT_vE3def */
/* Demangled: guard variable for webrtc::Beamforming const& webrtc::Config::default_value<webrtc::Beamforming>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_11BeamformingEEERKT_vE3def;

/* Symbol: _ZN3rtc12TryCritScopeD1Ev */
/* Demangled: rtc::TryCritScope::~TryCritScope() */
int _ZN3rtc12TryCritScopeD1Ev(void);

/* Symbol: _ZN3rtc10TimeMicrosEv */
/* Demangled: rtc::TimeMicros() */
int _ZN3rtc10TimeMicrosEv(void);

/* Symbol: WebRtcIsac_GetLpcCoefUb */
/* Demangled: WebRtcIsac_GetLpcCoefUb */
int WebRtcIsac_GetLpcCoefUb(void);

/* Symbol: WebRtcIsac_Poly2Rc */
/* Demangled: WebRtcIsac_Poly2Rc */
int WebRtcIsac_Poly2Rc(void);

/* Symbol: _ZN6webrtc5Trace3AddENS_10TraceLevelENS_11TraceModuleEiPKcz */
/* Demangled: webrtc::Trace::Add(webrtc::TraceLevel, webrtc::TraceModule, int, char const*, ...) */
int _ZN6webrtc5Trace3AddENS_10TraceLevelENS_11TraceModuleEiPKcz(void);

/* Symbol: _ZN6webrtc5Trace9TraceFileEPc */
/* Demangled: webrtc::Trace::TraceFile(char*) */
int _ZN6webrtc5Trace9TraceFileEPc(void);

/* Symbol: _ZN6webrtc9audioproc6Config8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Config::CopyFrom(webrtc::audioproc::Config const&) */
int _ZN6webrtc9audioproc6Config8CopyFromERKS1_(void);

/* Symbol: _ZN6webrtc11EventTracer18GetCategoryEnabledEPKc */
/* Demangled: webrtc::EventTracer::GetCategoryEnabled(char const*) */
int _ZN6webrtc11EventTracer18GetCategoryEnabledEPKc(void);

/* Symbol: _ZN6webrtc15AudioRingBufferC1Ejj */
/* Demangled: webrtc::AudioRingBuffer::AudioRingBuffer(unsigned int, unsigned int) */
int _ZN6webrtc15AudioRingBufferC1Ejj(void);

/* Symbol: _ZNSt3__16vectorIPiNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<int*, std::__1::allocator<int*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPiNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: WebRtcAec_set_config */
/* Demangled: WebRtcAec_set_config */
int WebRtcAec_set_config(void);

/* Symbol: WebRtc_AddFarSpectrumFloat */
/* Demangled: WebRtc_AddFarSpectrumFloat */
int WebRtc_AddFarSpectrumFloat(void);

/* Symbol: _ZN3rtc10LogMessage10timestamp_E */
/* Demangled: rtc::LogMessage::timestamp_ */
extern void* _ZN3rtc10LogMessage10timestamp_E;

/* Symbol: WebRtcSpl_ComplexFFT */
/* Demangled: WebRtcSpl_ComplexFFT */
int WebRtcSpl_ComplexFFT(void);

/* Symbol: _ZN6webrtc9audioproc10Test_FrameD2Ev */
/* Demangled: webrtc::audioproc::Test_Frame::~Test_Frame() */
int _ZN6webrtc9audioproc10Test_FrameD2Ev(void);

/* Symbol: _ZN6webrtc11AudioBuffer4dataEv */
/* Demangled: webrtc::AudioBuffer::data() */
int _ZN6webrtc11AudioBuffer4dataEv(void);

/* Symbol: _ZN6webrtc15GainControlImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_ */
/* Demangled: webrtc::GainControlImpl::GainControlImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
int _ZN6webrtc15GainControlImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl19echo_control_mobileEv */
/* Demangled: webrtc::AudioProcessingImpl::echo_control_mobile() const */
int _ZNK6webrtc19AudioProcessingImpl19echo_control_mobileEv(void);

/* Symbol: _ZN3rtc5EventC2Ebb */
/* Demangled: rtc::Event::Event(bool, bool) */
int _ZN3rtc5EventC2Ebb(void);

/* Symbol: WebRtcIsac_Encode */
/* Demangled: WebRtcIsac_Encode */
int WebRtcIsac_Encode(void);

/* Symbol: _ZN6webrtc9TraceImpl8GetTraceENS_10TraceLevelE */
/* Demangled: webrtc::TraceImpl::GetTrace(webrtc::TraceLevel) */
int _ZN6webrtc9TraceImpl8GetTraceENS_10TraceLevelE(void);

/* Symbol: WebRtcAgc_InitDigital */
/* Demangled: WebRtcAgc_InitDigital */
int WebRtcAgc_InitDigital(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_13DelayAgnosticEEERKT_vE3def */
/* Demangled: webrtc::DelayAgnostic const& webrtc::Config::default_value<webrtc::DelayAgnostic>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_13DelayAgnosticEEERKT_vE3def;

/* Symbol: _ZN6webrtc12VadAudioProcD2Ev */
/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
int _ZN6webrtc12VadAudioProcD2Ev(void);

/* Symbol: _ZN6webrtc11RealFourier13ComplexLengthEi */
/* Demangled: webrtc::RealFourier::ComplexLength(int) */
int _ZN6webrtc11RealFourier13ComplexLengthEi(void);

/* Symbol: WebRtc_DelayEstimatorProcessFloat */
/* Demangled: WebRtc_DelayEstimatorProcessFloat */
int WebRtc_DelayEstimatorProcessFloat(void);

/* Symbol: WebRtcAecm_UpdateFarHistory */
/* Demangled: WebRtcAecm_UpdateFarHistory */
int WebRtcAecm_UpdateFarHistory(void);

/* Symbol: _ZN6webrtc9audioproc15Event_Type_NameENS0_10Event_TypeE */
/* Demangled: webrtc::audioproc::Event_Type_Name(webrtc::audioproc::Event_Type) */
int _ZN6webrtc9audioproc15Event_Type_NameENS0_10Event_TypeE(void);

/* Symbol: _ZN6webrtc9audioproc10OutputDataC1ERKS1_ */
/* Demangled: webrtc::audioproc::OutputData::OutputData(webrtc::audioproc::OutputData const&) */
int _ZN6webrtc9audioproc10OutputDataC1ERKS1_(void);

/* Symbol: WebRtcIsac_kQMeanLag2Mid */
/* Demangled: WebRtcIsac_kQMeanLag2Mid */
extern void* WebRtcIsac_kQMeanLag2Mid;

/* Symbol: WebRtcIsac_kQArRc5Cdf */
/* Demangled: WebRtcIsac_kQArRc5Cdf */
extern void* WebRtcIsac_kQArRc5Cdf;

/* Symbol: _ZN6webrtc9audioproc5EventC2Ev */
/* Demangled: webrtc::audioproc::Event::Event() */
int _ZN6webrtc9audioproc5EventC2Ev(void);

/* Symbol: _ZN6webrtc15GainControlImpl19AllocateRenderQueueEv */
/* Demangled: webrtc::GainControlImpl::AllocateRenderQueue() */
int _ZN6webrtc15GainControlImpl19AllocateRenderQueueEv(void);

/* Symbol: _ZThn4_N6webrtc15GainControlImpl10InitializeEv */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::Initialize() */
int _ZThn4_N6webrtc15GainControlImpl10InitializeEv(void);

/* Symbol: _ZN6webrtc8RMSLevel3RMSEv */
/* Demangled: webrtc::RMSLevel::RMS() */
int _ZN6webrtc8RMSLevel3RMSEv(void);

/* Symbol: _ZN6webrtc15WindowGenerator19KaiserBesselDerivedEfjPf */
/* Demangled: webrtc::WindowGenerator::KaiserBesselDerived(float, unsigned int, float*) */
int _ZN6webrtc15WindowGenerator19KaiserBesselDerivedEfjPf(void);

/* Symbol: _ZN6webrtc11RealFourier9FftLengthEi */
/* Demangled: webrtc::RealFourier::FftLength(int) */
int _ZN6webrtc11RealFourier9FftLengthEi(void);

/* Symbol: android_setCpu */
/* Demangled: android_setCpu */
int android_setCpu(void);

/* Symbol: _ZN6webrtc14ValidAlignmentEj */
/* Demangled: webrtc::ValidAlignment(unsigned int) */
int _ZN6webrtc14ValidAlignmentEj(void);

/* Symbol: _ZN6webrtc9audioproc10OutputData5ClearEv */
/* Demangled: webrtc::audioproc::OutputData::Clear() */
int _ZN6webrtc9audioproc10OutputData5ClearEv(void);

/* Symbol: _ZN6webrtc18HighPassFilterImplC1EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::HighPassFilterImpl::HighPassFilterImpl(rtc::CriticalSection*) */
int _ZN6webrtc18HighPassFilterImplC1EPN3rtc15CriticalSectionE(void);

/* Symbol: _ZN6webrtc10FIRFilterC6FilterEPKfjPf */
/* Demangled: webrtc::FIRFilterC::Filter(float const*, unsigned int, float*) */
int _ZN6webrtc10FIRFilterC6FilterEPKfjPf(void);

/* Symbol: _ZN6webrtc10FIRFilterCC2EPKfj */
/* Demangled: webrtc::FIRFilterC::FIRFilterC(float const*, unsigned int) */
int _ZN6webrtc10FIRFilterCC2EPKfj(void);

/* Symbol: WebRtcIsac_EncodeFrameLen */
/* Demangled: WebRtcIsac_EncodeFrameLen */
int WebRtcIsac_EncodeFrameLen(void);

/* Symbol: _ZN3rtc12FatalMessageC1EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3rtc12FatalMessageC1EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc10LogMessageD2Ev */
/* Demangled: webrtc::LogMessage::~LogMessage() */
int _ZN6webrtc10LogMessageD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc14Test_StatisticC1ERKS1_ */
/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic(webrtc::audioproc::Test_Statistic const&) */
int _ZN6webrtc9audioproc14Test_StatisticC1ERKS1_(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer10DotProductEPKfS2_j */
/* Demangled: webrtc::IntelligibilityEnhancer::DotProduct(float const*, float const*, unsigned int) */
int _ZN6webrtc23IntelligibilityEnhancer10DotProductEPKfS2_j(void);

/* Symbol: WebRtcIsac_RemoveLarMean */
/* Demangled: WebRtcIsac_RemoveLarMean */
int WebRtcIsac_RemoveLarMean(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc7SortKeyIaEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<webrtc::SortKey<signed char>*, std::__1::allocator<webrtc::SortKey<signed char>*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPN6webrtc7SortKeyIaEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImplC1EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::VoiceDetectionImpl::VoiceDetectionImpl(rtc::CriticalSection*) */
int _ZN6webrtc18VoiceDetectionImplC1EPN3rtc15CriticalSectionE(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBank10UpModulateEPKPKfjjPf */
/* Demangled: webrtc::ThreeBandFilterBank::UpModulate(float const* const*, unsigned int, unsigned int, float*) */
int _ZN6webrtc19ThreeBandFilterBank10UpModulateEPKPKfjjPf(void);

/* Symbol: WebRtcAec_MoveFarReadPtr */
/* Demangled: WebRtcAec_MoveFarReadPtr */
int WebRtcAec_MoveFarReadPtr(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl20ReadQueuedRenderDataEv */
/* Demangled: webrtc::EchoControlMobileImpl::ReadQueuedRenderData() */
int _ZN6webrtc21EchoControlMobileImpl20ReadQueuedRenderDataEv(void);

/* Symbol: WebRtcSpl_LPBy2IntToInt */
/* Demangled: WebRtcSpl_LPBy2IntToInt */
int WebRtcSpl_LPBy2IntToInt(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic5ClearEv */
/* Demangled: webrtc::audioproc::Test_Statistic::Clear() */
int _ZN6webrtc9audioproc14Test_Statistic5ClearEv(void);

/* Symbol: WebRtcSpl_AnalysisQMF */
/* Demangled: WebRtcSpl_AnalysisQMF */
int WebRtcSpl_AnalysisQMF(void);

/* Symbol: WebRtcIsac_kQArBoundaryLevels */
/* Demangled: WebRtcIsac_kQArBoundaryLevels */
extern void* WebRtcIsac_kQArBoundaryLevels;

/* Symbol: WebRtcIsac_kQKltModelInitIndex */
/* Demangled: WebRtcIsac_kQKltModelInitIndex */
extern void* WebRtcIsac_kQKltModelInitIndex;

/* Symbol: WebRtcSpl_GetHanningWindow */
/* Demangled: WebRtcSpl_GetHanningWindow */
int WebRtcSpl_GetHanningWindow(void);

/* Symbol: _ZN6webrtc9audioproc10Test_FrameC1Ev */
/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame() */
int _ZN6webrtc9audioproc10Test_FrameC1Ev(void);

/* Symbol: _ZN3rtc9CritScopeD1Ev */
/* Demangled: rtc::CritScope::~CritScope() */
int _ZN3rtc9CritScopeD1Ev(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def */
/* Demangled: webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def;

/* Symbol: _ZN6webrtc15GainControlImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_ */
/* Demangled: webrtc::GainControlImpl::GainControlImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
int _ZN6webrtc15GainControlImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void);

/* Symbol: WebRtcIsac_kQInitIndexLagLo */
/* Demangled: WebRtcIsac_kQInitIndexLagLo */
extern void* WebRtcIsac_kQInitIndexLagLo;

/* Symbol: _ZN6webrtc11RWLockPosix4InitEv */
/* Demangled: webrtc::RWLockPosix::Init() */
int _ZN6webrtc11RWLockPosix4InitEv(void);

/* Symbol: WebRtcAecm_CalcLinearEnergies */
/* Demangled: WebRtcAecm_CalcLinearEnergies */
extern void* WebRtcAecm_CalcLinearEnergies;

/* Symbol: _ZN6webrtc9audioproc13ReverseStreamC2ERKS1_ */
/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream(webrtc::audioproc::ReverseStream const&) */
int _ZN6webrtc9audioproc13ReverseStreamC2ERKS1_(void);

/* Symbol: _ZN6webrtc9audioproc6Stream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Stream::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc6Stream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZN6webrtc19TransientSuppressorD1Ev */
/* Demangled: webrtc::TransientSuppressor::~TransientSuppressor() */
int _ZN6webrtc19TransientSuppressorD1Ev(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl10is_enabledEv */
/* Demangled: webrtc::EchoCancellationImpl::is_enabled() const */
int _ZNK6webrtc20EchoCancellationImpl10is_enabledEv(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImplD0Ev */
/* Demangled: webrtc::NoiseSuppressionImpl::~NoiseSuppressionImpl() */
int _ZN6webrtc20NoiseSuppressionImplD0Ev(void);

/* Symbol: _ZN6webrtc12VadAudioProc3RmsEPdj */
/* Demangled: webrtc::VadAudioProc::Rms(double*, unsigned int) */
int _ZN6webrtc12VadAudioProc3RmsEPdj(void);

/* Symbol: _ZN6webrtc12VadAudioProcC1Ev */
/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
int _ZN6webrtc12VadAudioProcC1Ev(void);

/* Symbol: _ZN6webrtc14AudioConverterC2Ejjjj */
/* Demangled: webrtc::AudioConverter::AudioConverter(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc14AudioConverterC2Ejjjj(void);

/* Symbol: WebRtcIsac_PitchfilterPre */
/* Demangled: WebRtcIsac_PitchfilterPre */
int WebRtcIsac_PitchfilterPre(void);

/* Symbol: _ZNK6webrtc9audioproc14Test_Statistic11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Test_Statistic::GetTypeName() const */
int _ZNK6webrtc9audioproc14Test_Statistic11GetTypeNameEv(void);

/* Symbol: WebRtcIsac_kIintraVecDecorrMatUb16 */
/* Demangled: WebRtcIsac_kIintraVecDecorrMatUb16 */
extern void* WebRtcIsac_kIintraVecDecorrMatUb16;

/* Symbol: WebRtcIsac_kFrameLengthCdf_ptr */
/* Demangled: WebRtcIsac_kFrameLengthCdf_ptr */
extern void* WebRtcIsac_kFrameLengthCdf_ptr;

/* Symbol: _ZN6webrtc3Agc21set_target_level_dbfsEi */
/* Demangled: webrtc::Agc::set_target_level_dbfs(int) */
int _ZN6webrtc3Agc21set_target_level_dbfsEi(void);

/* Symbol: WebRtcNsx_InitCore */
/* Demangled: WebRtcNsx_InitCore */
int WebRtcNsx_InitCore(void);

/* Symbol: _ZN6webrtc9TraceImplD1Ev */
/* Demangled: webrtc::TraceImpl::~TraceImpl() */
int _ZN6webrtc9TraceImplD1Ev(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect10InitializeEv */
/* Demangled: webrtc::AgcManagerDirect::Initialize() */
int _ZN6webrtc16AgcManagerDirect10InitializeEv(void);

/* Symbol: _ZN6webrtc9audioproc10OutputDataD0Ev */
/* Demangled: webrtc::audioproc::OutputData::~OutputData() */
int _ZN6webrtc9audioproc10OutputDataD0Ev(void);

/* Symbol: _ZTVN6webrtc17EchoControlMobileE */
/* Demangled: vtable for webrtc::EchoControlMobile */
extern void* _ZTVN6webrtc17EchoControlMobileE;

/* Symbol: _ZN6webrtc15GainControlImplD2Ev */
/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
int _ZN6webrtc15GainControlImplD2Ev(void);

/* Symbol: WebRtc_SoftResetDelayEstimatorFarend */
/* Demangled: WebRtc_SoftResetDelayEstimatorFarend */
int WebRtc_SoftResetDelayEstimatorFarend(void);

/* Symbol: _ZTVN6webrtc15GainControlImplE */
/* Demangled: vtable for webrtc::GainControlImpl */
extern void* _ZTVN6webrtc15GainControlImplE;

/* Symbol: _ZN3rtc9FindLabelEiPKNS_13ConstantLabelE */
/* Demangled: rtc::FindLabel(int, rtc::ConstantLabel const*) */
int _ZN3rtc9FindLabelEiPKNS_13ConstantLabelE(void);

/* Symbol: WebRtcAec_GetMetrics */
/* Demangled: WebRtcAec_GetMetrics */
int WebRtcAec_GetMetrics(void);

/* Symbol: WebRtcAec_sqrtHanning */
/* Demangled: WebRtcAec_sqrtHanning */
extern void* WebRtcAec_sqrtHanning;

/* Symbol: _ZN6webrtc9audioproc6ConfigC2Ev */
/* Demangled: webrtc::audioproc::Config::Config() */
int _ZN6webrtc9audioproc6ConfigC2Ev(void);

/* Symbol: _ZNK6webrtc9audioproc17Test_DelayMetrics13IsInitializedEv */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::IsInitialized() const */
int _ZNK6webrtc9audioproc17Test_DelayMetrics13IsInitializedEv(void);

/* Symbol: _ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: _ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_ */
/* Demangled: void webrtc::DownmixInterleavedToMono<short>(short const*, unsigned int, int, short*) */
int _ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_(void);

/* Symbol: _ZNK6webrtc15IFChannelBuffer8RefreshIEv */
/* Demangled: webrtc::IFChannelBuffer::RefreshI() const */
int _ZNK6webrtc15IFChannelBuffer8RefreshIEv(void);

/* Symbol: WebRtcIsac_FilterAndCombineFloat */
/* Demangled: WebRtcIsac_FilterAndCombineFloat */
int WebRtcIsac_FilterAndCombineFloat(void);

/* Symbol: WebRtcIsac_kInterVecDecorrMatUb12 */
/* Demangled: WebRtcIsac_kInterVecDecorrMatUb12 */
extern void* WebRtcIsac_kInterVecDecorrMatUb12;

/* Symbol: WebRtcSpl_Energy */
/* Demangled: WebRtcSpl_Energy */
int WebRtcSpl_Energy(void);

/* Symbol: _ZNK6webrtc9audioproc10OutputData13IsInitializedEv */
/* Demangled: webrtc::audioproc::OutputData::IsInitialized() const */
int _ZNK6webrtc9audioproc10OutputData13IsInitializedEv(void);

/* Symbol: _ZThn4_NK6webrtc21EchoControlMobileImpl20num_handles_requiredEv */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::num_handles_required() const */
int _ZThn4_NK6webrtc21EchoControlMobileImpl20num_handles_requiredEv(void);

/* Symbol: _ZN6webrtc18HighPassFilterImplD2Ev */
/* Demangled: webrtc::HighPassFilterImpl::~HighPassFilterImpl() */
int _ZN6webrtc18HighPassFilterImplD2Ev(void);

/* Symbol: WebRtcIsac_AssignSize */
/* Demangled: WebRtcIsac_AssignSize */
int WebRtcIsac_AssignSize(void);

/* Symbol: WebRtcIsac_SetMaxRate */
/* Demangled: WebRtcIsac_SetMaxRate */
int WebRtcIsac_SetMaxRate(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15analysis_neededEb */
/* Demangled: webrtc::AudioProcessingImpl::analysis_needed(bool) const */
int _ZNK6webrtc19AudioProcessingImpl15analysis_neededEb(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl19are_metrics_enabledEv */
/* Demangled: webrtc::EchoCancellationImpl::are_metrics_enabled() const */
int _ZNK6webrtc20EchoCancellationImpl19are_metrics_enabledEv(void);

/* Symbol: _ZThn4_NK6webrtc20EchoCancellationImpl15ConfigureHandleEPv */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::ConfigureHandle(void*) const */
int _ZThn4_NK6webrtc20EchoCancellationImpl15ConfigureHandleEPv(void);

/* Symbol: _ZN3rtc7tracing20StartInternalCaptureEPKc */
/* Demangled: rtc::tracing::StartInternalCapture(char const*) */
int _ZN3rtc7tracing20StartInternalCaptureEPKc(void);

/* Symbol: WebRtcSpl_Init */
/* Demangled: WebRtcSpl_Init */
int WebRtcSpl_Init(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImplC1EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::NoiseSuppressionImpl::NoiseSuppressionImpl(rtc::CriticalSection*) */
int _ZN6webrtc20NoiseSuppressionImplC1EPN3rtc15CriticalSectionE(void);

/* Symbol: WebRtcIsac_ResetBitstream */
/* Demangled: WebRtcIsac_ResetBitstream */
int WebRtcIsac_ResetBitstream(void);

/* Symbol: WebRtcIsac_Lar2PolyInterpolUB */
/* Demangled: WebRtcIsac_Lar2PolyInterpolUB */
int WebRtcIsac_Lar2PolyInterpolUB(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc14Test_StatisticEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Test_Statistic* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_Statistic>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc14Test_StatisticEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN6webrtc14PoleZeroFilterC2EPKfjS2_j */
/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc14PoleZeroFilterC2EPKfjS2_j(void);

/* Symbol: _ZN6webrtc16RealFourierOouraC2Ei */
/* Demangled: webrtc::RealFourierOoura::RealFourierOoura(int) */
int _ZN6webrtc16RealFourierOouraC2Ei(void);

/* Symbol: WebRtcIsac_kInterVecDecorrMatUb16 */
/* Demangled: WebRtcIsac_kInterVecDecorrMatUb16 */
extern void* WebRtcIsac_kInterVecDecorrMatUb16;

/* Symbol: WebRtcIsac_kQKltQuantMinGain */
/* Demangled: WebRtcIsac_kQKltQuantMinGain */
extern void* WebRtcIsac_kQKltQuantMinGain;

/* Symbol: _ZN6webrtc15FileWrapperImpl9FlushImplEv */
/* Demangled: webrtc::FileWrapperImpl::FlushImpl() */
int _ZN6webrtc15FileWrapperImpl9FlushImplEv(void);

/* Symbol: _ZN3rtc28FdopenPlatformFileForWritingEi */
/* Demangled: rtc::FdopenPlatformFileForWriting(int) */
int _ZN3rtc28FdopenPlatformFileForWritingEi(void);

/* Symbol: _ZN6webrtc20EchoCancellationImplD1Ev */
/* Demangled: webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
int _ZN6webrtc20EchoCancellationImplD1Ev(void);

/* Symbol: _ZN3rtc13GlobalLockPod6UnlockEv */
/* Demangled: rtc::GlobalLockPod::Unlock() */
int _ZN3rtc13GlobalLockPod6UnlockEv(void);

/* Symbol: WebRtcIsac_GetDownLinkBwIndex */
/* Demangled: WebRtcIsac_GetDownLinkBwIndex */
int WebRtcIsac_GetDownLinkBwIndex(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf4Lo */
/* Demangled: WebRtcIsac_kQPitchLagCdf4Lo */
extern void* WebRtcIsac_kQPitchLagCdf4Lo;

/* Symbol: _ZN6webrtc9audioproc6Config5ClearEv */
/* Demangled: webrtc::audioproc::Config::Clear() */
int _ZN6webrtc9audioproc6Config5ClearEv(void);

/* Symbol: _ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE */
/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
int _ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE(void);

/* Symbol: WebRtcAec_SetSystemDelay */
/* Demangled: WebRtcAec_SetSystemDelay */
int WebRtcAec_SetSystemDelay(void);

/* Symbol: _ZNK6webrtc9audioproc13ReverseStream12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::ReverseStream::ByteSizeLong() const */
int _ZNK6webrtc9audioproc13ReverseStream12ByteSizeLongEv(void);

/* Symbol: _ZN6webrtc15SparseFIRFilterC1EPKfjjj */
/* Demangled: webrtc::SparseFIRFilter::SparseFIRFilter(float const*, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15SparseFIRFilterC1EPKfjjj(void);

/* Symbol: _ZN6webrtc14AzimuthToPointEf */
/* Demangled: webrtc::AzimuthToPoint(float) */
int _ZN6webrtc14AzimuthToPointEf(void);

/* Symbol: _ZN6webrtc11RWLockPosix20AcquireLockExclusiveEv */
/* Demangled: webrtc::RWLockPosix::AcquireLockExclusive() */
int _ZN6webrtc11RWLockPosix20AcquireLockExclusiveEv(void);

/* Symbol: _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf */
/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::StreamConfig const&, float* const*) */
int _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf(void);

/* Symbol: WebRtcSpl_MaxAbsIndexW16 */
/* Demangled: WebRtcSpl_MaxAbsIndexW16 */
int WebRtcSpl_MaxAbsIndexW16(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl13DestroyHandleEPv */
/* Demangled: webrtc::EchoCancellationImpl::DestroyHandle(void*) const */
int _ZNK6webrtc20EchoCancellationImpl13DestroyHandleEPv(void);

/* Symbol: _ZTVN6webrtc21EchoControlMobileImplE */
/* Demangled: vtable for webrtc::EchoControlMobileImpl */
extern void* _ZTVN6webrtc21EchoControlMobileImplE;

/* Symbol: _ZNK6webrtc15GainControlImpl19stream_is_saturatedEv */
/* Demangled: webrtc::GainControlImpl::stream_is_saturated() const */
int _ZNK6webrtc15GainControlImpl19stream_is_saturatedEv(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetricsD2Ev */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::~Test_EchoMetrics() */
int _ZN6webrtc9audioproc16Test_EchoMetricsD2Ev(void);

/* Symbol: _ZN6webrtc19TransientSuppressor10InitializeEiii */
/* Demangled: webrtc::TransientSuppressor::Initialize(int, int, int) */
int _ZN6webrtc19TransientSuppressor10InitializeEiii(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Test_Statistic::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc14Test_Statistic21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZN6webrtc9audioproc16Event_Type_ParseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS0_10Event_TypeE */
/* Demangled: webrtc::audioproc::Event_Type_Parse(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, webrtc::audioproc::Event_Type*) */
int _ZN6webrtc9audioproc16Event_Type_ParseERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS0_10Event_TypeE(void);

/* Symbol: _ZN3rtc15CriticalSection5LeaveEv */
/* Demangled: rtc::CriticalSection::Leave() */
int _ZN3rtc15CriticalSection5LeaveEv(void);

/* Symbol: _ZN3rtc10LogMessage14log_to_stderr_E */
/* Demangled: rtc::LogMessage::log_to_stderr_ */
extern void* _ZN3rtc10LogMessage14log_to_stderr_E;

/* Symbol: _ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: rtc::hex_encode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__14sqrtIfEENS_7complexIT_EERKS3_ */
/* Demangled: std::__1::complex<float> std::__1::sqrt<float>(std::__1::complex<float> const&) */
int _ZNSt3__14sqrtIfEENS_7complexIT_EERKS3_(void);

/* Symbol: WebRtcIsac_kQPitchLagStepsizeHi */
/* Demangled: WebRtcIsac_kQPitchLagStepsizeHi */
extern void* WebRtcIsac_kQPitchLagStepsizeHi;

/* Symbol: _ZN6webrtc11AudioBuffer22CopyLowPassToReferenceEv */
/* Demangled: webrtc::AudioBuffer::CopyLowPassToReference() */
int _ZN6webrtc11AudioBuffer22CopyLowPassToReferenceEv(void);

/* Symbol: WebRtcSpl_CopyFromEndW16 */
/* Demangled: WebRtcSpl_CopyFromEndW16 */
int WebRtcSpl_CopyFromEndW16(void);

/* Symbol: WebRtcSpl_LPBy2ShortToInt */
/* Demangled: WebRtcSpl_LPBy2ShortToInt */
int WebRtcSpl_LPBy2ShortToInt(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::ReverseStream::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc13ReverseStream27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc16Test_EchoMetricsEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_EchoMetrics>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc16Test_EchoMetricsEEEvPv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl16synthesis_neededEb */
/* Demangled: webrtc::AudioProcessingImpl::synthesis_needed(bool) const */
int _ZNK6webrtc19AudioProcessingImpl16synthesis_neededEb(void);

/* Symbol: _ZNK6webrtc18VoiceDetectionImpl16stream_has_voiceEv */
/* Demangled: webrtc::VoiceDetectionImpl::stream_has_voice() const */
int _ZNK6webrtc18VoiceDetectionImpl16stream_has_voiceEv(void);

/* Symbol: WebRtc_binary_last_delay */
/* Demangled: WebRtc_binary_last_delay */
int WebRtc_binary_last_delay(void);

/* Symbol: WebRtcIsac_version */
/* Demangled: WebRtcIsac_version */
int WebRtcIsac_version(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImplD2Ev */
/* Demangled: webrtc::VoiceDetectionImpl::~VoiceDetectionImpl() */
int _ZN6webrtc18VoiceDetectionImplD2Ev(void);

/* Symbol: WebRtc_CreateBinaryDelayEstimatorFarend */
/* Demangled: WebRtc_CreateBinaryDelayEstimatorFarend */
int WebRtc_CreateBinaryDelayEstimatorFarend(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_ */
/* Demangled: webrtc::NonlinearBeamformer::ProcessAudioBlock(std::__1::complex<float> const* const*, unsigned int, unsigned int, unsigned int, std::__1::complex<float>* const*) */
int _ZN6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_(void);

/* Symbol: _ZN6webrtc13SincResampler16InitializeKernelEv */
/* Demangled: webrtc::SincResampler::InitializeKernel() */
int _ZN6webrtc13SincResampler16InitializeKernelEv(void);

/* Symbol: WebRtcSpl_ScaleAndAddVectorsWithRoundC */
/* Demangled: WebRtcSpl_ScaleAndAddVectorsWithRoundC */
int WebRtcSpl_ScaleAndAddVectorsWithRoundC(void);

/* Symbol: _ZN6webrtc8Atomic3215CompareExchangeEii */
/* Demangled: webrtc::Atomic32::CompareExchange(int, int) */
int _ZN6webrtc8Atomic3215CompareExchangeEii(void);

/* Symbol: _ZN6webrtc15AudioProcessing6CreateEv */
/* Demangled: webrtc::AudioProcessing::Create() */
int _ZN6webrtc15AudioProcessing6CreateEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::__map_value_compare<webrtc::ConfigOptionID, std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::less<webrtc::ConfigOptionID>, true>, std::__1::allocator<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: WebRtcIsac_kMeanLarUb12 */
/* Demangled: WebRtcIsac_kMeanLarUb12 */
extern void* WebRtcIsac_kMeanLarUb12;

/* Symbol: WebRtcSpl_VectorBitShiftW32ToW16 */
/* Demangled: WebRtcSpl_VectorBitShiftW32ToW16 */
int WebRtcSpl_VectorBitShiftW32ToW16(void);

/* Symbol: WebRtcAec_enable_delay_agnostic */
/* Demangled: WebRtcAec_enable_delay_agnostic */
int WebRtcAec_enable_delay_agnostic(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl24InitializeLevelEstimatorEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeLevelEstimator() */
int _ZN6webrtc19AudioProcessingImpl24InitializeLevelEstimatorEv(void);

/* Symbol: _ZN6webrtc9audioproc6Stream21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Stream::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc6Stream21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetricsC1Ev */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics() */
int _ZN6webrtc9audioproc16Test_EchoMetricsC1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeCapture(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_16ProcessingConfigE(void);

/* Symbol: _ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj */
/* Demangled: webrtc::VadAudioProc::GetLpcPolynomials(double*, unsigned int) */
int _ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj(void);

/* Symbol: _ZN3rtc15GlobalLockScopeC1EPNS_13GlobalLockPodE */
/* Demangled: rtc::GlobalLockScope::GlobalLockScope(rtc::GlobalLockPod*) */
int _ZN3rtc15GlobalLockScopeC1EPNS_13GlobalLockPodE(void);

/* Symbol: _ZN6webrtc15AudioRingBuffer24MoveReadPositionBackwardEj */
/* Demangled: webrtc::AudioRingBuffer::MoveReadPositionBackward(unsigned int) */
int _ZN6webrtc15AudioRingBuffer24MoveReadPositionBackwardEj(void);

/* Symbol: WebRtc_set_lookahead */
/* Demangled: WebRtc_set_lookahead */
int WebRtc_set_lookahead(void);

/* Symbol: _ZN6webrtc13StandaloneVadD1Ev */
/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
int _ZN6webrtc13StandaloneVadD1Ev(void);

/* Symbol: _ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: rtc::hex_decode(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: WebRtcAecm_BufferFarFrame */
/* Demangled: WebRtcAecm_BufferFarFrame */
int WebRtcAecm_BufferFarFrame(void);

/* Symbol: _ZTVN6webrtc13ComplexMatrixIfEE */
/* Demangled: vtable for webrtc::ComplexMatrix<float> */
extern void* _ZTVN6webrtc13ComplexMatrixIfEE;

/* Symbol: WebRtcIsac_kMeanLarUb16 */
/* Demangled: WebRtcIsac_kMeanLarUb16 */
extern void* WebRtcIsac_kMeanLarUb16;

/* Symbol: WebRtcIsac_ZeroPoleFilter */
/* Demangled: WebRtcIsac_ZeroPoleFilter */
int WebRtcIsac_ZeroPoleFilter(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStream8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::ReverseStream::CopyFrom(webrtc::audioproc::ReverseStream const&) */
int _ZN6webrtc9audioproc13ReverseStream8CopyFromERKS1_(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArray5ClearEv */
/* Demangled: webrtc::intelligibility::VarianceArray::Clear() */
int _ZN6webrtc15intelligibility13VarianceArray5ClearEv(void);

/* Symbol: WebRtcSpl_ZerosArrayW32 */
/* Demangled: WebRtcSpl_ZerosArrayW32 */
int WebRtcSpl_ZerosArrayW32(void);

/* Symbol: _ZN6webrtc20CriticalSectionPosix5LeaveEv */
/* Demangled: webrtc::CriticalSectionPosix::Leave() */
int _ZN6webrtc20CriticalSectionPosix5LeaveEv(void);

/* Symbol: _ZN6webrtc13MovingMomentsC2Ej */
/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
int _ZN6webrtc13MovingMomentsC2Ej(void);

/* Symbol: WebRtcIsac_DecodeSpec */
/* Demangled: WebRtcIsac_DecodeSpec */
int WebRtcIsac_DecodeSpec(void);

/* Symbol: WebRtcIsac_EncodePitchGain */
/* Demangled: WebRtcIsac_EncodePitchGain */
int WebRtcIsac_EncodePitchGain(void);

/* Symbol: WebRtcAgc_Create */
/* Demangled: WebRtcAgc_Create */
int WebRtcAgc_Create(void);

/* Symbol: _ZN6webrtc9audioproc6StreamD2Ev */
/* Demangled: webrtc::audioproc::Stream::~Stream() */
int _ZN6webrtc9audioproc6StreamD2Ev(void);

/* Symbol: WebRtcIsac_Poly2Lar */
/* Demangled: WebRtcIsac_Poly2Lar */
int WebRtcIsac_Poly2Lar(void);

/* Symbol: WebRtcAecm_ResetAdaptiveChannel */
/* Demangled: WebRtcAecm_ResetAdaptiveChannel */
extern void* WebRtcAecm_ResetAdaptiveChannel;

/* Symbol: WebRtc_AddFarSpectrumFix */
/* Demangled: WebRtc_AddFarSpectrumFix */
int WebRtc_AddFarSpectrumFix(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeRender(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE(void);

/* Symbol: _ZN6webrtc25CovarianceMatrixGenerator22AngledCovarianceMatrixEffjjjiRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE */
/* Demangled: webrtc::CovarianceMatrixGenerator::AngledCovarianceMatrix(float, float, unsigned int, unsigned int, unsigned int, int, std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::ComplexMatrix<float>*) */
int _ZN6webrtc25CovarianceMatrixGenerator22AngledCovarianceMatrixEffjjjiRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer17AnalyzeClearBlockEf */
/* Demangled: webrtc::IntelligibilityEnhancer::AnalyzeClearBlock(float) */
int _ZN6webrtc23IntelligibilityEnhancer17AnalyzeClearBlockEf(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc13ReverseStreamEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::ReverseStream* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::ReverseStream>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc13ReverseStreamEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN6webrtc9audioproc4TestC2ERKS1_ */
/* Demangled: webrtc::audioproc::Test::Test(webrtc::audioproc::Test const&) */
int _ZN6webrtc9audioproc4TestC2ERKS1_(void);

/* Symbol: _ZThn4_NK6webrtc15GainControlImpl15ConfigureHandleEPv */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::ConfigureHandle(void*) const */
int _ZThn4_NK6webrtc15GainControlImpl15ConfigureHandleEPv(void);

/* Symbol: WebRtcAec_CreateAec */
/* Demangled: WebRtcAec_CreateAec */
int WebRtcAec_CreateAec(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec1Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec1Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec1Ub12;

/* Symbol: WebRtcVad_Downsampling */
/* Demangled: WebRtcVad_Downsampling */
int WebRtcVad_Downsampling(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc16Test_EchoMetricsEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_EchoMetrics>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc16Test_EchoMetricsEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigE */
/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&) */
int _ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigE(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj(void);

/* Symbol: _ZN6webrtc13PitchBasedVadC2Ev */
/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadC2Ev(void);

/* Symbol: _ZN3rtc13DumpBacktraceEv */
/* Demangled: rtc::DumpBacktrace() */
int _ZN3rtc13DumpBacktraceEv(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer14SolveForLambdaEfff */
/* Demangled: webrtc::IntelligibilityEnhancer::SolveForLambda(float, float, float) */
int _ZN6webrtc23IntelligibilityEnhancer14SolveForLambdaEfff(void);

/* Symbol: WebRtcSpl_UpBy2ShortToInt */
/* Demangled: WebRtcSpl_UpBy2ShortToInt */
int WebRtcSpl_UpBy2ShortToInt(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb */
/* Demangled: webrtc::AgcManagerDirect::SetCaptureMuted(bool) */
int _ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb(void);

/* Symbol: _ZN6webrtc9audioproc5Event27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Event::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc5Event27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZN6webrtc9audioproc10OutputData9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::OutputData::MergeFrom(webrtc::audioproc::OutputData const&) */
int _ZN6webrtc9audioproc10OutputData9MergeFromERKS1_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl34StartDebugRecordingForPlatformFileEi */
/* Demangled: webrtc::AudioProcessingImpl::StartDebugRecordingForPlatformFile(int) */
int _ZN6webrtc19AudioProcessingImpl34StartDebugRecordingForPlatformFileEi(void);

/* Symbol: _ZN6webrtc16ArePerpendicularERKNS_14CartesianPointIfEES3_ */
/* Demangled: webrtc::ArePerpendicular(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
int _ZN6webrtc16ArePerpendicularERKNS_14CartesianPointIfEES3_(void);

/* Symbol: WebRtcIsac_Rc2Lar */
/* Demangled: WebRtcIsac_Rc2Lar */
int WebRtcIsac_Rc2Lar(void);

/* Symbol: _ZN6webrtc17TransientDetectorC1Ei */
/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
int _ZN6webrtc17TransientDetectorC1Ei(void);

/* Symbol: WebRtcAecm_CalcEnergies */
/* Demangled: WebRtcAecm_CalcEnergies */
int WebRtcAecm_CalcEnergies(void);

/* Symbol: WebRtcAgc_get_config */
/* Demangled: WebRtcAgc_get_config */
int WebRtcAgc_get_config(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl15ConfigureHandleEPv */
/* Demangled: webrtc::EchoCancellationImpl::ConfigureHandle(void*) const */
int _ZNK6webrtc20EchoCancellationImpl15ConfigureHandleEPv(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl16InitializeHandleEPv */
/* Demangled: webrtc::EchoControlMobileImpl::InitializeHandle(void*) const */
int _ZNK6webrtc21EchoControlMobileImpl16InitializeHandleEPv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignEjRKi */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::assign(unsigned int, int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignEjRKi(void);

/* Symbol: WebRtcIsac_kIntraVecDecorrMatUb12 */
/* Demangled: WebRtcIsac_kIntraVecDecorrMatUb12 */
extern void* WebRtcIsac_kIntraVecDecorrMatUb12;

/* Symbol: WebRtcIsac_SetEncSampRate */
/* Demangled: WebRtcIsac_SetEncSampRate */
int WebRtcIsac_SetEncSampRate(void);

/* Symbol: WebRtcAec_echo_state */
/* Demangled: WebRtcAec_echo_state */
int WebRtcAec_echo_state(void);

/* Symbol: _ZN6webrtc9audioproc6ConfigC1ERKS1_ */
/* Demangled: webrtc::audioproc::Config::Config(webrtc::audioproc::Config const&) */
int _ZN6webrtc9audioproc6ConfigC1ERKS1_(void);

/* Symbol: _ZN6webrtc11AudioBuffer16set_num_channelsEj */
/* Demangled: webrtc::AudioBuffer::set_num_channels(unsigned int) */
int _ZN6webrtc11AudioBuffer16set_num_channelsEj(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec1Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec1Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec1Ub16;

/* Symbol: _ZN6webrtc17TransientDetectorD2Ev */
/* Demangled: webrtc::TransientDetector::~TransientDetector() */
int _ZN6webrtc17TransientDetectorD2Ev(void);

/* Symbol: WebRtc_available_write */
/* Demangled: WebRtc_available_write */
int WebRtc_available_write(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4TestEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Test* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4TestEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN3rtc13TimeIsBetweenEjjj */
/* Demangled: rtc::TimeIsBetween(unsigned int, unsigned int, unsigned int) */
int _ZN3rtc13TimeIsBetweenEjjj(void);

/* Symbol: WebRtcSpl_ReverseOrderMultArrayElements */
/* Demangled: WebRtcSpl_ReverseOrderMultArrayElements */
int WebRtcSpl_ReverseOrderMultArrayElements(void);

/* Symbol: _ZNK6webrtc11AudioBuffer19split_bands_const_fEj */
/* Demangled: webrtc::AudioBuffer::split_bands_const_f(unsigned int) const */
int _ZNK6webrtc11AudioBuffer19split_bands_const_fEj(void);

/* Symbol: _ZN3rtc17MakeCheckOpStringIiiEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<int, int>(int const&, int const&, char const*) */
int _ZN3rtc17MakeCheckOpStringIiiEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl17suppression_levelEv */
/* Demangled: webrtc::EchoCancellationImpl::suppression_level() const */
int _ZNK6webrtc20EchoCancellationImpl17suppression_levelEv(void);

/* Symbol: WebRtc_CreateBinaryDelayEstimator */
/* Demangled: WebRtc_CreateBinaryDelayEstimator */
int WebRtc_CreateBinaryDelayEstimator(void);

/* Symbol: _ZN3rtc14PlatformThreadC1EPFbPvES1_PKc */
/* Demangled: rtc::PlatformThread::PlatformThread(bool (*)(void*), void*, char const*) */
int _ZN3rtc14PlatformThreadC1EPFbPvES1_PKc(void);

/* Symbol: WebRtcSpl_Resample22khzTo16khz */
/* Demangled: WebRtcSpl_Resample22khzTo16khz */
int WebRtcSpl_Resample22khzTo16khz(void);

/* Symbol: _ZN6webrtc9audioproc6StreamC1Ev */
/* Demangled: webrtc::audioproc::Stream::Stream() */
int _ZN6webrtc9audioproc6StreamC1Ev(void);

/* Symbol: _ZN3rtc10SystemInfo13logical_cpus_E */
/* Demangled: rtc::SystemInfo::logical_cpus_ */
extern void* _ZN3rtc10SystemInfo13logical_cpus_E;

/* Symbol: _ZTVN6webrtc19NonlinearBeamformerE */
/* Demangled: vtable for webrtc::NonlinearBeamformer */
extern void* _ZTVN6webrtc19NonlinearBeamformerE;

/* Symbol: _ZN6webrtc9audioproc4InitC2Ev */
/* Demangled: webrtc::audioproc::Init::Init() */
int _ZN6webrtc9audioproc4InitC2Ev(void);

/* Symbol: _ZNK6webrtc15GainControlImpl19compression_gain_dbEv */
/* Demangled: webrtc::GainControlImpl::compression_gain_db() const */
int _ZNK6webrtc15GainControlImpl19compression_gain_dbEv(void);

/* Symbol: _ZN3rtc27make_char_safe_for_filenameEc */
/* Demangled: rtc::make_char_safe_for_filename(char) */
int _ZN3rtc27make_char_safe_for_filenameEc(void);

/* Symbol: WebRtcIsac_kQArRc4Levels */
/* Demangled: WebRtcIsac_kQArRc4Levels */
extern void* WebRtcIsac_kQArRc4Levels;

/* Symbol: _ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_ */
/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStreamLocked(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&) */
int _ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_(void);

/* Symbol: _ZTVN6webrtc19AudioProcessingImplE */
/* Demangled: vtable for webrtc::AudioProcessingImpl */
extern void* _ZTVN6webrtc19AudioProcessingImplE;

/* Symbol: _ZN6webrtc21VoiceActivityDetectorC2Ev */
/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
int _ZN6webrtc21VoiceActivityDetectorC2Ev(void);

/* Symbol: _ZN3rtc11TmToSecondsERK2tm */
/* Demangled: rtc::TmToSeconds(tm const&) */
int _ZN3rtc11TmToSecondsERK2tm(void);

/* Symbol: _ZN6webrtc17EchoControlMobile20echo_path_size_bytesEv */
/* Demangled: webrtc::EchoControlMobile::echo_path_size_bytes() */
int _ZN6webrtc17EchoControlMobile20echo_path_size_bytesEv(void);

/* Symbol: WebRtcIsac_EncodeLpcLb */
/* Demangled: WebRtcIsac_EncodeLpcLb */
int WebRtcIsac_EncodeLpcLb(void);

/* Symbol: _ZN6webrtc5Trace16SetTraceCallbackEPNS_13TraceCallbackE */
/* Demangled: webrtc::Trace::SetTraceCallback(webrtc::TraceCallback*) */
int _ZN6webrtc5Trace16SetTraceCallbackEPNS_13TraceCallbackE(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosixD0Ev */
/* Demangled: webrtc::ConditionVariablePosix::~ConditionVariablePosix() */
int _ZN6webrtc22ConditionVariablePosixD0Ev(void);

/* Symbol: cftfsub_128 */
/* Demangled: cftfsub_128 */
extern void* cftfsub_128;

/* Symbol: _ZN6webrtc15SplittingFilter9SynthesisEPKNS_15IFChannelBufferEPS1_ */
/* Demangled: webrtc::SplittingFilter::Synthesis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
int _ZN6webrtc15SplittingFilter9SynthesisEPKNS_15IFChannelBufferEPS1_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplD0Ev */
/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
int _ZN6webrtc19AudioProcessingImplD0Ev(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl24set_stream_drift_samplesEi */
/* Demangled: webrtc::EchoCancellationImpl::set_stream_drift_samples(int) */
int _ZN6webrtc20EchoCancellationImpl24set_stream_drift_samplesEi(void);

/* Symbol: WebRtcAec_BufferFarendPartition */
/* Demangled: WebRtcAec_BufferFarendPartition */
int WebRtcAec_BufferFarendPartition(void);

/* Symbol: _ZN6webrtc19ProcessingComponent15EnableComponentEb */
/* Demangled: webrtc::ProcessingComponent::EnableComponent(bool) */
int _ZN6webrtc19ProcessingComponent15EnableComponentEb(void);

/* Symbol: _ZN3rtc15GlobalLockScopeD1Ev */
/* Demangled: rtc::GlobalLockScope::~GlobalLockScope() */
int _ZN3rtc15GlobalLockScopeD1Ev(void);

/* Symbol: _ZTVN6webrtc10TracePosixE */
/* Demangled: vtable for webrtc::TracePosix */
extern void* _ZTVN6webrtc10TracePosixE;

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetricsD0Ev */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::~Test_DelayMetrics() */
int _ZN6webrtc9audioproc17Test_DelayMetricsD0Ev(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_11BeamformingEEERKT_vE3def */
/* Demangled: webrtc::Beamforming const& webrtc::Config::default_value<webrtc::Beamforming>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_11BeamformingEEERKT_vE3def;

/* Symbol: _ZN6webrtc17TransientDetector6DetectEPKfjS2_j */
/* Demangled: webrtc::TransientDetector::Detect(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc17TransientDetector6DetectEPKfjS2_j(void);

/* Symbol: _ZN6webrtc11AudioBuffer12split_data_fEv */
/* Demangled: webrtc::AudioBuffer::split_data_f() */
int _ZN6webrtc11AudioBuffer12split_data_fEv(void);

/* Symbol: _ZN6webrtc9ResamplerD2Ev */
/* Demangled: webrtc::Resampler::~Resampler() */
int _ZN6webrtc9ResamplerD2Ev(void);

/* Symbol: _ZNK6webrtc9TraceImpl14CreateFileNameEPKcPcj */
/* Demangled: webrtc::TraceImpl::CreateFileName(char const*, char*, unsigned int) const */
int _ZNK6webrtc9TraceImpl14CreateFileNameEPKcPcj(void);

/* Symbol: _ZN6webrtc9Histogram26RemoveOldestEntryAndUpdateEv */
/* Demangled: webrtc::Histogram::RemoveOldestEntryAndUpdate() */
int _ZN6webrtc9Histogram26RemoveOldestEntryAndUpdateEv(void);

/* Symbol: _ZN6webrtc11RealFourier6CreateEi */
/* Demangled: webrtc::RealFourier::Create(int) */
int _ZN6webrtc11RealFourier6CreateEi(void);

/* Symbol: WebRtcIsac_AllPoleFilter */
/* Demangled: WebRtcIsac_AllPoleFilter */
int WebRtcIsac_AllPoleFilter(void);

/* Symbol: _ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::GainControlImpl::AnalyzeCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZNK3rtc15CriticalSection8IsLockedEv */
/* Demangled: rtc::CriticalSection::IsLocked() const */
int _ZNK3rtc15CriticalSection8IsLockedEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_ */
/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_ */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_(void);

/* Symbol: WebRtcIsac_UpdateUplinkBwImpl */
/* Demangled: WebRtcIsac_UpdateUplinkBwImpl */
int WebRtcIsac_UpdateUplinkBwImpl(void);

/* Symbol: WebRtcSpl_SqrtOfOneMinusXSquared */
/* Demangled: WebRtcSpl_SqrtOfOneMinusXSquared */
int WebRtcSpl_SqrtOfOneMinusXSquared(void);

/* Symbol: _ZTVN6webrtc20EchoCancellationImplE */
/* Demangled: vtable for webrtc::EchoCancellationImpl */
extern void* _ZTVN6webrtc20EchoCancellationImplE;

/* Symbol: _ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_15IFChannelBufferEPS1_ */
/* Demangled: webrtc::SplittingFilter::TwoBandsSynthesis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
int _ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_15IFChannelBufferEPS1_(void);

/* Symbol: WebRtc_ReadBuffer */
/* Demangled: WebRtc_ReadBuffer */
int WebRtc_ReadBuffer(void);

/* Symbol: WebRtcIsac_kQArRcCdfPtr */
/* Demangled: WebRtcIsac_kQArRcCdfPtr */
extern void* WebRtcIsac_kQArRcCdfPtr;

/* Symbol: scc_info_Test_Statistic_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
/* Demangled: scc_info_Test_Statistic_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern void* scc_info_Test_Statistic_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto;

/* Symbol: _ZN6webrtc15FloatS16ToFloatEPKfjPf */
/* Demangled: webrtc::FloatS16ToFloat(float const*, unsigned int, float*) */
int _ZN6webrtc15FloatS16ToFloatEPKfjPf(void);

/* Symbol: _ZN6webrtc15AudioProcessing20kMaxAECMSampleRateHzE */
/* Demangled: webrtc::AudioProcessing::kMaxAECMSampleRateHz */
extern void* _ZN6webrtc15AudioProcessing20kMaxAECMSampleRateHzE;

/* Symbol: _ZN3rtc10GlobalLockC2Ev */
/* Demangled: rtc::GlobalLock::GlobalLock() */
int _ZN3rtc10GlobalLockC2Ev(void);

/* Symbol: _ZN6webrtc13SincResampler13UpdateRegionsEb */
/* Demangled: webrtc::SincResampler::UpdateRegions(bool) */
int _ZN6webrtc13SincResampler13UpdateRegionsEb(void);

/* Symbol: WebRtcAec_StoreAsComplex */
/* Demangled: WebRtcAec_StoreAsComplex */
extern void* WebRtcAec_StoreAsComplex;

/* Symbol: _ZNK6webrtc15GainControlImpl16InitializeHandleEPv */
/* Demangled: webrtc::GainControlImpl::InitializeHandle(void*) const */
int _ZNK6webrtc15GainControlImpl16InitializeHandleEPv(void);

/* Symbol: WebRtcIsac_kQArRc1Cdf */
/* Demangled: WebRtcIsac_kQArRc1Cdf */
extern void* WebRtcIsac_kQArRc1Cdf;

/* Symbol: WebRtcAec_Init */
/* Demangled: WebRtcAec_Init */
int WebRtcAec_Init(void);

/* Symbol: _ZNK6webrtc9audioproc4Init12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Init::ByteSizeLong() const */
int _ZNK6webrtc9audioproc4Init12ByteSizeLongEv(void);

/* Symbol: WebRtcIsac_kQMeanGain1Q12 */
/* Demangled: WebRtcIsac_kQMeanGain1Q12 */
extern void* WebRtcIsac_kQMeanGain1Q12;

/* Symbol: _ZN6webrtc18VoiceDetectionImpl17set_frame_size_msEi */
/* Demangled: webrtc::VoiceDetectionImpl::set_frame_size_ms(int) */
int _ZN6webrtc18VoiceDetectionImpl17set_frame_size_msEi(void);

/* Symbol: _ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityES9_ */
/* Demangled: rtc::LogMessage::OutputToDebug(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityES9_(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC1EPS0_NS0_11AudioSourceE */
/* Demangled: webrtc::IntelligibilityEnhancer::TransformCallback::TransformCallback(webrtc::IntelligibilityEnhancer*, webrtc::IntelligibilityEnhancer::AudioSource) */
int _ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC1EPS0_NS0_11AudioSourceE(void);

/* Symbol: WebRtcIsac_DecodeUb12 */
/* Demangled: WebRtcIsac_DecodeUb12 */
int WebRtcIsac_DecodeUb12(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc7SortKeyItEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<webrtc::SortKey<unsigned short>*, std::__1::allocator<webrtc::SortKey<unsigned short>*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPN6webrtc7SortKeyItEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc9audioproc6Stream12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Stream::InternalSwap(webrtc::audioproc::Stream*) */
int _ZN6webrtc9audioproc6Stream12InternalSwapEPS1_(void);

/* Symbol: _ZNK6webrtc9audioproc17Test_DelayMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc17Test_DelayMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZN6webrtc11AudioBufferD1Ev */
/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
int _ZN6webrtc11AudioBufferD1Ev(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl25is_delay_agnostic_enabledEv */
/* Demangled: webrtc::EchoCancellationImpl::is_delay_agnostic_enabled() const */
int _ZNK6webrtc20EchoCancellationImpl25is_delay_agnostic_enabledEv(void);

/* Symbol: _ZThn4_N6webrtc20EchoCancellationImplD0Ev */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
int _ZThn4_N6webrtc20EchoCancellationImplD0Ev(void);

/* Symbol: _ZN3rtc10hex_decodeEPcjPKcj */
/* Demangled: rtc::hex_decode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc10hex_decodeEPcjPKcj(void);

/* Symbol: WebRtcVad_CalcVad32khz */
/* Demangled: WebRtcVad_CalcVad32khz */
int WebRtcVad_CalcVad32khz(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect17voice_probabilityEv */
/* Demangled: webrtc::AgcManagerDirect::voice_probability() */
int _ZN6webrtc16AgcManagerDirect17voice_probabilityEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: scc_info_Event_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
/* Demangled: scc_info_Event_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern void* scc_info_Event_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto;

/* Symbol: _ZNK6webrtc11AudioBuffer8activityEv */
/* Demangled: webrtc::AudioBuffer::activity() const */
int _ZNK6webrtc11AudioBuffer8activityEv(void);

/* Symbol: _ZThn4_NK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::GetHandleError(void*) const */
int _ZThn4_NK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv(void);

/* Symbol: _ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE */
/* Demangled: rtc::LogMessage::RemoveLogToStream(rtc::LogSink*) */
int _ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE(void);

/* Symbol: _ZN3rtc10hex_encodeEh */
/* Demangled: rtc::hex_encode(unsigned char) */
int _ZN3rtc10hex_encodeEh(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArrayC1EjNS1_8StepTypeEjf */
/* Demangled: webrtc::intelligibility::VarianceArray::VarianceArray(unsigned int, webrtc::intelligibility::VarianceArray::StepType, unsigned int, float) */
int _ZN6webrtc15intelligibility13VarianceArrayC1EjNS1_8StepTypeEjf(void);

/* Symbol: WebRtcSpl_MaxValueW32C */
/* Demangled: WebRtcSpl_MaxValueW32C */
int WebRtcSpl_MaxValueW32C(void);

/* Symbol: WebRtcSpl_MinValueW32C */
/* Demangled: WebRtcSpl_MinValueW32C */
int WebRtcSpl_MinValueW32C(void);

/* Symbol: WebRtcSpl_Resample32khzTo24khz */
/* Demangled: WebRtcSpl_Resample32khzTo24khz */
int WebRtcSpl_Resample32khzTo24khz(void);

/* Symbol: WebRtc_set_allowed_offset */
/* Demangled: WebRtc_set_allowed_offset */
int WebRtc_set_allowed_offset(void);

/* Symbol: _ZN6webrtc19ProcessingComponentC2Ev */
/* Demangled: webrtc::ProcessingComponent::ProcessingComponent() */
int _ZN6webrtc19ProcessingComponentC2Ev(void);

/* Symbol: _ZN6webrtc9ResamplerC1Ev */
/* Demangled: webrtc::Resampler::Resampler() */
int _ZN6webrtc9ResamplerC1Ev(void);

/* Symbol: _ZN3rtc7tracing22ShutdownInternalTracerEv */
/* Demangled: rtc::tracing::ShutdownInternalTracer() */
int _ZN3rtc7tracing22ShutdownInternalTracerEv(void);

/* Symbol: WebRtcIsac_DecodeUb16 */
/* Demangled: WebRtcIsac_DecodeUb16 */
int WebRtcIsac_DecodeUb16(void);

/* Symbol: _ZN6webrtc9audioproc5Event9_Internal6streamEPKS1_ */
/* Demangled: webrtc::audioproc::Event::_Internal::stream(webrtc::audioproc::Event const*) */
int _ZN6webrtc9audioproc5Event9_Internal6streamEPKS1_(void);

/* Symbol: _ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize_append(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: _ZTVN6webrtc9audioproc5EventE */
/* Demangled: vtable for webrtc::audioproc::Event */
extern void* _ZTVN6webrtc9audioproc5EventE;

/* Symbol: _ZN6webrtc19NonlinearBeamformer33InitHighFrequencyCorrectionRangesEv */
/* Demangled: webrtc::NonlinearBeamformer::InitHighFrequencyCorrectionRanges() */
int _ZN6webrtc19NonlinearBeamformer33InitHighFrequencyCorrectionRangesEv(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec3Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec3Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec3Ub12;

/* Symbol: _ZN6webrtc17VadCircularBuffer3SetEid */
/* Demangled: webrtc::VadCircularBuffer::Set(int, double) */
int _ZN6webrtc17VadCircularBuffer3SetEid(void);

/* Symbol: _ZNK6webrtc16RealFourierOoura7ForwardEPKfPNSt3__17complexIfEE */
/* Demangled: webrtc::RealFourierOoura::Forward(float const*, std::__1::complex<float>*) const */
int _ZNK6webrtc16RealFourierOoura7ForwardEPKfPNSt3__17complexIfEE(void);

/* Symbol: WebRtcNsx_set_policy_core */
/* Demangled: WebRtcNsx_set_policy_core */
int WebRtcNsx_set_policy_core(void);

/* Symbol: _ZN6webrtc9TraceImpl16AddMessageToListEPKctNS_10TraceLevelE */
/* Demangled: webrtc::TraceImpl::AddMessageToList(char const*, unsigned short, webrtc::TraceLevel) */
int _ZN6webrtc9TraceImpl16AddMessageToListEPKctNS_10TraceLevelE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeHighPassFilter() */
int _ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl12gain_controlEv */
/* Demangled: webrtc::AudioProcessingImpl::gain_control() const */
int _ZNK6webrtc19AudioProcessingImpl12gain_controlEv(void);

/* Symbol: _ZThn4_N6webrtc15GainControlImplD0Ev */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::~GainControlImpl() */
int _ZThn4_N6webrtc15GainControlImplD0Ev(void);

/* Symbol: _ZN6webrtc11RWLockPosixD2Ev */
/* Demangled: webrtc::RWLockPosix::~RWLockPosix() */
int _ZN6webrtc11RWLockPosixD2Ev(void);

/* Symbol: WebRtcVad_ValidRateAndFrameLength */
/* Demangled: WebRtcVad_ValidRateAndFrameLength */
int WebRtcVad_ValidRateAndFrameLength(void);

/* Symbol: WebRtcAgc_SaturationCtrl */
/* Demangled: WebRtcAgc_SaturationCtrl */
int WebRtcAgc_SaturationCtrl(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetricsC2ERKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics(webrtc::audioproc::Test_EchoMetrics const&) */
int _ZN6webrtc9audioproc16Test_EchoMetricsC2ERKS1_(void);

/* Symbol: _ZThn4_N6webrtc21EchoControlMobileImplD1Ev */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
int _ZThn4_N6webrtc21EchoControlMobileImplD1Ev(void);

/* Symbol: WebRtcIsac_PitchfilterPre_gains */
/* Demangled: WebRtcIsac_PitchfilterPre_gains */
int WebRtcIsac_PitchfilterPre_gains(void);

/* Symbol: _ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<short*, std::__1::allocator<short*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZNK6webrtc9audioproc6Config24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Config::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc6Config24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZNK6webrtc9audioproc4Test13IsInitializedEv */
/* Demangled: webrtc::audioproc::Test::IsInitialized() const */
int _ZNK6webrtc9audioproc4Test13IsInitializedEv(void);

/* Symbol: WebRtcIsac_kQMeanLag4Lo */
/* Demangled: WebRtcIsac_kQMeanLag4Lo */
extern void* WebRtcIsac_kQMeanLag4Lo;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec3Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec3Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec3Ub16;

/* Symbol: _ZN6webrtc15IFChannelBufferC2Ejjj */
/* Demangled: webrtc::IFChannelBuffer::IFChannelBuffer(unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15IFChannelBufferC2Ejjj(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer11GetBankSizeEij */
/* Demangled: webrtc::IntelligibilityEnhancer::GetBankSize(int, unsigned int) */
int _ZN6webrtc23IntelligibilityEnhancer11GetBankSizeEij(void);

/* Symbol: _ZN6webrtc11RWLockPosix17AcquireLockSharedEv */
/* Demangled: webrtc::RWLockPosix::AcquireLockShared() */
int _ZN6webrtc11RWLockPosix17AcquireLockSharedEv(void);

/* Symbol: _ZN6webrtc7WPDTreeD2Ev */
/* Demangled: webrtc::WPDTree::~WPDTree() */
int _ZN6webrtc7WPDTreeD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc4TestC2Ev */
/* Demangled: webrtc::audioproc::Test::Test() */
int _ZN6webrtc9audioproc4TestC2Ev(void);

/* Symbol: _ZN3rtc10SystemInfo13GetMemorySizeEv */
/* Demangled: rtc::SystemInfo::GetMemorySize() */
int _ZN3rtc10SystemInfo13GetMemorySizeEv(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer17TransformCallback17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS4_ */
/* Demangled: webrtc::IntelligibilityEnhancer::TransformCallback::ProcessAudioBlock(std::__1::complex<float> const* const*, unsigned int, unsigned int, unsigned int, std::__1::complex<float>* const*) */
int _ZN6webrtc23IntelligibilityEnhancer17TransformCallback17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS4_(void);

/* Symbol: WebRtcIsac_DecimateAllpass */
/* Demangled: WebRtcIsac_DecimateAllpass */
int WebRtcIsac_DecimateAllpass(void);

/* Symbol: _ZN6webrtc8RMSLevel5ResetEv */
/* Demangled: webrtc::RMSLevel::Reset() */
int _ZN6webrtc8RMSLevel5ResetEv(void);

/* Symbol: WebRtcIsac_Time2Spec */
/* Demangled: WebRtcIsac_Time2Spec */
int WebRtcIsac_Time2Spec(void);

/* Symbol: WebRtcIsac_EncodeLar */
/* Demangled: WebRtcIsac_EncodeLar */
int WebRtcIsac_EncodeLar(void);

/* Symbol: _ZN6webrtc15FileWrapperImplD2Ev */
/* Demangled: webrtc::FileWrapperImpl::~FileWrapperImpl() */
int _ZN6webrtc15FileWrapperImplD2Ev(void);

/* Symbol: _ZN6webrtc3AgcC2Ev */
/* Demangled: webrtc::Agc::Agc() */
int _ZN6webrtc3AgcC2Ev(void);

/* Symbol: WebRtcIsac_kLpcShapeEntropySearchUb12 */
/* Demangled: WebRtcIsac_kLpcShapeEntropySearchUb12 */
extern void* WebRtcIsac_kLpcShapeEntropySearchUb12;

/* Symbol: _ZNK6webrtc9TraceImpl14UpdateFileNameEPKcPcj */
/* Demangled: webrtc::TraceImpl::UpdateFileName(char const*, char*, unsigned int) const */
int _ZNK6webrtc9TraceImpl14UpdateFileNameEPKcPcj(void);

/* Symbol: WebRtcIsac_kLpcMeansGain */
/* Demangled: WebRtcIsac_kLpcMeansGain */
extern void* WebRtcIsac_kLpcMeansGain;

/* Symbol: _ZN6webrtc10TracePosixD2Ev */
/* Demangled: webrtc::TracePosix::~TracePosix() */
int _ZN6webrtc10TracePosixD2Ev(void);

/* Symbol: _ZN6webrtc19TransientSuppressor14UpdateKeypressEb */
/* Demangled: webrtc::TransientSuppressor::UpdateKeypress(bool) */
int _ZN6webrtc19TransientSuppressor14UpdateKeypressEb(void);

/* Symbol: _ZN6webrtc9audioproc5EventD0Ev */
/* Demangled: webrtc::audioproc::Event::~Event() */
int _ZN6webrtc9audioproc5EventD0Ev(void);

/* Symbol: _ZN6webrtc9audioproc4Test9_Internal12echo_metricsEPKS1_ */
/* Demangled: webrtc::audioproc::Test::_Internal::echo_metrics(webrtc::audioproc::Test const*) */
int _ZN6webrtc9audioproc4Test9_Internal12echo_metricsEPKS1_(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImpl19ProcessCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::NoiseSuppressionImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc20NoiseSuppressionImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: WebRtcSpl_32khzTo22khzIntToInt */
/* Demangled: WebRtcSpl_32khzTo22khzIntToInt */
int WebRtcSpl_32khzTo22khzIntToInt(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc7SortKeyIjEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<webrtc::SortKey<unsigned int>*, std::__1::allocator<webrtc::SortKey<unsigned int>*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPN6webrtc7SortKeyIjEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
int _ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi(void);

/* Symbol: _ZN6webrtc8RMSLevelD2Ev */
/* Demangled: webrtc::RMSLevel::~RMSLevel() */
int _ZN6webrtc8RMSLevelD2Ev(void);

/* Symbol: _ZN3rtc10PrintErrorEPKcz */
/* Demangled: rtc::PrintError(char const*, ...) */
int _ZN3rtc10PrintErrorEPKcz(void);

/* Symbol: WebRtcIsac_kLpcShapeEntropySearchUb16 */
/* Demangled: WebRtcIsac_kLpcShapeEntropySearchUb16 */
extern void* WebRtcIsac_kLpcShapeEntropySearchUb16;

/* Symbol: WebRtcIsac_Highpass */
/* Demangled: WebRtcIsac_Highpass */
int WebRtcIsac_Highpass(void);

/* Symbol: _ZN6webrtc11RWLockPosixC1Ev */
/* Demangled: webrtc::RWLockPosix::RWLockPosix() */
int _ZN6webrtc11RWLockPosixC1Ev(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame16default_instanceEv */
/* Demangled: webrtc::audioproc::Test_Frame::default_instance() */
int _ZN6webrtc9audioproc10Test_Frame16default_instanceEv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN6webrtc11RealFourier15AllocCplxBufferEi */
/* Demangled: webrtc::RealFourier::AllocCplxBuffer(int) */
int _ZN6webrtc11RealFourier15AllocCplxBufferEi(void);

/* Symbol: WebRtcIsac_kLowerApFactorsFloat */
/* Demangled: WebRtcIsac_kLowerApFactorsFloat */
extern void* WebRtcIsac_kLowerApFactorsFloat;

/* Symbol: WebRtcAecm_Init */
/* Demangled: WebRtcAecm_Init */
int WebRtcAecm_Init(void);

/* Symbol: _ZNK6webrtc9audioproc5Event13IsInitializedEv */
/* Demangled: webrtc::audioproc::Event::IsInitialized() const */
int _ZNK6webrtc9audioproc5Event13IsInitializedEv(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal16echo_return_lossEPKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::echo_return_loss(webrtc::audioproc::Test_EchoMetrics const*) */
int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal16echo_return_lossEPKS1_(void);

/* Symbol: WebRtc_CreateDelayEstimator */
/* Demangled: WebRtc_CreateDelayEstimator */
int WebRtc_CreateDelayEstimator(void);

/* Symbol: _ZN6webrtc15intelligibility9AddToMeanENSt3__17complexIfEEjPS3_ */
/* Demangled: webrtc::intelligibility::AddToMean(std::__1::complex<float>, unsigned int, std::__1::complex<float>*) */
int _ZN6webrtc15intelligibility9AddToMeanENSt3__17complexIfEEjPS3_(void);

/* Symbol: _ZN6webrtc11FileWrapper6CreateEv */
/* Demangled: webrtc::FileWrapper::Create() */
int _ZN6webrtc11FileWrapper6CreateEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl20InitializeBeamformerEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeBeamformer() */
int _ZN6webrtc19AudioProcessingImpl20InitializeBeamformerEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplD0Ev */
/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
int _ZN6webrtc21EchoControlMobileImplD0Ev(void);

/* Symbol: _ZThn4_NK6webrtc21EchoControlMobileImpl12CreateHandleEv */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::CreateHandle() const */
int _ZThn4_NK6webrtc21EchoControlMobileImpl12CreateHandleEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer22ApplyMaskTimeSmoothingEv */
/* Demangled: webrtc::NonlinearBeamformer::ApplyMaskTimeSmoothing() */
int _ZN6webrtc19NonlinearBeamformer22ApplyMaskTimeSmoothingEv(void);

/* Symbol: _ZN6webrtc11AudioBuffer19mixed_low_pass_dataEv */
/* Demangled: webrtc::AudioBuffer::mixed_low_pass_data() */
int _ZN6webrtc11AudioBuffer19mixed_low_pass_dataEv(void);

/* Symbol: _ZNK6webrtc6Config3GetINS_11BeamformingEEERKT_v */
/* Demangled: webrtc::Beamforming const& webrtc::Config::Get<webrtc::Beamforming>() const */
int _ZNK6webrtc6Config3GetINS_11BeamformingEEERKT_v(void);

/* Symbol: _ZN6webrtc19ProcessingComponent10InitializeEv */
/* Demangled: webrtc::ProcessingComponent::Initialize() */
int _ZN6webrtc19ProcessingComponent10InitializeEv(void);

/* Symbol: WebRtcAecm_ProcessFrame */
/* Demangled: WebRtcAecm_ProcessFrame */
int WebRtcAecm_ProcessFrame(void);

/* Symbol: _ZNK6webrtc9audioproc14Test_Statistic13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Test_Statistic::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc14Test_Statistic13SetCachedSizeEi(void);

/* Symbol: _ZNK6webrtc18VoiceDetectionImpl10is_enabledEv */
/* Demangled: webrtc::VoiceDetectionImpl::is_enabled() const */
int _ZNK6webrtc18VoiceDetectionImpl10is_enabledEv(void);

/* Symbol: _ZN3rtc12TryCritScopeC1EPNS_15CriticalSectionE */
/* Demangled: rtc::TryCritScope::TryCritScope(rtc::CriticalSection*) */
int _ZN3rtc12TryCritScopeC1EPNS_15CriticalSectionE(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC2EPS0_NS0_11AudioSourceE */
/* Demangled: webrtc::IntelligibilityEnhancer::TransformCallback::TransformCallback(webrtc::IntelligibilityEnhancer*, webrtc::IntelligibilityEnhancer::AudioSource) */
int _ZN6webrtc23IntelligibilityEnhancer17TransformCallbackC2EPS0_NS0_11AudioSourceE(void);

/* Symbol: WebRtcIsac_UpdateRateModel */
/* Demangled: WebRtcIsac_UpdateRateModel */
int WebRtcIsac_UpdateRateModel(void);

/* Symbol: _ZN6webrtc15FileWrapperImplC1Ev */
/* Demangled: webrtc::FileWrapperImpl::FileWrapperImpl() */
int _ZN6webrtc15FileWrapperImplC1Ev(void);

/* Symbol: WebRtcSpl_CreateRealFFT */
/* Demangled: WebRtcSpl_CreateRealFFT */
int WebRtcSpl_CreateRealFFT(void);

/* Symbol: _ZN6webrtc9audioproc5Event12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Event::InternalSwap(webrtc::audioproc::Event*) */
int _ZN6webrtc9audioproc5Event12InternalSwapEPS1_(void);

/* Symbol: _ZN6webrtc9audioproc5Event9_Internal14reverse_streamEPKS1_ */
/* Demangled: webrtc::audioproc::Event::_Internal::reverse_stream(webrtc::audioproc::Event const*) */
int _ZN6webrtc9audioproc5Event9_Internal14reverse_streamEPKS1_(void);

/* Symbol: _ZNK6webrtc9audioproc10OutputData12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::OutputData::ByteSizeLong() const */
int _ZNK6webrtc9audioproc10OutputData12ByteSizeLongEv(void);

/* Symbol: WebRtcIsac_InitPreFilterbank */
/* Demangled: WebRtcIsac_InitPreFilterbank */
int WebRtcIsac_InitPreFilterbank(void);

/* Symbol: _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNK6webrtc9audioproc4Test12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Test::ByteSizeLong() const */
int _ZNK6webrtc9audioproc4Test12ByteSizeLongEv(void);

/* Symbol: WebRtcSpl_ResetResample22khzTo16khz */
/* Demangled: WebRtcSpl_ResetResample22khzTo16khz */
int WebRtcSpl_ResetResample22khzTo16khz(void);

/* Symbol: _ZNK6webrtc15FileWrapperImpl4OpenEv */
/* Demangled: webrtc::FileWrapperImpl::Open() const */
int _ZNK6webrtc15FileWrapperImpl4OpenEv(void);

/* Symbol: _ZN6webrtc10TracePosixC1Ev */
/* Demangled: webrtc::TracePosix::TracePosix() */
int _ZN6webrtc10TracePosixC1Ev(void);

/* Symbol: _ZN6webrtc9audioproc10OutputData21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::OutputData::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc10OutputData21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE */
/* Demangled: webrtc::AudioProcessingImpl::SetExtraOptions(webrtc::Config const&) */
int _ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE(void);

/* Symbol: _ZNK6webrtc15GainControlImpl20num_handles_requiredEv */
/* Demangled: webrtc::GainControlImpl::num_handles_required() const */
int _ZNK6webrtc15GainControlImpl20num_handles_requiredEv(void);

/* Symbol: WebRtcIsac_DecodeBandwidth */
/* Demangled: WebRtcIsac_DecodeBandwidth */
int WebRtcIsac_DecodeBandwidth(void);

/* Symbol: WebRtcIsac_ReadBwIndex */
/* Demangled: WebRtcIsac_ReadBwIndex */
int WebRtcIsac_ReadBwIndex(void);

/* Symbol: WebRtcAecm_GetBufferFarendError */
/* Demangled: WebRtcAecm_GetBufferFarendError */
int WebRtcAecm_GetBufferFarendError(void);

/* Symbol: _ZNK6webrtc11AudioBuffer22split_channels_const_fENS_4BandE */
/* Demangled: webrtc::AudioBuffer::split_channels_const_f(webrtc::Band) const */
int _ZNK6webrtc11AudioBuffer22split_channels_const_fENS_4BandE(void);

/* Symbol: _ZN6webrtc20EchoCancellationImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_ */
/* Demangled: webrtc::EchoCancellationImpl::EchoCancellationImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
int _ZN6webrtc20EchoCancellationImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void);

/* Symbol: _ZNK3rtc15CriticalSection20CurrentThreadIsOwnerEv */
/* Demangled: rtc::CriticalSection::CurrentThreadIsOwner() const */
int _ZNK3rtc15CriticalSection20CurrentThreadIsOwnerEv(void);

/* Symbol: WebRtcIsac_InitPitchFilter */
/* Demangled: WebRtcIsac_InitPitchFilter */
int WebRtcIsac_InitPitchFilter(void);

/* Symbol: WebRtcNsx_NormalizeRealBuffer */
/* Demangled: WebRtcNsx_NormalizeRealBuffer */
extern void* WebRtcNsx_NormalizeRealBuffer;

/* Symbol: _ZN6webrtc9TraceImpl14StaticInstanceENS_14CountOperationENS_10TraceLevelE */
/* Demangled: webrtc::TraceImpl::StaticInstance(webrtc::CountOperation, webrtc::TraceLevel) */
int _ZN6webrtc9TraceImpl14StaticInstanceENS_14CountOperationENS_10TraceLevelE(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
int _ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEPNS_11GainControlEPNS_15VolumeCallbacksEi(void);

/* Symbol: _ZNK6webrtc9audioproc6Stream12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Stream::ByteSizeLong() const */
int _ZNK6webrtc9audioproc6Stream12ByteSizeLongEv(void);

/* Symbol: _ZN6webrtc8RMSLevelC1Ev */
/* Demangled: webrtc::RMSLevel::RMSLevel() */
int _ZN6webrtc8RMSLevelC1Ev(void);

/* Symbol: _ZN3rtc14PlatformThreadD0Ev */
/* Demangled: rtc::PlatformThread::~PlatformThread() */
int _ZN3rtc14PlatformThreadD0Ev(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc16Test_EchoMetrics21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutE */
/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStream(float const* const*, unsigned int, int, webrtc::AudioProcessing::ChannelLayout) */
int _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutE(void);

/* Symbol: _ZTVN6webrtc20CompositionConverterE */
/* Demangled: vtable for webrtc::CompositionConverter */
extern void* _ZTVN6webrtc20CompositionConverterE;

/* Symbol: WebRtcSpl_DivW32W16 */
/* Demangled: WebRtcSpl_DivW32W16 */
int WebRtcSpl_DivW32W16(void);

/* Symbol: WebRtcIsac_kLpcShapeQStepSizeUb12 */
/* Demangled: WebRtcIsac_kLpcShapeQStepSizeUb12 */
extern void* WebRtcIsac_kLpcShapeQStepSizeUb12;

/* Symbol: WebRtc_available_read */
/* Demangled: WebRtc_available_read */
int WebRtc_available_read(void);

/* Symbol: _ZN6webrtc9audioproc6ConfigD0Ev */
/* Demangled: webrtc::audioproc::Config::~Config() */
int _ZN6webrtc9audioproc6ConfigD0Ev(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv */
/* Demangled: webrtc::EchoControlMobileImpl::GetHandleError(void*) const */
int _ZNK6webrtc21EchoControlMobileImpl14GetHandleErrorEPv(void);

/* Symbol: _ZN3rtc15CriticalSectionD2Ev */
/* Demangled: rtc::CriticalSection::~CriticalSection() */
int _ZN3rtc15CriticalSectionD2Ev(void);

/* Symbol: WebRtcSpl_Resample16khzTo48khz */
/* Demangled: WebRtcSpl_Resample16khzTo48khz */
int WebRtcSpl_Resample16khzTo48khz(void);

/* Symbol: _ZN6webrtc9audioproc4Init21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Init::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc4Init21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZThn4_NK6webrtc20EchoCancellationImpl20num_handles_requiredEv */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::num_handles_required() const */
int _ZThn4_NK6webrtc20EchoCancellationImpl20num_handles_requiredEv(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer4MeanEv */
/* Demangled: webrtc::VadCircularBuffer::Mean() */
int _ZN6webrtc17VadCircularBuffer4MeanEv(void);

/* Symbol: WebRtcSpl_DownsampleFastC */
/* Demangled: WebRtcSpl_DownsampleFastC */
int WebRtcSpl_DownsampleFastC(void);

/* Symbol: _ZN6webrtc5Trace11ReturnTraceEv */
/* Demangled: webrtc::Trace::ReturnTrace() */
int _ZN6webrtc5Trace11ReturnTraceEv(void);

/* Symbol: _ZNSt3__16vectorIN6webrtc14CartesianPointIfEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN6webrtc14CartesianPointIfEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN6webrtc14CartesianPointIfEENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd */
/* Demangled: webrtc::PitchBasedVad::VoicingProbability(AudioFeatures const&, double*) */
int _ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd(void);

/* Symbol: _ZN3rtc10SystemInfo15GetMachineModelEv */
/* Demangled: rtc::SystemInfo::GetMachineModel() */
int _ZN3rtc10SystemInfo15GetMachineModelEv(void);

/* Symbol: WebRtcSpl_ScaleVectorWithSat */
/* Demangled: WebRtcSpl_ScaleVectorWithSat */
int WebRtcSpl_ScaleVectorWithSat(void);

/* Symbol: _ZN6webrtc9audioproc5Event9_Internal4initEPKS1_ */
/* Demangled: webrtc::audioproc::Event::_Internal::init(webrtc::audioproc::Event const*) */
int _ZN6webrtc9audioproc5Event9_Internal4initEPKS1_(void);

/* Symbol: _ZN6webrtc9audioproc5EventC1ERKS1_ */
/* Demangled: webrtc::audioproc::Event::Event(webrtc::audioproc::Event const&) */
int _ZN6webrtc9audioproc5EventC1ERKS1_(void);

/* Symbol: _ZN3rtc10LogMessage7thread_E */
/* Demangled: rtc::LogMessage::thread_ */
extern void* _ZN3rtc10LogMessage7thread_E;

/* Symbol: _ZN6webrtc15AudioRingBufferD2Ev */
/* Demangled: webrtc::AudioRingBuffer::~AudioRingBuffer() */
int _ZN6webrtc15AudioRingBufferD2Ev(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArray12InfiniteStepEPKNSt3__17complexIfEEb */
/* Demangled: webrtc::intelligibility::VarianceArray::InfiniteStep(std::__1::complex<float> const*, bool) */
int _ZN6webrtc15intelligibility13VarianceArray12InfiniteStepEPKNSt3__17complexIfEEb(void);

/* Symbol: WebRtcIsac_DequantizeLpcGain */
/* Demangled: WebRtcIsac_DequantizeLpcGain */
int WebRtcIsac_DequantizeLpcGain(void);

/* Symbol: WebRtcIsac_kLpcShapeQStepSizeUb16 */
/* Demangled: WebRtcIsac_kLpcShapeQStepSizeUb16 */
extern void* WebRtcIsac_kLpcShapeQStepSizeUb16;

/* Symbol: _ZTVN6webrtc18HighPassFilterImplE */
/* Demangled: vtable for webrtc::HighPassFilterImpl */
extern void* _ZTVN6webrtc18HighPassFilterImplE;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec5Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec5Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec5Ub12;

/* Symbol: _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_front(float*&&) */
int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZNK6webrtc9audioproc4Init13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Init::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc4Init13SetCachedSizeEi(void);

/* Symbol: _ZNK6webrtc9audioproc16Test_EchoMetrics13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc16Test_EchoMetrics13SetCachedSizeEi(void);

/* Symbol: _ZN6webrtc15SparseFIRFilterC2EPKfjjj */
/* Demangled: webrtc::SparseFIRFilter::SparseFIRFilter(float const*, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15SparseFIRFilterC2EPKfjjj(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf3Mid */
/* Demangled: WebRtcIsac_kQPitchLagCdf3Mid */
extern void* WebRtcIsac_kQPitchLagCdf3Mid;

/* Symbol: _ZN6webrtc9audioproc5Event5ClearEv */
/* Demangled: webrtc::audioproc::Event::Clear() */
int _ZN6webrtc9audioproc5Event5ClearEv(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc17PushSincResamplerENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::PushSincResampler*, std::__1::allocator<webrtc::PushSincResampler*> >::__push_back_slow_path<webrtc::PushSincResampler* const&>(webrtc::PushSincResampler* const&) */
int _ZNSt3__16vectorIPN6webrtc17PushSincResamplerENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNK6webrtc15GainControlImpl15ConfigureHandleEPv */
/* Demangled: webrtc::GainControlImpl::ConfigureHandle(void*) const */
int _ZNK6webrtc15GainControlImpl15ConfigureHandleEPv(void);

/* Symbol: _ZNK6webrtc18LevelEstimatorImpl10is_enabledEv */
/* Demangled: webrtc::LevelEstimatorImpl::is_enabled() const */
int _ZNK6webrtc18LevelEstimatorImpl10is_enabledEv(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStreamD1Ev */
/* Demangled: webrtc::audioproc::ReverseStream::~ReverseStream() */
int _ZN6webrtc9audioproc13ReverseStreamD1Ev(void);

/* Symbol: _ZN6webrtc20EchoCancellationImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_ */
/* Demangled: webrtc::EchoCancellationImpl::EchoCancellationImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
int _ZN6webrtc20EchoCancellationImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf2Hi */
/* Demangled: WebRtcIsac_kQPitchLagCdf2Hi */
extern void* WebRtcIsac_kQPitchLagCdf2Hi;

/* Symbol: _ZN6webrtc7WPDTreeC2EjPKfS2_ji */
/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
int _ZN6webrtc7WPDTreeC2EjPKfS2_ji(void);

/* Symbol: _ZN6webrtc9Histogram6UpdateEdd */
/* Demangled: webrtc::Histogram::Update(double, double) */
int _ZN6webrtc9Histogram6UpdateEdd(void);

/* Symbol: WebRtcIsac_kKltT1Gain */
/* Demangled: WebRtcIsac_kKltT1Gain */
extern void* WebRtcIsac_kKltT1Gain;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec5Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec5Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec5Ub16;

/* Symbol: WebRtcSpl_DownBy2ShortToInt */
/* Demangled: WebRtcSpl_DownBy2ShortToInt */
int WebRtcSpl_DownBy2ShortToInt(void);

/* Symbol: _ZN6webrtc11AudioBuffer12InterleaveToEPNS_10AudioFrameEb */
/* Demangled: webrtc::AudioBuffer::InterleaveTo(webrtc::AudioFrame*, bool) */
int _ZN6webrtc11AudioBuffer12InterleaveToEPNS_10AudioFrameEb(void);

/* Symbol: _ZN6webrtc11AudioBuffer13split_bands_fEj */
/* Demangled: webrtc::AudioBuffer::split_bands_f(unsigned int) */
int _ZN6webrtc11AudioBuffer13split_bands_fEj(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_15IntelligibilityEEERKT_vE3def */
/* Demangled: guard variable for webrtc::Intelligibility const& webrtc::Config::default_value<webrtc::Intelligibility>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_15IntelligibilityEEERKT_vE3def;

/* Symbol: _ZN6webrtc17GetNormalIfPlanarERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE */
/* Demangled: webrtc::GetNormalIfPlanar(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
int _ZN6webrtc17GetNormalIfPlanarERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void);

/* Symbol: WebRtcIsac_GetUplinkBandwidth */
/* Demangled: WebRtcIsac_GetUplinkBandwidth */
int WebRtcIsac_GetUplinkBandwidth(void);

/* Symbol: WebRtcIsac_DecodeLpcGainUb */
/* Demangled: WebRtcIsac_DecodeLpcGainUb */
int WebRtcIsac_DecodeLpcGainUb(void);

/* Symbol: _ZN3rtc15CriticalSectionC1Ev */
/* Demangled: rtc::CriticalSection::CriticalSection() */
int _ZN3rtc15CriticalSectionC1Ev(void);

/* Symbol: _ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE */
/* Demangled: webrtc::GainControlImpl::set_mode(webrtc::GainControl::Mode) */
int _ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE(void);

/* Symbol: _ZN6webrtc8Atomic32D1Ev */
/* Demangled: webrtc::Atomic32::~Atomic32() */
int _ZN6webrtc8Atomic32D1Ev(void);

/* Symbol: _ZNK6webrtc9audioproc5Event24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Event::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc5Event24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZNK6webrtc15IFChannelBuffer8RefreshFEv */
/* Demangled: webrtc::IFChannelBuffer::RefreshF() const */
int _ZNK6webrtc15IFChannelBuffer8RefreshFEv(void);

/* Symbol: WebRtcIsac_kQPitchLagCdfPtrLo */
/* Demangled: WebRtcIsac_kQPitchLagCdfPtrLo */
extern void* WebRtcIsac_kQPitchLagCdfPtrLo;

/* Symbol: _ZN3rtc14PlatformThread3RunEv */
/* Demangled: rtc::PlatformThread::Run() */
int _ZN3rtc14PlatformThread3RunEv(void);

/* Symbol: _ZN3rtc10LogMessage10LogThreadsEb */
/* Demangled: rtc::LogMessage::LogThreads(bool) */
int _ZN3rtc10LogMessage10LogThreadsEb(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArray10ApplyScaleEf */
/* Demangled: webrtc::intelligibility::VarianceArray::ApplyScale(float) */
int _ZN6webrtc15intelligibility13VarianceArray10ApplyScaleEf(void);

/* Symbol: _Z11Db2Loudnessd */
/* Demangled: Db2Loudness(double) */
int _Z11Db2Loudnessd(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10Test_FrameEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_Frame>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10Test_FrameEEEvPv(void);

/* Symbol: _ZN6webrtc9audioproc14Test_StatisticD2Ev */
/* Demangled: webrtc::audioproc::Test_Statistic::~Test_Statistic() */
int _ZN6webrtc9audioproc14Test_StatisticD2Ev(void);

/* Symbol: _ZN6webrtc20CriticalSectionPosixD2Ev */
/* Demangled: webrtc::CriticalSectionPosix::~CriticalSectionPosix() */
int _ZN6webrtc20CriticalSectionPosixD2Ev(void);

/* Symbol: _ZN3rtc12TryCritScopeD2Ev */
/* Demangled: rtc::TryCritScope::~TryCritScope() */
int _ZN3rtc12TryCritScopeD2Ev(void);

/* Symbol: _ZN6webrtc12CrossProductERKNS_14CartesianPointIfEES3_ */
/* Demangled: webrtc::CrossProduct(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
int _ZN6webrtc12CrossProductERKNS_14CartesianPointIfEES3_(void);

/* Symbol: _ZN6webrtc8Atomic32ppEv */
/* Demangled: webrtc::Atomic32::operator++() */
int _ZN6webrtc8Atomic32ppEv(void);

/* Symbol: _ZN3rtc12TryCritScopeC2EPNS_15CriticalSectionE */
/* Demangled: rtc::TryCritScope::TryCritScope(rtc::CriticalSection*) */
int _ZN3rtc12TryCritScopeC2EPNS_15CriticalSectionE(void);

/* Symbol: _ZTVN6webrtc14UpmixConverterE */
/* Demangled: vtable for webrtc::UpmixConverter */
extern void* _ZTVN6webrtc14UpmixConverterE;

/* Symbol: _ZN6webrtc9audioproc10OutputData8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::OutputData::CopyFrom(webrtc::audioproc::OutputData const&) */
int _ZN6webrtc9audioproc10OutputData8CopyFromERKS1_(void);

/* Symbol: _ZNK6webrtc11AudioBuffer4dataEv */
/* Demangled: webrtc::AudioBuffer::data() const */
int _ZNK6webrtc11AudioBuffer4dataEv(void);

/* Symbol: _ZN6webrtc11AlignedFreeEPv */
/* Demangled: webrtc::AlignedFree(void*) */
int _ZN6webrtc11AlignedFreeEPv(void);

/* Symbol: _ZN3rtc16CurrentThreadRefEv */
/* Demangled: rtc::CurrentThreadRef() */
int _ZN3rtc16CurrentThreadRefEv(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf1Lo */
/* Demangled: WebRtcIsac_kQPitchLagCdf1Lo */
extern void* WebRtcIsac_kQPitchLagCdf1Lo;

/* Symbol: _ZN3rtc8sprintfnIcEEjPT_jPKS1_z */
/* Demangled: unsigned int rtc::sprintfn<char>(char*, unsigned int, char const*, ...) */
int _ZN3rtc8sprintfnIcEEjPT_jPKS1_z(void);

/* Symbol: _ZN6webrtc25CovarianceMatrixGenerator19PhaseAlignmentMasksEjjifRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEfPNS_13ComplexMatrixIfEE */
/* Demangled: webrtc::CovarianceMatrixGenerator::PhaseAlignmentMasks(unsigned int, unsigned int, int, float, std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, float, webrtc::ComplexMatrix<float>*) */
int _ZN6webrtc25CovarianceMatrixGenerator19PhaseAlignmentMasksEjjifRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEfPNS_13ComplexMatrixIfEE(void);

/* Symbol: _ZThn4_N6webrtc15FileWrapperImplD0Ev */
/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::~FileWrapperImpl() */
int _ZThn4_N6webrtc15FileWrapperImplD0Ev(void);

/* Symbol: WebRtcAgc_Process */
/* Demangled: WebRtcAgc_Process */
int WebRtcAgc_Process(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4TestEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4TestEEEvPv(void);

/* Symbol: _ZNK6webrtc19ProcessingComponent20is_component_enabledEv */
/* Demangled: webrtc::ProcessingComponent::is_component_enabled() const */
int _ZNK6webrtc19ProcessingComponent20is_component_enabledEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_back(float*&&) */
int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: WebRtcIsac_SetEncSampRateInDecoder */
/* Demangled: WebRtcIsac_SetEncSampRateInDecoder */
int WebRtcIsac_SetEncSampRateInDecoder(void);

/* Symbol: _ZN3rtc5Event4WaitEi */
/* Demangled: rtc::Event::Wait(int) */
int _ZN3rtc5Event4WaitEi(void);

/* Symbol: WebRtcIsac_kMeanLpcGain */
/* Demangled: WebRtcIsac_kMeanLpcGain */
extern void* WebRtcIsac_kMeanLpcGain;

/* Symbol: _ZN3rtc12LogMultilineENS_15LoggingSeverityEPKcbPKvjbPNS_17LogMultilineStateE */
/* Demangled: rtc::LogMultiline(rtc::LoggingSeverity, char const*, bool, void const*, unsigned int, bool, rtc::LogMultilineState*) */
int _ZN3rtc12LogMultilineENS_15LoggingSeverityEPKcbPKvjbPNS_17LogMultilineStateE(void);

/* Symbol: WebRtc_CreateDelayEstimatorFarend */
/* Demangled: WebRtc_CreateDelayEstimatorFarend */
int WebRtc_CreateDelayEstimatorFarend(void);

/* Symbol: WebRtc_AllocateHistoryBufferMemory */
/* Demangled: WebRtc_AllocateHistoryBufferMemory */
int WebRtc_AllocateHistoryBufferMemory(void);

/* Symbol: _ZNK6webrtc9audioproc13ReverseStream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::ReverseStream::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc13ReverseStream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZNK6webrtc9audioproc17Test_DelayMetrics11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::GetTypeName() const */
int _ZNK6webrtc9audioproc17Test_DelayMetrics11GetTypeNameEv(void);

/* Symbol: _ZN6webrtc9audioproc14Test_StatisticC1Ev */
/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic() */
int _ZN6webrtc9audioproc14Test_StatisticC1Ev(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer27ApplyMaskFrequencySmoothingEv */
/* Demangled: webrtc::NonlinearBeamformer::ApplyMaskFrequencySmoothing() */
int _ZN6webrtc19NonlinearBeamformer27ApplyMaskFrequencySmoothingEv(void);

/* Symbol: WebRtcIsac_kQSizeLpcGain */
/* Demangled: WebRtcIsac_kQSizeLpcGain */
extern void* WebRtcIsac_kQSizeLpcGain;

/* Symbol: _ZN6webrtc20CriticalSectionPosixC1Ev */
/* Demangled: webrtc::CriticalSectionPosix::CriticalSectionPosix() */
int _ZN6webrtc20CriticalSectionPosixC1Ev(void);

/* Symbol: _ZN6webrtc15LappedTransform12ProcessChunkEPKPKfPKPf */
/* Demangled: webrtc::LappedTransform::ProcessChunk(float const* const*, float* const*) */
int _ZN6webrtc15LappedTransform12ProcessChunkEPKPKfPKPf(void);

/* Symbol: WebRtcIsac_EstimateBandwidth */
/* Demangled: WebRtcIsac_EstimateBandwidth */
int WebRtcIsac_EstimateBandwidth(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Test_Frame::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc10Test_Frame21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def */
/* Demangled: guard variable for webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def;

/* Symbol: WebRtcIsac_kQArRc1Levels */
/* Demangled: WebRtcIsac_kQArRc1Levels */
extern void* WebRtcIsac_kQArRc1Levels;

/* Symbol: _ZNK6webrtc15GainControlImpl18is_limiter_enabledEv */
/* Demangled: webrtc::GainControlImpl::is_limiter_enabled() const */
int _ZNK6webrtc15GainControlImpl18is_limiter_enabledEv(void);

/* Symbol: _ZTVN6webrtc18VoiceDetectionImplE */
/* Demangled: vtable for webrtc::VoiceDetectionImpl */
extern void* _ZTVN6webrtc18VoiceDetectionImplE;

/* Symbol: WebRtcAec_SetConfigCore */
/* Demangled: WebRtcAec_SetConfigCore */
int WebRtcAec_SetConfigCore(void);

/* Symbol: cftmdl_128 */
/* Demangled: cftmdl_128 */
extern void* cftmdl_128;

/* Symbol: WebRtcAecm_CalcStepSize */
/* Demangled: WebRtcAecm_CalcStepSize */
int WebRtcAecm_CalcStepSize(void);

/* Symbol: _ZN6webrtc9audioproc10Test_FrameC2Ev */
/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame() */
int _ZN6webrtc9audioproc10Test_FrameC2Ev(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Test_Statistic::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc14Test_Statistic21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_Statistic::MergeFrom(webrtc::audioproc::Test_Statistic const&) */
int _ZN6webrtc9audioproc14Test_Statistic9MergeFromERKS1_(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics16default_instanceEv */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::default_instance() */
int _ZN6webrtc9audioproc17Test_DelayMetrics16default_instanceEv(void);

/* Symbol: _ZN3rtc9CritScopeD2Ev */
/* Demangled: rtc::CritScope::~CritScope() */
int _ZN3rtc9CritScopeD2Ev(void);

/* Symbol: _ZN3rtc5EventC1Ebb */
/* Demangled: rtc::Event::Event(bool, bool) */
int _ZN3rtc5EventC1Ebb(void);

/* Symbol: _ZN3rtc10LogMessage18WallClockStartTimeEv */
/* Demangled: rtc::LogMessage::WallClockStartTime() */
int _ZN3rtc10LogMessage18WallClockStartTimeEv(void);

/* Symbol: WebRtcIsac_NormLatticeFilterMa */
/* Demangled: WebRtcIsac_NormLatticeFilterMa */
int WebRtcIsac_NormLatticeFilterMa(void);

/* Symbol: WebRtcIsac_ToLogDomainRemoveMean */
/* Demangled: WebRtcIsac_ToLogDomainRemoveMean */
int WebRtcIsac_ToLogDomainRemoveMean(void);

/* Symbol: _ZTVN6webrtc9audioproc4InitE */
/* Demangled: vtable for webrtc::audioproc::Init */
extern void* _ZTVN6webrtc9audioproc4InitE;

/* Symbol: _ZN6webrtc9audioproc4Test9_Internal13delay_metricsEPKS1_ */
/* Demangled: webrtc::audioproc::Test::_Internal::delay_metrics(webrtc::audioproc::Test const*) */
int _ZN6webrtc9audioproc4Test9_Internal13delay_metricsEPKS1_(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImplD0Ev */
/* Demangled: webrtc::LevelEstimatorImpl::~LevelEstimatorImpl() */
int _ZN6webrtc18LevelEstimatorImplD0Ev(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImplD1Ev */
/* Demangled: webrtc::NoiseSuppressionImpl::~NoiseSuppressionImpl() */
int _ZN6webrtc20NoiseSuppressionImplD1Ev(void);

/* Symbol: _ZNK6webrtc20NoiseSuppressionImpl5levelEv */
/* Demangled: webrtc::NoiseSuppressionImpl::level() const */
int _ZNK6webrtc20NoiseSuppressionImpl5levelEv(void);

/* Symbol: _ZN6webrtc15SplittingFilterC2Ejjj */
/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15SplittingFilterC2Ejjj(void);

/* Symbol: _ZN6webrtc12VadAudioProcC2Ev */
/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
int _ZN6webrtc12VadAudioProcC2Ev(void);

/* Symbol: _ZN3rtc15CriticalSection5EnterEv */
/* Demangled: rtc::CriticalSection::Enter() */
int _ZN3rtc15CriticalSection5EnterEv(void);

/* Symbol: _ZN3rtc7tracing19StopInternalCaptureEv */
/* Demangled: rtc::tracing::StopInternalCapture() */
int _ZN3rtc7tracing19StopInternalCaptureEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer8IsInBeamERKNS_14SphericalPointIfEE */
/* Demangled: webrtc::NonlinearBeamformer::IsInBeam(webrtc::SphericalPoint<float> const&) */
int _ZN6webrtc19NonlinearBeamformer8IsInBeamERKNS_14SphericalPointIfEE(void);

/* Symbol: WebRtcIsac_DecodePitchLag */
/* Demangled: WebRtcIsac_DecodePitchLag */
int WebRtcIsac_DecodePitchLag(void);

/* Symbol: WebRtcIsac_kLeftRecPointLpcGain */
/* Demangled: WebRtcIsac_kLeftRecPointLpcGain */
extern void* WebRtcIsac_kLeftRecPointLpcGain;

/* Symbol: WebRtcIsac_kCompositeApFactorsFloat */
/* Demangled: WebRtcIsac_kCompositeApFactorsFloat */
extern void* WebRtcIsac_kCompositeApFactorsFloat;

/* Symbol: _ZN6webrtc19TransientSuppressor17UpdateRestorationEf */
/* Demangled: webrtc::TransientSuppressor::UpdateRestoration(float) */
int _ZN6webrtc19TransientSuppressor17UpdateRestorationEf(void);

/* Symbol: _ZN6webrtc19TransientSuppressorD2Ev */
/* Demangled: webrtc::TransientSuppressor::~TransientSuppressor() */
int _ZN6webrtc19TransientSuppressorD2Ev(void);

/* Symbol: _ZN3rtc15CurrentThreadIdEv */
/* Demangled: rtc::CurrentThreadId() */
int _ZN3rtc15CurrentThreadIdEv(void);

/* Symbol: _ZN6webrtc15intelligibility11GainApplierC2Ejf */
/* Demangled: webrtc::intelligibility::GainApplier::GainApplier(unsigned int, float) */
int _ZN6webrtc15intelligibility11GainApplierC2Ejf(void);

/* Symbol: WebRtcIsac_kQArRc4Cdf */
/* Demangled: WebRtcIsac_kQArRc4Cdf */
extern void* WebRtcIsac_kQArRc4Cdf;

/* Symbol: WebRtcSpl_DivW32W16ResW16 */
/* Demangled: WebRtcSpl_DivW32W16ResW16 */
int WebRtcSpl_DivW32W16ResW16(void);

/* Symbol: scc_info_Test_EchoMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
/* Demangled: scc_info_Test_EchoMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern void* scc_info_Test_EchoMetrics_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto;

/* Symbol: _ZNK6webrtc11AudioBuffer10num_framesEv */
/* Demangled: webrtc::AudioBuffer::num_frames() const */
int _ZNK6webrtc11AudioBuffer10num_framesEv(void);

/* Symbol: WebRtcIsac_SplitAndFilterFloat */
/* Demangled: WebRtcIsac_SplitAndFilterFloat */
int WebRtcIsac_SplitAndFilterFloat(void);

/* Symbol: _ZN6webrtc7Blocker12ProcessChunkEPKPKfjjjPKPf */
/* Demangled: webrtc::Blocker::ProcessChunk(float const* const*, unsigned int, unsigned int, unsigned int, float* const*) */
int _ZN6webrtc7Blocker12ProcessChunkEPKPKfjjjPKPf(void);

/* Symbol: WebRtcIsac_kQMeanGain4Q12 */
/* Demangled: WebRtcIsac_kQMeanGain4Q12 */
extern void* WebRtcIsac_kQMeanGain4Q12;

/* Symbol: _ZN6webrtc9TraceImplD2Ev */
/* Demangled: webrtc::TraceImpl::~TraceImpl() */
int _ZN6webrtc9TraceImplD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc10OutputDataD1Ev */
/* Demangled: webrtc::audioproc::OutputData::~OutputData() */
int _ZN6webrtc9audioproc10OutputDataD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25InitializeExperimentalAgcEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeExperimentalAgc() */
int _ZN6webrtc19AudioProcessingImpl25InitializeExperimentalAgcEv(void);

/* Symbol: _ZN3rtc26TimestampWrapAroundHandlerC1Ev */
/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
int _ZN3rtc26TimestampWrapAroundHandlerC1Ev(void);

/* Symbol: _ZNK6webrtc9audioproc10Test_Frame11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Test_Frame::GetTypeName() const */
int _ZNK6webrtc9audioproc10Test_Frame11GetTypeNameEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer22EstimateTargetPresenceEv */
/* Demangled: webrtc::NonlinearBeamformer::EstimateTargetPresence() */
int _ZN6webrtc19NonlinearBeamformer22EstimateTargetPresenceEv(void);

/* Symbol: WebRtcIsac_kLpcGainDecorrMat */
/* Demangled: WebRtcIsac_kLpcGainDecorrMat */
extern void* WebRtcIsac_kLpcGainDecorrMat;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec7Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec7Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec7Ub12;

/* Symbol: _ZN6webrtc9audioproc4Init27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Init::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc4Init27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: scc_info_Init_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
/* Demangled: scc_info_Init_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto */
extern void* scc_info_Init_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2fdebug_2eproto;

/* Symbol: _ZNK6webrtc15GainControlImpl4modeEv */
/* Demangled: webrtc::GainControlImpl::mode() const */
int _ZNK6webrtc15GainControlImpl4modeEv(void);

/* Symbol: WebRtc_binary_last_delay_quality */
/* Demangled: WebRtc_binary_last_delay_quality */
int WebRtc_binary_last_delay_quality(void);

/* Symbol: _ZN6webrtc9audioproc24_Event_default_instance_E */
/* Demangled: webrtc::audioproc::_Event_default_instance_ */
extern void* _ZN6webrtc9audioproc24_Event_default_instance_E;

/* Symbol: _ZTVN6webrtc16DownmixConverterE */
/* Demangled: vtable for webrtc::DownmixConverter */
extern void* _ZTVN6webrtc16DownmixConverterE;

/* Symbol: WebRtcIsac_SetBandwidthInfo */
/* Demangled: WebRtcIsac_SetBandwidthInfo */
int WebRtcIsac_SetBandwidthInfo(void);

/* Symbol: _ZN6webrtc9audioproc6StreamC2ERKS1_ */
/* Demangled: webrtc::audioproc::Stream::Stream(webrtc::audioproc::Stream const&) */
int _ZN6webrtc9audioproc6StreamC2ERKS1_(void);

/* Symbol: WebRtcAecm_FreeCore */
/* Demangled: WebRtcAecm_FreeCore */
int WebRtcAecm_FreeCore(void);

/* Symbol: _ZN6webrtc9audioproc36_Test_DelayMetrics_default_instance_E */
/* Demangled: webrtc::audioproc::_Test_DelayMetrics_default_instance_ */
extern void* _ZN6webrtc9audioproc36_Test_DelayMetrics_default_instance_E;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec7Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec7Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec7Ub16;

/* Symbol: _ZN6webrtc15FileWrapperImpl9WriteTextEPKcz */
/* Demangled: webrtc::FileWrapperImpl::WriteText(char const*, ...) */
int _ZN6webrtc15FileWrapperImpl9WriteTextEPKcz(void);

/* Symbol: _ZN6webrtc9audioproc4InitD0Ev */
/* Demangled: webrtc::audioproc::Init::~Init() */
int _ZN6webrtc9audioproc4InitD0Ev(void);

/* Symbol: _ZN6webrtc9audioproc4Test8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Test::CopyFrom(webrtc::audioproc::Test const&) */
int _ZN6webrtc9audioproc4Test8CopyFromERKS1_(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl12routing_modeEv */
/* Demangled: webrtc::EchoControlMobileImpl::routing_mode() const */
int _ZNK6webrtc21EchoControlMobileImpl12routing_modeEv(void);

/* Symbol: WebRtcIsac_kQArRc6Levels */
/* Demangled: WebRtcIsac_kQArRc6Levels */
extern void* WebRtcIsac_kQArRc6Levels;

/* Symbol: _ZN6webrtc15intelligibility11GainApplier5ApplyEPKNSt3__17complexIfEEPS4_ */
/* Demangled: webrtc::intelligibility::GainApplier::Apply(std::__1::complex<float> const*, std::__1::complex<float>*) */
int _ZN6webrtc15intelligibility11GainApplier5ApplyEPKNSt3__17complexIfEEPS4_(void);

/* Symbol: WebRtcIsac_Rc2Poly */
/* Demangled: WebRtcIsac_Rc2Poly */
int WebRtcIsac_Rc2Poly(void);

/* Symbol: WebRtcSpl_AutoCorrToReflCoef */
/* Demangled: WebRtcSpl_AutoCorrToReflCoef */
int WebRtcSpl_AutoCorrToReflCoef(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc7SortKeyIsEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<webrtc::SortKey<short>*, std::__1::allocator<webrtc::SortKey<short>*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPN6webrtc7SortKeyIsEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZTVN6webrtc16EventWrapperImplE */
/* Demangled: vtable for webrtc::EventWrapperImpl */
extern void* _ZTVN6webrtc16EventWrapperImplE;

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10Test_FrameEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Test_Frame* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_Frame>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10Test_FrameEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN6webrtc19TransientSuppressorC1Ev */
/* Demangled: webrtc::TransientSuppressor::TransientSuppressor() */
int _ZN6webrtc19TransientSuppressorC1Ev(void);

/* Symbol: _ZN3rtc12FatalMessageC1EPKci */
/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int) */
int _ZN3rtc12FatalMessageC1EPKci(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Test_Statistic::InternalSwap(webrtc::audioproc::Test_Statistic*) */
int _ZN6webrtc9audioproc14Test_Statistic12InternalSwapEPS1_(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl25enable_drift_compensationEb */
/* Demangled: webrtc::EchoCancellationImpl::enable_drift_compensation(bool) */
int _ZN6webrtc20EchoCancellationImpl25enable_drift_compensationEb(void);

/* Symbol: WebRtcSpl_AddAffineVectorToVector */
/* Demangled: WebRtcSpl_AddAffineVectorToVector */
int WebRtcSpl_AddAffineVectorToVector(void);

/* Symbol: _ZN6webrtc20CriticalSectionPosix5EnterEv */
/* Demangled: webrtc::CriticalSectionPosix::Enter() */
int _ZN6webrtc20CriticalSectionPosix5EnterEv(void);

/* Symbol: _ZN6webrtc9audioproc6Config12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Config::InternalSwap(webrtc::audioproc::Config*) */
int _ZN6webrtc9audioproc6Config12InternalSwapEPS1_(void);

/* Symbol: WebRtc_MeanEstimatorFix */
/* Demangled: WebRtc_MeanEstimatorFix */
int WebRtc_MeanEstimatorFix(void);

/* Symbol: _ZN3rtc10LogMessage8min_sev_E */
/* Demangled: rtc::LogMessage::min_sev_ */
extern void* _ZN3rtc10LogMessage8min_sev_E;

/* Symbol: _ZTVN6webrtc16RealFourierOouraE */
/* Demangled: vtable for webrtc::RealFourierOoura */
extern void* _ZTVN6webrtc16RealFourierOouraE;

/* Symbol: WebRtcIsac_DecodeLb */
/* Demangled: WebRtcIsac_DecodeLb */
int WebRtcIsac_DecodeLb(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl8OpenFileEPKcbbb */
/* Demangled: webrtc::FileWrapperImpl::OpenFile(char const*, bool, bool, bool) */
int _ZN6webrtc15FileWrapperImpl8OpenFileEPKcbbb(void);

/* Symbol: WebRtcAec_ComfortNoise */
/* Demangled: WebRtcAec_ComfortNoise */
extern void* WebRtcAec_ComfortNoise;

/* Symbol: _ZTVN6webrtc3AgcE */
/* Demangled: vtable for webrtc::Agc */
extern void* _ZTVN6webrtc3AgcE;

/* Symbol: _ZN6webrtc20EchoCancellationImplD2Ev */
/* Demangled: webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
int _ZN6webrtc20EchoCancellationImplD2Ev(void);

/* Symbol: _ZN6webrtc15AudioRingBuffer5WriteEPKPKfjj */
/* Demangled: webrtc::AudioRingBuffer::Write(float const* const*, unsigned int, unsigned int) */
int _ZN6webrtc15AudioRingBuffer5WriteEPKPKfjj(void);

/* Symbol: _ZN6webrtc17PushSincResamplerD0Ev */
/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
int _ZN6webrtc17PushSincResamplerD0Ev(void);

/* Symbol: WebRtcSpl_ResetResample16khzTo48khz */
/* Demangled: WebRtcSpl_ResetResample16khzTo48khz */
int WebRtcSpl_ResetResample16khzTo48khz(void);

/* Symbol: _ZN6webrtc13SincResamplerD0Ev */
/* Demangled: webrtc::SincResampler::~SincResampler() */
int _ZN6webrtc13SincResamplerD0Ev(void);

/* Symbol: rdft_wk1i */
/* Demangled: rdft_wk1i */
extern void* rdft_wk1i;

/* Symbol: _ZNK6webrtc9audioproc4Init24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Init::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc4Init24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: WebRtcSpl_UpsampleBy2 */
/* Demangled: WebRtcSpl_UpsampleBy2 */
int WebRtcSpl_UpsampleBy2(void);

/* Symbol: WebRtcAecm_StoreAdaptiveChannel */
/* Demangled: WebRtcAecm_StoreAdaptiveChannel */
extern void* WebRtcAecm_StoreAdaptiveChannel;

/* Symbol: _ZN6google8protobuf8internal20RepeatedPtrFieldBase18MergeFromInnerLoopINS0_16RepeatedPtrFieldINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEE11TypeHandlerEEEvPPvSF_ii */
/* Demangled: void google::protobuf::internal::RepeatedPtrFieldBase::MergeFromInnerLoop<google::protobuf::RepeatedPtrField<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::TypeHandler>(void**, void**, int, int) */
int _ZN6google8protobuf8internal20RepeatedPtrFieldBase18MergeFromInnerLoopINS0_16RepeatedPtrFieldINSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEE11TypeHandlerEEEvPPvSF_ii(void);

/* Symbol: WebRtcIsac_DecLogisticMulti2 */
/* Demangled: WebRtcIsac_DecLogisticMulti2 */
int WebRtcIsac_DecLogisticMulti2(void);

/* Symbol: _ZN6webrtc14AudioConverter6CreateEjjjj */
/* Demangled: webrtc::AudioConverter::Create(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc14AudioConverter6CreateEjjjj(void);

/* Symbol: WebRtcIsac_AddLarMean */
/* Demangled: WebRtcIsac_AddLarMean */
int WebRtcIsac_AddLarMean(void);

/* Symbol: WebRtcSpl_ComplexIFFT */
/* Demangled: WebRtcSpl_ComplexIFFT */
int WebRtcSpl_ComplexIFFT(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosix4WakeEv */
/* Demangled: webrtc::ConditionVariablePosix::Wake() */
int _ZN6webrtc22ConditionVariablePosix4WakeEv(void);

/* Symbol: WebRtc_InitDelayEstimator */
/* Demangled: WebRtc_InitDelayEstimator */
int WebRtc_InitDelayEstimator(void);

/* Symbol: _ZN6webrtc9audioproc6Config9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Config::MergeFrom(webrtc::audioproc::Config const&) */
int _ZN6webrtc9audioproc6Config9MergeFromERKS1_(void);

/* Symbol: WebRtc_is_robust_validation_enabled */
/* Demangled: WebRtc_is_robust_validation_enabled */
int WebRtc_is_robust_validation_enabled(void);

/* Symbol: WebRtcIsac_kIndexMultsGain */
/* Demangled: WebRtcIsac_kIndexMultsGain */
extern void* WebRtcIsac_kIndexMultsGain;

/* Symbol: _ZN6webrtc8Atomic32mmEv */
/* Demangled: webrtc::Atomic32::operator--() */
int _ZN6webrtc8Atomic32mmEv(void);

/* Symbol: _ZNK6webrtc9audioproc13ReverseStream13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::ReverseStream::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc13ReverseStream13SetCachedSizeEi(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImpl6EnableEb */
/* Demangled: webrtc::NoiseSuppressionImpl::Enable(bool) */
int _ZN6webrtc20NoiseSuppressionImpl6EnableEb(void);

/* Symbol: WebRtc_history_size */
/* Demangled: WebRtc_history_size */
int WebRtc_history_size(void);

/* Symbol: WebRtcIsac_kQGain2Levels */
/* Demangled: WebRtcIsac_kQGain2Levels */
extern void* WebRtcIsac_kQGain2Levels;

/* Symbol: _ZN3rtc11TimeIsLaterEjj */
/* Demangled: rtc::TimeIsLater(unsigned int, unsigned int) */
int _ZN3rtc11TimeIsLaterEjj(void);

/* Symbol: _ZN3rtc12FatalMessage4InitEPKci */
/* Demangled: rtc::FatalMessage::Init(char const*, int) */
int _ZN3rtc12FatalMessage4InitEPKci(void);

/* Symbol: WebRtcIsac_PitchfilterPost */
/* Demangled: WebRtcIsac_PitchfilterPost */
int WebRtcIsac_PitchfilterPost(void);

/* Symbol: WebRtcAgc_ExpCurve */
/* Demangled: WebRtcAgc_ExpCurve */
int WebRtcAgc_ExpCurve(void);

/* Symbol: rdft_wk1r */
/* Demangled: rdft_wk1r */
extern void* rdft_wk1r;

/* Symbol: WebRtcAgc_Init */
/* Demangled: WebRtcAgc_Init */
int WebRtcAgc_Init(void);

/* Symbol: WebRtcIsac_LevDurb */
/* Demangled: WebRtcIsac_LevDurb */
int WebRtcIsac_LevDurb(void);

/* Symbol: _ZNK6webrtc17VadCircularBuffer6OldestEv */
/* Demangled: webrtc::VadCircularBuffer::Oldest() const */
int _ZNK6webrtc17VadCircularBuffer6OldestEv(void);

/* Symbol: _ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_ */
/* Demangled: rtc::tokenize_first(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_(void);

/* Symbol: WebRtcIsac_GetErrorCode */
/* Demangled: WebRtcIsac_GetErrorCode */
int WebRtcIsac_GetErrorCode(void);

/* Symbol: WebRtcAecm_AlignedFarend */
/* Demangled: WebRtcAecm_AlignedFarend */
int WebRtcAecm_AlignedFarend(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl16high_pass_filterEv */
/* Demangled: webrtc::AudioProcessingImpl::high_pass_filter() const */
int _ZNK6webrtc19AudioProcessingImpl16high_pass_filterEv(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBank8AnalysisEPKfjPKPf */
/* Demangled: webrtc::ThreeBandFilterBank::Analysis(float const*, unsigned int, float* const*) */
int _ZN6webrtc19ThreeBandFilterBank8AnalysisEPKfjPKPf(void);

/* Symbol: _ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj */
/* Demangled: webrtc::VadAudioProc::FindFirstSpectralPeaks(double*, unsigned int) */
int _ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj(void);

/* Symbol: _ZNSt3__110__list_impINS_4pairIPN3rtc7LogSinkENS2_15LoggingSeverityEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__list_imp<std::__1::pair<rtc::LogSink*, rtc::LoggingSeverity>, std::__1::allocator<std::__1::pair<rtc::LogSink*, rtc::LoggingSeverity> > >::~__list_imp() */
int _ZNSt3__110__list_impINS_4pairIPN3rtc7LogSinkENS2_15LoggingSeverityEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: WebRtcIsac_DecSampRate */
/* Demangled: WebRtcIsac_DecSampRate */
int WebRtcIsac_DecSampRate(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl9CloseFileEv */
/* Demangled: webrtc::FileWrapperImpl::CloseFile() */
int _ZN6webrtc15FileWrapperImpl9CloseFileEv(void);

/* Symbol: WebRtcAecm_GetEchoPath */
/* Demangled: WebRtcAecm_GetEchoPath */
int WebRtcAecm_GetEchoPath(void);

/* Symbol: _ZN6webrtc19ProcessingComponent7DestroyEv */
/* Demangled: webrtc::ProcessingComponent::Destroy() */
int _ZN6webrtc19ProcessingComponent7DestroyEv(void);

/* Symbol: WebRtcAecm_Process */
/* Demangled: WebRtcAecm_Process */
int WebRtcAecm_Process(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc19ThreeBandFilterBankENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::ThreeBandFilterBank*, std::__1::allocator<webrtc::ThreeBandFilterBank*> >::__push_back_slow_path<webrtc::ThreeBandFilterBank* const&>(webrtc::ThreeBandFilterBank* const&) */
int _ZNSt3__16vectorIPN6webrtc19ThreeBandFilterBankENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: WebRtcIsac_EncodeLpcGainLb */
/* Demangled: WebRtcIsac_EncodeLpcGainLb */
int WebRtcIsac_EncodeLpcGainLb(void);

/* Symbol: _ZNK6webrtc9audioproc5Event12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Event::ByteSizeLong() const */
int _ZNK6webrtc9audioproc5Event12ByteSizeLongEv(void);

/* Symbol: _ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj */
/* Demangled: std::__1::vector<short, std::__1::allocator<short> >::__append(unsigned int) */
int _ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj(void);

/* Symbol: _ZN6webrtc19ProcessingComponentD0Ev */
/* Demangled: webrtc::ProcessingComponent::~ProcessingComponent() */
int _ZN6webrtc19ProcessingComponentD0Ev(void);

/* Symbol: WebRtcIsac_GetUplinkMaxDelay */
/* Demangled: WebRtcIsac_GetUplinkMaxDelay */
int WebRtcIsac_GetUplinkMaxDelay(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc7SortKeyIiEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<webrtc::SortKey<int>*, std::__1::allocator<webrtc::SortKey<int>*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPN6webrtc7SortKeyIiEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetricsC1ERKS1_ */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics(webrtc::audioproc::Test_DelayMetrics const&) */
int _ZN6webrtc9audioproc17Test_DelayMetricsC1ERKS1_(void);

/* Symbol: WebRtcIsac_EncodeSpec */
/* Demangled: WebRtcIsac_EncodeSpec */
int WebRtcIsac_EncodeSpec(void);

/* Symbol: WebRtcAec_FreeAec */
/* Demangled: WebRtcAec_FreeAec */
int WebRtcAec_FreeAec(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetricsC2Ev */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics() */
int _ZN6webrtc9audioproc16Test_EchoMetricsC2Ev(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_14ExtendedFilterEEERKT_vE3def */
/* Demangled: guard variable for webrtc::ExtendedFilter const& webrtc::Config::default_value<webrtc::ExtendedFilter>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_14ExtendedFilterEEERKT_vE3def;

/* Symbol: _ZN6webrtc13StandaloneVad11GetActivityEPdj */
/* Demangled: webrtc::StandaloneVad::GetActivity(double*, unsigned int) */
int _ZN6webrtc13StandaloneVad11GetActivityEPdj(void);

/* Symbol: WebRtcAecm_InitEchoPath */
/* Demangled: WebRtcAecm_InitEchoPath */
int WebRtcAecm_InitEchoPath(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC1EPNS_11GainControlEPNS_15VolumeCallbacksEi */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
int _ZN6webrtc16AgcManagerDirectC1EPNS_11GainControlEPNS_15VolumeCallbacksEi(void);

/* Symbol: _ZN6webrtc13StandaloneVadD2Ev */
/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
int _ZN6webrtc13StandaloneVadD2Ev(void);

/* Symbol: WebRtcIsac_CorrelateLpcGain */
/* Demangled: WebRtcIsac_CorrelateLpcGain */
int WebRtcIsac_CorrelateLpcGain(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics5ClearEv */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::Clear() */
int _ZN6webrtc9audioproc17Test_DelayMetrics5ClearEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN6webrtc21EchoControlMobileImpl11SetEchoPathEPKvj */
/* Demangled: webrtc::EchoControlMobileImpl::SetEchoPath(void const*, unsigned int) */
int _ZN6webrtc21EchoControlMobileImpl11SetEchoPathEPKvj(void);

/* Symbol: _ZN3rtc10hex_decodeEcPh */
/* Demangled: rtc::hex_decode(char, unsigned char*) */
int _ZN3rtc10hex_decodeEcPh(void);

/* Symbol: WebRtcIsac_kQPitchLagStepsizeLo */
/* Demangled: WebRtcIsac_kQPitchLagStepsizeLo */
extern void* WebRtcIsac_kQPitchLagStepsizeLo;

/* Symbol: WebRtcIsac_GetVarsUB */
/* Demangled: WebRtcIsac_GetVarsUB */
int WebRtcIsac_GetVarsUB(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEP7__sFILE */
/* Demangled: webrtc::AudioProcessingImpl::StartDebugRecording(__sFILE*) */
int _ZN6webrtc19AudioProcessingImpl19StartDebugRecordingEP7__sFILE(void);

/* Symbol: _ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv */
/* Demangled: webrtc::AudioBuffer::MergeFrequencyBands() */
int _ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl20num_handles_requiredEv */
/* Demangled: webrtc::EchoCancellationImpl::num_handles_required() const */
int _ZNK6webrtc20EchoCancellationImpl20num_handles_requiredEv(void);

/* Symbol: _ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_15IFChannelBufferEPS1_ */
/* Demangled: webrtc::SplittingFilter::ThreeBandsAnalysis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
int _ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_15IFChannelBufferEPS1_(void);

/* Symbol: _ZN6webrtc12VadAudioProc11ResetBufferEv */
/* Demangled: webrtc::VadAudioProc::ResetBuffer() */
int _ZN6webrtc12VadAudioProc11ResetBufferEv(void);

/* Symbol: _ZN3rtc17MakeCheckOpStringINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_EEPS7_RKT_RKT0_PKc */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN3rtc17MakeCheckOpStringINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_EEPS7_RKT_RKT0_PKc(void);

/* Symbol: _ZN3rtc10hex_encodeEPcjPKcj */
/* Demangled: rtc::hex_encode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc10hex_encodeEPcjPKcj(void);

/* Symbol: WebRtcIsac_kQMeanLag2Hi */
/* Demangled: WebRtcIsac_kQMeanLag2Hi */
extern void* WebRtcIsac_kQMeanLag2Hi;

/* Symbol: _ZN6webrtc5Trace18kBoilerplateLengthE */
/* Demangled: webrtc::Trace::kBoilerplateLength */
extern void* _ZN6webrtc5Trace18kBoilerplateLengthE;

/* Symbol: _ZN6webrtc9audioproc5Event8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Event::CopyFrom(webrtc::audioproc::Event const&) */
int _ZN6webrtc9audioproc5Event8CopyFromERKS1_(void);

/* Symbol: WebRtcIsac_EncodeRc */
/* Demangled: WebRtcIsac_EncodeRc */
int WebRtcIsac_EncodeRc(void);

/* Symbol: WebRtcIsac_kQindexLowerLimitLagHi */
/* Demangled: WebRtcIsac_kQindexLowerLimitLagHi */
extern void* WebRtcIsac_kQindexLowerLimitLagHi;

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc14Test_StatisticEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Test_Statistic>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc14Test_StatisticEEEvPv(void);

/* Symbol: _ZN6webrtc9audioproc4TestD0Ev */
/* Demangled: webrtc::audioproc::Test::~Test() */
int _ZN6webrtc9audioproc4TestD0Ev(void);

/* Symbol: _ZNK6webrtc9audioproc16Test_EchoMetrics12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::ByteSizeLong() const */
int _ZNK6webrtc9audioproc16Test_EchoMetrics12ByteSizeLongEv(void);

/* Symbol: _ZTVN6webrtc9audioproc4TestE */
/* Demangled: vtable for webrtc::audioproc::Test */
extern void* _ZTVN6webrtc9audioproc4TestE;

/* Symbol: _ZN6webrtc18VoiceDetectionImpl10InitializeEi */
/* Demangled: webrtc::VoiceDetectionImpl::Initialize(int) */
int _ZN6webrtc18VoiceDetectionImpl10InitializeEi(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl18StopDebugRecordingEv */
/* Demangled: webrtc::AudioProcessingImpl::StopDebugRecording() */
int _ZN6webrtc19AudioProcessingImpl18StopDebugRecordingEv(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer15RemoveTransientEid */
/* Demangled: webrtc::VadCircularBuffer::RemoveTransient(int, double) */
int _ZN6webrtc17VadCircularBuffer15RemoveTransientEid(void);

/* Symbol: _ZTVN6webrtc11FileWrapperE */
/* Demangled: vtable for webrtc::FileWrapper */
extern void* _ZTVN6webrtc11FileWrapperE;

/* Symbol: _ZN6webrtc11AudioBufferC2Ejjjjj */
/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11AudioBufferC2Ejjjjj(void);

/* Symbol: _ZNK6webrtc11AudioBuffer9num_bandsEv */
/* Demangled: webrtc::AudioBuffer::num_bands() const */
int _ZNK6webrtc11AudioBuffer9num_bandsEv(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4InitEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Init>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc4InitEEEvPv(void);

/* Symbol: _ZTVN6webrtc9audioproc14Test_StatisticE */
/* Demangled: vtable for webrtc::audioproc::Test_Statistic */
extern void* _ZTVN6webrtc9audioproc14Test_StatisticE;

/* Symbol: _ZN6webrtc3AgcD0Ev */
/* Demangled: webrtc::Agc::~Agc() */
int _ZN6webrtc3AgcD0Ev(void);

/* Symbol: _ZTVN6webrtc11AudioBufferE */
/* Demangled: vtable for webrtc::AudioBuffer */
extern void* _ZTVN6webrtc11AudioBufferE;

/* Symbol: _ZN6webrtc17TransientDetectorC2Ei */
/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
int _ZN6webrtc17TransientDetectorC2Ei(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC2EPNS_11GainControlEPNS_15VolumeCallbacksEi */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::GainControl*, webrtc::VolumeCallbacks*, int) */
int _ZN6webrtc16AgcManagerDirectC2EPNS_11GainControlEPNS_15VolumeCallbacksEi(void);

/* Symbol: WebRtcIsac_kCos */
/* Demangled: WebRtcIsac_kCos */
extern void* WebRtcIsac_kCos;

/* Symbol: _ZN6webrtc19TransientSuppressor15HardRestorationEPf */
/* Demangled: webrtc::TransientSuppressor::HardRestoration(float*) */
int _ZN6webrtc19TransientSuppressor15HardRestorationEPf(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStream5ClearEv */
/* Demangled: webrtc::audioproc::ReverseStream::Clear() */
int _ZN6webrtc9audioproc13ReverseStream5ClearEv(void);

/* Symbol: _ZNK6webrtc11AudioBuffer18low_pass_referenceEi */
/* Demangled: webrtc::AudioBuffer::low_pass_reference(int) const */
int _ZNK6webrtc11AudioBuffer18low_pass_referenceEi(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl18output_copy_neededEb */
/* Demangled: webrtc::AudioProcessingImpl::output_copy_needed(bool) const */
int _ZNK6webrtc19AudioProcessingImpl18output_copy_neededEb(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl19AllocateRenderQueueEv */
/* Demangled: webrtc::EchoCancellationImpl::AllocateRenderQueue() */
int _ZN6webrtc20EchoCancellationImpl19AllocateRenderQueueEv(void);

/* Symbol: WebRtcNsx_Free */
/* Demangled: WebRtcNsx_Free */
int WebRtcNsx_Free(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer32InitLowFrequencyCorrectionRangesEv */
/* Demangled: webrtc::NonlinearBeamformer::InitLowFrequencyCorrectionRanges() */
int _ZN6webrtc19NonlinearBeamformer32InitLowFrequencyCorrectionRangesEv(void);

/* Symbol: WebRtcIsac_GetLpcCoefLb */
/* Demangled: WebRtcIsac_GetLpcCoefLb */
int WebRtcIsac_GetLpcCoefLb(void);

/* Symbol: WebRtcIsac_Lar2Rc */
/* Demangled: WebRtcIsac_Lar2Rc */
int WebRtcIsac_Lar2Rc(void);

/* Symbol: WebRtc_GetCPUInfo */
/* Demangled: WebRtc_GetCPUInfo */
extern void* WebRtc_GetCPUInfo;

/* Symbol: _ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEi */
/* Demangled: webrtc::metrics::HistogramAdd(webrtc::metrics::Histogram*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEi(void);

/* Symbol: _ZN6webrtc13StandaloneVad8set_modeEi */
/* Demangled: webrtc::StandaloneVad::set_mode(int) */
int _ZN6webrtc13StandaloneVad8set_modeEi(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancerC2ERKNS0_6ConfigE */
/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer(webrtc::IntelligibilityEnhancer::Config const&) */
int _ZN6webrtc23IntelligibilityEnhancerC2ERKNS0_6ConfigE(void);

/* Symbol: WebRtcIsac_DecodePitchGain */
/* Demangled: WebRtcIsac_DecodePitchGain */
int WebRtcIsac_DecodePitchGain(void);

/* Symbol: _ZNK6webrtc9audioproc6Stream13IsInitializedEv */
/* Demangled: webrtc::audioproc::Stream::IsInitialized() const */
int _ZNK6webrtc9audioproc6Stream13IsInitializedEv(void);

/* Symbol: _ZNK6webrtc15GainControlImpl12CreateHandleEv */
/* Demangled: webrtc::GainControlImpl::CreateHandle() const */
int _ZNK6webrtc15GainControlImpl12CreateHandleEv(void);

/* Symbol: _ZNK6webrtc20NoiseSuppressionImpl10is_enabledEv */
/* Demangled: webrtc::NoiseSuppressionImpl::is_enabled() const */
int _ZNK6webrtc20NoiseSuppressionImpl10is_enabledEv(void);

/* Symbol: WebRtcIsac_kIndexUpperLimitGain */
/* Demangled: WebRtcIsac_kIndexUpperLimitGain */
extern void* WebRtcIsac_kIndexUpperLimitGain;

/* Symbol: WebRtcIsac_kQIndexLowerLimitLagLo */
/* Demangled: WebRtcIsac_kQIndexLowerLimitLagLo */
extern void* WebRtcIsac_kQIndexLowerLimitLagLo;

/* Symbol: _ZNK6webrtc15GainControlImpl14GetHandleErrorEPv */
/* Demangled: webrtc::GainControlImpl::GetHandleError(void*) const */
int _ZNK6webrtc15GainControlImpl14GetHandleErrorEPv(void);

/* Symbol: WebRtcIsac_GetDownlinkBwJitIndexImpl */
/* Demangled: WebRtcIsac_GetDownlinkBwJitIndexImpl */
int WebRtcIsac_GetDownlinkBwJitIndexImpl(void);

/* Symbol: cft1st_128 */
/* Demangled: cft1st_128 */
extern void* cft1st_128;

/* Symbol: _ZN6webrtc9audioproc6StreamC2Ev */
/* Demangled: webrtc::audioproc::Stream::Stream() */
int _ZN6webrtc9audioproc6StreamC2Ev(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImpl3RMSEv */
/* Demangled: webrtc::LevelEstimatorImpl::RMS() */
int _ZN6webrtc18LevelEstimatorImpl3RMSEv(void);

/* Symbol: _ZN3rtc16IsThreadRefEqualERKlS1_ */
/* Demangled: rtc::IsThreadRefEqual(long const&, long const&) */
int _ZN3rtc16IsThreadRefEqualERKlS1_(void);

/* Symbol: _ZNSt3__16vectorINS_7complexIfEENS_9allocatorIS2_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::complex<float>, std::__1::allocator<std::__1::complex<float> > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_7complexIfEENS_9allocatorIS2_EEE8__appendEj(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def */
/* Demangled: webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def;

/* Symbol: rdft_wk2i */
/* Demangled: rdft_wk2i */
extern void* rdft_wk2i;

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal28echo_return_loss_enhancementEPKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::_Internal::echo_return_loss_enhancement(webrtc::audioproc::Test_EchoMetrics const*) */
int _ZN6webrtc9audioproc16Test_EchoMetrics9_Internal28echo_return_loss_enhancementEPKS1_(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::CopyFrom(webrtc::audioproc::Test_DelayMetrics const&) */
int _ZN6webrtc9audioproc17Test_DelayMetrics8CopyFromERKS1_(void);

/* Symbol: _ZN6webrtc15GainControlImpl19stream_analog_levelEv */
/* Demangled: webrtc::GainControlImpl::stream_analog_level() */
int _ZN6webrtc15GainControlImpl19stream_analog_levelEv(void);

/* Symbol: _ZN3rtc9TimeAfterEi */
/* Demangled: rtc::TimeAfter(int) */
int _ZN3rtc9TimeAfterEi(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc14AudioConverterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::AudioConverter*, std::__1::allocator<webrtc::AudioConverter*> >::__push_back_slow_path<webrtc::AudioConverter* const&>(webrtc::AudioConverter* const&) */
int _ZNSt3__16vectorIPN6webrtc14AudioConverterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIPjNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<unsigned int*, std::__1::allocator<unsigned int*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPjNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6ConfigEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Config>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6ConfigEEEvPv(void);

/* Symbol: _ZNK6webrtc9audioproc6Stream11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Stream::GetTypeName() const */
int _ZNK6webrtc9audioproc6Stream11GetTypeNameEv(void);

/* Symbol: _ZN6webrtc17PushSincResamplerC2Ejj */
/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
int _ZN6webrtc17PushSincResamplerC2Ejj(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosixD1Ev */
/* Demangled: webrtc::ConditionVariablePosix::~ConditionVariablePosix() */
int _ZN6webrtc22ConditionVariablePosixD1Ev(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect11SetMaxLevelEi */
/* Demangled: webrtc::AgcManagerDirect::SetMaxLevel(int) */
int _ZN6webrtc16AgcManagerDirect11SetMaxLevelEi(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics16default_instanceEv */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::default_instance() */
int _ZN6webrtc9audioproc16Test_EchoMetrics16default_instanceEv(void);

/* Symbol: _ZNK6webrtc11AudioBuffer12split_data_fEv */
/* Demangled: webrtc::AudioBuffer::split_data_f() const */
int _ZNK6webrtc11AudioBuffer12split_data_fEv(void);

/* Symbol: WebRtc_ProcessBinarySpectrum */
/* Demangled: WebRtc_ProcessBinarySpectrum */
int WebRtc_ProcessBinarySpectrum(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Test_Frame::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc10Test_Frame27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplD1Ev */
/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
int _ZN6webrtc19AudioProcessingImplD1Ev(void);

/* Symbol: _ZN6webrtc15GainControlImpl6EnableEb */
/* Demangled: webrtc::GainControlImpl::Enable(bool) */
int _ZN6webrtc15GainControlImpl6EnableEb(void);

/* Symbol: _ZN6webrtc15AudioRingBuffer23MoveReadPositionForwardEj */
/* Demangled: webrtc::AudioRingBuffer::MoveReadPositionForward(unsigned int) */
int _ZN6webrtc15AudioRingBuffer23MoveReadPositionForwardEj(void);

/* Symbol: WebRtcAecm_UpdateChannel */
/* Demangled: WebRtcAecm_UpdateChannel */
int WebRtcAecm_UpdateChannel(void);

/* Symbol: _ZN6webrtc9Resampler4PushEPKsjPsjRj */
/* Demangled: webrtc::Resampler::Push(short const*, unsigned int, short*, unsigned int, unsigned int&) */
int _ZN6webrtc9Resampler4PushEPKsjPsjRj(void);

/* Symbol: _ZN3rtc15GlobalLockScopeD2Ev */
/* Demangled: rtc::GlobalLockScope::~GlobalLockScope() */
int _ZN3rtc15GlobalLockScopeD2Ev(void);

/* Symbol: _ZN3rtc10LogMessage8streams_E */
/* Demangled: rtc::LogMessage::streams_ */
extern void* _ZN3rtc10LogMessage8streams_E;

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetricsD1Ev */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::~Test_DelayMetrics() */
int _ZN6webrtc9audioproc17Test_DelayMetricsD1Ev(void);

/* Symbol: _ZNK6webrtc9audioproc14Test_Statistic12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Test_Statistic::ByteSizeLong() const */
int _ZNK6webrtc9audioproc14Test_Statistic12ByteSizeLongEv(void);

/* Symbol: _ZN3rtc10hex_encodeEPKcj */
/* Demangled: rtc::hex_encode(char const*, unsigned int) */
int _ZN3rtc10hex_encodeEPKcj(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer14UpdateErbGainsEv */
/* Demangled: webrtc::IntelligibilityEnhancer::UpdateErbGains() */
int _ZN6webrtc23IntelligibilityEnhancer14UpdateErbGainsEv(void);

/* Symbol: _ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj */
/* Demangled: webrtc::TransientDetector::ReferenceDetectionValue(float const*, unsigned int) */
int _ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj(void);

/* Symbol: _ZNK6webrtc9Histogram12AudioContentEv */
/* Demangled: webrtc::Histogram::AudioContent() const */
int _ZNK6webrtc9Histogram12AudioContentEv(void);

/* Symbol: _ZNK6webrtc9audioproc13ReverseStream11GetTypeNameEv */
/* Demangled: webrtc::audioproc::ReverseStream::GetTypeName() const */
int _ZNK6webrtc9audioproc13ReverseStream11GetTypeNameEv(void);

/* Symbol: _ZNK6webrtc9audioproc6Config13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Config::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc6Config13SetCachedSizeEi(void);

/* Symbol: _ZN6webrtc7WPDNodeC2EjPKfj */
/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
int _ZN6webrtc7WPDNodeC2EjPKfj(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_reverse_channels() const */
int _ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv(void);

/* Symbol: _ZNK6webrtc15GainControlImpl20analog_level_maximumEv */
/* Demangled: webrtc::GainControlImpl::analog_level_maximum() const */
int _ZNK6webrtc15GainControlImpl20analog_level_maximumEv(void);

/* Symbol: WebRtc_InitBinaryDelayEstimator */
/* Demangled: WebRtc_InitBinaryDelayEstimator */
int WebRtc_InitBinaryDelayEstimator(void);

/* Symbol: WebRtcIsac_GetDownlinkMaxDelay */
/* Demangled: WebRtcIsac_GetDownlinkMaxDelay */
int WebRtcIsac_GetDownlinkMaxDelay(void);

/* Symbol: rdft_wk2r */
/* Demangled: rdft_wk2r */
extern void* rdft_wk2r;

/* Symbol: _ZN6webrtc9audioproc10Test_FrameC2ERKS1_ */
/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame(webrtc::audioproc::Test_Frame const&) */
int _ZN6webrtc9audioproc10Test_FrameC2ERKS1_(void);

/* Symbol: _ZN6webrtc9audioproc4InitC2ERKS1_ */
/* Demangled: webrtc::audioproc::Init::Init(webrtc::audioproc::Init const&) */
int _ZN6webrtc9audioproc4InitC2ERKS1_(void);

/* Symbol: _ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj */
/* Demangled: webrtc::VadAudioProc::SubframeCorrelation(double*, unsigned int, unsigned int) */
int _ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj(void);

/* Symbol: WebRtcIsac_EncodeUb12 */
/* Demangled: WebRtcIsac_EncodeUb12 */
int WebRtcIsac_EncodeUb12(void);

/* Symbol: _ZN6webrtc7WPDNode8set_dataEPKfj */
/* Demangled: webrtc::WPDNode::set_data(float const*, unsigned int) */
int _ZN6webrtc7WPDNode8set_dataEPKfj(void);

/* Symbol: WebRtcAecm_set_config */
/* Demangled: WebRtcAecm_set_config */
int WebRtcAecm_set_config(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc17Test_DelayMetrics27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZN3rtc10LogMessage16ConfigureLoggingEPKc */
/* Demangled: rtc::LogMessage::ConfigureLogging(char const*) */
int _ZN3rtc10LogMessage16ConfigureLoggingEPKc(void);

/* Symbol: _ZN6webrtc11AreParallelERKNS_14CartesianPointIfEES3_ */
/* Demangled: webrtc::AreParallel(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
int _ZN6webrtc11AreParallelERKNS_14CartesianPointIfEES3_(void);

/* Symbol: WebRtcIsac_DecodeLpcCoefUB */
/* Demangled: WebRtcIsac_DecodeLpcCoefUB */
int WebRtcIsac_DecodeLpcCoefUB(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub160 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub160 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub160;

/* Symbol: WebRtcNsx_CalcParametricNoiseEstimate */
/* Demangled: WebRtcNsx_CalcParametricNoiseEstimate */
int WebRtcNsx_CalcParametricNoiseEstimate(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::InternalSwap(webrtc::audioproc::Test_EchoMetrics*) */
int _ZN6webrtc9audioproc16Test_EchoMetrics12InternalSwapEPS1_(void);

/* Symbol: WebRtcSpl_DivResultInQ31 */
/* Demangled: WebRtcSpl_DivResultInQ31 */
int WebRtcSpl_DivResultInQ31(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub161 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub161 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub161;

/* Symbol: _ZN6webrtc9HistogramD1Ev */
/* Demangled: webrtc::Histogram::~Histogram() */
int _ZN6webrtc9HistogramD1Ev(void);

/* Symbol: WebRtcAgc_AddFarendToDigital */
/* Demangled: WebRtcAgc_AddFarendToDigital */
int WebRtcAgc_AddFarendToDigital(void);

/* Symbol: WebRtcNsx_set_policy */
/* Demangled: WebRtcNsx_set_policy */
int WebRtcNsx_set_policy(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub162 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub162 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub162;

/* Symbol: WebRtcSpl_Resample8khzTo22khz */
/* Demangled: WebRtcSpl_Resample8khzTo22khz */
int WebRtcSpl_Resample8khzTo22khz(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15MaybeInitializeERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::MaybeInitialize(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl15MaybeInitializeERKNS_16ProcessingConfigE(void);

/* Symbol: WebRtcIsac_EncodeUb16 */
/* Demangled: WebRtcIsac_EncodeUb16 */
int WebRtcIsac_EncodeUb16(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub163 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub163 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub163;

/* Symbol: _ZN6webrtc13SincResampler5FlushEv */
/* Demangled: webrtc::SincResampler::Flush() */
int _ZN6webrtc13SincResampler5FlushEv(void);

/* Symbol: WebRtcSpl_MinValueW16 */
/* Demangled: WebRtcSpl_MinValueW16 */
extern void* WebRtcSpl_MinValueW16;

/* Symbol: _ZN6webrtc4SortEPvjNS_4TypeE */
/* Demangled: webrtc::Sort(void*, unsigned int, webrtc::Type) */
int _ZN6webrtc4SortEPvjNS_4TypeE(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv */
/* Demangled: webrtc::AudioProcessingImpl::proc_split_sample_rate_hz() const */
int _ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE */
/* Demangled: webrtc::EchoCancellationImpl::SetExtraOptions(webrtc::Config const&) */
int _ZN6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE(void);

/* Symbol: WebRtc_FreeBinaryDelayEstimatorFarend */
/* Demangled: WebRtc_FreeBinaryDelayEstimatorFarend */
int WebRtc_FreeBinaryDelayEstimatorFarend(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub164 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub164 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub164;

/* Symbol: android_getCpuFeatures */
/* Demangled: android_getCpuFeatures */
int android_getCpuFeatures(void);

/* Symbol: _ZN6webrtc9Histogram10UpdateHistEii */
/* Demangled: webrtc::Histogram::UpdateHist(int, int) */
int _ZN6webrtc9Histogram10UpdateHistEii(void);

/* Symbol: _ZN6webrtc11AudioBufferD2Ev */
/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
int _ZN6webrtc11AudioBufferD2Ev(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImpl10InitializeEv */
/* Demangled: webrtc::LevelEstimatorImpl::Initialize() */
int _ZN6webrtc18LevelEstimatorImpl10InitializeEv(void);

/* Symbol: _ZThn4_N6webrtc20EchoCancellationImplD1Ev */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
int _ZThn4_N6webrtc20EchoCancellationImplD1Ev(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub165 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub165 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub165;

/* Symbol: _ZN6webrtc9ResamplerC1Eiij */
/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
int _ZN6webrtc9ResamplerC1Eiij(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Test_Frame::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc10Test_Frame21InitAsDefaultInstanceEv(void);

/* Symbol: _ZNK6webrtc11AudioBuffer14channels_constEv */
/* Demangled: webrtc::AudioBuffer::channels_const() const */
int _ZNK6webrtc11AudioBuffer14channels_constEv(void);

/* Symbol: _ZN6webrtc17VadCircularBufferD1Ev */
/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
int _ZN6webrtc17VadCircularBufferD1Ev(void);

/* Symbol: _ZN3rtc17MakeCheckOpStringIjmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned int, unsigned long>(unsigned int const&, unsigned long const&, char const*) */
int _ZN3rtc17MakeCheckOpStringIjmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void);

/* Symbol: _ZTVN3rtc14PlatformThreadE */
/* Demangled: vtable for rtc::PlatformThread */
extern void* _ZTVN3rtc14PlatformThreadE;

/* Symbol: WebRtcIsac_kKltT1Shape */
/* Demangled: WebRtcIsac_kKltT1Shape */
extern void* WebRtcIsac_kKltT1Shape;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub166 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub166 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub166;

/* Symbol: _ZN6webrtc15GainControlImpl23set_analog_level_limitsEii */
/* Demangled: webrtc::GainControlImpl::set_analog_level_limits(int, int) */
int _ZN6webrtc15GainControlImpl23set_analog_level_limitsEii(void);

/* Symbol: _ZN6webrtc15LappedTransform10BlockThunk12ProcessBlockEPKPKfjjjPKPf */
/* Demangled: webrtc::LappedTransform::BlockThunk::ProcessBlock(float const* const*, unsigned int, unsigned int, unsigned int, float* const*) */
int _ZN6webrtc15LappedTransform10BlockThunk12ProcessBlockEPKPKfjjjPKPf(void);

/* Symbol: _ZN6webrtc9ResamplerC2Ev */
/* Demangled: webrtc::Resampler::Resampler() */
int _ZN6webrtc9ResamplerC2Ev(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl5WriteEPKvj */
/* Demangled: webrtc::FileWrapperImpl::Write(void const*, unsigned int) */
int _ZN6webrtc15FileWrapperImpl5WriteEPKvj(void);

/* Symbol: _ZTVN6webrtc9audioproc6ConfigE */
/* Demangled: vtable for webrtc::audioproc::Config */
extern void* _ZTVN6webrtc9audioproc6ConfigE;

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl12CreateHandleEv */
/* Demangled: webrtc::EchoControlMobileImpl::CreateHandle() const */
int _ZNK6webrtc21EchoControlMobileImpl12CreateHandleEv(void);

/* Symbol: _ZN6webrtc15GainControlImpl21set_target_level_dbfsEi */
/* Demangled: webrtc::GainControlImpl::set_target_level_dbfs(int) */
int _ZN6webrtc15GainControlImpl21set_target_level_dbfsEi(void);

/* Symbol: _ZN6webrtc13StandaloneVad8AddAudioEPKsj */
/* Demangled: webrtc::StandaloneVad::AddAudio(short const*, unsigned int) */
int _ZN6webrtc13StandaloneVad8AddAudioEPKsj(void);

/* Symbol: _ZN6webrtc19TransientSuppressor15SoftRestorationEPf */
/* Demangled: webrtc::TransientSuppressor::SoftRestoration(float*) */
int _ZN6webrtc19TransientSuppressor15SoftRestorationEPf(void);

/* Symbol: _ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi */
/* Demangled: webrtc::VadCircularBuffer::ConvertToLinearIndex(int*) const */
int _ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi(void);

/* Symbol: _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: WebRtcIsac_kQMeanLag4Mid */
/* Demangled: WebRtcIsac_kQMeanLag4Mid */
extern void* WebRtcIsac_kQMeanLag4Mid;

/* Symbol: WebRtcAgc_ProcessDigital */
/* Demangled: WebRtcAgc_ProcessDigital */
int WebRtcAgc_ProcessDigital(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStreamC1ERKS1_ */
/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream(webrtc::audioproc::ReverseStream const&) */
int _ZN6webrtc9audioproc13ReverseStreamC1ERKS1_(void);

/* Symbol: WebRtcSpl_CrossCorrelationC */
/* Demangled: WebRtcSpl_CrossCorrelationC */
int WebRtcSpl_CrossCorrelationC(void);

/* Symbol: _ZN6webrtc7SleepMsEi */
/* Demangled: webrtc::SleepMs(int) */
int _ZN6webrtc7SleepMsEi(void);

/* Symbol: WebRtcAecm_CalcSuppressionGain */
/* Demangled: WebRtcAecm_CalcSuppressionGain */
int WebRtcAecm_CalcSuppressionGain(void);

/* Symbol: WebRtcSpl_ScaleAndAddVectorsWithRound */
/* Demangled: WebRtcSpl_ScaleAndAddVectorsWithRound */
extern void* WebRtcSpl_ScaleAndAddVectorsWithRound;

/* Symbol: WebRtcAecm_Control */
/* Demangled: WebRtcAecm_Control */
int WebRtcAecm_Control(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectD1Ev */
/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
int _ZN6webrtc16AgcManagerDirectD1Ev(void);

/* Symbol: _ZN6webrtc9audioproc4Test16default_instanceEv */
/* Demangled: webrtc::audioproc::Test::default_instance() */
int _ZN6webrtc9audioproc4Test16default_instanceEv(void);

/* Symbol: _ZThn4_N6webrtc15GainControlImplD1Ev */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::~GainControlImpl() */
int _ZThn4_N6webrtc15GainControlImplD1Ev(void);

/* Symbol: _ZNK6webrtc17VadCircularBuffer3GetEiPd */
/* Demangled: webrtc::VadCircularBuffer::Get(int, double*) const */
int _ZNK6webrtc17VadCircularBuffer3GetEiPd(void);

/* Symbol: WebRtcVad_set_mode_core */
/* Demangled: WebRtcVad_set_mode_core */
int WebRtcVad_set_mode_core(void);

/* Symbol: bitrv2_128 */
/* Demangled: bitrv2_128 */
extern void* bitrv2_128;

/* Symbol: WebRtcSpl_RealInverseFFT */
/* Demangled: WebRtcSpl_RealInverseFFT */
int WebRtcSpl_RealInverseFFT(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer6CreateEi */
/* Demangled: webrtc::VadCircularBuffer::Create(int) */
int _ZN6webrtc17VadCircularBuffer6CreateEi(void);

/* Symbol: _ZN3rtc7tracing19SetupInternalTracerEv */
/* Demangled: rtc::tracing::SetupInternalTracer() */
int _ZN3rtc7tracing19SetupInternalTracerEv(void);

/* Symbol: _ZNK6webrtc16RealFourierOoura7InverseEPKNSt3__17complexIfEEPf */
/* Demangled: webrtc::RealFourierOoura::Inverse(std::__1::complex<float> const*, float*) const */
int _ZNK6webrtc16RealFourierOoura7InverseEPKNSt3__17complexIfEEPf(void);

/* Symbol: WebRtcNsx_SpeechNoiseProb */
/* Demangled: WebRtcNsx_SpeechNoiseProb */
int WebRtcNsx_SpeechNoiseProb(void);

/* Symbol: _ZThn4_N6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::SetExtraOptions(webrtc::Config const&) */
int _ZThn4_N6webrtc20EchoCancellationImpl15SetExtraOptionsERKNS_6ConfigE(void);

/* Symbol: WebRtcNsx_Create */
/* Demangled: WebRtcNsx_Create */
int WebRtcNsx_Create(void);

/* Symbol: _ZN3rtc25kInvalidPlatformFileValueE */
/* Demangled: rtc::kInvalidPlatformFileValue */
extern void* _ZN3rtc25kInvalidPlatformFileValueE;

/* Symbol: _ZN6webrtc25CovarianceMatrixGenerator23UniformCovarianceMatrixEfRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE */
/* Demangled: webrtc::CovarianceMatrixGenerator::UniformCovarianceMatrix(float, std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::ComplexMatrix<float>*) */
int _ZN6webrtc25CovarianceMatrixGenerator23UniformCovarianceMatrixEfRKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEEPNS_13ComplexMatrixIfEE(void);

/* Symbol: WebRtcAgc_InitVad */
/* Demangled: WebRtcAgc_InitVad */
int WebRtcAgc_InitVad(void);

/* Symbol: WebRtcAecm_kCosTable */
/* Demangled: WebRtcAecm_kCosTable */
extern void* WebRtcAecm_kCosTable;

/* Symbol: _ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_Pf */
/* Demangled: webrtc::EchoCancellationImpl::GetDelayMetrics(int*, int*, float*) */
int _ZN6webrtc20EchoCancellationImpl15GetDelayMetricsEPiS1_Pf(void);

/* Symbol: _ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE */
/* Demangled: webrtc::SetupEventTracer(unsigned char const* (*)(char const*), void (*)(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char)) */
int _ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE(void);

/* Symbol: WebRtcAec_enable_extended_filter */
/* Demangled: WebRtcAec_enable_extended_filter */
int WebRtcAec_enable_extended_filter(void);

/* Symbol: _ZN6webrtc9audioproc4TestC1ERKS1_ */
/* Demangled: webrtc::audioproc::Test::Test(webrtc::audioproc::Test const&) */
int _ZN6webrtc9audioproc4TestC1ERKS1_(void);

/* Symbol: _ZN6webrtc10FIRFilterCC1EPKfj */
/* Demangled: webrtc::FIRFilterC::FIRFilterC(float const*, unsigned int) */
int _ZN6webrtc10FIRFilterCC1EPKfj(void);

/* Symbol: WebRtcIsac_kQKltInitIndexShape */
/* Demangled: WebRtcIsac_kQKltInitIndexShape */
extern void* WebRtcIsac_kQKltInitIndexShape;

/* Symbol: _ZTVN6webrtc17PushSincResamplerE */
/* Demangled: vtable for webrtc::PushSincResampler */
extern void* _ZTVN6webrtc17PushSincResamplerE;

/* Symbol: _ZNK6webrtc20EchoCancellationImpl29is_drift_compensation_enabledEv */
/* Demangled: webrtc::EchoCancellationImpl::is_drift_compensation_enabled() const */
int _ZNK6webrtc20EchoCancellationImpl29is_drift_compensation_enabledEv(void);

/* Symbol: rdft_wk3ri_first */
/* Demangled: rdft_wk3ri_first */
extern void* rdft_wk3ri_first;

/* Symbol: _ZN6webrtc9audioproc4Test27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Test::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc4Test27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl14enable_metricsEb */
/* Demangled: webrtc::EchoCancellationImpl::enable_metrics(bool) */
int _ZN6webrtc20EchoCancellationImpl14enable_metricsEb(void);

/* Symbol: WebRtcIsac_kQKltModelCdf */
/* Demangled: WebRtcIsac_kQKltModelCdf */
extern void* WebRtcIsac_kQKltModelCdf;

/* Symbol: _ZN6webrtc7WPDNodeD1Ev */
/* Demangled: webrtc::WPDNode::~WPDNode() */
int _ZN6webrtc7WPDNodeD1Ev(void);

/* Symbol: _ZN6webrtc9audioproc4Test5ClearEv */
/* Demangled: webrtc::audioproc::Test::Clear() */
int _ZN6webrtc9audioproc4Test5ClearEv(void);

/* Symbol: WebRtc_set_history_size */
/* Demangled: WebRtc_set_history_size */
int WebRtc_set_history_size(void);

/* Symbol: WebRtcIsac_EncLogisticMulti2 */
/* Demangled: WebRtcIsac_EncLogisticMulti2 */
int WebRtcIsac_EncLogisticMulti2(void);

/* Symbol: WebRtcNsx_SynthesisUpdate */
/* Demangled: WebRtcNsx_SynthesisUpdate */
extern void* WebRtcNsx_SynthesisUpdate;

/* Symbol: WebRtcSpl_MaxAbsValueW16C */
/* Demangled: WebRtcSpl_MaxAbsValueW16C */
int WebRtcSpl_MaxAbsValueW16C(void);

/* Symbol: _ZN6webrtc7WPDTreeC1EjPKfS2_ji */
/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
int _ZN6webrtc7WPDTreeC1EjPKfS2_ji(void);

/* Symbol: _ZN6webrtc9audioproc5EventD1Ev */
/* Demangled: webrtc::audioproc::Event::~Event() */
int _ZN6webrtc9audioproc5EventD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb */
/* Demangled: webrtc::AudioProcessingImpl::set_output_will_be_muted(bool) */
int _ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb(void);

/* Symbol: _ZN3rtc10SystemInfo12GetCpuVendorEv */
/* Demangled: rtc::SystemInfo::GetCpuVendor() */
int _ZN3rtc10SystemInfo12GetCpuVendorEv(void);

/* Symbol: rdft_wk3i */
/* Demangled: rdft_wk3i */
extern void* rdft_wk3i;

/* Symbol: WebRtcIsac_kQPitchLagCdfSizeHi */
/* Demangled: WebRtcIsac_kQPitchLagCdfSizeHi */
extern void* WebRtcIsac_kQPitchLagCdfSizeHi;

/* Symbol: WebRtcIsac_Assign */
/* Demangled: WebRtcIsac_Assign */
int WebRtcIsac_Assign(void);

/* Symbol: _ZN6webrtc11RWLockPosixC2Ev */
/* Demangled: webrtc::RWLockPosix::RWLockPosix() */
int _ZN6webrtc11RWLockPosixC2Ev(void);

/* Symbol: WebRtcSpl_DownsampleBy2 */
/* Demangled: WebRtcSpl_DownsampleBy2 */
int WebRtcSpl_DownsampleBy2(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBankC1Ej */
/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank(unsigned int) */
int _ZN6webrtc19ThreeBandFilterBankC1Ej(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer17InitInterfCovMatsEv */
/* Demangled: webrtc::NonlinearBeamformer::InitInterfCovMats() */
int _ZN6webrtc19NonlinearBeamformer17InitInterfCovMatsEv(void);

/* Symbol: WebRtcNsx_NoiseEstimation */
/* Demangled: WebRtcNsx_NoiseEstimation */
extern void* WebRtcNsx_NoiseEstimation;

/* Symbol: _ZThn4_NK6webrtc20EchoCancellationImpl13DestroyHandleEPv */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::DestroyHandle(void*) const */
int _ZThn4_NK6webrtc20EchoCancellationImpl13DestroyHandleEPv(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperE */
/* Demangled: webrtc::ConditionVariablePosix::SleepCS(webrtc::CriticalSectionWrapper&) */
int _ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperE(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_Frame::MergeFrom(webrtc::audioproc::Test_Frame const&) */
int _ZN6webrtc9audioproc10Test_Frame9MergeFromERKS1_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16WriteInitMessageEv */
/* Demangled: webrtc::AudioProcessingImpl::WriteInitMessage() */
int _ZN6webrtc19AudioProcessingImpl16WriteInitMessageEv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15voice_detectionEv */
/* Demangled: webrtc::AudioProcessingImpl::voice_detection() const */
int _ZNK6webrtc19AudioProcessingImpl15voice_detectionEv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv */
/* Demangled: webrtc::AudioProcessingImpl::proc_sample_rate_hz() const */
int _ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv(void);

/* Symbol: WebRtcAgc_VirtualMic */
/* Demangled: WebRtcAgc_VirtualMic */
int WebRtcAgc_VirtualMic(void);

/* Symbol: _ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE */
/* Demangled: webrtc::AudioBuffer::CopyFrom(float const* const*, webrtc::StreamConfig const&) */
int _ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl24is_delay_logging_enabledEv */
/* Demangled: webrtc::EchoCancellationImpl::is_delay_logging_enabled() const */
int _ZNK6webrtc20EchoCancellationImpl24is_delay_logging_enabledEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplD1Ev */
/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
int _ZN6webrtc21EchoControlMobileImplD1Ev(void);

/* Symbol: WebRtcSpl_MemSetW16 */
/* Demangled: WebRtcSpl_MemSetW16 */
int WebRtcSpl_MemSetW16(void);

/* Symbol: _ZN6webrtc5Trace12SetTraceFileEPKcb */
/* Demangled: webrtc::Trace::SetTraceFile(char const*, bool) */
int _ZN6webrtc5Trace12SetTraceFileEPKcb(void);

/* Symbol: _ZTVN6webrtc9audioproc17Test_DelayMetricsE */
/* Demangled: vtable for webrtc::audioproc::Test_DelayMetrics */
extern void* _ZTVN6webrtc9audioproc17Test_DelayMetricsE;

/* Symbol: _ZN6webrtc15GainControlImpl14enable_limiterEb */
/* Demangled: webrtc::GainControlImpl::enable_limiter(bool) */
int _ZN6webrtc15GainControlImpl14enable_limiterEb(void);

/* Symbol: _ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::LogToDebug(rtc::LoggingSeverity) */
int _ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE(void);

/* Symbol: _ZN6webrtc9audioproc10Test_FrameD0Ev */
/* Demangled: webrtc::audioproc::Test_Frame::~Test_Frame() */
int _ZN6webrtc9audioproc10Test_FrameD0Ev(void);

/* Symbol: WebRtcIsac_EncoderInit */
/* Demangled: WebRtcIsac_EncoderInit */
int WebRtcIsac_EncoderInit(void);

/* Symbol: _ZN6webrtc15FileWrapperImplC2Ev */
/* Demangled: webrtc::FileWrapperImpl::FileWrapperImpl() */
int _ZN6webrtc15FileWrapperImplC2Ev(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl10GetMetricsEPNS_16EchoCancellation7MetricsE */
/* Demangled: webrtc::EchoCancellationImpl::GetMetrics(webrtc::EchoCancellation::Metrics*) */
int _ZN6webrtc20EchoCancellationImpl10GetMetricsEPNS_16EchoCancellation7MetricsE(void);

/* Symbol: rdft_wk3r */
/* Demangled: rdft_wk3r */
extern void* rdft_wk3r;

/* Symbol: WebRtcAgc_CalculateGainTable */
/* Demangled: WebRtcAgc_CalculateGainTable */
int WebRtcAgc_CalculateGainTable(void);

/* Symbol: _ZNK6webrtc11AudioBuffer20split_channels_constENS_4BandE */
/* Demangled: webrtc::AudioBuffer::split_channels_const(webrtc::Band) const */
int _ZNK6webrtc11AudioBuffer20split_channels_constENS_4BandE(void);

/* Symbol: _ZN6webrtc15AudioProcessing22kMaxNativeSampleRateHzE */
/* Demangled: webrtc::AudioProcessing::kMaxNativeSampleRateHz */
extern void* _ZN6webrtc15AudioProcessing22kMaxNativeSampleRateHzE;

/* Symbol: _ZN6webrtc19AudioProcessingImpl26ProcessReverseStreamLockedEv */
/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStreamLocked() */
int _ZN6webrtc19AudioProcessingImpl26ProcessReverseStreamLockedEv(void);

/* Symbol: WebRtcIsac_GetDownlinkBandwidth */
/* Demangled: WebRtcIsac_GetDownlinkBandwidth */
int WebRtcIsac_GetDownlinkBandwidth(void);

/* Symbol: WebRtcSpl_MemCpyReversedOrder */
/* Demangled: WebRtcSpl_MemCpyReversedOrder */
int WebRtcSpl_MemCpyReversedOrder(void);

/* Symbol: _ZN6webrtc10TracePosixC2Ev */
/* Demangled: webrtc::TracePosix::TracePosix() */
int _ZN6webrtc10TracePosixC2Ev(void);

/* Symbol: WebRtcAec_GetDelayMetricsCore */
/* Demangled: WebRtcAec_GetDelayMetricsCore */
int WebRtcAec_GetDelayMetricsCore(void);

/* Symbol: _ZN6webrtc3Agc14AnalyzePreprocEPKsj */
/* Demangled: webrtc::Agc::AnalyzePreproc(short const*, unsigned int) */
int _ZN6webrtc3Agc14AnalyzePreprocEPKsj(void);

/* Symbol: _ZN6webrtc10LogMessageC1EPKciNS_15LoggingSeverityE */
/* Demangled: webrtc::LogMessage::LogMessage(char const*, int, webrtc::LoggingSeverity) */
int _ZN6webrtc10LogMessageC1EPKciNS_15LoggingSeverityE(void);

/* Symbol: _ZN3rtc5Event3SetEv */
/* Demangled: rtc::Event::Set() */
int _ZN3rtc5Event3SetEv(void);

/* Symbol: WebRtcIsac_kQKltCdfShape */
/* Demangled: WebRtcIsac_kQKltCdfShape */
extern void* WebRtcIsac_kQKltCdfShape;

/* Symbol: rdft_wk3ri_second */
/* Demangled: rdft_wk3ri_second */
extern void* rdft_wk3ri_second;

/* Symbol: rftfsub_128 */
/* Demangled: rftfsub_128 */
extern void* rftfsub_128;

/* Symbol: _ZN6webrtc19NonlinearBeamformer12ProcessChunkERKNS_13ChannelBufferIfEEPS2_ */
/* Demangled: webrtc::NonlinearBeamformer::ProcessChunk(webrtc::ChannelBuffer<float> const&, webrtc::ChannelBuffer<float>*) */
int _ZN6webrtc19NonlinearBeamformer12ProcessChunkERKNS_13ChannelBufferIfEEPS2_(void);

/* Symbol: _ZN6webrtc11RWLockPosix6CreateEv */
/* Demangled: webrtc::RWLockPosix::Create() */
int _ZN6webrtc11RWLockPosix6CreateEv(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPsij */
/* Demangled: webrtc::AgcManagerDirect::AnalyzePreProcess(short*, int, unsigned int) */
int _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPsij(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl21MaybeUpdateHistogramsEv */
/* Demangled: webrtc::AudioProcessingImpl::MaybeUpdateHistograms() */
int _ZN6webrtc19AudioProcessingImpl21MaybeUpdateHistogramsEv(void);

/* Symbol: _ZN6webrtc8RMSLevelC2Ev */
/* Demangled: webrtc::RMSLevel::RMSLevel() */
int _ZN6webrtc8RMSLevelC2Ev(void);

/* Symbol: WebRtcVad_Free */
/* Demangled: WebRtcVad_Free */
int WebRtcVad_Free(void);

/* Symbol: _ZN3rtc14PlatformThreadD1Ev */
/* Demangled: rtc::PlatformThread::~PlatformThread() */
int _ZN3rtc14PlatformThreadD1Ev(void);

/* Symbol: WebRtcSpl_MaxValueW16 */
/* Demangled: WebRtcSpl_MaxValueW16 */
extern void* WebRtcSpl_MaxValueW16;

/* Symbol: _ZN6webrtc5Trace18kTimestampPositionE */
/* Demangled: webrtc::Trace::kTimestampPosition */
extern void* _ZN6webrtc5Trace18kTimestampPositionE;

/* Symbol: cftbsub_128 */
/* Demangled: cftbsub_128 */
extern void* cftbsub_128;

/* Symbol: _ZN3rtc25hex_decode_with_delimiterEPcjPKcjc */
/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, char const*, unsigned int, char) */
int _ZN3rtc25hex_decode_with_delimiterEPcjPKcjc(void);

/* Symbol: _ZN6webrtc17PushSincResampler8ResampleEPKsjPsj */
/* Demangled: webrtc::PushSincResampler::Resample(short const*, unsigned int, short*, unsigned int) */
int _ZN6webrtc17PushSincResampler8ResampleEPKsjPsj(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc5EventEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Event>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc5EventEEEvPv(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::NoiseSuppressionImpl::AnalyzeCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc20NoiseSuppressionImpl19AnalyzeCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc8RMSLevel7ProcessEPKsj */
/* Demangled: webrtc::RMSLevel::Process(short const*, unsigned int) */
int _ZN6webrtc8RMSLevel7ProcessEPKsj(void);

/* Symbol: WebRtcIsac_kTransform2Float */
/* Demangled: WebRtcIsac_kTransform2Float */
extern void* WebRtcIsac_kTransform2Float;

/* Symbol: _ZTVN6webrtc20CriticalSectionPosixE */
/* Demangled: vtable for webrtc::CriticalSectionPosix */
extern void* _ZTVN6webrtc20CriticalSectionPosixE;

/* Symbol: WebRtcVad_CalcVad8khz */
/* Demangled: WebRtcVad_CalcVad8khz */
int WebRtcVad_CalcVad8khz(void);

/* Symbol: _ZN6webrtc9audioproc6ConfigD1Ev */
/* Demangled: webrtc::audioproc::Config::~Config() */
int _ZN6webrtc9audioproc6ConfigD1Ev(void);

/* Symbol: _ZNK6webrtc15IFChannelBuffer10ibuf_constEv */
/* Demangled: webrtc::IFChannelBuffer::ibuf_const() const */
int _ZNK6webrtc15IFChannelBuffer10ibuf_constEv(void);

/* Symbol: _ZN6webrtc15GainControlImpl10InitializeEv */
/* Demangled: webrtc::GainControlImpl::Initialize() */
int _ZN6webrtc15GainControlImpl10InitializeEv(void);

/* Symbol: _ZNK6webrtc15AudioRingBuffer20WriteFramesAvailableEv */
/* Demangled: webrtc::AudioRingBuffer::WriteFramesAvailable() const */
int _ZNK6webrtc15AudioRingBuffer20WriteFramesAvailableEv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15delay_offset_msEv */
/* Demangled: webrtc::AudioProcessingImpl::delay_offset_ms() const */
int _ZNK6webrtc19AudioProcessingImpl15delay_offset_msEv(void);

/* Symbol: WebRtcIsac_EncodePitchLag */
/* Demangled: WebRtcIsac_EncodePitchLag */
int WebRtcIsac_EncodePitchLag(void);

/* Symbol: WebRtcIsac_SetDecSampRate */
/* Demangled: WebRtcIsac_SetDecSampRate */
int WebRtcIsac_SetDecSampRate(void);

/* Symbol: WebRtcNsx_Denormalize */
/* Demangled: WebRtcNsx_Denormalize */
extern void* WebRtcNsx_Denormalize;

/* Symbol: _ZN6webrtc16AgcManagerDirect19CheckVolumeAndResetEv */
/* Demangled: webrtc::AgcManagerDirect::CheckVolumeAndReset() */
int _ZN6webrtc16AgcManagerDirect19CheckVolumeAndResetEv(void);

/* Symbol: WebRtcAgc_SpeakerInactiveCtrl */
/* Demangled: WebRtcAgc_SpeakerInactiveCtrl */
int WebRtcAgc_SpeakerInactiveCtrl(void);

/* Symbol: _ZTVN6webrtc20GainControlForNewAgcE */
/* Demangled: vtable for webrtc::GainControlForNewAgc */
extern void* _ZTVN6webrtc20GainControlForNewAgcE;

/* Symbol: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_ */
/* Demangled: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_ */
int _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_(void);

/* Symbol: _ZN3rtc5EventD1Ev */
/* Demangled: rtc::Event::~Event() */
int _ZN3rtc5EventD1Ev(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj(void);

/* Symbol: aec_rdft_forward_128 */
/* Demangled: aec_rdft_forward_128 */
int aec_rdft_forward_128(void);

/* Symbol: WebRtcIsac_EncodeStoredDataUb */
/* Demangled: WebRtcIsac_EncodeStoredDataUb */
int WebRtcIsac_EncodeStoredDataUb(void);

/* Symbol: _ZN6webrtc9audioproc4Init16default_instanceEv */
/* Demangled: webrtc::audioproc::Init::default_instance() */
int _ZN6webrtc9audioproc4Init16default_instanceEv(void);

/* Symbol: _ZTVN6webrtc11GainControlE */
/* Demangled: vtable for webrtc::GainControl */
extern void* _ZTVN6webrtc11GainControlE;

/* Symbol: WebRtcIsac_NormLatticeFilterAr */
/* Demangled: WebRtcIsac_NormLatticeFilterAr */
int WebRtcIsac_NormLatticeFilterAr(void);

/* Symbol: WebRtcIsac_kQArRcLevelsPtr */
/* Demangled: WebRtcIsac_kQArRcLevelsPtr */
extern void* WebRtcIsac_kQArRcLevelsPtr;

/* Symbol: WebRtcNsx_FeatureParameterExtraction */
/* Demangled: WebRtcNsx_FeatureParameterExtraction */
int WebRtcNsx_FeatureParameterExtraction(void);

/* Symbol: WebRtcIsac_InitRateModel */
/* Demangled: WebRtcIsac_InitRateModel */
int WebRtcIsac_InitRateModel(void);

/* Symbol: WebRtcIsac_SetMaxPayloadSize */
/* Demangled: WebRtcIsac_SetMaxPayloadSize */
int WebRtcIsac_SetMaxPayloadSize(void);

/* Symbol: WebRtcSpl_AffineTransformVector */
/* Demangled: WebRtcSpl_AffineTransformVector */
int WebRtcSpl_AffineTransformVector(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStreamD2Ev */
/* Demangled: webrtc::audioproc::ReverseStream::~ReverseStream() */
int _ZN6webrtc9audioproc13ReverseStreamD2Ev(void);

/* Symbol: _ZNK6webrtc9audioproc16Test_EchoMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc16Test_EchoMetrics24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25UpdateHistogramsOnCallEndEv */
/* Demangled: webrtc::AudioProcessingImpl::UpdateHistogramsOnCallEnd() */
int _ZN6webrtc19AudioProcessingImpl25UpdateHistogramsOnCallEndEv(void);

/* Symbol: _ZN6webrtc15GainControlImplD0Ev */
/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
int _ZN6webrtc15GainControlImplD0Ev(void);

/* Symbol: _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTVN6webrtc14AudioConverterE */
/* Demangled: vtable for webrtc::AudioConverter */
extern void* _ZTVN6webrtc14AudioConverterE;

/* Symbol: WebRtcIsac_kQPitchLagCdf3Hi */
/* Demangled: WebRtcIsac_kQPitchLagCdf3Hi */
extern void* WebRtcIsac_kQPitchLagCdf3Hi;

/* Symbol: _ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperEm */
/* Demangled: webrtc::ConditionVariablePosix::SleepCS(webrtc::CriticalSectionWrapper&, unsigned long) */
int _ZN6webrtc22ConditionVariablePosix7SleepCSERNS_22CriticalSectionWrapperEm(void);

/* Symbol: _ZN6webrtc11AudioBuffer6data_fEv */
/* Demangled: webrtc::AudioBuffer::data_f() */
int _ZN6webrtc11AudioBuffer6data_fEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf */
/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl24InitializeVoiceDetectionEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeVoiceDetection() */
int _ZN6webrtc19AudioProcessingImpl24InitializeVoiceDetectionEv(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArray11BlockedStepEPKNSt3__17complexIfEEb */
/* Demangled: webrtc::intelligibility::VarianceArray::BlockedStep(std::__1::complex<float> const*, bool) */
int _ZN6webrtc15intelligibility13VarianceArray11BlockedStepEPKNSt3__17complexIfEEb(void);

/* Symbol: WebRtcAec_get_echo_status */
/* Demangled: WebRtcAec_get_echo_status */
int WebRtcAec_get_echo_status(void);

/* Symbol: WebRtc_InitBuffer */
/* Demangled: WebRtc_InitBuffer */
int WebRtc_InitBuffer(void);

/* Symbol: WebRtcIsac_GetUplinkBw */
/* Demangled: WebRtcIsac_GetUplinkBw */
int WebRtcIsac_GetUplinkBw(void);

/* Symbol: _ZN6webrtc8Atomic32C1Ei */
/* Demangled: webrtc::Atomic32::Atomic32(int) */
int _ZN6webrtc8Atomic32C1Ei(void);

/* Symbol: _ZNK6webrtc9TraceImpl14AddModuleAndIdEPcNS_11TraceModuleEi */
/* Demangled: webrtc::TraceImpl::AddModuleAndId(char*, webrtc::TraceModule, int) const */
int _ZNK6webrtc9TraceImpl14AddModuleAndIdEPcNS_11TraceModuleEi(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv */
/* Demangled: webrtc::EchoControlMobileImpl::is_comfort_noise_enabled() const */
int _ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv(void);

/* Symbol: _ZN3rtc10LogMessage20UpdateMinLogSeverityEv */
/* Demangled: rtc::LogMessage::UpdateMinLogSeverity() */
int _ZN3rtc10LogMessage20UpdateMinLogSeverityEv(void);

/* Symbol: WebRtcIsac_Control */
/* Demangled: WebRtcIsac_Control */
int WebRtcIsac_Control(void);

/* Symbol: WebRtcAgc_ZeroCtrl */
/* Demangled: WebRtcAgc_ZeroCtrl */
int WebRtcAgc_ZeroCtrl(void);

/* Symbol: _ZN6webrtc14PoleZeroFilter6FilterEPKsjPf */
/* Demangled: webrtc::PoleZeroFilter::Filter(short const*, unsigned int, float*) */
int _ZN6webrtc14PoleZeroFilter6FilterEPKsjPf(void);

/* Symbol: _ZN3rtc15CriticalSectionC2Ev */
/* Demangled: rtc::CriticalSection::CriticalSection() */
int _ZN3rtc15CriticalSectionC2Ev(void);

/* Symbol: WebRtcSpl_ResetResample8khzTo22khz */
/* Demangled: WebRtcSpl_ResetResample8khzTo22khz */
int WebRtcSpl_ResetResample8khzTo22khz(void);

/* Symbol: _ZN6webrtc8Atomic32D2Ev */
/* Demangled: webrtc::Atomic32::~Atomic32() */
int _ZN6webrtc8Atomic32D2Ev(void);

/* Symbol: WebRtcAec_WindowData */
/* Demangled: WebRtcAec_WindowData */
extern void* WebRtcAec_WindowData;

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4InitEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Init* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Init>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc4InitEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZNK6webrtc9audioproc10Test_Frame13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Test_Frame::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc10Test_Frame13SetCachedSizeEi(void);

/* Symbol: _ZN6webrtc11AudioBuffer16DeinterleaveFromEPNS_10AudioFrameE */
/* Demangled: webrtc::AudioBuffer::DeinterleaveFrom(webrtc::AudioFrame*) */
int _ZN6webrtc11AudioBuffer16DeinterleaveFromEPNS_10AudioFrameE(void);

/* Symbol: _ZN6webrtc15AudioProcessing21kNumNativeSampleRatesE */
/* Demangled: webrtc::AudioProcessing::kNumNativeSampleRates */
extern void* _ZN6webrtc15AudioProcessing21kNumNativeSampleRatesE;

/* Symbol: WebRtcSpl_ReflCoefToLpc */
/* Demangled: WebRtcSpl_ReflCoefToLpc */
int WebRtcSpl_ReflCoefToLpc(void);

/* Symbol: _ZN6webrtc18HighPassFilterImplD0Ev */
/* Demangled: webrtc::HighPassFilterImpl::~HighPassFilterImpl() */
int _ZN6webrtc18HighPassFilterImplD0Ev(void);

/* Symbol: _Z13Dbfs2Loudnessd */
/* Demangled: Dbfs2Loudness(double) */
int _Z13Dbfs2Loudnessd(void);

/* Symbol: _ZNK6webrtc9audioproc4Test11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Test::GetTypeName() const */
int _ZNK6webrtc9audioproc4Test11GetTypeNameEv(void);

/* Symbol: WebRtcIsac_kQKltOffsetGain */
/* Demangled: WebRtcIsac_kQKltOffsetGain */
extern void* WebRtcIsac_kQKltOffsetGain;

/* Symbol: WebRtcSpl_Resample48khzTo16khz */
/* Demangled: WebRtcSpl_Resample48khzTo16khz */
int WebRtcSpl_Resample48khzTo16khz(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10OutputDataEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::OutputData* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::OutputData>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc10OutputDataEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN6webrtc9audioproc10OutputData16default_instanceEv */
/* Demangled: webrtc::audioproc::OutputData::default_instance() */
int _ZN6webrtc9audioproc10OutputData16default_instanceEv(void);

/* Symbol: _ZN6webrtc19ProcessingComponent9ConfigureEv */
/* Demangled: webrtc::ProcessingComponent::Configure() */
int _ZN6webrtc19ProcessingComponent9ConfigureEv(void);

/* Symbol: WebRtcIsac_UpdateBwEstimate */
/* Demangled: WebRtcIsac_UpdateBwEstimate */
int WebRtcIsac_UpdateBwEstimate(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer10ApplyMasksEPKPKNSt3__17complexIfEEPKPS3_ */
/* Demangled: webrtc::NonlinearBeamformer::ApplyMasks(std::__1::complex<float> const* const*, std::__1::complex<float>* const*) */
int _ZN6webrtc19NonlinearBeamformer10ApplyMasksEPKPKNSt3__17complexIfEEPKPS3_(void);

/* Symbol: _ZN6webrtc15intelligibility12UpdateFactorEfff */
/* Demangled: webrtc::intelligibility::UpdateFactor(float, float, float) */
int _ZN6webrtc15intelligibility12UpdateFactorEfff(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf2Mid */
/* Demangled: WebRtcIsac_kQPitchLagCdf2Mid */
extern void* WebRtcIsac_kQPitchLagCdf2Mid;

/* Symbol: WebRtc_FreeBinaryDelayEstimator */
/* Demangled: WebRtc_FreeBinaryDelayEstimator */
int WebRtc_FreeBinaryDelayEstimator(void);

/* Symbol: _ZTVN6webrtc15LappedTransform10BlockThunkE */
/* Demangled: vtable for webrtc::LappedTransform::BlockThunk */
extern void* _ZTVN6webrtc15LappedTransform10BlockThunkE;

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer13CreateErbBankEv */
/* Demangled: webrtc::IntelligibilityEnhancer::CreateErbBank() */
int _ZN6webrtc23IntelligibilityEnhancer13CreateErbBankEv(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStreamC1Ev */
/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream() */
int _ZN6webrtc9audioproc13ReverseStreamC1Ev(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics5ClearEv */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::Clear() */
int _ZN6webrtc9audioproc16Test_EchoMetrics5ClearEv(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl10InitializeEv */
/* Demangled: webrtc::EchoCancellationImpl::Initialize() */
int _ZN6webrtc20EchoCancellationImpl10InitializeEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformerC2ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE */
/* Demangled: webrtc::NonlinearBeamformer::NonlinearBeamformer(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&, webrtc::SphericalPoint<float>) */
int _ZN6webrtc19NonlinearBeamformerC2ERKNSt3__16vectorINS_14CartesianPointIfEENS1_9allocatorIS4_EEEENS_14SphericalPointIfEE(void);

/* Symbol: _ZTVN6webrtc23IntelligibilityEnhancer17TransformCallbackE */
/* Demangled: vtable for webrtc::IntelligibilityEnhancer::TransformCallback */
extern void* _ZTVN6webrtc23IntelligibilityEnhancer17TransformCallbackE;

/* Symbol: WebRtcIsac_kQPitchLagCdf2Lo */
/* Demangled: WebRtcIsac_kQPitchLagCdf2Lo */
extern void* WebRtcIsac_kQPitchLagCdf2Lo;

/* Symbol: _ZN3rtc14PlatformThread11StartThreadEPv */
/* Demangled: rtc::PlatformThread::StartThread(void*) */
int _ZN3rtc14PlatformThread11StartThreadEPv(void);

/* Symbol: WebRtcIsac_kIndexLowerLimitGain */
/* Demangled: WebRtcIsac_kIndexLowerLimitGain */
extern void* WebRtcIsac_kIndexLowerLimitGain;

/* Symbol: _ZThn4_N6webrtc15FileWrapperImplD1Ev */
/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::~FileWrapperImpl() */
int _ZThn4_N6webrtc15FileWrapperImplD1Ev(void);

/* Symbol: _ZTVN6webrtc11RWLockPosixE */
/* Demangled: vtable for webrtc::RWLockPosix */
extern void* _ZTVN6webrtc11RWLockPosixE;

/* Symbol: _ZN6webrtc9audioproc32_ReverseStream_default_instance_E */
/* Demangled: webrtc::audioproc::_ReverseStream_default_instance_ */
extern void* _ZN6webrtc9audioproc32_ReverseStream_default_instance_E;

/* Symbol: _ZN6webrtc15IFChannelBuffer4ibufEv */
/* Demangled: webrtc::IFChannelBuffer::ibuf() */
int _ZN6webrtc15IFChannelBuffer4ibufEv(void);

/* Symbol: _ZN3rtc9CritScopeC1EPNS_15CriticalSectionE */
/* Demangled: rtc::CritScope::CritScope(rtc::CriticalSection*) */
int _ZN3rtc9CritScopeC1EPNS_15CriticalSectionE(void);

/* Symbol: _ZN6webrtc9Resampler13ResetIfNeededEiij */
/* Demangled: webrtc::Resampler::ResetIfNeeded(int, int, unsigned int) */
int _ZN6webrtc9Resampler13ResetIfNeededEiij(void);

/* Symbol: WebRtcIsac_kQArRc3Levels */
/* Demangled: WebRtcIsac_kQArRc3Levels */
extern void* WebRtcIsac_kQArRc3Levels;

/* Symbol: _ZThn4_NK6webrtc20EchoCancellationImpl12CreateHandleEv */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::CreateHandle() const */
int _ZThn4_NK6webrtc20EchoCancellationImpl12CreateHandleEv(void);

/* Symbol: _ZN6webrtc14AudioConverterC2Ev */
/* Demangled: webrtc::AudioConverter::AudioConverter() */
int _ZN6webrtc14AudioConverterC2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl18WriteConfigMessageEb */
/* Demangled: webrtc::AudioProcessingImpl::WriteConfigMessage(bool) */
int _ZN6webrtc19AudioProcessingImpl18WriteConfigMessageEb(void);

/* Symbol: WebRtcIsac_kQKltCdfPtrShape */
/* Demangled: WebRtcIsac_kQKltCdfPtrShape */
extern void* WebRtcIsac_kQKltCdfPtrShape;

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetricsD0Ev */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::~Test_EchoMetrics() */
int _ZN6webrtc9audioproc16Test_EchoMetricsD0Ev(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer17ProcessNoiseBlockEPKNSt3__17complexIfEEPS3_ */
/* Demangled: webrtc::IntelligibilityEnhancer::ProcessNoiseBlock(std::__1::complex<float> const*, std::__1::complex<float>*) */
int _ZN6webrtc23IntelligibilityEnhancer17ProcessNoiseBlockEPKNSt3__17complexIfEEPS3_(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl6RewindEv */
/* Demangled: webrtc::FileWrapperImpl::Rewind() */
int _ZN6webrtc15FileWrapperImpl6RewindEv(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic16default_instanceEv */
/* Demangled: webrtc::audioproc::Test_Statistic::default_instance() */
int _ZN6webrtc9audioproc14Test_Statistic16default_instanceEv(void);

/* Symbol: _ZNK6webrtc11AudioBuffer12num_channelsEv */
/* Demangled: webrtc::AudioBuffer::num_channels() const */
int _ZNK6webrtc11AudioBuffer12num_channelsEv(void);

/* Symbol: _ZThn4_NK6webrtc21EchoControlMobileImpl16InitializeHandleEPv */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::InitializeHandle(void*) const */
int _ZThn4_NK6webrtc21EchoControlMobileImpl16InitializeHandleEPv(void);

/* Symbol: _ZN6webrtc9audioproc33_Test_Statistic_default_instance_E */
/* Demangled: webrtc::audioproc::_Test_Statistic_default_instance_ */
extern void* _ZN6webrtc9audioproc33_Test_Statistic_default_instance_E;

/* Symbol: _ZN6webrtc11AudioBuffer10channels_fEv */
/* Demangled: webrtc::AudioBuffer::channels_f() */
int _ZN6webrtc11AudioBuffer10channels_fEv(void);

/* Symbol: WebRtcIsacBw_GetBandwidthInfo */
/* Demangled: WebRtcIsacBw_GetBandwidthInfo */
int WebRtcIsacBw_GetBandwidthInfo(void);

/* Symbol: _ZNSt3__16vectorIPhNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<unsigned char*, std::__1::allocator<unsigned char*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPhNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc9audioproc14Test_StatisticC2Ev */
/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic() */
int _ZN6webrtc9audioproc14Test_StatisticC2Ev(void);

/* Symbol: WebRtcIsac_kQInitIndexLagMid */
/* Demangled: WebRtcIsac_kQInitIndexLagMid */
extern void* WebRtcIsac_kQInitIndexLagMid;

/* Symbol: _ZN6webrtc20CriticalSectionPosixC2Ev */
/* Demangled: webrtc::CriticalSectionPosix::CriticalSectionPosix() */
int _ZN6webrtc20CriticalSectionPosixC2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE */
/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&) */
int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE(void);

/* Symbol: WebRtcAec_GetDelayMetrics */
/* Demangled: WebRtcAec_GetDelayMetrics */
int WebRtcAec_GetDelayMetrics(void);

/* Symbol: _ZN6webrtc9audioproc6Config16default_instanceEv */
/* Demangled: webrtc::audioproc::Config::default_instance() */
int _ZN6webrtc9audioproc6Config16default_instanceEv(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImplD0Ev */
/* Demangled: webrtc::VoiceDetectionImpl::~VoiceDetectionImpl() */
int _ZN6webrtc18VoiceDetectionImplD0Ev(void);

/* Symbol: _ZN3rtc14PlatformThread5StartEv */
/* Demangled: rtc::PlatformThread::Start() */
int _ZN3rtc14PlatformThread5StartEv(void);

/* Symbol: _ZN6webrtc7BlockerC1EjjjjPKfjPNS_15BlockerCallbackE */
/* Demangled: webrtc::Blocker::Blocker(unsigned int, unsigned int, unsigned int, unsigned int, float const*, unsigned int, webrtc::BlockerCallback*) */
int _ZN6webrtc7BlockerC1EjjjjPKfjPNS_15BlockerCallbackE(void);

/* Symbol: WebRtcIsac_kFrameLengthCdf */
/* Demangled: WebRtcIsac_kFrameLengthCdf */
extern void* WebRtcIsac_kFrameLengthCdf;

/* Symbol: WebRtcNsx_DataAnalysis */
/* Demangled: WebRtcNsx_DataAnalysis */
int WebRtcNsx_DataAnalysis(void);

/* Symbol: WebRtcSpl_MinValueW32 */
/* Demangled: WebRtcSpl_MinValueW32 */
extern void* WebRtcSpl_MinValueW32;

/* Symbol: _ZN6webrtc19TransientSuppressor8SuppressEPfS1_S1_ */
/* Demangled: webrtc::TransientSuppressor::Suppress(float*, float*, float*) */
int _ZN6webrtc19TransientSuppressor8SuppressEPfS1_S1_(void);

/* Symbol: _ZN6webrtc9audioproc6Config21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Config::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc6Config21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl10InitializeEv */
/* Demangled: webrtc::EchoControlMobileImpl::Initialize() */
int _ZN6webrtc21EchoControlMobileImpl10InitializeEv(void);

/* Symbol: _ZN3rtc12FatalMessageD1Ev */
/* Demangled: rtc::FatalMessage::~FatalMessage() */
int _ZN3rtc12FatalMessageD1Ev(void);

/* Symbol: _ZThn4_NK6webrtc20EchoCancellationImpl14GetHandleErrorEPv */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::GetHandleError(void*) const */
int _ZThn4_NK6webrtc20EchoCancellationImpl14GetHandleErrorEPv(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArrayC2EjNS1_8StepTypeEjf */
/* Demangled: webrtc::intelligibility::VarianceArray::VarianceArray(unsigned int, webrtc::intelligibility::VarianceArray::StepType, unsigned int, float) */
int _ZN6webrtc15intelligibility13VarianceArrayC2EjNS1_8StepTypeEjf(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc17Test_DelayMetrics21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer19AnalyzeCaptureAudioEPKPfij */
/* Demangled: webrtc::IntelligibilityEnhancer::AnalyzeCaptureAudio(float* const*, int, unsigned int) */
int _ZN6webrtc23IntelligibilityEnhancer19AnalyzeCaptureAudioEPKPfij(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImplD1Ev */
/* Demangled: webrtc::LevelEstimatorImpl::~LevelEstimatorImpl() */
int _ZN6webrtc18LevelEstimatorImplD1Ev(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImplD2Ev */
/* Demangled: webrtc::NoiseSuppressionImpl::~NoiseSuppressionImpl() */
int _ZN6webrtc20NoiseSuppressionImplD2Ev(void);

/* Symbol: WebRtcIsac_InitBandwidthEstimator */
/* Demangled: WebRtcIsac_InitBandwidthEstimator */
int WebRtcIsac_InitBandwidthEstimator(void);

/* Symbol: WebRtc_last_delay */
/* Demangled: WebRtc_last_delay */
int WebRtc_last_delay(void);

/* Symbol: _ZN6webrtc13PitchBasedVadD1Ev */
/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadD1Ev(void);

/* Symbol: WebRtcAgc_set_config */
/* Demangled: WebRtcAgc_set_config */
int WebRtcAgc_set_config(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc13ReverseStreamEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::ReverseStream>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc13ReverseStreamEEEvPv(void);

/* Symbol: WebRtcIsac_RateAllocation */
/* Demangled: WebRtcIsac_RateAllocation */
int WebRtcIsac_RateAllocation(void);

/* Symbol: WebRtcIsac_kQPitchGainCdf */
/* Demangled: WebRtcIsac_kQPitchGainCdf */
extern void* WebRtcIsac_kQPitchGainCdf;

/* Symbol: _ZTVN6webrtc13SincResamplerE */
/* Demangled: vtable for webrtc::SincResampler */
extern void* _ZTVN6webrtc13SincResamplerE;

/* Symbol: WebRtc_CreateBuffer */
/* Demangled: WebRtc_CreateBuffer */
int WebRtc_CreateBuffer(void);

/* Symbol: _ZN6webrtc15intelligibility15AddDitherIfZeroEf */
/* Demangled: webrtc::intelligibility::AddDitherIfZero(float) */
int _ZN6webrtc15intelligibility15AddDitherIfZeroEf(void);

/* Symbol: WebRtcIsac_InitWeightingFilter */
/* Demangled: WebRtcIsac_InitWeightingFilter */
int WebRtcIsac_InitWeightingFilter(void);

/* Symbol: _ZN6webrtc9audioproc10OutputDataD2Ev */
/* Demangled: webrtc::audioproc::OutputData::~OutputData() */
int _ZN6webrtc9audioproc10OutputDataD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::CopyFrom(webrtc::audioproc::Test_EchoMetrics const&) */
int _ZN6webrtc9audioproc16Test_EchoMetrics8CopyFromERKS1_(void);

/* Symbol: _ZN3rtc26TimestampWrapAroundHandlerC2Ev */
/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
int _ZN3rtc26TimestampWrapAroundHandlerC2Ev(void);

/* Symbol: _ZN6webrtc9TraceImpl16SetTraceFileImplEPKcb */
/* Demangled: webrtc::TraceImpl::SetTraceFileImpl(char const*, bool) */
int _ZN6webrtc9TraceImpl16SetTraceFileImplEPKcb(void);

/* Symbol: WebRtcAec_kExtendedSmoothingCoefficients */
/* Demangled: WebRtcAec_kExtendedSmoothingCoefficients */
extern void* WebRtcAec_kExtendedSmoothingCoefficients;

/* Symbol: WebRtcVad_Create */
/* Demangled: WebRtcVad_Create */
int WebRtcVad_Create(void);

/* Symbol: _ZN6webrtc22GetArrayNormalIfExistsERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE */
/* Demangled: webrtc::GetArrayNormalIfExists(std::__1::vector<webrtc::CartesianPoint<float>, std::__1::allocator<webrtc::CartesianPoint<float> > > const&) */
int _ZN6webrtc22GetArrayNormalIfExistsERKNSt3__16vectorINS_14CartesianPointIfEENS0_9allocatorIS3_EEEE(void);

/* Symbol: WebRtcNsx_DataSynthesis */
/* Demangled: WebRtcNsx_DataSynthesis */
int WebRtcNsx_DataSynthesis(void);

/* Symbol: WebRtc_InitDelayEstimatorFarend */
/* Demangled: WebRtc_InitDelayEstimatorFarend */
int WebRtc_InitDelayEstimatorFarend(void);

/* Symbol: WebRtcAecm_CreateCore */
/* Demangled: WebRtcAecm_CreateCore */
int WebRtcAecm_CreateCore(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc7SortKeyIhEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<webrtc::SortKey<unsigned char>*, std::__1::allocator<webrtc::SortKey<unsigned char>*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPN6webrtc7SortKeyIhEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZNK6webrtc15FileWrapperImpl8FileNameEPcj */
/* Demangled: webrtc::FileWrapperImpl::FileName(char*, unsigned int) const */
int _ZNK6webrtc15FileWrapperImpl8FileNameEPcj(void);

/* Symbol: WebRtcIsac_PitchfilterPre_la */
/* Demangled: WebRtcIsac_PitchfilterPre_la */
int WebRtcIsac_PitchfilterPre_la(void);

/* Symbol: _ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<float, std::__1::allocator<float> >::__add_back_capacity() */
int _ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv(void);

/* Symbol: WebRtcAec_system_delay */
/* Demangled: WebRtcAec_system_delay */
int WebRtcAec_system_delay(void);

/* Symbol: WebRtc_WriteBuffer */
/* Demangled: WebRtc_WriteBuffer */
int WebRtc_WriteBuffer(void);

/* Symbol: WebRtcSpl_DivU32U16 */
/* Demangled: WebRtcSpl_DivU32U16 */
int WebRtcSpl_DivU32U16(void);

/* Symbol: _ZNK6webrtc9audioproc4Init13IsInitializedEv */
/* Demangled: webrtc::audioproc::Init::IsInitialized() const */
int _ZNK6webrtc9audioproc4Init13IsInitializedEv(void);

/* Symbol: _ZNK6webrtc9audioproc10Test_Frame12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Test_Frame::ByteSizeLong() const */
int _ZNK6webrtc9audioproc10Test_Frame12ByteSizeLongEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEPKNS_11AudioBufferE */
/* Demangled: webrtc::EchoControlMobileImpl::ProcessRenderAudio(webrtc::AudioBuffer const*) */
int _ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEPKNS_11AudioBufferE(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_13DelayAgnosticEEERKT_vE3def */
/* Demangled: guard variable for webrtc::DelayAgnostic const& webrtc::Config::default_value<webrtc::DelayAgnostic>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_13DelayAgnosticEEERKT_vE3def;

/* Symbol: WebRtc_InitBinaryDelayEstimatorFarend */
/* Demangled: WebRtc_InitBinaryDelayEstimatorFarend */
int WebRtc_InitBinaryDelayEstimatorFarend(void);

/* Symbol: _ZN6webrtc15LappedTransformC1EjjjPKfjjPNS0_8CallbackE */
/* Demangled: webrtc::LappedTransform::LappedTransform(unsigned int, unsigned int, unsigned int, float const*, unsigned int, unsigned int, webrtc::LappedTransform::Callback*) */
int _ZN6webrtc15LappedTransformC1EjjjPKfjjPNS0_8CallbackE(void);

/* Symbol: _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPtNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc13MovingMomentsD1Ev */
/* Demangled: webrtc::MovingMoments::~MovingMoments() */
int _ZN6webrtc13MovingMomentsD1Ev(void);

/* Symbol: _ZN6webrtc9Histogram26InsertNewestEntryAndUpdateEii */
/* Demangled: webrtc::Histogram::InsertNewestEntryAndUpdate(int, int) */
int _ZN6webrtc9Histogram26InsertNewestEntryAndUpdateEii(void);

/* Symbol: _ZN6webrtc9audioproc6StreamD0Ev */
/* Demangled: webrtc::audioproc::Stream::~Stream() */
int _ZN6webrtc9audioproc6StreamD0Ev(void);

/* Symbol: _ZNK6webrtc9audioproc17Test_DelayMetrics12ByteSizeLongEv */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::ByteSizeLong() const */
int _ZNK6webrtc9audioproc17Test_DelayMetrics12ByteSizeLongEv(void);

/* Symbol: _ZN6webrtc9audioproc4InitD1Ev */
/* Demangled: webrtc::audioproc::Init::~Init() */
int _ZN6webrtc9audioproc4InitD1Ev(void);

/* Symbol: _ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc10Test_FrameEE5MergeERKS5_PS5_ */
/* Demangled: google::protobuf::internal::GenericTypeHandler<webrtc::audioproc::Test_Frame>::Merge(webrtc::audioproc::Test_Frame const&, webrtc::audioproc::Test_Frame*) */
int _ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc10Test_FrameEE5MergeERKS5_PS5_(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15level_estimatorEv */
/* Demangled: webrtc::AudioProcessingImpl::level_estimator() const */
int _ZNK6webrtc19AudioProcessingImpl15level_estimatorEv(void);

/* Symbol: _ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_15IFChannelBufferEPS1_ */
/* Demangled: webrtc::SplittingFilter::TwoBandsAnalysis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
int _ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_15IFChannelBufferEPS1_(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancerC1Ev */
/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer() */
int _ZN6webrtc23IntelligibilityEnhancerC1Ev(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec0Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec0Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec0Ub12;

/* Symbol: _ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::EchoControlMobileImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: WebRtcSpl_UpBy2IntToShort */
/* Demangled: WebRtcSpl_UpBy2IntToShort */
int WebRtcSpl_UpBy2IntToShort(void);

/* Symbol: _ZN6webrtc13GetRightAlignEjj */
/* Demangled: webrtc::GetRightAlign(unsigned int, unsigned int) */
int _ZN6webrtc13GetRightAlignEjj(void);

/* Symbol: _ZN6webrtc11AudioBuffer10split_dataEv */
/* Demangled: webrtc::AudioBuffer::split_data() */
int _ZN6webrtc11AudioBuffer10split_dataEv(void);

/* Symbol: _ZN6webrtc18HighPassFilterImplC2EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::HighPassFilterImpl::HighPassFilterImpl(rtc::CriticalSection*) */
int _ZN6webrtc18HighPassFilterImplC2EPN3rtc15CriticalSectionE(void);

/* Symbol: _ZNSt3__16vectorIPvNS_9allocatorIS1_EEE8__appendEjRKS1_ */
/* Demangled: std::__1::vector<void*, std::__1::allocator<void*> >::__append(unsigned int, void* const&) */
int _ZNSt3__16vectorIPvNS_9allocatorIS1_EEE8__appendEjRKS1_(void);

/* Symbol: _ZN6webrtc10LogMessageC2EPKciNS_15LoggingSeverityE */
/* Demangled: webrtc::LogMessage::LogMessage(char const*, int, webrtc::LoggingSeverity) */
int _ZN6webrtc10LogMessageC2EPKciNS_15LoggingSeverityE(void);

/* Symbol: _ZN6webrtc19TransientSuppressorC2Ev */
/* Demangled: webrtc::TransientSuppressor::TransientSuppressor() */
int _ZN6webrtc19TransientSuppressorC2Ev(void);

/* Symbol: WebRtcAecm_InitCore */
/* Demangled: WebRtcAecm_InitCore */
int WebRtcAecm_InitCore(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_Statistic::CopyFrom(webrtc::audioproc::Test_Statistic const&) */
int _ZN6webrtc9audioproc14Test_Statistic8CopyFromERKS1_(void);

/* Symbol: _ZN3rtc10LogMessage13LogTimestampsEb */
/* Demangled: rtc::LogMessage::LogTimestamps(bool) */
int _ZN3rtc10LogMessage13LogTimestampsEb(void);

/* Symbol: _ZN6webrtc15intelligibility11GainApplierC1Ejf */
/* Demangled: webrtc::intelligibility::GainApplier::GainApplier(unsigned int, float) */
int _ZN6webrtc15intelligibility11GainApplierC1Ejf(void);

/* Symbol: WebRtcIsac_TranscodeLPCCoef */
/* Demangled: WebRtcIsac_TranscodeLPCCoef */
int WebRtcIsac_TranscodeLPCCoef(void);

/* Symbol: WebRtcIsac_kQArRc3Cdf */
/* Demangled: WebRtcIsac_kQArRc3Cdf */
extern void* WebRtcIsac_kQArRc3Cdf;

/* Symbol: _ZN6webrtc9audioproc6Config21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Config::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc6Config21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: WebRtcIsac_kQMeanGain3Q12 */
/* Demangled: WebRtcIsac_kQMeanGain3Q12 */
extern void* WebRtcIsac_kQMeanGain3Q12;

/* Symbol: android_setCpuArm */
/* Demangled: android_setCpuArm */
int android_setCpuArm(void);

/* Symbol: _ZN6webrtc9TraceImplC2Ev */
/* Demangled: webrtc::TraceImpl::TraceImpl() */
int _ZN6webrtc9TraceImplC2Ev(void);

/* Symbol: _ZN6webrtc9audioproc6Stream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Stream::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc6Stream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZN6webrtc9audioproc10OutputDataC1Ev */
/* Demangled: webrtc::audioproc::OutputData::OutputData() */
int _ZN6webrtc9audioproc10OutputDataC1Ev(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetricsC1ERKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::Test_EchoMetrics(webrtc::audioproc::Test_EchoMetrics const&) */
int _ZN6webrtc9audioproc16Test_EchoMetricsC1ERKS1_(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImplC2EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::VoiceDetectionImpl::VoiceDetectionImpl(rtc::CriticalSection*) */
int _ZN6webrtc18VoiceDetectionImplC2EPN3rtc15CriticalSectionE(void);

/* Symbol: _ZN3rtc9CritScopeC2EPNS_15CriticalSectionE */
/* Demangled: rtc::CritScope::CritScope(rtc::CriticalSection*) */
int _ZN3rtc9CritScopeC2EPNS_15CriticalSectionE(void);

/* Symbol: _ZN6webrtc17PushSincResamplerD1Ev */
/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
int _ZN6webrtc17PushSincResamplerD1Ev(void);

/* Symbol: _ZN6webrtc13SincResamplerD1Ev */
/* Demangled: webrtc::SincResampler::~SincResampler() */
int _ZN6webrtc13SincResamplerD1Ev(void);

/* Symbol: android_getCpuFamily */
/* Demangled: android_getCpuFamily */
int android_getCpuFamily(void);

/* Symbol: WebRtc_enable_robust_validation */
/* Demangled: WebRtc_enable_robust_validation */
int WebRtc_enable_robust_validation(void);

/* Symbol: WebRtcVad_FindMinimum */
/* Demangled: WebRtcVad_FindMinimum */
int WebRtcVad_FindMinimum(void);

/* Symbol: _ZN6webrtc9audioproc14Test_Statistic27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Test_Statistic::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc14Test_Statistic27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZTVN6webrtc6MatrixINSt3__17complexIfEEEE */
/* Demangled: vtable for webrtc::Matrix<std::__1::complex<float> > */
extern void* _ZTVN6webrtc6MatrixINSt3__17complexIfEEEE;

/* Symbol: WebRtcIsac_EncodeGain2 */
/* Demangled: WebRtcIsac_EncodeGain2 */
int WebRtcIsac_EncodeGain2(void);

/* Symbol: WebRtcSpl_RandN */
/* Demangled: WebRtcSpl_RandN */
int WebRtcSpl_RandN(void);

/* Symbol: WebRtcAec_kMinFarendPSD */
/* Demangled: WebRtcAec_kMinFarendPSD */
extern void* WebRtcAec_kMinFarendPSD;

/* Symbol: aec_rdft_inverse_128 */
/* Demangled: aec_rdft_inverse_128 */
int aec_rdft_inverse_128(void);

/* Symbol: WebRtcSpl_Sqrt */
/* Demangled: WebRtcSpl_Sqrt */
int WebRtcSpl_Sqrt(void);

/* Symbol: _ZN6webrtc9TraceImpl14CreateInstanceEv */
/* Demangled: webrtc::TraceImpl::CreateInstance() */
int _ZN6webrtc9TraceImpl14CreateInstanceEv(void);

/* Symbol: _ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji */
/* Demangled: webrtc::VoiceActivityDetector::ProcessChunk(short const*, unsigned int, int) */
int _ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect10UpdateGainEv */
/* Demangled: webrtc::AgcManagerDirect::UpdateGain() */
int _ZN6webrtc16AgcManagerDirect10UpdateGainEv(void);

/* Symbol: _ZNK6webrtc9audioproc4Test24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Test::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc4Test24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancerC1ERKNS0_6ConfigE */
/* Demangled: webrtc::IntelligibilityEnhancer::IntelligibilityEnhancer(webrtc::IntelligibilityEnhancer::Config const&) */
int _ZN6webrtc23IntelligibilityEnhancerC1ERKNS0_6ConfigE(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl17echo_cancellationEv */
/* Demangled: webrtc::AudioProcessingImpl::echo_cancellation() const */
int _ZNK6webrtc19AudioProcessingImpl17echo_cancellationEv(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer10InitializeEii */
/* Demangled: webrtc::NonlinearBeamformer::Initialize(int, int) */
int _ZN6webrtc19NonlinearBeamformer10InitializeEii(void);

/* Symbol: WebRtcSpl_VectorBitShiftW16 */
/* Demangled: WebRtcSpl_VectorBitShiftW16 */
int WebRtcSpl_VectorBitShiftW16(void);

/* Symbol: _ZNK6webrtc18VoiceDetectionImpl10likelihoodEv */
/* Demangled: webrtc::VoiceDetectionImpl::likelihood() const */
int _ZNK6webrtc18VoiceDetectionImpl10likelihoodEv(void);

/* Symbol: _ZN6webrtc10FloatToS16EPKfjPs */
/* Demangled: webrtc::FloatToS16(float const*, unsigned int, short*) */
int _ZN6webrtc10FloatToS16EPKfjPs(void);

/* Symbol: WebRtcIsac_kQKltLevelsShape */
/* Demangled: WebRtcIsac_kQKltLevelsShape */
extern void* WebRtcIsac_kQKltLevelsShape;

/* Symbol: WebRtcIsac_AllZeroFilter */
/* Demangled: WebRtcIsac_AllZeroFilter */
int WebRtcIsac_AllZeroFilter(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl13CloseFileImplEv */
/* Demangled: webrtc::FileWrapperImpl::CloseFileImpl() */
int _ZN6webrtc15FileWrapperImpl13CloseFileImplEv(void);

/* Symbol: WebRtcSpl_MemSetW32 */
/* Demangled: WebRtcSpl_MemSetW32 */
int WebRtcSpl_MemSetW32(void);

/* Symbol: _ZN6webrtc9audioproc10OutputDataC2ERKS1_ */
/* Demangled: webrtc::audioproc::OutputData::OutputData(webrtc::audioproc::OutputData const&) */
int _ZN6webrtc9audioproc10OutputDataC2ERKS1_(void);

/* Symbol: WebRtcIsac_StoreLpcGainUb */
/* Demangled: WebRtcIsac_StoreLpcGainUb */
int WebRtcIsac_StoreLpcGainUb(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer14FilterVarianceEPKfPf */
/* Demangled: webrtc::IntelligibilityEnhancer::FilterVariance(float const*, float*) */
int _ZN6webrtc23IntelligibilityEnhancer14FilterVarianceEPKfPf(void);

/* Symbol: WebRtcIsac_DecodeSendBW */
/* Demangled: WebRtcIsac_DecodeSendBW */
int WebRtcIsac_DecodeSendBW(void);

/* Symbol: _ZN6webrtc9audioproc4Test21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Test::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc4Test21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE */
/* Demangled: rtc::tracing::StartInternalCaptureToFile(__sFILE*) */
int _ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE(void);

/* Symbol: _ZN3rtc10SystemInfoC1Ev */
/* Demangled: rtc::SystemInfo::SystemInfo() */
int _ZN3rtc10SystemInfoC1Ev(void);

/* Symbol: WebRtcIsac_kQArRcInitIndex */
/* Demangled: WebRtcIsac_kQArRcInitIndex */
extern void* WebRtcIsac_kQArRcInitIndex;

/* Symbol: _ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE */
/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
int _ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE(void);

/* Symbol: WebRtcSpl_RandU */
/* Demangled: WebRtcSpl_RandU */
int WebRtcSpl_RandU(void);

/* Symbol: _ZNK6webrtc9audioproc14Test_Statistic13IsInitializedEv */
/* Demangled: webrtc::audioproc::Test_Statistic::IsInitialized() const */
int _ZNK6webrtc9audioproc14Test_Statistic13IsInitializedEv(void);

/* Symbol: _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_ */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int, char const*) */
int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_(void);

/* Symbol: _ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE */
/* Demangled: rtc::LogMessage::GetLogToStream(rtc::LogSink*) */
int _ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetrics9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::MergeFrom(webrtc::audioproc::Test_EchoMetrics const&) */
int _ZN6webrtc9audioproc16Test_EchoMetrics9MergeFromERKS1_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigEPNS_10BeamformerIfEE */
/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&, webrtc::Beamformer<float>*) */
int _ZN6webrtc19AudioProcessingImplC1ERKNS_6ConfigEPNS_10BeamformerIfEE(void);

/* Symbol: _ZNK6webrtc10TracePosix7AddTimeEPcNS_10TraceLevelE */
/* Demangled: webrtc::TracePosix::AddTime(char*, webrtc::TraceLevel) const */
int _ZNK6webrtc10TracePosix7AddTimeEPcNS_10TraceLevelE(void);

/* Symbol: _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_front(float* const&) */
int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZN6webrtc9audioproc14Test_StatisticC2ERKS1_ */
/* Demangled: webrtc::audioproc::Test_Statistic::Test_Statistic(webrtc::audioproc::Test_Statistic const&) */
int _ZN6webrtc9audioproc14Test_StatisticC2ERKS1_(void);

/* Symbol: _ZThn4_NK6webrtc21EchoControlMobileImpl13DestroyHandleEPv */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::DestroyHandle(void*) const */
int _ZThn4_NK6webrtc21EchoControlMobileImpl13DestroyHandleEPv(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer6InsertEd */
/* Demangled: webrtc::VadCircularBuffer::Insert(double) */
int _ZN6webrtc17VadCircularBuffer6InsertEd(void);

/* Symbol: _ZN3rtc17MakeCheckOpStringImmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned long, unsigned long>(unsigned long const&, unsigned long const&, char const*) */
int _ZN3rtc17MakeCheckOpStringImmEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void);

/* Symbol: _ZN6webrtc5Trace16kTimestampLengthE */
/* Demangled: webrtc::Trace::kTimestampLength */
extern void* _ZN6webrtc5Trace16kTimestampLengthE;

/* Symbol: _ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_15IFChannelBufferEPS1_ */
/* Demangled: webrtc::SplittingFilter::ThreeBandsSynthesis(webrtc::IFChannelBuffer const*, webrtc::IFChannelBuffer*) */
int _ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_15IFChannelBufferEPS1_(void);

/* Symbol: _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_back(float*&&) */
int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN6webrtc19ProcessingComponentD1Ev */
/* Demangled: webrtc::ProcessingComponent::~ProcessingComponent() */
int _ZN6webrtc19ProcessingComponentD1Ev(void);

/* Symbol: _ZN3rtc15GlobalLockScopeC2EPNS_13GlobalLockPodE */
/* Demangled: rtc::GlobalLockScope::GlobalLockScope(rtc::GlobalLockPod*) */
int _ZN3rtc15GlobalLockScopeC2EPNS_13GlobalLockPodE(void);

/* Symbol: WebRtcSpl_DownsampleFast */
/* Demangled: WebRtcSpl_DownsampleFast */
extern void* WebRtcSpl_DownsampleFast;

/* Symbol: WebRtcSpl_MaxValueW32 */
/* Demangled: WebRtcSpl_MaxValueW32 */
extern void* WebRtcSpl_MaxValueW32;

/* Symbol: _ZN6webrtc20NoiseSuppressionImplC2EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::NoiseSuppressionImpl::NoiseSuppressionImpl(rtc::CriticalSection*) */
int _ZN6webrtc20NoiseSuppressionImplC2EPN3rtc15CriticalSectionE(void);

/* Symbol: _ZN6webrtc9audioproc4Test21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Test::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc4Test21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN6webrtc15AudioRingBuffer4ReadEPKPfjj */
/* Demangled: webrtc::AudioRingBuffer::Read(float* const*, unsigned int, unsigned int) */
int _ZN6webrtc15AudioRingBuffer4ReadEPKPfjj(void);

/* Symbol: WebRtcIsac_kQindexUpperLimitLagHi */
/* Demangled: WebRtcIsac_kQindexUpperLimitLagHi */
extern void* WebRtcIsac_kQindexUpperLimitLagHi;

/* Symbol: WebRtcSpl_Resample48khzTo8khz */
/* Demangled: WebRtcSpl_Resample48khzTo8khz */
int WebRtcSpl_Resample48khzTo8khz(void);

/* Symbol: _ZNK6webrtc15IFChannelBuffer10fbuf_constEv */
/* Demangled: webrtc::IFChannelBuffer::fbuf_const() const */
int _ZNK6webrtc15IFChannelBuffer10fbuf_constEv(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImplC2EPN3rtc15CriticalSectionE */
/* Demangled: webrtc::LevelEstimatorImpl::LevelEstimatorImpl(rtc::CriticalSection*) */
int _ZN6webrtc18LevelEstimatorImplC2EPN3rtc15CriticalSectionE(void);

/* Symbol: WebRtcIsac_Fftns */
/* Demangled: WebRtcIsac_Fftns */
int WebRtcIsac_Fftns(void);

/* Symbol: _ZN6webrtc11RWLockPosix20ReleaseLockExclusiveEv */
/* Demangled: webrtc::RWLockPosix::ReleaseLockExclusive() */
int _ZN6webrtc11RWLockPosix20ReleaseLockExclusiveEv(void);

/* Symbol: _ZN6webrtc15FileWrapperImpl14SetMaxFileSizeEj */
/* Demangled: webrtc::FileWrapperImpl::SetMaxFileSize(unsigned int) */
int _ZN6webrtc15FileWrapperImpl14SetMaxFileSizeEj(void);

/* Symbol: WebRtcSpl_RandUArray */
/* Demangled: WebRtcSpl_RandUArray */
int WebRtcSpl_RandUArray(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl23WriteMessageToDebugFileEPNS_11FileWrapperEPN3rtc15CriticalSectionEPNS0_23ApmDebugDumpThreadStateE */
/* Demangled: webrtc::AudioProcessingImpl::WriteMessageToDebugFile(webrtc::FileWrapper*, rtc::CriticalSection*, webrtc::AudioProcessingImpl::ApmDebugDumpThreadState*) */
int _ZN6webrtc19AudioProcessingImpl23WriteMessageToDebugFileEPNS_11FileWrapperEPN3rtc15CriticalSectionEPNS0_23ApmDebugDumpThreadStateE(void);

/* Symbol: _ZThn4_N6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_ */
/* Demangled: non-virtual thunk to webrtc::NonlinearBeamformer::ProcessAudioBlock(std::__1::complex<float> const* const*, unsigned int, unsigned int, unsigned int, std::__1::complex<float>* const*) */
int _ZThn4_N6webrtc19NonlinearBeamformer17ProcessAudioBlockEPKPKNSt3__17complexIfEEjjjPKPS3_(void);

/* Symbol: WebRtcIsac_kLpcGainCdfMat */
/* Demangled: WebRtcIsac_kLpcGainCdfMat */
extern void* WebRtcIsac_kLpcGainCdfMat;

/* Symbol: WebRtcIsac_GetNewBitStream */
/* Demangled: WebRtcIsac_GetNewBitStream */
int WebRtcIsac_GetNewBitStream(void);

/* Symbol: _ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEE8__appendEj */
/* Demangled: std::__1::vector<webrtc::TwoBandsStates, std::__1::allocator<webrtc::TwoBandsStates> >::__append(unsigned int) */
int _ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEE8__appendEj(void);

/* Symbol: _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_ */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int, char const*) */
int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEiS2_(void);

/* Symbol: WebRtcIsac_kQMeanLag3Hi */
/* Demangled: WebRtcIsac_kQMeanLag3Hi */
extern void* WebRtcIsac_kQMeanLag3Hi;

/* Symbol: _ZN6webrtc9audioproc5Event21InitAsDefaultInstanceEv */
/* Demangled: webrtc::audioproc::Event::InitAsDefaultInstance() */
int _ZN6webrtc9audioproc5Event21InitAsDefaultInstanceEv(void);

/* Symbol: _ZNK6webrtc9audioproc6Config11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Config::GetTypeName() const */
int _ZNK6webrtc9audioproc6Config11GetTypeNameEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl19set_delay_offset_msEi */
/* Demangled: webrtc::AudioProcessingImpl::set_delay_offset_ms(int) */
int _ZN6webrtc19AudioProcessingImpl19set_delay_offset_msEi(void);

/* Symbol: _ZThn4_N6webrtc20EchoCancellationImpl10InitializeEv */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::Initialize() */
int _ZThn4_N6webrtc20EchoCancellationImpl10InitializeEv(void);

/* Symbol: _ZN6webrtc9audioproc4TestD1Ev */
/* Demangled: webrtc::audioproc::Test::~Test() */
int _ZN6webrtc9audioproc4TestD1Ev(void);

/* Symbol: _ZNK6webrtc9audioproc16Test_EchoMetrics13IsInitializedEv */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::IsInitialized() const */
int _ZNK6webrtc9audioproc16Test_EchoMetrics13IsInitializedEv(void);

/* Symbol: WebRtcVad_Process */
/* Demangled: WebRtcVad_Process */
int WebRtcVad_Process(void);

/* Symbol: _ZN3rtc10LogMessage12LogStartTimeEv */
/* Demangled: rtc::LogMessage::LogStartTime() */
int _ZN3rtc10LogMessage12LogStartTimeEv(void);

/* Symbol: _ZN6webrtc15intelligibility9zerofudgeENSt3__17complexIfEE */
/* Demangled: webrtc::intelligibility::zerofudge(std::__1::complex<float>) */
int _ZN6webrtc15intelligibility9zerofudgeENSt3__17complexIfEE(void);

/* Symbol: WebRtcNsx_PrepareSpectrum */
/* Demangled: WebRtcNsx_PrepareSpectrum */
extern void* WebRtcNsx_PrepareSpectrum;

/* Symbol: WebRtcAec_overDriveCurve */
/* Demangled: WebRtcAec_overDriveCurve */
extern void* WebRtcAec_overDriveCurve;

/* Symbol: _ZN6webrtc9audioproc6Stream9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Stream::MergeFrom(webrtc::audioproc::Stream const&) */
int _ZN6webrtc9audioproc6Stream9MergeFromERKS1_(void);

/* Symbol: WebRtcIsac_InitPitchAnalysis */
/* Demangled: WebRtcIsac_InitPitchAnalysis */
int WebRtcIsac_InitPitchAnalysis(void);

/* Symbol: _ZNK6webrtc14AudioConverter10CheckSizesEjj */
/* Demangled: webrtc::AudioConverter::CheckSizes(unsigned int, unsigned int) const */
int _ZNK6webrtc14AudioConverter10CheckSizesEjj(void);

/* Symbol: WebRtcIsac_kQKltInitIndexGain */
/* Demangled: WebRtcIsac_kQKltInitIndexGain */
extern void* WebRtcIsac_kQKltInitIndexGain;

/* Symbol: _ZNK6webrtc9TraceImpl11AddThreadIdEPc */
/* Demangled: webrtc::TraceImpl::AddThreadId(char*) const */
int _ZNK6webrtc9TraceImpl11AddThreadIdEPc(void);

/* Symbol: _ZNK6webrtc19ProcessingComponent6handleEj */
/* Demangled: webrtc::ProcessingComponent::handle(unsigned int) const */
int _ZNK6webrtc19ProcessingComponent6handleEj(void);

/* Symbol: WebRtcIsac_kQIndexUpperLimitLagLo */
/* Demangled: WebRtcIsac_kQIndexUpperLimitLagLo */
extern void* WebRtcIsac_kQIndexUpperLimitLagLo;

/* Symbol: _ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d */
/* Demangled: webrtc::SincResampler::Convolve_C(float const*, float const*, float const*, double) */
int _ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d(void);

/* Symbol: _ZN6webrtc3AgcD1Ev */
/* Demangled: webrtc::Agc::~Agc() */
int _ZN6webrtc3AgcD1Ev(void);

/* Symbol: _ZN6webrtc9Histogram6CreateEi */
/* Demangled: webrtc::Histogram::Create(int) */
int _ZN6webrtc9Histogram6CreateEi(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc17Test_DelayMetricsEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Test_DelayMetrics* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Test_DelayMetrics>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc17Test_DelayMetricsEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPNS_10AudioFrameE */
/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(webrtc::AudioFrame*) */
int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPNS_10AudioFrameE(void);

/* Symbol: WebRtcIsac_kLpcGainEntropySearch */
/* Demangled: WebRtcIsac_kLpcGainEntropySearch */
extern void* WebRtcIsac_kLpcGainEntropySearch;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec2Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec2Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec2Ub12;

/* Symbol: _ZN6webrtc17PushSincResampler3RunEjPf */
/* Demangled: webrtc::PushSincResampler::Run(unsigned int, float*) */
int _ZN6webrtc17PushSincResampler3RunEjPf(void);

/* Symbol: WebRtcAec_extended_filter_enabled */
/* Demangled: WebRtcAec_extended_filter_enabled */
int WebRtcAec_extended_filter_enabled(void);

/* Symbol: WebRtc_DelayEstimatorProcessFix */
/* Demangled: WebRtc_DelayEstimatorProcessFix */
int WebRtc_DelayEstimatorProcessFix(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl6EnableEb */
/* Demangled: webrtc::EchoCancellationImpl::Enable(bool) */
int _ZN6webrtc20EchoCancellationImpl6EnableEb(void);

/* Symbol: _ZN6webrtc7CpuInfo19DetectNumberOfCoresEv */
/* Demangled: webrtc::CpuInfo::DetectNumberOfCores() */
int _ZN6webrtc7CpuInfo19DetectNumberOfCoresEv(void);

/* Symbol: _ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc4TestEE5MergeERKS5_PS5_ */
/* Demangled: google::protobuf::internal::GenericTypeHandler<webrtc::audioproc::Test>::Merge(webrtc::audioproc::Test const&, webrtc::audioproc::Test*) */
int _ZN6google8protobuf8internal18GenericTypeHandlerIN6webrtc9audioproc4TestEE5MergeERKS5_PS5_(void);

/* Symbol: WebRtcVad_set_mode */
/* Demangled: WebRtcVad_set_mode */
int WebRtcVad_set_mode(void);

/* Symbol: _ZN3rtc6encodeEPcjPKcjS2_c */
/* Demangled: rtc::encode(char*, unsigned int, char const*, unsigned int, char const*, char) */
int _ZN3rtc6encodeEPcjPKcjS2_c(void);

/* Symbol: WebRtcIsac_DecodeInterpolLpcUb */
/* Demangled: WebRtcIsac_DecodeInterpolLpcUb */
int WebRtcIsac_DecodeInterpolLpcUb(void);

/* Symbol: WebRtcIsac_kQGainCdf */
/* Demangled: WebRtcIsac_kQGainCdf */
extern void* WebRtcIsac_kQGainCdf;

/* Symbol: _ZN6webrtc22ConditionVariablePosix9ConstructEv */
/* Demangled: webrtc::ConditionVariablePosix::Construct() */
int _ZN6webrtc22ConditionVariablePosix9ConstructEv(void);

/* Symbol: WebRtcAec_weightCurve */
/* Demangled: WebRtcAec_weightCurve */
extern void* WebRtcAec_weightCurve;

/* Symbol: _ZN6webrtc20EchoCancellationImpl20ReadQueuedRenderDataEv */
/* Demangled: webrtc::EchoCancellationImpl::ReadQueuedRenderData() */
int _ZN6webrtc20EchoCancellationImpl20ReadQueuedRenderDataEv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_input_channels() const */
int _ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv(void);

/* Symbol: _ZNK6webrtc15GainControlImpl20analog_level_minimumEv */
/* Demangled: webrtc::GainControlImpl::analog_level_minimum() const */
int _ZNK6webrtc15GainControlImpl20analog_level_minimumEv(void);

/* Symbol: _ZN3rtc11s_transformERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPFjPcjPKcjE */
/* Demangled: rtc::s_transform(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int (*)(char*, unsigned int, char const*, unsigned int)) */
int _ZN3rtc11s_transformERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPFjPcjPKcjE(void);

/* Symbol: WebRtcIsac_UpdateBandwidthEstimator */
/* Demangled: WebRtcIsac_UpdateBandwidthEstimator */
int WebRtcIsac_UpdateBandwidthEstimator(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec2Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec2Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec2Ub16;

/* Symbol: _ZN6webrtc5Trace12level_filterEv */
/* Demangled: webrtc::Trace::level_filter() */
int _ZN6webrtc5Trace12level_filterEv(void);

/* Symbol: _ZN6webrtc11RWLockPosixD0Ev */
/* Demangled: webrtc::RWLockPosix::~RWLockPosix() */
int _ZN6webrtc11RWLockPosixD0Ev(void);

/* Symbol: _ZN6webrtc15IFChannelBufferC1Ejjj */
/* Demangled: webrtc::IFChannelBuffer::IFChannelBuffer(unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15IFChannelBufferC1Ejjj(void);

/* Symbol: _ZN3rtc10xml_decodeEPcjPKcj */
/* Demangled: rtc::xml_decode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc10xml_decodeEPcjPKcj(void);

/* Symbol: WebRtcIsac_kQKltModelCdfPtr */
/* Demangled: WebRtcIsac_kQKltModelCdfPtr */
extern void* WebRtcIsac_kQKltModelCdfPtr;

/* Symbol: WebRtcIsac_CorrelateIntraVec */
/* Demangled: WebRtcIsac_CorrelateIntraVec */
int WebRtcIsac_CorrelateIntraVec(void);

/* Symbol: WebRtcIsac_DecodeJitterInfo */
/* Demangled: WebRtcIsac_DecodeJitterInfo */
int WebRtcIsac_DecodeJitterInfo(void);

/* Symbol: WebRtcIsac_Decode */
/* Demangled: WebRtcIsac_Decode */
int WebRtcIsac_Decode(void);

/* Symbol: WebRtcIsac_kQMeanLag2Lo */
/* Demangled: WebRtcIsac_kQMeanLag2Lo */
extern void* WebRtcIsac_kQMeanLag2Lo;

/* Symbol: WebRtcAec_BufferFarend */
/* Demangled: WebRtcAec_BufferFarend */
int WebRtcAec_BufferFarend(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb */
/* Demangled: webrtc::EchoControlMobileImpl::enable_comfort_noise(bool) */
int _ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb(void);

/* Symbol: WebRtc_get_allowed_offset */
/* Demangled: WebRtc_get_allowed_offset */
int WebRtc_get_allowed_offset(void);

/* Symbol: _ZN3rtc8unescapeEPcjPKcjc */
/* Demangled: rtc::unescape(char*, unsigned int, char const*, unsigned int, char) */
int _ZN3rtc8unescapeEPcjPKcjc(void);

/* Symbol: WebRtcNsx_ProcessCore */
/* Demangled: WebRtcNsx_ProcessCore */
int WebRtcNsx_ProcessCore(void);

/* Symbol: _ZN6webrtc20NoiseSuppressionImpl10InitializeEji */
/* Demangled: webrtc::NoiseSuppressionImpl::Initialize(unsigned int, int) */
int _ZN6webrtc20NoiseSuppressionImpl10InitializeEji(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer5AimAtERKNS_14SphericalPointIfEE */
/* Demangled: webrtc::NonlinearBeamformer::AimAt(webrtc::SphericalPoint<float> const&) */
int _ZN6webrtc19NonlinearBeamformer5AimAtERKNS_14SphericalPointIfEE(void);

/* Symbol: WebRtcIsac_kQGain2BoundaryLevels */
/* Demangled: WebRtcIsac_kQGain2BoundaryLevels */
extern void* WebRtcIsac_kQGain2BoundaryLevels;

/* Symbol: WebRtcIsac_SetInitialBweBottleneck */
/* Demangled: WebRtcIsac_SetInitialBweBottleneck */
int WebRtcIsac_SetInitialBweBottleneck(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosixD2Ev */
/* Demangled: webrtc::ConditionVariablePosix::~ConditionVariablePosix() */
int _ZN6webrtc22ConditionVariablePosixD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStream12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::ReverseStream::InternalSwap(webrtc::audioproc::ReverseStream*) */
int _ZN6webrtc9audioproc13ReverseStream12InternalSwapEPS1_(void);

/* Symbol: WebRtcIsac_QuantizeLpcGain */
/* Demangled: WebRtcIsac_QuantizeLpcGain */
int WebRtcIsac_QuantizeLpcGain(void);

/* Symbol: WebRtcIsac_WeightingFilter */
/* Demangled: WebRtcIsac_WeightingFilter */
int WebRtcIsac_WeightingFilter(void);

/* Symbol: _ZN6webrtc15FileWrapperImplD0Ev */
/* Demangled: webrtc::FileWrapperImpl::~FileWrapperImpl() */
int _ZN6webrtc15FileWrapperImplD0Ev(void);

/* Symbol: WebRtcAecm_FetchFarFrame */
/* Demangled: WebRtcAecm_FetchFarFrame */
int WebRtcAecm_FetchFarFrame(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplD2Ev */
/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
int _ZN6webrtc19AudioProcessingImplD2Ev(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl6EnableEb */
/* Demangled: webrtc::EchoControlMobileImpl::Enable(bool) */
int _ZN6webrtc21EchoControlMobileImpl6EnableEb(void);

/* Symbol: WebRtcSpl_MinIndexW16 */
/* Demangled: WebRtcSpl_MinIndexW16 */
int WebRtcSpl_MinIndexW16(void);

/* Symbol: _ZN6webrtc10TracePosixD0Ev */
/* Demangled: webrtc::TracePosix::~TracePosix() */
int _ZN6webrtc10TracePosixD0Ev(void);

/* Symbol: _ZN6webrtc9Histogram6CreateEv */
/* Demangled: webrtc::Histogram::Create() */
int _ZN6webrtc9Histogram6CreateEv(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetricsD2Ev */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::~Test_DelayMetrics() */
int _ZN6webrtc9audioproc17Test_DelayMetricsD2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl26InitializeNoiseSuppressionEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeNoiseSuppression() */
int _ZN6webrtc19AudioProcessingImpl26InitializeNoiseSuppressionEv(void);

/* Symbol: _ZN6webrtc20EchoCancellationImpl21set_suppression_levelENS_16EchoCancellation16SuppressionLevelE */
/* Demangled: webrtc::EchoCancellationImpl::set_suppression_level(webrtc::EchoCancellation::SuppressionLevel) */
int _ZN6webrtc20EchoCancellationImpl21set_suppression_levelENS_16EchoCancellation16SuppressionLevelE(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer23CalculatePostfilterMaskERKNS_13ComplexMatrixIfEEfff */
/* Demangled: webrtc::NonlinearBeamformer::CalculatePostfilterMask(webrtc::ComplexMatrix<float> const&, float, float, float) */
int _ZN6webrtc19NonlinearBeamformer23CalculatePostfilterMaskERKNS_13ComplexMatrixIfEEfff(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc17Test_DelayMetrics21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZNK6webrtc9audioproc10OutputData11GetTypeNameEv */
/* Demangled: webrtc::audioproc::OutputData::GetTypeName() const */
int _ZNK6webrtc9audioproc10OutputData11GetTypeNameEv(void);

/* Symbol: _ZN3rtc10LogMessage14SetLogToStderrEb */
/* Demangled: rtc::LogMessage::SetLogToStderr(bool) */
int _ZN3rtc10LogMessage14SetLogToStderrEb(void);

/* Symbol: WebRtcIsac_BwExpand */
/* Demangled: WebRtcIsac_BwExpand */
int WebRtcIsac_BwExpand(void);

/* Symbol: _ZNSt3__16vectorIPaNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<signed char*, std::__1::allocator<signed char*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPaNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc9audioproc25_Stream_default_instance_E */
/* Demangled: webrtc::audioproc::_Stream_default_instance_ */
extern void* _ZN6webrtc9audioproc25_Stream_default_instance_E;

/* Symbol: WebRtcAec_FilterAdaptation */
/* Demangled: WebRtcAec_FilterAdaptation */
extern void* WebRtcAec_FilterAdaptation;

/* Symbol: _ZN6webrtc9audioproc4Init8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Init::CopyFrom(webrtc::audioproc::Init const&) */
int _ZN6webrtc9audioproc4Init8CopyFromERKS1_(void);

/* Symbol: _ZN6webrtc18HighPassFilterImpl19ProcessCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::HighPassFilterImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc18HighPassFilterImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZN3rtc10url_decodeEPcjPKcj */
/* Demangled: rtc::url_decode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc10url_decodeEPcjPKcj(void);

/* Symbol: _ZN6webrtc11AudioBuffer12set_activityENS_10AudioFrame11VADActivityE */
/* Demangled: webrtc::AudioBuffer::set_activity(webrtc::AudioFrame::VADActivity) */
int _ZN6webrtc11AudioBuffer12set_activityENS_10AudioFrame11VADActivityE(void);

/* Symbol: _ZN6webrtc17PushSincResampler8ResampleEPKfjPfj */
/* Demangled: webrtc::PushSincResampler::Resample(float const*, unsigned int, float*, unsigned int) */
int _ZN6webrtc17PushSincResampler8ResampleEPKfjPfj(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16InitializeLockedEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked() */
int _ZN6webrtc19AudioProcessingImpl16InitializeLockedEv(void);

/* Symbol: WebRtcSpl_ResetResample48khzTo16khz */
/* Demangled: WebRtcSpl_ResetResample48khzTo16khz */
int WebRtcSpl_ResetResample48khzTo16khz(void);

/* Symbol: _ZN6webrtc9HistogramC1Ei */
/* Demangled: webrtc::Histogram::Histogram(int) */
int _ZN6webrtc9HistogramC1Ei(void);

/* Symbol: _ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigEPNS_10BeamformerIfEE */
/* Demangled: webrtc::AudioProcessing::Create(webrtc::Config const&, webrtc::Beamformer<float>*) */
int _ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigEPNS_10BeamformerIfEE(void);

/* Symbol: _ZNK6webrtc23IntelligibilityEnhancer6activeEv */
/* Demangled: webrtc::IntelligibilityEnhancer::active() const */
int _ZNK6webrtc23IntelligibilityEnhancer6activeEv(void);

/* Symbol: _ZN6webrtc17PushSincResamplerC1Ejj */
/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
int _ZN6webrtc17PushSincResamplerC1Ejj(void);

/* Symbol: _ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j */
/* Demangled: webrtc::VadAudioProc::PitchAnalysis(double*, double*, unsigned int) */
int _ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j(void);

/* Symbol: _ZTVN6webrtc13CopyConverterE */
/* Demangled: vtable for webrtc::CopyConverter */
extern void* _ZTVN6webrtc13CopyConverterE;

/* Symbol: WebRtcIsac_EncodeLpcUB */
/* Demangled: WebRtcIsac_EncodeLpcUB */
int WebRtcIsac_EncodeLpcUB(void);

/* Symbol: WebRtcIsac_DecodeRcu */
/* Demangled: WebRtcIsac_DecodeRcu */
int WebRtcIsac_DecodeRcu(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosixC1Ev */
/* Demangled: webrtc::ConditionVariablePosix::ConditionVariablePosix() */
int _ZN6webrtc22ConditionVariablePosixC1Ev(void);

/* Symbol: _ZN6webrtc9HistogramD2Ev */
/* Demangled: webrtc::Histogram::~Histogram() */
int _ZN6webrtc9HistogramD2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPNS_10AudioFrameE */
/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(webrtc::AudioFrame*) */
int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPNS_10AudioFrameE(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl17noise_suppressionEv */
/* Demangled: webrtc::AudioProcessingImpl::noise_suppression() const */
int _ZNK6webrtc19AudioProcessingImpl17noise_suppressionEv(void);

/* Symbol: _ZN3rtc20SetCurrentThreadNameEPKc */
/* Demangled: rtc::SetCurrentThreadName(char const*) */
int _ZN3rtc20SetCurrentThreadNameEPKc(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer17InitTargetCovMatsEv */
/* Demangled: webrtc::NonlinearBeamformer::InitTargetCovMats() */
int _ZN6webrtc19NonlinearBeamformer17InitTargetCovMatsEv(void);

/* Symbol: WebRtc_FreeDelayEstimatorFarend */
/* Demangled: WebRtc_FreeDelayEstimatorFarend */
int WebRtc_FreeDelayEstimatorFarend(void);

/* Symbol: _ZN6webrtc9Histogram11GetBinIndexEd */
/* Demangled: webrtc::Histogram::GetBinIndex(double) */
int _ZN6webrtc9Histogram11GetBinIndexEd(void);

/* Symbol: _ZNK6webrtc13SincResampler9ChunkSizeEv */
/* Demangled: webrtc::SincResampler::ChunkSize() const */
int _ZNK6webrtc13SincResampler9ChunkSizeEv(void);

/* Symbol: WebRtcNsx_AnalysisUpdate */
/* Demangled: WebRtcNsx_AnalysisUpdate */
extern void* WebRtcNsx_AnalysisUpdate;

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS1_29InternalMetadataWithArenaLiteEE9ContainerEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<google::protobuf::internal::InternalMetadataWithArenaBase<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, google::protobuf::internal::InternalMetadataWithArenaLite>::Container>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS1_29InternalMetadataWithArenaLiteEE9ContainerEEEvPv(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10OutputDataEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::OutputData>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc10OutputDataEEEvPv(void);

/* Symbol: _ZN6webrtc17VadCircularBufferC1Ei */
/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
int _ZN6webrtc17VadCircularBufferC1Ei(void);

/* Symbol: WebRtcIsac_Free */
/* Demangled: WebRtcIsac_Free */
int WebRtcIsac_Free(void);

/* Symbol: WebRtcIsac_UpdateUplinkBw */
/* Demangled: WebRtcIsac_UpdateUplinkBw */
int WebRtcIsac_UpdateUplinkBw(void);

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetricsC1Ev */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::Test_DelayMetrics() */
int _ZN6webrtc9audioproc17Test_DelayMetricsC1Ev(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl20num_handles_requiredEv */
/* Demangled: webrtc::EchoControlMobileImpl::num_handles_required() const */
int _ZNK6webrtc21EchoControlMobileImpl20num_handles_requiredEv(void);

/* Symbol: _ZN3rtc6escapeEPcjPKcjS2_c */
/* Demangled: rtc::escape(char*, unsigned int, char const*, unsigned int, char const*, char) */
int _ZN3rtc6escapeEPcjPKcjS2_c(void);

/* Symbol: _ZN6webrtc13AlignedMallocEjj */
/* Demangled: webrtc::AlignedMalloc(unsigned int, unsigned int) */
int _ZN6webrtc13AlignedMallocEjj(void);

/* Symbol: WebRtcIsac_DecHistOneStepMulti */
/* Demangled: WebRtcIsac_DecHistOneStepMulti */
int WebRtcIsac_DecHistOneStepMulti(void);

/* Symbol: WebRtcIsac_ControlBwe */
/* Demangled: WebRtcIsac_ControlBwe */
int WebRtcIsac_ControlBwe(void);

/* Symbol: _ZN6webrtc9audioproc18Event_Type_IsValidEi */
/* Demangled: webrtc::audioproc::Event_Type_IsValid(int) */
int _ZN6webrtc9audioproc18Event_Type_IsValidEi(void);

/* Symbol: _ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh */
/* Demangled: webrtc::EventTracer::AddTraceEvent(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char) */
int _ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh(void);

/* Symbol: _ZN6webrtc17VadCircularBufferD2Ev */
/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
int _ZN6webrtc17VadCircularBufferD2Ev(void);

/* Symbol: WebRtcAgc_AddFarend */
/* Demangled: WebRtcAgc_AddFarend */
int WebRtcAgc_AddFarend(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb */
/* Demangled: webrtc::AudioProcessingImpl::set_stream_key_pressed(bool) */
int _ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb(void);

/* Symbol: _ZN3rtc11utf8_encodeEPcjm */
/* Demangled: rtc::utf8_encode(char*, unsigned int, unsigned long) */
int _ZN3rtc11utf8_encodeEPcjm(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer12kNumFreqBinsE */
/* Demangled: webrtc::NonlinearBeamformer::kNumFreqBins */
extern void* _ZN6webrtc19NonlinearBeamformer12kNumFreqBinsE;

/* Symbol: WebRtcIsac_ReadFrameLen */
/* Demangled: WebRtcIsac_ReadFrameLen */
int WebRtcIsac_ReadFrameLen(void);

/* Symbol: _ZN6webrtc9TraceImpl13TraceFileImplEPc */
/* Demangled: webrtc::TraceImpl::TraceFileImpl(char*) */
int _ZN6webrtc9TraceImpl13TraceFileImplEPc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc15SparseFIRFilterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::SparseFIRFilter*, std::__1::allocator<webrtc::SparseFIRFilter*> >::__push_back_slow_path<webrtc::SparseFIRFilter* const&>(webrtc::SparseFIRFilter* const&) */
int _ZNSt3__16vectorIPN6webrtc15SparseFIRFilterENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: WebRtcSpl_LpcToReflCoef */
/* Demangled: WebRtcSpl_LpcToReflCoef */
int WebRtcSpl_LpcToReflCoef(void);

/* Symbol: WebRtcAec_aec_core */
/* Demangled: WebRtcAec_aec_core */
int WebRtcAec_aec_core(void);

/* Symbol: WebRtcIsac_GetNewFrameLen */
/* Demangled: WebRtcIsac_GetNewFrameLen */
int WebRtcIsac_GetNewFrameLen(void);

/* Symbol: WebRtcSpl_FilterARFastQ12 */
/* Demangled: WebRtcSpl_FilterARFastQ12 */
int WebRtcSpl_FilterARFastQ12(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect16UpdateCompressorEv */
/* Demangled: webrtc::AgcManagerDirect::UpdateCompressor() */
int _ZN6webrtc16AgcManagerDirect16UpdateCompressorEv(void);

/* Symbol: _ZN6webrtc9audioproc6Stream8CopyFromERKS1_ */
/* Demangled: webrtc::audioproc::Stream::CopyFrom(webrtc::audioproc::Stream const&) */
int _ZN6webrtc9audioproc6Stream8CopyFromERKS1_(void);

/* Symbol: _ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize_with_empty_tokens(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: _Z15GetCPUInfoNoASM10CPUFeature */
/* Demangled: GetCPUInfoNoASM(CPUFeature) */
int _Z15GetCPUInfoNoASM10CPUFeature(void);

/* Symbol: _ZN6webrtc11FileWrapper6RewindEv */
/* Demangled: webrtc::FileWrapper::Rewind() */
int _ZN6webrtc11FileWrapper6RewindEv(void);

/* Symbol: WebRtcAec_ResampleLinear */
/* Demangled: WebRtcAec_ResampleLinear */
int WebRtcAec_ResampleLinear(void);

/* Symbol: rdft_w */
/* Demangled: rdft_w */
extern void* rdft_w;

/* Symbol: _ZN6webrtc16AgcManagerDirectD2Ev */
/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
int _ZN6webrtc16AgcManagerDirectD2Ev(void);

/* Symbol: _ZN6webrtc18HighPassFilterImpl6EnableEb */
/* Demangled: webrtc::HighPassFilterImpl::Enable(bool) */
int _ZN6webrtc18HighPassFilterImpl6EnableEb(void);

/* Symbol: WebRtcIsac_GetLpcGain */
/* Demangled: WebRtcIsac_GetLpcGain */
int WebRtcIsac_GetLpcGain(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec4Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec4Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec4Ub12;

/* Symbol: _ZN6webrtc9HistogramC1Ev */
/* Demangled: webrtc::Histogram::Histogram() */
int _ZN6webrtc9HistogramC1Ev(void);

/* Symbol: _ZN6webrtc15GainControlImpl23set_stream_analog_levelEi */
/* Demangled: webrtc::GainControlImpl::set_stream_analog_level(int) */
int _ZN6webrtc15GainControlImpl23set_stream_analog_levelEi(void);

/* Symbol: _ZNK6webrtc15GainControlImpl10is_enabledEv */
/* Demangled: webrtc::GainControlImpl::is_enabled() const */
int _ZNK6webrtc15GainControlImpl10is_enabledEv(void);

/* Symbol: _ZN3rtc11html_decodeEPcjPKcj */
/* Demangled: rtc::html_decode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc11html_decodeEPcjPKcj(void);

/* Symbol: WebRtcNsx_ComputeSpectralFlatness */
/* Demangled: WebRtcNsx_ComputeSpectralFlatness */
int WebRtcNsx_ComputeSpectralFlatness(void);

/* Symbol: _ZN6webrtc9audioproc5Event21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::Event::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc5Event21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZN6webrtc9audioproc6ConfigC2ERKS1_ */
/* Demangled: webrtc::audioproc::Config::Config(webrtc::audioproc::Config const&) */
int _ZN6webrtc9audioproc6ConfigC2ERKS1_(void);

/* Symbol: _ZNK6webrtc9audioproc17Test_DelayMetrics13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc17Test_DelayMetrics13SetCachedSizeEi(void);

/* Symbol: _ZN3rtc26unsafe_filename_charactersEv */
/* Demangled: rtc::unsafe_filename_characters() */
int _ZN3rtc26unsafe_filename_charactersEv(void);

/* Symbol: WebRtcIsac_kQKltCdfGain */
/* Demangled: WebRtcIsac_kQKltCdfGain */
extern void* WebRtcIsac_kQKltCdfGain;

/* Symbol: WebRtcSpl_MaxAbsValueW32C */
/* Demangled: WebRtcSpl_MaxAbsValueW32C */
int WebRtcSpl_MaxAbsValueW32C(void);

/* Symbol: _ZN6webrtc19TransientSuppressor8SuppressEPfjiPKfjS3_jfb */
/* Demangled: webrtc::TransientSuppressor::Suppress(float*, unsigned int, int, float const*, unsigned int, float const*, unsigned int, float, bool) */
int _ZN6webrtc19TransientSuppressor8SuppressEPfjiPKfjS3_jfb(void);

/* Symbol: _ZThn4_NK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv */
/* Demangled: non-virtual thunk to webrtc::EchoControlMobileImpl::ConfigureHandle(void*) const */
int _ZThn4_NK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv(void);

/* Symbol: _ZN6webrtc15AudioRingBufferC2Ejj */
/* Demangled: webrtc::AudioRingBuffer::AudioRingBuffer(unsigned int, unsigned int) */
int _ZN6webrtc15AudioRingBufferC2Ejj(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec01Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec01Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec01Ub16;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec4Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec4Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec4Ub16;

/* Symbol: WebRtcSpl_DownBy2IntToShort */
/* Demangled: WebRtcSpl_DownBy2IntToShort */
int WebRtcSpl_DownBy2IntToShort(void);

/* Symbol: android_getCpuIdArm */
/* Demangled: android_getCpuIdArm */
int android_getCpuIdArm(void);

/* Symbol: _Z11Loudness2Dbd */
/* Demangled: Loudness2Db(double) */
int _Z11Loudness2Dbd(void);

/* Symbol: _ZN6webrtc9audioproc6StreamC1ERKS1_ */
/* Demangled: webrtc::audioproc::Stream::Stream(webrtc::audioproc::Stream const&) */
int _ZN6webrtc9audioproc6StreamC1ERKS1_(void);

/* Symbol: _ZNK6webrtc9audioproc10OutputData13SetCachedSizeEi */
/* Demangled: webrtc::audioproc::OutputData::SetCachedSize(int) const */
int _ZNK6webrtc9audioproc10OutputData13SetCachedSizeEi(void);

/* Symbol: WebRtcNsx_Process */
/* Demangled: WebRtcNsx_Process */
int WebRtcNsx_Process(void);

/* Symbol: WebRtcSpl_Resample44khzTo32khz */
/* Demangled: WebRtcSpl_Resample44khzTo32khz */
int WebRtcSpl_Resample44khzTo32khz(void);

/* Symbol: WebRtcAecm_kSinTable */
/* Demangled: WebRtcAecm_kSinTable */
extern void* WebRtcAecm_kSinTable;

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6StreamEJEEEPT_PS1_DpOT0_ */
/* Demangled: webrtc::audioproc::Stream* google::protobuf::Arena::CreateMaybeMessage<webrtc::audioproc::Stream>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN6webrtc9audioproc6StreamEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN3rtc10LogMessageD1Ev */
/* Demangled: rtc::LogMessage::~LogMessage() */
int _ZN3rtc10LogMessageD1Ev(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer27ApplyLowFrequencyCorrectionEv */
/* Demangled: webrtc::NonlinearBeamformer::ApplyLowFrequencyCorrection() */
int _ZN6webrtc19NonlinearBeamformer27ApplyLowFrequencyCorrectionEv(void);

/* Symbol: _ZN6webrtc15intelligibility13VarianceArray12WindowedStepEPKNSt3__17complexIfEEb */
/* Demangled: webrtc::intelligibility::VarianceArray::WindowedStep(std::__1::complex<float> const*, bool) */
int _ZN6webrtc15intelligibility13VarianceArray12WindowedStepEPKNSt3__17complexIfEEb(void);

/* Symbol: WebRtcSpl_ResetResample48khzTo8khz */
/* Demangled: WebRtcSpl_ResetResample48khzTo8khz */
int WebRtcSpl_ResetResample48khzTo8khz(void);

/* Symbol: _ZN6webrtc5Trace16set_level_filterEi */
/* Demangled: webrtc::Trace::set_level_filter(int) */
int _ZN6webrtc5Trace16set_level_filterEi(void);

/* Symbol: WebRtcAec_CreateResampler */
/* Demangled: WebRtcAec_CreateResampler */
int WebRtcAec_CreateResampler(void);

/* Symbol: WebRtcAecm_AsymFilt */
/* Demangled: WebRtcAecm_AsymFilt */
int WebRtcAecm_AsymFilt(void);

/* Symbol: _ZThn4_NK6webrtc20EchoCancellationImpl16InitializeHandleEPv */
/* Demangled: non-virtual thunk to webrtc::EchoCancellationImpl::InitializeHandle(void*) const */
int _ZThn4_NK6webrtc20EchoCancellationImpl16InitializeHandleEPv(void);

/* Symbol: WebRtcIsac_kQArRc5Levels */
/* Demangled: WebRtcIsac_kQArRc5Levels */
extern void* WebRtcIsac_kQArRc5Levels;

/* Symbol: _ZN6webrtc7WPDNodeD2Ev */
/* Demangled: webrtc::WPDNode::~WPDNode() */
int _ZN6webrtc7WPDNodeD2Ev(void);

/* Symbol: _ZN6webrtc9audioproc6Stream5ClearEv */
/* Demangled: webrtc::audioproc::Stream::Clear() */
int _ZN6webrtc9audioproc6Stream5ClearEv(void);

/* Symbol: WebRtcIsac_kQMeanLag3Mid */
/* Demangled: WebRtcIsac_kQMeanLag3Mid */
extern void* WebRtcIsac_kQMeanLag3Mid;

/* Symbol: WebRtcIsac_kQArRc6Cdf */
/* Demangled: WebRtcIsac_kQArRc6Cdf */
extern void* WebRtcIsac_kQArRc6Cdf;

/* Symbol: _ZN6webrtc9audioproc5EventD2Ev */
/* Demangled: webrtc::audioproc::Event::~Event() */
int _ZN6webrtc9audioproc5EventD2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl10InitializeEv */
/* Demangled: webrtc::AudioProcessingImpl::Initialize() */
int _ZN6webrtc19AudioProcessingImpl10InitializeEv(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl16InitializeHandleEPv */
/* Demangled: webrtc::EchoCancellationImpl::InitializeHandle(void*) const */
int _ZNK6webrtc20EchoCancellationImpl16InitializeHandleEPv(void);

/* Symbol: _ZNK6webrtc18HighPassFilterImpl10is_enabledEv */
/* Demangled: webrtc::HighPassFilterImpl::is_enabled() const */
int _ZNK6webrtc18HighPassFilterImpl10is_enabledEv(void);

/* Symbol: _ZN3rtc13CurrentTmTimeEP2tmPi */
/* Demangled: rtc::CurrentTmTime(tm*, int*) */
int _ZN3rtc13CurrentTmTimeEP2tmPi(void);

/* Symbol: _ZN3rtc11VPrintErrorEPKcSt9__va_list */
/* Demangled: rtc::VPrintError(char const*, std::__va_list) */
int _ZN3rtc11VPrintErrorEPKcSt9__va_list(void);

/* Symbol: WebRtcIsac_DecHistBisectMulti */
/* Demangled: WebRtcIsac_DecHistBisectMulti */
int WebRtcIsac_DecHistBisectMulti(void);

/* Symbol: WebRtcSpl_VectorBitShiftW32 */
/* Demangled: WebRtcSpl_VectorBitShiftW32 */
int WebRtcSpl_VectorBitShiftW32(void);

/* Symbol: _ZNK6webrtc9audioproc13ReverseStream13IsInitializedEv */
/* Demangled: webrtc::audioproc::ReverseStream::IsInitialized() const */
int _ZNK6webrtc9audioproc13ReverseStream13IsInitializedEv(void);

/* Symbol: _ZN3rtc17MakeCheckOpStringIjjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >* rtc::MakeCheckOpString<unsigned int, unsigned int>(unsigned int const&, unsigned int const&, char const*) */
int _ZN3rtc17MakeCheckOpStringIjjEEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKT_RKT0_PKc(void);

/* Symbol: _ZN6webrtc15intelligibility7NewMeanENSt3__17complexIfEES3_j */
/* Demangled: webrtc::intelligibility::NewMean(std::__1::complex<float>, std::__1::complex<float>, unsigned int) */
int _ZN6webrtc15intelligibility7NewMeanENSt3__17complexIfEES3_j(void);

/* Symbol: WebRtcSpl_AddVectorsAndShift */
/* Demangled: WebRtcSpl_AddVectorsAndShift */
int WebRtcSpl_AddVectorsAndShift(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl16is_rev_processedEv */
/* Demangled: webrtc::AudioProcessingImpl::is_rev_processed() const */
int _ZNK6webrtc19AudioProcessingImpl16is_rev_processedEv(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBankC2Ej */
/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank(unsigned int) */
int _ZN6webrtc19ThreeBandFilterBankC2Ej(void);

/* Symbol: WebRtcSpl_MaxIndexW16 */
/* Demangled: WebRtcSpl_MaxIndexW16 */
int WebRtcSpl_MaxIndexW16(void);

/* Symbol: _ZN6webrtc8Atomic32pLEi */
/* Demangled: webrtc::Atomic32::operator+=(int) */
int _ZN6webrtc8Atomic32pLEi(void);

/* Symbol: WebRtcAec_OverdriveAndSuppress */
/* Demangled: WebRtcAec_OverdriveAndSuppress */
extern void* WebRtcAec_OverdriveAndSuppress;

/* Symbol: _ZN6webrtc9audioproc14Test_StatisticD0Ev */
/* Demangled: webrtc::audioproc::Test_Statistic::~Test_Statistic() */
int _ZN6webrtc9audioproc14Test_StatisticD0Ev(void);

/* Symbol: _ZN6webrtc20CriticalSectionPosixD0Ev */
/* Demangled: webrtc::CriticalSectionPosix::~CriticalSectionPosix() */
int _ZN6webrtc20CriticalSectionPosixD0Ev(void);

/* Symbol: _ZN6webrtc9audioproc6Config27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::Config::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc6Config27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZNK6webrtc9audioproc10Test_Frame24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Test_Frame::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc10Test_Frame24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZNK6webrtc11AudioBuffer17split_bands_constEj */
/* Demangled: webrtc::AudioBuffer::split_bands_const(unsigned int) const */
int _ZNK6webrtc11AudioBuffer17split_bands_constEj(void);

/* Symbol: _ZNSt3__16vectorIN3rtc10scoped_ptrIN6webrtc20NoiseSuppressionImpl10SuppressorENS1_14DefaultDeleterIS5_EEEENS_9allocatorIS8_EEE8__appendEj */
/* Demangled: std::__1::vector<rtc::scoped_ptr<webrtc::NoiseSuppressionImpl::Suppressor, rtc::DefaultDeleter<webrtc::NoiseSuppressionImpl::Suppressor> >, std::__1::allocator<rtc::scoped_ptr<webrtc::NoiseSuppressionImpl::Suppressor, rtc::DefaultDeleter<webrtc::NoiseSuppressionImpl::Suppressor> > > >::__append(unsigned int) */
int _ZNSt3__16vectorIN3rtc10scoped_ptrIN6webrtc20NoiseSuppressionImpl10SuppressorENS1_14DefaultDeleterIS5_EEEENS_9allocatorIS8_EEE8__appendEj(void);

/* Symbol: WebRtcIsac_DecodeRc */
/* Demangled: WebRtcIsac_DecodeRc */
int WebRtcIsac_DecodeRc(void);

/* Symbol: WebRtcIsac_DecodePlc */
/* Demangled: WebRtcIsac_DecodePlc */
int WebRtcIsac_DecodePlc(void);

/* Symbol: WebRtcSpl_Resample48khzTo32khz */
/* Demangled: WebRtcSpl_Resample48khzTo32khz */
int WebRtcSpl_Resample48khzTo32khz(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplD2Ev */
/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
int _ZN6webrtc21EchoControlMobileImplD2Ev(void);

/* Symbol: _ZTVN6webrtc20NoiseSuppressionImplE */
/* Demangled: vtable for webrtc::NoiseSuppressionImpl */
extern void* _ZTVN6webrtc20NoiseSuppressionImplE;

/* Symbol: WebRtcIsac_DecorrelateIntraVec */
/* Demangled: WebRtcIsac_DecorrelateIntraVec */
int WebRtcIsac_DecorrelateIntraVec(void);

/* Symbol: WebRtcSpl_AutoCorrelation */
/* Demangled: WebRtcSpl_AutoCorrelation */
int WebRtcSpl_AutoCorrelation(void);

/* Symbol: _ZN6webrtc22ConditionVariablePosix6CreateEv */
/* Demangled: webrtc::ConditionVariablePosix::Create() */
int _ZN6webrtc22ConditionVariablePosix6CreateEv(void);

/* Symbol: WebRtcSpl_DotProductWithScale */
/* Demangled: WebRtcSpl_DotProductWithScale */
int WebRtcSpl_DotProductWithScale(void);

/* Symbol: _ZN6webrtc9audioproc10Test_FrameD1Ev */
/* Demangled: webrtc::audioproc::Test_Frame::~Test_Frame() */
int _ZN6webrtc9audioproc10Test_FrameD1Ev(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer5ResetEv */
/* Demangled: webrtc::VadCircularBuffer::Reset() */
int _ZN6webrtc17VadCircularBuffer5ResetEv(void);

/* Symbol: _ZTVN6webrtc10FIRFilterCE */
/* Demangled: vtable for webrtc::FIRFilterC */
extern void* _ZTVN6webrtc10FIRFilterCE;

/* Symbol: WebRtcIsac_kQInitIndexLagHi */
/* Demangled: WebRtcIsac_kQInitIndexLagHi */
extern void* WebRtcIsac_kQInitIndexLagHi;

/* Symbol: _ZN6webrtc12VadAudioProcD1Ev */
/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
int _ZN6webrtc12VadAudioProcD1Ev(void);

/* Symbol: _ZThn4_NK6webrtc15GainControlImpl14GetHandleErrorEPv */
/* Demangled: non-virtual thunk to webrtc::GainControlImpl::GetHandleError(void*) const */
int _ZThn4_NK6webrtc15GainControlImpl14GetHandleErrorEPv(void);

/* Symbol: _ZNK6webrtc20NoiseSuppressionImpl18speech_probabilityEv */
/* Demangled: webrtc::NoiseSuppressionImpl::speech_probability() const */
int _ZNK6webrtc20NoiseSuppressionImpl18speech_probabilityEv(void);

/* Symbol: WebRtcIsac_kQKltMaxIndGain */
/* Demangled: WebRtcIsac_kQKltMaxIndGain */
extern void* WebRtcIsac_kQKltMaxIndGain;

/* Symbol: _ZN6webrtc9audioproc5EventC1Ev */
/* Demangled: webrtc::audioproc::Event::Event() */
int _ZN6webrtc9audioproc5EventC1Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv */
/* Demangled: webrtc::AudioProcessingImpl::stream_delay_ms() const */
int _ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv(void);

/* Symbol: _ZNK3rtc14PlatformThread9IsRunningEv */
/* Demangled: rtc::PlatformThread::IsRunning() const */
int _ZNK3rtc14PlatformThread9IsRunningEv(void);

/* Symbol: WebRtcAec_kNormalSmoothingCoefficients */
/* Demangled: WebRtcAec_kNormalSmoothingCoefficients */
extern void* WebRtcAec_kNormalSmoothingCoefficients;

/* Symbol: _ZN6webrtc15GainControlImpl20ReadQueuedRenderDataEv */
/* Demangled: webrtc::GainControlImpl::ReadQueuedRenderData() */
int _ZN6webrtc15GainControlImpl20ReadQueuedRenderDataEv(void);

/* Symbol: WebRtcIsac_Poly2LarUB */
/* Demangled: WebRtcIsac_Poly2LarUB */
int WebRtcIsac_Poly2LarUB(void);

/* Symbol: WebRtcIsac_kQPitchLagCdfSizeLo */
/* Demangled: WebRtcIsac_kQPitchLagCdfSizeLo */
extern void* WebRtcIsac_kQPitchLagCdfSizeLo;

/* Symbol: WebRtcSpl_UpBy2IntToInt */
/* Demangled: WebRtcSpl_UpBy2IntToInt */
int WebRtcSpl_UpBy2IntToInt(void);

/* Symbol: WebRtcAec_Create */
/* Demangled: WebRtcAec_Create */
int WebRtcAec_Create(void);

/* Symbol: _ZNK6webrtc9audioproc6Stream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: webrtc::audioproc::Stream::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK6webrtc9audioproc6Stream24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl19ProcessStreamLockedEv */
/* Demangled: webrtc::AudioProcessingImpl::ProcessStreamLocked() */
int _ZN6webrtc19AudioProcessingImpl19ProcessStreamLockedEv(void);

/* Symbol: _ZN3rtc14PlatformThreadD2Ev */
/* Demangled: rtc::PlatformThread::~PlatformThread() */
int _ZN3rtc14PlatformThreadD2Ev(void);

/* Symbol: WebRtcIsac_kQKltCdfPtrGain */
/* Demangled: WebRtcIsac_kQKltCdfPtrGain */
extern void* WebRtcIsac_kQKltCdfPtrGain;

/* Symbol: WebRtcSpl_LevinsonDurbin */
/* Demangled: WebRtcSpl_LevinsonDurbin */
int WebRtcSpl_LevinsonDurbin(void);

/* Symbol: _ZN6webrtc10LogMessageD1Ev */
/* Demangled: webrtc::LogMessage::~LogMessage() */
int _ZN6webrtc10LogMessageD1Ev(void);

/* Symbol: _ZN6webrtc19NonlinearBeamformer28ApplyHighFrequencyCorrectionEv */
/* Demangled: webrtc::NonlinearBeamformer::ApplyHighFrequencyCorrection() */
int _ZN6webrtc19NonlinearBeamformer28ApplyHighFrequencyCorrectionEv(void);

/* Symbol: WebRtcIsac_kQGainInitIndex */
/* Demangled: WebRtcIsac_kQGainInitIndex */
extern void* WebRtcIsac_kQGainInitIndex;

/* Symbol: _ZN6webrtc9audioproc13ReverseStream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE */
/* Demangled: webrtc::audioproc::ReverseStream::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&) */
int _ZN6webrtc9audioproc13ReverseStream21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE(void);

/* Symbol: _ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii */
/* Demangled: webrtc::metrics::HistogramFactoryGetCounts(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
int _ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii(void);

/* Symbol: WebRtcIsac_AddMeanToLinearDomain */
/* Demangled: WebRtcIsac_AddMeanToLinearDomain */
int WebRtcIsac_AddMeanToLinearDomain(void);

/* Symbol: _ZN6webrtc9audioproc6ConfigD2Ev */
/* Demangled: webrtc::audioproc::Config::~Config() */
int _ZN6webrtc9audioproc6ConfigD2Ev(void);

/* Symbol: _ZTVN6webrtc9audioproc6StreamE */
/* Demangled: vtable for webrtc::audioproc::Stream */
extern void* _ZTVN6webrtc9audioproc6StreamE;

/* Symbol: _ZN6webrtc9audioproc10Test_FrameC1ERKS1_ */
/* Demangled: webrtc::audioproc::Test_Frame::Test_Frame(webrtc::audioproc::Test_Frame const&) */
int _ZN6webrtc9audioproc10Test_FrameC1ERKS1_(void);

/* Symbol: _ZNK6webrtc20EchoCancellationImpl20stream_drift_samplesEv */
/* Demangled: webrtc::EchoCancellationImpl::stream_drift_samples() const */
int _ZNK6webrtc20EchoCancellationImpl20stream_drift_samplesEv(void);

/* Symbol: _ZN3rtc9TimeNanosEv */
/* Demangled: rtc::TimeNanos() */
int _ZN3rtc9TimeNanosEv(void);

/* Symbol: _ZTVN6webrtc22ConditionVariablePosixE */
/* Demangled: vtable for webrtc::ConditionVariablePosix */
extern void* _ZTVN6webrtc22ConditionVariablePosixE;

/* Symbol: WebRtc_FreeBuffer */
/* Demangled: WebRtc_FreeBuffer */
int WebRtc_FreeBuffer(void);

/* Symbol: WebRtc_AllocateFarendBufferMemory */
/* Demangled: WebRtc_AllocateFarendBufferMemory */
int WebRtc_AllocateFarendBufferMemory(void);

/* Symbol: WebRtcIsac_EncodeJitterInfo */
/* Demangled: WebRtcIsac_EncodeJitterInfo */
int WebRtcIsac_EncodeJitterInfo(void);

/* Symbol: WebRtcSpl_FreeRealFFT */
/* Demangled: WebRtcSpl_FreeRealFFT */
int WebRtcSpl_FreeRealFFT(void);

/* Symbol: _ZN6webrtc15SplittingFilterC1Ejjj */
/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15SplittingFilterC1Ejjj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImpl19ProcessCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::VoiceDetectionImpl::ProcessCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc18VoiceDetectionImpl19ProcessCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZN3rtc5EventD2Ev */
/* Demangled: rtc::Event::~Event() */
int _ZN3rtc5EventD2Ev(void);

/* Symbol: _ZN3rtc10LogMessage8dbg_sev_E */
/* Demangled: rtc::LogMessage::dbg_sev_ */
extern void* _ZN3rtc10LogMessage8dbg_sev_E;

/* Symbol: WebRtcSpl_DivW32HiLow */
/* Demangled: WebRtcSpl_DivW32HiLow */
int WebRtcSpl_DivW32HiLow(void);

/* Symbol: _ZN6webrtc9audioproc10Test_Frame5ClearEv */
/* Demangled: webrtc::audioproc::Test_Frame::Clear() */
int _ZN6webrtc9audioproc10Test_Frame5ClearEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl19AllocateRenderQueueEv */
/* Demangled: webrtc::EchoControlMobileImpl::AllocateRenderQueue() */
int _ZN6webrtc21EchoControlMobileImpl19AllocateRenderQueueEv(void);

/* Symbol: WebRtcSpl_Resample8khzTo48khz */
/* Demangled: WebRtcSpl_Resample8khzTo48khz */
int WebRtcSpl_Resample8khzTo48khz(void);

/* Symbol: _ZN6webrtc9Histogram5ResetEv */
/* Demangled: webrtc::Histogram::Reset() */
int _ZN6webrtc9Histogram5ResetEv(void);

/* Symbol: _ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::AddLogToStream(rtc::LogSink*, rtc::LoggingSeverity) */
int _ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE(void);

/* Symbol: WebRtcIsac_QuantizeUncorrLar */
/* Demangled: WebRtcIsac_QuantizeUncorrLar */
int WebRtcIsac_QuantizeUncorrLar(void);

/* Symbol: WebRtcIsac_AllpassFilterForDec */
/* Demangled: WebRtcIsac_AllpassFilterForDec */
int WebRtcIsac_AllpassFilterForDec(void);

/* Symbol: WebRtcAec_InitAec */
/* Demangled: WebRtcAec_InitAec */
int WebRtcAec_InitAec(void);

/* Symbol: WebRtcAec_ProcessFrames */
/* Demangled: WebRtcAec_ProcessFrames */
int WebRtcAec_ProcessFrames(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect8SetLevelEi */
/* Demangled: webrtc::AgcManagerDirect::SetLevel(int) */
int _ZN6webrtc16AgcManagerDirect8SetLevelEi(void);

/* Symbol: _ZN6webrtc9audioproc10OutputData27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: webrtc::audioproc::OutputData::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN6webrtc9audioproc10OutputData27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: WebRtcIsac_GetRedPayload */
/* Demangled: WebRtcIsac_GetRedPayload */
int WebRtcIsac_GetRedPayload(void);

/* Symbol: _ZN6webrtc22CriticalSectionWrapper21CreateCriticalSectionEv */
/* Demangled: webrtc::CriticalSectionWrapper::CreateCriticalSection() */
int _ZN6webrtc22CriticalSectionWrapper21CreateCriticalSectionEv(void);

/* Symbol: WebRtcAec_Free */
/* Demangled: WebRtcAec_Free */
int WebRtcAec_Free(void);

/* Symbol: WebRtcNsx_Init */
/* Demangled: WebRtcNsx_Init */
int WebRtcNsx_Init(void);

/* Symbol: _ZN3rtc12FatalMessageC2EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: rtc::FatalMessage::FatalMessage(char const*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3rtc12FatalMessageC2EPKciPNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfVec6Ub12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec6Ub12 */
extern void* WebRtcIsac_kLpcShapeCdfVec6Ub12;

/* Symbol: _ZN6webrtc9TraceImplD0Ev */
/* Demangled: webrtc::TraceImpl::~TraceImpl() */
int _ZN6webrtc9TraceImplD0Ev(void);

/* Symbol: _ZN6webrtc7WPDTree6NodeAtEii */
/* Demangled: webrtc::WPDTree::NodeAt(int, int) */
int _ZN6webrtc7WPDTree6NodeAtEii(void);

/* Symbol: WebRtcAgc_AddMic */
/* Demangled: WebRtcAgc_AddMic */
int WebRtcAgc_AddMic(void);

/* Symbol: WebRtcAgc_ProcessVad */
/* Demangled: WebRtcAgc_ProcessVad */
int WebRtcAgc_ProcessVad(void);

/* Symbol: _ZN6webrtc11AudioBuffer14split_channelsENS_4BandE */
/* Demangled: webrtc::AudioBuffer::split_channels(webrtc::Band) */
int _ZN6webrtc11AudioBuffer14split_channelsENS_4BandE(void);

/* Symbol: _ZN6webrtc15GainControlImplD1Ev */
/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
int _ZN6webrtc15GainControlImplD1Ev(void);

/* Symbol: WebRtcIsac_PitchAnalysis */
/* Demangled: WebRtcIsac_PitchAnalysis */
int WebRtcIsac_PitchAnalysis(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf4Hi */
/* Demangled: WebRtcIsac_kQPitchLagCdf4Hi */
extern void* WebRtcIsac_kQPitchLagCdf4Hi;

/* Symbol: _ZN6webrtc9audioproc5Event9_Internal6configEPKS1_ */
/* Demangled: webrtc::audioproc::Event::_Internal::config(webrtc::audioproc::Event const*) */
int _ZN6webrtc9audioproc5Event9_Internal6configEPKS1_(void);

/* Symbol: _ZN6webrtc9audioproc35_Test_EchoMetrics_default_instance_E */
/* Demangled: webrtc::audioproc::_Test_EchoMetrics_default_instance_ */
extern void* _ZN6webrtc9audioproc35_Test_EchoMetrics_default_instance_E;

/* Symbol: scc_info_Test_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
/* Demangled: scc_info_Test_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto */
extern void* scc_info_Test_external_2fwebrtc_2fwebrtc_2fmodules_2faudio_5fprocessing_2ftest_2funittest_2eproto;

/* Symbol: WebRtcIsac_kLpcShapeCdfMatUb12 */
/* Demangled: WebRtcIsac_kLpcShapeCdfMatUb12 */
extern void* WebRtcIsac_kLpcShapeCdfMatUb12;

/* Symbol: _ZN6webrtc8Atomic32C2Ei */
/* Demangled: webrtc::Atomic32::Atomic32(int) */
int _ZN6webrtc8Atomic32C2Ei(void);

/* Symbol: _ZNK6webrtc9TraceImpl10TraceCheckENS_10TraceLevelE */
/* Demangled: webrtc::TraceImpl::TraceCheck(webrtc::TraceLevel) const */
int _ZNK6webrtc9TraceImpl10TraceCheckENS_10TraceLevelE(void);

/* Symbol: rftbsub_128 */
/* Demangled: rftbsub_128 */
extern void* rftbsub_128;

/* Symbol: _ZN6webrtc16AgcManagerDirect7ProcessEPKsji */
/* Demangled: webrtc::AgcManagerDirect::Process(short const*, unsigned int, int) */
int _ZN6webrtc16AgcManagerDirect7ProcessEPKsji(void);

/* Symbol: WebRtcIsac_kKltT2Gain */
/* Demangled: WebRtcIsac_kKltT2Gain */
extern void* WebRtcIsac_kKltT2Gain;

/* Symbol: WebRtcIsac_kLpcShapeCdfVec6Ub16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfVec6Ub16 */
extern void* WebRtcIsac_kLpcShapeCdfVec6Ub16;

/* Symbol: _ZN6webrtc9audioproc6ConfigC1Ev */
/* Demangled: webrtc::audioproc::Config::Config() */
int _ZN6webrtc9audioproc6ConfigC1Ev(void);

/* Symbol: _ZNK6webrtc9audioproc5Event11GetTypeNameEv */
/* Demangled: webrtc::audioproc::Event::GetTypeName() const */
int _ZNK6webrtc9audioproc5Event11GetTypeNameEv(void);

/* Symbol: _ZN6webrtc11AudioBufferC1Ejjjjj */
/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11AudioBufferC1Ejjjjj(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv */
/* Demangled: webrtc::EchoControlMobileImpl::ConfigureHandle(void*) const */
int _ZNK6webrtc21EchoControlMobileImpl15ConfigureHandleEPv(void);

/* Symbol: _ZN6webrtc9audioproc29_Test_Frame_default_instance_E */
/* Demangled: webrtc::audioproc::_Test_Frame_default_instance_ */
extern void* _ZN6webrtc9audioproc29_Test_Frame_default_instance_E;

/* Symbol: _ZN6webrtc18HighPassFilterImpl10InitializeEji */
/* Demangled: webrtc::HighPassFilterImpl::Initialize(unsigned int, int) */
int _ZN6webrtc18HighPassFilterImpl10InitializeEji(void);

/* Symbol: _ZN3rtc25hex_encode_with_delimiterEPKcjc */
/* Demangled: rtc::hex_encode_with_delimiter(char const*, unsigned int, char) */
int _ZN3rtc25hex_encode_with_delimiterEPKcjc(void);

/* Symbol: _ZN6webrtc9FIRFilter6CreateEPKfjj */
/* Demangled: webrtc::FIRFilter::Create(float const*, unsigned int, unsigned int) */
int _ZN6webrtc9FIRFilter6CreateEPKfjj(void);

/* Symbol: _ZN6webrtc11RealFourier8FftOrderEj */
/* Demangled: webrtc::RealFourier::FftOrder(unsigned int) */
int _ZN6webrtc11RealFourier8FftOrderEj(void);

/* Symbol: _ZN6webrtc18HighPassFilterImplD1Ev */
/* Demangled: webrtc::HighPassFilterImpl::~HighPassFilterImpl() */
int _ZN6webrtc18HighPassFilterImplD1Ev(void);

/* Symbol: WebRtcIsac_GetSnr */
/* Demangled: WebRtcIsac_GetSnr */
int WebRtcIsac_GetSnr(void);

/* Symbol: WebRtcIsac_kLpcShapeCdfMatUb16 */
/* Demangled: WebRtcIsac_kLpcShapeCdfMatUb16 */
extern void* WebRtcIsac_kLpcShapeCdfMatUb16;

/* Symbol: WebRtcIsac_DequantizeLpcParam */
/* Demangled: WebRtcIsac_DequantizeLpcParam */
int WebRtcIsac_DequantizeLpcParam(void);

/* Symbol: WebRtcIsac_kLpcGainCdfVec0 */
/* Demangled: WebRtcIsac_kLpcGainCdfVec0 */
extern void* WebRtcIsac_kLpcGainCdfVec0;

/* Symbol: _ZN6webrtc13SincResampler8SetRatioEd */
/* Demangled: webrtc::SincResampler::SetRatio(double) */
int _ZN6webrtc13SincResampler8SetRatioEd(void);

/* Symbol: WebRtcAgc_GetAddFarendError */
/* Demangled: WebRtcAgc_GetAddFarendError */
int WebRtcAgc_GetAddFarendError(void);

/* Symbol: WebRtcIsac_EncTerminate */
/* Demangled: WebRtcIsac_EncTerminate */
int WebRtcIsac_EncTerminate(void);

/* Symbol: WebRtcIsac_kLpcGainCdfVec1 */
/* Demangled: WebRtcIsac_kLpcGainCdfVec1 */
extern void* WebRtcIsac_kLpcGainCdfVec1;

/* Symbol: _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutEiS6_PKPf */
/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(float const* const*, unsigned int, int, webrtc::AudioProcessing::ChannelLayout, int, webrtc::AudioProcessing::ChannelLayout, float* const*) */
int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfjiNS_15AudioProcessing13ChannelLayoutEiS6_PKPf(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl11GetEchoPathEPvj */
/* Demangled: webrtc::EchoControlMobileImpl::GetEchoPath(void*, unsigned int) const */
int _ZNK6webrtc21EchoControlMobileImpl11GetEchoPathEPvj(void);

/* Symbol: WebRtcIsac_kLpcGainCdfVec2 */
/* Demangled: WebRtcIsac_kLpcGainCdfVec2 */
extern void* WebRtcIsac_kLpcGainCdfVec2;

/* Symbol: WebRtcAgc_ProcessAnalog */
/* Demangled: WebRtcAgc_ProcessAnalog */
int WebRtcAgc_ProcessAnalog(void);

/* Symbol: _ZN6webrtc15AudioProcessing20kNativeSampleRatesHzE */
/* Demangled: webrtc::AudioProcessing::kNativeSampleRatesHz */
extern void* _ZN6webrtc15AudioProcessing20kNativeSampleRatesHzE;

/* Symbol: _ZN6webrtc16RealFourierOouraC1Ei */
/* Demangled: webrtc::RealFourierOoura::RealFourierOoura(int) */
int _ZN6webrtc16RealFourierOouraC1Ei(void);

/* Symbol: _ZN6webrtc23IntelligibilityEnhancer24SolveForGainsGivenLambdaEfjPf */
/* Demangled: webrtc::IntelligibilityEnhancer::SolveForGainsGivenLambda(float, unsigned int, float*) */
int _ZN6webrtc23IntelligibilityEnhancer24SolveForGainsGivenLambdaEfjPf(void);

/* Symbol: WebRtcIsac_kLpcGainCdfVec3 */
/* Demangled: WebRtcIsac_kLpcGainCdfVec3 */
extern void* WebRtcIsac_kLpcGainCdfVec3;

/* Symbol: _ZNK6webrtc10TracePosix15AddDateTimeInfoEPc */
/* Demangled: webrtc::TracePosix::AddDateTimeInfo(char*) const */
int _ZNK6webrtc10TracePosix15AddDateTimeInfoEPc(void);

/* Symbol: WebRtcAec_FreeResampler */
/* Demangled: WebRtcAec_FreeResampler */
int WebRtcAec_FreeResampler(void);

/* Symbol: WebRtcAgc_UpdateAgcThresholds */
/* Demangled: WebRtcAgc_UpdateAgcThresholds */
int WebRtcAgc_UpdateAgcThresholds(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6StreamEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<webrtc::audioproc::Stream>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN6webrtc9audioproc6StreamEEEvPv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_ */
/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
int _ZN6webrtc21EchoControlMobileImplC1EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void);

/* Symbol: _ZN3rtc18TimeIsLaterOrEqualEjj */
/* Demangled: rtc::TimeIsLaterOrEqual(unsigned int, unsigned int) */
int _ZN3rtc18TimeIsLaterOrEqualEjj(void);

/* Symbol: _ZN6webrtc10DotProductERKNS_14CartesianPointIfEES3_ */
/* Demangled: webrtc::DotProduct(webrtc::CartesianPoint<float> const&, webrtc::CartesianPoint<float> const&) */
int _ZN6webrtc10DotProductERKNS_14CartesianPointIfEES3_(void);

/* Symbol: _ZN6webrtc11RealFourier19kFftBufferAlignmentE */
/* Demangled: webrtc::RealFourier::kFftBufferAlignment */
extern void* _ZN6webrtc11RealFourier19kFftBufferAlignmentE;

/* Symbol: WebRtcIsac_kLpcGainCdfVec4 */
/* Demangled: WebRtcIsac_kLpcGainCdfVec4 */
extern void* WebRtcIsac_kLpcGainCdfVec4;

/* Symbol: _ZN6webrtc9audioproc13ReverseStreamC2Ev */
/* Demangled: webrtc::audioproc::ReverseStream::ReverseStream() */
int _ZN6webrtc9audioproc13ReverseStreamC2Ev(void);

/* Symbol: _ZN6webrtc9audioproc4Test12InternalSwapEPS1_ */
/* Demangled: webrtc::audioproc::Test::InternalSwap(webrtc::audioproc::Test*) */
int _ZN6webrtc9audioproc4Test12InternalSwapEPS1_(void);

/* Symbol: _ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigE */
/* Demangled: webrtc::AudioProcessing::Create(webrtc::Config const&) */
int _ZN6webrtc15AudioProcessing6CreateERKNS_6ConfigE(void);

/* Symbol: _ZN6webrtc20EchoCancellationImplD0Ev */
/* Demangled: webrtc::EchoCancellationImpl::~EchoCancellationImpl() */
int _ZN6webrtc20EchoCancellationImplD0Ev(void);

/* Symbol: _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, char, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf3Lo */
/* Demangled: WebRtcIsac_kQPitchLagCdf3Lo */
extern void* WebRtcIsac_kQPitchLagCdf3Lo;

/* Symbol: WebRtcIsac_kLpcGainCdfVec5 */
/* Demangled: WebRtcIsac_kLpcGainCdfVec5 */
extern void* WebRtcIsac_kLpcGainCdfVec5;

/* Symbol: WebRtcSpl_MinIndexW32 */
/* Demangled: WebRtcSpl_MinIndexW32 */
int WebRtcSpl_MinIndexW32(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl20input_sample_rate_hzEv */
/* Demangled: webrtc::AudioProcessingImpl::input_sample_rate_hz() const */
int _ZNK6webrtc19AudioProcessingImpl20input_sample_rate_hzEv(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc13ComplexMatrixIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::ComplexMatrix<float>*, std::__1::allocator<webrtc::ComplexMatrix<float>*> >::__push_back_slow_path<webrtc::ComplexMatrix<float>* const&>(webrtc::ComplexMatrix<float>* const&) */
int _ZNSt3__16vectorIPN6webrtc13ComplexMatrixIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: WebRtcIsac_kFrameLengthInitIndex */
/* Demangled: WebRtcIsac_kFrameLengthInitIndex */
extern void* WebRtcIsac_kFrameLengthInitIndex;

/* Symbol: _ZN6webrtc9audioproc17Test_DelayMetrics9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::Test_DelayMetrics::MergeFrom(webrtc::audioproc::Test_DelayMetrics const&) */
int _ZN6webrtc9audioproc17Test_DelayMetrics9MergeFromERKS1_(void);

/* Symbol: _ZN6webrtc18LevelEstimatorImpl13ProcessStreamEPNS_11AudioBufferE */
/* Demangled: webrtc::LevelEstimatorImpl::ProcessStream(webrtc::AudioBuffer*) */
int _ZN6webrtc18LevelEstimatorImpl13ProcessStreamEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc13FloatS16ToS16EPKfjPs */
/* Demangled: webrtc::FloatS16ToS16(float const*, unsigned int, short*) */
int _ZN6webrtc13FloatS16ToS16EPKfjPs(void);

/* Symbol: _ZN6webrtc8Atomic32mIEi */
/* Demangled: webrtc::Atomic32::operator-=(int) */
int _ZN6webrtc8Atomic32mIEi(void);

/* Symbol: _ZNK6webrtc9audioproc6Config13IsInitializedEv */
/* Demangled: webrtc::audioproc::Config::IsInitialized() const */
int _ZNK6webrtc9audioproc6Config13IsInitializedEv(void);

/* Symbol: _ZN6webrtc9audioproc13ReverseStream9MergeFromERKS1_ */
/* Demangled: webrtc::audioproc::ReverseStream::MergeFrom(webrtc::audioproc::ReverseStream const&) */
int _ZN6webrtc9audioproc13ReverseStream9MergeFromERKS1_(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl20was_stream_delay_setEv */
/* Demangled: webrtc::AudioProcessingImpl::was_stream_delay_set() const */
int _ZNK6webrtc19AudioProcessingImpl20was_stream_delay_setEv(void);

/* Symbol: _ZN6webrtc11RealFourier15AllocRealBufferEi */
/* Demangled: webrtc::RealFourier::AllocRealBuffer(int) */
int _ZN6webrtc11RealFourier15AllocRealBufferEi(void);

/* Symbol: WebRtcIsac_GetCrc */
/* Demangled: WebRtcIsac_GetCrc */
int WebRtcIsac_GetCrc(void);

/* Symbol: WebRtcSpl_FilterMAFastQ12 */
/* Demangled: WebRtcSpl_FilterMAFastQ12 */
int WebRtcSpl_FilterMAFastQ12(void);

/* Symbol: _ZN6webrtc9audioproc16Test_EchoMetricsD1Ev */
/* Demangled: webrtc::audioproc::Test_EchoMetrics::~Test_EchoMetrics() */
int _ZN6webrtc9audioproc16Test_EchoMetricsD1Ev(void);

/* Symbol: _ZN6webrtc9audioproc23_Test_default_instance_E */
/* Demangled: webrtc::audioproc::_Test_default_instance_ */
extern void* _ZN6webrtc9audioproc23_Test_default_instance_E;

/* Symbol: _ZNK6webrtc19AudioProcessingImpl34render_check_rev_conversion_neededEv */
/* Demangled: webrtc::AudioProcessingImpl::render_check_rev_conversion_needed() const */
int _ZNK6webrtc19AudioProcessingImpl34render_check_rev_conversion_neededEv(void);

/* Symbol: _ZN3rtc6decodeEPcjPKcjc */
/* Demangled: rtc::decode(char*, unsigned int, char const*, unsigned int, char) */
int _ZN3rtc6decodeEPcjPKcjc(void);

/* Symbol: _ZNSt3__16vectorIPN6webrtc13ChannelBufferIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::ChannelBuffer<float>*, std::__1::allocator<webrtc::ChannelBuffer<float>*> >::__push_back_slow_path<webrtc::ChannelBuffer<float>* const&>(webrtc::ChannelBuffer<float>* const&) */
int _ZNSt3__16vectorIPN6webrtc13ChannelBufferIfEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: WebRtcIsac_kQKltQuantMinShape */
/* Demangled: WebRtcIsac_kQKltQuantMinShape */
extern void* WebRtcIsac_kQKltQuantMinShape;

/* Symbol: WebRtcSpl_FilterAR */
/* Demangled: WebRtcSpl_FilterAR */
int WebRtcSpl_FilterAR(void);

/* Symbol: _ZN6webrtc12EventWrapper6CreateEv */
/* Demangled: webrtc::EventWrapper::Create() */
int _ZN6webrtc12EventWrapper6CreateEv(void);

/* Symbol: _ZNK6webrtc9TraceImpl8AddLevelEPcNS_10TraceLevelE */
/* Demangled: webrtc::TraceImpl::AddLevel(char*, webrtc::TraceLevel) const */
int _ZNK6webrtc9TraceImpl8AddLevelEPcNS_10TraceLevelE(void);

/* Symbol: WebRtcVad_CalculateFeatures */
/* Demangled: WebRtcVad_CalculateFeatures */
int WebRtcVad_CalculateFeatures(void);

/* Symbol: WebRtcIsac_GetMinBytes */
/* Demangled: WebRtcIsac_GetMinBytes */
int WebRtcIsac_GetMinBytes(void);

/* Symbol: WebRtcIsac_kTransformTranspose */
/* Demangled: WebRtcIsac_kTransformTranspose */
extern void* WebRtcIsac_kTransformTranspose;

/* Symbol: _ZN6webrtc24ConditionVariableWrapper23CreateConditionVariableEv */
/* Demangled: webrtc::ConditionVariableWrapper::CreateConditionVariable() */
int _ZN6webrtc24ConditionVariableWrapper23CreateConditionVariableEv(void);

/* Symbol: _ZNK6webrtc11AudioBuffer10split_dataEv */
/* Demangled: webrtc::AudioBuffer::split_data() const */
int _ZNK6webrtc11AudioBuffer10split_dataEv(void);

/* Symbol: _ZTVN6webrtc18LevelEstimatorImplE */
/* Demangled: vtable for webrtc::LevelEstimatorImpl */
extern void* _ZTVN6webrtc18LevelEstimatorImplE;

/* Symbol: _ZN6webrtc19ThreeBandFilterBank12DownModulateEPKfjjPKPf */
/* Demangled: webrtc::ThreeBandFilterBank::DownModulate(float const*, unsigned int, unsigned int, float* const*) */
int _ZN6webrtc19ThreeBandFilterBank12DownModulateEPKfjjPKPf(void);

/* Symbol: WebRtcIsac_DecodeFrameLen */
/* Demangled: WebRtcIsac_DecodeFrameLen */
int WebRtcIsac_DecodeFrameLen(void);

/* Symbol: WebRtcIsac_GetBandwidthInfo */
/* Demangled: WebRtcIsac_GetBandwidthInfo */
int WebRtcIsac_GetBandwidthInfo(void);

/* Symbol: WebRtcIsac_kQPitchLagCdf1Mid */
/* Demangled: WebRtcIsac_kQPitchLagCdf1Mid */
extern void* WebRtcIsac_kQPitchLagCdf1Mid;

/* Symbol: WebRtcIsac_Dir2Lat */
/* Demangled: WebRtcIsac_Dir2Lat */
int WebRtcIsac_Dir2Lat(void);

/* Symbol: WebRtcAec_delay_agnostic_enabled */
/* Demangled: WebRtcAec_delay_agnostic_enabled */
int WebRtcAec_delay_agnostic_enabled(void);

/* Symbol: WebRtcAecm_Free */
/* Demangled: WebRtcAecm_Free */
int WebRtcAecm_Free(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_ */
/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl(webrtc::AudioProcessing const*, rtc::CriticalSection*, rtc::CriticalSection*) */
int _ZN6webrtc21EchoControlMobileImplC2EPKNS_15AudioProcessingEPN3rtc15CriticalSectionES6_(void);

/* Symbol: _ZNK6webrtc15GainControlImpl13DestroyHandleEPv */
/* Demangled: webrtc::GainControlImpl::DestroyHandle(void*) const */
int _ZNK6webrtc15GainControlImpl13DestroyHandleEPv(void);

/* Symbol: _ZN6webrtc18VoiceDetectionImplD1Ev */
/* Demangled: webrtc::VoiceDetectionImpl::~VoiceDetectionImpl() */
int _ZN6webrtc18VoiceDetectionImplD1Ev(void);

/* Symbol: _ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE */
/* Demangled: webrtc::EvaluateGmm(double const*, webrtc::GmmParameters const&) */
int _ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE(void);

/* Symbol: _ZN6webrtc7WPDNodeC1EjPKfj */
/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
int _ZN6webrtc7WPDNodeC1EjPKfj(void);

/* Symbol: aec_rdft_init */
/* Demangled: aec_rdft_init */
int aec_rdft_init(void);

/* Symbol: _Z15Linear2Loudnessd */
/* Demangled: Linear2Loudness(double) */
int _Z15Linear2Loudnessd(void);

/* Symbol: _ZN6webrtc3Agc13GetRmsErrorDbEPi */
/* Demangled: webrtc::Agc::GetRmsErrorDb(int*) */
int _ZN6webrtc3Agc13GetRmsErrorDbEPi(void);

/* Symbol: _ZN3rtc12FatalMessageD2Ev */
/* Demangled: rtc::FatalMessage::~FatalMessage() */
int _ZN3rtc12FatalMessageD2Ev(void);

/* Symbol: _ZThn4_N6webrtc15FileWrapperImpl5WriteEPKvj */
/* Demangled: non-virtual thunk to webrtc::FileWrapperImpl::Write(void const*, unsigned int) */
int _ZThn4_N6webrtc15FileWrapperImpl5WriteEPKvj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWEBRTC_AUDIO_PREPROCESSING_H */
