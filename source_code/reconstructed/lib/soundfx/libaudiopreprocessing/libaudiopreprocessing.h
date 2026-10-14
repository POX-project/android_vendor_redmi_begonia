/*
 * Reverse-Engineered ABI Specification for: libaudiopreprocessing.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiopreprocessing.so
 */

#ifndef BEGONIA_RE_LIBAUDIOPREPROCESSING_H
#define BEGONIA_RE_LIBAUDIOPREPROCESSING_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC1Ebbb */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::SubmoduleStates(bool, bool, bool) */
int _ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC1Ebbb(void);

/* Symbol: _ZN6webrtc29WebRtcAgc_UpdateAgcThresholdsEPNS_9LegacyAgcE */
/* Demangled: webrtc::WebRtcAgc_UpdateAgcThresholds(webrtc::LegacyAgc*) */
int _ZN6webrtc29WebRtcAgc_UpdateAgcThresholdsEPNS_9LegacyAgcE(void);

/* Symbol: _ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv */
/* Demangled: webrtc::AudioBuffer::MergeFrequencyBands() */
int _ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv(void);

/* Symbol: _ZN6webrtc15GainControlImpl23set_compression_gain_dbEi */
/* Demangled: webrtc::GainControlImpl::set_compression_gain_db(int) */
int _ZN6webrtc15GainControlImpl23set_compression_gain_dbEi(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurveD1Ev */
/* Demangled: webrtc::InterpolatedGainCurve::~InterpolatedGainCurve() */
int _ZN6webrtc21InterpolatedGainCurveD1Ev(void);

/* Symbol: _ZN3rtc14PlatformThread11StartThreadEPv */
/* Demangled: rtc::PlatformThread::StartThread(void*) */
int _ZN3rtc14PlatformThread11StartThreadEPv(void);

/* Symbol: _ZN6webrtc13StandaloneVad8AddAudioEPKsj */
/* Demangled: webrtc::StandaloneVad::AddAudio(short const*, unsigned int) */
int _ZN6webrtc13StandaloneVad8AddAudioEPKsj(void);

/* Symbol: _ZN6webrtc42WebRtc_SoftResetBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendEi */
/* Demangled: webrtc::WebRtc_SoftResetBinaryDelayEstimatorFarend(webrtc::BinaryDelayEstimatorFarend*, int) */
int _ZN6webrtc42WebRtc_SoftResetBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendEi(void);

/* Symbol: _ZN6webrtc16CustomProcessing17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE */
/* Demangled: webrtc::CustomProcessing::SetRuntimeSetting(webrtc::AudioProcessing::RuntimeSetting) */
int _ZN6webrtc16CustomProcessing17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE(void);

/* Symbol: _ZN6webrtc19SaturationProtector12UpdateMarginERKNS_12VadWithLevel19LevelAndProbabilityEf */
/* Demangled: webrtc::SaturationProtector::UpdateMargin(webrtc::VadWithLevel::LevelAndProbability const&, float) */
int _ZN6webrtc19SaturationProtector12UpdateMarginERKNS_12VadWithLevel19LevelAndProbabilityEf(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ENS1_17MaskingThresholdsES3_ff */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, float, float) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ENS1_17MaskingThresholdsES3_ff(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config9EchoModelC1ERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel(webrtc::EchoCanceller3Config::EchoModel const&) */
int _ZN6webrtc20EchoCanceller3Config9EchoModelC1ERKS1_(void);

/* Symbol: _ZN6webrtc20WebRtcAgc_get_configEPvPNS_15WebRtcAgcConfigE */
/* Demangled: webrtc::WebRtcAgc_get_config(void*, webrtc::WebRtcAgcConfig*) */
int _ZN6webrtc20WebRtcAgc_get_configEPvPNS_15WebRtcAgcConfigE(void);

/* Symbol: _ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*) */
int _ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZNK6webrtc14EchoCanceller310GetMetricsEv */
/* Demangled: webrtc::EchoCanceller3::GetMetrics() const */
int _ZNK6webrtc14EchoCanceller310GetMetricsEv(void);

/* Symbol: _ZN6webrtc4aec313MovingAverage7AverageEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE */
/* Demangled: webrtc::aec3::MovingAverage::Average(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc4aec313MovingAverage7AverageEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc16SignalClassifierC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::SignalClassifier::SignalClassifier(webrtc::ApmDataDumper*) */
int _ZN6webrtc16SignalClassifierC2EPNS_13ApmDataDumperE(void);

/* Symbol: _Z17Session_GetConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_GetConfig(preproc_session_s*, effect_config_s*) */
int _Z17Session_GetConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: _ZN6webrtc14HighPassFilter7ProcessEPNS_11AudioBufferEb */
/* Demangled: webrtc::HighPassFilter::Process(webrtc::AudioBuffer*, bool) */
int _ZN6webrtc14HighPassFilter7ProcessEPNS_11AudioBufferEb(void);

/* Symbol: _ZN6webrtc20WebRtcAgc_ProcessVadEPNS_6AgcVadEPKsj */
/* Demangled: webrtc::WebRtcAgc_ProcessVad(webrtc::AgcVad*, short const*, unsigned int) */
int _ZN6webrtc20WebRtcAgc_ProcessVadEPNS_6AgcVadEPKsj(void);

/* Symbol: _ZN6webrtc18ClockdriftDetectorD2Ev */
/* Demangled: webrtc::ClockdriftDetector::~ClockdriftDetector() */
int _ZN6webrtc18ClockdriftDetectorD2Ev(void);

/* Symbol: _ZN6webrtc16SubtractorOutputC1Ev */
/* Demangled: webrtc::SubtractorOutput::SubtractorOutput() */
int _ZN6webrtc16SubtractorOutputC1Ev(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter10UpdateSizeEv */
/* Demangled: webrtc::AdaptiveFirFilter::UpdateSize() */
int _ZN6webrtc17AdaptiveFirFilter10UpdateSizeEv(void);

/* Symbol: _ZNK6webrtc15GainControlImpl19stream_analog_levelEv */
/* Demangled: webrtc::GainControlImpl::stream_analog_level() const */
int _ZNK6webrtc15GainControlImpl19stream_analog_levelEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl23set_stream_analog_levelEi */
/* Demangled: webrtc::AudioProcessingImpl::set_stream_analog_level(int) */
int _ZN6webrtc19AudioProcessingImpl23set_stream_analog_levelEi(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEPKc */
/* Demangled: rtc::SimpleStringBuilder::operator<<(char const*) */
int _ZN3rtc19SimpleStringBuilderlsEPKc(void);

/* Symbol: _ZN6webrtc4aec329ComputeFrequencyResponse_NeonEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE */
/* Demangled: webrtc::aec3::ComputeFrequencyResponse_Neon(unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >*) */
int _ZN6webrtc4aec329ComputeFrequencyResponse_NeonEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimatorD2Ev */
/* Demangled: webrtc::SubbandErleEstimator::~SubbandErleEstimator() */
int _ZN6webrtc20SubbandErleEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc7MonoAgc15SetCaptureMutedEb */
/* Demangled: webrtc::MonoAgc::SetCaptureMuted(bool) */
int _ZN6webrtc7MonoAgc15SetCaptureMutedEb(void);

/* Symbol: _ZN6webrtc22NoiseSpectrumEstimatorC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::NoiseSpectrumEstimator::NoiseSpectrumEstimator(webrtc::ApmDataDumper*) */
int _ZN6webrtc22NoiseSpectrumEstimatorC2EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImplD2Ev */
/* Demangled: webrtc::TransientSuppressorImpl::~TransientSuppressorImpl() */
int _ZN6webrtc23TransientSuppressorImplD2Ev(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter9ConstrainEv */
/* Demangled: webrtc::AdaptiveFirFilter::Constrain() */
int _ZN6webrtc17AdaptiveFirFilter9ConstrainEv(void);

/* Symbol: _ZN6webrtc13FIRFilterNEONC1EPKfjj */
/* Demangled: webrtc::FIRFilterNEON::FIRFilterNEON(float const*, unsigned int, unsigned int) */
int _ZN6webrtc13FIRFilterNEONC1EPKfjj(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj */
/* Demangled: webrtc::FieldTrialParameter<unsigned int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int) */
int _ZN6webrtc19FieldTrialParameterIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15SubmoduleStates6UpdateEbbbbbbbbbb */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::Update(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool) */
int _ZN6webrtc19AudioProcessingImpl15SubmoduleStates6UpdateEbbbbbbbbbb(void);

/* Symbol: _ZN6webrtc11AdaptiveAgc5ResetEv */
/* Demangled: webrtc::AdaptiveAgc::Reset() */
int _ZN6webrtc11AdaptiveAgc5ResetEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::__map_value_compare<webrtc::ConfigOptionID, std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::less<webrtc::ConfigOptionID>, true>, std::__1::allocator<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZN6webrtc21StationarityEstimator21AreAllBandsStationaryEv */
/* Demangled: webrtc::StationarityEstimator::AreAllBandsStationary() */
int _ZN6webrtc21StationarityEstimator21AreAllBandsStationaryEv(void);

/* Symbol: _ZTVN6webrtc18FieldTrialOptionalIdEE */
/* Demangled: vtable for webrtc::FieldTrialOptional<double> */
extern void* _ZTVN6webrtc18FieldTrialOptionalIdEE;

/* Symbol: _ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*) */
int _ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc14PoleZeroFilterC1EPKfjS2_j */
/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc14PoleZeroFilterC1EPKfjS2_j(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::SubbandErleEstimator::SubbandErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc20SubbandErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: AELI */
/* Demangled: AELI */
extern void* AELI;

/* Symbol: _ZN6webrtc20EchoCanceller3Config5DelayaSERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::Delay::operator=(webrtc::EchoCanceller3Config::Delay const&) */
int _ZN6webrtc20EchoCanceller3Config5DelayaSERKS1_(void);

/* Symbol: _ZN6webrtc17VadCircularBufferC2Ei */
/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
int _ZN6webrtc17VadCircularBufferC2Ei(void);

/* Symbol: _ZN6webrtc10HistogramsC1Ev */
/* Demangled: webrtc::Histograms::Histograms() */
int _ZN6webrtc10HistogramsC1Ev(void);

/* Symbol: _ZN6webrtc25PriorSignalModelEstimatorC1Ef */
/* Demangled: webrtc::PriorSignalModelEstimator::PriorSignalModelEstimator(float) */
int _ZN6webrtc25PriorSignalModelEstimatorC1Ef(void);

/* Symbol: _ZN6webrtc11SignalModelC2Ev */
/* Demangled: webrtc::SignalModel::SignalModel() */
int _ZN6webrtc11SignalModelC2Ev(void);

/* Symbol: WebRtcSpl_RealInverseFFT */
/* Demangled: WebRtcSpl_RealInverseFFT */
int WebRtcSpl_RealInverseFFT(void);

/* Symbol: _ZN6webrtc14AudioConverterC2Ejjjj */
/* Demangled: webrtc::AudioConverter::AudioConverter(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc14AudioConverterC2Ejjjj(void);

/* Symbol: _ZN6webrtc18ClockdriftDetector6UpdateEi */
/* Demangled: webrtc::ClockdriftDetector::Update(int) */
int _ZN6webrtc18ClockdriftDetector6UpdateEi(void);

/* Symbol: _ZN6webrtc17SuppressionFilter9ApplyGainEN3rtc9ArrayViewIKNS_7FftDataELin4711EEES5_RKNSt3__15arrayIfLj65EEEfS5_PNS6_6vectorINSB_INSB_IfNS6_9allocatorIfEEEENSC_ISE_EEEENSC_ISG_EEEE */
/* Demangled: webrtc::SuppressionFilter::ApplyGain(rtc::ArrayView<webrtc::FftData const, -4711>, rtc::ArrayView<webrtc::FftData const, -4711>, std::__1::array<float, 65u> const&, float, rtc::ArrayView<webrtc::FftData const, -4711>, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*) */
int _ZN6webrtc17SuppressionFilter9ApplyGainEN3rtc9ArrayViewIKNS_7FftDataELin4711EEES5_RKNSt3__15arrayIfLj65EEEfS5_PNS6_6vectorINSB_INSB_IfNS6_9allocatorIfEEEENSC_ISE_EEEENSC_ISG_EEEE(void);

/* Symbol: _ZN6webrtc8OouraFftD2Ev */
/* Demangled: webrtc::OouraFft::~OouraFft() */
int _ZN6webrtc8OouraFftD2Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandProcessingActiveEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::RenderMultiBandProcessingActive() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandProcessingActiveEv(void);

/* Symbol: _ZN6webrtc26FixedDigitalLevelEstimatorC2EjPNS_13ApmDataDumperE */
/* Demangled: webrtc::FixedDigitalLevelEstimator::FixedDigitalLevelEstimator(unsigned int, webrtc::ApmDataDumper*) */
int _ZN6webrtc26FixedDigitalLevelEstimatorC2EjPNS_13ApmDataDumperE(void);

/* Symbol: _ZNK6webrtc21InterpolatedGainCurve11UpdateStatsEf */
/* Demangled: webrtc::InterpolatedGainCurve::UpdateStats(float) const */
int _ZNK6webrtc21InterpolatedGainCurve11UpdateStatsEf(void);

/* Symbol: _ZN6webrtc10Histograms5ClearEv */
/* Demangled: webrtc::Histograms::Clear() */
int _ZN6webrtc10Histograms5ClearEv(void);

/* Symbol: _ZN6webrtc5NrFftC1Ev */
/* Demangled: webrtc::NrFft::NrFft() */
int _ZN6webrtc5NrFftC1Ev(void);

/* Symbol: _ZNK6webrtc7Aec3Fft13ZeroPaddedFftEN3rtc9ArrayViewIKfLin4711EEENS0_6WindowEPNS_7FftDataE */
/* Demangled: webrtc::Aec3Fft::ZeroPaddedFft(rtc::ArrayView<float const, -4711>, webrtc::Aec3Fft::Window, webrtc::FftData*) const */
int _ZNK6webrtc7Aec3Fft13ZeroPaddedFftEN3rtc9ArrayViewIKfLin4711EEENS0_6WindowEPNS_7FftDataE(void);

/* Symbol: _ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN6webrtc7rnn_vad10Decimate2xEN3rtc9ArrayViewIKfLi864EEENS2_IfLi432EEE */
/* Demangled: webrtc::rnn_vad::Decimate2x(rtc::ArrayView<float const, 864>, rtc::ArrayView<float, 432>) */
int _ZN6webrtc7rnn_vad10Decimate2xEN3rtc9ArrayViewIKfLi864EEENS2_IfLi432EEE(void);

/* Symbol: _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf */
/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::StreamConfig const&, float* const*) */
int _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf(void);

/* Symbol: _ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioERKNS_11AudioBufferE */
/* Demangled: webrtc::GainControlImpl::AnalyzeCaptureAudio(webrtc::AudioBuffer const&) */
int _ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioERKNS_11AudioBufferE(void);

/* Symbol: WebRtcSpl_Resample16khzTo48khz */
/* Demangled: WebRtcSpl_Resample16khzTo48khz */
int WebRtcSpl_Resample16khzTo48khz(void);

/* Symbol: _ZN6webrtc16ExpApproximationEf */
/* Demangled: webrtc::ExpApproximation(float) */
int _ZN6webrtc16ExpApproximationEf(void);

/* Symbol: _ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityEPKc */
/* Demangled: rtc::LogSink::OnLogMessage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity, char const*) */
int _ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityEPKc(void);

/* Symbol: _ZN6webrtc11AudioBufferC2Ejjjjj */
/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11AudioBufferC2Ejjjjj(void);

/* Symbol: _ZN6webrtc15GainControlImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE */
/* Demangled: webrtc::GainControlImpl::ProcessRenderAudio(rtc::ArrayView<short const, -4711>) */
int _ZN6webrtc15GainControlImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimator24UpdateAccumulatedSpectraEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE */
/* Demangled: webrtc::SubbandErleEstimator::UpdateAccumulatedSpectra(rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN6webrtc20SubbandErleEstimator24UpdateAccumulatedSpectraEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_front(float*&&) */
int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s */
/* Demangled: Session_ReleaseEffect(preproc_session_s*, preproc_effect_s*) */
int _Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD1Ev */
/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::~RuntimeSettingEnqueuer() */
int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD1Ev(void);

/* Symbol: _ZN6webrtc8AecState11FilterDelay6UpdateEN3rtc9ArrayViewIKiLin4711EEERKNSt3__18optionalINS_13DelayEstimateEEEj */
/* Demangled: webrtc::AecState::FilterDelay::Update(rtc::ArrayView<int const, -4711>, std::__1::optional<webrtc::DelayEstimate> const&, unsigned int) */
int _ZN6webrtc8AecState11FilterDelay6UpdateEN3rtc9ArrayViewIKiLin4711EEERKNSt3__18optionalINS_13DelayEstimateEEEj(void);

/* Symbol: _ZN6webrtc10Subtractor7ProcessERKNS_12RenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEERKNS_20RenderSignalAnalyzerERKNS_8AecStateEN3rtc9ArrayViewINS_16SubtractorOutputELin4711EEE */
/* Demangled: webrtc::Subtractor::Process(webrtc::RenderBuffer const&, std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&, webrtc::RenderSignalAnalyzer const&, webrtc::AecState const&, rtc::ArrayView<webrtc::SubtractorOutput, -4711>) */
int _ZN6webrtc10Subtractor7ProcessERKNS_12RenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEERKNS_20RenderSignalAnalyzerERKNS_8AecStateEN3rtc9ArrayViewINS_16SubtractorOutputELin4711EEE(void);

/* Symbol: pffftd_min_fft_size */
/* Demangled: pffftd_min_fft_size */
int pffftd_min_fft_size(void);

/* Symbol: _ZN6webrtc7MonoAgcD1Ev */
/* Demangled: webrtc::MonoAgc::~MonoAgc() */
int _ZN6webrtc7MonoAgcD1Ev(void);

/* Symbol: _ZTVN6webrtc19FieldTrialParameterIjEE */
/* Demangled: vtable for webrtc::FieldTrialParameter<unsigned int> */
extern void* _ZTVN6webrtc19FieldTrialParameterIjEE;

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEES6_EEEvPKciS8_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEES6_EEEvPKciS8_DpRKT_E1t;

/* Symbol: _ZN6webrtc17PushSincResamplerD2Ev */
/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
int _ZN6webrtc17PushSincResamplerD2Ev(void);

/* Symbol: _ZNK6webrtc8OouraFft10cft1st_128EPf */
/* Demangled: webrtc::OouraFft::cft1st_128(float*) const */
int _ZNK6webrtc8OouraFft10cft1st_128EPf(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIbE10SetForTestEb */
/* Demangled: webrtc::FieldTrialParameter<bool>::SetForTest(bool) */
int _ZN6webrtc19FieldTrialParameterIbE10SetForTestEb(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl15HardRestorationEPf */
/* Demangled: webrtc::TransientSuppressorImpl::HardRestoration(float*) */
int _ZN6webrtc23TransientSuppressorImpl15HardRestorationEPf(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD1Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::~ApmCaptureState() */
int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD1Ev(void);

/* Symbol: _ZN6webrtc22QuantileNoiseEstimatorC2Ev */
/* Demangled: webrtc::QuantileNoiseEstimator::QuantileNoiseEstimator() */
int _ZN6webrtc22QuantileNoiseEstimatorC2Ev(void);

/* Symbol: _ZN6webrtc22CoarseFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj */
/* Demangled: webrtc::CoarseFilterUpdateGain::CoarseFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::CoarseConfiguration const&, unsigned int) */
int _ZN6webrtc22CoarseFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj(void);

/* Symbol: _ZN6webrtc21RenderDelayController6CreateERKNS_20EchoCanceller3ConfigEij */
/* Demangled: webrtc::RenderDelayController::Create(webrtc::EchoCanceller3Config const&, int, unsigned int) */
int _ZN6webrtc21RenderDelayController6CreateERKNS_20EchoCanceller3ConfigEij(void);

/* Symbol: _ZN3rtc10hex_encodeEPKcj */
/* Demangled: rtc::hex_encode(char const*, unsigned int) */
int _ZN3rtc10hex_encodeEPKcj(void);

/* Symbol: _ZN6webrtc28FieldTrialParameterInterfaceD1Ev */
/* Demangled: webrtc::FieldTrialParameterInterface::~FieldTrialParameterInterface() */
int _ZN6webrtc28FieldTrialParameterInterfaceD1Ev(void);

/* Symbol: _ZN6webrtc16WebRtc_lookaheadEPv */
/* Demangled: webrtc::WebRtc_lookahead(void*) */
int _ZN6webrtc16WebRtc_lookaheadEPv(void);

/* Symbol: _ZN6webrtc17WebRtcAgc_ProcessEPKvPKiPKPKsjPKPs */
/* Demangled: webrtc::WebRtcAgc_Process(void const*, int const*, short const* const*, unsigned int, short* const*) */
int _ZN6webrtc17WebRtcAgc_ProcessEPKvPKiPKPKsjPKPs(void);

/* Symbol: _ZN6webrtc8AecState24FilteringQualityAnalyzerC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::FilteringQualityAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc8AecState24FilteringQualityAnalyzerC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc3AgcC2Ev */
/* Demangled: webrtc::Agc::Agc() */
int _ZN6webrtc3AgcC2Ev(void);

/* Symbol: _Z11Agc2DisableP16preproc_effect_s */
/* Demangled: Agc2Disable(preproc_effect_s*) */
int _Z11Agc2DisableP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc14NoiseEstimator9PreUpdateEiN3rtc9ArrayViewIKfLi129EEEf */
/* Demangled: webrtc::NoiseEstimator::PreUpdate(int, rtc::ArrayView<float const, 129>, float) */
int _ZN6webrtc14NoiseEstimator9PreUpdateEiN3rtc9ArrayViewIKfLi129EEEf(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigC2ERKS0_ */
/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig const&) */
int _ZN6webrtc17InternalAPMConfigC2ERKS0_(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIiEptEv */
/* Demangled: webrtc::FieldTrialOptional<int>::operator->() const */
int _ZNK6webrtc18FieldTrialOptionalIiEptEv(void);

/* Symbol: _ZN6webrtc7rnn_vad17FeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi240EEENS3_IfLi42EEE */
/* Demangled: webrtc::rnn_vad::FeaturesExtractor::CheckSilenceComputeFeatures(rtc::ArrayView<float const, 240>, rtc::ArrayView<float, 42>) */
int _ZN6webrtc7rnn_vad17FeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi240EEENS3_IfLi42EEE(void);

/* Symbol: _ZN6webrtc22NoiseSpectrumEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEEb */
/* Demangled: webrtc::NoiseSpectrumEstimator::Update(rtc::ArrayView<float const, -4711>, bool) */
int _ZN6webrtc22NoiseSpectrumEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEEb(void);

/* Symbol: _ZN6webrtc7rnn_vad36ComputeAndPostProcessLpcCoefficientsEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi5EEE */
/* Demangled: webrtc::rnn_vad::ComputeAndPostProcessLpcCoefficients(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 5>) */
int _ZN6webrtc7rnn_vad36ComputeAndPostProcessLpcCoefficientsEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi5EEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16InitializeLockedEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked() */
int _ZN6webrtc19AudioProcessingImpl16InitializeLockedEv(void);

/* Symbol: _ZN6webrtc14HighPassFilterD1Ev */
/* Demangled: webrtc::HighPassFilter::~HighPassFilter() */
int _ZN6webrtc14HighPassFilterD1Ev(void);

/* Symbol: _ZN6webrtc9MovingMax6UpdateEf */
/* Demangled: webrtc::MovingMax::Update(float) */
int _ZN6webrtc9MovingMax6UpdateEf(void);

/* Symbol: _ZN6webrtc11AudioBuffer22ImportSplitChannelDataEjPKPKs */
/* Demangled: webrtc::AudioBuffer::ImportSplitChannelData(unsigned int, short const* const*) */
int _ZN6webrtc11AudioBuffer22ImportSplitChannelDataEjPKPKs(void);

/* Symbol: _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijj */
/* Demangled: webrtc::BlockProcessor::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
int _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijj(void);

/* Symbol: _ZN6webrtc24SubtractorOutputAnalyzer6UpdateEN3rtc9ArrayViewIKNS_16SubtractorOutputELin4711EEEPbS6_ */
/* Demangled: webrtc::SubtractorOutputAnalyzer::Update(rtc::ArrayView<webrtc::SubtractorOutput const, -4711>, bool*, bool*) */
int _ZN6webrtc24SubtractorOutputAnalyzer6UpdateEN3rtc9ArrayViewIKNS_16SubtractorOutputELin4711EEEPbS6_(void);

/* Symbol: _ZN6webrtc14SpectrumBufferC1Ejj */
/* Demangled: webrtc::SpectrumBuffer::SpectrumBuffer(unsigned int, unsigned int) */
int _ZN6webrtc14SpectrumBufferC1Ejj(void);

/* Symbol: WebRtcVad_InitCore */
/* Demangled: WebRtcVad_InitCore */
int WebRtcVad_InitCore(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE7reserveEj */
/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> >, std::__1::allocator<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> > > >::reserve(unsigned int) */
int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE7reserveEj(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC1Ei */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::EarlyReverbLengthEstimator(int) */
int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC1Ei(void);

/* Symbol: _ZN6webrtc8AecState15TransparentMode6UpdateEibbbbb */
/* Demangled: webrtc::AecState::TransparentMode::Update(int, bool, bool, bool, bool, bool) */
int _ZN6webrtc8AecState15TransparentMode6UpdateEibbbbb(void);

/* Symbol: _ZN6webrtc22EchoPathDelayEstimator13EstimateDelayERKNS_23DownsampledRenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEE */
/* Demangled: webrtc::EchoPathDelayEstimator::EstimateDelay(webrtc::DownsampledRenderBuffer const&, std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&) */
int _ZN6webrtc22EchoPathDelayEstimator13EstimateDelayERKNS_23DownsampledRenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEE(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimatorC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::ResidualEchoEstimator::ResidualEchoEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc21ResidualEchoEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc15cft1st_128_neonEPf */
/* Demangled: webrtc::cft1st_128_neon(float*) */
int _ZN6webrtc15cft1st_128_neonEPf(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKPKf */
/* Demangled: webrtc::AudioProcessingImpl::RecordProcessedCaptureStream(float const* const*) */
int _ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKPKf(void);

/* Symbol: _ZN3rtc7tracing20StartInternalCaptureEPKc */
/* Demangled: rtc::tracing::StartInternalCapture(char const*) */
int _ZN3rtc7tracing20StartInternalCaptureEPKc(void);

/* Symbol: WebRtcSpl_DownsampleBy2 */
/* Demangled: WebRtcSpl_DownsampleBy2 */
int WebRtcSpl_DownsampleBy2(void);

/* Symbol: _ZN6webrtc14EchoCanceller312RenderWriterD2Ev */
/* Demangled: webrtc::EchoCanceller3::RenderWriter::~RenderWriter() */
int _ZN6webrtc14EchoCanceller312RenderWriterD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN6webrtc13PushResamplerIsE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::PushResampler<short>::ChannelResampler, std::__1::allocator<webrtc::PushResampler<short>::ChannelResampler> >::__push_back_slow_path<webrtc::PushResampler<short>::ChannelResampler>(webrtc::PushResampler<short>::ChannelResampler&&) */
int _ZNSt3__16vectorIN6webrtc13PushResamplerIsE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZN6webrtc14AlignmentMixerC2Ejbbfb */
/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, bool, bool, float, bool) */
int _ZN6webrtc14AlignmentMixerC2Ejbbfb(void);

/* Symbol: _ZN6webrtc17SuppressionFilterC2ENS_16Aec3OptimizationEij */
/* Demangled: webrtc::SuppressionFilter::SuppressionFilter(webrtc::Aec3Optimization, int, unsigned int) */
int _ZN6webrtc17SuppressionFilterC2ENS_16Aec3OptimizationEij(void);

/* Symbol: _ZN6webrtc29AdaptiveModeLevelEstimatorAgc7ProcessEPKsji */
/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::Process(short const*, unsigned int, int) */
int _ZN6webrtc29AdaptiveModeLevelEstimatorAgc7ProcessEPKsji(void);

/* Symbol: _ZNK3rtc14PlatformThread12GetThreadRefEv */
/* Demangled: rtc::PlatformThread::GetThreadRef() const */
int _ZNK3rtc14PlatformThread12GetThreadRefEv(void);

/* Symbol: _ZN6webrtc37WebRtc_InitBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE */
/* Demangled: webrtc::WebRtc_InitBinaryDelayEstimatorFarend(webrtc::BinaryDelayEstimatorFarend*) */
int _ZN6webrtc37WebRtc_InitBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl8SuppressEPfjiPKfjS3_jfb */
/* Demangled: webrtc::TransientSuppressorImpl::Suppress(float*, unsigned int, int, float const*, unsigned int, float const*, unsigned int, float, bool) */
int _ZN6webrtc23TransientSuppressorImpl8SuppressEPfjiPKfjS3_jfb(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16ApmStatsReporter13GetStatisticsEv */
/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::GetStatistics() */
int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporter13GetStatisticsEv(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigeqERKS0_ */
/* Demangled: webrtc::InternalAPMConfig::operator==(webrtc::InternalAPMConfig const&) */
int _ZN6webrtc17InternalAPMConfigeqERKS0_(void);

/* Symbol: _ZTVN6webrtc20ResidualEchoDetectorE */
/* Demangled: vtable for webrtc::ResidualEchoDetector */
extern void* _ZTVN6webrtc20ResidualEchoDetectorE;

/* Symbol: _ZN6webrtc7MonoAgc19CheckVolumeAndResetEv */
/* Demangled: webrtc::MonoAgc::CheckVolumeAndReset() */
int _ZN6webrtc7MonoAgc19CheckVolumeAndResetEv(void);

/* Symbol: _ZN6webrtc7rnn_vad17FeaturesExtractorD2Ev */
/* Demangled: webrtc::rnn_vad::FeaturesExtractor::~FeaturesExtractor() */
int _ZN6webrtc7rnn_vad17FeaturesExtractorD2Ev(void);

/* Symbol: _ZN6webrtc13MovingMomentsC1Ej */
/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
int _ZN6webrtc13MovingMomentsC1Ej(void);

/* Symbol: _ZN6webrtc26AdaptiveDigitalGainApplierC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveDigitalGainApplier::AdaptiveDigitalGainApplier(webrtc::ApmDataDumper*) */
int _ZN6webrtc26AdaptiveDigitalGainApplierC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc12FrameBlockerD2Ev */
/* Demangled: webrtc::FrameBlocker::~FrameBlocker() */
int _ZN6webrtc12FrameBlockerD2Ev(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl14UpdateKeypressEb */
/* Demangled: webrtc::TransientSuppressorImpl::UpdateKeypress(bool) */
int _ZN6webrtc23TransientSuppressorImpl14UpdateKeypressEb(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25WriteAecDumpConfigMessageEb */
/* Demangled: webrtc::AudioProcessingImpl::WriteAecDumpConfigMessage(bool) */
int _ZN6webrtc19AudioProcessingImpl25WriteAecDumpConfigMessageEb(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def */
/* Demangled: webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def;

/* Symbol: _ZN6webrtc29NormalizedCovarianceEstimator6UpdateEffffff */
/* Demangled: webrtc::NormalizedCovarianceEstimator::Update(float, float, float, float, float, float) */
int _ZN6webrtc29NormalizedCovarianceEstimator6UpdateEffffff(void);

/* Symbol: _ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE */
/* Demangled: rtc::tracing::StartInternalCaptureToFile(__sFILE*) */
int _ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEESA_NS4_ILS5_1EiEESA_SC_SA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEESA_NS4_ILS5_1EiEESA_SC_SA_EEEvDpRKT_E1t;

/* Symbol: _ZN3rtc20SetCurrentThreadNameEPKc */
/* Demangled: rtc::SetCurrentThreadName(char const*) */
int _ZN3rtc20SetCurrentThreadNameEPKc(void);

/* Symbol: WebRtcIsac_InitPitchAnalysis */
/* Demangled: WebRtcIsac_InitPitchAnalysis */
int WebRtcIsac_InitPitchAnalysis(void);

/* Symbol: _ZZN7rnnoise18TansigApproximatedEfE12kTansigTable */
/* Demangled: rnnoise::TansigApproximated(float)::kTansigTable */
extern void* _ZZN7rnnoise18TansigApproximatedEfE12kTansigTable;

/* Symbol: WebRtcSpl_DownBy2ShortToInt */
/* Demangled: WebRtcSpl_DownBy2ShortToInt */
int WebRtcSpl_DownBy2ShortToInt(void);

/* Symbol: _ZN6webrtc20SignalModelEstimatorC2Ev */
/* Demangled: webrtc::SignalModelEstimator::SignalModelEstimator() */
int _ZN6webrtc20SignalModelEstimatorC2Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad19GatedRecurrentLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::ComputeOutput(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc7rnn_vad19GatedRecurrentLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<float, std::__1::allocator<float> >::__add_back_capacity() */
int _ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv(void);

/* Symbol: _Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_GetReverseConfig(preproc_session_s*, effect_config_s*) */
int _Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: _ZN6webrtc9FftBufferD1Ev */
/* Demangled: webrtc::FftBuffer::~FftBuffer() */
int _ZN6webrtc9FftBufferD1Ev(void);

/* Symbol: _ZN6webrtc23ReverbFrequencyResponseC2Ev */
/* Demangled: webrtc::ReverbFrequencyResponse::ReverbFrequencyResponse() */
int _ZN6webrtc23ReverbFrequencyResponseC2Ev(void);

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnum5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE */
/* Demangled: webrtc::AbstractFieldTrialEnum::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc22AbstractFieldTrialEnum5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE(void);

/* Symbol: _ZN6webrtc3AgcD0Ev */
/* Demangled: webrtc::Agc::~Agc() */
int _ZN6webrtc3AgcD0Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::Initialize(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE(void);

/* Symbol: _ZN6webrtc15GainControlImpl9ConfigureEv */
/* Demangled: webrtc::GainControlImpl::Configure() */
int _ZN6webrtc15GainControlImpl9ConfigureEv(void);

/* Symbol: _ZN6webrtc16WebRtcAgc_CreateEv */
/* Demangled: webrtc::WebRtcAgc_Create() */
int _ZN6webrtc16WebRtcAgc_CreateEv(void);

/* Symbol: WebRtcSpl_DotProductWithScale */
/* Demangled: WebRtcSpl_DotProductWithScale */
int WebRtcSpl_DotProductWithScale(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimatorC1ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::ReverbDecayEstimator::ReverbDecayEstimator(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc20ReverbDecayEstimatorC1ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<unsigned int>) */
int _ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE(void);

/* Symbol: _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, char, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC2Ev */
/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::AutoCorrelationCalculator() */
int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC2Ev(void);

/* Symbol: WebRtcAecm_BufferFarend */
/* Demangled: WebRtcAecm_BufferFarend */
int WebRtcAecm_BufferFarend(void);

/* Symbol: _ZN6webrtc14EchoAudibility26UpdateRenderNoiseEstimatorERKNS_14SpectrumBufferERKNS_11BlockBufferEb */
/* Demangled: webrtc::EchoAudibility::UpdateRenderNoiseEstimator(webrtc::SpectrumBuffer const&, webrtc::BlockBuffer const&, bool) */
int _ZN6webrtc14EchoAudibility26UpdateRenderNoiseEstimatorERKNS_14SpectrumBufferERKNS_11BlockBufferEb(void);

/* Symbol: _ZN6webrtc21StationarityEstimator20UpdateNoiseEstimatorEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE */
/* Demangled: webrtc::StationarityEstimator::UpdateNoiseEstimator(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>) */
int _ZN6webrtc21StationarityEstimator20UpdateNoiseEstimatorEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_ */
/* Demangled: webrtc::FieldTrialConstrained<int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::optional<int>, std::__1::optional<int>) */
int _ZN6webrtc21FieldTrialConstrainedIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_(void);

/* Symbol: _ZN6webrtc22AudioProcessingBuilderC1Ev */
/* Demangled: webrtc::AudioProcessingBuilder::AudioProcessingBuilder() */
int _ZN6webrtc22AudioProcessingBuilderC1Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: WebRtcAecm_echo_path_size_bytes */
/* Demangled: WebRtcAecm_echo_path_size_bytes */
int WebRtcAecm_echo_path_size_bytes(void);

/* Symbol: _ZN6webrtc13SincResampler13UpdateRegionsEb */
/* Demangled: webrtc::SincResampler::UpdateRegions(bool) */
int _ZN6webrtc13SincResampler13UpdateRegionsEb(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurve23approximation_params_x_E */
/* Demangled: webrtc::InterpolatedGainCurve::approximation_params_x_ */
extern void* _ZN6webrtc21InterpolatedGainCurve23approximation_params_x_E;

/* Symbol: _ZN6webrtc28WebRtcAgc_CalculateGainTableEPisshs */
/* Demangled: webrtc::WebRtcAgc_CalculateGainTable(int*, short, short, unsigned char, short) */
int _ZN6webrtc28WebRtcAgc_CalculateGainTableEPisshs(void);

/* Symbol: _ZN6webrtc11ReverbModelC2Ev */
/* Demangled: webrtc::ReverbModel::ReverbModel() */
int _ZN6webrtc11ReverbModelC2Ev(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator->() const */
int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv(void);

/* Symbol: _ZN6webrtc33WebRtc_CreateDelayEstimatorFarendEii */
/* Demangled: webrtc::WebRtc_CreateDelayEstimatorFarend(int, int) */
int _ZN6webrtc33WebRtc_CreateDelayEstimatorFarendEii(void);

/* Symbol: _ZNK6webrtc17AdaptiveFirFilter24ComputeFrequencyResponseEPNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEE */
/* Demangled: webrtc::AdaptiveFirFilter::ComputeFrequencyResponse(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >*) const */
int _ZNK6webrtc17AdaptiveFirFilter24ComputeFrequencyResponseEPNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous12UpdateMaxMinEv */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::UpdateMaxMin() */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous12UpdateMaxMinEv(void);

/* Symbol: _Z7AgcInitP16preproc_effect_s */
/* Demangled: AgcInit(preproc_effect_s*) */
int _Z7AgcInitP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc11AudioBuffer18RestoreNumChannelsEv */
/* Demangled: webrtc::AudioBuffer::RestoreNumChannels() */
int _ZN6webrtc11AudioBuffer18RestoreNumChannelsEv(void);

/* Symbol: _ZN6webrtc12VadAudioProcD1Ev */
/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
int _ZN6webrtc12VadAudioProcD1Ev(void);

/* Symbol: _ZN6webrtc12VadWithLevelD1Ev */
/* Demangled: webrtc::VadWithLevel::~VadWithLevel() */
int _ZN6webrtc12VadWithLevelD1Ev(void);

/* Symbol: _ZN6webrtc23DownsampledRenderBufferC1Ej */
/* Demangled: webrtc::DownsampledRenderBuffer::DownsampledRenderBuffer(unsigned int) */
int _ZN6webrtc23DownsampledRenderBufferC1Ej(void);

/* Symbol: _ZN6webrtc10Subtractor28FilterMisadjustmentEstimator5ResetEv */
/* Demangled: webrtc::Subtractor::FilterMisadjustmentEstimator::Reset() */
int _ZN6webrtc10Subtractor28FilterMisadjustmentEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc20AudioProcessingStatsC1Ev */
/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats() */
int _ZN6webrtc20AudioProcessingStatsC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN3rtc10LogMessage12LogStartTimeEv */
/* Demangled: rtc::LogMessage::LogStartTime() */
int _ZN3rtc10LogMessage12LogStartTimeEv(void);

/* Symbol: _ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijj */
/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
int _ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijj(void);

/* Symbol: _ZTVN3rtc16RefCountedObjectIN6webrtc20ResidualEchoDetectorEEE */
/* Demangled: vtable for rtc::RefCountedObject<webrtc::ResidualEchoDetector> */
extern void* _ZTVN3rtc16RefCountedObjectIN6webrtc20ResidualEchoDetectorEEE;

/* Symbol: _ZN6webrtc16SignalWithLevelsC2ENS_14AudioFrameViewIfEE */
/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::AudioFrameView<float>) */
int _ZN6webrtc16SignalWithLevelsC2ENS_14AudioFrameViewIfEE(void);

/* Symbol: _ZN6webrtc8AecState12InitialStateC2ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::AecState::InitialState::InitialState(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc8AecState12InitialStateC2ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZNK6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator4DumpEPNS_13ApmDataDumperE */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Dump(webrtc::ApmDataDumper*) const */
int _ZNK6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator4DumpEPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE */
/* Demangled: webrtc::AudioProcessingImpl::SetExtraOptions(webrtc::Config const&) */
int _ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE(void);

/* Symbol: _ZN6webrtc14NoiseEstimatorC2ERKNS_17SuppressionParamsE */
/* Demangled: webrtc::NoiseEstimator::NoiseEstimator(webrtc::SuppressionParams const&) */
int _ZN6webrtc14NoiseEstimatorC2ERKNS_17SuppressionParamsE(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter17SetSizePartitionsEjb */
/* Demangled: webrtc::AdaptiveFirFilter::SetSizePartitions(unsigned int, bool) */
int _ZN6webrtc17AdaptiveFirFilter17SetSizePartitionsEjb(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter6BiQuad5ResetEv */
/* Demangled: webrtc::CascadedBiQuadFilter::BiQuad::Reset() */
int _ZN6webrtc20CascadedBiQuadFilter6BiQuad5ResetEv(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE */
/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<int>) */
int _ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE(void);

/* Symbol: _ZN3rtc16CurrentThreadRefEv */
/* Demangled: rtc::CurrentThreadRef() */
int _ZN3rtc16CurrentThreadRefEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEb */
/* Demangled: webrtc::AudioProcessingImpl::InitializeHighPassFilter(bool) */
int _ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEb(void);

/* Symbol: WebRtcSpl_VectorBitShiftW32 */
/* Demangled: WebRtcSpl_VectorBitShiftW32 */
int WebRtcSpl_VectorBitShiftW32(void);

/* Symbol: _ZN6webrtc13SincResampler5FlushEv */
/* Demangled: webrtc::SincResampler::Flush() */
int _ZN6webrtc13SincResampler5FlushEv(void);

/* Symbol: _ZN6webrtc16SignalWithLevelsC1ERKS0_ */
/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::SignalWithLevels const&) */
int _ZN6webrtc16SignalWithLevelsC1ERKS0_(void);

/* Symbol: _ZN6webrtc7rnn_vad15ComputeDctTableEv */
/* Demangled: webrtc::rnn_vad::ComputeDctTable() */
int _ZN6webrtc7rnn_vad15ComputeDctTableEv(void);

/* Symbol: pffft_is_power_of_two */
/* Demangled: pffft_is_power_of_two */
int pffft_is_power_of_two(void);

/* Symbol: _ZN6webrtc14EchoAudibilityC2Eb */
/* Demangled: webrtc::EchoAudibility::EchoAudibility(bool) */
int _ZN6webrtc14EchoAudibilityC2Eb(void);

/* Symbol: _ZN6webrtc21StationarityEstimator15instance_count_E */
/* Demangled: webrtc::StationarityEstimator::instance_count_ */
extern void* _ZN6webrtc21StationarityEstimator15instance_count_E;

/* Symbol: _ZN6webrtc35WebRtc_is_robust_validation_enabledEPKv */
/* Demangled: webrtc::WebRtc_is_robust_validation_enabled(void const*) */
int _ZN6webrtc35WebRtc_is_robust_validation_enabledEPKv(void);

/* Symbol: WebRtcSpl_UpBy2IntToShort */
/* Demangled: WebRtcSpl_UpBy2IntToShort */
int WebRtcSpl_UpBy2IntToShort(void);

/* Symbol: _ZN6webrtc11GainApplier10InitializeEj */
/* Demangled: webrtc::GainApplier::Initialize(unsigned int) */
int _ZN6webrtc11GainApplier10InitializeEj(void);

/* Symbol: _ZNK6webrtc7rnn_vad18SpectralCorrelator23ComputeCrossCorrelationEN3rtc9ArrayViewIKfLin4711EEES5_NS3_IfLi20EEE */
/* Demangled: webrtc::rnn_vad::SpectralCorrelator::ComputeCrossCorrelation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 20>) const */
int _ZNK6webrtc7rnn_vad18SpectralCorrelator23ComputeCrossCorrelationEN3rtc9ArrayViewIKfLin4711EEES5_NS3_IfLi20EEE(void);

/* Symbol: _ZN6webrtc22ParseOptionalParameterIiEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<std::__1::optional<int> > webrtc::ParseOptionalParameter<int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc22ParseOptionalParameterIiEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc7rnn_vad14PitchEstimatorC2Ev */
/* Demangled: webrtc::rnn_vad::PitchEstimator::PitchEstimator() */
int _ZN6webrtc7rnn_vad14PitchEstimatorC2Ev(void);

/* Symbol: _ZN6webrtc7metrics7SamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: webrtc::metrics::Samples(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6webrtc7metrics7SamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc26AdaptiveModeLevelEstimator16UpdateEstimationERKNS_12VadWithLevel19LevelAndProbabilityE */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::UpdateEstimation(webrtc::VadWithLevel::LevelAndProbability const&) */
int _ZN6webrtc26AdaptiveModeLevelEstimator16UpdateEstimationERKNS_12VadWithLevel19LevelAndProbabilityE(void);

/* Symbol: _ZN6webrtc8AecState12InitialState5ResetEv */
/* Demangled: webrtc::AecState::InitialState::Reset() */
int _ZN6webrtc8AecState12InitialState5ResetEv(void);

/* Symbol: _ZNK6webrtc3Agc17target_level_dbfsEv */
/* Demangled: webrtc::Agc::target_level_dbfs() const */
int _ZNK6webrtc3Agc17target_level_dbfsEv(void);

/* Symbol: _ZN3rtc5EventD1Ev */
/* Demangled: rtc::Event::~Event() */
int _ZN3rtc5EventD1Ev(void);

/* Symbol: _ZN6webrtc9ResamplerD1Ev */
/* Demangled: webrtc::Resampler::~Resampler() */
int _ZN6webrtc9ResamplerD1Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad11RnnBasedVadC1Ev */
/* Demangled: webrtc::rnn_vad::RnnBasedVad::RnnBasedVad() */
int _ZN6webrtc7rnn_vad11RnnBasedVadC1Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad18SpectralCorrelatorC2Ev */
/* Demangled: webrtc::rnn_vad::SpectralCorrelator::SpectralCorrelator() */
int _ZN6webrtc7rnn_vad18SpectralCorrelatorC2Ev(void);

/* Symbol: _ZN6webrtc32WebRtc_binary_last_delay_qualityEPNS_20BinaryDelayEstimatorE */
/* Demangled: webrtc::WebRtc_binary_last_delay_quality(webrtc::BinaryDelayEstimator*) */
int _ZN6webrtc32WebRtc_binary_last_delay_qualityEPNS_20BinaryDelayEstimatorE(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC1Eiiibbi */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(int, int, int, bool, bool, int) */
int _ZN6webrtc16AgcManagerDirectC1Eiiibbi(void);

/* Symbol: _ZN6webrtc13FIRFilterNEOND2Ev */
/* Demangled: webrtc::FIRFilterNEON::~FIRFilterNEON() */
int _ZN6webrtc13FIRFilterNEOND2Ev(void);

/* Symbol: _ZN6webrtc13ErleEstimatorC1EjRKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::ErleEstimator::ErleEstimator(unsigned int, webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc13ErleEstimatorC1EjRKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: pffft_aligned_free */
/* Demangled: pffft_aligned_free */
int pffft_aligned_free(void);

/* Symbol: _ZN6webrtc9Resampler20ComputeResamplerModeEiiPNS0_13ResamplerModeE */
/* Demangled: webrtc::Resampler::ComputeResamplerMode(int, int, webrtc::Resampler::ResamplerMode*) */
int _ZN6webrtc9Resampler20ComputeResamplerModeEiiPNS0_13ResamplerModeE(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilterC2ERKNS0_18BiQuadCoefficientsEj */
/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(webrtc::CascadedBiQuadFilter::BiQuadCoefficients const&, unsigned int) */
int _ZN6webrtc20CascadedBiQuadFilterC2ERKNS0_18BiQuadCoefficientsEj(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl38recommended_stream_analog_level_lockedEv */
/* Demangled: webrtc::AudioProcessingImpl::recommended_stream_analog_level_locked() const */
int _ZNK6webrtc19AudioProcessingImpl38recommended_stream_analog_level_lockedEv(void);

/* Symbol: _ZN6webrtc7metrics6EnableEv */
/* Demangled: webrtc::metrics::Enable() */
int _ZN6webrtc7metrics6EnableEv(void);

/* Symbol: _ZN6webrtc17PushSincResampler3RunEjPf */
/* Demangled: webrtc::PushSincResampler::Run(unsigned int, float*) */
int _ZN6webrtc17PushSincResampler3RunEjPf(void);

/* Symbol: _ZNK6webrtc3Agc17voice_probabilityEv */
/* Demangled: webrtc::Agc::voice_probability() const */
int _ZNK6webrtc3Agc17voice_probabilityEv(void);

/* Symbol: WebRtcIsac_kLowerApFactorsFloat */
/* Demangled: WebRtcIsac_kLowerApFactorsFloat */
extern void* WebRtcIsac_kLowerApFactorsFloat;

/* Symbol: _ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS0_11RoutingModeE */
/* Demangled: webrtc::EchoControlMobileImpl::set_routing_mode(webrtc::EchoControlMobileImpl::RoutingMode) */
int _ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS0_11RoutingModeE(void);

/* Symbol: _ZN6webrtc10S16ToFloatEPKsjPf */
/* Demangled: webrtc::S16ToFloat(short const*, unsigned int, float*) */
int _ZN6webrtc10S16ToFloatEPKsjPf(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBankC2Ev */
/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank() */
int _ZN6webrtc19ThreeBandFilterBankC2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: WebRtc_WriteBuffer */
/* Demangled: WebRtc_WriteBuffer */
int WebRtc_WriteBuffer(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator10AccumulateEff */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Accumulate(float, float) */
int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator10AccumulateEff(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplD1Ev */
/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
int _ZN6webrtc21EchoControlMobileImplD1Ev(void);

/* Symbol: WebRtcAecm_Init */
/* Demangled: WebRtcAecm_Init */
int WebRtcAecm_Init(void);

/* Symbol: _ZN6webrtc14PoleZeroFilter6FilterEPKsjPf */
/* Demangled: webrtc::PoleZeroFilter::Filter(short const*, unsigned int, float*) */
int _ZN6webrtc14PoleZeroFilter6FilterEPKsjPf(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_3ExEESA_NS4_ILS5_1EiEESA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_3ExEESA_NS4_ILS5_1EiEESA_EEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc17LoudnessHistogram5ResetEv */
/* Demangled: webrtc::LoudnessHistogram::Reset() */
int _ZN6webrtc17LoudnessHistogram5ResetEv(void);

/* Symbol: pffft_zreorder */
/* Demangled: pffft_zreorder */
int pffft_zreorder(void);

/* Symbol: _ZN6webrtc11AdaptiveAgc7ProcessENS_14AudioFrameViewIfEEf */
/* Demangled: webrtc::AdaptiveAgc::Process(webrtc::AudioFrameView<float>, float) */
int _ZN6webrtc11AdaptiveAgc7ProcessENS_14AudioFrameViewIfEEf(void);

/* Symbol: _ZN6webrtc7LimiterD1Ev */
/* Demangled: webrtc::Limiter::~Limiter() */
int _ZN6webrtc7LimiterD1Ev(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer4MeanEv */
/* Demangled: webrtc::VadCircularBuffer::Mean() */
int _ZN6webrtc17VadCircularBuffer4MeanEv(void);

/* Symbol: WebRtcIsac_SplitAndFilterFloat */
/* Demangled: WebRtcIsac_SplitAndFilterFloat */
int WebRtcIsac_SplitAndFilterFloat(void);

/* Symbol: _ZN6webrtc11BlockFramer11InsertBlockERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE */
/* Demangled: webrtc::BlockFramer::InsertBlock(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&) */
int _ZN6webrtc11BlockFramer11InsertBlockERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE(void);

/* Symbol: _ZN6webrtc22CoarseFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj */
/* Demangled: webrtc::CoarseFilterUpdateGain::CoarseFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::CoarseConfiguration const&, unsigned int) */
int _ZN6webrtc22CoarseFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj(void);

/* Symbol: _ZN6webrtc22SubbandNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj */
/* Demangled: webrtc::SubbandNearendDetector::SubbandNearendDetector(webrtc::EchoCanceller3Config::Suppressor::SubbandNearendDetection const&, unsigned int) */
int _ZN6webrtc22SubbandNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj(void);

/* Symbol: _ZN6webrtc7Limiter13SetSampleRateEj */
/* Demangled: webrtc::Limiter::SetSampleRate(unsigned int) */
int _ZN6webrtc7Limiter13SetSampleRateEj(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl8SuppressEPfS1_S1_ */
/* Demangled: webrtc::TransientSuppressorImpl::Suppress(float*, float*, float*) */
int _ZN6webrtc23TransientSuppressorImpl8SuppressEPfS1_S1_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplD0Ev */
/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
int _ZN6webrtc19AudioProcessingImplD0Ev(void);

/* Symbol: _ZN6webrtc20AudioProcessingStatsC2ERKS0_ */
/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats(webrtc::AudioProcessingStats const&) */
int _ZN6webrtc20AudioProcessingStatsC2ERKS0_(void);

/* Symbol: _ZN6webrtc17PushSincResampler8ResampleEPKsjPsj */
/* Demangled: webrtc::PushSincResampler::Resample(short const*, unsigned int, short*, unsigned int) */
int _ZN6webrtc17PushSincResampler8ResampleEPKsjPsj(void);

/* Symbol: _ZN6webrtc15SplittingFilter8AnalysisEPKNS_13ChannelBufferIfEEPS2_ */
/* Demangled: webrtc::SplittingFilter::Analysis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
int _ZN6webrtc15SplittingFilter8AnalysisEPKNS_13ChannelBufferIfEEPS2_(void);

/* Symbol: _ZN6webrtc22EchoPathDelayEstimatorC1EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::EchoPathDelayEstimator::EchoPathDelayEstimator(webrtc::ApmDataDumper*, webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc22EchoPathDelayEstimatorC1EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterINSt3__18optionalIjEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<std::__1::optional<unsigned int> > webrtc::ParseTypedParameter<std::__1::optional<unsigned int> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIjEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN6webrtc13SincResamplerE */
/* Demangled: vtable for webrtc::SincResampler */
extern void* _ZTVN6webrtc13SincResamplerE;

/* Symbol: _ZN6webrtc26SpeechProbabilityEstimatorC2Ev */
/* Demangled: webrtc::SpeechProbabilityEstimator::SpeechProbabilityEstimator() */
int _ZN6webrtc26SpeechProbabilityEstimatorC2Ev(void);

/* Symbol: _ZNK6webrtc21StationarityEstimator13NoiseSpectrum8GetAlphaEv */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::GetAlpha() const */
int _ZNK6webrtc21StationarityEstimator13NoiseSpectrum8GetAlphaEv(void);

/* Symbol: _ZN6webrtc15SuppressionGain22LowNoiseRenderDetector6DetectERKNSt3__16vectorINS3_INS3_IfNS2_9allocatorIfEEEENS4_IS6_EEEENS4_IS8_EEEE */
/* Demangled: webrtc::SuppressionGain::LowNoiseRenderDetector::Detect(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&) */
int _ZN6webrtc15SuppressionGain22LowNoiseRenderDetector6DetectERKNSt3__16vectorINS3_INS3_IfNS2_9allocatorIfEEEENS4_IS6_EEEENS4_IS8_EEEE(void);

/* Symbol: _Z6NsInitP16preproc_effect_s */
/* Demangled: NsInit(preproc_effect_s*) */
int _Z6NsInitP16preproc_effect_s(void);

/* Symbol: _ZNK6webrtc16AgcManagerDirect17voice_probabilityEv */
/* Demangled: webrtc::AgcManagerDirect::voice_probability() const */
int _ZNK6webrtc16AgcManagerDirect17voice_probabilityEv(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderC1ENS_9ArrayViewIcLin4711EEE */
/* Demangled: rtc::SimpleStringBuilder::SimpleStringBuilder(rtc::ArrayView<char, -4711>) */
int _ZN3rtc19SimpleStringBuilderC1ENS_9ArrayViewIcLin4711EEE(void);

/* Symbol: _ZN6webrtc14PoleZeroFilterC2EPKfjS2_j */
/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc14PoleZeroFilterC2EPKfjS2_j(void);

/* Symbol: _ZN6webrtc14EchoCanceller316EmptyRenderQueueEv */
/* Demangled: webrtc::EchoCanceller3::EmptyRenderQueue() */
int _ZN6webrtc14EchoCanceller316EmptyRenderQueueEv(void);

/* Symbol: _ZN6webrtc4aec313MovingAverageD2Ev */
/* Demangled: webrtc::aec3::MovingAverage::~MovingAverage() */
int _ZN6webrtc4aec313MovingAverageD2Ev(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_SA_NS4_ILS5_7EdEESA_NS4_ILS5_1EiEESA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_SA_NS4_ILS5_7EdEESA_NS4_ILS5_1EiEESA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_EEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc13PushResamplerIsED2Ev */
/* Demangled: webrtc::PushResampler<short>::~PushResampler() */
int _ZN6webrtc13PushResamplerIsED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEEC2Ej */
/* Demangled: std::__1::vector<webrtc::TwoBandsStates, std::__1::allocator<webrtc::TwoBandsStates> >::vector(unsigned int) */
int _ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEEC2Ej(void);

/* Symbol: _ZN6webrtc4aec311ErlComputerERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE */
/* Demangled: webrtc::aec3::ErlComputer(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc4aec311ErlComputerERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE(void);

/* Symbol: _ZNK6webrtc20ApiCallJitterMetrics30WillReportMetricsAtNextCaptureEv */
/* Demangled: webrtc::ApiCallJitterMetrics::WillReportMetricsAtNextCapture() const */
int _ZNK6webrtc20ApiCallJitterMetrics30WillReportMetricsAtNextCaptureEv(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ERKS1_ */
/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ERKS1_(void);

/* Symbol: _ZNK6webrtc21ResidualEchoEstimator15GetEchoPathGainERKNS_8AecStateEb */
/* Demangled: webrtc::ResidualEchoEstimator::GetEchoPathGain(webrtc::AecState const&, bool) const */
int _ZNK6webrtc21ResidualEchoEstimator15GetEchoPathGainERKNS_8AecStateEb(void);

/* Symbol: _ZN6webrtc19NoiseLevelEstimator10InitializeEi */
/* Demangled: webrtc::NoiseLevelEstimator::Initialize(int) */
int _ZN6webrtc19NoiseLevelEstimator10InitializeEi(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc21FieldTrialConstrainedIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: WebRtcIsac_PitchfilterPre */
/* Demangled: WebRtcIsac_PitchfilterPre */
int WebRtcIsac_PitchfilterPre(void);

/* Symbol: _ZN6webrtc6ConfigC1Ev */
/* Demangled: webrtc::Config::Config() */
int _ZN6webrtc6ConfigC1Ev(void);

/* Symbol: _ZN6webrtc29NormalizedCovarianceEstimator5ClearEv */
/* Demangled: webrtc::NormalizedCovarianceEstimator::Clear() */
int _ZN6webrtc29NormalizedCovarianceEstimator5ClearEv(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj */
/* Demangled: webrtc::RefinedFilterUpdateGain::RefinedFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::RefinedConfiguration const&, unsigned int) */
int _ZN6webrtc23RefinedFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIdE5ValueEv */
/* Demangled: webrtc::FieldTrialOptional<double>::Value() const */
int _ZNK6webrtc18FieldTrialOptionalIdE5ValueEv(void);

/* Symbol: _ZN3rtc26TimestampWrapAroundHandlerC2Ev */
/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
int _ZN3rtc26TimestampWrapAroundHandlerC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_front(float* const&) */
int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKsLin4711EEE */
/* Demangled: webrtc::RmsLevel::Analyze(rtc::ArrayView<short const, -4711>) */
int _ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKsLin4711EEE(void);

/* Symbol: WebRtcSpl_ScaleAndAddVectorsWithRoundC */
/* Demangled: WebRtcSpl_ScaleAndAddVectorsWithRoundC */
int WebRtcSpl_ScaleAndAddVectorsWithRoundC(void);

/* Symbol: WebRtcVad_Downsampling */
/* Demangled: WebRtcVad_Downsampling */
int WebRtcVad_Downsampling(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimatorD2Ev */
/* Demangled: webrtc::ReverbDecayEstimator::~ReverbDecayEstimator() */
int _ZN6webrtc20ReverbDecayEstimatorD2Ev(void);

/* Symbol: _ZTVN6webrtc18FieldTrialOptionalIiEE */
/* Demangled: vtable for webrtc::FieldTrialOptional<int> */
extern void* _ZTVN6webrtc18FieldTrialOptionalIiEE;

/* Symbol: Session_CreateEffect */
/* Demangled: Session_CreateEffect */
int Session_CreateEffect(void);

/* Symbol: _ZN6webrtc26AdaptiveModeLevelEstimator17DebugDumpEstimateEv */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::DebugDumpEstimate() */
int _ZN6webrtc26AdaptiveModeLevelEstimator17DebugDumpEstimateEv(void);

/* Symbol: _ZNK6webrtc17VadCircularBuffer3GetEiPd */
/* Demangled: webrtc::VadCircularBuffer::Get(int, double*) const */
int _ZNK6webrtc17VadCircularBuffer3GetEiPd(void);

/* Symbol: _ZN6webrtc15SuppressionGain14GainParametersC1ERKNS_20EchoCanceller3Config10Suppressor6TuningE */
/* Demangled: webrtc::SuppressionGain::GainParameters::GainParameters(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
int _ZN6webrtc15SuppressionGain14GainParametersC1ERKNS_20EchoCanceller3Config10Suppressor6TuningE(void);

/* Symbol: _ZN6webrtc16rftfsub_128_neonEPf */
/* Demangled: webrtc::rftfsub_128_neon(float*) */
int _ZN6webrtc16rftfsub_128_neonEPf(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN3rtc10LogMessage10timestamp_E */
/* Demangled: rtc::LogMessage::timestamp_ */
extern void* _ZN3rtc10LogMessage10timestamp_E;

/* Symbol: _ZN6webrtc5Pffft11FloatBuffer7GetViewEv */
/* Demangled: webrtc::Pffft::FloatBuffer::GetView() */
int _ZN6webrtc5Pffft11FloatBuffer7GetViewEv(void);

/* Symbol: _ZN6webrtc13S16ToFloatS16EPKsjPf */
/* Demangled: webrtc::S16ToFloatS16(short const*, unsigned int, float*) */
int _ZN6webrtc13S16ToFloatS16EPKsjPf(void);

/* Symbol: _ZN6webrtc7metrics10SampleInfoC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij */
/* Demangled: webrtc::metrics::SampleInfo::SampleInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned int) */
int _ZN6webrtc7metrics10SampleInfoC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij(void);

/* Symbol: _ZN3rtc10hex_decodeEPcjPKcj */
/* Demangled: rtc::hex_decode(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc10hex_decodeEPcjPKcj(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config5DelayC2Ev */
/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay() */
int _ZN6webrtc20EchoCanceller3Config5DelayC2Ev(void);

/* Symbol: _ZN6webrtc4aec316ApplyFilter_NeonERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_ */
/* Demangled: webrtc::aec3::ApplyFilter_Neon(webrtc::RenderBuffer const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, webrtc::FftData*) */
int _ZN6webrtc4aec316ApplyFilter_NeonERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_(void);

/* Symbol: _ZN6webrtc12RenderBufferC1EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE */
/* Demangled: webrtc::RenderBuffer::RenderBuffer(webrtc::BlockBuffer*, webrtc::SpectrumBuffer*, webrtc::FftBuffer*) */
int _ZN6webrtc12RenderBufferC1EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE(void);

/* Symbol: _ZN6webrtc11ReverbModel5ResetEv */
/* Demangled: webrtc::ReverbModel::Reset() */
int _ZN6webrtc11ReverbModel5ResetEv(void);

/* Symbol: _ZN6webrtc20WebRtcAgc_VirtualMicEPvPKPsjjiPi */
/* Demangled: webrtc::WebRtcAgc_VirtualMic(void*, short* const*, unsigned int, unsigned int, int, int*) */
int _ZN6webrtc20WebRtcAgc_VirtualMicEPvPKPsjjiPi(void);

/* Symbol: _ZN6webrtc21StationarityEstimatorC2Ev */
/* Demangled: webrtc::StationarityEstimator::StationarityEstimator() */
int _ZN6webrtc21StationarityEstimatorC2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25InitializeGainController1Ev */
/* Demangled: webrtc::AudioProcessingImpl::InitializeGainController1() */
int _ZN6webrtc19AudioProcessingImpl25InitializeGainController1Ev(void);

/* Symbol: _ZN6webrtc8RmsLevelC1Ev */
/* Demangled: webrtc::RmsLevel::RmsLevel() */
int _ZN6webrtc8RmsLevelC1Ev(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimator35ComputeNumberOfActiveFilterSectionsERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE */
/* Demangled: webrtc::SignalDependentErleEstimator::ComputeNumberOfActiveFilterSections(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>) */
int _ZN6webrtc28SignalDependentErleEstimator35ComputeNumberOfActiveFilterSectionsERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_S7_ */
/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_S7_(void);

/* Symbol: sEffectInterfaceReverse */
/* Demangled: sEffectInterfaceReverse */
extern void* sEffectInterfaceReverse;

/* Symbol: _ZN6webrtc19AudioProcessingImpl11ApplyConfigERKNS_15AudioProcessing6ConfigE */
/* Demangled: webrtc::AudioProcessingImpl::ApplyConfig(webrtc::AudioProcessing::Config const&) */
int _ZN6webrtc19AudioProcessingImpl11ApplyConfigERKNS_15AudioProcessing6ConfigE(void);

/* Symbol: _ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_ */
/* Demangled: void webrtc::DownmixInterleavedToMono<short>(short const*, unsigned int, int, short*) */
int _ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_(void);

/* Symbol: _ZNK6webrtc14EchoCanceller316ActiveProcessingEv */
/* Demangled: webrtc::EchoCanceller3::ActiveProcessing() const */
int _ZNK6webrtc14EchoCanceller316ActiveProcessingEv(void);

/* Symbol: _ZN6webrtc19WebRtc_history_sizeEPKv */
/* Demangled: webrtc::WebRtc_history_size(void const*) */
int _ZN6webrtc19WebRtc_history_sizeEPKv(void);

/* Symbol: _ZN6webrtc7metrics10SampleInfoD2Ev */
/* Demangled: webrtc::metrics::SampleInfo::~SampleInfo() */
int _ZN6webrtc7metrics10SampleInfoD2Ev(void);

/* Symbol: _ZN6webrtc13PitchBasedVadD1Ev */
/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadD1Ev(void);

/* Symbol: _ZN6webrtc11BlockFramerC1Ejj */
/* Demangled: webrtc::BlockFramer::BlockFramer(unsigned int, unsigned int) */
int _ZN6webrtc11BlockFramerC1Ejj(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGain19UpdateCurrentConfigEv */
/* Demangled: webrtc::RefinedFilterUpdateGain::UpdateCurrentConfig() */
int _ZN6webrtc23RefinedFilterUpdateGain19UpdateCurrentConfigEv(void);

/* Symbol: _ZNK6webrtc15SuppressionGain19GainToNoAudibleEchoERKNSt3__15arrayIfLj65EEES5_S5_PS3_ */
/* Demangled: webrtc::SuppressionGain::GainToNoAudibleEcho(std::__1::array<float, 65u> const&, std::__1::array<float, 65u> const&, std::__1::array<float, 65u> const&, std::__1::array<float, 65u>*) const */
int _ZNK6webrtc15SuppressionGain19GainToNoAudibleEchoERKNSt3__15arrayIfLj65EEES5_S5_PS3_(void);

/* Symbol: _ZN6webrtc36WebRtc_SoftResetDelayEstimatorFarendEPvi */
/* Demangled: webrtc::WebRtc_SoftResetDelayEstimatorFarend(void*, int) */
int _ZN6webrtc36WebRtc_SoftResetDelayEstimatorFarendEPvi(void);

/* Symbol: _ZN6webrtc20ResidualEchoDetectorD2Ev */
/* Demangled: webrtc::ResidualEchoDetector::~ResidualEchoDetector() */
int _ZN6webrtc20ResidualEchoDetectorD2Ev(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningaSERKS2_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::operator=(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningaSERKS2_(void);

/* Symbol: WebRtcSpl_Resample8khzTo48khz */
/* Demangled: WebRtcSpl_Resample8khzTo48khz */
int WebRtcSpl_Resample8khzTo48khz(void);

/* Symbol: _ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE */
/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::BlockProcessor, std::__1::default_delete<webrtc::BlockProcessor> >) */
int _ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC2ERKNS_20EchoCanceller3Config4ErleE */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::ErleInstantaneous(webrtc::EchoCanceller3Config::Erle const&) */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC2ERKNS_20EchoCanceller3Config4ErleE(void);

/* Symbol: _ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEiRKNS1_8optionalIfEEb */
/* Demangled: webrtc::ReverbFrequencyResponse::Update(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, int, std::__1::optional<float> const&, bool) */
int _ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEiRKNS1_8optionalIfEEb(void);

/* Symbol: _ZN3rtc14PlatformThreadD2Ev */
/* Demangled: rtc::PlatformThread::~PlatformThread() */
int _ZN3rtc14PlatformThreadD2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl14ApmRenderStateD1Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::~ApmRenderState() */
int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD2Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::~ApmStatsReporter() */
int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD2Ev(void);

/* Symbol: _ZNK6webrtc21MeanVarianceEstimator4meanEv */
/* Demangled: webrtc::MeanVarianceEstimator::mean() const */
int _ZNK6webrtc21MeanVarianceEstimator4meanEv(void);

/* Symbol: _ZNK6webrtc21InterpolatedGainCurve12RegionLogger14LogRegionStatsERKNS0_5StatsE */
/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::LogRegionStats(webrtc::InterpolatedGainCurve::Stats const&) const */
int _ZNK6webrtc21InterpolatedGainCurve12RegionLogger14LogRegionStatsERKNS0_5StatsE(void);

/* Symbol: _ZN6webrtc14HighPassFilterC2Eij */
/* Demangled: webrtc::HighPassFilter::HighPassFilter(int, unsigned int) */
int _ZN6webrtc14HighPassFilterC2Eij(void);

/* Symbol: pffft_new_setup */
/* Demangled: pffft_new_setup */
int pffft_new_setup(void);

/* Symbol: _ZN6webrtc7metrics31HistogramFactoryGetCountsLinearERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii */
/* Demangled: webrtc::metrics::HistogramFactoryGetCountsLinear(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
int _ZN6webrtc7metrics31HistogramFactoryGetCountsLinearERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii(void);

/* Symbol: WebRtcSpl_Resample32khzTo24khz */
/* Demangled: WebRtcSpl_Resample32khzTo24khz */
int WebRtcSpl_Resample32khzTo24khz(void);

/* Symbol: _ZTVN6webrtc20CompositionConverterE */
/* Demangled: vtable for webrtc::CompositionConverter */
extern void* _ZTVN6webrtc20CompositionConverterE;

/* Symbol: _Z9AecCreateP16preproc_effect_s */
/* Demangled: AecCreate(preproc_effect_s*) */
int _Z9AecCreateP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc14AecDumpFactory6CreateEP7__sFILExPN3rtc9TaskQueueE */
/* Demangled: webrtc::AecDumpFactory::Create(__sFILE*, long long, rtc::TaskQueue*) */
int _ZN6webrtc14AecDumpFactory6CreateEP7__sFILExPN3rtc9TaskQueueE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16ApmStatsReporter16UpdateStatisticsERKNS_20AudioProcessingStatsE */
/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::UpdateStatistics(webrtc::AudioProcessingStats const&) */
int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporter16UpdateStatisticsERKNS_20AudioProcessingStatsE(void);

/* Symbol: _ZN6webrtc15GainControlImplC2Ev */
/* Demangled: webrtc::GainControlImpl::GainControlImpl() */
int _ZN6webrtc15GainControlImplC2Ev(void);

/* Symbol: _ZTVN6webrtc13FIRFilterNEONE */
/* Demangled: vtable for webrtc::FIRFilterNEON */
extern void* _ZTVN6webrtc13FIRFilterNEONE;

/* Symbol: _ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb */
/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::vector(unsigned int, bool const&) */
int _ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb(void);

/* Symbol: _ZN6webrtc14EchoCanceller319SetAudioBufferDelayEi */
/* Demangled: webrtc::EchoCanceller3::SetAudioBufferDelay(int) */
int _ZN6webrtc14EchoCanceller319SetAudioBufferDelayEi(void);

/* Symbol: _ZN6webrtc19EchoPathVariabilityC1EbNS0_15DelayAdjustmentEb */
/* Demangled: webrtc::EchoPathVariability::EchoPathVariability(bool, webrtc::EchoPathVariability::DelayAdjustment, bool) */
int _ZN6webrtc19EchoPathVariabilityC1EbNS0_15DelayAdjustmentEb(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd */
/* Demangled: webrtc::FieldTrialParameter<double>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double) */
int _ZN6webrtc19FieldTrialParameterIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd(void);

/* Symbol: _ZNK6webrtc14FieldTrialFlagcvbEv */
/* Demangled: webrtc::FieldTrialFlag::operator bool() const */
int _ZNK6webrtc14FieldTrialFlagcvbEv(void);

/* Symbol: _Z12UuidToProcIdPK12audio_uuid_s */
/* Demangled: UuidToProcId(audio_uuid_s const*) */
int _Z12UuidToProcIdPK12audio_uuid_s(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN6webrtc14EchoCanceller3D1Ev */
/* Demangled: webrtc::EchoCanceller3::~EchoCanceller3() */
int _ZN6webrtc14EchoCanceller3D1Ev(void);

/* Symbol: _ZNK6webrtc20SubbandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE */
/* Demangled: webrtc::SubbandErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
int _ZNK6webrtc20SubbandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void);

/* Symbol: _ZN6webrtc21StationarityEstimator13NoiseSpectrumC1Ev */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::NoiseSpectrum() */
int _ZN6webrtc21StationarityEstimator13NoiseSpectrumC1Ev(void);

/* Symbol: _ZNK6webrtc15SuppressionGain10GetMaxGainEN3rtc9ArrayViewIfLin4711EEE */
/* Demangled: webrtc::SuppressionGain::GetMaxGain(rtc::ArrayView<float, -4711>) const */
int _ZNK6webrtc15SuppressionGain10GetMaxGainEN3rtc9ArrayViewIfLin4711EEE(void);

/* Symbol: _ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE */
/* Demangled: webrtc::SetupEventTracer(unsigned char const* (*)(char const*), void (*)(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char)) */
int _ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE(void);

/* Symbol: _ZN6webrtc31WebRtcAecm_StoreAdaptiveChannelE */
/* Demangled: webrtc::WebRtcAecm_StoreAdaptiveChannel */
extern void* _ZN6webrtc31WebRtcAecm_StoreAdaptiveChannelE;

/* Symbol: WebRtcAecm_GetEchoPath */
/* Demangled: WebRtcAecm_GetEchoPath */
int WebRtcAecm_GetEchoPath(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKfEES9_S9_ */
/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKfEES9_S9_ */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKfEES9_S9_(void);

/* Symbol: _ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj */
/* Demangled: webrtc::VadAudioProc::GetLpcPolynomials(double*, unsigned int) */
int _ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj(void);

/* Symbol: _ZN6webrtc11AdaptiveAgcD2Ev */
/* Demangled: webrtc::AdaptiveAgc::~AdaptiveAgc() */
int _ZN6webrtc11AdaptiveAgcD2Ev(void);

/* Symbol: _ZN3rtc10LogMessage14streams_empty_E */
/* Demangled: rtc::LogMessage::streams_empty_ */
extern void* _ZN3rtc10LogMessage14streams_empty_E;

/* Symbol: _ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: rtc::hex_decode(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurve12RegionLoggerC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_ */
/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::RegionLogger(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC2Ebbb */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::SubmoduleStates(bool, bool, bool) */
int _ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC2Ebbb(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25ProcessRenderStreamLockedEv */
/* Demangled: webrtc::AudioProcessingImpl::ProcessRenderStreamLocked() */
int _ZN6webrtc19AudioProcessingImpl25ProcessRenderStreamLockedEv(void);

/* Symbol: _ZN6webrtc7Limiter7ProcessENS_14AudioFrameViewIfEE */
/* Demangled: webrtc::Limiter::Process(webrtc::AudioFrameView<float>) */
int _ZN6webrtc7Limiter7ProcessENS_14AudioFrameViewIfEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::__map_value_compare<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::less<std::__1::basic_string_view<char, std::__1::char_traits<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN6webrtc7WPDNodeC1EjPKfj */
/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
int _ZN6webrtc7WPDNodeC1EjPKfj(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates30RenderFullBandProcessingActiveEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::RenderFullBandProcessingActive() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates30RenderFullBandProcessingActiveEv(void);

/* Symbol: WebRtcSpl_UpBy2IntToInt */
/* Demangled: WebRtcSpl_UpBy2IntToInt */
int WebRtcSpl_UpBy2IntToInt(void);

/* Symbol: _ZN6webrtc15SuppressionGainD1Ev */
/* Demangled: webrtc::SuppressionGain::~SuppressionGain() */
int _ZN6webrtc15SuppressionGainD1Ev(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimatorD2Ev */
/* Demangled: webrtc::SignalDependentErleEstimator::~SignalDependentErleEstimator() */
int _ZN6webrtc28SignalDependentErleEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC2Eiiibbi */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(int, int, int, bool, bool, int) */
int _ZN6webrtc16AgcManagerDirectC2Eiiibbi(void);

/* Symbol: _ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE */
/* Demangled: rtc::PlatformThread::SetPriority(rtc::ThreadPriority) */
int _ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE(void);

/* Symbol: _ZN6webrtc9MovingMaxC2Ej */
/* Demangled: webrtc::MovingMax::MovingMax(unsigned int) */
int _ZN6webrtc9MovingMaxC2Ej(void);

/* Symbol: _ZN6webrtc14LevelEstimatorD1Ev */
/* Demangled: webrtc::LevelEstimator::~LevelEstimator() */
int _ZN6webrtc14LevelEstimatorD1Ev(void);

/* Symbol: WebRtcSpl_AnalysisQMF */
/* Demangled: WebRtcSpl_AnalysisQMF */
int WebRtcSpl_AnalysisQMF(void);

/* Symbol: _ZN6webrtc13SincResamplerD1Ev */
/* Demangled: webrtc::SincResampler::~SincResampler() */
int _ZN6webrtc13SincResamplerD1Ev(void);

/* Symbol: _ZN6webrtc15SuppressionGain7GetGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_S7_RKNS_20RenderSignalAnalyzerERKNS_8AecStateERKNS3_6vectorINSE_INSE_IfNS3_9allocatorIfEEEENSF_ISH_EEEENSF_ISJ_EEEEPfPS5_ */
/* Demangled: webrtc::SuppressionGain::GetGain(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, webrtc::RenderSignalAnalyzer const&, webrtc::AecState const&, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&, float*, std::__1::array<float, 65u>*) */
int _ZN6webrtc15SuppressionGain7GetGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_S7_RKNS_20RenderSignalAnalyzerERKNS_8AecStateERKNS3_6vectorINSE_INSE_IfNS3_9allocatorIfEEEENSF_ISH_EEEENSF_ISJ_EEEEPfPS5_(void);

/* Symbol: _ZN6webrtc7rnn_vad25AutoCorrelationCalculator20ComputeOnPitchBufferEN3rtc9ArrayViewIKfLi432EEENS3_IfLi147EEE */
/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::ComputeOnPitchBuffer(rtc::ArrayView<float const, 432>, rtc::ArrayView<float, 147>) */
int _ZN6webrtc7rnn_vad25AutoCorrelationCalculator20ComputeOnPitchBufferEN3rtc9ArrayViewIKfLi432EEENS3_IfLi147EEE(void);

/* Symbol: WebRtcSpl_ScaleAndAddVectorsWithRound */
/* Demangled: WebRtcSpl_ScaleAndAddVectorsWithRound */
extern void* WebRtcSpl_ScaleAndAddVectorsWithRound;

/* Symbol: WebRtcVad_Process */
/* Demangled: WebRtcVad_Process */
int WebRtcVad_Process(void);

/* Symbol: _ZNK6webrtc19SaturationProtector13PeakEnveloper5QueryEv */
/* Demangled: webrtc::SaturationProtector::PeakEnveloper::Query() const */
int _ZNK6webrtc19SaturationProtector13PeakEnveloper5QueryEv(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer18SetRegionToAnalyzeEj */
/* Demangled: webrtc::FilterAnalyzer::SetRegionToAnalyze(unsigned int) */
int _ZN6webrtc14FilterAnalyzer18SetRegionToAnalyzeEj(void);

/* Symbol: _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC1Ev */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::SpectralFeaturesExtractor() */
int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC1Ev(void);

/* Symbol: _ZNK3rtc8internal16RaceCheckerScope12RaceDetectedEv */
/* Demangled: rtc::internal::RaceCheckerScope::RaceDetected() const */
int _ZNK3rtc8internal16RaceCheckerScope12RaceDetectedEv(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter11ApplyBiQuadEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEEPNS0_6BiQuadE */
/* Demangled: webrtc::CascadedBiQuadFilter::ApplyBiQuad(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>, webrtc::CascadedBiQuadFilter::BiQuad*) */
int _ZN6webrtc20CascadedBiQuadFilter11ApplyBiQuadEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEEPNS0_6BiQuadE(void);

/* Symbol: _Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_SetReverseConfig(preproc_session_s*, effect_config_s*) */
int _Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl13AttachAecDumpENSt3__110unique_ptrINS_7AecDumpENS1_14default_deleteIS3_EEEE */
/* Demangled: webrtc::AudioProcessingImpl::AttachAecDump(std::__1::unique_ptr<webrtc::AecDump, std::__1::default_delete<webrtc::AecDump> >) */
int _ZN6webrtc19AudioProcessingImpl13AttachAecDumpENSt3__110unique_ptrINS_7AecDumpENS1_14default_deleteIS3_EEEE(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKNS_11AudioBufferE */
/* Demangled: webrtc::AgcManagerDirect::AnalyzePreProcess(webrtc::AudioBuffer const*) */
int _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKNS_11AudioBufferE(void);

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE7EdEES6_EEEvPKciS8_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE7EdEES6_EEEvPKciS8_DpRKT_E1t;

/* Symbol: _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvbEv */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator bool() const */
int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvbEv(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialOptional<int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc18FieldTrialOptionalIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator20ResetDecayEstimationEv */
/* Demangled: webrtc::ReverbDecayEstimator::ResetDecayEstimation() */
int _ZN6webrtc20ReverbDecayEstimator20ResetDecayEstimationEv(void);

/* Symbol: _ZN6webrtc13PushResamplerIfEC1Ev */
/* Demangled: webrtc::PushResampler<float>::PushResampler() */
int _ZN6webrtc13PushResamplerIfEC1Ev(void);

/* Symbol: _ZN6webrtc15SuppressionGainC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij */
/* Demangled: webrtc::SuppressionGain::SuppressionGain(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, int, unsigned int) */
int _ZN6webrtc15SuppressionGainC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij(void);

/* Symbol: _ZN6webrtc15GainController2D1Ev */
/* Demangled: webrtc::GainController2::~GainController2() */
int _ZN6webrtc15GainController2D1Ev(void);

/* Symbol: _ZN6webrtc14CircularBufferC1Ej */
/* Demangled: webrtc::CircularBuffer::CircularBuffer(unsigned int) */
int _ZN6webrtc14CircularBufferC1Ej(void);

/* Symbol: _ZN6webrtc13ApmDataDumperC2Ei */
/* Demangled: webrtc::ApmDataDumper::ApmDataDumper(int) */
int _ZN6webrtc13ApmDataDumperC2Ei(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataEPNSt3__16vectorIfNS7_9allocatorIfEEEE */
/* Demangled: webrtc::AdaptiveFirFilter::Adapt(webrtc::RenderBuffer const&, webrtc::FftData const&, std::__1::vector<float, std::__1::allocator<float> >*) */
int _ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataEPNSt3__16vectorIfNS7_9allocatorIfEEEE(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIiE10SetForTestEi */
/* Demangled: webrtc::FieldTrialParameter<int>::SetForTest(int) */
int _ZN6webrtc19FieldTrialParameterIiE10SetForTestEi(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIdE3GetEv */
/* Demangled: webrtc::FieldTrialConstrained<double>::Get() const */
int _ZNK6webrtc21FieldTrialConstrainedIdE3GetEv(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIjEptEv */
/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::operator->() const */
int _ZNK6webrtc21FieldTrialConstrainedIjEptEv(void);

/* Symbol: WebRtcSpl_MemCpyReversedOrder */
/* Demangled: WebRtcSpl_MemCpyReversedOrder */
int WebRtcSpl_MemCpyReversedOrder(void);

/* Symbol: WebRtcSpl_Resample22khzTo8khz */
/* Demangled: WebRtcSpl_Resample22khzTo8khz */
int WebRtcSpl_Resample22khzTo8khz(void);

/* Symbol: _ZN6webrtc16rftbsub_128_neonEPf */
/* Demangled: webrtc::rftbsub_128_neon(float*) */
int _ZN6webrtc16rftbsub_128_neonEPf(void);

/* Symbol: _ZN3rtc17ScopedYieldPolicy14YieldExecutionEv */
/* Demangled: rtc::ScopedYieldPolicy::YieldExecution() */
int _ZN3rtc17ScopedYieldPolicy14YieldExecutionEv(void);

/* Symbol: WebRtcSpl_Resample48khzTo32khz */
/* Demangled: WebRtcSpl_Resample48khzTo32khz */
int WebRtcSpl_Resample48khzTo32khz(void);

/* Symbol: _ZN6webrtc17RenderDelayBuffer6CreateERKNS_20EchoCanceller3ConfigEij */
/* Demangled: webrtc::RenderDelayBuffer::Create(webrtc::EchoCanceller3Config const&, int, unsigned int) */
int _ZN6webrtc17RenderDelayBuffer6CreateERKNS_20EchoCanceller3ConfigEij(void);

/* Symbol: _ZN6webrtc15GainControlImplD0Ev */
/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
int _ZN6webrtc15GainControlImplD0Ev(void);

/* Symbol: _ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures */
/* Demangled: webrtc::VadAudioProc::ExtractFeatures(short const*, unsigned int, AudioFeatures*) */
int _ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures(void);

/* Symbol: _ZN6webrtc19SaturationProtector13PeakEnveloper7ProcessEf */
/* Demangled: webrtc::SaturationProtector::PeakEnveloper::Process(float) */
int _ZN6webrtc19SaturationProtector13PeakEnveloper7ProcessEf(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv */
/* Demangled: webrtc::AudioProcessingImpl::proc_sample_rate_hz() const */
int _ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv(void);

/* Symbol: _ZNK6webrtc7Limiter14LastAudioLevelEv */
/* Demangled: webrtc::Limiter::LastAudioLevel() const */
int _ZNK6webrtc7Limiter14LastAudioLevelEv(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEEEEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEEEEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc4aec320AdaptPartitions_NeonERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE */
/* Demangled: webrtc::aec3::AdaptPartitions_Neon(webrtc::RenderBuffer const&, webrtc::FftData const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > >*) */
int _ZN6webrtc4aec320AdaptPartitions_NeonERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE(void);

/* Symbol: _ZTVN6webrtc14EchoCanceller3E */
/* Demangled: vtable for webrtc::EchoCanceller3 */
extern void* _ZTVN6webrtc14EchoCanceller3E;

/* Symbol: _ZN6webrtc23WebRtc_set_history_sizeEPvi */
/* Demangled: webrtc::WebRtc_set_history_size(void*, int) */
int _ZN6webrtc23WebRtc_set_history_sizeEPvi(void);

/* Symbol: _ZN6webrtc7metrics36SparseHistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: webrtc::metrics::SparseHistogramFactoryGetEnumeration(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN6webrtc7metrics36SparseHistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: _ZN6webrtc23WebRtc_MeanEstimatorFixEiiPi */
/* Demangled: webrtc::WebRtc_MeanEstimatorFix(int, int, int*) */
int _ZN6webrtc23WebRtc_MeanEstimatorFixEiiPi(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf */
/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void);

/* Symbol: WebRtcSpl_Energy */
/* Demangled: WebRtcSpl_Energy */
int WebRtcSpl_Energy(void);

/* Symbol: _ZN6webrtc26FixedDigitalLevelEstimator25CheckParameterCombinationEv */
/* Demangled: webrtc::FixedDigitalLevelEstimator::CheckParameterCombination() */
int _ZN6webrtc26FixedDigitalLevelEstimator25CheckParameterCombinationEv(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurveD2Ev */
/* Demangled: webrtc::InterpolatedGainCurve::~InterpolatedGainCurve() */
int _ZN6webrtc21InterpolatedGainCurveD2Ev(void);

/* Symbol: _ZN6webrtc11BlockBufferD1Ev */
/* Demangled: webrtc::BlockBuffer::~BlockBuffer() */
int _ZN6webrtc11BlockBufferD1Ev(void);

/* Symbol: _ZN6webrtc21StationarityEstimator23SmoothStationaryPerFreqEv */
/* Demangled: webrtc::StationarityEstimator::SmoothStationaryPerFreq() */
int _ZN6webrtc21StationarityEstimator23SmoothStationaryPerFreqEv(void);

/* Symbol: _ZNK6webrtc8OouraFft10cftmdl_128EPf */
/* Demangled: webrtc::OouraFft::cftmdl_128(float*) const */
int _ZNK6webrtc8OouraFft10cftmdl_128EPf(void);

/* Symbol: _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEi */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int) */
int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEi(void);

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl12routing_modeEv */
/* Demangled: webrtc::EchoControlMobileImpl::routing_mode() const */
int _ZNK6webrtc21EchoControlMobileImpl12routing_modeEv(void);

/* Symbol: _ZN6webrtc19WebRtcAecm_FreeCoreEPNS_8AecmCoreE */
/* Demangled: webrtc::WebRtcAecm_FreeCore(webrtc::AecmCore*) */
int _ZN6webrtc19WebRtcAecm_FreeCoreEPNS_8AecmCoreE(void);

/* Symbol: _ZN6webrtc12ErlEstimatorC1Ej */
/* Demangled: webrtc::ErlEstimator::ErlEstimator(unsigned int) */
int _ZN6webrtc12ErlEstimatorC1Ej(void);

/* Symbol: _ZNSt3__16vectorIN6webrtc20CascadedBiQuadFilter6BiQuadENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::CascadedBiQuadFilter::BiQuad, std::__1::allocator<webrtc::CascadedBiQuadFilter::BiQuad> >::__push_back_slow_path<webrtc::CascadedBiQuadFilter::BiQuad>(webrtc::CascadedBiQuadFilter::BiQuad&&) */
int _ZNSt3__16vectorIN6webrtc20CascadedBiQuadFilter6BiQuadENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void);

/* Symbol: _ZTVN6webrtc19FieldTrialParameterIbEE */
/* Demangled: vtable for webrtc::FieldTrialParameter<bool> */
extern void* _ZTVN6webrtc19FieldTrialParameterIbEE;

/* Symbol: WebRtcIsac_LevDurb */
/* Demangled: WebRtcIsac_LevDurb */
int WebRtcIsac_LevDurb(void);

/* Symbol: _ZN6webrtc17LoudnessHistogramC1Ei */
/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram(int) */
int _ZN6webrtc17LoudnessHistogramC1Ei(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer15RemoveTransientEid */
/* Demangled: webrtc::VadCircularBuffer::RemoveTransient(int, double) */
int _ZN6webrtc17VadCircularBuffer15RemoveTransientEid(void);

/* Symbol: _ZN6webrtc8AecState12InitialStateC1ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::AecState::InitialState::InitialState(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc8AecState12InitialStateC1ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEERKT_(void);

/* Symbol: _ZN6webrtc11GainApplier13SetGainFactorEf */
/* Demangled: webrtc::GainApplier::SetGainFactor(float) */
int _ZN6webrtc11GainApplier13SetGainFactorEf(void);

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEENS4_ILS5_1EiEES6_NS4_ILS5_9EPKcEES6_EEEvS9_iS9_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEENS4_ILS5_1EiEES6_NS4_ILS5_9EPKcEES6_EEEvS9_iS9_DpRKT_E1t;

/* Symbol: _ZN6webrtc12WienerFilter6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ */
/* Demangled: webrtc::WienerFilter::Update(int, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>) */
int _ZN6webrtc12WienerFilter6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilterC2EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveFirFilter::AdaptiveFirFilter(unsigned int, unsigned int, unsigned int, unsigned int, webrtc::Aec3Optimization, webrtc::ApmDataDumper*) */
int _ZN6webrtc17AdaptiveFirFilterC2EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE(void);

/* Symbol: pffft_cplx_preprocess */
/* Demangled: pffft_cplx_preprocess */
int pffft_cplx_preprocess(void);

/* Symbol: _ZN6webrtc11WebRtc_rdftEjiPfPjS0_ */
/* Demangled: webrtc::WebRtc_rdft(unsigned int, int, float*, unsigned int*, float*) */
int _ZN6webrtc11WebRtc_rdftEjiPfPjS0_(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEEEEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEEEEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc21InterpolatedGainCurve12RegionLoggerD1Ev */
/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::~RegionLogger() */
int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerD1Ev(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilterD1Ev */
/* Demangled: webrtc::AdaptiveFirFilter::~AdaptiveFirFilter() */
int _ZN6webrtc17AdaptiveFirFilterD1Ev(void);

/* Symbol: _ZN6webrtc14AlignmentMixerC1EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE */
/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, webrtc::EchoCanceller3Config::Delay::AlignmentMixing const&) */
int _ZN6webrtc14AlignmentMixerC1EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE(void);

/* Symbol: _ZN6webrtc20ApiCallJitterMetrics6Jitter6UpdateEi */
/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Update(int) */
int _ZN6webrtc20ApiCallJitterMetrics6Jitter6UpdateEi(void);

/* Symbol: _ZN6webrtc13ErleEstimatorC2EjRKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::ErleEstimator::ErleEstimator(unsigned int, webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc13ErleEstimatorC2EjRKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc16SubtractorOutputC2Ev */
/* Demangled: webrtc::SubtractorOutput::SubtractorOutput() */
int _ZN6webrtc16SubtractorOutputC2Ev(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ENSt3__17complexIfEES4_fb */
/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(std::__1::complex<float>, std::__1::complex<float>, float, bool) */
int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ENSt3__17complexIfEES4_fb(void);

/* Symbol: _ZN6webrtc11field_trial19GetFieldTrialStringEv */
/* Demangled: webrtc::field_trial::GetFieldTrialString() */
int _ZN6webrtc11field_trial19GetFieldTrialStringEv(void);

/* Symbol: _ZN3rtc7tracing19SetupInternalTracerEv */
/* Demangled: rtc::tracing::SetupInternalTracer() */
int _ZN3rtc7tracing19SetupInternalTracerEv(void);

/* Symbol: _ZN6webrtc8AecState20HandleEchoPathChangeERKNS_19EchoPathVariabilityE */
/* Demangled: webrtc::AecState::HandleEchoPathChange(webrtc::EchoPathVariability const&) */
int _ZN6webrtc8AecState20HandleEchoPathChangeERKNS_19EchoPathVariabilityE(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterIjEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<unsigned int> webrtc::ParseTypedParameter<unsigned int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterIjEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_3ExEEEEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_3ExEEEEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_S7_ */
/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_S7_(void);

/* Symbol: _ZTVN3rtc14PlatformThreadE */
/* Demangled: vtable for rtc::PlatformThread */
extern void* _ZTVN3rtc14PlatformThreadE;

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIjEdeEv */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::operator*() const */
int _ZNK6webrtc18FieldTrialOptionalIjEdeEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE */
/* Demangled: webrtc::AudioProcessingImpl::CreateAndAttachAecDump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long long, rtc::TaskQueue*) */
int _ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE(void);

/* Symbol: _ZN6webrtc11AudioBufferC1Ejjjjj */
/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11AudioBufferC1Ejjjjj(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25QueueNonbandedRenderAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::AudioProcessingImpl::QueueNonbandedRenderAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc19AudioProcessingImpl25QueueNonbandedRenderAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc7metrics9NumEventsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: webrtc::metrics::NumEvents(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN6webrtc7metrics9NumEventsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: _ZN6webrtc29WebRtcAecm_CalcLinearEnergiesE */
/* Demangled: webrtc::WebRtcAecm_CalcLinearEnergies */
extern void* _ZN6webrtc29WebRtcAecm_CalcLinearEnergiesE;

/* Symbol: _ZN6webrtc5NrFft4IfftEN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEE */
/* Demangled: webrtc::NrFft::Ifft(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc5NrFft4IfftEN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc7rnn_vad19FullyConnectedLayerD1Ev */
/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::~FullyConnectedLayer() */
int _ZN6webrtc7rnn_vad19FullyConnectedLayerD1Ev(void);

/* Symbol: _Z10AgcDisableP16preproc_effect_s */
/* Demangled: AgcDisable(preproc_effect_s*) */
int _Z10AgcDisableP16preproc_effect_s(void);

/* Symbol: WebRtcSpl_Sqrt */
/* Demangled: WebRtcSpl_Sqrt */
int WebRtcSpl_Sqrt(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilterC1ERKNS0_18BiQuadCoefficientsEj */
/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(webrtc::CascadedBiQuadFilter::BiQuadCoefficients const&, unsigned int) */
int _ZN6webrtc20CascadedBiQuadFilterC1ERKNS0_18BiQuadCoefficientsEj(void);

/* Symbol: _ZN6webrtc11EchoRemover6CreateERKNS_20EchoCanceller3ConfigEijj */
/* Demangled: webrtc::EchoRemover::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
int _ZN6webrtc11EchoRemover6CreateERKNS_20EchoCanceller3ConfigEijj(void);

/* Symbol: _Z12ProcIdToUuidi */
/* Demangled: ProcIdToUuid(int) */
int _Z12ProcIdToUuidi(void);

/* Symbol: _ZN6webrtc11GainApplier9ApplyGainENS_14AudioFrameViewIfEE */
/* Demangled: webrtc::GainApplier::ApplyGain(webrtc::AudioFrameView<float>) */
int _ZN6webrtc11GainApplier9ApplyGainENS_14AudioFrameViewIfEE(void);

/* Symbol: _ZNK6webrtc14AudioConverter10CheckSizesEjj */
/* Demangled: webrtc::AudioConverter::CheckSizes(unsigned int, unsigned int) const */
int _ZNK6webrtc14AudioConverter10CheckSizesEjj(void);

/* Symbol: _ZTVN6webrtc16DownmixConverterE */
/* Demangled: vtable for webrtc::DownmixConverter */
extern void* _ZTVN6webrtc16DownmixConverterE;

/* Symbol: _ZN6webrtc15SuppressionGain15SetInitialStateEb */
/* Demangled: webrtc::SuppressionGain::SetInitialState(bool) */
int _ZN6webrtc15SuppressionGain15SetInitialStateEb(void);

/* Symbol: _ZN6webrtc14FilterAnalyzerD1Ev */
/* Demangled: webrtc::FilterAnalyzer::~FilterAnalyzer() */
int _ZN6webrtc14FilterAnalyzerD1Ev(void);

/* Symbol: _ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj */
/* Demangled: webrtc::VadAudioProc::FindFirstSpectralPeaks(double*, unsigned int) */
int _ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj(void);

/* Symbol: _ZN6webrtc10HistogramsC2Ev */
/* Demangled: webrtc::Histograms::Histograms() */
int _ZN6webrtc10HistogramsC2Ev(void);

/* Symbol: _ZN6webrtc14NoiseEstimator10PostUpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li129EEE */
/* Demangled: webrtc::NoiseEstimator::PostUpdate(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, 129>) */
int _ZN6webrtc14NoiseEstimator10PostUpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li129EEE(void);

/* Symbol: _ZN6webrtc25PriorSignalModelEstimatorC2Ef */
/* Demangled: webrtc::PriorSignalModelEstimator::PriorSignalModelEstimator(float) */
int _ZN6webrtc25PriorSignalModelEstimatorC2Ef(void);

/* Symbol: _ZN6webrtc14EchoCanceller315instance_count_E */
/* Demangled: webrtc::EchoCanceller3::instance_count_ */
extern void* _ZN6webrtc14EchoCanceller315instance_count_E;

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_ */
/* Demangled: webrtc::FieldTrialConstrained<double>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double, std::__1::optional<double>, std::__1::optional<double>) */
int _ZN6webrtc21FieldTrialConstrainedIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_(void);

/* Symbol: _ZN6webrtc17LoudnessHistogramC1Ev */
/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram() */
int _ZN6webrtc17LoudnessHistogramC1Ev(void);

/* Symbol: _ZN6webrtc17TransientDetectorD1Ev */
/* Demangled: webrtc::TransientDetector::~TransientDetector() */
int _ZN6webrtc17TransientDetectorD1Ev(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl10InitializeEijj */
/* Demangled: webrtc::EchoControlMobileImpl::Initialize(int, unsigned int, unsigned int) */
int _ZN6webrtc21EchoControlMobileImpl10InitializeEijj(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6webrtc15GainControlImpl12MonoAgcStateENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::GainControlImpl::MonoAgcState, std::__1::default_delete<webrtc::GainControlImpl::MonoAgcState> >, std::__1::allocator<std::__1::unique_ptr<webrtc::GainControlImpl::MonoAgcState, std::__1::default_delete<webrtc::GainControlImpl::MonoAgcState> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc15GainControlImpl12MonoAgcStateENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj(void);

/* Symbol: WebRtcSpl_FreeRealFFT */
/* Demangled: WebRtcSpl_FreeRealFFT */
int WebRtcSpl_FreeRealFFT(void);

/* Symbol: _ZN6webrtc19NoiseLevelEstimatorC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::NoiseLevelEstimator::NoiseLevelEstimator(webrtc::ApmDataDumper*) */
int _ZN6webrtc19NoiseLevelEstimatorC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ENS1_17MaskingThresholdsES3_ff */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, float, float) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ENS1_17MaskingThresholdsES3_ff(void);

/* Symbol: _ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi */
/* Demangled: webrtc::VadCircularBuffer::ConvertToLinearIndex(int*) const */
int _ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi(void);

/* Symbol: _ZN6webrtc5NrFftC2Ev */
/* Demangled: webrtc::NrFft::NrFft() */
int _ZN6webrtc5NrFftC2Ev(void);

/* Symbol: WebRtcSpl_VectorBitShiftW32ToW16 */
/* Demangled: WebRtcSpl_VectorBitShiftW32ToW16 */
int WebRtcSpl_VectorBitShiftW32ToW16(void);

/* Symbol: _ZN6webrtc11BlockFramer29InsertBlockAndExtractSubFrameERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEEPNS2_INS2_IN3rtc9ArrayViewIfLin4711EEENS3_ISE_EEEENS3_ISG_EEEE */
/* Demangled: webrtc::BlockFramer::InsertBlockAndExtractSubFrame(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&, std::__1::vector<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > >, std::__1::allocator<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > > >*) */
int _ZN6webrtc11BlockFramer29InsertBlockAndExtractSubFrameERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEEPNS2_INS2_IN3rtc9ArrayViewIfLin4711EEENS3_ISE_EEEENS3_ISG_EEEE(void);

/* Symbol: _ZN3rtc10LogMessage6IsNoopENS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::IsNoop(rtc::LoggingSeverity) */
int _ZN3rtc10LogMessage6IsNoopENS_15LoggingSeverityE(void);

/* Symbol: _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: pffftd_aligned_malloc */
/* Demangled: pffftd_aligned_malloc */
int pffftd_aligned_malloc(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10SuppressoraSERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::operator=(webrtc::EchoCanceller3Config::Suppressor const&) */
int _ZN6webrtc20EchoCanceller3Config10SuppressoraSERKS1_(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter33ConstrainAndUpdateImpulseResponseEPNSt3__16vectorIfNS1_9allocatorIfEEEE */
/* Demangled: webrtc::AdaptiveFirFilter::ConstrainAndUpdateImpulseResponse(std::__1::vector<float, std::__1::allocator<float> >*) */
int _ZN6webrtc17AdaptiveFirFilter33ConstrainAndUpdateImpulseResponseEPNSt3__16vectorIfNS1_9allocatorIfEEEE(void);

/* Symbol: _ZN3rtc10TimeDiff32Ejj */
/* Demangled: rtc::TimeDiff32(unsigned int, unsigned int) */
int _ZN3rtc10TimeDiff32Ejj(void);

/* Symbol: _ZN6webrtc11DownSampler10InitializeEi */
/* Demangled: webrtc::DownSampler::Initialize(int) */
int _ZN6webrtc11DownSampler10InitializeEi(void);

/* Symbol: _Z12PreProc_Initv */
/* Demangled: PreProc_Init() */
int _Z12PreProc_Initv(void);

/* Symbol: _ZN6webrtc20ReverbModelEstimatorC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::ReverbModelEstimator::ReverbModelEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc20ReverbModelEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect17instance_counter_E */
/* Demangled: webrtc::AgcManagerDirect::instance_counter_ */
extern void* _ZN6webrtc16AgcManagerDirect17instance_counter_E;

/* Symbol: _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceENS_4lessIS6_EENS4_INS_4pairIKS6_S9_EEEEEixERSD_ */
/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, webrtc::FieldTrialParameterInterface*> > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceENS_4lessIS6_EENS4_INS_4pairIKS6_S9_EEEEEixERSD_(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderC2ENS_9ArrayViewIcLin4711EEE */
/* Demangled: rtc::SimpleStringBuilder::SimpleStringBuilder(rtc::ArrayView<char, -4711>) */
int _ZN3rtc19SimpleStringBuilderC2ENS_9ArrayViewIcLin4711EEE(void);

/* Symbol: pffft_transform_ordered */
/* Demangled: pffft_transform_ordered */
int pffft_transform_ordered(void);

/* Symbol: _ZN6webrtc21WebRtcAecm_CreateCoreEv */
/* Demangled: webrtc::WebRtcAecm_CreateCore() */
int _ZN6webrtc21WebRtcAecm_CreateCoreEv(void);

/* Symbol: _ZN6webrtc9FftBufferC1Ejj */
/* Demangled: webrtc::FftBuffer::FftBuffer(unsigned int, unsigned int) */
int _ZN6webrtc9FftBufferC1Ejj(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigC1ERKS0_ */
/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig const&) */
int _ZN6webrtc17InternalAPMConfigC1ERKS0_(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIiE3GetEv */
/* Demangled: webrtc::FieldTrialParameter<int>::Get() const */
int _ZNK6webrtc19FieldTrialParameterIiE3GetEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD2Ev */
/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::~RuntimeSettingEnqueuer() */
int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD2Ev(void);

/* Symbol: WebRtcAecm_Free */
/* Demangled: WebRtcAecm_Free */
int WebRtcAecm_Free(void);

/* Symbol: _ZN6webrtc14FilterAnalyzerC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::FilterAnalyzer::FilterAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc14FilterAnalyzerC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv */
/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator->() const */
int _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv(void);

/* Symbol: _ZN6webrtc13PushResamplerIfE8ResampleEPKfjPfj */
/* Demangled: webrtc::PushResampler<float>::Resample(float const*, unsigned int, float*, unsigned int) */
int _ZN6webrtc13PushResamplerIfE8ResampleEPKfjPfj(void);

/* Symbol: _ZN6webrtc8OouraFftC1Eb */
/* Demangled: webrtc::OouraFft::OouraFft(bool) */
int _ZN6webrtc8OouraFftC1Eb(void);

/* Symbol: _ZN6webrtc7MonoAgcD2Ev */
/* Demangled: webrtc::MonoAgc::~MonoAgc() */
int _ZN6webrtc7MonoAgcD2Ev(void);

/* Symbol: _ZN6webrtc7metrics11GetAndResetEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_10unique_ptrINS0_10SampleInfoENS1_14default_deleteISA_EEEENS1_4lessIS8_EENS6_INS1_4pairIKS8_SD_EEEEEE */
/* Demangled: webrtc::metrics::GetAndReset(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > > > >*) */
int _ZN6webrtc7metrics11GetAndResetEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_10unique_ptrINS0_10SampleInfoENS1_14default_deleteISA_EEEENS1_4lessIS8_EENS6_INS1_4pairIKS8_SD_EEEEEE(void);

/* Symbol: _ZN6webrtc8AecState11FilterDelayC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::AecState::FilterDelay::FilterDelay(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc8AecState11FilterDelayC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZNK6webrtc21FullBandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE */
/* Demangled: webrtc::FullBandErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
int _ZNK6webrtc21FullBandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void);

/* Symbol: _ZNK6webrtc13MatchedFilter19LogFilterPropertiesEijj */
/* Demangled: webrtc::MatchedFilter::LogFilterProperties(int, unsigned int, unsigned int) const */
int _ZNK6webrtc13MatchedFilter19LogFilterPropertiesEijj(void);

/* Symbol: _ZNK6webrtc20RenderSignalAnalyzer28MaskRegionsAroundNarrowBandsEPNSt3__15arrayIfLj65EEE */
/* Demangled: webrtc::RenderSignalAnalyzer::MaskRegionsAroundNarrowBands(std::__1::array<float, 65u>*) const */
int _ZNK6webrtc20RenderSignalAnalyzer28MaskRegionsAroundNarrowBandsEPNSt3__15arrayIfLj65EEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD2Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::~ApmCaptureState() */
int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator13EstimateDecayEN3rtc9ArrayViewIKfLin4711EEEi */
/* Demangled: webrtc::ReverbDecayEstimator::EstimateDecay(rtc::ArrayView<float const, -4711>, int) */
int _ZN6webrtc20ReverbDecayEstimator13EstimateDecayEN3rtc9ArrayViewIKfLin4711EEEi(void);

/* Symbol: _ZN6webrtc21VoiceActivityDetectorC1Ev */
/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
int _ZN6webrtc21VoiceActivityDetectorC1Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad19FullyConnectedLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::ComputeOutput(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc7rnn_vad19FullyConnectedLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _ZN6webrtc20WebRtcAgc_set_configEPvNS_15WebRtcAgcConfigE */
/* Demangled: webrtc::WebRtcAgc_set_config(void*, webrtc::WebRtcAgcConfig) */
int _ZN6webrtc20WebRtcAgc_set_configEPvNS_15WebRtcAgcConfigE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EEiEERPNS_15__tree_end_nodeISE_EESF_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EEiEERPNS_15__tree_end_nodeISE_EESF_RKT_(void);

/* Symbol: WebRtcSpl_DivResultInQ31 */
/* Demangled: WebRtcSpl_DivResultInQ31 */
int WebRtcSpl_DivResultInQ31(void);

/* Symbol: _ZN6webrtc17SuppressionParamsC2ENS_8NsConfig16SuppressionLevelE */
/* Demangled: webrtc::SuppressionParams::SuppressionParams(webrtc::NsConfig::SuppressionLevel) */
int _ZN6webrtc17SuppressionParamsC2ENS_8NsConfig16SuppressionLevelE(void);

/* Symbol: _ZN6webrtc26AdaptiveDigitalGainApplier7ProcessENS_16SignalWithLevelsE */
/* Demangled: webrtc::AdaptiveDigitalGainApplier::Process(webrtc::SignalWithLevels) */
int _ZN6webrtc26AdaptiveDigitalGainApplier7ProcessENS_16SignalWithLevelsE(void);

/* Symbol: _ZN6webrtc28FieldTrialParameterInterfaceD2Ev */
/* Demangled: webrtc::FieldTrialParameterInterface::~FieldTrialParameterInterface() */
int _ZN6webrtc28FieldTrialParameterInterfaceD2Ev(void);

/* Symbol: _ZN6webrtc16SignalClassifier13FrameExtenderC2Ejj */
/* Demangled: webrtc::SignalClassifier::FrameExtender::FrameExtender(unsigned int, unsigned int) */
int _ZN6webrtc16SignalClassifier13FrameExtenderC2Ejj(void);

/* Symbol: _ZN6webrtc34WebRtc_AllocateHistoryBufferMemoryEPNS_20BinaryDelayEstimatorEi */
/* Demangled: webrtc::WebRtc_AllocateHistoryBufferMemory(webrtc::BinaryDelayEstimator*, int) */
int _ZN6webrtc34WebRtc_AllocateHistoryBufferMemoryEPNS_20BinaryDelayEstimatorEi(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer6CreateEi */
/* Demangled: webrtc::VadCircularBuffer::Create(int) */
int _ZN6webrtc17VadCircularBuffer6CreateEi(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimator5ResetEv */
/* Demangled: webrtc::SignalDependentErleEstimator::Reset() */
int _ZN6webrtc28SignalDependentErleEstimator5ResetEv(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIiEcviEv */
/* Demangled: webrtc::FieldTrialConstrained<int>::operator int() const */
int _ZNK6webrtc21FieldTrialConstrainedIiEcviEv(void);

/* Symbol: _ZN6webrtc15SuppressionGain14GainParametersC2ERKNS_20EchoCanceller3Config10Suppressor6TuningE */
/* Demangled: webrtc::SuppressionGain::GainParameters::GainParameters(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
int _ZN6webrtc15SuppressionGain14GainParametersC2ERKNS_20EchoCanceller3Config10Suppressor6TuningE(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram6UpdateEdd */
/* Demangled: webrtc::LoudnessHistogram::Update(double, double) */
int _ZN6webrtc17LoudnessHistogram6UpdateEdd(void);

/* Symbol: _ZN6webrtc13FIRFilterNEON6FilterEPKfjPf */
/* Demangled: webrtc::FIRFilterNEON::Filter(float const*, unsigned int, float*) */
int _ZN6webrtc13FIRFilterNEON6FilterEPKfjPf(void);

/* Symbol: _ZN6webrtc14AlignmentMixerC1Ejbbfb */
/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, bool, bool, float, bool) */
int _ZN6webrtc14AlignmentMixerC1Ejbbfb(void);

/* Symbol: _ZN6webrtc12RenderBufferD1Ev */
/* Demangled: webrtc::RenderBuffer::~RenderBuffer() */
int _ZN6webrtc12RenderBufferD1Ev(void);

/* Symbol: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKsEES7_S7_ */
/* Demangled: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKsEES7_S7_ */
int _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKsEES7_S7_(void);

/* Symbol: _ZN6webrtc31WebRtc_InitDelayEstimatorFarendEPv */
/* Demangled: webrtc::WebRtc_InitDelayEstimatorFarend(void*) */
int _ZN6webrtc31WebRtc_InitDelayEstimatorFarendEPv(void);

/* Symbol: _ZN6webrtc14HighPassFilterD2Ev */
/* Demangled: webrtc::HighPassFilter::~HighPassFilter() */
int _ZN6webrtc14HighPassFilterD2Ev(void);

/* Symbol: _ZN6webrtc16BlockDelayBufferC1Ejjjj */
/* Demangled: webrtc::BlockDelayBuffer::BlockDelayBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc16BlockDelayBufferC1Ejjjj(void);

/* Symbol: _ZN6webrtc18ClockdriftDetectorC1Ev */
/* Demangled: webrtc::ClockdriftDetector::ClockdriftDetector() */
int _ZN6webrtc18ClockdriftDetectorC1Ev(void);

/* Symbol: _ZN6webrtc5Pffft11FloatBufferD1Ev */
/* Demangled: webrtc::Pffft::FloatBuffer::~FloatBuffer() */
int _ZN6webrtc5Pffft11FloatBufferD1Ev(void);

/* Symbol: _ZN6webrtc10Histograms6UpdateERKNS_11SignalModelE */
/* Demangled: webrtc::Histograms::Update(webrtc::SignalModel const&) */
int _ZN6webrtc10Histograms6UpdateERKNS_11SignalModelE(void);

/* Symbol: _ZN6webrtc21StationarityEstimator23UpdateStationarityFlagsERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEEii */
/* Demangled: webrtc::StationarityEstimator::UpdateStationarityFlags(webrtc::SpectrumBuffer const&, rtc::ArrayView<float const, -4711>, int, int) */
int _ZN6webrtc21StationarityEstimator23UpdateStationarityFlagsERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEEii(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC2Ei */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::EarlyReverbLengthEstimator(int) */
int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC2Ei(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_ */
/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_ */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_(void);

/* Symbol: _ZN6webrtc7WPDNode6UpdateEPKfj */
/* Demangled: webrtc::WPDNode::Update(float const*, unsigned int) */
int _ZN6webrtc7WPDNode6UpdateEPKfj(void);

/* Symbol: WebRtcSpl_CrossCorrelation */
/* Demangled: WebRtcSpl_CrossCorrelation */
extern void* WebRtcSpl_CrossCorrelation;

/* Symbol: _ZN6webrtc23TransientSuppressorImplC1Ev */
/* Demangled: webrtc::TransientSuppressorImpl::TransientSuppressorImpl() */
int _ZN6webrtc23TransientSuppressorImplC1Ev(void);

/* Symbol: _ZN6webrtc8AecState15TransparentModeC2ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::AecState::TransparentMode::TransparentMode(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc8AecState15TransparentModeC2ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN6webrtc21ComfortNoiseGenerator7ComputeEbN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEENS2_INS_7FftDataELin4711EEES9_ */
/* Demangled: webrtc::ComfortNoiseGenerator::Compute(bool, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<webrtc::FftData, -4711>, rtc::ArrayView<webrtc::FftData, -4711>) */
int _ZN6webrtc21ComfortNoiseGenerator7ComputeEbN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEENS2_INS_7FftDataELin4711EEES9_(void);

/* Symbol: _ZN6webrtc21ComfortNoiseGeneratorD1Ev */
/* Demangled: webrtc::ComfortNoiseGenerator::~ComfortNoiseGenerator() */
int _ZN6webrtc21ComfortNoiseGeneratorD1Ev(void);

/* Symbol: _ZN6webrtc26MatchedFilterLagAggregatorD1Ev */
/* Demangled: webrtc::MatchedFilterLagAggregator::~MatchedFilterLagAggregator() */
int _ZN6webrtc26MatchedFilterLagAggregatorD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl28HandleCaptureRuntimeSettingsEv */
/* Demangled: webrtc::AudioProcessingImpl::HandleCaptureRuntimeSettings() */
int _ZN6webrtc19AudioProcessingImpl28HandleCaptureRuntimeSettingsEv(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIjEcvjEv */
/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::operator unsigned int() const */
int _ZNK6webrtc21FieldTrialConstrainedIjEcvjEv(void);

/* Symbol: _ZN6webrtc15GainController28ValidateERKNS_15AudioProcessing6Config15GainController2E */
/* Demangled: webrtc::GainController2::Validate(webrtc::AudioProcessing::Config::GainController2 const&) */
int _ZN6webrtc15GainController28ValidateERKNS_15AudioProcessing6Config15GainController2E(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandProcessingActiveEb */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureMultiBandProcessingActive(bool) const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandProcessingActiveEb(void);

/* Symbol: _ZN6webrtc14EchoAudibility5ResetEv */
/* Demangled: webrtc::EchoAudibility::Reset() */
int _ZN6webrtc14EchoAudibility5ResetEv(void);

/* Symbol: _ZN6webrtc11ReverbModel25UpdateReverbNoFreqShapingEN3rtc9ArrayViewIKfLin4711EEEff */
/* Demangled: webrtc::ReverbModel::UpdateReverbNoFreqShaping(rtc::ArrayView<float const, -4711>, float, float) */
int _ZN6webrtc11ReverbModel25UpdateReverbNoFreqShapingEN3rtc9ArrayViewIKfLin4711EEEff(void);

/* Symbol: _ZN6webrtc29WebRtcAgc_ComputeDigitalGainsEPNS_10DigitalAgcEPKPKsjjsPi */
/* Demangled: webrtc::WebRtcAgc_ComputeDigitalGains(webrtc::DigitalAgc*, short const* const*, unsigned int, unsigned int, short, int*) */
int _ZN6webrtc29WebRtcAgc_ComputeDigitalGainsEPNS_10DigitalAgcEPKPKsjjsPi(void);

/* Symbol: _ZNK6webrtc21FullBandErleEstimator17ErleInstantaneous4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS2_14default_deleteIS4_EEEE */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
int _ZNK6webrtc21FullBandErleEstimator17ErleInstantaneous4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS2_14default_deleteIS4_EEEE(void);

/* Symbol: PreProcessingFx_GetDescriptor */
/* Demangled: PreProcessingFx_GetDescriptor */
int PreProcessingFx_GetDescriptor(void);

/* Symbol: _ZNK6webrtc8OouraFft11rftfsub_128EPf */
/* Demangled: webrtc::OouraFft::rftfsub_128(float*) const */
int _ZNK6webrtc8OouraFft11rftfsub_128EPf(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb */
/* Demangled: webrtc::FieldTrialParameter<bool>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN6webrtc19FieldTrialParameterIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void);

/* Symbol: _ZN6webrtc19WebRtcAgc_AddFarendEPvPKsj */
/* Demangled: webrtc::WebRtcAgc_AddFarend(void*, short const*, unsigned int) */
int _ZN6webrtc19WebRtcAgc_AddFarendEPvPKsj(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous21UpdateQualityEstimateEv */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::UpdateQualityEstimate() */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous21UpdateQualityEstimateEv(void);

/* Symbol: _ZN6webrtc21StationarityEstimator13NoiseSpectrum5ResetEv */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::Reset() */
int _ZN6webrtc21StationarityEstimator13NoiseSpectrum5ResetEv(void);

/* Symbol: _ZN3rtc10LogMessage17GetMinLogSeverityEv */
/* Demangled: rtc::LogMessage::GetMinLogSeverity() */
int _ZN3rtc10LogMessage17GetMinLogSeverityEv(void);

/* Symbol: _ZN6webrtc29AdaptiveModeLevelEstimatorAgcC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::AdaptiveModeLevelEstimatorAgc(webrtc::ApmDataDumper*) */
int _ZN6webrtc29AdaptiveModeLevelEstimatorAgcC2EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc13MovingMomentsC2Ej */
/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
int _ZN6webrtc13MovingMomentsC2Ej(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl9ConfigureEv */
/* Demangled: webrtc::EchoControlMobileImpl::Configure() */
int _ZN6webrtc21EchoControlMobileImpl9ConfigureEv(void);

/* Symbol: WebRtcSpl_ScaleVector */
/* Demangled: WebRtcSpl_ScaleVector */
int WebRtcSpl_ScaleVector(void);

/* Symbol: _ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_ */
/* Demangled: webrtc::SplittingFilter::TwoBandsAnalysis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
int _ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_(void);

/* Symbol: _ZN6webrtc11BlockBufferC1Ejjjj */
/* Demangled: webrtc::BlockBuffer::BlockBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11BlockBufferC1Ejjjj(void);

/* Symbol: _ZN3rtc5Event4WaitEii */
/* Demangled: rtc::Event::Wait(int, int) */
int _ZN3rtc5Event4WaitEii(void);

/* Symbol: _ZNSt3__16vectorINS_5arrayIfLj65EEENS_9allocatorIS2_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_5arrayIfLj65EEENS_9allocatorIS2_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc8OouraFftC1Ev */
/* Demangled: webrtc::OouraFft::OouraFft() */
int _ZN6webrtc8OouraFftC1Ev(void);

/* Symbol: pffftd_is_power_of_two */
/* Demangled: pffftd_is_power_of_two */
int pffftd_is_power_of_two(void);

/* Symbol: _ZN6webrtc15GainControlImpl21set_target_level_dbfsEi */
/* Demangled: webrtc::GainControlImpl::set_target_level_dbfs(int) */
int _ZN6webrtc15GainControlImpl21set_target_level_dbfsEi(void);

/* Symbol: _ZN6webrtc8Log2TodBEf */
/* Demangled: webrtc::Log2TodB(float) */
int _ZN6webrtc8Log2TodBEf(void);

/* Symbol: WebRtc_MoveReadPtr */
/* Demangled: WebRtc_MoveReadPtr */
int WebRtc_MoveReadPtr(void);

/* Symbol: _ZN6webrtc4aec313MovingAverageC2Ejj */
/* Demangled: webrtc::aec3::MovingAverage::MovingAverage(unsigned int, unsigned int) */
int _ZN6webrtc4aec313MovingAverageC2Ejj(void);

/* Symbol: _ZN6webrtc14ValidAlignmentEj */
/* Demangled: webrtc::ValidAlignment(unsigned int) */
int _ZN6webrtc14ValidAlignmentEj(void);

/* Symbol: _ZN6webrtc25WebRtc_set_allowed_offsetEPvi */
/* Demangled: webrtc::WebRtc_set_allowed_offset(void*, int) */
int _ZN6webrtc25WebRtc_set_allowed_offsetEPvi(void);

/* Symbol: _ZN6webrtc17VadCircularBufferD1Ev */
/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
int _ZN6webrtc17VadCircularBufferD1Ev(void);

/* Symbol: _ZN6webrtc9FftBufferD2Ev */
/* Demangled: webrtc::FftBuffer::~FftBuffer() */
int _ZN6webrtc9FftBufferD2Ev(void);

/* Symbol: _ZN3rtc8ToStringEb */
/* Demangled: rtc::ToString(bool) */
int _ZN3rtc8ToStringEb(void);

/* Symbol: _ZN3rtc9TimeAfterEx */
/* Demangled: rtc::TimeAfter(long long) */
int _ZN3rtc9TimeAfterEx(void);

/* Symbol: _ZN6webrtc3AgcD1Ev */
/* Demangled: webrtc::Agc::~Agc() */
int _ZN6webrtc3AgcD1Ev(void);

/* Symbol: _ZN6webrtc11field_trial12FindFullNameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: webrtc::field_trial::FindFullName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6webrtc11field_trial12FindFullNameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialParameter<bool>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc19FieldTrialParameterIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZN6webrtc5Pffft13IsSimdEnabledEv */
/* Demangled: webrtc::Pffft::IsSimdEnabled() */
int _ZN6webrtc5Pffft13IsSimdEnabledEv(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates25HighPassFilteringRequiredEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::HighPassFilteringRequired() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates25HighPassFilteringRequiredEv(void);

/* Symbol: _ZN3rtc8ToStringEd */
/* Demangled: rtc::ToString(double) */
int _ZN3rtc8ToStringEd(void);

/* Symbol: _ZN6webrtc7metrics9MinSampleERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: webrtc::metrics::MinSample(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6webrtc7metrics9MinSampleERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: WebRtcSpl_MaxAbsValueW16 */
/* Demangled: WebRtcSpl_MaxAbsValueW16 */
extern void* WebRtcSpl_MaxAbsValueW16;

/* Symbol: _ZN6webrtc21BlockProcessorMetrics12UpdateRenderEb */
/* Demangled: webrtc::BlockProcessorMetrics::UpdateRender(bool) */
int _ZN6webrtc21BlockProcessorMetrics12UpdateRenderEb(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigC1EOS0_ */
/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig&&) */
int _ZN6webrtc17InternalAPMConfigC1EOS0_(void);

/* Symbol: _ZN6webrtc22AudioProcessingBuilderC2Ev */
/* Demangled: webrtc::AudioProcessingBuilder::AudioProcessingBuilder() */
int _ZN6webrtc22AudioProcessingBuilderC2Ev(void);

/* Symbol: _ZN6webrtc20EchoCanceller3ConfigaSERKS0_ */
/* Demangled: webrtc::EchoCanceller3Config::operator=(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc20EchoCanceller3ConfigaSERKS0_(void);

/* Symbol: _ZN6webrtc11AudioBufferD0Ev */
/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
int _ZN6webrtc11AudioBufferD0Ev(void);

/* Symbol: _ZN3rtc8ToStringEe */
/* Demangled: rtc::ToString(long double) */
int _ZN3rtc8ToStringEe(void);

/* Symbol: _ZN6webrtc7LimiterC2EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: webrtc::Limiter::Limiter(unsigned int, webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc7LimiterC2EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc12VadAudioProcD2Ev */
/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
int _ZN6webrtc12VadAudioProcD2Ev(void);

/* Symbol: _ZN6webrtc23DownsampledRenderBufferC2Ej */
/* Demangled: webrtc::DownsampledRenderBuffer::DownsampledRenderBuffer(unsigned int) */
int _ZN6webrtc23DownsampledRenderBufferC2Ej(void);

/* Symbol: _ZN6webrtc12VadWithLevelD2Ev */
/* Demangled: webrtc::VadWithLevel::~VadWithLevel() */
int _ZN6webrtc12VadWithLevelD2Ev(void);

/* Symbol: _ZN6webrtc20AudioProcessingStatsC2Ev */
/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats() */
int _ZN6webrtc20AudioProcessingStatsC2Ev(void);

/* Symbol: WebRtcVad_CalcVad16khz */
/* Demangled: WebRtcVad_CalcVad16khz */
int WebRtcVad_CalcVad16khz(void);

/* Symbol: _ZN6webrtc31WebRtc_enable_robust_validationEPvi */
/* Demangled: webrtc::WebRtc_enable_robust_validation(void*, int) */
int _ZN6webrtc31WebRtc_enable_robust_validationEPvi(void);

/* Symbol: _ZN3rtc19SimpleStringBuilder12AppendFormatEPKcz */
/* Demangled: rtc::SimpleStringBuilder::AppendFormat(char const*, ...) */
int _ZN3rtc19SimpleStringBuilder12AppendFormatEPKcz(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl17UpdateRestorationEf */
/* Demangled: webrtc::TransientSuppressorImpl::UpdateRestoration(float) */
int _ZN6webrtc23TransientSuppressorImpl17UpdateRestorationEf(void);

/* Symbol: PreProcessingLib_Create */
/* Demangled: PreProcessingLib_Create */
int PreProcessingLib_Create(void);

/* Symbol: _ZN3rtc8ToStringEi */
/* Demangled: rtc::ToString(int) */
int _ZN3rtc8ToStringEi(void);

/* Symbol: _ZN6webrtc22EchoPathDelayEstimatorD1Ev */
/* Demangled: webrtc::EchoPathDelayEstimator::~EchoPathDelayEstimator() */
int _ZN6webrtc22EchoPathDelayEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc10SubtractorC1ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE */
/* Demangled: webrtc::Subtractor::Subtractor(webrtc::EchoCanceller3Config const&, unsigned int, unsigned int, webrtc::ApmDataDumper*, webrtc::Aec3Optimization) */
int _ZN6webrtc10SubtractorC1ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi */
/* Demangled: webrtc::FieldTrialParameter<int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
int _ZN6webrtc19FieldTrialParameterIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi(void);

/* Symbol: _ZN3rtc8ToStringEj */
/* Demangled: rtc::ToString(unsigned int) */
int _ZN3rtc8ToStringEj(void);

/* Symbol: _ZNK3rtc14PlatformThread9IsRunningEv */
/* Demangled: rtc::PlatformThread::IsRunning() const */
int _ZNK3rtc14PlatformThread9IsRunningEv(void);

/* Symbol: _ZN6webrtc15GainController28ToStringERKNS_15AudioProcessing6Config15GainController2E */
/* Demangled: webrtc::GainController2::ToString(webrtc::AudioProcessing::Config::GainController2 const&) */
int _ZN6webrtc15GainController28ToStringERKNS_15AudioProcessing6Config15GainController2E(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE */
/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<double>) */
int _ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE(void);

/* Symbol: _ZN6webrtc14CircularBuffer3PopEv */
/* Demangled: webrtc::CircularBuffer::Pop() */
int _ZN6webrtc14CircularBuffer3PopEv(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIjE3GetEv */
/* Demangled: webrtc::FieldTrialParameter<unsigned int>::Get() const */
int _ZNK6webrtc19FieldTrialParameterIjE3GetEv(void);

/* Symbol: _ZN3rtc10LogMessage20UpdateMinLogSeverityEv */
/* Demangled: rtc::LogMessage::UpdateMinLogSeverity() */
int _ZN3rtc10LogMessage20UpdateMinLogSeverityEv(void);

/* Symbol: _ZN3rtc8ToStringEl */
/* Demangled: rtc::ToString(long) */
int _ZN3rtc8ToStringEl(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl35OverrideSubmoduleCreationForTestingERKNS_29ApmSubmoduleCreationOverridesE */
/* Demangled: webrtc::AudioProcessingImpl::OverrideSubmoduleCreationForTesting(webrtc::ApmSubmoduleCreationOverrides const&) */
int _ZN6webrtc19AudioProcessingImpl35OverrideSubmoduleCreationForTestingERKNS_29ApmSubmoduleCreationOverridesE(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6webrtc13ChannelBufferIfEENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > >, std::__1::allocator<std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > > > >::__push_back_slow_path<std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > > >(std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > >&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc13ChannelBufferIfEENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void);

/* Symbol: _ZN3rtc8ToStringEm */
/* Demangled: rtc::ToString(unsigned long) */
int _ZN3rtc8ToStringEm(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ERKS2_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ERKS2_(void);

/* Symbol: _ZN6webrtc22QuantileNoiseEstimator8EstimateEN3rtc9ArrayViewIKfLi129EEENS2_IfLi129EEE */
/* Demangled: webrtc::QuantileNoiseEstimator::Estimate(rtc::ArrayView<float const, 129>, rtc::ArrayView<float, 129>) */
int _ZN6webrtc22QuantileNoiseEstimator8EstimateEN3rtc9ArrayViewIKfLi129EEENS2_IfLi129EEE(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIdEptEv */
/* Demangled: webrtc::FieldTrialConstrained<double>::operator->() const */
int _ZNK6webrtc21FieldTrialConstrainedIdEptEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGain20HandleEchoPathChangeERKNS_19EchoPathVariabilityE */
/* Demangled: webrtc::RefinedFilterUpdateGain::HandleEchoPathChange(webrtc::EchoPathVariability const&) */
int _ZN6webrtc23RefinedFilterUpdateGain20HandleEchoPathChangeERKNS_19EchoPathVariabilityE(void);

/* Symbol: _ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc */
/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
int _ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc(void);

/* Symbol: WebRtc_available_write */
/* Demangled: WebRtc_available_write */
int WebRtc_available_write(void);

/* Symbol: _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<float*, std::__1::allocator<float*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator5ResetEv */
/* Demangled: webrtc::FullBandErleEstimator::Reset() */
int _ZN6webrtc21FullBandErleEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGain15instance_count_E */
/* Demangled: webrtc::RefinedFilterUpdateGain::instance_count_ */
extern void* _ZN6webrtc23RefinedFilterUpdateGain15instance_count_E;

/* Symbol: _ZN6webrtc9ResamplerD2Ev */
/* Demangled: webrtc::Resampler::~Resampler() */
int _ZN6webrtc9ResamplerD2Ev(void);

/* Symbol: _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEi */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int) */
int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEi(void);

/* Symbol: _ZN3rtc9TimeNanosEv */
/* Demangled: rtc::TimeNanos() */
int _ZN3rtc9TimeNanosEv(void);

/* Symbol: _ZN3rtc5EventD2Ev */
/* Demangled: rtc::Event::~Event() */
int _ZN3rtc5EventD2Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad11RnnBasedVadC2Ev */
/* Demangled: webrtc::rnn_vad::RnnBasedVad::RnnBasedVad() */
int _ZN6webrtc7rnn_vad11RnnBasedVadC2Ev(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferEPbPf */
/* Demangled: webrtc::FilterAnalyzer::Update(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, webrtc::RenderBuffer const&, bool*, float*) */
int _ZN6webrtc14FilterAnalyzer6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferEPbPf(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIjEptEv */
/* Demangled: webrtc::FieldTrialParameter<unsigned int>::operator->() const */
int _ZNK6webrtc19FieldTrialParameterIjEptEv(void);

/* Symbol: _ZN3rtc10LogMessage6AddTagEPKc */
/* Demangled: rtc::LogMessage::AddTag(char const*) */
int _ZN3rtc10LogMessage6AddTagEPKc(void);

/* Symbol: _ZN6webrtc22NoiseSpectrumEstimator10InitializeEv */
/* Demangled: webrtc::NoiseSpectrumEstimator::Initialize() */
int _ZN6webrtc22NoiseSpectrumEstimator10InitializeEv(void);

/* Symbol: _ZN6webrtc14AudioConverter6CreateEjjjj */
/* Demangled: webrtc::AudioConverter::Create(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc14AudioConverter6CreateEjjjj(void);

/* Symbol: _ZN6webrtc14SpectrumBufferD1Ev */
/* Demangled: webrtc::SpectrumBuffer::~SpectrumBuffer() */
int _ZN6webrtc14SpectrumBufferD1Ev(void);

/* Symbol: _ZN3rtc8ToStringEs */
/* Demangled: rtc::ToString(short) */
int _ZN3rtc8ToStringEs(void);

/* Symbol: _ZN6webrtc7WPDNodeD1Ev */
/* Demangled: webrtc::WPDNode::~WPDNode() */
int _ZN6webrtc7WPDNodeD1Ev(void);

/* Symbol: _ZN6webrtc20WebRtcAecm_kSinTableE */
/* Demangled: webrtc::WebRtcAecm_kSinTable */
extern void* _ZN6webrtc20WebRtcAecm_kSinTableE;

/* Symbol: _ZNK6webrtc8AecState15ErleUncertaintyEv */
/* Demangled: webrtc::AecState::ErleUncertainty() const */
int _ZNK6webrtc8AecState15ErleUncertaintyEv(void);

/* Symbol: _ZN6webrtc23ReverbFrequencyResponseD1Ev */
/* Demangled: webrtc::ReverbFrequencyResponse::~ReverbFrequencyResponse() */
int _ZN6webrtc23ReverbFrequencyResponseD1Ev(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE10SetForTestES7_ */
/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetForTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE10SetForTestES7_(void);

/* Symbol: _ZN3rtc8ToStringEt */
/* Demangled: rtc::ToString(unsigned short) */
int _ZN3rtc8ToStringEt(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl31recommended_stream_analog_levelEv */
/* Demangled: webrtc::AudioProcessingImpl::recommended_stream_analog_level() const */
int _ZNK6webrtc19AudioProcessingImpl31recommended_stream_analog_levelEv(void);

/* Symbol: _ZN6webrtc11AudioBufferC1Ejjjjjj */
/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11AudioBufferC1Ejjjjjj(void);

/* Symbol: _ZN6webrtc11GainApplierC1Ebf */
/* Demangled: webrtc::GainApplier::GainApplier(bool, float) */
int _ZN6webrtc11GainApplierC1Ebf(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config9EchoModelC1Ev */
/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel() */
int _ZN6webrtc20EchoCanceller3Config9EchoModelC1Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD1Ev */
/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::~AutoCorrelationCalculator() */
int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD1Ev(void);

/* Symbol: _ZNK6webrtc8AecState22GetResidualEchoScalingEN3rtc9ArrayViewIfLin4711EEE */
/* Demangled: webrtc::AecState::GetResidualEchoScaling(rtc::ArrayView<float, -4711>) const */
int _ZNK6webrtc8AecState22GetResidualEchoScalingEN3rtc9ArrayViewIfLin4711EEE(void);

/* Symbol: _ZN6webrtc14EchoCanceller313AnalyzeRenderERKNS_11AudioBufferE */
/* Demangled: webrtc::EchoCanceller3::AnalyzeRender(webrtc::AudioBuffer const&) */
int _ZN6webrtc14EchoCanceller313AnalyzeRenderERKNS_11AudioBufferE(void);

/* Symbol: _ZNK6webrtc12RenderBuffer11SpectralSumEjPNSt3__15arrayIfLj65EEE */
/* Demangled: webrtc::RenderBuffer::SpectralSum(unsigned int, std::__1::array<float, 65u>*) const */
int _ZNK6webrtc12RenderBuffer11SpectralSumEjPNSt3__15arrayIfLj65EEE(void);

/* Symbol: _ZN3rtc16SystemTimeMillisEv */
/* Demangled: rtc::SystemTimeMillis() */
int _ZN3rtc16SystemTimeMillisEv(void);

/* Symbol: _ZNSt3__112__deque_baseIfNS_9allocatorIfEEED2Ev */
/* Demangled: std::__1::__deque_base<float, std::__1::allocator<float> >::~__deque_base() */
int _ZNSt3__112__deque_baseIfNS_9allocatorIfEEED2Ev(void);

/* Symbol: PreProcessingFx_ProcessReverse */
/* Demangled: PreProcessingFx_ProcessReverse */
int PreProcessingFx_ProcessReverse(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15ApmCaptureState12KeyboardInfo7ExtractEPKPKfRKNS_12StreamConfigE */
/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::KeyboardInfo::Extract(float const* const*, webrtc::StreamConfig const&) */
int _ZN6webrtc19AudioProcessingImpl15ApmCaptureState12KeyboardInfo7ExtractEPKPKfRKNS_12StreamConfigE(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplD2Ev */
/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
int _ZN6webrtc21EchoControlMobileImplD2Ev(void);

/* Symbol: _ZN6webrtc20WebRtcAecm_kCosTableE */
/* Demangled: webrtc::WebRtcAecm_kCosTable */
extern void* _ZN6webrtc20WebRtcAecm_kCosTableE;

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEENS4_ILS5_1EiEEEEEvPKciS9_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEENS4_ILS5_1EiEEEEEvPKciS9_DpRKT_E1t;

/* Symbol: _ZN6webrtc4aec324ComputeFrequencyResponseEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE */
/* Demangled: webrtc::aec3::ComputeFrequencyResponse(unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >*) */
int _ZN6webrtc4aec324ComputeFrequencyResponseEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE(void);

/* Symbol: _ZN6webrtc11ReverbModelD1Ev */
/* Demangled: webrtc::ReverbModel::~ReverbModel() */
int _ZN6webrtc11ReverbModelD1Ev(void);

/* Symbol: _Z8NsCreateP16preproc_effect_s */
/* Demangled: NsCreate(preproc_effect_s*) */
int _Z8NsCreateP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc20ResidualEchoDetector18AnalyzeRenderAudioEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::ResidualEchoDetector::AnalyzeRenderAudio(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc20ResidualEchoDetector18AnalyzeRenderAudioEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _ZN6webrtc7LimiterD2Ev */
/* Demangled: webrtc::Limiter::~Limiter() */
int _ZN6webrtc7LimiterD2Ev(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilterD1Ev */
/* Demangled: webrtc::CascadedBiQuadFilter::~CascadedBiQuadFilter() */
int _ZN6webrtc20CascadedBiQuadFilterD1Ev(void);

/* Symbol: _ZN3rtc8ToStringEx */
/* Demangled: rtc::ToString(long long) */
int _ZN3rtc8ToStringEx(void);

/* Symbol: _ZTVN6webrtc29AdaptiveModeLevelEstimatorAgcE */
/* Demangled: vtable for webrtc::AdaptiveModeLevelEstimatorAgc */
extern void* _ZTVN6webrtc29AdaptiveModeLevelEstimatorAgcE;

/* Symbol: _ZN6webrtc7rnn_vad17FeaturesExtractorC1Ev */
/* Demangled: webrtc::rnn_vad::FeaturesExtractor::FeaturesExtractor() */
int _ZN6webrtc7rnn_vad17FeaturesExtractorC1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_back(float*&&) */
int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectD1Ev */
/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
int _ZN6webrtc16AgcManagerDirectD1Ev(void);

/* Symbol: _ZN3rtc8ToStringEy */
/* Demangled: rtc::ToString(unsigned long long) */
int _ZN3rtc8ToStringEy(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKsRKNS_12StreamConfigE */
/* Demangled: webrtc::AudioProcessingImpl::RecordUnprocessedCaptureStream(short const*, webrtc::StreamConfig const&) */
int _ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKsRKNS_12StreamConfigE(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsaSERKS2_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::operator=(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds const&) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsaSERKS2_(void);

/* Symbol: WebRtcVad_set_mode_core */
/* Demangled: WebRtcVad_set_mode_core */
int WebRtcVad_set_mode_core(void);

/* Symbol: _ZN6webrtc17WebRtcAgc_InitVadEPNS_6AgcVadE */
/* Demangled: webrtc::WebRtcAgc_InitVad(webrtc::AgcVad*) */
int _ZN6webrtc17WebRtcAgc_InitVadEPNS_6AgcVadE(void);

/* Symbol: _ZN6webrtc15AudioProcessing6Config8PipelineC1Ev */
/* Demangled: webrtc::AudioProcessing::Config::Pipeline::Pipeline() */
int _ZN6webrtc15AudioProcessing6Config8PipelineC1Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl18GetLinearAecOutputEN3rtc9ArrayViewINSt3__15arrayIfLj160EEELin4711EEE */
/* Demangled: webrtc::AudioProcessingImpl::GetLinearAecOutput(rtc::ArrayView<std::__1::array<float, 160u>, -4711>) const */
int _ZNK6webrtc19AudioProcessingImpl18GetLinearAecOutputEN3rtc9ArrayViewINSt3__15arrayIfLj160EEELin4711EEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplD1Ev */
/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
int _ZN6webrtc19AudioProcessingImplD1Ev(void);

/* Symbol: _ZN6webrtc21SqrtFastApproximationEf */
/* Demangled: webrtc::SqrtFastApproximation(float) */
int _ZN6webrtc21SqrtFastApproximationEf(void);

/* Symbol: _ZN6webrtc7rnn_vad22RefinePitchPeriod48kHzEN3rtc9ArrayViewIKfLi864EEENS2_IKjLi2EEE */
/* Demangled: webrtc::rnn_vad::RefinePitchPeriod48kHz(rtc::ArrayView<float const, 864>, rtc::ArrayView<unsigned int const, 2>) */
int _ZN6webrtc7rnn_vad22RefinePitchPeriod48kHzEN3rtc9ArrayViewIKfLi864EEENS2_IKjLi2EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS5_JRKNS_21piecewise_construct_tENS_5tupleIJRKS5_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::__map_value_compare<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::less<std::__1::basic_string_view<char, std::__1::char_traits<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > > > >::__emplace_unique_key_args<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string_view<char, std::__1::char_traits<char> > const&>, std::__1::tuple<> >(std::__1::basic_string_view<char, std::__1::char_traits<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string_view<char, std::__1::char_traits<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS5_JRKNS_21piecewise_construct_tENS_5tupleIJRKS5_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE */
/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
int _ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE(void);

/* Symbol: _ZN6webrtc19NoiseLevelEstimatorD1Ev */
/* Demangled: webrtc::NoiseLevelEstimator::~NoiseLevelEstimator() */
int _ZN6webrtc19NoiseLevelEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE */
/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::BlockProcessor, std::__1::default_delete<webrtc::BlockProcessor> >) */
int _ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor8EstimateEv */
/* Demangled: webrtc::ReverbDecayEstimator::LateReverbLinearRegressor::Estimate() */
int _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor8EstimateEv(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIdEdeEv */
/* Demangled: webrtc::FieldTrialOptional<double>::operator*() const */
int _ZNK6webrtc18FieldTrialOptionalIdEdeEv(void);

/* Symbol: _ZN6webrtc17PushSincResamplerC2Ejj */
/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
int _ZN6webrtc17PushSincResamplerC2Ejj(void);

/* Symbol: _ZN6webrtc9Resampler4PushEPKsjPsjRj */
/* Demangled: webrtc::Resampler::Push(short const*, unsigned int, short*, unsigned int, unsigned int&) */
int _ZN6webrtc9Resampler4PushEPKsjPsjRj(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimator35ComputeEchoEstimatePerFilterSectionERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE */
/* Demangled: webrtc::SignalDependentErleEstimator::ComputeEchoEstimatePerFilterSection(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>) */
int _ZN6webrtc28SignalDependentErleEstimator35ComputeEchoEstimatePerFilterSectionERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE(void);

/* Symbol: _ZNSt3__16vectorINS0_INS_5arrayIfLj6EEENS_9allocatorIS2_EEEENS3_IS5_EEEC2EjRKS5_ */
/* Demangled: std::__1::vector<std::__1::vector<std::__1::array<float, 6u>, std::__1::allocator<std::__1::array<float, 6u> > >, std::__1::allocator<std::__1::vector<std::__1::array<float, 6u>, std::__1::allocator<std::__1::array<float, 6u> > > > >::vector(unsigned int, std::__1::vector<std::__1::array<float, 6u>, std::__1::allocator<std::__1::array<float, 6u> > > const&) */
int _ZNSt3__16vectorINS0_INS_5arrayIfLj6EEENS_9allocatorIS2_EEEENS3_IS5_EEEC2EjRKS5_(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj */
/* Demangled: webrtc::FieldTrialParameter<unsigned int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int) */
int _ZN6webrtc19FieldTrialParameterIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def */
/* Demangled: guard variable for webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def;

/* Symbol: _ZN3rtc11RaceCheckerC1Ev */
/* Demangled: rtc::RaceChecker::RaceChecker() */
int _ZN3rtc11RaceCheckerC1Ev(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6webrtc14AudioConverterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> >, std::__1::allocator<std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> > > >::__push_back_slow_path<std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> > >(std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> >&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc14AudioConverterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics8DbMetricC1Ev */
/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric() */
int _ZN6webrtc18EchoRemoverMetrics8DbMetricC1Ev(void);

/* Symbol: _ZN6webrtc7WPDNode8set_dataEPKfj */
/* Demangled: webrtc::WPDNode::set_data(float const*, unsigned int) */
int _ZN6webrtc7WPDNode8set_dataEPKfj(void);

/* Symbol: _ZNK6webrtc11AudioBuffer6CopyToEPS0_ */
/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::AudioBuffer*) const */
int _ZNK6webrtc11AudioBuffer6CopyToEPS0_(void);

/* Symbol: _ZNK6webrtc20ReverbDecayEstimator4DumpEPNS_13ApmDataDumperE */
/* Demangled: webrtc::ReverbDecayEstimator::Dump(webrtc::ApmDataDumper*) const */
int _ZNK6webrtc20ReverbDecayEstimator4DumpEPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE */
/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<int>) */
int _ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE(void);

/* Symbol: _ZN6webrtc25WebRtc_last_delay_qualityEPv */
/* Demangled: webrtc::WebRtc_last_delay_quality(void*) */
int _ZN6webrtc25WebRtc_last_delay_qualityEPv(void);

/* Symbol: _ZN6webrtc11AudioBuffer16set_num_channelsEj */
/* Demangled: webrtc::AudioBuffer::set_num_channels(unsigned int) */
int _ZN6webrtc11AudioBuffer16set_num_channelsEj(void);

/* Symbol: _ZN6webrtc6ConfigC2Ev */
/* Demangled: webrtc::Config::Config() */
int _ZN6webrtc6ConfigC2Ev(void);

/* Symbol: _ZN6webrtc14EchoCanceller312RenderWriterC2EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj */
/* Demangled: webrtc::EchoCanceller3::RenderWriter::RenderWriter(webrtc::ApmDataDumper*, webrtc::SwapQueue<std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >, webrtc::Aec3RenderQueueItemVerifier>*, unsigned int, unsigned int) */
int _ZN6webrtc14EchoCanceller312RenderWriterC2EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj(void);

/* Symbol: _ZN6webrtc12FrameBlocker29InsertSubFrameAndExtractBlockERKNSt3__16vectorINS2_IN3rtc9ArrayViewIfLin4711EEENS1_9allocatorIS5_EEEENS6_IS8_EEEEPNS2_INS2_INS2_IfNS6_IfEEEENS6_ISE_EEEENS6_ISG_EEEE */
/* Demangled: webrtc::FrameBlocker::InsertSubFrameAndExtractBlock(std::__1::vector<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > >, std::__1::allocator<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > > > const&, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*) */
int _ZN6webrtc12FrameBlocker29InsertSubFrameAndExtractBlockERKNSt3__16vectorINS2_IN3rtc9ArrayViewIfLin4711EEENS1_9allocatorIS5_EEEENS6_IS8_EEEEPNS2_INS2_INS2_IfNS6_IfEEEENS6_ISE_EEEENS6_ISG_EEEE(void);

/* Symbol: _ZN6webrtc7rnn_vad14PitchEstimatorD1Ev */
/* Demangled: webrtc::rnn_vad::PitchEstimator::~PitchEstimator() */
int _ZN6webrtc7rnn_vad14PitchEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf */
/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandSubModulesActiveEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::RenderMultiBandSubModulesActive() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandSubModulesActiveEv(void);

/* Symbol: _ZN6webrtc8AecState24FilteringQualityAnalyzer6UpdateEbbbRKNSt3__18optionalINS_13DelayEstimateEEEb */
/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::Update(bool, bool, bool, std::__1::optional<webrtc::DelayEstimate> const&, bool) */
int _ZN6webrtc8AecState24FilteringQualityAnalyzer6UpdateEbbbRKNSt3__18optionalINS_13DelayEstimateEEEb(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE */
/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<bool>) */
int _ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE(void);

/* Symbol: _ZTVN6webrtc18FieldTrialOptionalIjEE */
/* Demangled: vtable for webrtc::FieldTrialOptional<unsigned int> */
extern void* _ZTVN6webrtc18FieldTrialOptionalIjEE;

/* Symbol: _ZN6webrtc11DownSampler10DownSampleEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE */
/* Demangled: webrtc::DownSampler::DownSample(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc11DownSampler10DownSampleEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurve12RegionLoggerC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_ */
/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::RegionLogger(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_(void);

/* Symbol: _ZN6webrtc7MonoAgcC1EPNS_13ApmDataDumperEiibbi */
/* Demangled: webrtc::MonoAgc::MonoAgc(webrtc::ApmDataDumper*, int, int, bool, bool, int) */
int _ZN6webrtc7MonoAgcC1EPNS_13ApmDataDumperEiibbi(void);

/* Symbol: _ZN6webrtc7rnn_vad18SpectralCorrelatorD1Ev */
/* Demangled: webrtc::rnn_vad::SpectralCorrelator::~SpectralCorrelator() */
int _ZN6webrtc7rnn_vad18SpectralCorrelatorD1Ev(void);

/* Symbol: _ZN6webrtc21BlockProcessorMetrics13UpdateCaptureEb */
/* Demangled: webrtc::BlockProcessorMetrics::UpdateCapture(bool) */
int _ZN6webrtc21BlockProcessorMetrics13UpdateCaptureEb(void);

/* Symbol: _ZN6webrtc14AecDumpFactory6CreateENS_11FileWrapperExPN3rtc9TaskQueueE */
/* Demangled: webrtc::AecDumpFactory::Create(webrtc::FileWrapper, long long, rtc::TaskQueue*) */
int _ZN6webrtc14AecDumpFactory6CreateENS_11FileWrapperExPN3rtc9TaskQueueE(void);

/* Symbol: _ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN6webrtc7WPDTree6UpdateEPKfj */
/* Demangled: webrtc::WPDTree::Update(float const*, unsigned int) */
int _ZN6webrtc7WPDTree6UpdateEPKfj(void);

/* Symbol: _ZN6webrtc14CircularBuffer5ClearEv */
/* Demangled: webrtc::CircularBuffer::Clear() */
int _ZN6webrtc14CircularBuffer5ClearEv(void);

/* Symbol: _ZN6webrtc18WebRtcAgc_ExpCurveEsPs */
/* Demangled: webrtc::WebRtcAgc_ExpCurve(short, short*) */
int _ZN6webrtc18WebRtcAgc_ExpCurveEsPs(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialConstrained<double>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc21FieldTrialConstrainedIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji */
/* Demangled: webrtc::VoiceActivityDetector::ProcessChunk(short const*, unsigned int, int) */
int _ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji(void);

/* Symbol: _ZN6webrtc22EchoPathDelayEstimator5ResetEb */
/* Demangled: webrtc::EchoPathDelayEstimator::Reset(bool) */
int _ZN6webrtc22EchoPathDelayEstimator5ResetEb(void);

/* Symbol: _ZN6webrtc24SubtractorOutputAnalyzer20HandleEchoPathChangeEv */
/* Demangled: webrtc::SubtractorOutputAnalyzer::HandleEchoPathChange() */
int _ZN6webrtc24SubtractorOutputAnalyzer20HandleEchoPathChangeEv(void);

/* Symbol: WebRtcSpl_MemSetW16 */
/* Demangled: WebRtcSpl_MemSetW16 */
int WebRtcSpl_MemSetW16(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBankD1Ev */
/* Demangled: webrtc::ThreeBandFilterBank::~ThreeBandFilterBank() */
int _ZN6webrtc19ThreeBandFilterBankD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl25InitializeGainController2Ev */
/* Demangled: webrtc::AudioProcessingImpl::InitializeGainController2() */
int _ZN6webrtc19AudioProcessingImpl25InitializeGainController2Ev(void);

/* Symbol: _ZN6webrtc8RmsLevelC2Ev */
/* Demangled: webrtc::RmsLevel::RmsLevel() */
int _ZN6webrtc8RmsLevelC2Ev(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurveC1EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: webrtc::InterpolatedGainCurve::InterpolatedGainCurve(webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc21InterpolatedGainCurveC1EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN3rtc5EventC2Ebb */
/* Demangled: rtc::Event::Event(bool, bool) */
int _ZN3rtc5EventC2Ebb(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl28proc_fullband_sample_rate_hzEv */
/* Demangled: webrtc::AudioProcessingImpl::proc_fullband_sample_rate_hz() const */
int _ZNK6webrtc19AudioProcessingImpl28proc_fullband_sample_rate_hzEv(void);

/* Symbol: _ZN6webrtc8RmsLevel5ResetEv */
/* Demangled: webrtc::RmsLevel::Reset() */
int _ZN6webrtc8RmsLevel5ResetEv(void);

/* Symbol: _ZN6webrtc4aec316ErlComputer_NEONERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE */
/* Demangled: webrtc::aec3::ErlComputer_NEON(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc4aec316ErlComputer_NEONERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE(void);

/* Symbol: _ZN6webrtc24SubtractorOutputAnalyzerC1Ej */
/* Demangled: webrtc::SubtractorOutputAnalyzer::SubtractorOutputAnalyzer(unsigned int) */
int _ZN6webrtc24SubtractorOutputAnalyzerC1Ej(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config5DelayC2ERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay(webrtc::EchoCanceller3Config::Delay const&) */
int _ZN6webrtc20EchoCanceller3Config5DelayC2ERKS1_(void);

/* Symbol: _ZN6webrtc29WebRtcAgc_SpeakerInactiveCtrlEPNS_9LegacyAgcE */
/* Demangled: webrtc::WebRtcAgc_SpeakerInactiveCtrl(webrtc::LegacyAgc*) */
int _ZN6webrtc29WebRtcAgc_SpeakerInactiveCtrlEPNS_9LegacyAgcE(void);

/* Symbol: _ZN6webrtc13PitchBasedVadD2Ev */
/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadD2Ev(void);

/* Symbol: _ZNK6webrtc12FrameBlocker16IsBlockAvailableEv */
/* Demangled: webrtc::FrameBlocker::IsBlockAvailable() const */
int _ZNK6webrtc12FrameBlocker16IsBlockAvailableEv(void);

/* Symbol: _ZN6webrtc4aec314UpdateDbMetricERKNSt3__15arrayIfLj65EEEPNS2_INS_18EchoRemoverMetrics8DbMetricELj2EEE */
/* Demangled: webrtc::aec3::UpdateDbMetric(std::__1::array<float, 65u> const&, std::__1::array<webrtc::EchoRemoverMetrics::DbMetric, 2u>*) */
int _ZN6webrtc4aec314UpdateDbMetricERKNSt3__15arrayIfLj65EEEPNS2_INS_18EchoRemoverMetrics8DbMetricELj2EEE(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _Z15AecSetParameterP16preproc_effect_sPvS1_ */
/* Demangled: AecSetParameter(preproc_effect_s*, void*, void*) */
int _Z15AecSetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: WebRtcSpl_ScaleVectorWithSat */
/* Demangled: WebRtcSpl_ScaleVectorWithSat */
int WebRtcSpl_ScaleVectorWithSat(void);

/* Symbol: _ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*) */
int _ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterIdEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<double> webrtc::ParseTypedParameter<double>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterIdEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: WebRtcIsac_PitchAnalysis */
/* Demangled: WebRtcIsac_PitchAnalysis */
int WebRtcIsac_PitchAnalysis(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl14ApmRenderStateD2Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::~ApmRenderState() */
int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateD2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC1EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE */
/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::RuntimeSettingEnqueuer(webrtc::SwapQueue<webrtc::AudioProcessing::RuntimeSetting, webrtc::SwapQueueItemVerifier<webrtc::AudioProcessing::RuntimeSetting, &(bool webrtc::internal::NoopSwapQueueItemVerifierFunction<webrtc::AudioProcessing::RuntimeSetting>(webrtc::AudioProcessing::RuntimeSetting const&))> >*) */
int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC1EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer5ResetEv */
/* Demangled: webrtc::VadCircularBuffer::Reset() */
int _ZN6webrtc17VadCircularBuffer5ResetEv(void);

/* Symbol: _ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii */
/* Demangled: webrtc::metrics::HistogramFactoryGetCounts(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
int _ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii(void);

/* Symbol: WebRtcSpl_DownsampleFast */
/* Demangled: WebRtcSpl_DownsampleFast */
extern void* WebRtcSpl_DownsampleFast;

/* Symbol: WebRtcSpl_ComplexIFFT */
/* Demangled: WebRtcSpl_ComplexIFFT */
int WebRtcSpl_ComplexIFFT(void);

/* Symbol: _ZN6webrtc8AecStateC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::AecState::AecState(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc8AecStateC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZTVN6webrtc13CopyConverterE */
/* Demangled: vtable for webrtc::CopyConverter */
extern void* _ZTVN6webrtc13CopyConverterE;

/* Symbol: _ZN3rtc18GetClockForTestingEv */
/* Demangled: rtc::GetClockForTesting() */
int _ZN3rtc18GetClockForTestingEv(void);

/* Symbol: _ZN6webrtc25CreateTransientSuppressorERKNS_29ApmSubmoduleCreationOverridesE */
/* Demangled: webrtc::CreateTransientSuppressor(webrtc::ApmSubmoduleCreationOverrides const&) */
int _ZN6webrtc25CreateTransientSuppressorERKNS_29ApmSubmoduleCreationOverridesE(void);

/* Symbol: _ZN6webrtc8AecStateD1Ev */
/* Demangled: webrtc::AecState::~AecState() */
int _ZN6webrtc8AecStateD1Ev(void);

/* Symbol: _ZN6webrtc15SuppressionGain13LowerBandGainEbRKNS_8AecStateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESA_SA_PS8_ */
/* Demangled: webrtc::SuppressionGain::LowerBandGain(bool, webrtc::AecState const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::array<float, 65u>*) */
int _ZN6webrtc15SuppressionGain13LowerBandGainEbRKNS_8AecStateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESA_SA_PS8_(void);

/* Symbol: _ZTVN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE */
/* Demangled: vtable for webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern void* _ZTVN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE;

/* Symbol: _ZN6webrtc19AudioProcessingImpl10InitializeEv */
/* Demangled: webrtc::AudioProcessingImpl::Initialize() */
int _ZN6webrtc19AudioProcessingImpl10InitializeEv(void);

/* Symbol: _ZN6webrtc16ExpApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE */
/* Demangled: webrtc::ExpApproximation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc16ExpApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc15NoiseSuppressor12ChannelStateC1ERKNS_17SuppressionParamsEj */
/* Demangled: webrtc::NoiseSuppressor::ChannelState::ChannelState(webrtc::SuppressionParams const&, unsigned int) */
int _ZN6webrtc15NoiseSuppressor12ChannelStateC1ERKNS_17SuppressionParamsEj(void);

/* Symbol: _ZN6webrtc14EchoCanceller3D2Ev */
/* Demangled: webrtc::EchoCanceller3::~EchoCanceller3() */
int _ZN6webrtc14EchoCanceller3D2Ev(void);

/* Symbol: _ZN6webrtc21StationarityEstimator13NoiseSpectrumC2Ev */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::NoiseSpectrum() */
int _ZN6webrtc21StationarityEstimator13NoiseSpectrumC2Ev(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEc */
/* Demangled: rtc::SimpleStringBuilder::operator<<(char) */
int _ZN3rtc19SimpleStringBuilderlsEc(void);

/* Symbol: _Z9AgcCreateP16preproc_effect_s */
/* Demangled: AgcCreate(preproc_effect_s*) */
int _Z9AgcCreateP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc15GainController210InitializeEi */
/* Demangled: webrtc::GainController2::Initialize(int) */
int _ZN6webrtc15GainController210InitializeEi(void);

/* Symbol: _ZN6webrtc16LogApproximationEf */
/* Demangled: webrtc::LogApproximation(float) */
int _ZN6webrtc16LogApproximationEf(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIbEdeEv */
/* Demangled: webrtc::FieldTrialOptional<bool>::operator*() const */
int _ZNK6webrtc18FieldTrialOptionalIbEdeEv(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEd */
/* Demangled: rtc::SimpleStringBuilder::operator<<(double) */
int _ZN3rtc19SimpleStringBuilderlsEd(void);

/* Symbol: _ZN7rnnoise15kInputDenseBiasE */
/* Demangled: rnnoise::kInputDenseBias */
extern void* _ZN7rnnoise15kInputDenseBiasE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZNSt3__16vectorIN6webrtc13PushResamplerIfE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<webrtc::PushResampler<float>::ChannelResampler, std::__1::allocator<webrtc::PushResampler<float>::ChannelResampler> >::__push_back_slow_path<webrtc::PushResampler<float>::ChannelResampler>(webrtc::PushResampler<float>::ChannelResampler&&) */
int _ZNSt3__16vectorIN6webrtc13PushResamplerIfE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEe */
/* Demangled: rtc::SimpleStringBuilder::operator<<(long double) */
int _ZN3rtc19SimpleStringBuilderlsEe(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC2EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE */
/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::RuntimeSettingEnqueuer(webrtc::SwapQueue<webrtc::AudioProcessing::RuntimeSetting, webrtc::SwapQueueItemVerifier<webrtc::AudioProcessing::RuntimeSetting, &(bool webrtc::internal::NoopSwapQueueItemVerifierFunction<webrtc::AudioProcessing::RuntimeSetting>(webrtc::AudioProcessing::RuntimeSetting const&))> >*) */
int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC2EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE(void);

/* Symbol: _ZN3rtc18webrtc_checks_impl8ParseArgEPSt9__va_listPPKNS0_12CheckArgTypeEPNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: rtc::webrtc_checks_impl::ParseArg(std::__va_list*, rtc::webrtc_checks_impl::CheckArgType const**, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3rtc18webrtc_checks_impl8ParseArgEPSt9__va_listPPKNS0_12CheckArgTypeEPNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<short*, std::__1::allocator<short*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEf */
/* Demangled: rtc::SimpleStringBuilder::operator<<(float) */
int _ZN3rtc19SimpleStringBuilderlsEf(void);

/* Symbol: _ZN6webrtc10ComputeErlERKNS_16Aec3OptimizationERKNSt3__16vectorINS3_5arrayIfLj65EEENS3_9allocatorIS6_EEEEN3rtc9ArrayViewIfLin4711EEE */
/* Demangled: webrtc::ComputeErl(webrtc::Aec3Optimization const&, std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc10ComputeErlERKNS_16Aec3OptimizationERKNSt3__16vectorINS3_5arrayIfLj65EEENS3_9allocatorIS6_EEEEN3rtc9ArrayViewIfLin4711EEE(void);

/* Symbol: _ZN6webrtc14EchoAudibilityD1Ev */
/* Demangled: webrtc::EchoAudibility::~EchoAudibility() */
int _ZN6webrtc14EchoAudibilityD1Ev(void);

/* Symbol: _ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc12ErlEstimator6UpdateERKNSt3__16vectorIbNS1_9allocatorIbEEEEN3rtc9ArrayViewIKNS1_5arrayIfLj65EEELin4711EEESD_ */
/* Demangled: webrtc::ErlEstimator::Update(std::__1::vector<bool, std::__1::allocator<bool> > const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>) */
int _ZN6webrtc12ErlEstimator6UpdateERKNSt3__16vectorIbNS1_9allocatorIbEEEEN3rtc9ArrayViewIKNS1_5arrayIfLj65EEELin4711EEESD_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl24InitializeEchoControllerEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeEchoController() */
int _ZN6webrtc19AudioProcessingImpl24InitializeEchoControllerEv(void);

/* Symbol: _ZNK6webrtc20ResidualEchoDetector10GetMetricsEv */
/* Demangled: webrtc::ResidualEchoDetector::GetMetrics() const */
int _ZNK6webrtc20ResidualEchoDetector10GetMetricsEv(void);

/* Symbol: WebRtcSpl_ZerosArrayW16 */
/* Demangled: WebRtcSpl_ZerosArrayW16 */
int WebRtcSpl_ZerosArrayW16(void);

/* Symbol: WebRtcVad_Create */
/* Demangled: WebRtcVad_Create */
int WebRtcVad_Create(void);

/* Symbol: _ZN6webrtc15CreateFirFilterEPKfjj */
/* Demangled: webrtc::CreateFirFilter(float const*, unsigned int, unsigned int) */
int _ZN6webrtc15CreateFirFilterEPKfjj(void);

/* Symbol: _ZN6webrtc12VadAudioProc3RmsEPdj */
/* Demangled: webrtc::VadAudioProc::Rms(double*, unsigned int) */
int _ZN6webrtc12VadAudioProc3RmsEPdj(void);

/* Symbol: _ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*) */
int _ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc8AecState15TransparentModeC1ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::AecState::TransparentMode::TransparentMode(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc8AecState15TransparentModeC1ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN6webrtc15SuppressionGainD2Ev */
/* Demangled: webrtc::SuppressionGain::~SuppressionGain() */
int _ZN6webrtc15SuppressionGainD2Ev(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_ */
/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int, std::__1::optional<unsigned int>, std::__1::optional<unsigned int>) */
int _ZN6webrtc21FieldTrialConstrainedIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_(void);

/* Symbol: _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPs */
/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::StreamConfig const&, short*) */
int _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPs(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config9EchoModelaSERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::EchoModel::operator=(webrtc::EchoCanceller3Config::EchoModel const&) */
int _ZN6webrtc20EchoCanceller3Config9EchoModelaSERKS1_(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEi */
/* Demangled: rtc::SimpleStringBuilder::operator<<(int) */
int _ZN3rtc19SimpleStringBuilderlsEi(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter11ScaleFilterEf */
/* Demangled: webrtc::AdaptiveFirFilter::ScaleFilter(float) */
int _ZN6webrtc17AdaptiveFirFilter11ScaleFilterEf(void);

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE2ElEES6_EEEvPKciS8_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE2ElEES6_EEEvPKciS8_DpRKT_E1t;

/* Symbol: _ZN6webrtc14LevelEstimatorD2Ev */
/* Demangled: webrtc::LevelEstimator::~LevelEstimator() */
int _ZN6webrtc14LevelEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc13SincResamplerD2Ev */
/* Demangled: webrtc::SincResampler::~SincResampler() */
int _ZN6webrtc13SincResamplerD2Ev(void);

/* Symbol: _ZNK6webrtc13ErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE */
/* Demangled: webrtc::ErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
int _ZNK6webrtc13ErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEj */
/* Demangled: rtc::SimpleStringBuilder::operator<<(unsigned int) */
int _ZN3rtc19SimpleStringBuilderlsEj(void);

/* Symbol: _ZN6webrtc11AudioBufferC2Ejjjjjj */
/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11AudioBufferC2Ejjjjjj(void);

/* Symbol: _ZN3rtc16IsThreadRefEqualERKlS1_ */
/* Demangled: rtc::IsThreadRefEqual(long const&, long const&) */
int _ZN3rtc16IsThreadRefEqualERKlS1_(void);

/* Symbol: _ZN6webrtc7rnn_vad33ComputeSlidingFrameSquareEnergiesEN3rtc9ArrayViewIKfLi864EEENS2_IfLi385EEE */
/* Demangled: webrtc::rnn_vad::ComputeSlidingFrameSquareEnergies(rtc::ArrayView<float const, 864>, rtc::ArrayView<float, 385>) */
int _ZN6webrtc7rnn_vad33ComputeSlidingFrameSquareEnergiesEN3rtc9ArrayViewIKfLi864EEENS2_IfLi385EEE(void);

/* Symbol: _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor36ComputeNormalizedCepstralCorrelationEN3rtc9ArrayViewIfLi6EEE */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::ComputeNormalizedCepstralCorrelation(rtc::ArrayView<float, 6>) */
int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor36ComputeNormalizedCepstralCorrelationEN3rtc9ArrayViewIfLi6EEE(void);

/* Symbol: _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC2Ev */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::SpectralFeaturesExtractor() */
int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC2Ev(void);

/* Symbol: WebRtcSpl_Resample44khzTo32khz */
/* Demangled: WebRtcSpl_Resample44khzTo32khz */
int WebRtcSpl_Resample44khzTo32khz(void);

/* Symbol: _ZN6webrtc25WebRtcAecm_BufferFarFrameEPNS_8AecmCoreEPKsi */
/* Demangled: webrtc::WebRtcAecm_BufferFarFrame(webrtc::AecmCore*, short const*, int) */
int _ZN6webrtc25WebRtcAecm_BufferFarFrameEPNS_8AecmCoreEPKsi(void);

/* Symbol: _ZN6webrtc21StationarityEstimatorD1Ev */
/* Demangled: webrtc::StationarityEstimator::~StationarityEstimator() */
int _ZN6webrtc21StationarityEstimatorD1Ev(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEl */
/* Demangled: rtc::SimpleStringBuilder::operator<<(long) */
int _ZN3rtc19SimpleStringBuilderlsEl(void);

/* Symbol: _ZN6webrtc7WPDTreeD1Ev */
/* Demangled: webrtc::WPDTree::~WPDTree() */
int _ZN6webrtc7WPDTreeD1Ev(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10SuppressorC1Ev */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor() */
int _ZN6webrtc20EchoCanceller3Config10SuppressorC1Ev(void);

/* Symbol: _ZN6webrtc13PushResamplerIsEC1Ev */
/* Demangled: webrtc::PushResampler<short>::PushResampler() */
int _ZN6webrtc13PushResamplerIsEC1Ev(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_NS1_8optionalIS7_EE */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_NS1_8optionalIS7_EE(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEm */
/* Demangled: rtc::SimpleStringBuilder::operator<<(unsigned long) */
int _ZN3rtc19SimpleStringBuilderlsEm(void);

/* Symbol: _ZN6webrtc14AecDumpFactory6CreateENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE */
/* Demangled: webrtc::AecDumpFactory::Create(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long, rtc::TaskQueue*) */
int _ZN6webrtc14AecDumpFactory6CreateENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE(void);

/* Symbol: _ZNK3rtc11RaceChecker7ReleaseEv */
/* Demangled: rtc::RaceChecker::Release() const */
int _ZNK3rtc11RaceChecker7ReleaseEv(void);

/* Symbol: _ZTVN6webrtc14AudioConverterE */
/* Demangled: vtable for webrtc::AudioConverter */
extern void* _ZTVN6webrtc14AudioConverterE;

/* Symbol: _ZN6webrtc14EchoCanceller312RenderWriter6InsertERKNS_11AudioBufferE */
/* Demangled: webrtc::EchoCanceller3::RenderWriter::Insert(webrtc::AudioBuffer const&) */
int _ZN6webrtc14EchoCanceller312RenderWriter6InsertERKNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc10Subtractor20HandleEchoPathChangeERKNS_19EchoPathVariabilityE */
/* Demangled: webrtc::Subtractor::HandleEchoPathChange(webrtc::EchoPathVariability const&) */
int _ZN6webrtc10Subtractor20HandleEchoPathChangeERKNS_19EchoPathVariabilityE(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGainD1Ev */
/* Demangled: webrtc::RefinedFilterUpdateGain::~RefinedFilterUpdateGain() */
int _ZN6webrtc23RefinedFilterUpdateGainD1Ev(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEERKNSt3__18optionalIfEEibb */
/* Demangled: webrtc::ReverbDecayEstimator::Update(rtc::ArrayView<float const, -4711>, std::__1::optional<float> const&, int, bool, bool) */
int _ZN6webrtc20ReverbDecayEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEERKNSt3__18optionalIfEEibb(void);

/* Symbol: _ZNK6webrtc7Limiter17GetGainCurveStatsEv */
/* Demangled: webrtc::Limiter::GetGainCurveStats() const */
int _ZNK6webrtc7Limiter17GetGainCurveStatsEv(void);

/* Symbol: _ZN6webrtc12ErlEstimator5ResetEv */
/* Demangled: webrtc::ErlEstimator::Reset() */
int _ZN6webrtc12ErlEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimator22UpdateRenderNoisePowerERKNS_12RenderBufferE */
/* Demangled: webrtc::ResidualEchoEstimator::UpdateRenderNoisePower(webrtc::RenderBuffer const&) */
int _ZN6webrtc21ResidualEchoEstimator22UpdateRenderNoisePowerERKNS_12RenderBufferE(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigC1Ev */
/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig() */
int _ZN6webrtc17InternalAPMConfigC1Ev(void);

/* Symbol: _ZN6webrtc11field_trial25InitFieldTrialsFromStringEPKc */
/* Demangled: webrtc::field_trial::InitFieldTrialsFromString(char const*) */
int _ZN6webrtc11field_trial25InitFieldTrialsFromStringEPKc(void);

/* Symbol: WebRtcSpl_UpsampleBy2 */
/* Demangled: WebRtcSpl_UpsampleBy2 */
int WebRtcSpl_UpsampleBy2(void);

/* Symbol: _ZN6webrtc13PushResamplerIfEC2Ev */
/* Demangled: webrtc::PushResampler<float>::PushResampler() */
int _ZN6webrtc13PushResamplerIfEC2Ev(void);

/* Symbol: _ZN6webrtc14CircularBufferC2Ej */
/* Demangled: webrtc::CircularBuffer::CircularBuffer(unsigned int) */
int _ZN6webrtc14CircularBufferC2Ej(void);

/* Symbol: _ZN6webrtc15GainController2D2Ev */
/* Demangled: webrtc::GainController2::~GainController2() */
int _ZN6webrtc15GainController2D2Ev(void);

/* Symbol: _ZN6webrtc14CircularBuffer4PushEf */
/* Demangled: webrtc::CircularBuffer::Push(float) */
int _ZN6webrtc14CircularBuffer4PushEf(void);

/* Symbol: WebRtcIsac_AllPassFilter2Float */
/* Demangled: WebRtcIsac_AllPassFilter2Float */
int WebRtcIsac_AllPassFilter2Float(void);

/* Symbol: _ZN6webrtc16WebRtcAgc_AddMicEPvPKPsjj */
/* Demangled: webrtc::WebRtcAgc_AddMic(void*, short* const*, unsigned int, unsigned int) */
int _ZN6webrtc16WebRtcAgc_AddMicEPvPKPsjj(void);

/* Symbol: WebRtcAecm_GetBufferFarendError */
/* Demangled: WebRtcAecm_GetBufferFarendError */
int WebRtcAecm_GetBufferFarendError(void);

/* Symbol: WebRtcIsac_WeightingFilter */
/* Demangled: WebRtcIsac_WeightingFilter */
int WebRtcIsac_WeightingFilter(void);

/* Symbol: _ZN6webrtc5Pffft11FloatBufferC2EjNS0_7FftTypeE */
/* Demangled: webrtc::Pffft::FloatBuffer::FloatBuffer(unsigned int, webrtc::Pffft::FftType) */
int _ZN6webrtc5Pffft11FloatBufferC2EjNS0_7FftTypeE(void);

/* Symbol: _ZN6webrtc15GainControlImplD1Ev */
/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
int _ZN6webrtc15GainControlImplD1Ev(void);

/* Symbol: WebRtcSpl_CreateRealFFT */
/* Demangled: WebRtcSpl_CreateRealFFT */
int WebRtcSpl_CreateRealFFT(void);

/* Symbol: _ZN6webrtc4aec322MatchedFilterCore_NEONEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf */
/* Demangled: webrtc::aec3::MatchedFilterCore_NEON(unsigned int, float, float, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>, bool*, float*) */
int _ZN6webrtc4aec322MatchedFilterCore_NEONEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf(void);

/* Symbol: _ZN6webrtc26MatchedFilterLagAggregatorC2EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE */
/* Demangled: webrtc::MatchedFilterLagAggregator::MatchedFilterLagAggregator(webrtc::ApmDataDumper*, unsigned int, webrtc::EchoCanceller3Config::Delay::DelaySelectionThresholds const&) */
int _ZN6webrtc26MatchedFilterLagAggregatorC2EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE(void);

/* Symbol: _ZN3rtc7tracing22ShutdownInternalTracerEv */
/* Demangled: rtc::tracing::ShutdownInternalTracer() */
int _ZN3rtc7tracing22ShutdownInternalTracerEv(void);

/* Symbol: WebRtcSpl_MaxAbsValueW32 */
/* Demangled: WebRtcSpl_MaxAbsValueW32 */
extern void* WebRtcSpl_MaxAbsValueW32;

/* Symbol: _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity) */
int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityE(void);

/* Symbol: pffft_simd_arch */
/* Demangled: pffft_simd_arch */
int pffft_simd_arch(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb */
/* Demangled: webrtc::AudioProcessingImpl::set_stream_key_pressed(bool) */
int _ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb(void);

/* Symbol: _ZN6webrtc32GetExtraSaturationMarginOffsetDbEv */
/* Demangled: webrtc::GetExtraSaturationMarginOffsetDb() */
int _ZN6webrtc32GetExtraSaturationMarginOffsetDbEv(void);

/* Symbol: _ZN6webrtc11BlockBufferD2Ev */
/* Demangled: webrtc::BlockBuffer::~BlockBuffer() */
int _ZN6webrtc11BlockBufferD2Ev(void);

/* Symbol: _ZNK6webrtc14AlignmentMixer7DownmixEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE */
/* Demangled: webrtc::AlignmentMixer::Downmix(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, rtc::ArrayView<float, 64>) const */
int _ZNK6webrtc14AlignmentMixer7DownmixEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE(void);

/* Symbol: _ZN6webrtc20ApiCallJitterMetrics5ResetEv */
/* Demangled: webrtc::ApiCallJitterMetrics::Reset() */
int _ZN6webrtc20ApiCallJitterMetrics5ResetEv(void);

/* Symbol: _ZN6webrtc12ErlEstimatorC2Ej */
/* Demangled: webrtc::ErlEstimator::ErlEstimator(unsigned int) */
int _ZN6webrtc12ErlEstimatorC2Ej(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEx */
/* Demangled: rtc::SimpleStringBuilder::operator<<(long long) */
int _ZN3rtc19SimpleStringBuilderlsEx(void);

/* Symbol: _ZN6webrtc17LoudnessHistogramC2Ei */
/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram(int) */
int _ZN6webrtc17LoudnessHistogramC2Ei(void);

/* Symbol: _ZN6webrtc11DownSamplerC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::DownSampler::DownSampler(webrtc::ApmDataDumper*) */
int _ZN6webrtc11DownSamplerC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter18AdaptAndUpdateSizeERKNS_12RenderBufferERKNS_7FftDataE */
/* Demangled: webrtc::AdaptiveFirFilter::AdaptAndUpdateSize(webrtc::RenderBuffer const&, webrtc::FftData const&) */
int _ZN6webrtc17AdaptiveFirFilter18AdaptAndUpdateSizeERKNS_12RenderBufferERKNS_7FftDataE(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb */
/* Demangled: webrtc::FieldTrialParameter<bool>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN6webrtc19FieldTrialParameterIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsEy */
/* Demangled: rtc::SimpleStringBuilder::operator<<(unsigned long long) */
int _ZN3rtc19SimpleStringBuilderlsEy(void);

/* Symbol: _ZN6webrtc13Dbfs2LoudnessEd */
/* Demangled: webrtc::Dbfs2Loudness(double) */
int _ZN6webrtc13Dbfs2LoudnessEd(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKsRKNS_12StreamConfigES5_Ps */
/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(short const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, short*) */
int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKsRKNS_12StreamConfigES5_Ps(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC1Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::ApmStatsReporter() */
int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC1Ev(void);

/* Symbol: _ZN6webrtc14VoiceDetectionC2EiNS0_10LikelihoodE */
/* Demangled: webrtc::VoiceDetection::VoiceDetection(int, webrtc::VoiceDetection::Likelihood) */
int _ZN6webrtc14VoiceDetectionC2EiNS0_10LikelihoodE(void);

/* Symbol: WebRtcAecm_set_config */
/* Demangled: WebRtcAecm_set_config */
int WebRtcAecm_set_config(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurve12RegionLoggerD2Ev */
/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::~RegionLogger() */
int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerD2Ev(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilterD2Ev */
/* Demangled: webrtc::AdaptiveFirFilter::~AdaptiveFirFilter() */
int _ZN6webrtc17AdaptiveFirFilterD2Ev(void);

/* Symbol: _ZN6webrtc13MatchedFilterD1Ev */
/* Demangled: webrtc::MatchedFilter::~MatchedFilter() */
int _ZN6webrtc13MatchedFilterD1Ev(void);

/* Symbol: _Z18PreProc_GetSessioniii */
/* Demangled: PreProc_GetSession(int, int, int) */
int _Z18PreProc_GetSessioniii(void);

/* Symbol: _ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_ */
/* Demangled: webrtc::SplittingFilter::ThreeBandsAnalysis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
int _ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_(void);

/* Symbol: _ZN6webrtc13StandaloneVad11GetActivityEPdj */
/* Demangled: webrtc::StandaloneVad::GetActivity(double*, unsigned int) */
int _ZN6webrtc13StandaloneVad11GetActivityEPdj(void);

/* Symbol: _ZN3rtc10LogMessageD1Ev */
/* Demangled: rtc::LogMessage::~LogMessage() */
int _ZN3rtc10LogMessageD1Ev(void);

/* Symbol: _ZN6webrtc20EchoCanceller3ConfigC1Ev */
/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config() */
int _ZN6webrtc20EchoCanceller3ConfigC1Ev(void);

/* Symbol: _ZN6webrtc13SincResampler13Convolve_NEONEPKfS2_S2_d */
/* Demangled: webrtc::SincResampler::Convolve_NEON(float const*, float const*, float const*, double) */
int _ZN6webrtc13SincResampler13Convolve_NEONEPKfS2_S2_d(void);

/* Symbol: WebRtc_available_read */
/* Demangled: WebRtc_available_read */
int WebRtc_available_read(void);

/* Symbol: WebRtcVad_ValidRateAndFrameLength */
/* Demangled: WebRtcVad_ValidRateAndFrameLength */
int WebRtcVad_ValidRateAndFrameLength(void);

/* Symbol: _ZN6webrtc18DetectOptimizationEv */
/* Demangled: webrtc::DetectOptimization() */
int _ZN6webrtc18DetectOptimizationEv(void);

/* Symbol: _ZN6webrtc14EchoCanceller314AnalyzeCaptureERKNS_11AudioBufferE */
/* Demangled: webrtc::EchoCanceller3::AnalyzeCapture(webrtc::AudioBuffer const&) */
int _ZN6webrtc14EchoCanceller314AnalyzeCaptureERKNS_11AudioBufferE(void);

/* Symbol: _ZTVN6webrtc22SubbandNearendDetectorE */
/* Demangled: vtable for webrtc::SubbandNearendDetector */
extern void* _ZTVN6webrtc22SubbandNearendDetectorE;

/* Symbol: _ZN6webrtc19AudioProcessingImpl25InitializeNoiseSuppressorEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeNoiseSuppressor() */
int _ZN6webrtc19AudioProcessingImpl25InitializeNoiseSuppressorEv(void);

/* Symbol: WebRtcSpl_MaxValueW16Neon */
/* Demangled: WebRtcSpl_MaxValueW16Neon */
int WebRtcSpl_MaxValueW16Neon(void);

/* Symbol: _ZN6webrtc27WebRtc_CreateDelayEstimatorEPvi */
/* Demangled: webrtc::WebRtc_CreateDelayEstimator(void*, int) */
int _ZN6webrtc27WebRtc_CreateDelayEstimatorEPvi(void);

/* Symbol: _ZN6webrtc12WienerFilterC1ERKNS_17SuppressionParamsE */
/* Demangled: webrtc::WienerFilter::WienerFilter(webrtc::SuppressionParams const&) */
int _ZN6webrtc12WienerFilterC1ERKNS_17SuppressionParamsE(void);

/* Symbol: _ZN6webrtc15GainController27ProcessEPNS_11AudioBufferE */
/* Demangled: webrtc::GainController2::Process(webrtc::AudioBuffer*) */
int _ZN6webrtc15GainController27ProcessEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::SignalDependentErleEstimator::SignalDependentErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc28SignalDependentErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc3Agc5ResetEv */
/* Demangled: webrtc::Agc::Reset() */
int _ZN6webrtc3Agc5ResetEv(void);

/* Symbol: _ZN3rtc8internal16RaceCheckerScopeD1Ev */
/* Demangled: rtc::internal::RaceCheckerScope::~RaceCheckerScope() */
int _ZN3rtc8internal16RaceCheckerScopeD1Ev(void);

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnumD0Ev */
/* Demangled: webrtc::AbstractFieldTrialEnum::~AbstractFieldTrialEnum() */
int _ZN6webrtc22AbstractFieldTrialEnumD0Ev(void);

/* Symbol: _ZN6webrtc13GetRightAlignEjj */
/* Demangled: webrtc::GetRightAlign(unsigned int, unsigned int) */
int _ZN6webrtc13GetRightAlignEjj(void);

/* Symbol: _ZN6webrtc33WebRtc_DelayEstimatorProcessFloatEPvPKfi */
/* Demangled: webrtc::WebRtc_DelayEstimatorProcessFloat(void*, float const*, int) */
int _ZN6webrtc33WebRtc_DelayEstimatorProcessFloatEPvPKfi(void);

/* Symbol: WebRtcSpl_SynthesisQMF */
/* Demangled: WebRtcSpl_SynthesisQMF */
int WebRtcSpl_SynthesisQMF(void);

/* Symbol: _ZN6webrtc13PushResamplerIfED0Ev */
/* Demangled: webrtc::PushResampler<float>::~PushResampler() */
int _ZN6webrtc13PushResamplerIfED0Ev(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter9SetFilterEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEE */
/* Demangled: webrtc::AdaptiveFirFilter::SetFilter(unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&) */
int _ZN6webrtc17AdaptiveFirFilter9SetFilterEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEE(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimator5ResetEv */
/* Demangled: webrtc::SubbandErleEstimator::Reset() */
int _ZN6webrtc20SubbandErleEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc7rnn_vad19FullyConnectedLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE */
/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::FullyConnectedLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::FunctionView<float (float)>, webrtc::rnn_vad::Optimization) */
int _ZN6webrtc7rnn_vad19FullyConnectedLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE(void);

/* Symbol: _ZN6webrtc7rnn_vad19FullyConnectedLayerD2Ev */
/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::~FullyConnectedLayer() */
int _ZN6webrtc7rnn_vad19FullyConnectedLayerD2Ev(void);

/* Symbol: _ZN6webrtc23WebRtcAecm_ProcessFrameEPNS_8AecmCoreEPKsS3_S3_Ps */
/* Demangled: webrtc::WebRtcAecm_ProcessFrame(webrtc::AecmCore*, short const*, short const*, short const*, short*) */
int _ZN6webrtc23WebRtcAecm_ProcessFrameEPNS_8AecmCoreEPKsS3_S3_Ps(void);

/* Symbol: _ZN6webrtc20ApiCallJitterMetrics6Jitter5ResetEv */
/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Reset() */
int _ZN6webrtc20ApiCallJitterMetrics6Jitter5ResetEv(void);

/* Symbol: _ZN3rtc13StringBuilder12AppendFormatEPKcz */
/* Demangled: rtc::StringBuilder::AppendFormat(char const*, ...) */
int _ZN3rtc13StringBuilder12AppendFormatEPKcz(void);

/* Symbol: _Z10Agc2CreateP16preproc_effect_s */
/* Demangled: Agc2Create(preproc_effect_s*) */
int _Z10Agc2CreateP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc26AdaptiveDigitalGainApplierC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveDigitalGainApplier::AdaptiveDigitalGainApplier(webrtc::ApmDataDumper*) */
int _ZN6webrtc26AdaptiveDigitalGainApplierC2EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc14FilterAnalyzerD2Ev */
/* Demangled: webrtc::FilterAnalyzer::~FilterAnalyzer() */
int _ZN6webrtc14FilterAnalyzerD2Ev(void);

/* Symbol: _ZN6webrtc28RenderDelayControllerMetricsC1Ev */
/* Demangled: webrtc::RenderDelayControllerMetrics::RenderDelayControllerMetrics() */
int _ZN6webrtc28RenderDelayControllerMetricsC1Ev(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor5ResetEi */
/* Demangled: webrtc::ReverbDecayEstimator::LateReverbLinearRegressor::Reset(int) */
int _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor5ResetEi(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIdEptEv */
/* Demangled: webrtc::FieldTrialParameter<double>::operator->() const */
int _ZNK6webrtc19FieldTrialParameterIdEptEv(void);

/* Symbol: _ZTVN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE */
/* Demangled: vtable for webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern void* _ZTVN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE;

/* Symbol: _ZN3rtc10LogMessage10LogThreadsEb */
/* Demangled: rtc::LogMessage::LogThreads(bool) */
int _ZN3rtc10LogMessage10LogThreadsEb(void);

/* Symbol: _ZTVN6webrtc19AudioProcessingImplE */
/* Demangled: vtable for webrtc::AudioProcessingImpl */
extern void* _ZTVN6webrtc19AudioProcessingImplE;

/* Symbol: WebRtcVad_CalculateFeatures */
/* Demangled: WebRtcVad_CalculateFeatures */
int WebRtcVad_CalculateFeatures(void);

/* Symbol: _ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE */
/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
int _ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE(void);

/* Symbol: _ZN6webrtc26FixedDigitalLevelEstimator13SetSampleRateEj */
/* Demangled: webrtc::FixedDigitalLevelEstimator::SetSampleRate(unsigned int) */
int _ZN6webrtc26FixedDigitalLevelEstimator13SetSampleRateEj(void);

/* Symbol: _ZNK6webrtc10Subtractor28FilterMisadjustmentEstimator4DumpEPNS_13ApmDataDumperE */
/* Demangled: webrtc::Subtractor::FilterMisadjustmentEstimator::Dump(webrtc::ApmDataDumper*) const */
int _ZNK6webrtc10Subtractor28FilterMisadjustmentEstimator4DumpEPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc17LoudnessHistogramC2Ev */
/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram() */
int _ZN6webrtc17LoudnessHistogramC2Ev(void);

/* Symbol: _ZN6webrtc17TransientDetectorD2Ev */
/* Demangled: webrtc::TransientDetector::~TransientDetector() */
int _ZN6webrtc17TransientDetectorD2Ev(void);

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE4CallIJEEEvPKciS5_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::Call<>(char const*, int, char const*)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE4CallIJEEEvPKciS5_DpRKT_E1t;

/* Symbol: _ZN6webrtc23WebRtcAgc_ProcessAnalogEPviPissPh */
/* Demangled: webrtc::WebRtcAgc_ProcessAnalog(void*, int, int*, short, short, unsigned char*) */
int _ZN6webrtc23WebRtcAgc_ProcessAnalogEPviPissPh(void);

/* Symbol: _ZN6webrtc12FrameBlockerC1Ejj */
/* Demangled: webrtc::FrameBlocker::FrameBlocker(unsigned int, unsigned int) */
int _ZN6webrtc12FrameBlockerC1Ejj(void);

/* Symbol: validate_pffft_simd_ex */
/* Demangled: validate_pffft_simd_ex */
int validate_pffft_simd_ex(void);

/* Symbol: _ZN6webrtc9MovingMaxD1Ev */
/* Demangled: webrtc::MovingMax::~MovingMax() */
int _ZN6webrtc9MovingMaxD1Ev(void);

/* Symbol: _ZN6webrtc15Linear2LoudnessEd */
/* Demangled: webrtc::Linear2Loudness(double) */
int _ZN6webrtc15Linear2LoudnessEd(void);

/* Symbol: _ZN6webrtc7rnn_vad25ComputePitchGainThresholdEiiifif */
/* Demangled: webrtc::rnn_vad::ComputePitchGainThreshold(int, int, int, float, int, float) */
int _ZN6webrtc7rnn_vad25ComputePitchGainThresholdEiiifif(void);

/* Symbol: _ZNK6webrtc21MeanVarianceEstimator13std_deviationEv */
/* Demangled: webrtc::MeanVarianceEstimator::std_deviation() const */
int _ZNK6webrtc21MeanVarianceEstimator13std_deviationEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKPKf */
/* Demangled: webrtc::AudioProcessingImpl::RecordUnprocessedCaptureStream(float const* const*) */
int _ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKPKf(void);

/* Symbol: WebRtcSpl_ResetResample8khzTo22khz */
/* Demangled: WebRtcSpl_ResetResample8khzTo22khz */
int WebRtcSpl_ResetResample8khzTo22khz(void);

/* Symbol: _ZN6webrtc16SubtractorOutputD1Ev */
/* Demangled: webrtc::SubtractorOutput::~SubtractorOutput() */
int _ZN6webrtc16SubtractorOutputD1Ev(void);

/* Symbol: _ZN6webrtc8OouraFftC2Eb */
/* Demangled: webrtc::OouraFft::OouraFft(bool) */
int _ZN6webrtc8OouraFftC2Eb(void);

/* Symbol: _ZN6webrtc14FieldTrialFlag5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialFlag::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc14FieldTrialFlag5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE(void);

/* Symbol: _ZTVN6webrtc22AbstractFieldTrialEnumE */
/* Demangled: vtable for webrtc::AbstractFieldTrialEnum */
extern void* _ZTVN6webrtc22AbstractFieldTrialEnumE;

/* Symbol: _ZN6webrtc20WebRtc_set_lookaheadEPvi */
/* Demangled: webrtc::WebRtc_set_lookahead(void*, int) */
int _ZN6webrtc20WebRtc_set_lookaheadEPvi(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKfEES7_S7_ */
/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKfEES7_S7_ */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKfEES7_S7_(void);

/* Symbol: WebRtcSpl_ScaleAndAddVectors */
/* Demangled: WebRtcSpl_ScaleAndAddVectors */
int WebRtcSpl_ScaleAndAddVectors(void);

/* Symbol: _ZN6webrtc25PriorSignalModelEstimator6UpdateERKNS_10HistogramsE */
/* Demangled: webrtc::PriorSignalModelEstimator::Update(webrtc::Histograms const&) */
int _ZN6webrtc25PriorSignalModelEstimator6UpdateERKNS_10HistogramsE(void);

/* Symbol: _ZN6webrtc12VadWithLevel12AnalyzeFrameENS_14AudioFrameViewIKfEE */
/* Demangled: webrtc::VadWithLevel::AnalyzeFrame(webrtc::AudioFrameView<float const>) */
int _ZN6webrtc12VadWithLevel12AnalyzeFrameENS_14AudioFrameViewIKfEE(void);

/* Symbol: _ZN6webrtc22CoarseFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_7FftDataEjbPS9_ */
/* Demangled: webrtc::CoarseFilterUpdateGain::Compute(std::__1::array<float, 65u> const&, webrtc::RenderSignalAnalyzer const&, webrtc::FftData const&, unsigned int, bool, webrtc::FftData*) */
int _ZN6webrtc22CoarseFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_7FftDataEjbPS9_(void);

/* Symbol: _ZN6webrtc7MonoAgcC2EPNS_13ApmDataDumperEiibbi */
/* Demangled: webrtc::MonoAgc::MonoAgc(webrtc::ApmDataDumper*, int, int, bool, bool, int) */
int _ZN6webrtc7MonoAgcC2EPNS_13ApmDataDumperEiibbi(void);

/* Symbol: _ZN6webrtc13ApmDataDumperD1Ev */
/* Demangled: webrtc::ApmDataDumper::~ApmDataDumper() */
int _ZN6webrtc13ApmDataDumperD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22QueueBandedRenderAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::AudioProcessingImpl::QueueBandedRenderAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc19AudioProcessingImpl22QueueBandedRenderAudioEPNS_11AudioBufferE(void);

/* Symbol: WebRtcSpl_DivW32W16ResW16 */
/* Demangled: WebRtcSpl_DivW32W16ResW16 */
int WebRtcSpl_DivW32W16ResW16(void);

/* Symbol: WebRtcSpl_ResetResample48khzTo8khz */
/* Demangled: WebRtcSpl_ResetResample48khzTo8khz */
int WebRtcSpl_ResetResample48khzTo8khz(void);

/* Symbol: _ZN6webrtc15SplittingFilterC1Ejjj */
/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15SplittingFilterC1Ejjj(void);

/* Symbol: _ZN6webrtc21VoiceActivityDetectorC2Ev */
/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
int _ZN6webrtc21VoiceActivityDetectorC2Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_reverse_channels() const */
int _ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv(void);

/* Symbol: _ZN6webrtc12RenderBufferC2EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE */
/* Demangled: webrtc::RenderBuffer::RenderBuffer(webrtc::BlockBuffer*, webrtc::SpectrumBuffer*, webrtc::FftBuffer*) */
int _ZN6webrtc12RenderBufferC2EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE(void);

/* Symbol: pffft_transform_internal */
/* Demangled: pffft_transform_internal */
int pffft_transform_internal(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurve23approximation_params_q_E */
/* Demangled: webrtc::InterpolatedGainCurve::approximation_params_q_ */
extern void* _ZN6webrtc21InterpolatedGainCurve23approximation_params_q_E;

/* Symbol: _ZN6webrtc16AgcManagerDirect22AggregateChannelLevelsEv */
/* Demangled: webrtc::AgcManagerDirect::AggregateChannelLevels() */
int _ZN6webrtc16AgcManagerDirect22AggregateChannelLevelsEv(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIiEcviEv */
/* Demangled: webrtc::FieldTrialParameter<int>::operator int() const */
int _ZNK6webrtc19FieldTrialParameterIiEcviEv(void);

/* Symbol: _ZN6webrtc31WebRtc_FreeBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE */
/* Demangled: webrtc::WebRtc_FreeBinaryDelayEstimator(webrtc::BinaryDelayEstimator*) */
int _ZN6webrtc31WebRtc_FreeBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE(void);

/* Symbol: _ZN6webrtc24ExpApproximationSignFlipEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE */
/* Demangled: webrtc::ExpApproximationSignFlip(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc24ExpApproximationSignFlipEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb */
/* Demangled: webrtc::AgcManagerDirect::SetCaptureMuted(bool) */
int _ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE */
/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&) */
int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE(void);

/* Symbol: _ZN6webrtc8AecState24FilteringQualityAnalyzerC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::FilteringQualityAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc8AecState24FilteringQualityAnalyzerC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc12RenderBufferD2Ev */
/* Demangled: webrtc::RenderBuffer::~RenderBuffer() */
int _ZN6webrtc12RenderBufferD2Ev(void);

/* Symbol: _ZTVN6webrtc28FieldTrialParameterInterfaceE */
/* Demangled: vtable for webrtc::FieldTrialParameterInterface */
extern void* _ZTVN6webrtc28FieldTrialParameterInterfaceE;

/* Symbol: _Z7AecInitP16preproc_effect_s */
/* Demangled: AecInit(preproc_effect_s*) */
int _Z7AecInitP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc15FloatS16ToFloatEPKfjPf */
/* Demangled: webrtc::FloatS16ToFloat(float const*, unsigned int, float*) */
int _ZN6webrtc15FloatS16ToFloatEPKfjPf(void);

/* Symbol: _ZN6webrtc18ClockdriftDetectorC2Ev */
/* Demangled: webrtc::ClockdriftDetector::ClockdriftDetector() */
int _ZN6webrtc18ClockdriftDetectorC2Ev(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer11ResetRegionEv */
/* Demangled: webrtc::FilterAnalyzer::ResetRegion() */
int _ZN6webrtc14FilterAnalyzer11ResetRegionEv(void);

/* Symbol: _ZN6webrtc7MonoAgc11SetMaxLevelEi */
/* Demangled: webrtc::MonoAgc::SetMaxLevel(int) */
int _ZN6webrtc7MonoAgc11SetMaxLevelEi(void);

/* Symbol: _ZN6webrtc3Agc7ProcessEPKsji */
/* Demangled: webrtc::Agc::Process(short const*, unsigned int, int) */
int _ZN6webrtc3Agc7ProcessEPKsji(void);

/* Symbol: _ZN6webrtc5Pffft11FloatBufferD2Ev */
/* Demangled: webrtc::Pffft::FloatBuffer::~FloatBuffer() */
int _ZN6webrtc5Pffft11FloatBufferD2Ev(void);

/* Symbol: _ZN6webrtc20ResidualEchoDetector19AnalyzeCaptureAudioEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::ResidualEchoDetector::AnalyzeCaptureAudio(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc20ResidualEchoDetector19AnalyzeCaptureAudioEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _ZNSt3__16vectorINS_5arrayIsLj160EEENS_9allocatorIS2_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::array<short, 160u>, std::__1::allocator<std::__1::array<short, 160u> > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_5arrayIsLj160EEENS_9allocatorIS2_EEE8__appendEj(void);

/* Symbol: WebRtcSpl_ResetResample48khzTo16khz */
/* Demangled: WebRtcSpl_ResetResample48khzTo16khz */
int WebRtcSpl_ResetResample48khzTo16khz(void);

/* Symbol: _ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*) */
int _ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetricsC1Ev */
/* Demangled: webrtc::EchoRemoverMetrics::EchoRemoverMetrics() */
int _ZN6webrtc18EchoRemoverMetricsC1Ev(void);

/* Symbol: _ZNK6webrtc8OouraFft11rftbsub_128EPf */
/* Demangled: webrtc::OouraFft::rftbsub_128(float*) const */
int _ZNK6webrtc8OouraFft11rftbsub_128EPf(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram11GetBinIndexEd */
/* Demangled: webrtc::LoudnessHistogram::GetBinIndex(double) */
int _ZN6webrtc17LoudnessHistogram11GetBinIndexEd(void);

/* Symbol: _ZN6webrtc7rnn_vad17FeaturesExtractor5ResetEv */
/* Demangled: webrtc::rnn_vad::FeaturesExtractor::Reset() */
int _ZN6webrtc7rnn_vad17FeaturesExtractor5ResetEv(void);

/* Symbol: WebRtcSpl_MemSetW32 */
/* Demangled: WebRtcSpl_MemSetW32 */
int WebRtcSpl_MemSetW32(void);

/* Symbol: _ZNK6webrtc8OouraFft10bitrv2_128EPf */
/* Demangled: webrtc::OouraFft::bitrv2_128(float*) const */
int _ZNK6webrtc8OouraFft10bitrv2_128EPf(void);

/* Symbol: PreProcessingFx_Process */
/* Demangled: PreProcessingFx_Process */
int PreProcessingFx_Process(void);

/* Symbol: WebRtcSpl_DivU32U16 */
/* Demangled: WebRtcSpl_DivU32U16 */
int WebRtcSpl_DivU32U16(void);

/* Symbol: _ZN6webrtc9ResamplerC1Eiij */
/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
int _ZN6webrtc9ResamplerC1Eiij(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIdE10SetForTestEd */
/* Demangled: webrtc::FieldTrialParameter<double>::SetForTest(double) */
int _ZN6webrtc19FieldTrialParameterIdE10SetForTestEd(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIbEptEv */
/* Demangled: webrtc::FieldTrialParameter<bool>::operator->() const */
int _ZNK6webrtc19FieldTrialParameterIbEptEv(void);

/* Symbol: _ZN6webrtc12EchoDetector21PackRenderAudioBufferEPNS_11AudioBufferEPNSt3__16vectorIfNS3_9allocatorIfEEEE */
/* Demangled: webrtc::EchoDetector::PackRenderAudioBuffer(webrtc::AudioBuffer*, std::__1::vector<float, std::__1::allocator<float> >*) */
int _ZN6webrtc12EchoDetector21PackRenderAudioBufferEPNS_11AudioBufferEPNSt3__16vectorIfNS3_9allocatorIfEEEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE */
/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeRender(webrtc::ProcessingConfig const&) */
int _ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE(void);

/* Symbol: _ZN6webrtc21ComfortNoiseGeneratorD2Ev */
/* Demangled: webrtc::ComfortNoiseGenerator::~ComfortNoiseGenerator() */
int _ZN6webrtc21ComfortNoiseGeneratorD2Ev(void);

/* Symbol: _ZN6webrtc26MatchedFilterLagAggregatorD2Ev */
/* Demangled: webrtc::MatchedFilterLagAggregator::~MatchedFilterLagAggregator() */
int _ZN6webrtc26MatchedFilterLagAggregatorD2Ev(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE */
/* Demangled: webrtc::CascadedBiQuadFilter::Process(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void);

/* Symbol: _ZN3rtc10LogMessage13LogTimestampsEb */
/* Demangled: rtc::LogMessage::LogTimestamps(bool) */
int _ZN3rtc10LogMessage13LogTimestampsEb(void);

/* Symbol: _ZN6webrtc30WebRtc_SoftResetDelayEstimatorEPvi */
/* Demangled: webrtc::WebRtc_SoftResetDelayEstimator(void*, int) */
int _ZN6webrtc30WebRtc_SoftResetDelayEstimatorEPvi(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImplC2Ev */
/* Demangled: webrtc::TransientSuppressorImpl::TransientSuppressorImpl() */
int _ZN6webrtc23TransientSuppressorImplC2Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates21CaptureAnalyzerActiveEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureAnalyzerActive() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates21CaptureAnalyzerActiveEv(void);

/* Symbol: _ZN6webrtc7MonoAgc14HandleClippingEv */
/* Demangled: webrtc::MonoAgc::HandleClipping() */
int _ZN6webrtc7MonoAgc14HandleClippingEv(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIjEcvjEv */
/* Demangled: webrtc::FieldTrialParameter<unsigned int>::operator unsigned int() const */
int _ZNK6webrtc19FieldTrialParameterIjEcvjEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15instance_count_E */
/* Demangled: webrtc::AudioProcessingImpl::instance_count_ */
extern void* _ZN6webrtc19AudioProcessingImpl15instance_count_E;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl26ProcessCaptureStreamLockedEv */
/* Demangled: webrtc::AudioProcessingImpl::ProcessCaptureStreamLocked() */
int _ZN6webrtc19AudioProcessingImpl26ProcessCaptureStreamLockedEv(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter20HandleEchoPathChangeEv */
/* Demangled: webrtc::AdaptiveFirFilter::HandleEchoPathChange() */
int _ZN6webrtc17AdaptiveFirFilter20HandleEchoPathChangeEv(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics6UpdateERKNS_8AecStateERKNSt3__15arrayIfLj65EEES8_ */
/* Demangled: webrtc::EchoRemoverMetrics::Update(webrtc::AecState const&, std::__1::array<float, 65u> const&, std::__1::array<float, 65u> const&) */
int _ZN6webrtc18EchoRemoverMetrics6UpdateERKNS_8AecStateERKNSt3__15arrayIfLj65EEES8_(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_ */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIjEcvbEv */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::operator bool() const */
int _ZNK6webrtc18FieldTrialOptionalIjEcvbEv(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram6CreateEi */
/* Demangled: webrtc::LoudnessHistogram::Create(int) */
int _ZN6webrtc17LoudnessHistogram6CreateEi(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2ERKS2_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds const&) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2ERKS2_(void);

/* Symbol: WebRtcSpl_MinValueW16Neon */
/* Demangled: WebRtcSpl_MinValueW16Neon */
int WebRtcSpl_MinValueW16Neon(void);

/* Symbol: _ZN6webrtc15SplittingFilterD1Ev */
/* Demangled: webrtc::SplittingFilter::~SplittingFilter() */
int _ZN6webrtc15SplittingFilterD1Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31CaptureFullBandProcessingActiveEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureFullBandProcessingActive() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31CaptureFullBandProcessingActiveEv(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIjEptEv */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::operator->() const */
int _ZNK6webrtc18FieldTrialOptionalIjEptEv(void);

/* Symbol: _ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_ */
/* Demangled: rtc::tokenize_first(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_(void);

/* Symbol: WebRtcIsac_PitchfilterPost */
/* Demangled: WebRtcIsac_PitchfilterPost */
int WebRtcIsac_PitchfilterPost(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl23InitializePostProcessorEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializePostProcessor() */
int _ZN6webrtc19AudioProcessingImpl23InitializePostProcessorEv(void);

/* Symbol: _ZN6webrtc8OouraFftC2Ev */
/* Demangled: webrtc::OouraFft::OouraFft() */
int _ZN6webrtc8OouraFftC2Ev(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd */
/* Demangled: webrtc::FieldTrialParameter<double>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double) */
int _ZN6webrtc19FieldTrialParameterIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: WebRtcIsac_InitPitchFilter */
/* Demangled: WebRtcIsac_InitPitchFilter */
int WebRtcIsac_InitPitchFilter(void);

/* Symbol: _ZN6webrtc7rnn_vad17ComputeLpResidualEN3rtc9ArrayViewIKfLi5EEENS2_IS3_Lin4711EEENS2_IfLin4711EEE */
/* Demangled: webrtc::rnn_vad::ComputeLpResidual(rtc::ArrayView<float const, 5>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc7rnn_vad17ComputeLpResidualEN3rtc9ArrayViewIKfLi5EEENS2_IS3_Lin4711EEENS2_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc7rnn_vad19GatedRecurrentLayer5ResetEv */
/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::Reset() */
int _ZN6webrtc7rnn_vad19GatedRecurrentLayer5ResetEv(void);

/* Symbol: _Z14NsSetParameterP16preproc_effect_sPvS1_ */
/* Demangled: NsSetParameter(preproc_effect_s*, void*, void*) */
int _Z14NsSetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferEi */
/* Demangled: webrtc::EchoControlMobileImpl::ProcessCaptureAudio(webrtc::AudioBuffer*, int) */
int _ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferEi(void);

/* Symbol: _ZNK6webrtc21StationarityEstimator13NoiseSpectrum21UpdateBandBySmoothingEfff */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::UpdateBandBySmoothing(float, float, float) const */
int _ZNK6webrtc21StationarityEstimator13NoiseSpectrum21UpdateBandBySmoothingEfff(void);

/* Symbol: _ZN3rtc14PlatformThreadC1EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE */
/* Demangled: rtc::PlatformThread::PlatformThread(void (*)(void*), void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >, rtc::ThreadPriority) */
int _ZN3rtc14PlatformThreadC1EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE(void);

/* Symbol: _ZN6webrtc15ParseFieldTrialESt16initializer_listIPNS_28FieldTrialParameterInterfaceEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: webrtc::ParseFieldTrial(std::initializer_list<webrtc::FieldTrialParameterInterface*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc15ParseFieldTrialESt16initializer_listIPNS_28FieldTrialParameterInterfaceEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN3rtc7LeftPadEcjNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: rtc::LeftPad(char, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN3rtc7LeftPadEcjNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE1EiEES6_S6_NS4_ILS5_9EPKcEES6_EEEvS8_iS8_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE1EiEES6_S6_NS4_ILS5_9EPKcEES6_EEEvS8_iS8_DpRKT_E1t;

/* Symbol: _ZN6webrtc7rnn_vad10ComputeDctEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li484EEENS2_IfLin4711EEE */
/* Demangled: webrtc::rnn_vad::ComputeDct(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, 484>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc7rnn_vad10ComputeDctEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li484EEENS2_IfLin4711EEE(void);

/* Symbol: pffft_min_fft_size */
/* Demangled: pffft_min_fft_size */
int pffft_min_fft_size(void);

/* Symbol: _ZN6webrtc37WebRtc_FreeBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE */
/* Demangled: webrtc::WebRtc_FreeBinaryDelayEstimatorFarend(webrtc::BinaryDelayEstimatorFarend*) */
int _ZN6webrtc37WebRtc_FreeBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE(void);

/* Symbol: _ZN6webrtc17VadCircularBufferD2Ev */
/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
int _ZN6webrtc17VadCircularBufferD2Ev(void);

/* Symbol: _ZN6webrtc17SuppressionParamsC1ENS_8NsConfig16SuppressionLevelE */
/* Demangled: webrtc::SuppressionParams::SuppressionParams(webrtc::NsConfig::SuppressionLevel) */
int _ZN6webrtc17SuppressionParamsC1ENS_8NsConfig16SuppressionLevelE(void);

/* Symbol: _ZN6webrtc3AgcD2Ev */
/* Demangled: webrtc::Agc::~Agc() */
int _ZN6webrtc3AgcD2Ev(void);

/* Symbol: _ZGVZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def */
/* Demangled: guard variable for webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern void* _ZGVZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def;

/* Symbol: WebRtcSpl_RealForwardFFT */
/* Demangled: WebRtcSpl_RealForwardFFT */
int WebRtcSpl_RealForwardFFT(void);

/* Symbol: _ZTVN6webrtc17ResampleConverterE */
/* Demangled: vtable for webrtc::ResampleConverter */
extern void* _ZTVN6webrtc17ResampleConverterE;

/* Symbol: rtc_FatalMessage */
/* Demangled: rtc_FatalMessage */
int rtc_FatalMessage(void);

/* Symbol: WebRtcSpl_ZerosArrayW32 */
/* Demangled: WebRtcSpl_ZerosArrayW32 */
int WebRtcSpl_ZerosArrayW32(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimator27ComputeActiveFilterSectionsEv */
/* Demangled: webrtc::SignalDependentErleEstimator::ComputeActiveFilterSections() */
int _ZN6webrtc28SignalDependentErleEstimator27ComputeActiveFilterSectionsEv(void);

/* Symbol: _ZN6webrtc3Agc13GetRmsErrorDbEPi */
/* Demangled: webrtc::Agc::GetRmsErrorDb(int*) */
int _ZN6webrtc3Agc13GetRmsErrorDbEPi(void);

/* Symbol: _ZN6webrtc26WebRtc_AddFarSpectrumFloatEPvPKfi */
/* Demangled: webrtc::WebRtc_AddFarSpectrumFloat(void*, float const*, int) */
int _ZN6webrtc26WebRtc_AddFarSpectrumFloatEPvPKfi(void);

/* Symbol: WebRtc_CreateBuffer */
/* Demangled: WebRtc_CreateBuffer */
int WebRtc_CreateBuffer(void);

/* Symbol: _ZN6webrtc11AudioBufferD1Ev */
/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
int _ZN6webrtc11AudioBufferD1Ev(void);

/* Symbol: _ZN6webrtc7Aec3FftC1Ev */
/* Demangled: webrtc::Aec3Fft::Aec3Fft() */
int _ZN6webrtc7Aec3FftC1Ev(void);

/* Symbol: _ZN6webrtc17SuppressionFilterC1ENS_16Aec3OptimizationEij */
/* Demangled: webrtc::SuppressionFilter::SuppressionFilter(webrtc::Aec3Optimization, int, unsigned int) */
int _ZN6webrtc17SuppressionFilterC1ENS_16Aec3OptimizationEij(void);

/* Symbol: _ZN6webrtc17Pow2ApproximationEf */
/* Demangled: webrtc::Pow2Approximation(float) */
int _ZN6webrtc17Pow2ApproximationEf(void);

/* Symbol: _ZTVN6webrtc21FieldTrialConstrainedIdEE */
/* Demangled: vtable for webrtc::FieldTrialConstrained<double> */
extern void* _ZTVN6webrtc21FieldTrialConstrainedIdEE;

/* Symbol: WebRtcIsac_AutoCorr */
/* Demangled: WebRtcIsac_AutoCorr */
int WebRtcIsac_AutoCorr(void);

/* Symbol: _ZN6webrtc20AudioProcessingStatsC1ERKS0_ */
/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats(webrtc::AudioProcessingStats const&) */
int _ZN6webrtc20AudioProcessingStatsC1ERKS0_(void);

/* Symbol: _ZN6webrtc27GetSubframesPitchParametersEiPdS0_iiS0_S0_S0_S0_ */
/* Demangled: webrtc::GetSubframesPitchParameters(int, double*, double*, int, int, double*, double*, double*, double*) */
int _ZN6webrtc27GetSubframesPitchParametersEiPdS0_iiS0_S0_S0_S0_(void);

/* Symbol: _ZN6webrtc21StationarityEstimator5ResetEv */
/* Demangled: webrtc::StationarityEstimator::Reset() */
int _ZN6webrtc21StationarityEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc14SpectrumBufferC2Ejj */
/* Demangled: webrtc::SpectrumBuffer::SpectrumBuffer(unsigned int, unsigned int) */
int _ZN6webrtc14SpectrumBufferC2Ejj(void);

/* Symbol: _ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize_with_empty_tokens(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC1Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::ApmCaptureState() */
int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC1Ev(void);

/* Symbol: WebRtcSpl_CopyFromEndW16 */
/* Demangled: WebRtcSpl_CopyFromEndW16 */
int WebRtcSpl_CopyFromEndW16(void);

/* Symbol: _ZNK6webrtc28SignalDependentErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE */
/* Demangled: webrtc::SignalDependentErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
int _ZNK6webrtc28SignalDependentErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void);

/* Symbol: WebRtcIsac_InitPreFilterbank */
/* Demangled: WebRtcIsac_InitPreFilterbank */
int WebRtcIsac_InitPreFilterbank(void);

/* Symbol: _ZTVN6webrtc23TransientSuppressorImplE */
/* Demangled: vtable for webrtc::TransientSuppressorImpl */
extern void* _ZTVN6webrtc23TransientSuppressorImplE;

/* Symbol: _ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv */
/* Demangled: webrtc::EchoControlMobileImpl::is_comfort_noise_enabled() const */
int _ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimatorD1Ev */
/* Demangled: webrtc::FullBandErleEstimator::~FullBandErleEstimator() */
int _ZN6webrtc21FullBandErleEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialConstrained<int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc21FieldTrialConstrainedIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram6CreateEv */
/* Demangled: webrtc::LoudnessHistogram::Create() */
int _ZN6webrtc17LoudnessHistogram6CreateEv(void);

/* Symbol: _ZN3rtc8internal16RaceCheckerScopeC1EPKNS_11RaceCheckerE */
/* Demangled: rtc::internal::RaceCheckerScope::RaceCheckerScope(rtc::RaceChecker const*) */
int _ZN3rtc8internal16RaceCheckerScopeC1EPKNS_11RaceCheckerE(void);

/* Symbol: _ZTVN6webrtc14UpmixConverterE */
/* Demangled: vtable for webrtc::UpmixConverter */
extern void* _ZTVN6webrtc14UpmixConverterE;

/* Symbol: _ZN6webrtc22EchoPathDelayEstimatorD2Ev */
/* Demangled: webrtc::EchoPathDelayEstimator::~EchoPathDelayEstimator() */
int _ZN6webrtc22EchoPathDelayEstimatorD2Ev(void);

/* Symbol: pffft_destroy_setup */
/* Demangled: pffft_destroy_setup */
int pffft_destroy_setup(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImplD0Ev */
/* Demangled: webrtc::TransientSuppressorImpl::~TransientSuppressorImpl() */
int _ZN6webrtc23TransientSuppressorImplD0Ev(void);

/* Symbol: _ZTVN6webrtc16CustomProcessingE */
/* Demangled: vtable for webrtc::CustomProcessing */
extern void* _ZTVN6webrtc16CustomProcessingE;

/* Symbol: _ZN6webrtc17TransientDetector6DetectEPKfjS2_j */
/* Demangled: webrtc::TransientDetector::Detect(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc17TransientDetector6DetectEPKfjS2_j(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_ */
/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStreamLocked(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&) */
int _ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_(void);

/* Symbol: _ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E */
/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2 const&) */
int _ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E(void);

/* Symbol: _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity) */
int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityE(void);

/* Symbol: _ZN6webrtc13SincResampler8ResampleEjPf */
/* Demangled: webrtc::SincResampler::Resample(unsigned int, float*) */
int _ZN6webrtc13SincResampler8ResampleEjPf(void);

/* Symbol: _ZN6webrtc16PriorSignalModelC1Ef */
/* Demangled: webrtc::PriorSignalModel::PriorSignalModel(float) */
int _ZN6webrtc16PriorSignalModelC1Ef(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::SubbandErleEstimator::SubbandErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc20SubbandErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterINSt3__18optionalIdEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<std::__1::optional<double> > webrtc::ParseTypedParameter<std::__1::optional<double> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIdEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN6webrtc18FieldTrialOptionalIbEE */
/* Demangled: vtable for webrtc::FieldTrialOptional<bool> */
extern void* _ZTVN6webrtc18FieldTrialOptionalIbEE;

/* Symbol: _ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_proc_channels() const */
int _ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv(void);

/* Symbol: _ZN6webrtc19WebRtcAecm_InitCoreEPNS_8AecmCoreEi */
/* Demangled: webrtc::WebRtcAecm_InitCore(webrtc::AecmCore*, int) */
int _ZN6webrtc19WebRtcAecm_InitCoreEPNS_8AecmCoreEi(void);

/* Symbol: _ZN6webrtc13PitchBasedVad11UpdatePriorEd */
/* Demangled: webrtc::PitchBasedVad::UpdatePrior(double) */
int _ZN6webrtc13PitchBasedVad11UpdatePriorEd(void);

/* Symbol: _ZN6webrtc14VoiceDetectionD1Ev */
/* Demangled: webrtc::VoiceDetection::~VoiceDetection() */
int _ZN6webrtc14VoiceDetectionD1Ev(void);

/* Symbol: WebRtcSpl_UpBy2ShortToInt */
/* Demangled: WebRtcSpl_UpBy2ShortToInt */
int WebRtcSpl_UpBy2ShortToInt(void);

/* Symbol: _ZN6webrtc21BlockProcessorMetrics12ResetMetricsEv */
/* Demangled: webrtc::BlockProcessorMetrics::ResetMetrics() */
int _ZN6webrtc21BlockProcessorMetrics12ResetMetricsEv(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj */
/* Demangled: webrtc::RefinedFilterUpdateGain::RefinedFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::RefinedConfiguration const&, unsigned int) */
int _ZN6webrtc23RefinedFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIiE3GetEv */
/* Demangled: webrtc::FieldTrialConstrained<int>::Get() const */
int _ZNK6webrtc21FieldTrialConstrainedIiE3GetEv(void);

/* Symbol: _ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh */
/* Demangled: webrtc::EventTracer::AddTraceEvent(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char) */
int _ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl23InitializeVoiceDetectorEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeVoiceDetector() */
int _ZN6webrtc19AudioProcessingImpl23InitializeVoiceDetectorEv(void);

/* Symbol: _ZN6webrtc13ErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_RKNS7_IbNSA_IbEEEE */
/* Demangled: webrtc::ErleEstimator::Update(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN6webrtc13ErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_RKNS7_IbNSA_IbEEEE(void);

/* Symbol: _ZNK6webrtc21StationarityEstimator17IsBlockStationaryEv */
/* Demangled: webrtc::StationarityEstimator::IsBlockStationary() const */
int _ZNK6webrtc21StationarityEstimator17IsBlockStationaryEv(void);

/* Symbol: _ZNK6webrtc15SuppressionGain14UpperBandsGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_RKNS3_8optionalIiEEbRKNS3_6vectorINSC_INSC_IfNS3_9allocatorIfEEEENSD_ISF_EEEENSD_ISH_EEEERS6_ */
/* Demangled: webrtc::SuppressionGain::UpperBandsGain(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::optional<int> const&, bool, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&, std::__1::array<float, 65u> const&) const */
int _ZNK6webrtc15SuppressionGain14UpperBandsGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_RKNS3_8optionalIiEEbRKNS3_6vectorINSC_INSC_IfNS3_9allocatorIfEEEENSD_ISF_EEEENSD_ISH_EEEERS6_(void);

/* Symbol: _ZN6webrtc7rnn_vad41CheckLowerPitchPeriodsAndComputePitchGainEN3rtc9ArrayViewIKfLi864EEEiNS0_9PitchInfoE */
/* Demangled: webrtc::rnn_vad::CheckLowerPitchPeriodsAndComputePitchGain(rtc::ArrayView<float const, 864>, int, webrtc::rnn_vad::PitchInfo) */
int _ZN6webrtc7rnn_vad41CheckLowerPitchPeriodsAndComputePitchGainEN3rtc9ArrayViewIKfLi864EEEiNS0_9PitchInfoE(void);

/* Symbol: WebRtcVad_GaussianProbability */
/* Demangled: WebRtcVad_GaussianProbability */
int WebRtcVad_GaussianProbability(void);

/* Symbol: _Z10AecDisableP16preproc_effect_s */
/* Demangled: AecDisable(preproc_effect_s*) */
int _Z10AecDisableP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc7metrics5ResetEv */
/* Demangled: webrtc::metrics::Reset() */
int _ZN6webrtc7metrics5ResetEv(void);

/* Symbol: _ZN6webrtc14SpectrumBufferD2Ev */
/* Demangled: webrtc::SpectrumBuffer::~SpectrumBuffer() */
int _ZN6webrtc14SpectrumBufferD2Ev(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_ */
/* Demangled: webrtc::FieldTrialConstrained<double>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double, std::__1::optional<double>, std::__1::optional<double>) */
int _ZN6webrtc21FieldTrialConstrainedIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_(void);

/* Symbol: _ZN6webrtc29AdaptiveModeLevelEstimatorAgc13GetRmsErrorDbEPi */
/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::GetRmsErrorDb(int*) */
int _ZN6webrtc29AdaptiveModeLevelEstimatorAgc13GetRmsErrorDbEPi(void);

/* Symbol: _ZN6webrtc7WPDNodeD2Ev */
/* Demangled: webrtc::WPDNode::~WPDNode() */
int _ZN6webrtc7WPDNodeD2Ev(void);

/* Symbol: _ZN6webrtc23ReverbFrequencyResponseD2Ev */
/* Demangled: webrtc::ReverbFrequencyResponse::~ReverbFrequencyResponse() */
int _ZN6webrtc23ReverbFrequencyResponseD2Ev(void);

/* Symbol: _ZN3rtc14PlatformThread3RunEv */
/* Demangled: rtc::PlatformThread::Run() */
int _ZN3rtc14PlatformThread3RunEv(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config9EchoModelC2Ev */
/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel() */
int _ZN6webrtc20EchoCanceller3Config9EchoModelC2Ev(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD1Ev */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::~EarlyReverbLengthEstimator() */
int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD2Ev */
/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::~AutoCorrelationCalculator() */
int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD2Ev(void);

/* Symbol: _ZN6webrtc11EventTracer18GetCategoryEnabledEPKc */
/* Demangled: webrtc::EventTracer::GetCategoryEnabled(char const*) */
int _ZN6webrtc11EventTracer18GetCategoryEnabledEPKc(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl12MutateConfigEN3rtc12FunctionViewIFvPNS_15AudioProcessing6ConfigEEEE */
/* Demangled: webrtc::AudioProcessingImpl::MutateConfig(rtc::FunctionView<void (webrtc::AudioProcessing::Config*)>) */
int _ZN6webrtc19AudioProcessingImpl12MutateConfigEN3rtc12FunctionViewIFvPNS_15AudioProcessing6ConfigEEEE(void);

/* Symbol: _ZN6webrtc12WienerFilterC2ERKNS_17SuppressionParamsE */
/* Demangled: webrtc::WienerFilter::WienerFilter(webrtc::SuppressionParams const&) */
int _ZN6webrtc12WienerFilterC2ERKNS_17SuppressionParamsE(void);

/* Symbol: _ZN6webrtc22AudioProcessingBuilderD1Ev */
/* Demangled: webrtc::AudioProcessingBuilder::~AudioProcessingBuilder() */
int _ZN6webrtc22AudioProcessingBuilderD1Ev(void);

/* Symbol: _ZN6webrtc16LogApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE */
/* Demangled: webrtc::LogApproximation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc16LogApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc14AlignmentMixer13ProduceOutputEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE */
/* Demangled: webrtc::AlignmentMixer::ProduceOutput(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, rtc::ArrayView<float, 64>) */
int _ZN6webrtc14AlignmentMixer13ProduceOutputEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE(void);

/* Symbol: _ZN6webrtc11ReverbModelD2Ev */
/* Demangled: webrtc::ReverbModel::~ReverbModel() */
int _ZN6webrtc11ReverbModelD2Ev(void);

/* Symbol: _ZN6webrtc28WebRtc_ProcessBinarySpectrumEPNS_20BinaryDelayEstimatorEj */
/* Demangled: webrtc::WebRtc_ProcessBinarySpectrum(webrtc::BinaryDelayEstimator*, unsigned int) */
int _ZN6webrtc28WebRtc_ProcessBinarySpectrumEPNS_20BinaryDelayEstimatorEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_(void);

/* Symbol: WebRtcSpl_MaxValueW16 */
/* Demangled: WebRtcSpl_MaxValueW16 */
extern void* WebRtcSpl_MaxValueW16;

/* Symbol: _ZN6webrtc20CascadedBiQuadFilterD2Ev */
/* Demangled: webrtc::CascadedBiQuadFilter::~CascadedBiQuadFilter() */
int _ZN6webrtc20CascadedBiQuadFilterD2Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad17FeaturesExtractorC2Ev */
/* Demangled: webrtc::rnn_vad::FeaturesExtractor::FeaturesExtractor() */
int _ZN6webrtc7rnn_vad17FeaturesExtractorC2Ev(void);

/* Symbol: WebRtcVad_Init */
/* Demangled: WebRtcVad_Init */
int WebRtcVad_Init(void);

/* Symbol: _ZN6webrtc17PushSincResamplerD0Ev */
/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
int _ZN6webrtc17PushSincResamplerD0Ev(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectD2Ev */
/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
int _ZN6webrtc16AgcManagerDirectD2Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad14PitchEstimator8EstimateEN3rtc9ArrayViewIKfLi864EEE */
/* Demangled: webrtc::rnn_vad::PitchEstimator::Estimate(rtc::ArrayView<float const, 864>) */
int _ZN6webrtc7rnn_vad14PitchEstimator8EstimateEN3rtc9ArrayViewIKfLi864EEE(void);

/* Symbol: _ZN6webrtc20AudioProcessingStatsD1Ev */
/* Demangled: webrtc::AudioProcessingStats::~AudioProcessingStats() */
int _ZN6webrtc20AudioProcessingStatsD1Ev(void);

/* Symbol: _ZN6webrtc8RmsLevel14AverageAndPeakEv */
/* Demangled: webrtc::RmsLevel::AverageAndPeak() */
int _ZN6webrtc8RmsLevel14AverageAndPeakEv(void);

/* Symbol: _ZTVN6webrtc17PushSincResamplerE */
/* Demangled: vtable for webrtc::PushSincResampler */
extern void* _ZTVN6webrtc17PushSincResamplerE;

/* Symbol: _ZNK6webrtc15NoiseSuppressor22AggregateWienerFiltersEN3rtc9ArrayViewIfLi129EEE */
/* Demangled: webrtc::NoiseSuppressor::AggregateWienerFilters(rtc::ArrayView<float, 129>) const */
int _ZNK6webrtc15NoiseSuppressor22AggregateWienerFiltersEN3rtc9ArrayViewIfLi129EEE(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilterC2ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE */
/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(std::__1::vector<webrtc::CascadedBiQuadFilter::BiQuadParam, std::__1::allocator<webrtc::CascadedBiQuadFilter::BiQuadParam> > const&) */
int _ZN6webrtc20CascadedBiQuadFilterC2ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplD2Ev */
/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
int _ZN6webrtc19AudioProcessingImplD2Ev(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEESA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEESA_EEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc27WebRtcAgc_GetAddFarendErrorEPvj */
/* Demangled: webrtc::WebRtcAgc_GetAddFarendError(void*, unsigned int) */
int _ZN6webrtc27WebRtcAgc_GetAddFarendErrorEPvj(void);

/* Symbol: _ZN6webrtc15AudioProcessing6Config8PipelineC2Ev */
/* Demangled: webrtc::AudioProcessing::Config::Pipeline::Pipeline() */
int _ZN6webrtc15AudioProcessing6Config8PipelineC2Ev(void);

/* Symbol: _ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperEf */
/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*, float) */
int _ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperEf(void);

/* Symbol: WebRtcIsac_kUpperApFactorsFloat */
/* Demangled: WebRtcIsac_kUpperApFactorsFloat */
extern void* WebRtcIsac_kUpperApFactorsFloat;

/* Symbol: _ZN6webrtc13MovingMomentsD1Ev */
/* Demangled: webrtc::MovingMoments::~MovingMoments() */
int _ZN6webrtc13MovingMomentsD1Ev(void);

/* Symbol: _Z9AecEnableP16preproc_effect_s */
/* Demangled: AecEnable(preproc_effect_s*) */
int _Z9AecEnableP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl28EmptyQueuedRenderAudioLockedEv */
/* Demangled: webrtc::AudioProcessingImpl::EmptyQueuedRenderAudioLocked() */
int _ZN6webrtc19AudioProcessingImpl28EmptyQueuedRenderAudioLockedEv(void);

/* Symbol: _ZTVN6webrtc15GainControlImplE */
/* Demangled: vtable for webrtc::GainControlImpl */
extern void* _ZTVN6webrtc15GainControlImplE;

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIdEcvdEv */
/* Demangled: webrtc::FieldTrialConstrained<double>::operator double() const */
int _ZNK6webrtc21FieldTrialConstrainedIdEcvdEv(void);

/* Symbol: _ZN3rtc25hex_encode_with_delimiterEPKcjc */
/* Demangled: rtc::hex_encode_with_delimiter(char const*, unsigned int, char) */
int _ZN3rtc25hex_encode_with_delimiterEPKcjc(void);

/* Symbol: _ZN6webrtc19NoiseLevelEstimatorD2Ev */
/* Demangled: webrtc::NoiseLevelEstimator::~NoiseLevelEstimator() */
int _ZN6webrtc19NoiseLevelEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc23WebRtcAecm_CalcStepSizeEPNS_8AecmCoreE */
/* Demangled: webrtc::WebRtcAecm_CalcStepSize(webrtc::AecmCore*) */
int _ZN6webrtc23WebRtcAecm_CalcStepSizeEPNS_8AecmCoreE(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurve23approximation_params_m_E */
/* Demangled: webrtc::InterpolatedGainCurve::approximation_params_m_ */
extern void* _ZN6webrtc21InterpolatedGainCurve23approximation_params_m_E;

/* Symbol: _ZN6webrtc20ApiCallJitterMetrics16ReportRenderCallEv */
/* Demangled: webrtc::ApiCallJitterMetrics::ReportRenderCall() */
int _ZN6webrtc20ApiCallJitterMetrics16ReportRenderCallEv(void);

/* Symbol: _ZN6webrtc20RenderSignalAnalyzerD1Ev */
/* Demangled: webrtc::RenderSignalAnalyzer::~RenderSignalAnalyzer() */
int _ZN6webrtc20RenderSignalAnalyzerD1Ev(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEENS1_8optionalIT_EES7_ */
/* Demangled: std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > webrtc::ParseTypedParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEENS1_8optionalIT_EES7_(void);

/* Symbol: _ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferEb */
/* Demangled: webrtc::EchoCanceller3::ProcessCapture(webrtc::AudioBuffer*, bool) */
int _ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferEb(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE11GetOptionalEv */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetOptional() const */
int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE11GetOptionalEv(void);

/* Symbol: _ZN3rtc18webrtc_checks_impl8FatalLogEPKciS2_PKNS0_12CheckArgTypeEz */
/* Demangled: rtc::webrtc_checks_impl::FatalLog(char const*, int, char const*, rtc::webrtc_checks_impl::CheckArgType const*, ...) */
int _ZN3rtc18webrtc_checks_impl8FatalLogEPKciS2_PKNS0_12CheckArgTypeEz(void);

/* Symbol: _ZN3rtc11RaceCheckerC2Ev */
/* Demangled: rtc::RaceChecker::RaceChecker() */
int _ZN3rtc11RaceCheckerC2Ev(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics8DbMetricC2Ev */
/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric() */
int _ZN6webrtc18EchoRemoverMetrics8DbMetricC2Ev(void);

/* Symbol: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_ */
/* Demangled: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_ */
int _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_(void);

/* Symbol: _ZN6webrtc15SplittingFilter9SynthesisEPKNS_13ChannelBufferIfEEPS2_ */
/* Demangled: webrtc::SplittingFilter::Synthesis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
int _ZN6webrtc15SplittingFilter9SynthesisEPKNS_13ChannelBufferIfEEPS2_(void);

/* Symbol: _ZN6webrtc8AecState24FilteringQualityAnalyzer5ResetEv */
/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::Reset() */
int _ZN6webrtc8AecState24FilteringQualityAnalyzer5ResetEv(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector5ResetEv */
/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::Reset() */
int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector5ResetEv(void);

/* Symbol: WebRtcIsac_PitchfilterPre_la */
/* Demangled: WebRtcIsac_PitchfilterPre_la */
int WebRtcIsac_PitchfilterPre_la(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config5DelayC1ERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay(webrtc::EchoCanceller3Config::Delay const&) */
int _ZN6webrtc20EchoCanceller3Config5DelayC1ERKS1_(void);

/* Symbol: _ZN6webrtc21WebRtcAgc_InitDigitalEPNS_10DigitalAgcEs */
/* Demangled: webrtc::WebRtcAgc_InitDigital(webrtc::DigitalAgc*, short) */
int _ZN6webrtc21WebRtcAgc_InitDigitalEPNS_10DigitalAgcEs(void);

/* Symbol: _ZN6webrtc16SignalClassifierC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::SignalClassifier::SignalClassifier(webrtc::ApmDataDumper*) */
int _ZN6webrtc16SignalClassifierC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc7rnn_vad14PitchEstimatorD2Ev */
/* Demangled: webrtc::rnn_vad::PitchEstimator::~PitchEstimator() */
int _ZN6webrtc7rnn_vad14PitchEstimatorD2Ev(void);

/* Symbol: _ZTVN3rtc16RefCountedObjectIN6webrtc19AudioProcessingImplEEE */
/* Demangled: vtable for rtc::RefCountedObject<webrtc::AudioProcessingImpl> */
extern void* _ZTVN3rtc16RefCountedObjectIN6webrtc19AudioProcessingImplEEE;

/* Symbol: _ZN6webrtc14VoiceDetectionC1EiNS0_10LikelihoodE */
/* Demangled: webrtc::VoiceDetection::VoiceDetection(int, webrtc::VoiceDetection::Likelihood) */
int _ZN6webrtc14VoiceDetectionC1EiNS0_10LikelihoodE(void);

/* Symbol: WebRtcAecm_Create */
/* Demangled: WebRtcAecm_Create */
int WebRtcAecm_Create(void);

/* Symbol: WebRtcSpl_MaxAbsValueW16Neon */
/* Demangled: WebRtcSpl_MaxAbsValueW16Neon */
int WebRtcSpl_MaxAbsValueW16Neon(void);

/* Symbol: _ZN6webrtc13StandaloneVad8set_modeEi */
/* Demangled: webrtc::StandaloneVad::set_mode(int) */
int _ZN6webrtc13StandaloneVad8set_modeEi(void);

/* Symbol: _ZN6webrtc12VadAudioProcC1Ev */
/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
int _ZN6webrtc12VadAudioProcC1Ev(void);

/* Symbol: _ZN6webrtc12VadWithLevelC1Ev */
/* Demangled: webrtc::VadWithLevel::VadWithLevel() */
int _ZN6webrtc12VadWithLevelC1Ev(void);

/* Symbol: _ZN6webrtc22CoarseFilterUpdateGain20HandleEchoPathChangeEv */
/* Demangled: webrtc::CoarseFilterUpdateGain::HandleEchoPathChange() */
int _ZN6webrtc22CoarseFilterUpdateGain20HandleEchoPathChangeEv(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIbEcvbEv */
/* Demangled: webrtc::FieldTrialOptional<bool>::operator bool() const */
int _ZNK6webrtc18FieldTrialOptionalIbEcvbEv(void);

/* Symbol: _ZN6webrtc7rnn_vad11RnnBasedVad21ComputeVadProbabilityEN3rtc9ArrayViewIKfLi42EEEb */
/* Demangled: webrtc::rnn_vad::RnnBasedVad::ComputeVadProbability(rtc::ArrayView<float const, 42>, bool) */
int _ZN6webrtc7rnn_vad11RnnBasedVad21ComputeVadProbabilityEN3rtc9ArrayViewIKfLi42EEEb(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPKfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsISA_E9referenceEEE5valueENS5_IPfEEE4typeES8_SA_SA_ */
/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPKfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsISA_E9referenceEEE5valueENS5_IPfEEE4typeES8_SA_SA_ */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPKfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsISA_E9referenceEEE5valueENS5_IPfEEE4typeES8_SA_SA_(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC1ERKNS_20EchoCanceller3Config4ErleE */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::ErleInstantaneous(webrtc::EchoCanceller3Config::Erle const&) */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC1ERKNS_20EchoCanceller3Config4ErleE(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimatorC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::ResidualEchoEstimator::ResidualEchoEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc21ResidualEchoEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZNK6webrtc8OouraFft11cftfsub_128EPf */
/* Demangled: webrtc::OouraFft::cftfsub_128(float*) const */
int _ZNK6webrtc8OouraFft11cftfsub_128EPf(void);

/* Symbol: _ZN6webrtc7rnn_vad11RnnBasedVadD1Ev */
/* Demangled: webrtc::rnn_vad::RnnBasedVad::~RnnBasedVad() */
int _ZN6webrtc7rnn_vad11RnnBasedVadD1Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad18SpectralCorrelatorD2Ev */
/* Demangled: webrtc::rnn_vad::SpectralCorrelator::~SpectralCorrelator() */
int _ZN6webrtc7rnn_vad18SpectralCorrelatorD2Ev(void);

/* Symbol: _ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE */
/* Demangled: webrtc::AudioBuffer::CopyFrom(float const* const*, webrtc::StreamConfig const&) */
int _ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect23set_stream_analog_levelEi */
/* Demangled: webrtc::AgcManagerDirect::set_stream_analog_level(int) */
int _ZN6webrtc16AgcManagerDirect23set_stream_analog_levelEi(void);

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE1EiEES6_EEEvPKciS8_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE1EiEES6_EEEvPKciS8_DpRKT_E1t;

/* Symbol: _ZTVN6webrtc13PushResamplerIsEE */
/* Demangled: vtable for webrtc::PushResampler<short> */
extern void* _ZTVN6webrtc13PushResamplerIsEE;

/* Symbol: _ZN6webrtc26FixedDigitalLevelEstimator5ResetEv */
/* Demangled: webrtc::FixedDigitalLevelEstimator::Reset() */
int _ZN6webrtc26FixedDigitalLevelEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc19SaturationProtector13PeakEnveloperC1Ev */
/* Demangled: webrtc::SaturationProtector::PeakEnveloper::PeakEnveloper() */
int _ZN6webrtc19SaturationProtector13PeakEnveloperC1Ev(void);

/* Symbol: _ZN6webrtc23DownsampledRenderBufferD1Ev */
/* Demangled: webrtc::DownsampledRenderBuffer::~DownsampledRenderBuffer() */
int _ZN6webrtc23DownsampledRenderBufferD1Ev(void);

/* Symbol: _ZN3rtc5Event5ResetEv */
/* Demangled: rtc::Event::Reset() */
int _ZN3rtc5Event5ResetEv(void);

/* Symbol: _ZN6webrtc24WebRtcAecm_FetchFarFrameEPNS_8AecmCoreEPsii */
/* Demangled: webrtc::WebRtcAecm_FetchFarFrame(webrtc::AecmCore*, short*, int, int) */
int _ZN6webrtc24WebRtcAecm_FetchFarFrameEPNS_8AecmCoreEPsii(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC1ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::ConsistentFilterDetector(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC1ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator8EstimateEv */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Estimate() */
int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator8EstimateEv(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEiii */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, int, int, int) */
int _ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEiii(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb */
/* Demangled: webrtc::AudioProcessingImpl::set_output_will_be_muted(bool) */
int _ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBankD2Ev */
/* Demangled: webrtc::ThreeBandFilterBank::~ThreeBandFilterBank() */
int _ZN6webrtc19ThreeBandFilterBankD2Ev(void);

/* Symbol: _ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperEf */
/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*, float) */
int _ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperEf(void);

/* Symbol: _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl10InitializeEiii */
/* Demangled: webrtc::TransientSuppressorImpl::Initialize(int, int, int) */
int _ZN6webrtc23TransientSuppressorImpl10InitializeEiii(void);

/* Symbol: _ZN6webrtc18WebRtcAgc_ZeroCtrlEPNS_9LegacyAgcEPiS2_ */
/* Demangled: webrtc::WebRtcAgc_ZeroCtrl(webrtc::LegacyAgc*, int*, int*) */
int _ZN6webrtc18WebRtcAgc_ZeroCtrlEPNS_9LegacyAgcEPiS2_(void);

/* Symbol: _ZN6webrtc13MatchedFilter6UpdateERKNS_23DownsampledRenderBufferEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::MatchedFilter::Update(webrtc::DownsampledRenderBuffer const&, rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc13MatchedFilter6UpdateERKNS_23DownsampledRenderBufferEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: pffftd_aligned_free */
/* Demangled: pffftd_aligned_free */
int pffftd_aligned_free(void);

/* Symbol: _ZN6webrtc15GainControlImpl21PackRenderAudioBufferERKNS_11AudioBufferEPNSt3__16vectorIsNS4_9allocatorIsEEEE */
/* Demangled: webrtc::GainControlImpl::PackRenderAudioBuffer(webrtc::AudioBuffer const&, std::__1::vector<short, std::__1::allocator<short> >*) */
int _ZN6webrtc15GainControlImpl21PackRenderAudioBufferERKNS_11AudioBufferEPNSt3__16vectorIsNS4_9allocatorIsEEEE(void);

/* Symbol: _ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: _ZN6webrtc24SubtractorOutputAnalyzerC2Ej */
/* Demangled: webrtc::SubtractorOutputAnalyzer::SubtractorOutputAnalyzer(unsigned int) */
int _ZN6webrtc24SubtractorOutputAnalyzerC2Ej(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_ */
/* Demangled: webrtc::FieldTrialConstrained<int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::optional<int>, std::__1::optional<int>) */
int _ZN6webrtc21FieldTrialConstrainedIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_(void);

/* Symbol: _ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::LogToDebug(rtc::LoggingSeverity) */
int _ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22InitializePreAmplifierEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializePreAmplifier() */
int _ZN6webrtc19AudioProcessingImpl22InitializePreAmplifierEv(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer3SetEid */
/* Demangled: webrtc::VadCircularBuffer::Set(int, double) */
int _ZN6webrtc17VadCircularBuffer3SetEid(void);

/* Symbol: _ZNK3rtc11RaceChecker7AcquireEv */
/* Demangled: rtc::RaceChecker::Acquire() const */
int _ZNK3rtc11RaceChecker7AcquireEv(void);

/* Symbol: _ZN3rtc5EventC1Ev */
/* Demangled: rtc::Event::Event() */
int _ZN3rtc5EventC1Ev(void);

/* Symbol: _ZN6webrtc9ResamplerC1Ev */
/* Demangled: webrtc::Resampler::Resampler() */
int _ZN6webrtc9ResamplerC1Ev(void);

/* Symbol: _ZN6webrtc13SincResampler11kKernelSizeE */
/* Demangled: webrtc::SincResampler::kKernelSize */
extern void* _ZN6webrtc13SincResampler11kKernelSizeE;

/* Symbol: _ZNK6webrtc17VadCircularBuffer6OldestEv */
/* Demangled: webrtc::VadCircularBuffer::Oldest() const */
int _ZNK6webrtc17VadCircularBuffer6OldestEv(void);

/* Symbol: _ZN6webrtc13ErleEstimatorD1Ev */
/* Demangled: webrtc::ErleEstimator::~ErleEstimator() */
int _ZN6webrtc13ErleEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimator11UpdateBandsERKNSt3__16vectorIbNS1_9allocatorIbEEEE */
/* Demangled: webrtc::SubbandErleEstimator::UpdateBands(std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN6webrtc20SubbandErleEstimator11UpdateBandsERKNSt3__16vectorIbNS1_9allocatorIbEEEE(void);

/* Symbol: _ZNK6webrtc5Pffft12CreateBufferEv */
/* Demangled: webrtc::Pffft::CreateBuffer() const */
int _ZNK6webrtc5Pffft12CreateBufferEv(void);

/* Symbol: _ZN7rnnoise16kOutputDenseBiasE */
/* Demangled: rnnoise::kOutputDenseBias */
extern void* _ZN7rnnoise16kOutputDenseBiasE;

/* Symbol: WebRtcSpl_ResetResample16khzTo22khz */
/* Demangled: WebRtcSpl_ResetResample16khzTo22khz */
int WebRtcSpl_ResetResample16khzTo22khz(void);

/* Symbol: WebRtcSpl_DownBy2IntToShort */
/* Demangled: WebRtcSpl_DownBy2IntToShort */
int WebRtcSpl_DownBy2IntToShort(void);

/* Symbol: _ZN3rtc18SetClockForTestingEPNS_14ClockInterfaceE */
/* Demangled: rtc::SetClockForTesting(rtc::ClockInterface*) */
int _ZN3rtc18SetClockForTestingEPNS_14ClockInterfaceE(void);

/* Symbol: _ZN6webrtc8RmsLevel14CheckBlockSizeEj */
/* Demangled: webrtc::RmsLevel::CheckBlockSize(unsigned int) */
int _ZN6webrtc8RmsLevel14CheckBlockSizeEj(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10SuppressorC2ERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor(webrtc::EchoCanceller3Config::Suppressor const&) */
int _ZN6webrtc20EchoCanceller3Config10SuppressorC2ERKS1_(void);

/* Symbol: WebRtcSpl_MinValueW16 */
/* Demangled: WebRtcSpl_MinValueW16 */
extern void* WebRtcSpl_MinValueW16;

/* Symbol: _ZN6webrtc19WebRtcAecm_AsymFiltEssss */
/* Demangled: webrtc::WebRtcAecm_AsymFilt(short, short, short, short) */
int _ZN6webrtc19WebRtcAecm_AsymFiltEssss(void);

/* Symbol: _ZN3rtc13TimeUTCMillisEv */
/* Demangled: rtc::TimeUTCMillis() */
int _ZN3rtc13TimeUTCMillisEv(void);

/* Symbol: WebRtcSpl_AllPassQMF */
/* Demangled: WebRtcSpl_AllPassQMF */
int WebRtcSpl_AllPassQMF(void);

/* Symbol: _ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE */
/* Demangled: webrtc::EvaluateGmm(double const*, webrtc::GmmParameters const&) */
int _ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE(void);

/* Symbol: _ZN6webrtc8AecStateD2Ev */
/* Demangled: webrtc::AecState::~AecState() */
int _ZN6webrtc8AecStateD2Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad19GatedRecurrentLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE */
/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::GatedRecurrentLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, webrtc::rnn_vad::Optimization) */
int _ZN6webrtc7rnn_vad19GatedRecurrentLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE(void);

/* Symbol: _ZN6webrtc7MonoAgc8SetLevelEi */
/* Demangled: webrtc::MonoAgc::SetLevel(int) */
int _ZN6webrtc7MonoAgc8SetLevelEi(void);

/* Symbol: _ZN6webrtc7rnn_vad19GatedRecurrentLayerD1Ev */
/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::~GatedRecurrentLayer() */
int _ZN6webrtc7rnn_vad19GatedRecurrentLayerD1Ev(void);

/* Symbol: _Z15AecGetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: AecGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z15AecGetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect7ProcessEPKNS_11AudioBufferE */
/* Demangled: webrtc::AgcManagerDirect::Process(webrtc::AudioBuffer const*) */
int _ZN6webrtc16AgcManagerDirect7ProcessEPKNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl18InitializeAnalyzerEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeAnalyzer() */
int _ZN6webrtc19AudioProcessingImpl18InitializeAnalyzerEv(void);

/* Symbol: _ZN6webrtc15GainController215instance_count_E */
/* Demangled: webrtc::GainController2::instance_count_ */
extern void* _ZN6webrtc15GainController215instance_count_E;

/* Symbol: WebRtcSpl_MaxValueW32Neon */
/* Demangled: WebRtcSpl_MaxValueW32Neon */
int WebRtcSpl_MaxValueW32Neon(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataE */
/* Demangled: webrtc::AdaptiveFirFilter::Adapt(webrtc::RenderBuffer const&, webrtc::FftData const&) */
int _ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataE(void);

/* Symbol: _ZNK6webrtc21StationarityEstimator24EstimateBandStationarityERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEERKNSt3__15arrayIiLj13EEEj */
/* Demangled: webrtc::StationarityEstimator::EstimateBandStationarity(webrtc::SpectrumBuffer const&, rtc::ArrayView<float const, -4711>, std::__1::array<int, 13u> const&, unsigned int) const */
int _ZNK6webrtc21StationarityEstimator24EstimateBandStationarityERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEERKNSt3__15arrayIiLj13EEEj(void);

/* Symbol: _ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE */
/* Demangled: rtc::LogMessage::RemoveLogToStream(rtc::LogSink*) */
int _ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram15RemoveTransientEv */
/* Demangled: webrtc::LoudnessHistogram::RemoveTransient() */
int _ZN6webrtc17LoudnessHistogram15RemoveTransientEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplC1Ev */
/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl() */
int _ZN6webrtc21EchoControlMobileImplC1Ev(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIjE3GetEv */
/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::Get() const */
int _ZNK6webrtc21FieldTrialConstrainedIjE3GetEv(void);

/* Symbol: _ZN6webrtc6ConfigD1Ev */
/* Demangled: webrtc::Config::~Config() */
int _ZN6webrtc6ConfigD1Ev(void);

/* Symbol: _ZN6webrtc15NoiseSuppressor12ChannelStateC2ERKNS_17SuppressionParamsEj */
/* Demangled: webrtc::NoiseSuppressor::ChannelState::ChannelState(webrtc::SuppressionParams const&, unsigned int) */
int _ZN6webrtc15NoiseSuppressor12ChannelStateC2ERKNS_17SuppressionParamsEj(void);

/* Symbol: _ZN6webrtc14EchoAudibilityD2Ev */
/* Demangled: webrtc::EchoAudibility::~EchoAudibility() */
int _ZN6webrtc14EchoAudibilityD2Ev(void);

/* Symbol: _ZN6webrtc9Resampler13ResetIfNeededEiij */
/* Demangled: webrtc::Resampler::ResetIfNeeded(int, int, unsigned int) */
int _ZN6webrtc9Resampler13ResetIfNeededEiij(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer6InsertEd */
/* Demangled: webrtc::VadCircularBuffer::Insert(double) */
int _ZN6webrtc17VadCircularBuffer6InsertEd(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialOptional<bool>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc18FieldTrialOptionalIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZN6webrtc18WebRtcAecm_ControlEPNS_8AecmCoreEii */
/* Demangled: webrtc::WebRtcAecm_Control(webrtc::AecmCore*, int, int) */
int _ZN6webrtc18WebRtcAecm_ControlEPNS_8AecmCoreEii(void);

/* Symbol: _ZN3rtc10TimeMicrosEv */
/* Demangled: rtc::TimeMicros() */
int _ZN3rtc10TimeMicrosEv(void);

/* Symbol: _ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj */
/* Demangled: webrtc::VadAudioProc::SubframeCorrelation(double*, unsigned int, unsigned int) */
int _ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj(void);

/* Symbol: _ZN6webrtc19SaturationProtector5ResetEv */
/* Demangled: webrtc::SaturationProtector::Reset() */
int _ZN6webrtc19SaturationProtector5ResetEv(void);

/* Symbol: _ZN7rnnoise17kHiddenGruWeightsE */
/* Demangled: rnnoise::kHiddenGruWeights */
extern void* _ZN7rnnoise17kHiddenGruWeightsE;

/* Symbol: _ZN6webrtc16SignalClassifier7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::SignalClassifier::Analyze(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc16SignalClassifier7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _ZN6webrtc19NoiseLevelEstimatorC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::NoiseLevelEstimator::NoiseLevelEstimator(webrtc::ApmDataDumper*) */
int _ZN6webrtc19NoiseLevelEstimatorC2EPNS_13ApmDataDumperE(void);

/* Symbol: WebRtcSpl_RandUArray */
/* Demangled: WebRtcSpl_RandUArray */
int WebRtcSpl_RandUArray(void);

/* Symbol: WebRtcVad_CalcVad8khz */
/* Demangled: WebRtcVad_CalcVad8khz */
int WebRtcVad_CalcVad8khz(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_SB_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_SB_EEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEif */
/* Demangled: webrtc::ReverbFrequencyResponse::Update(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, int, float) */
int _ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEif(void);

/* Symbol: _ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv */
/* Demangled: webrtc::AudioBuffer::SplitIntoFrequencyBands() */
int _ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv(void);

/* Symbol: _ZN6webrtc21StationarityEstimatorD2Ev */
/* Demangled: webrtc::StationarityEstimator::~StationarityEstimator() */
int _ZN6webrtc21StationarityEstimatorD2Ev(void);

/* Symbol: _ZN3rtc13TimeUTCMicrosEv */
/* Demangled: rtc::TimeUTCMicros() */
int _ZN3rtc13TimeUTCMicrosEv(void);

/* Symbol: _ZN6webrtc7WPDTreeD2Ev */
/* Demangled: webrtc::WPDTree::~WPDTree() */
int _ZN6webrtc7WPDTreeD2Ev(void);

/* Symbol: _ZN6webrtc8RmsLevelD1Ev */
/* Demangled: webrtc::RmsLevel::~RmsLevel() */
int _ZN6webrtc8RmsLevelD1Ev(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10SuppressorC2Ev */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor() */
int _ZN6webrtc20EchoCanceller3Config10SuppressorC2Ev(void);

/* Symbol: WebRtcSpl_DownsampleFastNeon */
/* Demangled: WebRtcSpl_DownsampleFastNeon */
int WebRtcSpl_DownsampleFastNeon(void);

/* Symbol: _ZN6webrtc13PushResamplerIsEC2Ev */
/* Demangled: webrtc::PushResampler<short>::PushResampler() */
int _ZN6webrtc13PushResamplerIsEC2Ev(void);

/* Symbol: _ZN6webrtc15FastApproxLog2fEf */
/* Demangled: webrtc::FastApproxLog2f(float) */
int _ZN6webrtc15FastApproxLog2fEf(void);

/* Symbol: _ZN6webrtc14EchoAudibility6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEib */
/* Demangled: webrtc::EchoAudibility::Update(webrtc::RenderBuffer const&, rtc::ArrayView<float const, -4711>, int, bool) */
int _ZN6webrtc14EchoAudibility6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEib(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl29InitializeTransientSuppressorEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeTransientSuppressor() */
int _ZN6webrtc19AudioProcessingImpl29InitializeTransientSuppressorEv(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGainD2Ev */
/* Demangled: webrtc::RefinedFilterUpdateGain::~RefinedFilterUpdateGain() */
int _ZN6webrtc23RefinedFilterUpdateGainD2Ev(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimator38DecreaseErlePerBandForLowRenderSignalsEv */
/* Demangled: webrtc::SubbandErleEstimator::DecreaseErlePerBandForLowRenderSignals() */
int _ZN6webrtc20SubbandErleEstimator38DecreaseErlePerBandForLowRenderSignalsEv(void);

/* Symbol: _ZN6webrtc7WPDTreeC2EjPKfS2_ji */
/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
int _ZN6webrtc7WPDTreeC2EjPKfS2_ji(void);

/* Symbol: _ZNK6webrtc6Config3GetINS_15ExperimentalAgcEEERKT_v */
/* Demangled: webrtc::ExperimentalAgc const& webrtc::Config::Get<webrtc::ExperimentalAgc>() const */
int _ZNK6webrtc6Config3GetINS_15ExperimentalAgcEEERKT_v(void);

/* Symbol: _ZN6webrtc19NoiseLevelEstimator7AnalyzeERKNS_14AudioFrameViewIKfEE */
/* Demangled: webrtc::NoiseLevelEstimator::Analyze(webrtc::AudioFrameView<float const> const&) */
int _ZN6webrtc19NoiseLevelEstimator7AnalyzeERKNS_14AudioFrameViewIKfEE(void);

/* Symbol: _ZN6webrtc11BlockFramerC2Ejj */
/* Demangled: webrtc::BlockFramer::BlockFramer(unsigned int, unsigned int) */
int _ZN6webrtc11BlockFramerC2Ejj(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIjE11GetOptionalEv */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::GetOptional() const */
int _ZNK6webrtc18FieldTrialOptionalIjE11GetOptionalEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb */
/* Demangled: webrtc::EchoControlMobileImpl::enable_comfort_noise(bool) */
int _ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb(void);

/* Symbol: WebRtc_ReadBuffer */
/* Demangled: WebRtc_ReadBuffer */
int WebRtc_ReadBuffer(void);

/* Symbol: _ZTVN6webrtc13PushResamplerIfEE */
/* Demangled: vtable for webrtc::PushResampler<float> */
extern void* _ZTVN6webrtc13PushResamplerIfEE;

/* Symbol: _ZN6webrtc16BlockDelayBufferD1Ev */
/* Demangled: webrtc::BlockDelayBuffer::~BlockDelayBuffer() */
int _ZN6webrtc16BlockDelayBufferD1Ev(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigC2Ev */
/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig() */
int _ZN6webrtc17InternalAPMConfigC2Ev(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIdEptEv */
/* Demangled: webrtc::FieldTrialOptional<double>::operator->() const */
int _ZNK6webrtc18FieldTrialOptionalIdEptEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_back(float*&&) */
int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEEEEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEEEEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc14EchoAudibility14IsRenderTooLowERKNS_11BlockBufferE */
/* Demangled: webrtc::EchoAudibility::IsRenderTooLow(webrtc::BlockBuffer const&) */
int _ZN6webrtc14EchoAudibility14IsRenderTooLowERKNS_11BlockBufferE(void);

/* Symbol: _Z21PreProc_GetDescriptorPK12audio_uuid_s */
/* Demangled: PreProc_GetDescriptor(audio_uuid_s const*) */
int _Z21PreProc_GetDescriptorPK12audio_uuid_s(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE */
/* Demangled: webrtc::AudioProcessingImpl::SetRuntimeSetting(webrtc::AudioProcessing::RuntimeSetting) */
int _ZN6webrtc19AudioProcessingImpl17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6webrtc21EchoControlMobileImpl9CancellerENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::EchoControlMobileImpl::Canceller, std::__1::default_delete<webrtc::EchoControlMobileImpl::Canceller> >, std::__1::allocator<std::__1::unique_ptr<webrtc::EchoControlMobileImpl::Canceller, std::__1::default_delete<webrtc::EchoControlMobileImpl::Canceller> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc21EchoControlMobileImpl9CancellerENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj(void);

/* Symbol: WebRtcSpl_RandN */
/* Demangled: WebRtcSpl_RandN */
int WebRtcSpl_RandN(void);

/* Symbol: _ZN6webrtc13FIRFilterNEOND0Ev */
/* Demangled: webrtc::FIRFilterNEON::~FIRFilterNEON() */
int _ZN6webrtc13FIRFilterNEOND0Ev(void);

/* Symbol: _ZNK6webrtc12RenderBuffer12SpectralSumsEjjPNSt3__15arrayIfLj65EEES4_ */
/* Demangled: webrtc::RenderBuffer::SpectralSums(unsigned int, unsigned int, std::__1::array<float, 65u>*, std::__1::array<float, 65u>*) const */
int _ZNK6webrtc12RenderBuffer12SpectralSumsEjjPNSt3__15arrayIfLj65EEES4_(void);

/* Symbol: _ZN6webrtc21StationarityEstimator14UpdateHangoverEv */
/* Demangled: webrtc::StationarityEstimator::UpdateHangover() */
int _ZN6webrtc21StationarityEstimator14UpdateHangoverEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl27HandleRenderRuntimeSettingsEv */
/* Demangled: webrtc::AudioProcessingImpl::HandleRenderRuntimeSettings() */
int _ZN6webrtc19AudioProcessingImpl27HandleRenderRuntimeSettingsEv(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl21PackRenderAudioBufferEPKNS_11AudioBufferEjjPNSt3__16vectorIsNS4_9allocatorIsEEEE */
/* Demangled: webrtc::EchoControlMobileImpl::PackRenderAudioBuffer(webrtc::AudioBuffer const*, unsigned int, unsigned int, std::__1::vector<short, std::__1::allocator<short> >*) */
int _ZN6webrtc21EchoControlMobileImpl21PackRenderAudioBufferEPKNS_11AudioBufferEjjPNSt3__16vectorIsNS4_9allocatorIsEEEE(void);

/* Symbol: _ZN3rtc14PlatformThread4StopEv */
/* Demangled: rtc::PlatformThread::Stop() */
int _ZN3rtc14PlatformThread4StopEv(void);

/* Symbol: _ZN6webrtc20ReverbModelEstimatorD1Ev */
/* Demangled: webrtc::ReverbModelEstimator::~ReverbModelEstimator() */
int _ZN6webrtc20ReverbModelEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc28RenderDelayControllerMetrics6UpdateENSt3__18optionalIjEEjNS2_IiEENS_18ClockdriftDetector5LevelE */
/* Demangled: webrtc::RenderDelayControllerMetrics::Update(std::__1::optional<unsigned int>, unsigned int, std::__1::optional<int>, webrtc::ClockdriftDetector::Level) */
int _ZN6webrtc28RenderDelayControllerMetrics6UpdateENSt3__18optionalIjEEjNS2_IiEENS_18ClockdriftDetector5LevelE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void);

/* Symbol: _ZNK6webrtc17LoudnessHistogram10CurrentRmsEv */
/* Demangled: webrtc::LoudnessHistogram::CurrentRms() const */
int _ZNK6webrtc17LoudnessHistogram10CurrentRmsEv(void);

/* Symbol: _ZN6webrtc15GainControlImplD2Ev */
/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
int _ZN6webrtc15GainControlImplD2Ev(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter5ResetEv */
/* Demangled: webrtc::CascadedBiQuadFilter::Reset() */
int _ZN6webrtc20CascadedBiQuadFilter5ResetEv(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_NS1_8optionalIS7_EE */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_NS1_8optionalIS7_EE(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv */
/* Demangled: webrtc::AudioProcessingImpl::stream_delay_ms() const */
int _ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv(void);

/* Symbol: _ZN6webrtc21StationarityEstimator13NoiseSpectrumD1Ev */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::~NoiseSpectrum() */
int _ZN6webrtc21StationarityEstimator13NoiseSpectrumD1Ev(void);

/* Symbol: _ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: rtc::hex_encode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _Z12Session_InitP17preproc_session_s */
/* Demangled: Session_Init(preproc_session_s*) */
int _Z12Session_InitP17preproc_session_s(void);

/* Symbol: _ZN6webrtc22EchoPathDelayEstimator5ResetEbb */
/* Demangled: webrtc::EchoPathDelayEstimator::Reset(bool, bool) */
int _ZN6webrtc22EchoPathDelayEstimator5ResetEbb(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialParameter<unsigned int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc19FieldTrialParameterIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZNK6webrtc9MovingMax3maxEv */
/* Demangled: webrtc::MovingMax::max() const */
int _ZNK6webrtc9MovingMax3maxEv(void);

/* Symbol: _ZN6webrtc13PitchBasedVadC1Ev */
/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadC1Ev(void);

/* Symbol: _ZN6webrtc14EchoAudibility29UpdateRenderStationarityFlagsERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEi */
/* Demangled: webrtc::EchoAudibility::UpdateRenderStationarityFlags(webrtc::RenderBuffer const&, rtc::ArrayView<float const, -4711>, int) */
int _ZN6webrtc14EchoAudibility29UpdateRenderStationarityFlagsERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEi(void);

/* Symbol: _ZTVN6webrtc19FieldTrialParameterIdEE */
/* Demangled: vtable for webrtc::FieldTrialParameter<double> */
extern void* _ZTVN6webrtc19FieldTrialParameterIdEE;

/* Symbol: _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE */
/* Demangled: std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::destroy(std::__1::__tree_node<int, void*>*) */
int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKsRKNS_12StreamConfigE */
/* Demangled: webrtc::AudioProcessingImpl::RecordProcessedCaptureStream(short const*, webrtc::StreamConfig const&) */
int _ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKsRKNS_12StreamConfigE(void);

/* Symbol: _ZN6webrtc20ResidualEchoDetectorC2Ev */
/* Demangled: webrtc::ResidualEchoDetector::ResidualEchoDetector() */
int _ZN6webrtc20ResidualEchoDetectorC2Ev(void);

/* Symbol: WebRtcSpl_RandU */
/* Demangled: WebRtcSpl_RandU */
int WebRtcSpl_RandU(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilterC1ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE */
/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(std::__1::vector<webrtc::CascadedBiQuadFilter::BiQuadParam, std::__1::allocator<webrtc::CascadedBiQuadFilter::BiQuadParam> > const&) */
int _ZN6webrtc20CascadedBiQuadFilterC1ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN6webrtc14HighPassFilterC1Eij */
/* Demangled: webrtc::HighPassFilter::HighPassFilter(int, unsigned int) */
int _ZN6webrtc14HighPassFilterC1Eij(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl14ApmRenderStateC1Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::ApmRenderState() */
int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateC1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC2Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::ApmStatsReporter() */
int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC2Ev(void);

/* Symbol: _ZNK6webrtc17AdaptiveFirFilter6FilterERKNS_12RenderBufferEPNS_7FftDataE */
/* Demangled: webrtc::AdaptiveFirFilter::Filter(webrtc::RenderBuffer const&, webrtc::FftData*) const */
int _ZNK6webrtc17AdaptiveFirFilter6FilterERKNS_12RenderBufferEPNS_7FftDataE(void);

/* Symbol: _ZN6webrtc14EchoCanceller312RenderWriterC1EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj */
/* Demangled: webrtc::EchoCanceller3::RenderWriter::RenderWriter(webrtc::ApmDataDumper*, webrtc::SwapQueue<std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >, webrtc::Aec3RenderQueueItemVerifier>*, unsigned int, unsigned int) */
int _ZN6webrtc14EchoCanceller312RenderWriterC1EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj(void);

/* Symbol: _ZN6webrtc7Limiter5ResetEv */
/* Demangled: webrtc::Limiter::Reset() */
int _ZN6webrtc7Limiter5ResetEv(void);

/* Symbol: _ZN6webrtc13MatchedFilterD2Ev */
/* Demangled: webrtc::MatchedFilter::~MatchedFilter() */
int _ZN6webrtc13MatchedFilterD2Ev(void);

/* Symbol: _ZTVN6webrtc21FieldTrialConstrainedIiEE */
/* Demangled: vtable for webrtc::FieldTrialConstrained<int> */
extern void* _ZTVN6webrtc21FieldTrialConstrainedIiEE;

/* Symbol: _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc15GainController217NotifyAnalogLevelEi */
/* Demangled: webrtc::GainController2::NotifyAnalogLevel(int) */
int _ZN6webrtc15GainController217NotifyAnalogLevelEi(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_SI_RKNS7_IbNSA_IbEEEE */
/* Demangled: webrtc::SignalDependentErleEstimator::Update(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN6webrtc28SignalDependentErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_SI_RKNS7_IbNSA_IbEEEE(void);

/* Symbol: _ZN3rtc10LogMessageD2Ev */
/* Demangled: rtc::LogMessage::~LogMessage() */
int _ZN3rtc10LogMessageD2Ev(void);

/* Symbol: _ZN6webrtc5PffftD1Ev */
/* Demangled: webrtc::Pffft::~Pffft() */
int _ZN6webrtc5PffftD1Ev(void);

/* Symbol: _ZN6webrtc33WebRtc_AllocateFarendBufferMemoryEPNS_26BinaryDelayEstimatorFarendEi */
/* Demangled: webrtc::WebRtc_AllocateFarendBufferMemory(webrtc::BinaryDelayEstimatorFarend*, int) */
int _ZN6webrtc33WebRtc_AllocateFarendBufferMemoryEPNS_26BinaryDelayEstimatorFarendEi(void);

/* Symbol: _ZN6webrtc20EchoCanceller3ConfigC2Ev */
/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config() */
int _ZN6webrtc20EchoCanceller3ConfigC2Ev(void);

/* Symbol: _ZTVN6webrtc23DominantNearendDetectorE */
/* Demangled: vtable for webrtc::DominantNearendDetector */
extern void* _ZTVN6webrtc23DominantNearendDetectorE;

/* Symbol: _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD1Ev */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::~SpectralFeaturesExtractor() */
int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD1Ev(void);

/* Symbol: validate_pffft_simd */
/* Demangled: validate_pffft_simd */
int validate_pffft_simd(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandSubModulesActiveEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureMultiBandSubModulesActive() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandSubModulesActiveEv(void);

/* Symbol: _ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d */
/* Demangled: webrtc::SincResampler::Convolve_C(float const*, float const*, float const*, double) */
int _ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d(void);

/* Symbol: _ZN6webrtc17SuppressionFilterD1Ev */
/* Demangled: webrtc::SuppressionFilter::~SuppressionFilter() */
int _ZN6webrtc17SuppressionFilterD1Ev(void);

/* Symbol: _ZN6webrtc16SignalClassifier13FrameExtenderD1Ev */
/* Demangled: webrtc::SignalClassifier::FrameExtender::~FrameExtender() */
int _ZN6webrtc16SignalClassifier13FrameExtenderD1Ev(void);

/* Symbol: _Z15Effect_SetStateP16preproc_effect_sj */
/* Demangled: Effect_SetState(preproc_effect_s*, unsigned int) */
int _Z15Effect_SetStateP16preproc_effect_sj(void);

/* Symbol: _ZN6webrtc20EchoCanceller3ConfigC2ERKS0_ */
/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc20EchoCanceller3ConfigC2ERKS0_(void);

/* Symbol: _ZN6webrtc13PushResamplerIsED0Ev */
/* Demangled: webrtc::PushResampler<short>::~PushResampler() */
int _ZN6webrtc13PushResamplerIsED0Ev(void);

/* Symbol: _ZN6webrtc27WebRtcAgc_ApplyDigitalGainsEPKijjPKPKsPKPs */
/* Demangled: webrtc::WebRtcAgc_ApplyDigitalGains(int const*, unsigned int, unsigned int, short const* const*, short* const*) */
int _ZN6webrtc27WebRtcAgc_ApplyDigitalGainsEPKijjPKPKsPKPs(void);

/* Symbol: _ZN6webrtc5PffftC2EjNS0_7FftTypeE */
/* Demangled: webrtc::Pffft::Pffft(unsigned int, webrtc::Pffft::FftType) */
int _ZN6webrtc5PffftC2EjNS0_7FftTypeE(void);

/* Symbol: _ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramEi */
/* Demangled: webrtc::metrics::HistogramAdd(webrtc::metrics::Histogram*, int) */
int _ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramEi(void);

/* Symbol: _ZN3rtc14PlatformThread5StartEv */
/* Demangled: rtc::PlatformThread::Start() */
int _ZN3rtc14PlatformThread5StartEv(void);

/* Symbol: WebRtcSpl_Resample16khzTo22khz */
/* Demangled: WebRtcSpl_Resample16khzTo22khz */
int WebRtcSpl_Resample16khzTo22khz(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimatorD1Ev */
/* Demangled: webrtc::ResidualEchoEstimator::~ResidualEchoEstimator() */
int _ZN6webrtc21ResidualEchoEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC2ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::ConsistentFilterDetector(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC2ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN3rtc8ToStringEPKc */
/* Demangled: rtc::ToString(char const*) */
int _ZN3rtc8ToStringEPKc(void);

/* Symbol: _ZN3rtc8internal16RaceCheckerScopeD2Ev */
/* Demangled: rtc::internal::RaceCheckerScope::~RaceCheckerScope() */
int _ZN3rtc8internal16RaceCheckerScopeD2Ev(void);

/* Symbol: _ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv */
/* Demangled: webrtc::SincResampler::InitializeCPUSpecificFeatures() */
int _ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv(void);

/* Symbol: _ZN6webrtc15SplittingFilterC2Ejjj */
/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc15SplittingFilterC2Ejjj(void);

/* Symbol: _ZN6webrtc20ApiCallJitterMetrics6JitterC1Ev */
/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Jitter() */
int _ZN6webrtc20ApiCallJitterMetrics6JitterC1Ev(void);

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnumD1Ev */
/* Demangled: webrtc::AbstractFieldTrialEnum::~AbstractFieldTrialEnum() */
int _ZN6webrtc22AbstractFieldTrialEnumD1Ev(void);

/* Symbol: _ZN6webrtc5Pffft17BackwardTransformERKNS0_11FloatBufferEPS1_b */
/* Demangled: webrtc::Pffft::BackwardTransform(webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer*, bool) */
int _ZN6webrtc5Pffft17BackwardTransformERKNS0_11FloatBufferEPS1_b(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> >, std::__1::allocator<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> > > >::__push_back_slow_path<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> > >(std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> >&&) */
int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN6webrtc13PushResamplerIfED1Ev */
/* Demangled: webrtc::PushResampler<float>::~PushResampler() */
int _ZN6webrtc13PushResamplerIfED1Ev(void);

/* Symbol: _ZN6webrtc25WebRtc_get_allowed_offsetEPKv */
/* Demangled: webrtc::WebRtc_get_allowed_offset(void const*) */
int _ZN6webrtc25WebRtc_get_allowed_offsetEPKv(void);

/* Symbol: _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::__find_equal<int>(std::__1::__tree_const_iterator<int, std::__1::__tree_node<int, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_(void);

/* Symbol: _ZN3rtc11TmToSecondsERK2tm */
/* Demangled: rtc::TmToSeconds(tm const&) */
int _ZN3rtc11TmToSecondsERK2tm(void);

/* Symbol: WebRtcAecm_Process */
/* Demangled: WebRtcAecm_Process */
int WebRtcAecm_Process(void);

/* Symbol: WebRtcSpl_MinValueW32Neon */
/* Demangled: WebRtcSpl_MinValueW32Neon */
int WebRtcSpl_MinValueW32Neon(void);

/* Symbol: _ZN6webrtc14NoiseEstimator15PrepareAnalysisEv */
/* Demangled: webrtc::NoiseEstimator::PrepareAnalysis() */
int _ZN6webrtc14NoiseEstimator15PrepareAnalysisEv(void);

/* Symbol: _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEE */
/* Demangled: webrtc::BlockProcessor::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::RenderDelayBuffer, std::__1::default_delete<webrtc::RenderDelayBuffer> >) */
int _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEE(void);

/* Symbol: _ZN6webrtc28RenderDelayControllerMetricsC2Ev */
/* Demangled: webrtc::RenderDelayControllerMetrics::RenderDelayControllerMetrics() */
int _ZN6webrtc28RenderDelayControllerMetricsC2Ev(void);

/* Symbol: _ZN6webrtc28SignalDependentErleEstimator23UpdateCorrectionFactorsEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE */
/* Demangled: webrtc::SignalDependentErleEstimator::UpdateCorrectionFactors(rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN6webrtc28SignalDependentErleEstimator23UpdateCorrectionFactorsEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void);

/* Symbol: _ZN6webrtc21StationarityEstimator13NoiseSpectrum6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::Update(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>) */
int _ZN6webrtc21StationarityEstimator13NoiseSpectrum6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE(void);

/* Symbol: pffft_cplx_finalize */
/* Demangled: pffft_cplx_finalize */
int pffft_cplx_finalize(void);

/* Symbol: _ZN6webrtc14LevelEstimatorC1Ev */
/* Demangled: webrtc::LevelEstimator::LevelEstimator() */
int _ZN6webrtc14LevelEstimatorC1Ev(void);

/* Symbol: _ZN6webrtc8RmsLevel7AverageEv */
/* Demangled: webrtc::RmsLevel::Average() */
int _ZN6webrtc8RmsLevel7AverageEv(void);

/* Symbol: _ZN6webrtc20SignalModelEstimator19AdjustNormalizationEif */
/* Demangled: webrtc::SignalModelEstimator::AdjustNormalization(int, float) */
int _ZN6webrtc20SignalModelEstimator19AdjustNormalizationEif(void);

/* Symbol: _ZN6webrtc8AecState15TransparentMode5ResetEv */
/* Demangled: webrtc::AecState::TransparentMode::Reset() */
int _ZN6webrtc8AecState15TransparentMode5ResetEv(void);

/* Symbol: _ZN6webrtc19EchoPathVariabilityC2EbNS0_15DelayAdjustmentEb */
/* Demangled: webrtc::EchoPathVariability::EchoPathVariability(bool, webrtc::EchoPathVariability::DelayAdjustment, bool) */
int _ZN6webrtc19EchoPathVariabilityC2EbNS0_15DelayAdjustmentEb(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics8DbMetric6UpdateEf */
/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::Update(float) */
int _ZN6webrtc18EchoRemoverMetrics8DbMetric6UpdateEf(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ENSt3__17complexIfEES4_fb */
/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(std::__1::complex<float>, std::__1::complex<float>, float, bool) */
int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ENSt3__17complexIfEES4_fb(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIbEptEv */
/* Demangled: webrtc::FieldTrialOptional<bool>::operator->() const */
int _ZNK6webrtc18FieldTrialOptionalIbEptEv(void);

/* Symbol: _ZN3rtc10LogMessage18WallClockStartTimeEv */
/* Demangled: rtc::LogMessage::WallClockStartTime() */
int _ZN3rtc10LogMessage18WallClockStartTimeEv(void);

/* Symbol: _ZN6webrtc5Pffft11FloatBufferC1EjNS0_7FftTypeE */
/* Demangled: webrtc::Pffft::FloatBuffer::FloatBuffer(unsigned int, webrtc::Pffft::FftType) */
int _ZN6webrtc5Pffft11FloatBufferC1EjNS0_7FftTypeE(void);

/* Symbol: _Z16HasReverseStreamj */
/* Demangled: HasReverseStream(unsigned int) */
int _Z16HasReverseStreamj(void);

/* Symbol: _ZN6webrtc13ErleEstimator5ResetEb */
/* Demangled: webrtc::ErleEstimator::Reset(bool) */
int _ZN6webrtc13ErleEstimator5ResetEb(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialParameter<double>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc19FieldTrialParameterIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_output_channels() const */
int _ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv(void);

/* Symbol: _ZN6webrtc9MovingMaxD2Ev */
/* Demangled: webrtc::MovingMax::~MovingMax() */
int _ZN6webrtc9MovingMaxD2Ev(void);

/* Symbol: _ZN6webrtc23WebRtcAecm_ProcessBlockEPNS_8AecmCoreEPKsS3_S3_Ps */
/* Demangled: webrtc::WebRtcAecm_ProcessBlock(webrtc::AecmCore*, short const*, short const*, short const*, short*) */
int _ZN6webrtc23WebRtcAecm_ProcessBlockEPNS_8AecmCoreEPKsS3_S3_Ps(void);

/* Symbol: _ZN6webrtc17PushSincResampler8ResampleEPKfjPfj */
/* Demangled: webrtc::PushSincResampler::Resample(float const*, unsigned int, float*, unsigned int) */
int _ZN6webrtc17PushSincResampler8ResampleEPKfjPfj(void);

/* Symbol: _ZN6webrtc8AecState18SaturationDetector6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS4_9allocatorIfEEEELin4711EEEbbNS3_IKNS_16SubtractorOutputELin4711EEEf */
/* Demangled: webrtc::AecState::SaturationDetector::Update(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, bool, bool, rtc::ArrayView<webrtc::SubtractorOutput const, -4711>, float) */
int _ZN6webrtc8AecState18SaturationDetector6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS4_9allocatorIfEEEELin4711EEEbbNS3_IKNS_16SubtractorOutputELin4711EEEf(void);

/* Symbol: _ZN6webrtc20ApiCallJitterMetrics17ReportCaptureCallEv */
/* Demangled: webrtc::ApiCallJitterMetrics::ReportCaptureCall() */
int _ZN6webrtc20ApiCallJitterMetrics17ReportCaptureCallEv(void);

/* Symbol: _ZN6webrtc12FrameBlocker12ExtractBlockEPNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE */
/* Demangled: webrtc::FrameBlocker::ExtractBlock(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*) */
int _ZN6webrtc12FrameBlocker12ExtractBlockEPNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous6UpdateEff */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::Update(float, float) */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous6UpdateEff(void);

/* Symbol: _ZTVN3rtc7LogSinkE */
/* Demangled: vtable for rtc::LogSink */
extern void* _ZTVN3rtc7LogSinkE;

/* Symbol: _ZN6webrtc20ResidualEchoDetector15instance_count_E */
/* Demangled: webrtc::ResidualEchoDetector::instance_count_ */
extern void* _ZN6webrtc20ResidualEchoDetector15instance_count_E;

/* Symbol: _ZN6webrtc14FilterAnalyzer13AnalyzeRegionEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferE */
/* Demangled: webrtc::FilterAnalyzer::AnalyzeRegion(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, webrtc::RenderBuffer const&) */
int _ZN6webrtc14FilterAnalyzer13AnalyzeRegionEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferE(void);

/* Symbol: WebRtcSpl_MaxValueW32 */
/* Demangled: WebRtcSpl_MaxValueW32 */
extern void* WebRtcSpl_MaxValueW32;

/* Symbol: _ZN6webrtc26MatchedFilterLagAggregatorC1EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE */
/* Demangled: webrtc::MatchedFilterLagAggregator::MatchedFilterLagAggregator(webrtc::ApmDataDumper*, unsigned int, webrtc::EchoCanceller3Config::Delay::DelaySelectionThresholds const&) */
int _ZN6webrtc26MatchedFilterLagAggregatorC1EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi480EEES5_NS3_IfLi16EEENS3_IfLi6EEES7_S7_S7_Pf */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::CheckSilenceComputeFeatures(rtc::ArrayView<float const, 480>, rtc::ArrayView<float const, 480>, rtc::ArrayView<float, 16>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, float*) */
int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi480EEES5_NS3_IfLi16EEENS3_IfLi6EEES7_S7_S7_Pf(void);

/* Symbol: _ZN6webrtc9ResamplerC2Eiij */
/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
int _ZN6webrtc9ResamplerC2Eiij(void);

/* Symbol: pffft_zconvolve_accumulate */
/* Demangled: pffft_zconvolve_accumulate */
int pffft_zconvolve_accumulate(void);

/* Symbol: _ZN6webrtc20ResidualEchoDetectorD0Ev */
/* Demangled: webrtc::ResidualEchoDetector::~ResidualEchoDetector() */
int _ZN6webrtc20ResidualEchoDetectorD0Ev(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimator23ResetAccumulatedSpectraEv */
/* Demangled: webrtc::SubbandErleEstimator::ResetAccumulatedSpectra() */
int _ZN6webrtc20SubbandErleEstimator23ResetAccumulatedSpectraEv(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter6BiQuadC1ERKNS0_11BiQuadParamE */
/* Demangled: webrtc::CascadedBiQuadFilter::BiQuad::BiQuad(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
int _ZN6webrtc20CascadedBiQuadFilter6BiQuadC1ERKNS0_11BiQuadParamE(void);

/* Symbol: _ZN3rtc14PlatformThreadD0Ev */
/* Demangled: rtc::PlatformThread::~PlatformThread() */
int _ZN3rtc14PlatformThreadD0Ev(void);

/* Symbol: _ZN6webrtc15GainController2C1Ev */
/* Demangled: webrtc::GainController2::GainController2() */
int _ZN6webrtc15GainController2C1Ev(void);

/* Symbol: _ZN6webrtc26FixedDigitalLevelEstimator12ComputeLevelERKNS_14AudioFrameViewIKfEE */
/* Demangled: webrtc::FixedDigitalLevelEstimator::ComputeLevel(webrtc::AudioFrameView<float const> const&) */
int _ZN6webrtc26FixedDigitalLevelEstimator12ComputeLevelERKNS_14AudioFrameViewIKfEE(void);

/* Symbol: _ZN6webrtc10Subtractor16ExitInitialStateEv */
/* Demangled: webrtc::Subtractor::ExitInitialState() */
int _ZN6webrtc10Subtractor16ExitInitialStateEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_(void);

/* Symbol: _ZN6webrtc33WebRtc_CreateBinaryDelayEstimatorEPNS_26BinaryDelayEstimatorFarendEi */
/* Demangled: webrtc::WebRtc_CreateBinaryDelayEstimator(webrtc::BinaryDelayEstimatorFarend*, int) */
int _ZN6webrtc33WebRtc_CreateBinaryDelayEstimatorEPNS_26BinaryDelayEstimatorFarendEi(void);

/* Symbol: _ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_ */
/* Demangled: webrtc::MovingMoments::CalculateMoments(float const*, unsigned int, float*, float*) */
int _ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_(void);

/* Symbol: WebRtc_FreeBuffer */
/* Demangled: WebRtc_FreeBuffer */
int WebRtc_FreeBuffer(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics8DbMetricC1Efff */
/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric(float, float, float) */
int _ZN6webrtc18EchoRemoverMetrics8DbMetricC1Efff(void);

/* Symbol: _ZN6webrtc16SubtractorOutputD2Ev */
/* Demangled: webrtc::SubtractorOutput::~SubtractorOutput() */
int _ZN6webrtc16SubtractorOutputD2Ev(void);

/* Symbol: _ZN3rtc10FromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb */
/* Demangled: rtc::FromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool*) */
int _ZN3rtc10FromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect24GetDigitalComressionGainEv */
/* Demangled: webrtc::AgcManagerDirect::GetDigitalComressionGain() */
int _ZN6webrtc16AgcManagerDirect24GetDigitalComressionGainEv(void);

/* Symbol: WebRtcVad_Free */
/* Demangled: WebRtcVad_Free */
int WebRtcVad_Free(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBank8AnalysisEN3rtc9ArrayViewIKfLi480EEENS2_IKNS2_IfLin4711EEELi3EEE */
/* Demangled: webrtc::ThreeBandFilterBank::Analysis(rtc::ArrayView<float const, 480>, rtc::ArrayView<rtc::ArrayView<float, -4711> const, 3>) */
int _ZN6webrtc19ThreeBandFilterBank8AnalysisEN3rtc9ArrayViewIKfLi480EEENS2_IKNS2_IfLin4711EEELi3EEE(void);

/* Symbol: _ZN6webrtc13StandaloneVadD1Ev */
/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
int _ZN6webrtc13StandaloneVadD1Ev(void);

/* Symbol: _ZN6webrtc14FilterAnalyzerC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::FilterAnalyzer::FilterAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc14FilterAnalyzerC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc22AudioProcessingBuilder6CreateEv */
/* Demangled: webrtc::AudioProcessingBuilder::Create() */
int _ZN6webrtc22AudioProcessingBuilder6CreateEv(void);

/* Symbol: _ZN6webrtc14CircularBufferD1Ev */
/* Demangled: webrtc::CircularBuffer::~CircularBuffer() */
int _ZN6webrtc14CircularBufferD1Ev(void);

/* Symbol: _ZN6webrtc9DecimatorC1Ej */
/* Demangled: webrtc::Decimator::Decimator(unsigned int) */
int _ZN6webrtc9DecimatorC1Ej(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_ */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_(void);

/* Symbol: _ZN6webrtc13ApmDataDumperD2Ev */
/* Demangled: webrtc::ApmDataDumper::~ApmDataDumper() */
int _ZN6webrtc13ApmDataDumperD2Ev(void);

/* Symbol: _ZN6webrtc14HighPassFilter5ResetEj */
/* Demangled: webrtc::HighPassFilter::Reset(unsigned int) */
int _ZN6webrtc14HighPassFilter5ResetEj(void);

/* Symbol: _ZN6webrtc26SpeechProbabilityEstimator6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff */
/* Demangled: webrtc::SpeechProbabilityEstimator::Update(int, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, float, float) */
int _ZN6webrtc26SpeechProbabilityEstimator6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff(void);

/* Symbol: _ZN6webrtc5NrFft3FftEN3rtc9ArrayViewIfLi256EEES3_S3_ */
/* Demangled: webrtc::NrFft::Fft(rtc::ArrayView<float, 256>, rtc::ArrayView<float, 256>, rtc::ArrayView<float, 256>) */
int _ZN6webrtc5NrFft3FftEN3rtc9ArrayViewIfLi256EEES3_S3_(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD1Ev */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::~ErleInstantaneous() */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD1Ev(void);

/* Symbol: _ZN3rtc17ScopedYieldPolicyD1Ev */
/* Demangled: rtc::ScopedYieldPolicy::~ScopedYieldPolicy() */
int _ZN3rtc17ScopedYieldPolicyD1Ev(void);

/* Symbol: _ZN6webrtc31WebRtcAecm_ResetAdaptiveChannelE */
/* Demangled: webrtc::WebRtcAecm_ResetAdaptiveChannel */
extern void* _ZN6webrtc31WebRtcAecm_ResetAdaptiveChannelE;

/* Symbol: _ZN6webrtc14FilterAnalyzer5ResetEv */
/* Demangled: webrtc::FilterAnalyzer::Reset() */
int _ZN6webrtc14FilterAnalyzer5ResetEv(void);

/* Symbol: _ZZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def */
/* Demangled: webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern void* _ZZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def;

/* Symbol: _ZNSt3__16vectorINS0_IN3rtc9ArrayViewIfLin4711EEENS_9allocatorIS3_EEEENS4_IS6_EEEC2EjRKS6_ */
/* Demangled: std::__1::vector<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > >, std::__1::allocator<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > > >::vector(unsigned int, std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > const&) */
int _ZNSt3__16vectorINS0_IN3rtc9ArrayViewIfLin4711EEENS_9allocatorIS3_EEEENS4_IS6_EEEC2EjRKS6_(void);

/* Symbol: _ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_ */
/* Demangled: webrtc::SplittingFilter::ThreeBandsSynthesis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
int _ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics8DbMetric13UpdateInstantEf */
/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::UpdateInstant(float) */
int _ZN6webrtc18EchoRemoverMetrics8DbMetric13UpdateInstantEf(void);

/* Symbol: _ZNK6webrtc21FieldTrialConstrainedIiEptEv */
/* Demangled: webrtc::FieldTrialConstrained<int>::operator->() const */
int _ZNK6webrtc21FieldTrialConstrainedIiEptEv(void);

/* Symbol: _ZN3rtc10LogMessage8streams_E */
/* Demangled: rtc::LogMessage::streams_ */
extern void* _ZN3rtc10LogMessage8streams_E;

/* Symbol: _Z14Effect_ReleaseP16preproc_effect_s */
/* Demangled: Effect_Release(preproc_effect_s*) */
int _Z14Effect_ReleaseP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ERKS1_ */
/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ERKS1_(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIdE11GetOptionalEv */
/* Demangled: webrtc::FieldTrialOptional<double>::GetOptional() const */
int _ZNK6webrtc18FieldTrialOptionalIdE11GetOptionalEv(void);

/* Symbol: _ZN3rtc8ToStringEPKv */
/* Demangled: rtc::ToString(void const*) */
int _ZN3rtc8ToStringEPKv(void);

/* Symbol: _ZN6webrtc17TransientDetectorC1Ei */
/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
int _ZN6webrtc17TransientDetectorC1Ei(void);

/* Symbol: _Z11Effect_InitP16preproc_effect_sj */
/* Demangled: Effect_Init(preproc_effect_s*, unsigned int) */
int _Z11Effect_InitP16preproc_effect_sj(void);

/* Symbol: _ZN6webrtc13MatchedFilterC2EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff */
/* Demangled: webrtc::MatchedFilter::MatchedFilter(webrtc::ApmDataDumper*, webrtc::Aec3Optimization, unsigned int, unsigned int, int, unsigned int, float, float, float) */
int _ZN6webrtc13MatchedFilterC2EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates33CaptureMultiBandProcessingPresentEv */
/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureMultiBandProcessingPresent() const */
int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates33CaptureMultiBandProcessingPresentEv(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIiEcvbEv */
/* Demangled: webrtc::FieldTrialOptional<int>::operator bool() const */
int _ZNK6webrtc18FieldTrialOptionalIiEcvbEv(void);

/* Symbol: _Z15AgcSetParameterP16preproc_effect_sPvS1_ */
/* Demangled: AgcSetParameter(preproc_effect_s*, void*, void*) */
int _Z15AgcSetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: _ZN6webrtc12ErlEstimatorD1Ev */
/* Demangled: webrtc::ErlEstimator::~ErlEstimator() */
int _ZN6webrtc12ErlEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetricsC2Ev */
/* Demangled: webrtc::EchoRemoverMetrics::EchoRemoverMetrics() */
int _ZN6webrtc18EchoRemoverMetricsC2Ev(void);

/* Symbol: _ZN6webrtc17LoudnessHistogramD1Ev */
/* Demangled: webrtc::LoudnessHistogram::~LoudnessHistogram() */
int _ZN6webrtc17LoudnessHistogramD1Ev(void);

/* Symbol: _ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E */
/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2 const&) */
int _ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E(void);

/* Symbol: _ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: webrtc::metrics::HistogramFactoryGetEnumeration(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
int _ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: WebRtcSpl_SqrtLocal */
/* Demangled: WebRtcSpl_SqrtLocal */
int WebRtcSpl_SqrtLocal(void);

/* Symbol: _ZN6webrtc10SubtractorD1Ev */
/* Demangled: webrtc::Subtractor::~Subtractor() */
int _ZN6webrtc10SubtractorD1Ev(void);

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnumC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE */
/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> > >) */
int _ZN6webrtc22AbstractFieldTrialEnumC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE(void);

/* Symbol: WebRtcIsac_PitchfilterPre_gains */
/* Demangled: WebRtcIsac_PitchfilterPre_gains */
int WebRtcIsac_PitchfilterPre_gains(void);

/* Symbol: _ZN6webrtc10FloatToS16EPKfjPs */
/* Demangled: webrtc::FloatToS16(float const*, unsigned int, short*) */
int _ZN6webrtc10FloatToS16EPKfjPs(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE */
/* Demangled: webrtc::FullBandErleEstimator::Update(rtc::ArrayView<float const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN6webrtc21FullBandErleEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimatorC2ERKNS_20EchoCanceller3Config4ErleEj */
/* Demangled: webrtc::FullBandErleEstimator::FullBandErleEstimator(webrtc::EchoCanceller3Config::Erle const&, unsigned int) */
int _ZN6webrtc21FullBandErleEstimatorC2ERKNS_20EchoCanceller3Config4ErleEj(void);

/* Symbol: _ZN6webrtc20RenderSignalAnalyzerC2ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::RenderSignalAnalyzer::RenderSignalAnalyzer(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc20RenderSignalAnalyzerC2ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN3rtc8TimeDiffExx */
/* Demangled: rtc::TimeDiff(long long, long long) */
int _ZN3rtc8TimeDiffExx(void);

/* Symbol: PreProcessingLib_GetDescriptor */
/* Demangled: PreProcessingLib_GetDescriptor */
int PreProcessingLib_GetDescriptor(void);

/* Symbol: _Z8Agc2InitP16preproc_effect_s */
/* Demangled: Agc2Init(preproc_effect_s*) */
int _Z8Agc2InitP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector6DetectEN3rtc9ArrayViewIKfLin4711EEERKNS0_12FilterRegionENS3_IKNSt3__16vectorIfNS9_9allocatorIfEEEELin4711EEEji */
/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::Detect(rtc::ArrayView<float const, -4711>, webrtc::FilterAnalyzer::FilterRegion const&, rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, unsigned int, int) */
int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector6DetectEN3rtc9ArrayViewIKfLin4711EEERKNS0_12FilterRegionENS3_IKNSt3__16vectorIfNS9_9allocatorIfEEEELin4711EEEji(void);

/* Symbol: _ZN6webrtc16SignalClassifierD1Ev */
/* Demangled: webrtc::SignalClassifier::~SignalClassifier() */
int _ZN6webrtc16SignalClassifierD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl27UpdateActiveSubmoduleStatesEv */
/* Demangled: webrtc::AudioProcessingImpl::UpdateActiveSubmoduleStates() */
int _ZN6webrtc19AudioProcessingImpl27UpdateActiveSubmoduleStatesEv(void);

/* Symbol: _ZN3rtc10LogMessage17FinishPrintStreamEv */
/* Demangled: rtc::LogMessage::FinishPrintStream() */
int _ZN3rtc10LogMessage17FinishPrintStreamEv(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ERKS2_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ERKS2_(void);

/* Symbol: WebRtcSpl_ResetResample22khzTo16khz */
/* Demangled: WebRtcSpl_ResetResample22khzTo16khz */
int WebRtcSpl_ResetResample22khzTo16khz(void);

/* Symbol: _ZN6webrtc14HighPassFilter5ResetEv */
/* Demangled: webrtc::HighPassFilter::Reset() */
int _ZN6webrtc14HighPassFilter5ResetEv(void);

/* Symbol: _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEENS5_INS_21RenderDelayControllerENS7_ISA_EEEENS5_INS_11EchoRemoverENS7_ISD_EEEE */
/* Demangled: webrtc::BlockProcessor::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::RenderDelayBuffer, std::__1::default_delete<webrtc::RenderDelayBuffer> >, std::__1::unique_ptr<webrtc::RenderDelayController, std::__1::default_delete<webrtc::RenderDelayController> >, std::__1::unique_ptr<webrtc::EchoRemover, std::__1::default_delete<webrtc::EchoRemover> >) */
int _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEENS5_INS_21RenderDelayControllerENS7_ISA_EEEENS5_INS_11EchoRemoverENS7_ISD_EEEE(void);

/* Symbol: _ZN6webrtc20RenderSignalAnalyzer6UpdateERKNS_12RenderBufferERKNSt3__18optionalIjEE */
/* Demangled: webrtc::RenderSignalAnalyzer::Update(webrtc::RenderBuffer const&, std::__1::optional<unsigned int> const&) */
int _ZN6webrtc20RenderSignalAnalyzer6UpdateERKNS_12RenderBufferERKNSt3__18optionalIjEE(void);

/* Symbol: _ZN6webrtc7MonoAgc10InitializeEv */
/* Demangled: webrtc::MonoAgc::Initialize() */
int _ZN6webrtc7MonoAgc10InitializeEv(void);

/* Symbol: _ZNK6webrtc5Pffft11FloatBuffer12GetConstViewEv */
/* Demangled: webrtc::Pffft::FloatBuffer::GetConstView() const */
int _ZNK6webrtc5Pffft11FloatBuffer12GetConstViewEv(void);

/* Symbol: _ZN6webrtc9FftBufferC2Ejj */
/* Demangled: webrtc::FftBuffer::FftBuffer(unsigned int, unsigned int) */
int _ZN6webrtc9FftBufferC2Ejj(void);

/* Symbol: _ZN3rtc10LogMessage14log_to_stderr_E */
/* Demangled: rtc::LogMessage::log_to_stderr_ */
extern void* _ZN3rtc10LogMessage14log_to_stderr_E;

/* Symbol: _ZN6webrtc14WebRtcAgc_InitEPviisj */
/* Demangled: webrtc::WebRtcAgc_Init(void*, int, int, short, unsigned int) */
int _ZN6webrtc14WebRtcAgc_InitEPviisj(void);

/* Symbol: WebRtcVad_CalcVad32khz */
/* Demangled: WebRtcVad_CalcVad32khz */
int WebRtcVad_CalcVad32khz(void);

/* Symbol: _ZN6webrtc11ReverbModel12UpdateReverbEN3rtc9ArrayViewIKfLin4711EEES4_f */
/* Demangled: webrtc::ReverbModel::UpdateReverb(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, float) */
int _ZN6webrtc11ReverbModel12UpdateReverbEN3rtc9ArrayViewIKfLin4711EEES4_f(void);

/* Symbol: _ZN3rtc7tracing19StopInternalCaptureEv */
/* Demangled: rtc::tracing::StopInternalCapture() */
int _ZN3rtc7tracing19StopInternalCaptureEv(void);

/* Symbol: WebRtcSpl_MinValueW32 */
/* Demangled: WebRtcSpl_MinValueW32 */
extern void* WebRtcSpl_MinValueW32;

/* Symbol: _ZN6webrtc15SplittingFilterD2Ev */
/* Demangled: webrtc::SplittingFilter::~SplittingFilter() */
int _ZN6webrtc15SplittingFilterD2Ev(void);

/* Symbol: _ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor18ComputeVariabilityEv */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::ComputeVariability() const */
int _ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor18ComputeVariabilityEv(void);

/* Symbol: sEffectInterface */
/* Demangled: sEffectInterface */
extern void* sEffectInterface;

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnumC2ERKS0_ */
/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(webrtc::AbstractFieldTrialEnum const&) */
int _ZN6webrtc22AbstractFieldTrialEnumC2ERKS0_(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIiEdeEv */
/* Demangled: webrtc::FieldTrialOptional<int>::operator*() const */
int _ZNK6webrtc18FieldTrialOptionalIiEdeEv(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIbE3GetEv */
/* Demangled: webrtc::FieldTrialParameter<bool>::Get() const */
int _ZNK6webrtc19FieldTrialParameterIbE3GetEv(void);

/* Symbol: _ZN6webrtc20ResidualEchoDetector10InitializeEiiii */
/* Demangled: webrtc::ResidualEchoDetector::Initialize(int, int, int, int) */
int _ZN6webrtc20ResidualEchoDetector10InitializeEiiii(void);

/* Symbol: _ZN6webrtc21VoiceActivityDetectorD1Ev */
/* Demangled: webrtc::VoiceActivityDetector::~VoiceActivityDetector() */
int _ZN6webrtc21VoiceActivityDetectorD1Ev(void);

/* Symbol: _ZN6webrtc16BlockDelayBufferC2Ejjjj */
/* Demangled: webrtc::BlockDelayBuffer::BlockDelayBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc16BlockDelayBufferC2Ejjjj(void);

/* Symbol: _ZN6webrtc11BlockFramerD1Ev */
/* Demangled: webrtc::BlockFramer::~BlockFramer() */
int _ZN6webrtc11BlockFramerD1Ev(void);

/* Symbol: _ZN6webrtc7MonoAgc16UpdateCompressorEv */
/* Demangled: webrtc::MonoAgc::UpdateCompressor() */
int _ZN6webrtc7MonoAgc16UpdateCompressorEv(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIiE5ValueEv */
/* Demangled: webrtc::FieldTrialOptional<int>::Value() const */
int _ZNK6webrtc18FieldTrialOptionalIiE5ValueEv(void);

/* Symbol: _ZN6webrtc14EchoCanceller319CreateDefaultConfigEjj */
/* Demangled: webrtc::EchoCanceller3::CreateDefaultConfig(unsigned int, unsigned int) */
int _ZN6webrtc14EchoCanceller319CreateDefaultConfigEjj(void);

/* Symbol: _ZNK6webrtc8OouraFft10InverseFftEPf */
/* Demangled: webrtc::OouraFft::InverseFft(float*) const */
int _ZNK6webrtc8OouraFft10InverseFftEPf(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram26InsertNewestEntryAndUpdateEii */
/* Demangled: webrtc::LoudnessHistogram::InsertNewestEntryAndUpdate(int, int) */
int _ZN6webrtc17LoudnessHistogram26InsertNewestEntryAndUpdateEii(void);

/* Symbol: _ZN6webrtc13GetRightAlignEPKvj */
/* Demangled: webrtc::GetRightAlign(void const*, unsigned int) */
int _ZN6webrtc13GetRightAlignEPKvj(void);

/* Symbol: _ZN6webrtc13PushResamplerIfE18InitializeIfNeededEiij */
/* Demangled: webrtc::PushResampler<float>::InitializeIfNeeded(int, int, unsigned int) */
int _ZN6webrtc13PushResamplerIfE18InitializeIfNeededEiij(void);

/* Symbol: _ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst */
/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
int _ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst(void);

/* Symbol: _ZN6webrtc22SubbandNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b */
/* Demangled: webrtc::SubbandNearendDetector::Update(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, bool) */
int _ZN6webrtc22SubbandNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b(void);

/* Symbol: _ZN6webrtc12BiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE */
/* Demangled: webrtc::BiQuadFilter::Process(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc12BiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKsRKNS_12StreamConfigES5_Ps */
/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(short const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, short*) */
int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKsRKNS_12StreamConfigES5_Ps(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv */
/* Demangled: webrtc::AudioProcessingImpl::proc_split_sample_rate_hz() const */
int _ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv(void);

/* Symbol: _ZN6webrtc15NoiseSuppressorC1ERKNS_8NsConfigEjj */
/* Demangled: webrtc::NoiseSuppressor::NoiseSuppressor(webrtc::NsConfig const&, unsigned int, unsigned int) */
int _ZN6webrtc15NoiseSuppressorC1ERKNS_8NsConfigEjj(void);

/* Symbol: _ZN6webrtc16SignalClassifier13FrameExtender11ExtendFrameEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE */
/* Demangled: webrtc::SignalClassifier::FrameExtender::ExtendFrame(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc16SignalClassifier13FrameExtender11ExtendFrameEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc21MeanVarianceEstimator5ClearEv */
/* Demangled: webrtc::MeanVarianceEstimator::Clear() */
int _ZN6webrtc21MeanVarianceEstimator5ClearEv(void);

/* Symbol: _ZNK6webrtc19SaturationProtector17DebugDumpEstimateEv */
/* Demangled: webrtc::SaturationProtector::DebugDumpEstimate() const */
int _ZNK6webrtc19SaturationProtector17DebugDumpEstimateEv(void);

/* Symbol: _ZN6webrtc8AecState6UpdateERKNSt3__18optionalINS_13DelayEstimateEEEN3rtc9ArrayViewIKNS1_6vectorINS1_5arrayIfLj65EEENS1_9allocatorISB_EEEELin4711EEENS8_IKNS9_IfNSC_IfEEEELin4711EEERKNS_12RenderBufferENS8_IKSB_Lin4711EEESP_NS8_IKNS_16SubtractorOutputELin4711EEE */
/* Demangled: webrtc::AecState::Update(std::__1::optional<webrtc::DelayEstimate> const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<webrtc::SubtractorOutput const, -4711>) */
int _ZN6webrtc8AecState6UpdateERKNSt3__18optionalINS_13DelayEstimateEEEN3rtc9ArrayViewIKNS1_6vectorINS1_5arrayIfLj65EEENS1_9allocatorISB_EEEELin4711EEENS8_IKNS9_IfNSC_IfEEEELin4711EEERKNS_12RenderBufferENS8_IKSB_Lin4711EEESP_NS8_IKNS_16SubtractorOutputELin4711EEE(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEESA_SB_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEESA_SB_EEEvDpRKT_E1t;

/* Symbol: _ZN3rtc10LogMessage14SetLogToStderrEb */
/* Demangled: rtc::LogMessage::SetLogToStderr(bool) */
int _ZN3rtc10LogMessage14SetLogToStderrEb(void);

/* Symbol: _ZN6webrtc7rnn_vad19GatedRecurrentLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE */
/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::GatedRecurrentLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, webrtc::rnn_vad::Optimization) */
int _ZN6webrtc7rnn_vad19GatedRecurrentLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1Efff */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(float, float, float) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1Efff(void);

/* Symbol: _ZN6webrtc11AudioBufferD2Ev */
/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
int _ZN6webrtc11AudioBufferD2Ev(void);

/* Symbol: _ZN6webrtc7Aec3FftC2Ev */
/* Demangled: webrtc::Aec3Fft::Aec3Fft() */
int _ZN6webrtc7Aec3FftC2Ev(void);

/* Symbol: _ZN6webrtc13MatchedFilterC1EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff */
/* Demangled: webrtc::MatchedFilter::MatchedFilter(webrtc::ApmDataDumper*, webrtc::Aec3Optimization, unsigned int, unsigned int, int, unsigned int, float, float, float) */
int _ZN6webrtc13MatchedFilterC1EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIiE11GetOptionalEv */
/* Demangled: webrtc::FieldTrialOptional<int>::GetOptional() const */
int _ZNK6webrtc18FieldTrialOptionalIiE11GetOptionalEv(void);

/* Symbol: _ZN3rtc26TimestampWrapAroundHandler6UnwrapEj */
/* Demangled: rtc::TimestampWrapAroundHandler::Unwrap(unsigned int) */
int _ZN3rtc26TimestampWrapAroundHandler6UnwrapEj(void);

/* Symbol: _Z8NsEnableP16preproc_effect_s */
/* Demangled: NsEnable(preproc_effect_s*) */
int _Z8NsEnableP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc15GainControlImpl23set_stream_analog_levelEi */
/* Demangled: webrtc::GainControlImpl::set_stream_analog_level(int) */
int _ZN6webrtc15GainControlImpl23set_stream_analog_levelEi(void);

/* Symbol: _ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd */
/* Demangled: webrtc::PitchBasedVad::VoicingProbability(AudioFeatures const&, double*) */
int _ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd(void);

/* Symbol: _ZN6webrtc18ClockdriftDetectorD1Ev */
/* Demangled: webrtc::ClockdriftDetector::~ClockdriftDetector() */
int _ZN6webrtc18ClockdriftDetectorD1Ev(void);

/* Symbol: WebRtcVad_set_mode */
/* Demangled: WebRtcVad_set_mode */
int WebRtcVad_set_mode(void);

/* Symbol: WebRtcSpl_MaxAbsValueW32Neon */
/* Demangled: WebRtcSpl_MaxAbsValueW32Neon */
int WebRtcSpl_MaxAbsValueW32Neon(void);

/* Symbol: _ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_ */
/* Demangled: webrtc::SplittingFilter::TwoBandsSynthesis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
int _ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_(void);

/* Symbol: _ZN6webrtc4aec317MatchedFilterCoreEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf */
/* Demangled: webrtc::aec3::MatchedFilterCore(unsigned int, float, float, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>, bool*, float*) */
int _ZN6webrtc4aec317MatchedFilterCoreEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf(void);

/* Symbol: _ZN6webrtc22ParseOptionalParameterIjEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<std::__1::optional<unsigned int> > webrtc::ParseOptionalParameter<unsigned int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc22ParseOptionalParameterIjEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _Z15AgcGetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: AgcGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z15AgcGetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC2Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::ApmCaptureState() */
int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC2Ev(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator13AnalyzeFilterEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::ReverbDecayEstimator::AnalyzeFilter(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc20ReverbDecayEstimator13AnalyzeFilterEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _Z16Agc2GetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: Agc2GetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z16Agc2GetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _ZN6webrtc21ComfortNoiseGeneratorC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj */
/* Demangled: webrtc::ComfortNoiseGenerator::ComfortNoiseGenerator(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, unsigned int) */
int _ZN6webrtc21ComfortNoiseGeneratorC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimatorD1Ev */
/* Demangled: webrtc::SubbandErleEstimator::~SubbandErleEstimator() */
int _ZN6webrtc20SubbandErleEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous5ResetEv */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::Reset() */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous5ResetEv(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimatorD2Ev */
/* Demangled: webrtc::FullBandErleEstimator::~FullBandErleEstimator() */
int _ZN6webrtc21FullBandErleEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimator5ResetEv */
/* Demangled: webrtc::ResidualEchoEstimator::Reset() */
int _ZN6webrtc21ResidualEchoEstimator5ResetEv(void);

/* Symbol: pffft_simd_size */
/* Demangled: pffft_simd_size */
int pffft_simd_size(void);

/* Symbol: _Z17Session_SetConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_SetConfig(preproc_session_s*, effect_config_s*) */
int _Z17Session_SetConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: WebRtcSpl_Resample48khzTo16khz */
/* Demangled: WebRtcSpl_Resample48khzTo16khz */
int WebRtcSpl_Resample48khzTo16khz(void);

/* Symbol: _ZN6webrtc28WebRtcAgc_AddFarendToDigitalEPNS_10DigitalAgcEPKsj */
/* Demangled: webrtc::WebRtcAgc_AddFarendToDigital(webrtc::DigitalAgc*, short const*, unsigned int) */
int _ZN6webrtc28WebRtcAgc_AddFarendToDigitalEPNS_10DigitalAgcEPKsj(void);

/* Symbol: _ZN6webrtc14HighPassFilter7ProcessEPNSt3__16vectorINS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEE */
/* Demangled: webrtc::HighPassFilter::Process(std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*) */
int _ZN6webrtc14HighPassFilter7ProcessEPNSt3__16vectorINS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEE(void);

/* Symbol: _ZN6webrtc11BlockBufferC2Ejjjj */
/* Demangled: webrtc::BlockBuffer::BlockBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6webrtc11BlockBufferC2Ejjjj(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIbEcvbEv */
/* Demangled: webrtc::FieldTrialParameter<bool>::operator bool() const */
int _ZNK6webrtc19FieldTrialParameterIbEcvbEv(void);

/* Symbol: _ZN6webrtc16SignalClassifier13FrameExtenderC1Ejj */
/* Demangled: webrtc::SignalClassifier::FrameExtender::FrameExtender(unsigned int, unsigned int) */
int _ZN6webrtc16SignalClassifier13FrameExtenderC1Ejj(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImplD1Ev */
/* Demangled: webrtc::TransientSuppressorImpl::~TransientSuppressorImpl() */
int _ZN6webrtc23TransientSuppressorImplD1Ev(void);

/* Symbol: _Z22Session_SetProcEnabledP17preproc_session_sjb */
/* Demangled: Session_SetProcEnabled(preproc_session_s*, unsigned int, bool) */
int _Z22Session_SetProcEnabledP17preproc_session_sjb(void);

/* Symbol: _ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2::LevelEstimator, bool, float) */
int _ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf(void);

/* Symbol: _ZN6webrtc7rnn_vad18DetectOptimizationEv */
/* Demangled: webrtc::rnn_vad::DetectOptimization() */
int _ZN6webrtc7rnn_vad18DetectOptimizationEv(void);

/* Symbol: _ZN6webrtc14AlignmentMixer13SelectChannelEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE */
/* Demangled: webrtc::AlignmentMixer::SelectChannel(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>) */
int _ZN6webrtc14AlignmentMixer13SelectChannelEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE(void);

/* Symbol: _ZN6webrtc16SubtractorOutput14ComputeMetricsEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::SubtractorOutput::ComputeMetrics(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc16SubtractorOutput14ComputeMetricsEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _ZN6webrtc29AdaptiveModeLevelEstimatorAgc5ResetEv */
/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::Reset() */
int _ZN6webrtc29AdaptiveModeLevelEstimatorAgc5ResetEv(void);

/* Symbol: _ZN3rtc8internal16RaceCheckerScopeC2EPKNS_11RaceCheckerE */
/* Demangled: rtc::internal::RaceCheckerScope::RaceCheckerScope(rtc::RaceChecker const*) */
int _ZN3rtc8internal16RaceCheckerScopeC2EPKNS_11RaceCheckerE(void);

/* Symbol: _ZN6webrtc33WebRtcAecm_CalcLinearEnergiesNeonEPNS_8AecmCoreEPKtPiPjS5_S5_ */
/* Demangled: webrtc::WebRtcAecm_CalcLinearEnergiesNeon(webrtc::AecmCore*, unsigned short const*, int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN6webrtc33WebRtcAecm_CalcLinearEnergiesNeonEPNS_8AecmCoreEPKtPiPjS5_S5_(void);

/* Symbol: _ZN6webrtc16PriorSignalModelC2Ef */
/* Demangled: webrtc::PriorSignalModel::PriorSignalModel(float) */
int _ZN6webrtc16PriorSignalModelC2Ef(void);

/* Symbol: _ZN6webrtc28FieldTrialParameterInterfaceC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialParameterInterface::FieldTrialParameterInterface(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc28FieldTrialParameterInterfaceC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc22ParseOptionalParameterIdEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<std::__1::optional<double> > webrtc::ParseOptionalParameter<double>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc22ParseOptionalParameterIdEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7rnnoise18kInputDenseWeightsE */
/* Demangled: rnnoise::kInputDenseWeights */
extern void* _ZN7rnnoise18kInputDenseWeightsE;

/* Symbol: _ZN6webrtc15GainControlImpl17instance_counter_E */
/* Demangled: webrtc::GainControlImpl::instance_counter_ */
extern void* _ZN6webrtc15GainControlImpl17instance_counter_E;

/* Symbol: _ZN6webrtc20EchoCanceller3Config9EchoModelC2ERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel(webrtc::EchoCanceller3Config::EchoModel const&) */
int _ZN6webrtc20EchoCanceller3Config9EchoModelC2ERKS1_(void);

/* Symbol: _ZN6webrtc15NoiseSuppressor7ProcessEPNS_11AudioBufferE */
/* Demangled: webrtc::NoiseSuppressor::Process(webrtc::AudioBuffer*) */
int _ZN6webrtc15NoiseSuppressor7ProcessEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc14VoiceDetectionD2Ev */
/* Demangled: webrtc::VoiceDetection::~VoiceDetection() */
int _ZN6webrtc14VoiceDetectionD2Ev(void);

/* Symbol: _ZN6webrtc39WebRtc_CreateBinaryDelayEstimatorFarendEi */
/* Demangled: webrtc::WebRtc_CreateBinaryDelayEstimatorFarend(int) */
int _ZN6webrtc39WebRtc_CreateBinaryDelayEstimatorFarendEi(void);

/* Symbol: _ZN6webrtc17VadCircularBufferC1Ei */
/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
int _ZN6webrtc17VadCircularBufferC1Ei(void);

/* Symbol: _ZN6webrtc11SignalModelC1Ev */
/* Demangled: webrtc::SignalModel::SignalModel() */
int _ZN6webrtc11SignalModelC1Ev(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigC2EOS0_ */
/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig&&) */
int _ZN6webrtc17InternalAPMConfigC2EOS0_(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc18FieldTrialOptionalIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZN6webrtc26FixedDigitalLevelEstimatorC1EjPNS_13ApmDataDumperE */
/* Demangled: webrtc::FixedDigitalLevelEstimator::FixedDigitalLevelEstimator(unsigned int, webrtc::ApmDataDumper*) */
int _ZN6webrtc26FixedDigitalLevelEstimatorC1EjPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBank9SynthesisEN3rtc9ArrayViewIKNS2_IfLin4711EEELi3EEENS2_IfLi480EEE */
/* Demangled: webrtc::ThreeBandFilterBank::Synthesis(rtc::ArrayView<rtc::ArrayView<float, -4711> const, 3>, rtc::ArrayView<float, 480>) */
int _ZN6webrtc19ThreeBandFilterBank9SynthesisEN3rtc9ArrayViewIKNS2_IfLin4711EEELi3EEENS2_IfLi480EEE(void);

/* Symbol: _ZN6webrtc8OouraFftD1Ev */
/* Demangled: webrtc::OouraFft::~OouraFft() */
int _ZN6webrtc8OouraFftD1Ev(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEdeEv */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator*() const */
int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEdeEv(void);

/* Symbol: _ZTVN6webrtc14FieldTrialFlagE */
/* Demangled: vtable for webrtc::FieldTrialFlag */
extern void* _ZTVN6webrtc14FieldTrialFlagE;

/* Symbol: _ZN3rtc19webrtc_logging_impl3LogEPKNS0_10LogArgTypeEz */
/* Demangled: rtc::webrtc_logging_impl::Log(rtc::webrtc_logging_impl::LogArgType const*, ...) */
int _ZN3rtc19webrtc_logging_impl3LogEPKNS0_10LogArgTypeEz(void);

/* Symbol: _ZN6webrtc13PushResamplerIsE8ResampleEPKsjPsj */
/* Demangled: webrtc::PushResampler<short>::Resample(short const*, unsigned int, short*, unsigned int) */
int _ZN6webrtc13PushResamplerIsE8ResampleEPKsjPsj(void);

/* Symbol: _ZN6webrtc22SubbandNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj */
/* Demangled: webrtc::SubbandNearendDetector::SubbandNearendDetector(webrtc::EchoCanceller3Config::Suppressor::SubbandNearendDetection const&, unsigned int) */
int _ZN6webrtc22SubbandNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj(void);

/* Symbol: _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor5ResetEv */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::Reset() */
int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor5ResetEv(void);

/* Symbol: _ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE */
/* Demangled: webrtc::GainControlImpl::set_mode(webrtc::GainControl::Mode) */
int _ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE(void);

/* Symbol: _ZN6webrtc20ReverbModelEstimatorC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::ReverbModelEstimator::ReverbModelEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc20ReverbModelEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc13FIRFilterNEONC2EPKfjj */
/* Demangled: webrtc::FIRFilterNEON::FIRFilterNEON(float const*, unsigned int, unsigned int) */
int _ZN6webrtc13FIRFilterNEONC2EPKfjj(void);

/* Symbol: _ZN6webrtc26MatchedFilterLagAggregator5ResetEb */
/* Demangled: webrtc::MatchedFilterLagAggregator::Reset(bool) */
int _ZN6webrtc26MatchedFilterLagAggregator5ResetEb(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD2Ev */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::~EarlyReverbLengthEstimator() */
int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE */
/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<double>) */
int _ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE(void);

/* Symbol: _ZN3rtc10LogMessage13GetLogToDebugEv */
/* Demangled: rtc::LogMessage::GetLogToDebug() */
int _ZN3rtc10LogMessage13GetLogToDebugEv(void);

/* Symbol: _ZN3rtc8ToStringENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: rtc::ToString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN3rtc8ToStringENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl15SoftRestorationEPf */
/* Demangled: webrtc::TransientSuppressorImpl::SoftRestoration(float*) */
int _ZN6webrtc23TransientSuppressorImpl15SoftRestorationEPf(void);

/* Symbol: _ZN6webrtc4aec315AdaptPartitionsERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE */
/* Demangled: webrtc::aec3::AdaptPartitions(webrtc::RenderBuffer const&, webrtc::FftData const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > >*) */
int _ZN6webrtc4aec315AdaptPartitionsERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer16UpdateFilterGainEN3rtc9ArrayViewIKfLin4711EEEPNS0_19FilterAnalysisStateE */
/* Demangled: webrtc::FilterAnalyzer::UpdateFilterGain(rtc::ArrayView<float const, -4711>, webrtc::FilterAnalyzer::FilterAnalysisState*) */
int _ZN6webrtc14FilterAnalyzer16UpdateFilterGainEN3rtc9ArrayViewIKfLin4711EEEPNS0_19FilterAnalysisStateE(void);

/* Symbol: _ZN6webrtc22AudioProcessingBuilderD2Ev */
/* Demangled: webrtc::AudioProcessingBuilder::~AudioProcessingBuilder() */
int _ZN6webrtc22AudioProcessingBuilderD2Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl19AllocateRenderQueueEv */
/* Demangled: webrtc::AudioProcessingImpl::AllocateRenderQueue() */
int _ZN6webrtc19AudioProcessingImpl19AllocateRenderQueueEv(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_SB_SA_SB_SA_SB_SA_SB_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_SB_SA_SB_SA_SB_SA_SB_EEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc25WebRtc_FreeDelayEstimatorEPv */
/* Demangled: webrtc::WebRtc_FreeDelayEstimator(void*) */
int _ZN6webrtc25WebRtc_FreeDelayEstimatorEPv(void);

/* Symbol: _ZN6webrtc9Resampler5ResetEiij */
/* Demangled: webrtc::Resampler::Reset(int, int, unsigned int) */
int _ZN6webrtc9Resampler5ResetEiij(void);

/* Symbol: _ZN6webrtc8AecState11FilterDelayC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::AecState::FilterDelay::FilterDelay(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc8AecState11FilterDelayC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc21ComfortNoiseGeneratorC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj */
/* Demangled: webrtc::ComfortNoiseGenerator::ComfortNoiseGenerator(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, unsigned int) */
int _ZN6webrtc21ComfortNoiseGeneratorC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj(void);

/* Symbol: _ZTVN6webrtc19FieldTrialParameterIiEE */
/* Demangled: vtable for webrtc::FieldTrialParameter<int> */
extern void* _ZTVN6webrtc19FieldTrialParameterIiEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZN6webrtc7rnn_vad11RnnBasedVad5ResetEv */
/* Demangled: webrtc::rnn_vad::RnnBasedVad::Reset() */
int _ZN6webrtc7rnn_vad11RnnBasedVad5ResetEv(void);

/* Symbol: _ZN6webrtc7WPDTreeC1EjPKfS2_ji */
/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
int _ZN6webrtc7WPDTreeC1EjPKfS2_ji(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl30InitializeResidualEchoDetectorEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializeResidualEchoDetector() */
int _ZN6webrtc19AudioProcessingImpl30InitializeResidualEchoDetectorEv(void);

/* Symbol: _ZN6webrtc11field_trial23MergeFieldTrialsStringsEPKcS2_ */
/* Demangled: webrtc::field_trial::MergeFieldTrialsStrings(char const*, char const*) */
int _ZN6webrtc11field_trial23MergeFieldTrialsStringsEPKcS2_(void);

/* Symbol: _ZN6webrtc27WebRtcAecm_InitEchoPathCoreEPNS_8AecmCoreEPKs */
/* Demangled: webrtc::WebRtcAecm_InitEchoPathCore(webrtc::AecmCore*, short const*) */
int _ZN6webrtc27WebRtcAecm_InitEchoPathCoreEPNS_8AecmCoreEPKs(void);

/* Symbol: _ZN6webrtc17PushSincResamplerD1Ev */
/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
int _ZN6webrtc17PushSincResamplerD1Ev(void);

/* Symbol: _ZNK6webrtc12WienerFilter27ComputeOverallScalingFactorEifff */
/* Demangled: webrtc::WienerFilter::ComputeOverallScalingFactor(int, float, float, float) const */
int _ZNK6webrtc12WienerFilter27ComputeOverallScalingFactorEifff(void);

/* Symbol: _ZN6webrtc13FloatS16ToS16EPKfjPs */
/* Demangled: webrtc::FloatS16ToS16(float const*, unsigned int, short*) */
int _ZN6webrtc13FloatS16ToS16EPKfjPs(void);

/* Symbol: _ZN6webrtc20AudioProcessingStatsD2Ev */
/* Demangled: webrtc::AudioProcessingStats::~AudioProcessingStats() */
int _ZN6webrtc20AudioProcessingStatsD2Ev(void);

/* Symbol: WebRtcSpl_Resample22khzTo16khz */
/* Demangled: WebRtcSpl_Resample22khzTo16khz */
int WebRtcSpl_Resample22khzTo16khz(void);

/* Symbol: _ZN6webrtc24WebRtcAgc_SaturationCtrlEPNS_9LegacyAgcEPhPi */
/* Demangled: webrtc::WebRtcAgc_SaturationCtrl(webrtc::LegacyAgc*, unsigned char*, int*) */
int _ZN6webrtc24WebRtcAgc_SaturationCtrlEPNS_9LegacyAgcEPhPi(void);

/* Symbol: _ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j */
/* Demangled: webrtc::PoleZeroFilter::Create(float const*, unsigned int, float const*, unsigned int) */
int _ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j(void);

/* Symbol: _ZN6webrtc22QuantileNoiseEstimatorC1Ev */
/* Demangled: webrtc::QuantileNoiseEstimator::QuantileNoiseEstimator() */
int _ZN6webrtc22QuantileNoiseEstimatorC1Ev(void);

/* Symbol: _ZN3rtc10LogMessage7thread_E */
/* Demangled: rtc::LogMessage::thread_ */
extern void* _ZN3rtc10LogMessage7thread_E;

/* Symbol: _ZN6webrtc7MonoAgc10UpdateGainEv */
/* Demangled: webrtc::MonoAgc::UpdateGain() */
int _ZN6webrtc7MonoAgc10UpdateGainEv(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<unsigned int>) */
int _ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE(void);

/* Symbol: _ZN6webrtc22NoiseSpectrumEstimatorC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::NoiseSpectrumEstimator::NoiseSpectrumEstimator(webrtc::ApmDataDumper*) */
int _ZN6webrtc22NoiseSpectrumEstimatorC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc13MovingMomentsD2Ev */
/* Demangled: webrtc::MovingMoments::~MovingMoments() */
int _ZN6webrtc13MovingMomentsD2Ev(void);

/* Symbol: _Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s */
/* Demangled: Effect_Create(preproc_effect_s*, preproc_session_s*, effect_interface_s***) */
int _Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s(void);

/* Symbol: _ZN6webrtc12VadAudioProc11ResetBufferEv */
/* Demangled: webrtc::VadAudioProc::ResetBuffer() */
int _ZN6webrtc12VadAudioProc11ResetBufferEv(void);

/* Symbol: _ZN6webrtc4aec313MovingAverageC1Ejj */
/* Demangled: webrtc::aec3::MovingAverage::MovingAverage(unsigned int, unsigned int) */
int _ZN6webrtc4aec313MovingAverageC1Ejj(void);

/* Symbol: _ZN6webrtc7MonoAgc7ProcessEPKsji */
/* Demangled: webrtc::MonoAgc::Process(short const*, unsigned int, int) */
int _ZN6webrtc7MonoAgc7ProcessEPKsji(void);

/* Symbol: _ZNK6webrtc8OouraFft11cftbsub_128EPf */
/* Demangled: webrtc::OouraFft::cftbsub_128(float*) const */
int _ZNK6webrtc8OouraFft11cftbsub_128EPf(void);

/* Symbol: _ZN6webrtc28FieldTrialParameterInterfaceD0Ev */
/* Demangled: webrtc::FieldTrialParameterInterface::~FieldTrialParameterInterface() */
int _ZN6webrtc28FieldTrialParameterInterfaceD0Ev(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIdEcvdEv */
/* Demangled: webrtc::FieldTrialParameter<double>::operator double() const */
int _ZNK6webrtc19FieldTrialParameterIdEcvdEv(void);

/* Symbol: _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES6_NS_4lessIS6_EENS4_INS_4pairIKS6_S6_EEEEEixERSA_ */
/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES6_NS_4lessIS6_EENS4_INS_4pairIKS6_S6_EEEEEixERSA_(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimatorC1ERKNS_20EchoCanceller3Config4ErleEj */
/* Demangled: webrtc::FullBandErleEstimator::FullBandErleEstimator(webrtc::EchoCanceller3Config::Erle const&, unsigned int) */
int _ZN6webrtc21FullBandErleEstimatorC1ERKNS_20EchoCanceller3Config4ErleEj(void);

/* Symbol: _ZN6webrtc20RenderSignalAnalyzerD2Ev */
/* Demangled: webrtc::RenderSignalAnalyzer::~RenderSignalAnalyzer() */
int _ZN6webrtc20RenderSignalAnalyzerD2Ev(void);

/* Symbol: _ZN6webrtc3AgcC1Ev */
/* Demangled: webrtc::Agc::Agc() */
int _ZN6webrtc3AgcC1Ev(void);

/* Symbol: _ZN6webrtc14VoiceDetection19ProcessCaptureAudioEPNS_11AudioBufferE */
/* Demangled: webrtc::VoiceDetection::ProcessCaptureAudio(webrtc::AudioBuffer*) */
int _ZN6webrtc14VoiceDetection19ProcessCaptureAudioEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc9MovingMax5ClearEv */
/* Demangled: webrtc::MovingMax::Clear() */
int _ZN6webrtc9MovingMax5ClearEv(void);

/* Symbol: WebRtcVad_FindMinimum */
/* Demangled: WebRtcVad_FindMinimum */
int WebRtcVad_FindMinimum(void);

/* Symbol: _ZN6webrtc10SubtractorC2ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE */
/* Demangled: webrtc::Subtractor::Subtractor(webrtc::EchoCanceller3Config const&, unsigned int, unsigned int, webrtc::ApmDataDumper*, webrtc::Aec3Optimization) */
int _ZN6webrtc10SubtractorC2ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE(void);

/* Symbol: _ZN3rtc25hex_decode_with_delimiterEPcjPKcjc */
/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, char const*, unsigned int, char) */
int _ZN3rtc25hex_decode_with_delimiterEPcjPKcjc(void);

/* Symbol: _Z9AgcEnableP16preproc_effect_s */
/* Demangled: AgcEnable(preproc_effect_s*) */
int _Z9AgcEnableP16preproc_effect_s(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_EEEvDpRKT_E1t;

/* Symbol: WebRtcSpl_ResetResample8khzTo48khz */
/* Demangled: WebRtcSpl_ResetResample8khzTo48khz */
int WebRtcSpl_ResetResample8khzTo48khz(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialOptional<double>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc18FieldTrialOptionalIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvS7_Ev */
/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >() const */
int _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvS7_Ev(void);

/* Symbol: _ZN6webrtc5Pffft14IsValidFftSizeEjNS0_7FftTypeE */
/* Demangled: webrtc::Pffft::IsValidFftSize(unsigned int, webrtc::Pffft::FftType) */
int _ZN6webrtc5Pffft14IsValidFftSizeEjNS0_7FftTypeE(void);

/* Symbol: _ZN6webrtc27WebRtcAecm_UpdateFarHistoryEPNS_8AecmCoreEPti */
/* Demangled: webrtc::WebRtcAecm_UpdateFarHistory(webrtc::AecmCore*, unsigned short*, int) */
int _ZN6webrtc27WebRtcAecm_UpdateFarHistoryEPNS_8AecmCoreEPti(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIfLin4711EEE */
/* Demangled: webrtc::CascadedBiQuadFilter::Process(rtc::ArrayView<float, -4711>) */
int _ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIfLin4711EEE(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous17ResetAccumulatorsEv */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::ResetAccumulators() */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous17ResetAccumulatorsEv(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE(void);

/* Symbol: _ZN3rtc19SimpleStringBuilder6AppendEPKcj */
/* Demangled: rtc::SimpleStringBuilder::Append(char const*, unsigned int) */
int _ZN3rtc19SimpleStringBuilder6AppendEPKcj(void);

/* Symbol: _ZN3rtc10TimeMillisEv */
/* Demangled: rtc::TimeMillis() */
int _ZN3rtc10TimeMillisEv(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_ */
/* Demangled: webrtc::AudioProcessingImpl::Initialize(int, int, int, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout) */
int _ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_(void);

/* Symbol: WebRtcSpl_Resample8khzTo22khz */
/* Demangled: WebRtcSpl_Resample8khzTo22khz */
int WebRtcSpl_Resample8khzTo22khz(void);

/* Symbol: _ZN6webrtc12VadAudioProcC2Ev */
/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
int _ZN6webrtc12VadAudioProcC2Ev(void);

/* Symbol: _ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE */
/* Demangled: rtc::LogSink::OnLogMessage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity) */
int _ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE(void);

/* Symbol: _ZN6webrtc12VadWithLevelC2Ev */
/* Demangled: webrtc::VadWithLevel::VadWithLevel() */
int _ZN6webrtc12VadWithLevelC2Ev(void);

/* Symbol: WebRtcAecm_InitEchoPath */
/* Demangled: WebRtcAecm_InitEchoPath */
int WebRtcAecm_InitEchoPath(void);

/* Symbol: _ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijj */
/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
int _ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijj(void);

/* Symbol: _ZN6webrtc7rnn_vad11RnnBasedVadD2Ev */
/* Demangled: webrtc::rnn_vad::RnnBasedVad::~RnnBasedVad() */
int _ZN6webrtc7rnn_vad11RnnBasedVadD2Ev(void);

/* Symbol: _ZN6webrtc23TransientSuppressorImpl13UpdateBuffersEPf */
/* Demangled: webrtc::TransientSuppressorImpl::UpdateBuffers(float*) */
int _ZN6webrtc23TransientSuppressorImpl13UpdateBuffersEPf(void);

/* Symbol: _ZN6webrtc31WebRtc_FreeDelayEstimatorFarendEPv */
/* Demangled: webrtc::WebRtc_FreeDelayEstimatorFarend(void*) */
int _ZN6webrtc31WebRtc_FreeDelayEstimatorFarendEPv(void);

/* Symbol: _ZN6webrtc4aec311ApplyFilterERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_ */
/* Demangled: webrtc::aec3::ApplyFilter(webrtc::RenderBuffer const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, webrtc::FftData*) */
int _ZN6webrtc4aec311ApplyFilterERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_(void);

/* Symbol: _ZN3rtc10LogMessage6streamEv */
/* Demangled: rtc::LogMessage::stream() */
int _ZN3rtc10LogMessage6streamEv(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10SuppressorC1ERKS1_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor(webrtc::EchoCanceller3Config::Suppressor const&) */
int _ZN6webrtc20EchoCanceller3Config10SuppressorC1ERKS1_(void);

/* Symbol: _ZNK6webrtc19SaturationProtector10LastMarginEv */
/* Demangled: webrtc::SaturationProtector::LastMargin() const */
int _ZNK6webrtc19SaturationProtector10LastMarginEv(void);

/* Symbol: _ZN6webrtc19SaturationProtector13PeakEnveloperC2Ev */
/* Demangled: webrtc::SaturationProtector::PeakEnveloper::PeakEnveloper() */
int _ZN6webrtc19SaturationProtector13PeakEnveloperC2Ev(void);

/* Symbol: _ZN6webrtc23DownsampledRenderBufferD2Ev */
/* Demangled: webrtc::DownsampledRenderBuffer::~DownsampledRenderBuffer() */
int _ZN6webrtc23DownsampledRenderBufferD2Ev(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN3rtc5ToHexEi */
/* Demangled: rtc::ToHex(int) */
int _ZN3rtc5ToHexEi(void);

/* Symbol: _ZN3rtc6Time32Ev */
/* Demangled: rtc::Time32() */
int _ZN3rtc6Time32Ev(void);

/* Symbol: _ZN6webrtc24WebRtc_binary_last_delayEPNS_20BinaryDelayEstimatorE */
/* Demangled: webrtc::WebRtc_binary_last_delay(webrtc::BinaryDelayEstimator*) */
int _ZN6webrtc24WebRtc_binary_last_delayEPNS_20BinaryDelayEstimatorE(void);

/* Symbol: WebRtcSpl_Resample48khzTo8khz */
/* Demangled: WebRtcSpl_Resample48khzTo8khz */
int WebRtcSpl_Resample48khzTo8khz(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKPKfj */
/* Demangled: webrtc::AgcManagerDirect::AnalyzePreProcess(float const* const*, unsigned int) */
int _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKPKfj(void);

/* Symbol: _ZN6webrtc15cftmdl_128_neonEPf */
/* Demangled: webrtc::cftmdl_128_neon(float*) */
int _ZN6webrtc15cftmdl_128_neonEPf(void);

/* Symbol: _ZNK6webrtc7rnn_vad19GatedRecurrentLayer9GetOutputEv */
/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::GetOutput() const */
int _ZNK6webrtc7rnn_vad19GatedRecurrentLayer9GetOutputEv(void);

/* Symbol: _ZN3rtc15CurrentThreadIdEv */
/* Demangled: rtc::CurrentThreadId() */
int _ZN3rtc15CurrentThreadIdEv(void);

/* Symbol: _ZN6webrtc11GainApplierC2Ebf */
/* Demangled: webrtc::GainApplier::GainApplier(bool, float) */
int _ZN6webrtc11GainApplierC2Ebf(void);

/* Symbol: _ZN6webrtc13SincResampler8SetRatioEd */
/* Demangled: webrtc::SincResampler::SetRatio(double) */
int _ZN6webrtc13SincResampler8SetRatioEd(void);

/* Symbol: _ZN6webrtc14EchoCanceller312RenderWriterD1Ev */
/* Demangled: webrtc::EchoCanceller3::RenderWriter::~RenderWriter() */
int _ZN6webrtc14EchoCanceller312RenderWriterD1Ev(void);

/* Symbol: _ZN6webrtc36WebRtc_SoftResetBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorEi */
/* Demangled: webrtc::WebRtc_SoftResetBinaryDelayEstimator(webrtc::BinaryDelayEstimator*, int) */
int _ZN6webrtc36WebRtc_SoftResetBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorEi(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22InitializePreProcessorEv */
/* Demangled: webrtc::AudioProcessingImpl::InitializePreProcessor() */
int _ZN6webrtc19AudioProcessingImpl22InitializePreProcessorEv(void);

/* Symbol: _ZN6webrtc11field_trial24FieldTrialsStringIsValidEPKc */
/* Demangled: webrtc::field_trial::FieldTrialsStringIsValid(char const*) */
int _ZN6webrtc11field_trial24FieldTrialsStringIsValidEPKc(void);

/* Symbol: _ZN6webrtc4aec329TransformDbMetricForReportingEbfffff */
/* Demangled: webrtc::aec3::TransformDbMetricForReporting(bool, float, float, float, float, float) */
int _ZN6webrtc4aec329TransformDbMetricForReportingEbfffff(void);

/* Symbol: _ZN6webrtc11DownSamplerC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::DownSampler::DownSampler(webrtc::ApmDataDumper*) */
int _ZN6webrtc11DownSamplerC2EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc15GainControlImpl14enable_limiterEb */
/* Demangled: webrtc::GainControlImpl::enable_limiter(bool) */
int _ZN6webrtc15GainControlImpl14enable_limiterEb(void);

/* Symbol: _ZN3rtc15SystemTimeNanosEv */
/* Demangled: rtc::SystemTimeNanos() */
int _ZN3rtc15SystemTimeNanosEv(void);

/* Symbol: _ZN6webrtc7rnn_vad17FeaturesExtractorD1Ev */
/* Demangled: webrtc::rnn_vad::FeaturesExtractor::~FeaturesExtractor() */
int _ZN6webrtc7rnn_vad17FeaturesExtractorD1Ev(void);

/* Symbol: PreProcessingFx_Command */
/* Demangled: PreProcessingFx_Command */
int PreProcessingFx_Command(void);

/* Symbol: _ZN6webrtc7LimiterC1EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: webrtc::Limiter::Limiter(unsigned int, webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc7LimiterC1EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst */
/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
int _ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst(void);

/* Symbol: _ZN6webrtc12FrameBlockerD1Ev */
/* Demangled: webrtc::FrameBlocker::~FrameBlocker() */
int _ZN6webrtc12FrameBlockerD1Ev(void);

/* Symbol: _ZN6webrtc20SubbandErleEstimator6UpdateEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE */
/* Demangled: webrtc::SubbandErleEstimator::Update(rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
int _ZN6webrtc20SubbandErleEstimator6UpdateEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfRKNS_12StreamConfigE */
/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStream(float const* const*, webrtc::StreamConfig const&) */
int _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfRKNS_12StreamConfigE(void);

/* Symbol: _ZN6webrtc9ResamplerC2Ev */
/* Demangled: webrtc::Resampler::Resampler() */
int _ZN6webrtc9ResamplerC2Ev(void);

/* Symbol: _ZN6webrtc13ErleEstimatorD2Ev */
/* Demangled: webrtc::ErleEstimator::~ErleEstimator() */
int _ZN6webrtc13ErleEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterIbEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<bool> webrtc::ParseTypedParameter<bool>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterIbEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN3rtc5EventC2Ev */
/* Demangled: rtc::Event::Event() */
int _ZN3rtc5EventC2Ev(void);

/* Symbol: _ZN6webrtc24WebRtcAecm_AlignedFarendEPNS_8AecmCoreEPii */
/* Demangled: webrtc::WebRtcAecm_AlignedFarend(webrtc::AecmCore*, int*, int) */
int _ZN6webrtc24WebRtcAecm_AlignedFarendEPNS_8AecmCoreEPii(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimator8EstimateERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESD_NS8_ISB_Lin4711EEE */
/* Demangled: webrtc::ResidualEchoEstimator::Estimate(webrtc::AecState const&, webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u>, -4711>) */
int _ZN6webrtc21ResidualEchoEstimator8EstimateERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESD_NS8_ISB_Lin4711EEE(void);

/* Symbol: _ZN6webrtc35WebRtcAecm_StoreAdaptiveChannelNeonEPNS_8AecmCoreEPKtPi */
/* Demangled: webrtc::WebRtcAecm_StoreAdaptiveChannelNeon(webrtc::AecmCore*, unsigned short const*, int*) */
int _ZN6webrtc35WebRtcAecm_StoreAdaptiveChannelNeonEPNS_8AecmCoreEPKtPi(void);

/* Symbol: _ZN6webrtc11AlignedFreeEPv */
/* Demangled: webrtc::AlignedFree(void*) */
int _ZN6webrtc11AlignedFreeEPv(void);

/* Symbol: _ZN6webrtc20SignalModelEstimatorC1Ev */
/* Demangled: webrtc::SignalModelEstimator::SignalModelEstimator() */
int _ZN6webrtc20SignalModelEstimatorC1Ev(void);

/* Symbol: _ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::AddLogToStream(rtc::LogSink*, rtc::LoggingSeverity) */
int _ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE(void);

/* Symbol: _ZN6webrtc11AudioBuffer34set_downmixing_to_specific_channelEj */
/* Demangled: webrtc::AudioBuffer::set_downmixing_to_specific_channel(unsigned int) */
int _ZN6webrtc11AudioBuffer34set_downmixing_to_specific_channelEj(void);

/* Symbol: _ZN6webrtc23ReverbFrequencyResponseC1Ev */
/* Demangled: webrtc::ReverbFrequencyResponse::ReverbFrequencyResponse() */
int _ZN6webrtc23ReverbFrequencyResponseC1Ev(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterIiEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<int> webrtc::ParseTypedParameter<int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterIiEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK6webrtc7rnn_vad19FullyConnectedLayer9GetOutputEv */
/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::GetOutput() const */
int _ZNK6webrtc7rnn_vad19FullyConnectedLayer9GetOutputEv(void);

/* Symbol: _ZN3rtc14PlatformThreadC2EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE */
/* Demangled: rtc::PlatformThread::PlatformThread(void (*)(void*), void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >, rtc::ThreadPriority) */
int _ZN3rtc14PlatformThreadC2EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE(void);

/* Symbol: _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC1Ev */
/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::AutoCorrelationCalculator() */
int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC1Ev(void);

/* Symbol: _ZN6webrtc7rnn_vad19GatedRecurrentLayerD2Ev */
/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::~GatedRecurrentLayer() */
int _ZN6webrtc7rnn_vad19GatedRecurrentLayerD2Ev(void);

/* Symbol: PreProcessingLib_Release */
/* Demangled: PreProcessingLib_Release */
int PreProcessingLib_Release(void);

/* Symbol: _ZN3rtc10LogMessage16ConfigureLoggingEPKc */
/* Demangled: rtc::LogMessage::ConfigureLogging(char const*) */
int _ZN3rtc10LogMessage16ConfigureLoggingEPKc(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImplC2Ev */
/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl() */
int _ZN6webrtc21EchoControlMobileImplC2Ev(void);

/* Symbol: _ZN6webrtc11ReverbModelC1Ev */
/* Demangled: webrtc::ReverbModel::ReverbModel() */
int _ZN6webrtc11ReverbModelC1Ev(void);

/* Symbol: _ZN6webrtc6ConfigD2Ev */
/* Demangled: webrtc::Config::~Config() */
int _ZN6webrtc6ConfigD2Ev(void);

/* Symbol: _ZN6webrtc8AecState12InitialState6UpdateEbb */
/* Demangled: webrtc::AecState::InitialState::Update(bool, bool) */
int _ZN6webrtc8AecState12InitialState6UpdateEbb(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIiEptEv */
/* Demangled: webrtc::FieldTrialParameter<int>::operator->() const */
int _ZNK6webrtc19FieldTrialParameterIiEptEv(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEESA_SK_SA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEESA_SK_SA_EEEvDpRKT_E1t;

/* Symbol: _ZN6webrtc19AudioProcessingImpl22EmptyQueuedRenderAudioEv */
/* Demangled: webrtc::AudioProcessingImpl::EmptyQueuedRenderAudio() */
int _ZN6webrtc19AudioProcessingImpl22EmptyQueuedRenderAudioEv(void);

/* Symbol: WebRtcSpl_ResetResample22khzTo8khz */
/* Demangled: WebRtcSpl_ResetResample22khzTo8khz */
int WebRtcSpl_ResetResample22khzTo8khz(void);

/* Symbol: _ZTVN6webrtc11AudioBufferE */
/* Demangled: vtable for webrtc::AudioBuffer */
extern void* _ZTVN6webrtc11AudioBufferE;

/* Symbol: _ZN6webrtc20RenderSignalAnalyzerC1ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::RenderSignalAnalyzer::RenderSignalAnalyzer(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc20RenderSignalAnalyzerC1ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN6webrtc26MatchedFilterLagAggregator9AggregateEN3rtc9ArrayViewIKNS_13MatchedFilter11LagEstimateELin4711EEE */
/* Demangled: webrtc::MatchedFilterLagAggregator::Aggregate(rtc::ArrayView<webrtc::MatchedFilter::LagEstimate const, -4711>) */
int _ZN6webrtc26MatchedFilterLagAggregator9AggregateEN3rtc9ArrayViewIKNS_13MatchedFilter11LagEstimateELin4711EEE(void);

/* Symbol: _ZN6webrtc30WebRtcAecm_CalcSuppressionGainEPNS_8AecmCoreE */
/* Demangled: webrtc::WebRtcAecm_CalcSuppressionGain(webrtc::AecmCore*) */
int _ZN6webrtc30WebRtcAecm_CalcSuppressionGainEPNS_8AecmCoreE(void);

/* Symbol: _ZNK6webrtc29AdaptiveModeLevelEstimatorAgc17voice_probabilityEv */
/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::voice_probability() const */
int _ZNK6webrtc29AdaptiveModeLevelEstimatorAgc17voice_probabilityEv(void);

/* Symbol: _ZN6webrtc16AgcManagerDirect10InitializeEv */
/* Demangled: webrtc::AgcManagerDirect::Initialize() */
int _ZN6webrtc16AgcManagerDirect10InitializeEv(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer15instance_count_E */
/* Demangled: webrtc::FilterAnalyzer::instance_count_ */
extern void* _ZN6webrtc14FilterAnalyzer15instance_count_E;

/* Symbol: _ZN6webrtc19FieldTrialParameterIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE */
/* Demangled: webrtc::FieldTrialParameter<int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc19FieldTrialParameterIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void);

/* Symbol: _ZN7rnnoise26kHiddenGruRecurrentWeightsE */
/* Demangled: rnnoise::kHiddenGruRecurrentWeights */
extern void* _ZN7rnnoise26kHiddenGruRecurrentWeightsE;

/* Symbol: _ZN6webrtc17PushSincResamplerC1Ejj */
/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
int _ZN6webrtc17PushSincResamplerC1Ejj(void);

/* Symbol: _ZN6webrtc21InterpolatedGainCurveC2EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: webrtc::InterpolatedGainCurve::InterpolatedGainCurve(webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc21InterpolatedGainCurveC2EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc23DominantNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b */
/* Demangled: webrtc::DominantNearendDetector::Update(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, bool) */
int _ZN6webrtc23DominantNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b(void);

/* Symbol: _ZNK6webrtc14FieldTrialFlag3GetEv */
/* Demangled: webrtc::FieldTrialFlag::Get() const */
int _ZNK6webrtc14FieldTrialFlag3GetEv(void);

/* Symbol: _ZN6webrtc11Db2LoudnessEd */
/* Demangled: webrtc::Db2Loudness(double) */
int _ZN6webrtc11Db2LoudnessEd(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEEEEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEEEEEvDpRKT_E1t;

/* Symbol: _ZNK6webrtc11AudioBuffer22ExportSplitChannelDataEjPKPs */
/* Demangled: webrtc::AudioBuffer::ExportSplitChannelData(unsigned int, short* const*) const */
int _ZNK6webrtc11AudioBuffer22ExportSplitChannelDataEjPKPs(void);

/* Symbol: _ZN6webrtc8RmsLevelD2Ev */
/* Demangled: webrtc::RmsLevel::~RmsLevel() */
int _ZN6webrtc8RmsLevelD2Ev(void);

/* Symbol: _ZN6webrtc9Decimator8DecimateEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE */
/* Demangled: webrtc::Decimator::Decimate(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
int _ZN6webrtc9Decimator8DecimateEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc14EchoAudibilityC1Eb */
/* Demangled: webrtc::EchoAudibility::EchoAudibility(bool) */
int _ZN6webrtc14EchoAudibilityC1Eb(void);

/* Symbol: _ZN6webrtc10Subtractor28FilterMisadjustmentEstimator6UpdateERKNS_16SubtractorOutputE */
/* Demangled: webrtc::Subtractor::FilterMisadjustmentEstimator::Update(webrtc::SubtractorOutput const&) */
int _ZN6webrtc10Subtractor28FilterMisadjustmentEstimator6UpdateERKNS_16SubtractorOutputE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi */
/* Demangled: webrtc::AudioProcessingImpl::set_stream_delay_ms(int) */
int _ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi(void);

/* Symbol: _ZNK6webrtc17LoudnessHistogram12AudioContentEv */
/* Demangled: webrtc::LoudnessHistogram::AudioContent() const */
int _ZNK6webrtc17LoudnessHistogram12AudioContentEv(void);

/* Symbol: _ZN6webrtc7WPDTree6NodeAtEii */
/* Demangled: webrtc::WPDTree::NodeAt(int, int) */
int _ZN6webrtc7WPDTree6NodeAtEii(void);

/* Symbol: _ZN6webrtc11AudioBuffer8CopyFromEPKsRKNS_12StreamConfigE */
/* Demangled: webrtc::AudioBuffer::CopyFrom(short const*, webrtc::StreamConfig const&) */
int _ZN6webrtc11AudioBuffer8CopyFromEPKsRKNS_12StreamConfigE(void);

/* Symbol: _ZN6webrtc17InternalAPMConfigaSERKS0_ */
/* Demangled: webrtc::InternalAPMConfig::operator=(webrtc::InternalAPMConfig const&) */
int _ZN6webrtc17InternalAPMConfigaSERKS0_(void);

/* Symbol: _ZN6webrtc24WebRtc_AddFarSpectrumFixEPvPKtii */
/* Demangled: webrtc::WebRtc_AddFarSpectrumFix(void*, unsigned short const*, int, int) */
int _ZN6webrtc24WebRtc_AddFarSpectrumFixEPvPKtii(void);

/* Symbol: _ZNK6webrtc13SincResampler9ChunkSizeEv */
/* Demangled: webrtc::SincResampler::ChunkSize() const */
int _ZNK6webrtc13SincResampler9ChunkSizeEv(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIjE5ValueEv */
/* Demangled: webrtc::FieldTrialOptional<unsigned int>::Value() const */
int _ZNK6webrtc18FieldTrialOptionalIjE5ValueEv(void);

/* Symbol: _ZN6webrtc7rnn_vad14PitchEstimatorC1Ev */
/* Demangled: webrtc::rnn_vad::PitchEstimator::PitchEstimator() */
int _ZN6webrtc7rnn_vad14PitchEstimatorC1Ev(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl9GetConfigEv */
/* Demangled: webrtc::AudioProcessingImpl::GetConfig() const */
int _ZNK6webrtc19AudioProcessingImpl9GetConfigEv(void);

/* Symbol: _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_12CheckArgTypeE9EPKcEEEEEvS7_iS7_DpRKT_E1t */
/* Demangled: void rtc::webrtc_checks_impl::LogStreamer<>::Call<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_12CheckArgTypeE9EPKcEEEEEvS7_iS7_DpRKT_E1t;

/* Symbol: _ZN6webrtc11AudioBuffer27set_downmixing_by_averagingEv */
/* Demangled: webrtc::AudioBuffer::set_downmixing_by_averaging() */
int _ZN6webrtc11AudioBuffer27set_downmixing_by_averagingEv(void);

/* Symbol: _ZN6webrtc16BlockDelayBufferD2Ev */
/* Demangled: webrtc::BlockDelayBuffer::~BlockDelayBuffer() */
int _ZN6webrtc16BlockDelayBufferD2Ev(void);

/* Symbol: _ZNSt3__16vectorINS0_INS0_IfNS_9allocatorIfEEEENS1_IS3_EEEENS1_IS5_EEEC2EjRKS5_ */
/* Demangled: std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >::vector(unsigned int, std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&) */
int _ZNSt3__16vectorINS0_INS0_IfNS_9allocatorIfEEEENS1_IS3_EEEENS1_IS5_EEEC2EjRKS5_(void);

/* Symbol: _ZN6webrtc17VadCircularBuffer11BufferLevelEv */
/* Demangled: webrtc::VadCircularBuffer::BufferLevel() */
int _ZN6webrtc17VadCircularBuffer11BufferLevelEv(void);

/* Symbol: _ZN6webrtc7rnn_vad20FindBestPitchPeriodsEN3rtc9ArrayViewIKfLin4711EEES4_j */
/* Demangled: webrtc::rnn_vad::FindBestPitchPeriods(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, unsigned int) */
int _ZN6webrtc7rnn_vad20FindBestPitchPeriodsEN3rtc9ArrayViewIKfLin4711EEES4_j(void);

/* Symbol: _ZN6webrtc7rnn_vad18SpectralCorrelatorC1Ev */
/* Demangled: webrtc::rnn_vad::SpectralCorrelator::SpectralCorrelator() */
int _ZN6webrtc7rnn_vad18SpectralCorrelatorC1Ev(void);

/* Symbol: _Z10Agc2EnableP16preproc_effect_s */
/* Demangled: Agc2Enable(preproc_effect_s*) */
int _Z10Agc2EnableP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc13FIRFilterNEOND1Ev */
/* Demangled: webrtc::FIRFilterNEON::~FIRFilterNEON() */
int _ZN6webrtc13FIRFilterNEOND1Ev(void);

/* Symbol: pffft_transform */
/* Demangled: pffft_transform */
int pffft_transform(void);

/* Symbol: _ZN6webrtc17WebRtc_last_delayEPv */
/* Demangled: webrtc::WebRtc_last_delay(void*) */
int _ZN6webrtc17WebRtc_last_delayEPv(void);

/* Symbol: _Z12AecSetDeviceP16preproc_effect_sj */
/* Demangled: AecSetDevice(preproc_effect_s*, unsigned int) */
int _Z12AecSetDeviceP16preproc_effect_sj(void);

/* Symbol: _ZN6webrtc25WebRtc_InitDelayEstimatorEPv */
/* Demangled: webrtc::WebRtc_InitDelayEstimator(void*) */
int _ZN6webrtc25WebRtc_InitDelayEstimatorEPv(void);

/* Symbol: _ZN6webrtc13StandaloneVad6CreateEv */
/* Demangled: webrtc::StandaloneVad::Create() */
int _ZN6webrtc13StandaloneVad6CreateEv(void);

/* Symbol: _ZN6webrtc22EchoPathDelayEstimatorC2EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::EchoPathDelayEstimator::EchoPathDelayEstimator(webrtc::ApmDataDumper*, webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc22EchoPathDelayEstimatorC2EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc20ReverbModelEstimatorD2Ev */
/* Demangled: webrtc::ReverbModelEstimator::~ReverbModelEstimator() */
int _ZN6webrtc20ReverbModelEstimatorD2Ev(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_EEEvDpRKT_E1t;

/* Symbol: _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_SA_EEEvDpRKT_E1t */
/* Demangled: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_SA_EEEvDpRKT_E1t;

/* Symbol: WebRtcVad_CalcVad48khz */
/* Demangled: WebRtcVad_CalcVad48khz */
int WebRtcVad_CalcVad48khz(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE */
/* Demangled: webrtc::EchoControlMobileImpl::ProcessRenderAudio(rtc::ArrayView<short const, -4711>) */
int _ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE(void);

/* Symbol: _ZN6webrtc31WebRtc_DelayEstimatorProcessFixEPvPKtii */
/* Demangled: webrtc::WebRtc_DelayEstimatorProcessFix(void*, unsigned short const*, int, int) */
int _ZN6webrtc31WebRtc_DelayEstimatorProcessFixEPvPKtii(void);

/* Symbol: _ZN6webrtc19ThreeBandFilterBankC1Ev */
/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank() */
int _ZN6webrtc19ThreeBandFilterBankC1Ev(void);

/* Symbol: _ZN6webrtc16SignalWithLevelsC2ERKS0_ */
/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::SignalWithLevels const&) */
int _ZN6webrtc16SignalWithLevelsC2ERKS0_(void);

/* Symbol: _ZN6webrtc21StationarityEstimator13NoiseSpectrumD2Ev */
/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::~NoiseSpectrum() */
int _ZN6webrtc21StationarityEstimator13NoiseSpectrumD2Ev(void);

/* Symbol: pffftd_next_power_of_two */
/* Demangled: pffftd_next_power_of_two */
int pffftd_next_power_of_two(void);

/* Symbol: _ZN6webrtc20EchoCanceller3ConfigC1ERKS0_ */
/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc20EchoCanceller3ConfigC1ERKS0_(void);

/* Symbol: _ZN6webrtc15SuppressionGainC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij */
/* Demangled: webrtc::SuppressionGain::SuppressionGain(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, int, unsigned int) */
int _ZN6webrtc15SuppressionGainC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij(void);

/* Symbol: _ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE */
/* Demangled: rtc::LogMessage::OutputToDebug(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity) */
int _ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE(void);

/* Symbol: _ZN3rtc5EventC1Ebb */
/* Demangled: rtc::Event::Event(bool, bool) */
int _ZN3rtc5EventC1Ebb(void);

/* Symbol: _ZN6webrtc12VadWithLevel13SetSampleRateEi */
/* Demangled: webrtc::VadWithLevel::SetSampleRate(int) */
int _ZN6webrtc12VadWithLevel13SetSampleRateEi(void);

/* Symbol: _ZN6webrtc13PitchBasedVadC2Ev */
/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
int _ZN6webrtc13PitchBasedVadC2Ev(void);

/* Symbol: _ZNK6webrtc15SuppressionGain10GetMinGainEN3rtc9ArrayViewIKfLin4711EEES4_S4_bbNS2_IfLin4711EEE */
/* Demangled: webrtc::SuppressionGain::GetMinGain(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, bool, bool, rtc::ArrayView<float, -4711>) const */
int _ZNK6webrtc15SuppressionGain10GetMinGainEN3rtc9ArrayViewIKfLin4711EEES4_S4_bbNS2_IfLin4711EEE(void);

/* Symbol: _ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE */
/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<bool>) */
int _ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIbE5ValueEv */
/* Demangled: webrtc::FieldTrialOptional<bool>::Value() const */
int _ZNK6webrtc18FieldTrialOptionalIbE5ValueEv(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterIdE3GetEv */
/* Demangled: webrtc::FieldTrialParameter<double>::Get() const */
int _ZNK6webrtc19FieldTrialParameterIdE3GetEv(void);

/* Symbol: _ZNK6webrtc16AgcManagerDirect23SetupDigitalGainControlEPNS_11GainControlE */
/* Demangled: webrtc::AgcManagerDirect::SetupDigitalGainControl(webrtc::GainControl*) const */
int _ZNK6webrtc16AgcManagerDirect23SetupDigitalGainControlEPNS_11GainControlE(void);

/* Symbol: _ZN6webrtc29AdaptiveModeLevelEstimatorAgcC1EPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::AdaptiveModeLevelEstimatorAgc(webrtc::ApmDataDumper*) */
int _ZN6webrtc29AdaptiveModeLevelEstimatorAgcC1EPNS_13ApmDataDumperE(void);

/* Symbol: _ZN3rtc7g_clockE */
/* Demangled: rtc::g_clock */
extern void* _ZN3rtc7g_clockE;

/* Symbol: _ZN6webrtc5Pffft23FrequencyDomainConvolveERKNS0_11FloatBufferES3_PS1_f */
/* Demangled: webrtc::Pffft::FrequencyDomainConvolve(webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer*, float) */
int _ZN6webrtc5Pffft23FrequencyDomainConvolveERKNS0_11FloatBufferES3_PS1_f(void);

/* Symbol: _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigENSt3__110unique_ptrINS_16CustomProcessingENS4_14default_deleteIS6_EEEES9_NS5_INS_18EchoControlFactoryENS7_ISA_EEEEN3rtc13scoped_refptrINS_12EchoDetectorEEENS5_INS_19CustomAudioAnalyzerENS7_ISH_EEEE */
/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&, std::__1::unique_ptr<webrtc::CustomProcessing, std::__1::default_delete<webrtc::CustomProcessing> >, std::__1::unique_ptr<webrtc::CustomProcessing, std::__1::default_delete<webrtc::CustomProcessing> >, std::__1::unique_ptr<webrtc::EchoControlFactory, std::__1::default_delete<webrtc::EchoControlFactory> >, rtc::scoped_refptr<webrtc::EchoDetector>, std::__1::unique_ptr<webrtc::CustomAudioAnalyzer, std::__1::default_delete<webrtc::CustomAudioAnalyzer> >) */
int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigENSt3__110unique_ptrINS_16CustomProcessingENS4_14default_deleteIS6_EEEES9_NS5_INS_18EchoControlFactoryENS7_ISA_EEEEN3rtc13scoped_refptrINS_12EchoDetectorEEENS5_INS_19CustomAudioAnalyzerENS7_ISH_EEEE(void);

/* Symbol: _ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferEb */
/* Demangled: webrtc::GainControlImpl::ProcessCaptureAudio(webrtc::AudioBuffer*, bool) */
int _ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferEb(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl14ApmRenderStateC2Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::ApmRenderState() */
int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateC2Ev(void);

/* Symbol: WebRtcSpl_CrossCorrelationNeon */
/* Demangled: WebRtcSpl_CrossCorrelationNeon */
int WebRtcSpl_CrossCorrelationNeon(void);

/* Symbol: _ZN6webrtc20CascadedBiQuadFilter6BiQuadC2ERKNS0_11BiQuadParamE */
/* Demangled: webrtc::CascadedBiQuadFilter::BiQuad::BiQuad(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
int _ZN6webrtc20CascadedBiQuadFilter6BiQuadC2ERKNS0_11BiQuadParamE(void);

/* Symbol: pffft_aligned_malloc */
/* Demangled: pffft_aligned_malloc */
int pffft_aligned_malloc(void);

/* Symbol: _ZN6webrtc16SignalWithLevelsC1ENS_14AudioFrameViewIfEE */
/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::AudioFrameView<float>) */
int _ZN6webrtc16SignalWithLevelsC1ENS_14AudioFrameViewIfEE(void);

/* Symbol: _ZNK6webrtc26AdaptiveModeLevelEstimator19LatestLevelEstimateEv */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::LatestLevelEstimate() const */
int _ZNK6webrtc26AdaptiveModeLevelEstimator19LatestLevelEstimateEv(void);

/* Symbol: _ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperE */
/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*) */
int _ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperE(void);

/* Symbol: _ZTVN6webrtc21FieldTrialConstrainedIjEE */
/* Demangled: vtable for webrtc::FieldTrialConstrained<unsigned int> */
extern void* _ZTVN6webrtc21FieldTrialConstrainedIjEE;

/* Symbol: _ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj */
/* Demangled: std::__1::vector<short, std::__1::allocator<short> >::__append(unsigned int) */
int _ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj(void);

/* Symbol: _ZN6webrtc26SpeechProbabilityEstimatorC1Ev */
/* Demangled: webrtc::SpeechProbabilityEstimator::SpeechProbabilityEstimator() */
int _ZN6webrtc26SpeechProbabilityEstimatorC1Ev(void);

/* Symbol: _ZNK6webrtc8OouraFft3FftEPf */
/* Demangled: webrtc::OouraFft::Fft(float*) const */
int _ZNK6webrtc8OouraFft3FftEPf(void);

/* Symbol: _ZN6webrtc16SubtractorOutput5ResetEv */
/* Demangled: webrtc::SubtractorOutput::Reset() */
int _ZN6webrtc16SubtractorOutput5ResetEv(void);

/* Symbol: _ZN6webrtc7rnn_vad35ComputeSmoothedLogMagnitudeSpectrumEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi22EEE */
/* Demangled: webrtc::rnn_vad::ComputeSmoothedLogMagnitudeSpectrum(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 22>) */
int _ZN6webrtc7rnn_vad35ComputeSmoothedLogMagnitudeSpectrumEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi22EEE(void);

/* Symbol: _ZN6webrtc5PffftD2Ev */
/* Demangled: webrtc::Pffft::~Pffft() */
int _ZN6webrtc5PffftD2Ev(void);

/* Symbol: _ZN6webrtc22AudioProcessingBuilder6CreateERKNS_6ConfigE */
/* Demangled: webrtc::AudioProcessingBuilder::Create(webrtc::Config const&) */
int _ZN6webrtc22AudioProcessingBuilder6CreateERKNS_6ConfigE(void);

/* Symbol: _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD2Ev */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::~SpectralFeaturesExtractor() */
int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD2Ev(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics8DbMetricC2Efff */
/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric(float, float, float) */
int _ZN6webrtc18EchoRemoverMetrics8DbMetricC2Efff(void);

/* Symbol: _ZN6webrtc4aec313MovingAverageD1Ev */
/* Demangled: webrtc::aec3::MovingAverage::~MovingAverage() */
int _ZN6webrtc4aec313MovingAverageD1Ev(void);

/* Symbol: _ZN6webrtc17SuppressionFilterD2Ev */
/* Demangled: webrtc::SuppressionFilter::~SuppressionFilter() */
int _ZN6webrtc17SuppressionFilterD2Ev(void);

/* Symbol: _ZN6webrtc16SignalClassifier13FrameExtenderD2Ev */
/* Demangled: webrtc::SignalClassifier::FrameExtender::~FrameExtender() */
int _ZN6webrtc16SignalClassifier13FrameExtenderD2Ev(void);

/* Symbol: WebRtcSpl_LPBy2ShortToInt */
/* Demangled: WebRtcSpl_LPBy2ShortToInt */
int WebRtcSpl_LPBy2ShortToInt(void);

/* Symbol: _ZN6webrtc13PushResamplerIsED1Ev */
/* Demangled: webrtc::PushResampler<short>::~PushResampler() */
int _ZN6webrtc13PushResamplerIsED1Ev(void);

/* Symbol: _ZN6webrtc22CoarseFilterUpdateGain19UpdateCurrentConfigEv */
/* Demangled: webrtc::CoarseFilterUpdateGain::UpdateCurrentConfig() */
int _ZN6webrtc22CoarseFilterUpdateGain19UpdateCurrentConfigEv(void);

/* Symbol: WebRtcSpl_DivW32HiLow */
/* Demangled: WebRtcSpl_DivW32HiLow */
int WebRtcSpl_DivW32HiLow(void);

/* Symbol: _ZN6webrtc16BlockDelayBuffer11DelaySignalEPNS_11AudioBufferE */
/* Demangled: webrtc::BlockDelayBuffer::DelaySignal(webrtc::AudioBuffer*) */
int _ZN6webrtc16BlockDelayBuffer11DelaySignalEPNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimatorD2Ev */
/* Demangled: webrtc::ResidualEchoEstimator::~ResidualEchoEstimator() */
int _ZN6webrtc21ResidualEchoEstimatorD2Ev(void);

/* Symbol: _ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE */
/* Demangled: rtc::LogMessage::GetLogToStream(rtc::LogSink*) */
int _ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_12StreamConfigES3_ */
/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeCapture(webrtc::StreamConfig const&, webrtc::StreamConfig const&) */
int _ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_12StreamConfigES3_(void);

/* Symbol: _ZN6webrtc26AdaptiveModeLevelEstimator5ResetEv */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::Reset() */
int _ZN6webrtc26AdaptiveModeLevelEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc14AlignmentMixerC2EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE */
/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, webrtc::EchoCanceller3Config::Delay::AlignmentMixing const&) */
int _ZN6webrtc14AlignmentMixerC2EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE(void);

/* Symbol: _ZN6webrtc20ApiCallJitterMetrics6JitterC2Ev */
/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Jitter() */
int _ZN6webrtc20ApiCallJitterMetrics6JitterC2Ev(void);

/* Symbol: _ZN6webrtc18EchoRemoverMetrics12ResetMetricsEv */
/* Demangled: webrtc::EchoRemoverMetrics::ResetMetrics() */
int _ZN6webrtc18EchoRemoverMetrics12ResetMetricsEv(void);

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnumD2Ev */
/* Demangled: webrtc::AbstractFieldTrialEnum::~AbstractFieldTrialEnum() */
int _ZN6webrtc22AbstractFieldTrialEnumD2Ev(void);

/* Symbol: _ZN3rtc26TimestampWrapAroundHandlerC1Ev */
/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
int _ZN3rtc26TimestampWrapAroundHandlerC1Ev(void);

/* Symbol: _Z9NsDisableP16preproc_effect_s */
/* Demangled: NsDisable(preproc_effect_s*) */
int _Z9NsDisableP16preproc_effect_s(void);

/* Symbol: _ZN6webrtc13PushResamplerIfED2Ev */
/* Demangled: webrtc::PushResampler<float>::~PushResampler() */
int _ZN6webrtc13PushResamplerIfED2Ev(void);

/* Symbol: _ZN6webrtc15AudioProcessing20kNativeSampleRatesHzE */
/* Demangled: webrtc::AudioProcessing::kNativeSampleRatesHz */
extern void* _ZN6webrtc15AudioProcessing20kNativeSampleRatesHzE;

/* Symbol: _ZN6webrtc28SignalDependentErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::SignalDependentErleEstimator::SignalDependentErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc28SignalDependentErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc21ResidualEchoEstimator9AddReverbENS0_10ReverbTypeERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewINSt3__15arrayIfLj65EEELin4711EEE */
/* Demangled: webrtc::ResidualEchoEstimator::AddReverb(webrtc::ResidualEchoEstimator::ReverbType, webrtc::AecState const&, webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::array<float, 65u>, -4711>) */
int _ZN6webrtc21ResidualEchoEstimator9AddReverbENS0_10ReverbTypeERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewINSt3__15arrayIfLj65EEELin4711EEE(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimatorD1Ev */
/* Demangled: webrtc::ReverbDecayEstimator::~ReverbDecayEstimator() */
int _ZN6webrtc20ReverbDecayEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl26RecordAudioProcessingStateEv */
/* Demangled: webrtc::AudioProcessingImpl::RecordAudioProcessingState() */
int _ZN6webrtc19AudioProcessingImpl26RecordAudioProcessingStateEv(void);

/* Symbol: WebRtcSpl_DivW32W16 */
/* Demangled: WebRtcSpl_DivW32W16 */
int WebRtcSpl_DivW32W16(void);

/* Symbol: _ZN6webrtc28GetInitialSaturationMarginDbEv */
/* Demangled: webrtc::GetInitialSaturationMarginDb() */
int _ZN6webrtc28GetInitialSaturationMarginDbEv(void);

/* Symbol: _ZN6webrtc15SuppressionGain15instance_count_E */
/* Demangled: webrtc::SuppressionGain::instance_count_ */
extern void* _ZN6webrtc15SuppressionGain15instance_count_E;

/* Symbol: _ZN6webrtc19AudioProcessingImpl13DetachAecDumpEv */
/* Demangled: webrtc::AudioProcessingImpl::DetachAecDump() */
int _ZN6webrtc19AudioProcessingImpl13DetachAecDumpEv(void);

/* Symbol: _ZN6webrtc14LevelEstimatorC2Ev */
/* Demangled: webrtc::LevelEstimator::LevelEstimator() */
int _ZN6webrtc14LevelEstimatorC2Ev(void);

/* Symbol: _ZN6webrtc23DominantNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj */
/* Demangled: webrtc::DominantNearendDetector::DominantNearendDetector(webrtc::EchoCanceller3Config::Suppressor::DominantNearendDetection const&, unsigned int) */
int _ZN6webrtc23DominantNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator5ResetEv */
/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Reset() */
int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator5ResetEv(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE */
/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE(void);

/* Symbol: _ZN6webrtc14WebRtcAgc_FreeEPv */
/* Demangled: webrtc::WebRtcAgc_Free(void*) */
int _ZN6webrtc14WebRtcAgc_FreeEPv(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config5DelayC1Ev */
/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay() */
int _ZN6webrtc20EchoCanceller3Config5DelayC1Ev(void);

/* Symbol: WebRtc_InitBuffer */
/* Demangled: WebRtc_InitBuffer */
int WebRtc_InitBuffer(void);

/* Symbol: _ZN6webrtc20ReverbModelEstimator6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IKNS4_INS3_5arrayIfLj65EEENS5_ISB_EEEELin4711EEENS2_IKNS3_8optionalIfEELin4711EEENS2_IKiLin4711EEERKNS4_IbNS5_IbEEEEb */
/* Demangled: webrtc::ReverbModelEstimator::Update(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<std::__1::optional<float> const, -4711>, rtc::ArrayView<int const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&, bool) */
int _ZN6webrtc20ReverbModelEstimator6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IKNS4_INS3_5arrayIfLj65EEENS5_ISB_EEEELin4711EEENS2_IKNS3_8optionalIfEELin4711EEENS2_IKiLin4711EEERKNS4_IbNS5_IbEEEEb(void);

/* Symbol: _ZN6webrtc21StationarityEstimatorC1Ev */
/* Demangled: webrtc::StationarityEstimator::StationarityEstimator() */
int _ZN6webrtc21StationarityEstimatorC1Ev(void);

/* Symbol: _ZN3rtc4joinERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEc */
/* Demangled: rtc::join(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char) */
int _ZN3rtc4joinERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEc(void);

/* Symbol: _ZN6webrtc16SignalClassifier10InitializeEi */
/* Demangled: webrtc::SignalClassifier::Initialize(int) */
int _ZN6webrtc16SignalClassifier10InitializeEi(void);

/* Symbol: _ZN6webrtc21MeanVarianceEstimator6UpdateEf */
/* Demangled: webrtc::MeanVarianceEstimator::Update(float) */
int _ZN6webrtc21MeanVarianceEstimator6UpdateEf(void);

/* Symbol: _ZN6webrtc13AlignedMallocEjj */
/* Demangled: webrtc::AlignedMalloc(unsigned int, unsigned int) */
int _ZN6webrtc13AlignedMallocEjj(void);

/* Symbol: _ZN6webrtc7metrics10SampleInfoD1Ev */
/* Demangled: webrtc::metrics::SampleInfo::~SampleInfo() */
int _ZN6webrtc7metrics10SampleInfoD1Ev(void);

/* Symbol: _ZN6webrtc8AecState15instance_count_E */
/* Demangled: webrtc::AecState::instance_count_ */
extern void* _ZN6webrtc8AecState15instance_count_E;

/* Symbol: _ZN6webrtc20ResidualEchoDetectorD1Ev */
/* Demangled: webrtc::ResidualEchoDetector::~ResidualEchoDetector() */
int _ZN6webrtc20ResidualEchoDetectorD1Ev(void);

/* Symbol: _ZN3rtc14PlatformThreadD1Ev */
/* Demangled: rtc::PlatformThread::~PlatformThread() */
int _ZN3rtc14PlatformThreadD1Ev(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1ERKS2_ */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds const&) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1ERKS2_(void);

/* Symbol: _ZN6webrtc23WebRtcAecm_CalcEnergiesEPNS_8AecmCoreEPKtsjPi */
/* Demangled: webrtc::WebRtcAecm_CalcEnergies(webrtc::AecmCore*, unsigned short const*, short, unsigned int, int*) */
int _ZN6webrtc23WebRtcAecm_CalcEnergiesEPNS_8AecmCoreEPKtsjPi(void);

/* Symbol: _ZN6webrtc15FloatToFloatS16EPKfjPf */
/* Demangled: webrtc::FloatToFloatS16(float const*, unsigned int, float*) */
int _ZN6webrtc15FloatToFloatS16EPKfjPf(void);

/* Symbol: _ZN6webrtc8AecStateC2ERKNS_20EchoCanceller3ConfigEj */
/* Demangled: webrtc::AecState::AecState(webrtc::EchoCanceller3Config const&, unsigned int) */
int _ZN6webrtc8AecStateC2ERKNS_20EchoCanceller3ConfigEj(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterINSt3__18optionalIiEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<std::__1::optional<int> > webrtc::ParseTypedParameter<std::__1::optional<int> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIiEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN6webrtc3AgcE */
/* Demangled: vtable for webrtc::Agc */
extern void* _ZTVN6webrtc3AgcE;

/* Symbol: _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD1Ev */
/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::~ApmStatsReporter() */
int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD1Ev(void);

/* Symbol: _ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE */
/* Demangled: webrtc::RmsLevel::Analyze(rtc::ArrayView<float const, -4711>) */
int _ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE(void);

/* Symbol: _ZN6webrtc15GainController2C2Ev */
/* Demangled: webrtc::GainController2::GainController2() */
int _ZN6webrtc15GainController2C2Ev(void);

/* Symbol: WebRtcSpl_GetScalingSquare */
/* Demangled: WebRtcSpl_GetScalingSquare */
int WebRtcSpl_GetScalingSquare(void);

/* Symbol: WebRtcSpl_32khzTo22khzIntToInt */
/* Demangled: WebRtcSpl_32khzTo22khzIntToInt */
int WebRtcSpl_32khzTo22khzIntToInt(void);

/* Symbol: _ZN6webrtc15NoiseSuppressorC2ERKNS_8NsConfigEjj */
/* Demangled: webrtc::NoiseSuppressor::NoiseSuppressor(webrtc::NsConfig const&, unsigned int, unsigned int) */
int _ZN6webrtc15NoiseSuppressorC2ERKNS_8NsConfigEjj(void);

/* Symbol: _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEEC2EjRKS3_ */
/* Demangled: std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >::vector(unsigned int, std::__1::vector<float, std::__1::allocator<float> > const&) */
int _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEEC2EjRKS3_(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIjE10SetForTestEj */
/* Demangled: webrtc::FieldTrialParameter<unsigned int>::SetForTest(unsigned int) */
int _ZN6webrtc19FieldTrialParameterIjE10SetForTestEj(void);

/* Symbol: _ZN6webrtc21FieldTrialConstrainedIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_ */
/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int, std::__1::optional<unsigned int>, std::__1::optional<unsigned int>) */
int _ZN6webrtc21FieldTrialConstrainedIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_(void);

/* Symbol: _ZNK6webrtc15AudioProcessing6Config8ToStringEv */
/* Demangled: webrtc::AudioProcessing::Config::ToString() const */
int _ZNK6webrtc15AudioProcessing6Config8ToStringEv(void);

/* Symbol: _ZN6webrtc13StandaloneVadD2Ev */
/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
int _ZN6webrtc13StandaloneVadD2Ev(void);

/* Symbol: _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE3GetEv */
/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Get() const */
int _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE3GetEv(void);

/* Symbol: _ZN6webrtc15GainControlImplC1Ev */
/* Demangled: webrtc::GainControlImpl::GainControlImpl() */
int _ZN6webrtc15GainControlImplC1Ev(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuer7EnqueueENS_15AudioProcessing14RuntimeSettingE */
/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::Enqueue(webrtc::AudioProcessing::RuntimeSetting) */
int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuer7EnqueueENS_15AudioProcessing14RuntimeSettingE(void);

/* Symbol: _ZN6webrtc14CircularBufferD2Ev */
/* Demangled: webrtc::CircularBuffer::~CircularBuffer() */
int _ZN6webrtc14CircularBufferD2Ev(void);

/* Symbol: _ZN6webrtc24WebRtcAecm_UpdateChannelEPNS_8AecmCoreEPKtsS3_sPi */
/* Demangled: webrtc::WebRtcAecm_UpdateChannel(webrtc::AecmCore*, unsigned short const*, short, unsigned short const*, short, int*) */
int _ZN6webrtc24WebRtcAecm_UpdateChannelEPNS_8AecmCoreEPKtsS3_sPi(void);

/* Symbol: _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj */
/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__append(unsigned int) */
int _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj(void);

/* Symbol: _ZN6webrtc9DecimatorC2Ej */
/* Demangled: webrtc::Decimator::Decimator(unsigned int) */
int _ZN6webrtc9DecimatorC2Ej(void);

/* Symbol: _ZN6webrtc12AdjustConfigERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::AdjustConfig(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc12AdjustConfigERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor10AccumulateEf */
/* Demangled: webrtc::ReverbDecayEstimator::LateReverbLinearRegressor::Accumulate(float) */
int _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor10AccumulateEf(void);

/* Symbol: _ZN6webrtc3Agc21set_target_level_dbfsEi */
/* Demangled: webrtc::Agc::set_target_level_dbfs(int) */
int _ZN6webrtc3Agc21set_target_level_dbfsEi(void);

/* Symbol: _ZN6webrtc11Loudness2DbEd */
/* Demangled: webrtc::Loudness2Db(double) */
int _ZN6webrtc11Loudness2DbEd(void);

/* Symbol: _Z14NsGetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: NsGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z14NsGetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _ZN6webrtc23DominantNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj */
/* Demangled: webrtc::DominantNearendDetector::DominantNearendDetector(webrtc::EchoCanceller3Config::Suppressor::DominantNearendDetection const&, unsigned int) */
int _ZN6webrtc23DominantNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj(void);

/* Symbol: _ZN6webrtc14EchoCanceller3D0Ev */
/* Demangled: webrtc::EchoCanceller3::~EchoCanceller3() */
int _ZN6webrtc14EchoCanceller3D0Ev(void);

/* Symbol: _ZN6webrtc14FilterAnalyzer17PreProcessFiltersEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE */
/* Demangled: webrtc::FilterAnalyzer::PreProcessFilters(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>) */
int _ZN6webrtc14FilterAnalyzer17PreProcessFiltersEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD2Ev */
/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::~ErleInstantaneous() */
int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD2Ev(void);

/* Symbol: _ZN3rtc17ScopedYieldPolicyD2Ev */
/* Demangled: rtc::ScopedYieldPolicy::~ScopedYieldPolicy() */
int _ZN3rtc17ScopedYieldPolicyD2Ev(void);

/* Symbol: _Z16Agc2SetParameterP16preproc_effect_sPvS1_ */
/* Demangled: Agc2SetParameter(preproc_effect_s*, void*, void*) */
int _Z16Agc2SetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: _ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf */
/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2::LevelEstimator, bool, float) */
int _ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf(void);

/* Symbol: _ZN3rtc7strcpynEPcjPKcj */
/* Demangled: rtc::strcpyn(char*, unsigned int, char const*, unsigned int) */
int _ZN3rtc7strcpynEPcjPKcj(void);

/* Symbol: _ZN6webrtc5PffftC1EjNS0_7FftTypeE */
/* Demangled: webrtc::Pffft::Pffft(unsigned int, webrtc::Pffft::FftType) */
int _ZN6webrtc5PffftC1EjNS0_7FftTypeE(void);

/* Symbol: _ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj */
/* Demangled: webrtc::TransientDetector::ReferenceDetectionValue(float const*, unsigned int) */
int _ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj(void);

/* Symbol: _ZN6webrtc15GainControlImpl23set_analog_level_limitsEii */
/* Demangled: webrtc::GainControlImpl::set_analog_level_limits(int, int) */
int _ZN6webrtc15GainControlImpl23set_analog_level_limitsEii(void);

/* Symbol: _ZN6webrtc17WebRtcAgc_AnalyzeEPvPKPKsjjiPisPhS5_ */
/* Demangled: webrtc::WebRtcAgc_Analyze(void*, short const* const*, unsigned int, unsigned int, int, int*, short, unsigned char*, int*) */
int _ZN6webrtc17WebRtcAgc_AnalyzeEPvPKPKsjjiPisPhS5_(void);

/* Symbol: _ZN6webrtc11AdaptiveAgcD1Ev */
/* Demangled: webrtc::AdaptiveAgc::~AdaptiveAgc() */
int _ZN6webrtc11AdaptiveAgcD1Ev(void);

/* Symbol: _ZN3rtc19SimpleStringBuilderlsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: rtc::SimpleStringBuilder::operator<<(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc19SimpleStringBuilderlsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc20SignalModelEstimator6UpdateEN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff */
/* Demangled: webrtc::SignalModelEstimator::Update(rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, float, float) */
int _ZN6webrtc20SignalModelEstimator6UpdateEN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff(void);

/* Symbol: _ZN3rtc5Event3SetEv */
/* Demangled: rtc::Event::Set() */
int _ZN3rtc5Event3SetEv(void);

/* Symbol: _ZN6webrtc21FullBandErleEstimator22UpdateQualityEstimatesEv */
/* Demangled: webrtc::FullBandErleEstimator::UpdateQualityEstimates() */
int _ZN6webrtc21FullBandErleEstimator22UpdateQualityEstimatesEv(void);

/* Symbol: _ZN3rtc11string_trimERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: rtc::string_trim(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN3rtc11string_trimERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor24ComputeAvgAndDerivativesEN3rtc9ArrayViewIfLi6EEES4_S4_ */
/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::ComputeAvgAndDerivatives(rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>) const */
int _ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor24ComputeAvgAndDerivativesEN3rtc9ArrayViewIfLi6EEES4_S4_(void);

/* Symbol: _ZN6webrtc17TransientDetectorC2Ei */
/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
int _ZN6webrtc17TransientDetectorC2Ei(void);

/* Symbol: _ZN3rtc17ScopedYieldPolicyC1EPNS_14YieldInterfaceE */
/* Demangled: rtc::ScopedYieldPolicy::ScopedYieldPolicy(rtc::YieldInterface*) */
int _ZN3rtc17ScopedYieldPolicyC1EPNS_14YieldInterfaceE(void);

/* Symbol: _ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferES2_b */
/* Demangled: webrtc::EchoCanceller3::ProcessCapture(webrtc::AudioBuffer*, webrtc::AudioBuffer*, bool) */
int _ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferES2_b(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIbE11GetOptionalEv */
/* Demangled: webrtc::FieldTrialOptional<bool>::GetOptional() const */
int _ZNK6webrtc18FieldTrialOptionalIbE11GetOptionalEv(void);

/* Symbol: _ZN7rnnoise14kHiddenGruBiasE */
/* Demangled: rnnoise::kHiddenGruBias */
extern void* _ZN7rnnoise14kHiddenGruBiasE;

/* Symbol: _ZN6webrtc28SignalDependentErleEstimatorD1Ev */
/* Demangled: webrtc::SignalDependentErleEstimator::~SignalDependentErleEstimator() */
int _ZN6webrtc28SignalDependentErleEstimatorD1Ev(void);

/* Symbol: _ZN6webrtc13MatchedFilter5ResetEv */
/* Demangled: webrtc::MatchedFilter::Reset() */
int _ZN6webrtc13MatchedFilter5ResetEv(void);

/* Symbol: _ZN6webrtc20ReverbDecayEstimatorC2ERKNS_20EchoCanceller3ConfigE */
/* Demangled: webrtc::ReverbDecayEstimator::ReverbDecayEstimator(webrtc::EchoCanceller3Config const&) */
int _ZN6webrtc20ReverbDecayEstimatorC2ERKNS_20EchoCanceller3ConfigE(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram10UpdateHistEii */
/* Demangled: webrtc::LoudnessHistogram::UpdateHist(int, int) */
int _ZN6webrtc17LoudnessHistogram10UpdateHistEii(void);

/* Symbol: _ZN6webrtc7rnn_vad19FullyConnectedLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE */
/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::FullyConnectedLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::FunctionView<float (float)>, webrtc::rnn_vad::Optimization) */
int _ZN6webrtc7rnn_vad19FullyConnectedLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE(void);

/* Symbol: _ZN6webrtc31WebRtc_InitBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE */
/* Demangled: webrtc::WebRtc_InitBinaryDelayEstimator(webrtc::BinaryDelayEstimator*) */
int _ZN6webrtc31WebRtc_InitBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE(void);

/* Symbol: _ZN6webrtc14LevelEstimator13ProcessStreamERKNS_11AudioBufferE */
/* Demangled: webrtc::LevelEstimator::ProcessStream(webrtc::AudioBuffer const&) */
int _ZN6webrtc14LevelEstimator13ProcessStreamERKNS_11AudioBufferE(void);

/* Symbol: _ZN6webrtc9MovingMaxC1Ej */
/* Demangled: webrtc::MovingMax::MovingMax(unsigned int) */
int _ZN6webrtc9MovingMaxC1Ej(void);

/* Symbol: WebRtcSpl_ResetResample16khzTo48khz */
/* Demangled: WebRtcSpl_ResetResample16khzTo48khz */
int WebRtcSpl_ResetResample16khzTo48khz(void);

/* Symbol: _ZN6webrtc12ErlEstimatorD2Ev */
/* Demangled: webrtc::ErlEstimator::~ErlEstimator() */
int _ZN6webrtc12ErlEstimatorD2Ev(void);

/* Symbol: pffft_zconvolve_no_accu */
/* Demangled: pffft_zconvolve_no_accu */
int pffft_zconvolve_no_accu(void);

/* Symbol: _ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpEP7__sFILExPN3rtc9TaskQueueE */
/* Demangled: webrtc::AudioProcessingImpl::CreateAndAttachAecDump(__sFILE*, long long, rtc::TaskQueue*) */
int _ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpEP7__sFILExPN3rtc9TaskQueueE(void);

/* Symbol: _ZN6webrtc13SincResamplerD0Ev */
/* Demangled: webrtc::SincResampler::~SincResampler() */
int _ZN6webrtc13SincResamplerD0Ev(void);

/* Symbol: _ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEiii */
/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, int, int, int) */
int _ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEiii(void);

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnumC1ERKS0_ */
/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(webrtc::AbstractFieldTrialEnum const&) */
int _ZN6webrtc22AbstractFieldTrialEnumC1ERKS0_(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ValueEv */
/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Value() const */
int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ValueEv(void);

/* Symbol: _ZN6webrtc17LoudnessHistogramD2Ev */
/* Demangled: webrtc::LoudnessHistogram::~LoudnessHistogram() */
int _ZN6webrtc17LoudnessHistogramD2Ev(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2Efff */
/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(float, float, float) */
int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2Efff(void);

/* Symbol: _ZN6webrtc7metrics10NumSamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: webrtc::metrics::NumSamples(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6webrtc7metrics10NumSamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j */
/* Demangled: webrtc::VadAudioProc::PitchAnalysis(double*, double*, unsigned int) */
int _ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j(void);

/* Symbol: _ZN6webrtc12FrameBlockerC2Ejj */
/* Demangled: webrtc::FrameBlocker::FrameBlocker(unsigned int, unsigned int) */
int _ZN6webrtc12FrameBlockerC2Ejj(void);

/* Symbol: _ZN6webrtc10SubtractorD2Ev */
/* Demangled: webrtc::Subtractor::~Subtractor() */
int _ZN6webrtc10SubtractorD2Ev(void);

/* Symbol: _ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc19ParseTypedParameterINSt3__18optionalIbEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: std::__1::optional<std::__1::optional<bool> > webrtc::ParseTypedParameter<std::__1::optional<bool> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIbEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN6webrtc15GainController211ApplyConfigERKNS_15AudioProcessing6Config15GainController2E */
/* Demangled: webrtc::GainController2::ApplyConfig(webrtc::AudioProcessing::Config::GainController2 const&) */
int _ZN6webrtc15GainController211ApplyConfigERKNS_15AudioProcessing6Config15GainController2E(void);

/* Symbol: _ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE */
/* Demangled: rtc::tokenize_append(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
int _ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void);

/* Symbol: _ZN6webrtc19FieldTrialParameterIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi */
/* Demangled: webrtc::FieldTrialParameter<int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
int _ZN6webrtc19FieldTrialParameterIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi(void);

/* Symbol: _ZN6webrtc16SignalClassifierD2Ev */
/* Demangled: webrtc::SignalClassifier::~SignalClassifier() */
int _ZN6webrtc16SignalClassifierD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void);

/* Symbol: _ZN6webrtc13SincResampler16InitializeKernelEv */
/* Demangled: webrtc::SincResampler::InitializeKernel() */
int _ZN6webrtc13SincResampler16InitializeKernelEv(void);

/* Symbol: _ZNSt3__16vectorINS_10unique_ptrIN6webrtc20CascadedBiQuadFilterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj */
/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::CascadedBiQuadFilter, std::__1::default_delete<webrtc::CascadedBiQuadFilter> >, std::__1::allocator<std::__1::unique_ptr<webrtc::CascadedBiQuadFilter, std::__1::default_delete<webrtc::CascadedBiQuadFilter> > > >::__append(unsigned int) */
int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc20CascadedBiQuadFilterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj(void);

/* Symbol: _ZN6webrtc16PowApproximationEff */
/* Demangled: webrtc::PowApproximation(float, float) */
int _ZN6webrtc16PowApproximationEff(void);

/* Symbol: _ZN6webrtc28RenderDelayControllerMetrics12ResetMetricsEv */
/* Demangled: webrtc::RenderDelayControllerMetrics::ResetMetrics() */
int _ZN6webrtc28RenderDelayControllerMetrics12ResetMetricsEv(void);

/* Symbol: _ZN6webrtc22AbstractFieldTrialEnumC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE */
/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> > >) */
int _ZN6webrtc22AbstractFieldTrialEnumC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE(void);

/* Symbol: _ZN6webrtc11field_trial37InsertOrReplaceFieldTrialStringsInMapEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEENS1_17basic_string_viewIcS5_EE */
/* Demangled: webrtc::field_trial::InsertOrReplaceFieldTrialStringsInMap(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN6webrtc11field_trial37InsertOrReplaceFieldTrialStringsInMapEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEENS1_17basic_string_viewIcS5_EE(void);

/* Symbol: WebRtcSpl_LPBy2IntToInt */
/* Demangled: WebRtcSpl_LPBy2IntToInt */
int WebRtcSpl_LPBy2IntToInt(void);

/* Symbol: _ZN6webrtc27WebRtc_AddBinaryFarSpectrumEPNS_26BinaryDelayEstimatorFarendEj */
/* Demangled: webrtc::WebRtc_AddBinaryFarSpectrum(webrtc::BinaryDelayEstimatorFarend*, unsigned int) */
int _ZN6webrtc27WebRtc_AddBinaryFarSpectrumEPNS_26BinaryDelayEstimatorFarendEj(void);

/* Symbol: WebRtcSpl_VectorBitShiftW16 */
/* Demangled: WebRtcSpl_VectorBitShiftW16 */
int WebRtcSpl_VectorBitShiftW16(void);

/* Symbol: WebRtcSpl_ComplexFFT */
/* Demangled: WebRtcSpl_ComplexFFT */
int WebRtcSpl_ComplexFFT(void);

/* Symbol: _ZN6webrtc14AudioConverterC2Ev */
/* Demangled: webrtc::AudioConverter::AudioConverter() */
int _ZN6webrtc14AudioConverterC2Ev(void);

/* Symbol: _ZNK6webrtc21InterpolatedGainCurve17LookUpGainToApplyEf */
/* Demangled: webrtc::InterpolatedGainCurve::LookUpGainToApply(float) const */
int _ZNK6webrtc21InterpolatedGainCurve17LookUpGainToApplyEf(void);

/* Symbol: _ZNK6webrtc7rnn_vad18SpectralCorrelator22ComputeAutoCorrelationEN3rtc9ArrayViewIKfLin4711EEENS3_IfLi20EEE */
/* Demangled: webrtc::rnn_vad::SpectralCorrelator::ComputeAutoCorrelation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 20>) const */
int _ZNK6webrtc7rnn_vad18SpectralCorrelator22ComputeAutoCorrelationEN3rtc9ArrayViewIKfLin4711EEENS3_IfLi20EEE(void);

/* Symbol: _ZN6webrtc7WPDNodeC2EjPKfj */
/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
int _ZN6webrtc7WPDNodeC2EjPKfj(void);

/* Symbol: _ZN6webrtc13ApmDataDumperC1Ei */
/* Demangled: webrtc::ApmDataDumper::ApmDataDumper(int) */
int _ZN6webrtc13ApmDataDumperC1Ei(void);

/* Symbol: _ZN6webrtc21EchoControlMobileImpl21NumCancellersRequiredEjj */
/* Demangled: webrtc::EchoControlMobileImpl::NumCancellersRequired(unsigned int, unsigned int) */
int _ZN6webrtc21EchoControlMobileImpl21NumCancellersRequiredEjj(void);

/* Symbol: _ZN7rnnoise19kOutputDenseWeightsE */
/* Demangled: rnnoise::kOutputDenseWeights */
extern void* _ZN7rnnoise19kOutputDenseWeightsE;

/* Symbol: pffft_next_power_of_two */
/* Demangled: pffft_next_power_of_two */
int pffft_next_power_of_two(void);

/* Symbol: _ZN6webrtc15NoiseSuppressor7AnalyzeERKNS_11AudioBufferE */
/* Demangled: webrtc::NoiseSuppressor::Analyze(webrtc::AudioBuffer const&) */
int _ZN6webrtc15NoiseSuppressor7AnalyzeERKNS_11AudioBufferE(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned int) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj(void);

/* Symbol: _ZN6webrtc8RmsLevel12AnalyzeMutedEj */
/* Demangled: webrtc::RmsLevel::AnalyzeMuted(unsigned int) */
int _ZN6webrtc8RmsLevel12AnalyzeMutedEj(void);

/* Symbol: _ZNK6webrtc18FieldTrialOptionalIdEcvbEv */
/* Demangled: webrtc::FieldTrialOptional<double>::operator bool() const */
int _ZNK6webrtc18FieldTrialOptionalIdEcvbEv(void);

/* Symbol: _ZN6webrtc17LoudnessHistogram26RemoveOldestEntryAndUpdateEv */
/* Demangled: webrtc::LoudnessHistogram::RemoveOldestEntryAndUpdate() */
int _ZN6webrtc17LoudnessHistogram26RemoveOldestEntryAndUpdateEv(void);

/* Symbol: _ZN3rtc17ScopedYieldPolicyC2EPNS_14YieldInterfaceE */
/* Demangled: rtc::ScopedYieldPolicy::ScopedYieldPolicy(rtc::YieldInterface*) */
int _ZN3rtc17ScopedYieldPolicyC2EPNS_14YieldInterfaceE(void);

/* Symbol: _ZN6webrtc15GainControlImpl10InitializeEji */
/* Demangled: webrtc::GainControlImpl::Initialize(unsigned int, int) */
int _ZN6webrtc15GainControlImpl10InitializeEji(void);

/* Symbol: _ZN6webrtc7metrics10SampleInfoC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij */
/* Demangled: webrtc::metrics::SampleInfo::SampleInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned int) */
int _ZN6webrtc7metrics10SampleInfoC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij(void);

/* Symbol: _ZN6webrtc13PushResamplerIsE18InitializeIfNeededEiij */
/* Demangled: webrtc::PushResampler<short>::InitializeIfNeeded(int, int, unsigned int) */
int _ZN6webrtc13PushResamplerIsE18InitializeIfNeededEiij(void);

/* Symbol: _ZNK6webrtc7Aec3Fft9PaddedFftEN3rtc9ArrayViewIKfLin4711EEES4_NS0_6WindowEPNS_7FftDataE */
/* Demangled: webrtc::Aec3Fft::PaddedFft(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, webrtc::Aec3Fft::Window, webrtc::FftData*) const */
int _ZNK6webrtc7Aec3Fft9PaddedFftEN3rtc9ArrayViewIKfLin4711EEES4_NS0_6WindowEPNS_7FftDataE(void);

/* Symbol: _ZN6webrtc23RefinedFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_16SubtractorOutputEN3rtc9ArrayViewIKfLin4711EEEjbPNS_7FftDataE */
/* Demangled: webrtc::RefinedFilterUpdateGain::Compute(std::__1::array<float, 65u> const&, webrtc::RenderSignalAnalyzer const&, webrtc::SubtractorOutput const&, rtc::ArrayView<float const, -4711>, unsigned int, bool, webrtc::FftData*) */
int _ZN6webrtc23RefinedFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_16SubtractorOutputEN3rtc9ArrayViewIKfLin4711EEEjbPNS_7FftDataE(void);

/* Symbol: _ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv */
/* Demangled: webrtc::AudioProcessingImpl::num_input_channels() const */
int _ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv(void);

/* Symbol: _ZN6webrtc35WebRtcAecm_ResetAdaptiveChannelNeonEPNS_8AecmCoreE */
/* Demangled: webrtc::WebRtcAecm_ResetAdaptiveChannelNeon(webrtc::AecmCore*) */
int _ZN6webrtc35WebRtcAecm_ResetAdaptiveChannelNeonEPNS_8AecmCoreE(void);

/* Symbol: _ZN6webrtc14NoiseEstimatorC1ERKNS_17SuppressionParamsE */
/* Demangled: webrtc::NoiseEstimator::NoiseEstimator(webrtc::SuppressionParams const&) */
int _ZN6webrtc14NoiseEstimatorC1ERKNS_17SuppressionParamsE(void);

/* Symbol: _ZN6webrtc17AdaptiveFirFilterC1EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE */
/* Demangled: webrtc::AdaptiveFirFilter::AdaptiveFirFilter(unsigned int, unsigned int, unsigned int, unsigned int, webrtc::Aec3Optimization, webrtc::ApmDataDumper*) */
int _ZN6webrtc17AdaptiveFirFilterC1EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE(void);

/* Symbol: _ZN6webrtc5Pffft16ForwardTransformERKNS0_11FloatBufferEPS1_b */
/* Demangled: webrtc::Pffft::ForwardTransform(webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer*, bool) */
int _ZN6webrtc5Pffft16ForwardTransformERKNS0_11FloatBufferEPS1_b(void);

/* Symbol: _ZN6webrtc20EchoCanceller3Config8ValidateEPS0_ */
/* Demangled: webrtc::EchoCanceller3Config::Validate(webrtc::EchoCanceller3Config*) */
int _ZN6webrtc20EchoCanceller3Config8ValidateEPS0_(void);

/* Symbol: _ZN6webrtc21VoiceActivityDetectorD2Ev */
/* Demangled: webrtc::VoiceActivityDetector::~VoiceActivityDetector() */
int _ZN6webrtc21VoiceActivityDetectorD2Ev(void);

/* Symbol: _ZN6webrtc11BlockFramerD2Ev */
/* Demangled: webrtc::BlockFramer::~BlockFramer() */
int _ZN6webrtc11BlockFramerD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOPREPROCESSING_H */
