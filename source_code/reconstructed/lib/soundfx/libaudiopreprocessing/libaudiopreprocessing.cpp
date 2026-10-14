/*
 * Reverse-Engineered Source for: libaudiopreprocessing.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaudiopreprocessing"

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
#include "libaudiopreprocessing.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::SubmoduleStates(bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC1Ebbb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC1Ebbb() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_UpdateAgcThresholds(webrtc::LegacyAgc*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29WebRtcAgc_UpdateAgcThresholdsEPNS_9LegacyAgcE(void) {
    ALOGD("_ZN6webrtc29WebRtcAgc_UpdateAgcThresholdsEPNS_9LegacyAgcE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::MergeFrequencyBands() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer19MergeFrequencyBandsEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_compression_gain_db(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl23set_compression_gain_dbEi(void) {
    ALOGD("_ZN6webrtc15GainControlImpl23set_compression_gain_dbEi() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::~InterpolatedGainCurve() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurveD1Ev(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurveD1Ev() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::StartThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread11StartThreadEPv(void) {
    ALOGD("_ZN3rtc14PlatformThread11StartThreadEPv() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::AddAudio(short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad8AddAudioEPKsj(void) {
    ALOGD("_ZN6webrtc13StandaloneVad8AddAudioEPKsj() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_SoftResetBinaryDelayEstimatorFarend(webrtc::BinaryDelayEstimatorFarend*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc42WebRtc_SoftResetBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendEi(void) {
    ALOGD("_ZN6webrtc42WebRtc_SoftResetBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendEi() called");
    return 0;
}

/* Demangled: webrtc::CustomProcessing::SetRuntimeSetting(webrtc::AudioProcessing::RuntimeSetting) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16CustomProcessing17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE(void) {
    ALOGD("_ZN6webrtc16CustomProcessing17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::UpdateMargin(webrtc::VadWithLevel::LevelAndProbability const&, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtector12UpdateMarginERKNS_12VadWithLevel19LevelAndProbabilityEf(void) {
    ALOGD("_ZN6webrtc19SaturationProtector12UpdateMarginERKNS_12VadWithLevel19LevelAndProbabilityEf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ENS1_17MaskingThresholdsES3_ff(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ENS1_17MaskingThresholdsES3_ff() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel(webrtc::EchoCanceller3Config::EchoModel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config9EchoModelC1ERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config9EchoModelC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_get_config(void*, webrtc::WebRtcAgcConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20WebRtcAgc_get_configEPvPNS_15WebRtcAgcConfigE(void) {
    ALOGD("_ZN6webrtc20WebRtcAgc_get_configEPvPNS_15WebRtcAgcConfigE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::GetMetrics() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc14EchoCanceller310GetMetricsEv(void) {
    ALOGD("_ZNK6webrtc14EchoCanceller310GetMetricsEv() called");
    return 0;
}

/* Demangled: webrtc::aec3::MovingAverage::Average(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec313MovingAverage7AverageEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc4aec313MovingAverage7AverageEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::SignalClassifier(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifierC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc16SignalClassifierC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: Session_GetConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z17Session_GetConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z17Session_GetConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::Process(webrtc::AudioBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilter7ProcessEPNS_11AudioBufferEb(void) {
    ALOGD("_ZN6webrtc14HighPassFilter7ProcessEPNS_11AudioBufferEb() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_ProcessVad(webrtc::AgcVad*, short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20WebRtcAgc_ProcessVadEPNS_6AgcVadEPKsj(void) {
    ALOGD("_ZN6webrtc20WebRtcAgc_ProcessVadEPNS_6AgcVadEPKsj() called");
    return 0;
}

/* Demangled: webrtc::ClockdriftDetector::~ClockdriftDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18ClockdriftDetectorD2Ev(void) {
    ALOGD("_ZN6webrtc18ClockdriftDetectorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutput::SubtractorOutput() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SubtractorOutputC1Ev(void) {
    ALOGD("_ZN6webrtc16SubtractorOutputC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::UpdateSize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter10UpdateSizeEv(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter10UpdateSizeEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::stream_analog_level() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15GainControlImpl19stream_analog_levelEv(void) {
    ALOGD("_ZNK6webrtc15GainControlImpl19stream_analog_levelEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_stream_analog_level(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl23set_stream_analog_levelEi(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl23set_stream_analog_levelEi() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEPKc(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEPKc() called");
    return 0;
}

/* Demangled: webrtc::aec3::ComputeFrequencyResponse_Neon(unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec329ComputeFrequencyResponse_NeonEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE(void) {
    ALOGD("_ZN6webrtc4aec329ComputeFrequencyResponse_NeonEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::~SubbandErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::SetCaptureMuted(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc15SetCaptureMutedEb(void) {
    ALOGD("_ZN6webrtc7MonoAgc15SetCaptureMutedEb() called");
    return 0;
}

/* Demangled: webrtc::NoiseSpectrumEstimator::NoiseSpectrumEstimator(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22NoiseSpectrumEstimatorC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc22NoiseSpectrumEstimatorC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::~TransientSuppressorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImplD2Ev(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImplD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::Constrain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter9ConstrainEv(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter9ConstrainEv() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterNEON::FIRFilterNEON(float const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FIRFilterNEONC1EPKfjj(void) {
    ALOGD("_ZN6webrtc13FIRFilterNEONC1EPKfjj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<unsigned int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::Update(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15SubmoduleStates6UpdateEbbbbbbbbbb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15SubmoduleStates6UpdateEbbbbbbbbbb() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveAgc::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgc5ResetEv(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgc5ResetEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::__map_value_compare<webrtc::ConfigOptionID, std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, std::__1::less<webrtc::ConfigOptionID>, true>, std::__1::allocator<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<webrtc::ConfigOptionID, webrtc::Config::BaseOption*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN6webrtc14ConfigOptionIDEPNS2_6Config10BaseOptionEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::AreAllBandsStationary() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator21AreAllBandsStationaryEv(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator21AreAllBandsStationaryEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialOptional<double> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18FieldTrialOptionalIdEE = NULL;

/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilterC1EPKfjS2_j(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilterC1EPKfjS2_j() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::SubbandErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Exported Object: AELI */
extern "C" __attribute__((visibility("default"))) void* AELI = NULL;

/* Demangled: webrtc::EchoCanceller3Config::Delay::operator=(webrtc::EchoCanceller3Config::Delay const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config5DelayaSERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config5DelayaSERKS1_() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferC2Ei(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferC2Ei() called");
    return 0;
}

/* Demangled: webrtc::Histograms::Histograms() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10HistogramsC1Ev(void) {
    ALOGD("_ZN6webrtc10HistogramsC1Ev() called");
    return 0;
}

/* Demangled: webrtc::PriorSignalModelEstimator::PriorSignalModelEstimator(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25PriorSignalModelEstimatorC1Ef(void) {
    ALOGD("_ZN6webrtc25PriorSignalModelEstimatorC1Ef() called");
    return 0;
}

/* Demangled: webrtc::SignalModel::SignalModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11SignalModelC2Ev(void) {
    ALOGD("_ZN6webrtc11SignalModelC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_RealInverseFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RealInverseFFT(void) {
    ALOGD("WebRtcSpl_RealInverseFFT() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::AudioConverter(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AudioConverterC2Ejjjj(void) {
    ALOGD("_ZN6webrtc14AudioConverterC2Ejjjj() called");
    return 0;
}

/* Demangled: webrtc::ClockdriftDetector::Update(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18ClockdriftDetector6UpdateEi(void) {
    ALOGD("_ZN6webrtc18ClockdriftDetector6UpdateEi() called");
    return 0;
}

/* Demangled: webrtc::SuppressionFilter::ApplyGain(rtc::ArrayView<webrtc::FftData const, -4711>, rtc::ArrayView<webrtc::FftData const, -4711>, std::__1::array<float, 65u> const&, float, rtc::ArrayView<webrtc::FftData const, -4711>, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17SuppressionFilter9ApplyGainEN3rtc9ArrayViewIKNS_7FftDataELin4711EEES5_RKNSt3__15arrayIfLj65EEEfS5_PNS6_6vectorINSB_INSB_IfNS6_9allocatorIfEEEENSC_ISE_EEEENSC_ISG_EEEE(void) {
    ALOGD("_ZN6webrtc17SuppressionFilter9ApplyGainEN3rtc9ArrayViewIKNS_7FftDataELin4711EEES5_RKNSt3__15arrayIfLj65EEEfS5_PNS6_6vectorINSB_INSB_IfNS6_9allocatorIfEEEENSC_ISE_EEEENSC_ISG_EEEE() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::~OouraFft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8OouraFftD2Ev(void) {
    ALOGD("_ZN6webrtc8OouraFftD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::RenderMultiBandProcessingActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandProcessingActiveEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandProcessingActiveEv() called");
    return 0;
}

/* Demangled: webrtc::FixedDigitalLevelEstimator::FixedDigitalLevelEstimator(unsigned int, webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26FixedDigitalLevelEstimatorC2EjPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc26FixedDigitalLevelEstimatorC2EjPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::UpdateStats(float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21InterpolatedGainCurve11UpdateStatsEf(void) {
    ALOGD("_ZNK6webrtc21InterpolatedGainCurve11UpdateStatsEf() called");
    return 0;
}

/* Demangled: webrtc::Histograms::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10Histograms5ClearEv(void) {
    ALOGD("_ZN6webrtc10Histograms5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::NrFft::NrFft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5NrFftC1Ev(void) {
    ALOGD("_ZN6webrtc5NrFftC1Ev() called");
    return 0;
}

/* Demangled: webrtc::Aec3Fft::ZeroPaddedFft(rtc::ArrayView<float const, -4711>, webrtc::Aec3Fft::Window, webrtc::FftData*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7Aec3Fft13ZeroPaddedFftEN3rtc9ArrayViewIKfLin4711EEENS0_6WindowEPNS_7FftDataE(void) {
    ALOGD("_ZNK6webrtc7Aec3Fft13ZeroPaddedFftEN3rtc9ArrayViewIKfLin4711EEENS0_6WindowEPNS_7FftDataE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::Decimate2x(rtc::ArrayView<float const, 864>, rtc::ArrayView<float, 432>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad10Decimate2xEN3rtc9ArrayViewIKfLi864EEENS2_IfLi432EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad10Decimate2xEN3rtc9ArrayViewIKfLi864EEENS2_IfLi432EEE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::StreamConfig const&, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf(void) {
    ALOGD("_ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPKPf() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::AnalyzeCaptureAudio(webrtc::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioERKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl19AnalyzeCaptureAudioERKNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample16khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample16khzTo48khz(void) {
    ALOGD("WebRtcSpl_Resample16khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::ExpApproximation(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16ExpApproximationEf(void) {
    ALOGD("_ZN6webrtc16ExpApproximationEf() called");
    return 0;
}

/* Demangled: rtc::LogSink::OnLogMessage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityEPKc(void) {
    ALOGD("_ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityEPKc() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferC2Ejjjjj(void) {
    ALOGD("_ZN6webrtc11AudioBufferC2Ejjjjj() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::ProcessRenderAudio(rtc::ArrayView<short const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::UpdateAccumulatedSpectra(rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimator24UpdateAccumulatedSpectraEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimator24UpdateAccumulatedSpectraEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_front(float*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: Session_ReleaseEffect(preproc_session_s*, preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s(void) {
    ALOGD("_Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::~RuntimeSettingEnqueuer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AecState::FilterDelay::Update(rtc::ArrayView<int const, -4711>, std::__1::optional<webrtc::DelayEstimate> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState11FilterDelay6UpdateEN3rtc9ArrayViewIKiLin4711EEERKNSt3__18optionalINS_13DelayEstimateEEEj(void) {
    ALOGD("_ZN6webrtc8AecState11FilterDelay6UpdateEN3rtc9ArrayViewIKiLin4711EEERKNSt3__18optionalINS_13DelayEstimateEEEj() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::Process(webrtc::RenderBuffer const&, std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&, webrtc::RenderSignalAnalyzer const&, webrtc::AecState const&, rtc::ArrayView<webrtc::SubtractorOutput, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10Subtractor7ProcessERKNS_12RenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEERKNS_20RenderSignalAnalyzerERKNS_8AecStateEN3rtc9ArrayViewINS_16SubtractorOutputELin4711EEE(void) {
    ALOGD("_ZN6webrtc10Subtractor7ProcessERKNS_12RenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEERKNS_20RenderSignalAnalyzerERKNS_8AecStateEN3rtc9ArrayViewINS_16SubtractorOutputELin4711EEE() called");
    return 0;
}

/* Demangled: pffftd_min_fft_size */
extern "C" __attribute__((visibility("default"))) int pffftd_min_fft_size(void) {
    ALOGD("pffftd_min_fft_size() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::~MonoAgc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgcD1Ev(void) {
    ALOGD("_ZN6webrtc7MonoAgcD1Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialParameter<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19FieldTrialParameterIjEE = NULL;

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEES6_EEEvPKciS8_DpRKT_E1t = NULL;

/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerD2Ev(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::cft1st_128(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft10cft1st_128EPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft10cft1st_128EPf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<bool>::SetForTest(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIbE10SetForTestEb(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIbE10SetForTestEb() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::HardRestoration(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl15HardRestorationEPf(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl15HardRestorationEPf() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::~ApmCaptureState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD1Ev() called");
    return 0;
}

/* Demangled: webrtc::QuantileNoiseEstimator::QuantileNoiseEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22QuantileNoiseEstimatorC2Ev(void) {
    ALOGD("_ZN6webrtc22QuantileNoiseEstimatorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::CoarseFilterUpdateGain::CoarseFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::CoarseConfiguration const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22CoarseFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj(void) {
    ALOGD("_ZN6webrtc22CoarseFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj() called");
    return 0;
}

/* Demangled: webrtc::RenderDelayController::Create(webrtc::EchoCanceller3Config const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21RenderDelayController6CreateERKNS_20EchoCanceller3ConfigEij(void) {
    ALOGD("_ZN6webrtc21RenderDelayController6CreateERKNS_20EchoCanceller3ConfigEij() called");
    return 0;
}

/* Demangled: rtc::hex_encode(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_encodeEPKcj(void) {
    ALOGD("_ZN3rtc10hex_encodeEPKcj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameterInterface::~FieldTrialParameterInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28FieldTrialParameterInterfaceD1Ev(void) {
    ALOGD("_ZN6webrtc28FieldTrialParameterInterfaceD1Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_lookahead(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16WebRtc_lookaheadEPv(void) {
    ALOGD("_ZN6webrtc16WebRtc_lookaheadEPv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_Process(void const*, int const*, short const* const*, unsigned int, short* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17WebRtcAgc_ProcessEPKvPKiPKPKsjPKPs(void) {
    ALOGD("_ZN6webrtc17WebRtcAgc_ProcessEPKvPKiPKPKsjPKPs() called");
    return 0;
}

/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::FilteringQualityAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState24FilteringQualityAnalyzerC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc8AecState24FilteringQualityAnalyzerC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::Agc::Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcC2Ev(void) {
    ALOGD("_ZN6webrtc3AgcC2Ev() called");
    return 0;
}

/* Demangled: Agc2Disable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z11Agc2DisableP16preproc_effect_s(void) {
    ALOGD("_Z11Agc2DisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::NoiseEstimator::PreUpdate(int, rtc::ArrayView<float const, 129>, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14NoiseEstimator9PreUpdateEiN3rtc9ArrayViewIKfLi129EEEf(void) {
    ALOGD("_ZN6webrtc14NoiseEstimator9PreUpdateEiN3rtc9ArrayViewIKfLi129EEEf() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigC2ERKS0_(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigC2ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIiEptEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIiEptEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FeaturesExtractor::CheckSilenceComputeFeatures(rtc::ArrayView<float const, 240>, rtc::ArrayView<float, 42>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad17FeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi240EEENS3_IfLi42EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad17FeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi240EEENS3_IfLi42EEE() called");
    return 0;
}

/* Demangled: webrtc::NoiseSpectrumEstimator::Update(rtc::ArrayView<float const, -4711>, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22NoiseSpectrumEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEEb(void) {
    ALOGD("_ZN6webrtc22NoiseSpectrumEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEEb() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::ComputeAndPostProcessLpcCoefficients(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 5>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad36ComputeAndPostProcessLpcCoefficientsEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi5EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad36ComputeAndPostProcessLpcCoefficientsEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi5EEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16InitializeLockedEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16InitializeLockedEv() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::~HighPassFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilterD1Ev(void) {
    ALOGD("_ZN6webrtc14HighPassFilterD1Ev() called");
    return 0;
}

/* Demangled: webrtc::MovingMax::Update(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9MovingMax6UpdateEf(void) {
    ALOGD("_ZN6webrtc9MovingMax6UpdateEf() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::ImportSplitChannelData(unsigned int, short const* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer22ImportSplitChannelDataEjPKPKs(void) {
    ALOGD("_ZN6webrtc11AudioBuffer22ImportSplitChannelDataEjPKPKs() called");
    return 0;
}

/* Demangled: webrtc::BlockProcessor::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijj(void) {
    ALOGD("_ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijj() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutputAnalyzer::Update(rtc::ArrayView<webrtc::SubtractorOutput const, -4711>, bool*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24SubtractorOutputAnalyzer6UpdateEN3rtc9ArrayViewIKNS_16SubtractorOutputELin4711EEEPbS6_(void) {
    ALOGD("_ZN6webrtc24SubtractorOutputAnalyzer6UpdateEN3rtc9ArrayViewIKNS_16SubtractorOutputELin4711EEEPbS6_() called");
    return 0;
}

/* Demangled: webrtc::SpectrumBuffer::SpectrumBuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14SpectrumBufferC1Ejj(void) {
    ALOGD("_ZN6webrtc14SpectrumBufferC1Ejj() called");
    return 0;
}

/* Demangled: WebRtcVad_InitCore */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_InitCore(void) {
    ALOGD("WebRtcVad_InitCore() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> >, std::__1::allocator<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> > > >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE7reserveEj() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::EarlyReverbLengthEstimator(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC1Ei(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC1Ei() called");
    return 0;
}

/* Demangled: webrtc::AecState::TransparentMode::Update(int, bool, bool, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState15TransparentMode6UpdateEibbbbb(void) {
    ALOGD("_ZN6webrtc8AecState15TransparentMode6UpdateEibbbbb() called");
    return 0;
}

/* Demangled: webrtc::EchoPathDelayEstimator::EstimateDelay(webrtc::DownsampledRenderBuffer const&, std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22EchoPathDelayEstimator13EstimateDelayERKNS_23DownsampledRenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEE(void) {
    ALOGD("_ZN6webrtc22EchoPathDelayEstimator13EstimateDelayERKNS_23DownsampledRenderBufferERKNSt3__16vectorINS5_IfNS4_9allocatorIfEEEENS6_IS8_EEEE() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::ResidualEchoEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimatorC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::cft1st_128_neon(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15cft1st_128_neonEPf(void) {
    ALOGD("_ZN6webrtc15cft1st_128_neonEPf() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RecordProcessedCaptureStream(float const* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKPKf(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKPKf() called");
    return 0;
}

/* Demangled: rtc::tracing::StartInternalCapture(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing20StartInternalCaptureEPKc(void) {
    ALOGD("_ZN3rtc7tracing20StartInternalCaptureEPKc() called");
    return 0;
}

/* Demangled: WebRtcSpl_DownsampleBy2 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownsampleBy2(void) {
    ALOGD("WebRtcSpl_DownsampleBy2() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::RenderWriter::~RenderWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller312RenderWriterD2Ev(void) {
    ALOGD("_ZN6webrtc14EchoCanceller312RenderWriterD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::PushResampler<short>::ChannelResampler, std::__1::allocator<webrtc::PushResampler<short>::ChannelResampler> >::__push_back_slow_path<webrtc::PushResampler<short>::ChannelResampler>(webrtc::PushResampler<short>::ChannelResampler&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6webrtc13PushResamplerIsE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6webrtc13PushResamplerIsE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, bool, bool, float, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AlignmentMixerC2Ejbbfb(void) {
    ALOGD("_ZN6webrtc14AlignmentMixerC2Ejbbfb() called");
    return 0;
}

/* Demangled: webrtc::SuppressionFilter::SuppressionFilter(webrtc::Aec3Optimization, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17SuppressionFilterC2ENS_16Aec3OptimizationEij(void) {
    ALOGD("_ZN6webrtc17SuppressionFilterC2ENS_16Aec3OptimizationEij() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::Process(short const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29AdaptiveModeLevelEstimatorAgc7ProcessEPKsji(void) {
    ALOGD("_ZN6webrtc29AdaptiveModeLevelEstimatorAgc7ProcessEPKsji() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::GetThreadRef() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc14PlatformThread12GetThreadRefEv(void) {
    ALOGD("_ZNK3rtc14PlatformThread12GetThreadRefEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_InitBinaryDelayEstimatorFarend(webrtc::BinaryDelayEstimatorFarend*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc37WebRtc_InitBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE(void) {
    ALOGD("_ZN6webrtc37WebRtc_InitBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::Suppress(float*, unsigned int, int, float const*, unsigned int, float const*, unsigned int, float, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl8SuppressEPfjiPKfjS3_jfb(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl8SuppressEPfjiPKfjS3_jfb() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::GetStatistics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporter13GetStatisticsEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16ApmStatsReporter13GetStatisticsEv() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::operator==(webrtc::InternalAPMConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigeqERKS0_(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigeqERKS0_() called");
    return 0;
}

/* Exported Object: vtable for webrtc::ResidualEchoDetector */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc20ResidualEchoDetectorE = NULL;

/* Demangled: webrtc::MonoAgc::CheckVolumeAndReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc19CheckVolumeAndResetEv(void) {
    ALOGD("_ZN6webrtc7MonoAgc19CheckVolumeAndResetEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FeaturesExtractor::~FeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad17FeaturesExtractorD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad17FeaturesExtractorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsC1Ej(void) {
    ALOGD("_ZN6webrtc13MovingMomentsC1Ej() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveDigitalGainApplier::AdaptiveDigitalGainApplier(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveDigitalGainApplierC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc26AdaptiveDigitalGainApplierC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::FrameBlocker::~FrameBlocker() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12FrameBlockerD2Ev(void) {
    ALOGD("_ZN6webrtc12FrameBlockerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::UpdateKeypress(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl14UpdateKeypressEb(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl14UpdateKeypressEb() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::WriteAecDumpConfigMessage(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25WriteAecDumpConfigMessageEb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25WriteAecDumpConfigMessageEb() called");
    return 0;
}

/* Exported Object: webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def = NULL;

/* Demangled: webrtc::NormalizedCovarianceEstimator::Update(float, float, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29NormalizedCovarianceEstimator6UpdateEffffff(void) {
    ALOGD("_ZN6webrtc29NormalizedCovarianceEstimator6UpdateEffffff() called");
    return 0;
}

/* Demangled: rtc::tracing::StartInternalCaptureToFile(__sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE(void) {
    ALOGD("_ZN3rtc7tracing26StartInternalCaptureToFileEP7__sFILE() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEESA_NS4_ILS5_1EiEESA_SC_SA_EEEvDpRKT_E1t = NULL;

/* Demangled: rtc::SetCurrentThreadName(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc20SetCurrentThreadNameEPKc(void) {
    ALOGD("_ZN3rtc20SetCurrentThreadNameEPKc() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitPitchAnalysis */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitPitchAnalysis(void) {
    ALOGD("WebRtcIsac_InitPitchAnalysis() called");
    return 0;
}

/* Exported Object: rnnoise::TansigApproximated(float)::kTansigTable */
extern "C" __attribute__((visibility("default"))) void* _ZZN7rnnoise18TansigApproximatedEfE12kTansigTable = NULL;

/* Demangled: WebRtcSpl_DownBy2ShortToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownBy2ShortToInt(void) {
    ALOGD("WebRtcSpl_DownBy2ShortToInt() called");
    return 0;
}

/* Demangled: webrtc::SignalModelEstimator::SignalModelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SignalModelEstimatorC2Ev(void) {
    ALOGD("_ZN6webrtc20SignalModelEstimatorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::ComputeOutput(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19GatedRecurrentLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad19GatedRecurrentLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: std::__1::deque<float, std::__1::allocator<float> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIfNS_9allocatorIfEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: Session_GetReverseConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Demangled: webrtc::FftBuffer::~FftBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9FftBufferD1Ev(void) {
    ALOGD("_ZN6webrtc9FftBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::ReverbFrequencyResponse::ReverbFrequencyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23ReverbFrequencyResponseC2Ev(void) {
    ALOGD("_ZN6webrtc23ReverbFrequencyResponseC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AbstractFieldTrialEnum::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnum5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnum5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::Agc::~Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcD0Ev(void) {
    ALOGD("_ZN6webrtc3AgcD0Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::Initialize(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl10InitializeERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::Configure() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl9ConfigureEv(void) {
    ALOGD("_ZN6webrtc15GainControlImpl9ConfigureEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16WebRtcAgc_CreateEv(void) {
    ALOGD("_ZN6webrtc16WebRtcAgc_CreateEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_DotProductWithScale */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DotProductWithScale(void) {
    ALOGD("WebRtcSpl_DotProductWithScale() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::ReverbDecayEstimator(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimatorC1ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimatorC1ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE() called");
    return 0;
}

/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, char, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcccPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::AutoCorrelationCalculator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC2Ev() called");
    return 0;
}

/* Demangled: WebRtcAecm_BufferFarend */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_BufferFarend(void) {
    ALOGD("WebRtcAecm_BufferFarend() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::UpdateRenderNoiseEstimator(webrtc::SpectrumBuffer const&, webrtc::BlockBuffer const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibility26UpdateRenderNoiseEstimatorERKNS_14SpectrumBufferERKNS_11BlockBufferEb(void) {
    ALOGD("_ZN6webrtc14EchoAudibility26UpdateRenderNoiseEstimatorERKNS_14SpectrumBufferERKNS_11BlockBufferEb() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::UpdateNoiseEstimator(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator20UpdateNoiseEstimatorEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator20UpdateNoiseEstimatorEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::optional<int>, std::__1::optional<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingBuilder::AudioProcessingBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AudioProcessingBuilderC1Ev(void) {
    ALOGD("_ZN6webrtc22AudioProcessingBuilderC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: WebRtcAecm_echo_path_size_bytes */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_echo_path_size_bytes(void) {
    ALOGD("WebRtcAecm_echo_path_size_bytes() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::UpdateRegions(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler13UpdateRegionsEb(void) {
    ALOGD("_ZN6webrtc13SincResampler13UpdateRegionsEb() called");
    return 0;
}

/* Exported Object: webrtc::InterpolatedGainCurve::approximation_params_x_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc21InterpolatedGainCurve23approximation_params_x_E = NULL;

/* Demangled: webrtc::WebRtcAgc_CalculateGainTable(int*, short, short, unsigned char, short) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28WebRtcAgc_CalculateGainTableEPisshs(void) {
    ALOGD("_ZN6webrtc28WebRtcAgc_CalculateGainTableEPisshs() called");
    return 0;
}

/* Demangled: webrtc::ReverbModel::ReverbModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11ReverbModelC2Ev(void) {
    ALOGD("_ZN6webrtc11ReverbModelC2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_CreateDelayEstimatorFarend(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc33WebRtc_CreateDelayEstimatorFarendEii(void) {
    ALOGD("_ZN6webrtc33WebRtc_CreateDelayEstimatorFarendEii() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::ComputeFrequencyResponse(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17AdaptiveFirFilter24ComputeFrequencyResponseEPNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZNK6webrtc17AdaptiveFirFilter24ComputeFrequencyResponseEPNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::UpdateMaxMin() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous12UpdateMaxMinEv(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneous12UpdateMaxMinEv() called");
    return 0;
}

/* Demangled: AgcInit(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z7AgcInitP16preproc_effect_s(void) {
    ALOGD("_Z7AgcInitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::RestoreNumChannels() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer18RestoreNumChannelsEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer18RestoreNumChannelsEv() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcD1Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcD1Ev() called");
    return 0;
}

/* Demangled: webrtc::VadWithLevel::~VadWithLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadWithLevelD1Ev(void) {
    ALOGD("_ZN6webrtc12VadWithLevelD1Ev() called");
    return 0;
}

/* Demangled: webrtc::DownsampledRenderBuffer::DownsampledRenderBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23DownsampledRenderBufferC1Ej(void) {
    ALOGD("_ZN6webrtc23DownsampledRenderBufferC1Ej() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::FilterMisadjustmentEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10Subtractor28FilterMisadjustmentEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc10Subtractor28FilterMisadjustmentEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20AudioProcessingStatsC1Ev(void) {
    ALOGD("_ZN6webrtc20AudioProcessingStatsC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogStartTime() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage12LogStartTimeEv(void) {
    ALOGD("_ZN3rtc10LogMessage12LogStartTimeEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijj(void) {
    ALOGD("_ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijj() called");
    return 0;
}

/* Exported Object: vtable for rtc::RefCountedObject<webrtc::ResidualEchoDetector> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3rtc16RefCountedObjectIN6webrtc20ResidualEchoDetectorEEE = NULL;

/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::AudioFrameView<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalWithLevelsC2ENS_14AudioFrameViewIfEE(void) {
    ALOGD("_ZN6webrtc16SignalWithLevelsC2ENS_14AudioFrameViewIfEE() called");
    return 0;
}

/* Demangled: webrtc::AecState::InitialState::InitialState(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState12InitialStateC2ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc8AecState12InitialStateC2ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Dump(webrtc::ApmDataDumper*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator4DumpEPNS_13ApmDataDumperE(void) {
    ALOGD("_ZNK6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator4DumpEPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SetExtraOptions(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15SetExtraOptionsERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: webrtc::NoiseEstimator::NoiseEstimator(webrtc::SuppressionParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14NoiseEstimatorC2ERKNS_17SuppressionParamsE(void) {
    ALOGD("_ZN6webrtc14NoiseEstimatorC2ERKNS_17SuppressionParamsE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::SetSizePartitions(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter17SetSizePartitionsEjb(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter17SetSizePartitionsEjb() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::BiQuad::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter6BiQuad5ResetEv(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter6BiQuad5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE() called");
    return 0;
}

/* Demangled: rtc::CurrentThreadRef() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc16CurrentThreadRefEv(void) {
    ALOGD("_ZN3rtc16CurrentThreadRefEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeHighPassFilter(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl24InitializeHighPassFilterEb() called");
    return 0;
}

/* Demangled: WebRtcSpl_VectorBitShiftW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_VectorBitShiftW32(void) {
    ALOGD("WebRtcSpl_VectorBitShiftW32() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::Flush() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler5FlushEv(void) {
    ALOGD("_ZN6webrtc13SincResampler5FlushEv() called");
    return 0;
}

/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::SignalWithLevels const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalWithLevelsC1ERKS0_(void) {
    ALOGD("_ZN6webrtc16SignalWithLevelsC1ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::ComputeDctTable() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad15ComputeDctTableEv(void) {
    ALOGD("_ZN6webrtc7rnn_vad15ComputeDctTableEv() called");
    return 0;
}

/* Demangled: pffft_is_power_of_two */
extern "C" __attribute__((visibility("default"))) int pffft_is_power_of_two(void) {
    ALOGD("pffft_is_power_of_two() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::EchoAudibility(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibilityC2Eb(void) {
    ALOGD("_ZN6webrtc14EchoAudibilityC2Eb() called");
    return 0;
}

/* Exported Object: webrtc::StationarityEstimator::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc21StationarityEstimator15instance_count_E = NULL;

/* Demangled: webrtc::WebRtc_is_robust_validation_enabled(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc35WebRtc_is_robust_validation_enabledEPKv(void) {
    ALOGD("_ZN6webrtc35WebRtc_is_robust_validation_enabledEPKv() called");
    return 0;
}

/* Demangled: WebRtcSpl_UpBy2IntToShort */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpBy2IntToShort(void) {
    ALOGD("WebRtcSpl_UpBy2IntToShort() called");
    return 0;
}

/* Demangled: webrtc::GainApplier::Initialize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11GainApplier10InitializeEj(void) {
    ALOGD("_ZN6webrtc11GainApplier10InitializeEj() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralCorrelator::ComputeCrossCorrelation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 20>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7rnn_vad18SpectralCorrelator23ComputeCrossCorrelationEN3rtc9ArrayViewIKfLin4711EEES5_NS3_IfLi20EEE(void) {
    ALOGD("_ZNK6webrtc7rnn_vad18SpectralCorrelator23ComputeCrossCorrelationEN3rtc9ArrayViewIKfLin4711EEES5_NS3_IfLi20EEE() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::optional<int> > webrtc::ParseOptionalParameter<int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ParseOptionalParameterIiEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc22ParseOptionalParameterIiEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::PitchEstimator::PitchEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad14PitchEstimatorC2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad14PitchEstimatorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::metrics::Samples(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics7SamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc7metrics7SamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::UpdateEstimation(webrtc::VadWithLevel::LevelAndProbability const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveModeLevelEstimator16UpdateEstimationERKNS_12VadWithLevel19LevelAndProbabilityE(void) {
    ALOGD("_ZN6webrtc26AdaptiveModeLevelEstimator16UpdateEstimationERKNS_12VadWithLevel19LevelAndProbabilityE() called");
    return 0;
}

/* Demangled: webrtc::AecState::InitialState::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState12InitialState5ResetEv(void) {
    ALOGD("_ZN6webrtc8AecState12InitialState5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::Agc::target_level_dbfs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc3Agc17target_level_dbfsEv(void) {
    ALOGD("_ZNK6webrtc3Agc17target_level_dbfsEv() called");
    return 0;
}

/* Demangled: rtc::Event::~Event() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventD1Ev(void) {
    ALOGD("_ZN3rtc5EventD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Resampler::~Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerD1Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::RnnBasedVad::RnnBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad11RnnBasedVadC1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad11RnnBasedVadC1Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralCorrelator::SpectralCorrelator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad18SpectralCorrelatorC2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad18SpectralCorrelatorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_binary_last_delay_quality(webrtc::BinaryDelayEstimator*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc32WebRtc_binary_last_delay_qualityEPNS_20BinaryDelayEstimatorE(void) {
    ALOGD("_ZN6webrtc32WebRtc_binary_last_delay_qualityEPNS_20BinaryDelayEstimatorE() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(int, int, int, bool, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC1Eiiibbi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC1Eiiibbi() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterNEON::~FIRFilterNEON() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FIRFilterNEOND2Ev(void) {
    ALOGD("_ZN6webrtc13FIRFilterNEOND2Ev() called");
    return 0;
}

/* Demangled: webrtc::ErleEstimator::ErleEstimator(unsigned int, webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ErleEstimatorC1EjRKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc13ErleEstimatorC1EjRKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: pffft_aligned_free */
extern "C" __attribute__((visibility("default"))) int pffft_aligned_free(void) {
    ALOGD("pffft_aligned_free() called");
    return 0;
}

/* Demangled: webrtc::Resampler::ComputeResamplerMode(int, int, webrtc::Resampler::ResamplerMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Resampler20ComputeResamplerModeEiiPNS0_13ResamplerModeE(void) {
    ALOGD("_ZN6webrtc9Resampler20ComputeResamplerModeEiiPNS0_13ResamplerModeE() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(webrtc::CascadedBiQuadFilter::BiQuadCoefficients const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilterC2ERKNS0_18BiQuadCoefficientsEj(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilterC2ERKNS0_18BiQuadCoefficientsEj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::recommended_stream_analog_level_locked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl38recommended_stream_analog_level_lockedEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl38recommended_stream_analog_level_lockedEv() called");
    return 0;
}

/* Demangled: webrtc::metrics::Enable() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics6EnableEv(void) {
    ALOGD("_ZN6webrtc7metrics6EnableEv() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::Run(unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResampler3RunEjPf(void) {
    ALOGD("_ZN6webrtc17PushSincResampler3RunEjPf() called");
    return 0;
}

/* Demangled: webrtc::Agc::voice_probability() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc3Agc17voice_probabilityEv(void) {
    ALOGD("_ZNK6webrtc3Agc17voice_probabilityEv() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kLowerApFactorsFloat */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kLowerApFactorsFloat = NULL;

/* Demangled: webrtc::EchoControlMobileImpl::set_routing_mode(webrtc::EchoControlMobileImpl::RoutingMode) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS0_11RoutingModeE(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl16set_routing_modeENS0_11RoutingModeE() called");
    return 0;
}

/* Demangled: webrtc::S16ToFloat(short const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10S16ToFloatEPKsjPf(void) {
    ALOGD("_ZN6webrtc10S16ToFloatEPKsjPf() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBankC2Ev(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBankC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: WebRtc_WriteBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_WriteBuffer(void) {
    ALOGD("WebRtc_WriteBuffer() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Accumulate(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator10AccumulateEff(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator10AccumulateEff() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplD1Ev(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplD1Ev() called");
    return 0;
}

/* Demangled: WebRtcAecm_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Init(void) {
    ALOGD("WebRtcAecm_Init() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::Filter(short const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilter6FilterEPKsjPf(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilter6FilterEPKsjPf() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_3ExEESA_NS4_ILS5_1EiEESA_EEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::LoudnessHistogram::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram5ResetEv(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram5ResetEv() called");
    return 0;
}

/* Demangled: pffft_zreorder */
extern "C" __attribute__((visibility("default"))) int pffft_zreorder(void) {
    ALOGD("pffft_zreorder() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveAgc::Process(webrtc::AudioFrameView<float>, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgc7ProcessENS_14AudioFrameViewIfEEf(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgc7ProcessENS_14AudioFrameViewIfEEf() called");
    return 0;
}

/* Demangled: webrtc::Limiter::~Limiter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7LimiterD1Ev(void) {
    ALOGD("_ZN6webrtc7LimiterD1Ev() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Mean() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer4MeanEv(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer4MeanEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_SplitAndFilterFloat */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_SplitAndFilterFloat(void) {
    ALOGD("WebRtcIsac_SplitAndFilterFloat() called");
    return 0;
}

/* Demangled: webrtc::BlockFramer::InsertBlock(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockFramer11InsertBlockERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE(void) {
    ALOGD("_ZN6webrtc11BlockFramer11InsertBlockERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE() called");
    return 0;
}

/* Demangled: webrtc::CoarseFilterUpdateGain::CoarseFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::CoarseConfiguration const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22CoarseFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj(void) {
    ALOGD("_ZN6webrtc22CoarseFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter19CoarseConfigurationEj() called");
    return 0;
}

/* Demangled: webrtc::SubbandNearendDetector::SubbandNearendDetector(webrtc::EchoCanceller3Config::Suppressor::SubbandNearendDetection const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22SubbandNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj(void) {
    ALOGD("_ZN6webrtc22SubbandNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj() called");
    return 0;
}

/* Demangled: webrtc::Limiter::SetSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7Limiter13SetSampleRateEj(void) {
    ALOGD("_ZN6webrtc7Limiter13SetSampleRateEj() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::Suppress(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl8SuppressEPfS1_S1_(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl8SuppressEPfS1_S1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplD0Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplD0Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats(webrtc::AudioProcessingStats const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20AudioProcessingStatsC2ERKS0_(void) {
    ALOGD("_ZN6webrtc20AudioProcessingStatsC2ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::Resample(short const*, unsigned int, short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResampler8ResampleEPKsjPsj(void) {
    ALOGD("_ZN6webrtc17PushSincResampler8ResampleEPKsjPsj() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::Analysis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter8AnalysisEPKNS_13ChannelBufferIfEEPS2_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter8AnalysisEPKNS_13ChannelBufferIfEEPS2_() called");
    return 0;
}

/* Demangled: webrtc::EchoPathDelayEstimator::EchoPathDelayEstimator(webrtc::ApmDataDumper*, webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22EchoPathDelayEstimatorC1EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc22EchoPathDelayEstimatorC1EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::optional<unsigned int> > webrtc::ParseTypedParameter<std::__1::optional<unsigned int> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIjEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterINSt3__18optionalIjEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::SincResampler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13SincResamplerE = NULL;

/* Demangled: webrtc::SpeechProbabilityEstimator::SpeechProbabilityEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26SpeechProbabilityEstimatorC2Ev(void) {
    ALOGD("_ZN6webrtc26SpeechProbabilityEstimatorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::GetAlpha() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21StationarityEstimator13NoiseSpectrum8GetAlphaEv(void) {
    ALOGD("_ZNK6webrtc21StationarityEstimator13NoiseSpectrum8GetAlphaEv() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::LowNoiseRenderDetector::Detect(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGain22LowNoiseRenderDetector6DetectERKNSt3__16vectorINS3_INS3_IfNS2_9allocatorIfEEEENS4_IS6_EEEENS4_IS8_EEEE(void) {
    ALOGD("_ZN6webrtc15SuppressionGain22LowNoiseRenderDetector6DetectERKNSt3__16vectorINS3_INS3_IfNS2_9allocatorIfEEEENS4_IS6_EEEENS4_IS8_EEEE() called");
    return 0;
}

/* Demangled: NsInit(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z6NsInitP16preproc_effect_s(void) {
    ALOGD("_Z6NsInitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::voice_probability() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc16AgcManagerDirect17voice_probabilityEv(void) {
    ALOGD("_ZNK6webrtc16AgcManagerDirect17voice_probabilityEv() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::SimpleStringBuilder(rtc::ArrayView<char, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderC1ENS_9ArrayViewIcLin4711EEE(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderC1ENS_9ArrayViewIcLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::PoleZeroFilter(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilterC2EPKfjS2_j(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilterC2EPKfjS2_j() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::EmptyRenderQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller316EmptyRenderQueueEv(void) {
    ALOGD("_ZN6webrtc14EchoCanceller316EmptyRenderQueueEv() called");
    return 0;
}

/* Demangled: webrtc::aec3::MovingAverage::~MovingAverage() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec313MovingAverageD2Ev(void) {
    ALOGD("_ZN6webrtc4aec313MovingAverageD2Ev() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)7, double> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_SA_NS4_ILS5_7EdEESA_NS4_ILS5_1EiEESA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_SB_SA_EEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::PushResampler<short>::~PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIsED2Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIsED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<webrtc::TwoBandsStates, std::__1::allocator<webrtc::TwoBandsStates> >::vector(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEEC2Ej(void) {
    ALOGD("_ZNSt3__16vectorIN6webrtc14TwoBandsStatesENS_9allocatorIS2_EEEC2Ej() called");
    return 0;
}

/* Demangled: webrtc::aec3::ErlComputer(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec311ErlComputerERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE(void) {
    ALOGD("_ZN6webrtc4aec311ErlComputerERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::ApiCallJitterMetrics::WillReportMetricsAtNextCapture() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20ApiCallJitterMetrics30WillReportMetricsAtNextCaptureEv(void) {
    ALOGD("_ZNK6webrtc20ApiCallJitterMetrics30WillReportMetricsAtNextCaptureEv() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ERKS1_(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::GetEchoPathGain(webrtc::AecState const&, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21ResidualEchoEstimator15GetEchoPathGainERKNS_8AecStateEb(void) {
    ALOGD("_ZNK6webrtc21ResidualEchoEstimator15GetEchoPathGainERKNS_8AecStateEb() called");
    return 0;
}

/* Demangled: webrtc::NoiseLevelEstimator::Initialize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NoiseLevelEstimator10InitializeEi(void) {
    ALOGD("_ZN6webrtc19NoiseLevelEstimator10InitializeEi() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPre */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPre(void) {
    ALOGD("WebRtcIsac_PitchfilterPre() called");
    return 0;
}

/* Demangled: webrtc::Config::Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc6ConfigC1Ev(void) {
    ALOGD("_ZN6webrtc6ConfigC1Ev() called");
    return 0;
}

/* Demangled: webrtc::NormalizedCovarianceEstimator::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29NormalizedCovarianceEstimator5ClearEv(void) {
    ALOGD("_ZN6webrtc29NormalizedCovarianceEstimator5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::RefinedFilterUpdateGain::RefinedFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::RefinedConfiguration const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23RefinedFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj(void) {
    ALOGD("_ZN6webrtc23RefinedFilterUpdateGainC1ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::Value() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIdE5ValueEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIdE5ValueEv() called");
    return 0;
}

/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26TimestampWrapAroundHandlerC2Ev(void) {
    ALOGD("_ZN3rtc26TimestampWrapAroundHandlerC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_front(float* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::Analyze(rtc::ArrayView<short const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKsLin4711EEE(void) {
    ALOGD("_ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKsLin4711EEE() called");
    return 0;
}

/* Demangled: WebRtcSpl_ScaleAndAddVectorsWithRoundC */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleAndAddVectorsWithRoundC(void) {
    ALOGD("WebRtcSpl_ScaleAndAddVectorsWithRoundC() called");
    return 0;
}

/* Demangled: WebRtcVad_Downsampling */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Downsampling(void) {
    ALOGD("WebRtcVad_Downsampling() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::~ReverbDecayEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimatorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialOptional<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18FieldTrialOptionalIiEE = NULL;

/* Demangled: Session_CreateEffect */
extern "C" __attribute__((visibility("default"))) int Session_CreateEffect(void) {
    ALOGD("Session_CreateEffect() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::DebugDumpEstimate() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveModeLevelEstimator17DebugDumpEstimateEv(void) {
    ALOGD("_ZN6webrtc26AdaptiveModeLevelEstimator17DebugDumpEstimateEv() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Get(int, double*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17VadCircularBuffer3GetEiPd(void) {
    ALOGD("_ZNK6webrtc17VadCircularBuffer3GetEiPd() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::GainParameters::GainParameters(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGain14GainParametersC1ERKNS_20EchoCanceller3Config10Suppressor6TuningE(void) {
    ALOGD("_ZN6webrtc15SuppressionGain14GainParametersC1ERKNS_20EchoCanceller3Config10Suppressor6TuningE() called");
    return 0;
}

/* Demangled: webrtc::rftfsub_128_neon(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16rftfsub_128_neonEPf(void) {
    ALOGD("_ZN6webrtc16rftfsub_128_neonEPf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::timestamp_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage10timestamp_E = NULL;

/* Demangled: webrtc::Pffft::FloatBuffer::GetView() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft11FloatBuffer7GetViewEv(void) {
    ALOGD("_ZN6webrtc5Pffft11FloatBuffer7GetViewEv() called");
    return 0;
}

/* Demangled: webrtc::S16ToFloatS16(short const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13S16ToFloatS16EPKsjPf(void) {
    ALOGD("_ZN6webrtc13S16ToFloatS16EPKsjPf() called");
    return 0;
}

/* Demangled: webrtc::metrics::SampleInfo::SampleInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics10SampleInfoC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij(void) {
    ALOGD("_ZN6webrtc7metrics10SampleInfoC1ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij() called");
    return 0;
}

/* Demangled: rtc::hex_decode(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_decodeEPcjPKcj(void) {
    ALOGD("_ZN3rtc10hex_decodeEPcjPKcj() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config5DelayC2Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config5DelayC2Ev() called");
    return 0;
}

/* Demangled: webrtc::aec3::ApplyFilter_Neon(webrtc::RenderBuffer const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, webrtc::FftData*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec316ApplyFilter_NeonERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_(void) {
    ALOGD("_ZN6webrtc4aec316ApplyFilter_NeonERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_() called");
    return 0;
}

/* Demangled: webrtc::RenderBuffer::RenderBuffer(webrtc::BlockBuffer*, webrtc::SpectrumBuffer*, webrtc::FftBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12RenderBufferC1EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE(void) {
    ALOGD("_ZN6webrtc12RenderBufferC1EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE() called");
    return 0;
}

/* Demangled: webrtc::ReverbModel::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11ReverbModel5ResetEv(void) {
    ALOGD("_ZN6webrtc11ReverbModel5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_VirtualMic(void*, short* const*, unsigned int, unsigned int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20WebRtcAgc_VirtualMicEPvPKPsjjiPi(void) {
    ALOGD("_ZN6webrtc20WebRtcAgc_VirtualMicEPvPKPsjjiPi() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::StationarityEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimatorC2Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimatorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeGainController1() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25InitializeGainController1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25InitializeGainController1Ev() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::RmsLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevelC1Ev(void) {
    ALOGD("_ZN6webrtc8RmsLevelC1Ev() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::ComputeNumberOfActiveFilterSections(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimator35ComputeNumberOfActiveFilterSectionsERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimator35ComputeNumberOfActiveFilterSectionsERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_S7_(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_S7_() called");
    return 0;
}

/* Exported Object: sEffectInterfaceReverse */
extern "C" __attribute__((visibility("default"))) void* sEffectInterfaceReverse = NULL;

/* Demangled: webrtc::AudioProcessingImpl::ApplyConfig(webrtc::AudioProcessing::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl11ApplyConfigERKNS_15AudioProcessing6ConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl11ApplyConfigERKNS_15AudioProcessing6ConfigE() called");
    return 0;
}

/* Demangled: void webrtc::DownmixInterleavedToMono<short>(short const*, unsigned int, int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_(void) {
    ALOGD("_ZN6webrtc24DownmixInterleavedToMonoIsEEvPKT_jiPS1_() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::ActiveProcessing() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc14EchoCanceller316ActiveProcessingEv(void) {
    ALOGD("_ZNK6webrtc14EchoCanceller316ActiveProcessingEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_history_size(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19WebRtc_history_sizeEPKv(void) {
    ALOGD("_ZN6webrtc19WebRtc_history_sizeEPKv() called");
    return 0;
}

/* Demangled: webrtc::metrics::SampleInfo::~SampleInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics10SampleInfoD2Ev(void) {
    ALOGD("_ZN6webrtc7metrics10SampleInfoD2Ev() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadD1Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadD1Ev() called");
    return 0;
}

/* Demangled: webrtc::BlockFramer::BlockFramer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockFramerC1Ejj(void) {
    ALOGD("_ZN6webrtc11BlockFramerC1Ejj() called");
    return 0;
}

/* Demangled: webrtc::RefinedFilterUpdateGain::UpdateCurrentConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23RefinedFilterUpdateGain19UpdateCurrentConfigEv(void) {
    ALOGD("_ZN6webrtc23RefinedFilterUpdateGain19UpdateCurrentConfigEv() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::GainToNoAudibleEcho(std::__1::array<float, 65u> const&, std::__1::array<float, 65u> const&, std::__1::array<float, 65u> const&, std::__1::array<float, 65u>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15SuppressionGain19GainToNoAudibleEchoERKNSt3__15arrayIfLj65EEES5_S5_PS3_(void) {
    ALOGD("_ZNK6webrtc15SuppressionGain19GainToNoAudibleEchoERKNSt3__15arrayIfLj65EEES5_S5_PS3_() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_SoftResetDelayEstimatorFarend(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc36WebRtc_SoftResetDelayEstimatorFarendEPvi(void) {
    ALOGD("_ZN6webrtc36WebRtc_SoftResetDelayEstimatorFarendEPvi() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoDetector::~ResidualEchoDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ResidualEchoDetectorD2Ev(void) {
    ALOGD("_ZN6webrtc20ResidualEchoDetectorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::operator=(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningaSERKS2_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor6TuningaSERKS2_() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample8khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample8khzTo48khz(void) {
    ALOGD("WebRtcSpl_Resample8khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::BlockProcessor, std::__1::default_delete<webrtc::BlockProcessor> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::ErleInstantaneous(webrtc::EchoCanceller3Config::Erle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC2ERKNS_20EchoCanceller3Config4ErleE(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC2ERKNS_20EchoCanceller3Config4ErleE() called");
    return 0;
}

/* Demangled: webrtc::ReverbFrequencyResponse::Update(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, int, std::__1::optional<float> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEiRKNS1_8optionalIfEEb(void) {
    ALOGD("_ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEiRKNS1_8optionalIfEEb() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::~PlatformThread() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadD2Ev(void) {
    ALOGD("_ZN3rtc14PlatformThreadD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::~ApmRenderState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateD1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl14ApmRenderStateD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::~ApmStatsReporter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD2Ev() called");
    return 0;
}

/* Demangled: webrtc::MeanVarianceEstimator::mean() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21MeanVarianceEstimator4meanEv(void) {
    ALOGD("_ZNK6webrtc21MeanVarianceEstimator4meanEv() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::LogRegionStats(webrtc::InterpolatedGainCurve::Stats const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21InterpolatedGainCurve12RegionLogger14LogRegionStatsERKNS0_5StatsE(void) {
    ALOGD("_ZNK6webrtc21InterpolatedGainCurve12RegionLogger14LogRegionStatsERKNS0_5StatsE() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::HighPassFilter(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilterC2Eij(void) {
    ALOGD("_ZN6webrtc14HighPassFilterC2Eij() called");
    return 0;
}

/* Demangled: pffft_new_setup */
extern "C" __attribute__((visibility("default"))) int pffft_new_setup(void) {
    ALOGD("pffft_new_setup() called");
    return 0;
}

/* Demangled: webrtc::metrics::HistogramFactoryGetCountsLinear(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics31HistogramFactoryGetCountsLinearERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii(void) {
    ALOGD("_ZN6webrtc7metrics31HistogramFactoryGetCountsLinearERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample32khzTo24khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample32khzTo24khz(void) {
    ALOGD("WebRtcSpl_Resample32khzTo24khz() called");
    return 0;
}

/* Exported Object: vtable for webrtc::CompositionConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc20CompositionConverterE = NULL;

/* Demangled: AecCreate(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AecCreateP16preproc_effect_s(void) {
    ALOGD("_Z9AecCreateP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::AecDumpFactory::Create(__sFILE*, long long, rtc::TaskQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AecDumpFactory6CreateEP7__sFILExPN3rtc9TaskQueueE(void) {
    ALOGD("_ZN6webrtc14AecDumpFactory6CreateEP7__sFILExPN3rtc9TaskQueueE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::UpdateStatistics(webrtc::AudioProcessingStats const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporter16UpdateStatisticsERKNS_20AudioProcessingStatsE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16ApmStatsReporter16UpdateStatisticsERKNS_20AudioProcessingStatsE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplC2Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplC2Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FIRFilterNEON */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13FIRFilterNEONE = NULL;

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::vector(unsigned int, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEEC2EjRKb() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::SetAudioBufferDelay(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller319SetAudioBufferDelayEi(void) {
    ALOGD("_ZN6webrtc14EchoCanceller319SetAudioBufferDelayEi() called");
    return 0;
}

/* Demangled: webrtc::EchoPathVariability::EchoPathVariability(bool, webrtc::EchoPathVariability::DelayAdjustment, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19EchoPathVariabilityC1EbNS0_15DelayAdjustmentEb(void) {
    ALOGD("_ZN6webrtc19EchoPathVariabilityC1EbNS0_15DelayAdjustmentEb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<double>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialFlag::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc14FieldTrialFlagcvbEv(void) {
    ALOGD("_ZNK6webrtc14FieldTrialFlagcvbEv() called");
    return 0;
}

/* Demangled: UuidToProcId(audio_uuid_s const*) */
extern "C" __attribute__((visibility("default"))) int _Z12UuidToProcIdPK12audio_uuid_s(void) {
    ALOGD("_Z12UuidToProcIdPK12audio_uuid_s() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::~EchoCanceller3() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller3D1Ev(void) {
    ALOGD("_ZN6webrtc14EchoCanceller3D1Ev() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20SubbandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void) {
    ALOGD("_ZNK6webrtc20SubbandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::NoiseSpectrum() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator13NoiseSpectrumC1Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator13NoiseSpectrumC1Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::GetMaxGain(rtc::ArrayView<float, -4711>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15SuppressionGain10GetMaxGainEN3rtc9ArrayViewIfLin4711EEE(void) {
    ALOGD("_ZNK6webrtc15SuppressionGain10GetMaxGainEN3rtc9ArrayViewIfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::SetupEventTracer(unsigned char const* (*)(char const*), void (*)(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char)) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE(void) {
    ALOGD("_ZN6webrtc16SetupEventTracerEPFPKhPKcEPFvcS1_S3_yiPS3_S1_PKyhE() called");
    return 0;
}

/* Exported Object: webrtc::WebRtcAecm_StoreAdaptiveChannel */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc31WebRtcAecm_StoreAdaptiveChannelE = NULL;

/* Demangled: WebRtcAecm_GetEchoPath */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_GetEchoPath(void) {
    ALOGD("WebRtcAecm_GetEchoPath() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKfEES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKfEES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKfEES9_S9_() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::GetLpcPolynomials(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc17GetLpcPolynomialsEPdj() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveAgc::~AdaptiveAgc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgcD2Ev(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgcD2Ev() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::streams_empty_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage14streams_empty_E = NULL;

/* Demangled: rtc::hex_decode(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10hex_decodeEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::RegionLogger(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurve12RegionLoggerC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::SubmoduleStates(bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC2Ebbb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15SubmoduleStatesC2Ebbb() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessRenderStreamLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25ProcessRenderStreamLockedEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25ProcessRenderStreamLockedEv() called");
    return 0;
}

/* Demangled: webrtc::Limiter::Process(webrtc::AudioFrameView<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7Limiter7ProcessENS_14AudioFrameViewIfEE(void) {
    ALOGD("_ZN6webrtc7Limiter7ProcessENS_14AudioFrameViewIfEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::__map_value_compare<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::less<std::__1::basic_string_view<char, std::__1::char_traits<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeC1EjPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNodeC1EjPKfj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::RenderFullBandProcessingActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates30RenderFullBandProcessingActiveEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates30RenderFullBandProcessingActiveEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_UpBy2IntToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpBy2IntToInt(void) {
    ALOGD("WebRtcSpl_UpBy2IntToInt() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::~SuppressionGain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGainD1Ev(void) {
    ALOGD("_ZN6webrtc15SuppressionGainD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::~SignalDependentErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(int, int, int, bool, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC2Eiiibbi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC2Eiiibbi() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::SetPriority(rtc::ThreadPriority) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE(void) {
    ALOGD("_ZN3rtc14PlatformThread11SetPriorityENS_14ThreadPriorityE() called");
    return 0;
}

/* Demangled: webrtc::MovingMax::MovingMax(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9MovingMaxC2Ej(void) {
    ALOGD("_ZN6webrtc9MovingMaxC2Ej() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimator::~LevelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14LevelEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc14LevelEstimatorD1Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_AnalysisQMF */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AnalysisQMF(void) {
    ALOGD("WebRtcSpl_AnalysisQMF() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::~SincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerD1Ev(void) {
    ALOGD("_ZN6webrtc13SincResamplerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::GetGain(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, webrtc::RenderSignalAnalyzer const&, webrtc::AecState const&, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&, float*, std::__1::array<float, 65u>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGain7GetGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_S7_RKNS_20RenderSignalAnalyzerERKNS_8AecStateERKNS3_6vectorINSE_INSE_IfNS3_9allocatorIfEEEENSF_ISH_EEEENSF_ISJ_EEEEPfPS5_(void) {
    ALOGD("_ZN6webrtc15SuppressionGain7GetGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_S7_RKNS_20RenderSignalAnalyzerERKNS_8AecStateERKNS3_6vectorINSE_INSE_IfNS3_9allocatorIfEEEENSF_ISH_EEEENSF_ISJ_EEEEPfPS5_() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::ComputeOnPitchBuffer(rtc::ArrayView<float const, 432>, rtc::ArrayView<float, 147>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25AutoCorrelationCalculator20ComputeOnPitchBufferEN3rtc9ArrayViewIKfLi432EEENS3_IfLi147EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad25AutoCorrelationCalculator20ComputeOnPitchBufferEN3rtc9ArrayViewIKfLi432EEENS3_IfLi147EEE() called");
    return 0;
}

/* Exported Object: WebRtcSpl_ScaleAndAddVectorsWithRound */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_ScaleAndAddVectorsWithRound = NULL;

/* Demangled: WebRtcVad_Process */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Process(void) {
    ALOGD("WebRtcVad_Process() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::PeakEnveloper::Query() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19SaturationProtector13PeakEnveloper5QueryEv(void) {
    ALOGD("_ZNK6webrtc19SaturationProtector13PeakEnveloper5QueryEv() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::SetRegionToAnalyze(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer18SetRegionToAnalyzeEj(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer18SetRegionToAnalyzeEj() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::SpectralFeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC1Ev() called");
    return 0;
}

/* Demangled: rtc::internal::RaceCheckerScope::RaceDetected() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc8internal16RaceCheckerScope12RaceDetectedEv(void) {
    ALOGD("_ZNK3rtc8internal16RaceCheckerScope12RaceDetectedEv() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::ApplyBiQuad(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>, webrtc::CascadedBiQuadFilter::BiQuad*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter11ApplyBiQuadEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEEPNS0_6BiQuadE(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter11ApplyBiQuadEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEEPNS0_6BiQuadE() called");
    return 0;
}

/* Demangled: Session_SetReverseConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AttachAecDump(std::__1::unique_ptr<webrtc::AecDump, std::__1::default_delete<webrtc::AecDump> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl13AttachAecDumpENSt3__110unique_ptrINS_7AecDumpENS1_14default_deleteIS3_EEEE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl13AttachAecDumpENSt3__110unique_ptrINS_7AecDumpENS1_14default_deleteIS3_EEEE() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AnalyzePreProcess(webrtc::AudioBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKNS_11AudioBufferE() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)7, double> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE7EdEES6_EEEvPKciS8_DpRKT_E1t = NULL;

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvbEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvbEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::ResetDecayEstimation() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator20ResetDecayEstimationEv(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator20ResetDecayEstimationEv() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<float>::PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIfEC1Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIfEC1Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::SuppressionGain(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGainC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij(void) {
    ALOGD("_ZN6webrtc15SuppressionGainC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij() called");
    return 0;
}

/* Demangled: webrtc::GainController2::~GainController2() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController2D1Ev(void) {
    ALOGD("_ZN6webrtc15GainController2D1Ev() called");
    return 0;
}

/* Demangled: webrtc::CircularBuffer::CircularBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14CircularBufferC1Ej(void) {
    ALOGD("_ZN6webrtc14CircularBufferC1Ej() called");
    return 0;
}

/* Demangled: webrtc::ApmDataDumper::ApmDataDumper(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ApmDataDumperC2Ei(void) {
    ALOGD("_ZN6webrtc13ApmDataDumperC2Ei() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::Adapt(webrtc::RenderBuffer const&, webrtc::FftData const&, std::__1::vector<float, std::__1::allocator<float> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataEPNSt3__16vectorIfNS7_9allocatorIfEEEE(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataEPNSt3__16vectorIfNS7_9allocatorIfEEEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<int>::SetForTest(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIiE10SetForTestEi(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIiE10SetForTestEi() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<double>::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIdE3GetEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIdE3GetEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIjEptEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIjEptEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_MemCpyReversedOrder */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MemCpyReversedOrder(void) {
    ALOGD("WebRtcSpl_MemCpyReversedOrder() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample22khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample22khzTo8khz(void) {
    ALOGD("WebRtcSpl_Resample22khzTo8khz() called");
    return 0;
}

/* Demangled: webrtc::rftbsub_128_neon(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16rftbsub_128_neonEPf(void) {
    ALOGD("_ZN6webrtc16rftbsub_128_neonEPf() called");
    return 0;
}

/* Demangled: rtc::ScopedYieldPolicy::YieldExecution() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17ScopedYieldPolicy14YieldExecutionEv(void) {
    ALOGD("_ZN3rtc17ScopedYieldPolicy14YieldExecutionEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample48khzTo32khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample48khzTo32khz(void) {
    ALOGD("WebRtcSpl_Resample48khzTo32khz() called");
    return 0;
}

/* Demangled: webrtc::RenderDelayBuffer::Create(webrtc::EchoCanceller3Config const&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17RenderDelayBuffer6CreateERKNS_20EchoCanceller3ConfigEij(void) {
    ALOGD("_ZN6webrtc17RenderDelayBuffer6CreateERKNS_20EchoCanceller3ConfigEij() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplD0Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplD0Ev() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::ExtractFeatures(short const*, unsigned int, AudioFeatures*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures(void) {
    ALOGD("_ZN6webrtc12VadAudioProc15ExtractFeaturesEPKsjP13AudioFeatures() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::PeakEnveloper::Process(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtector13PeakEnveloper7ProcessEf(void) {
    ALOGD("_ZN6webrtc19SaturationProtector13PeakEnveloper7ProcessEf() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::proc_sample_rate_hz() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl19proc_sample_rate_hzEv() called");
    return 0;
}

/* Demangled: webrtc::Limiter::LastAudioLevel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7Limiter14LastAudioLevelEv(void) {
    ALOGD("_ZNK6webrtc7Limiter14LastAudioLevelEv() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEEEEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::aec3::AdaptPartitions_Neon(webrtc::RenderBuffer const&, webrtc::FftData const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec320AdaptPartitions_NeonERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE(void) {
    ALOGD("_ZN6webrtc4aec320AdaptPartitions_NeonERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::EchoCanceller3 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc14EchoCanceller3E = NULL;

/* Demangled: webrtc::WebRtc_set_history_size(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23WebRtc_set_history_sizeEPvi(void) {
    ALOGD("_ZN6webrtc23WebRtc_set_history_sizeEPvi() called");
    return 0;
}

/* Demangled: webrtc::metrics::SparseHistogramFactoryGetEnumeration(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics36SparseHistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZN6webrtc7metrics36SparseHistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_MeanEstimatorFix(int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23WebRtc_MeanEstimatorFixEiiPi(void) {
    ALOGD("_ZN6webrtc23WebRtc_MeanEstimatorFixEiiPi() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKPKfRKNS_12StreamConfigES7_PKPf() called");
    return 0;
}

/* Demangled: WebRtcSpl_Energy */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Energy(void) {
    ALOGD("WebRtcSpl_Energy() called");
    return 0;
}

/* Demangled: webrtc::FixedDigitalLevelEstimator::CheckParameterCombination() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26FixedDigitalLevelEstimator25CheckParameterCombinationEv(void) {
    ALOGD("_ZN6webrtc26FixedDigitalLevelEstimator25CheckParameterCombinationEv() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::~InterpolatedGainCurve() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurveD2Ev(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurveD2Ev() called");
    return 0;
}

/* Demangled: webrtc::BlockBuffer::~BlockBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockBufferD1Ev(void) {
    ALOGD("_ZN6webrtc11BlockBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::SmoothStationaryPerFreq() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator23SmoothStationaryPerFreqEv(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator23SmoothStationaryPerFreqEv() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::cftmdl_128(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft10cftmdl_128EPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft10cftmdl_128EPf() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEi(void) {
    ALOGD("_ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityENS_15LogErrorContextEi() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::routing_mode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl12routing_modeEv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl12routing_modeEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_FreeCore(webrtc::AecmCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19WebRtcAecm_FreeCoreEPNS_8AecmCoreE(void) {
    ALOGD("_ZN6webrtc19WebRtcAecm_FreeCoreEPNS_8AecmCoreE() called");
    return 0;
}

/* Demangled: webrtc::ErlEstimator::ErlEstimator(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12ErlEstimatorC1Ej(void) {
    ALOGD("_ZN6webrtc12ErlEstimatorC1Ej() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::CascadedBiQuadFilter::BiQuad, std::__1::allocator<webrtc::CascadedBiQuadFilter::BiQuad> >::__push_back_slow_path<webrtc::CascadedBiQuadFilter::BiQuad>(webrtc::CascadedBiQuadFilter::BiQuad&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6webrtc20CascadedBiQuadFilter6BiQuadENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6webrtc20CascadedBiQuadFilter6BiQuadENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialParameter<bool> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19FieldTrialParameterIbEE = NULL;

/* Demangled: WebRtcIsac_LevDurb */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_LevDurb(void) {
    ALOGD("WebRtcIsac_LevDurb() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogramC1Ei(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogramC1Ei() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::RemoveTransient(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer15RemoveTransientEid(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer15RemoveTransientEid() called");
    return 0;
}

/* Demangled: webrtc::AecState::InitialState::InitialState(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState12InitialStateC1ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc8AecState12InitialStateC1ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE4findIS7_EENS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: webrtc::GainApplier::SetGainFactor(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11GainApplier13SetGainFactorEf(void) {
    ALOGD("_ZN6webrtc11GainApplier13SetGainFactorEf() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEENS4_ILS5_1EiEES6_NS4_ILS5_9EPKcEES6_EEEvS9_iS9_DpRKT_E1t = NULL;

/* Demangled: webrtc::WienerFilter::Update(int, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12WienerFilter6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_(void) {
    ALOGD("_ZN6webrtc12WienerFilter6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::AdaptiveFirFilter(unsigned int, unsigned int, unsigned int, unsigned int, webrtc::Aec3Optimization, webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilterC2EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilterC2EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: pffft_cplx_preprocess */
extern "C" __attribute__((visibility("default"))) int pffft_cplx_preprocess(void) {
    ALOGD("pffft_cplx_preprocess() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_rdft(unsigned int, int, float*, unsigned int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11WebRtc_rdftEjiPfPjS0_(void) {
    ALOGD("_ZN6webrtc11WebRtc_rdftEjiPfPjS0_() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEEEEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::~RegionLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerD1Ev(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurve12RegionLoggerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::~AdaptiveFirFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilterD1Ev(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilterD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, webrtc::EchoCanceller3Config::Delay::AlignmentMixing const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AlignmentMixerC1EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE(void) {
    ALOGD("_ZN6webrtc14AlignmentMixerC1EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE() called");
    return 0;
}

/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Update(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ApiCallJitterMetrics6Jitter6UpdateEi(void) {
    ALOGD("_ZN6webrtc20ApiCallJitterMetrics6Jitter6UpdateEi() called");
    return 0;
}

/* Demangled: webrtc::ErleEstimator::ErleEstimator(unsigned int, webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ErleEstimatorC2EjRKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc13ErleEstimatorC2EjRKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutput::SubtractorOutput() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SubtractorOutputC2Ev(void) {
    ALOGD("_ZN6webrtc16SubtractorOutputC2Ev() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(std::__1::complex<float>, std::__1::complex<float>, float, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ENSt3__17complexIfEES4_fb(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ENSt3__17complexIfEES4_fb() called");
    return 0;
}

/* Demangled: webrtc::field_trial::GetFieldTrialString() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11field_trial19GetFieldTrialStringEv(void) {
    ALOGD("_ZN6webrtc11field_trial19GetFieldTrialStringEv() called");
    return 0;
}

/* Demangled: rtc::tracing::SetupInternalTracer() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing19SetupInternalTracerEv(void) {
    ALOGD("_ZN3rtc7tracing19SetupInternalTracerEv() called");
    return 0;
}

/* Demangled: webrtc::AecState::HandleEchoPathChange(webrtc::EchoPathVariability const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState20HandleEchoPathChangeERKNS_19EchoPathVariabilityE(void) {
    ALOGD("_ZN6webrtc8AecState20HandleEchoPathChangeERKNS_19EchoPathVariabilityE() called");
    return 0;
}

/* Demangled: std::__1::optional<unsigned int> webrtc::ParseTypedParameter<unsigned int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterIjEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterIjEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)3, long long> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_3ExEEEEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_S7_(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_S7_() called");
    return 0;
}

/* Exported Object: vtable for rtc::PlatformThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3rtc14PlatformThreadE = NULL;

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::operator*() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIjEdeEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIjEdeEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::CreateAndAttachAecDump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long long, rtc::TaskQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferC1Ejjjjj(void) {
    ALOGD("_ZN6webrtc11AudioBufferC1Ejjjjj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::QueueNonbandedRenderAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25QueueNonbandedRenderAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25QueueNonbandedRenderAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::metrics::NumEvents(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics9NumEventsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZN6webrtc7metrics9NumEventsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Exported Object: webrtc::WebRtcAecm_CalcLinearEnergies */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc29WebRtcAecm_CalcLinearEnergiesE = NULL;

/* Demangled: webrtc::NrFft::Ifft(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5NrFft4IfftEN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc5NrFft4IfftEN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::~FullyConnectedLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19FullyConnectedLayerD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad19FullyConnectedLayerD1Ev() called");
    return 0;
}

/* Demangled: AgcDisable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10AgcDisableP16preproc_effect_s(void) {
    ALOGD("_Z10AgcDisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: WebRtcSpl_Sqrt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Sqrt(void) {
    ALOGD("WebRtcSpl_Sqrt() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(webrtc::CascadedBiQuadFilter::BiQuadCoefficients const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilterC1ERKNS0_18BiQuadCoefficientsEj(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilterC1ERKNS0_18BiQuadCoefficientsEj() called");
    return 0;
}

/* Demangled: webrtc::EchoRemover::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11EchoRemover6CreateERKNS_20EchoCanceller3ConfigEijj(void) {
    ALOGD("_ZN6webrtc11EchoRemover6CreateERKNS_20EchoCanceller3ConfigEijj() called");
    return 0;
}

/* Demangled: ProcIdToUuid(int) */
extern "C" __attribute__((visibility("default"))) int _Z12ProcIdToUuidi(void) {
    ALOGD("_Z12ProcIdToUuidi() called");
    return 0;
}

/* Demangled: webrtc::GainApplier::ApplyGain(webrtc::AudioFrameView<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11GainApplier9ApplyGainENS_14AudioFrameViewIfEE(void) {
    ALOGD("_ZN6webrtc11GainApplier9ApplyGainENS_14AudioFrameViewIfEE() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::CheckSizes(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc14AudioConverter10CheckSizesEjj(void) {
    ALOGD("_ZNK6webrtc14AudioConverter10CheckSizesEjj() called");
    return 0;
}

/* Exported Object: vtable for webrtc::DownmixConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc16DownmixConverterE = NULL;

/* Demangled: webrtc::SuppressionGain::SetInitialState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGain15SetInitialStateEb(void) {
    ALOGD("_ZN6webrtc15SuppressionGain15SetInitialStateEb() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::~FilterAnalyzer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzerD1Ev(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::FindFirstSpectralPeaks(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc22FindFirstSpectralPeaksEPdj() called");
    return 0;
}

/* Demangled: webrtc::Histograms::Histograms() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10HistogramsC2Ev(void) {
    ALOGD("_ZN6webrtc10HistogramsC2Ev() called");
    return 0;
}

/* Demangled: webrtc::NoiseEstimator::PostUpdate(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, 129>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14NoiseEstimator10PostUpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li129EEE(void) {
    ALOGD("_ZN6webrtc14NoiseEstimator10PostUpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li129EEE() called");
    return 0;
}

/* Demangled: webrtc::PriorSignalModelEstimator::PriorSignalModelEstimator(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25PriorSignalModelEstimatorC2Ef(void) {
    ALOGD("_ZN6webrtc25PriorSignalModelEstimatorC2Ef() called");
    return 0;
}

/* Exported Object: webrtc::EchoCanceller3::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc14EchoCanceller315instance_count_E = NULL;

/* Demangled: webrtc::FieldTrialConstrained<double>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double, std::__1::optional<double>, std::__1::optional<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogramC1Ev(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogramC1Ev() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::~TransientDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorD1Ev(void) {
    ALOGD("_ZN6webrtc17TransientDetectorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::Initialize(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl10InitializeEijj(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl10InitializeEijj() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::GainControlImpl::MonoAgcState, std::__1::default_delete<webrtc::GainControlImpl::MonoAgcState> >, std::__1::allocator<std::__1::unique_ptr<webrtc::GainControlImpl::MonoAgcState, std::__1::default_delete<webrtc::GainControlImpl::MonoAgcState> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc15GainControlImpl12MonoAgcStateENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6webrtc15GainControlImpl12MonoAgcStateENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj() called");
    return 0;
}

/* Demangled: WebRtcSpl_FreeRealFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_FreeRealFFT(void) {
    ALOGD("WebRtcSpl_FreeRealFFT() called");
    return 0;
}

/* Demangled: webrtc::NoiseLevelEstimator::NoiseLevelEstimator(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NoiseLevelEstimatorC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc19NoiseLevelEstimatorC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ENS1_17MaskingThresholdsES3_ff(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ENS1_17MaskingThresholdsES3_ff() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::ConvertToLinearIndex(int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi(void) {
    ALOGD("_ZNK6webrtc17VadCircularBuffer20ConvertToLinearIndexEPi() called");
    return 0;
}

/* Demangled: webrtc::NrFft::NrFft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5NrFftC2Ev(void) {
    ALOGD("_ZN6webrtc5NrFftC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_VectorBitShiftW32ToW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_VectorBitShiftW32ToW16(void) {
    ALOGD("WebRtcSpl_VectorBitShiftW32ToW16() called");
    return 0;
}

/* Demangled: webrtc::BlockFramer::InsertBlockAndExtractSubFrame(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&, std::__1::vector<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > >, std::__1::allocator<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockFramer29InsertBlockAndExtractSubFrameERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEEPNS2_INS2_IN3rtc9ArrayViewIfLin4711EEENS3_ISE_EEEENS3_ISG_EEEE(void) {
    ALOGD("_ZN6webrtc11BlockFramer29InsertBlockAndExtractSubFrameERKNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEEPNS2_INS2_IN3rtc9ArrayViewIfLin4711EEENS3_ISE_EEEENS3_ISG_EEEE() called");
    return 0;
}

/* Demangled: rtc::LogMessage::IsNoop(rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage6IsNoopENS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessage6IsNoopENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: rtc::tokenize(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc8tokenizeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: pffftd_aligned_malloc */
extern "C" __attribute__((visibility("default"))) int pffftd_aligned_malloc(void) {
    ALOGD("pffftd_aligned_malloc() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::operator=(webrtc::EchoCanceller3Config::Suppressor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10SuppressoraSERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10SuppressoraSERKS1_() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::ConstrainAndUpdateImpulseResponse(std::__1::vector<float, std::__1::allocator<float> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter33ConstrainAndUpdateImpulseResponseEPNSt3__16vectorIfNS1_9allocatorIfEEEE(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter33ConstrainAndUpdateImpulseResponseEPNSt3__16vectorIfNS1_9allocatorIfEEEE() called");
    return 0;
}

/* Demangled: rtc::TimeDiff32(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10TimeDiff32Ejj(void) {
    ALOGD("_ZN3rtc10TimeDiff32Ejj() called");
    return 0;
}

/* Demangled: webrtc::DownSampler::Initialize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11DownSampler10InitializeEi(void) {
    ALOGD("_ZN6webrtc11DownSampler10InitializeEi() called");
    return 0;
}

/* Demangled: PreProc_Init() */
extern "C" __attribute__((visibility("default"))) int _Z12PreProc_Initv(void) {
    ALOGD("_Z12PreProc_Initv() called");
    return 0;
}

/* Demangled: webrtc::ReverbModelEstimator::ReverbModelEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbModelEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc20ReverbModelEstimatorC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Exported Object: webrtc::AgcManagerDirect::instance_counter_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc16AgcManagerDirect17instance_counter_E = NULL;

/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, webrtc::FieldTrialParameterInterface*> > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceENS_4lessIS6_EENS4_INS_4pairIKS6_S9_EEEEEixERSD_(void) {
    ALOGD("_ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceENS_4lessIS6_EENS4_INS_4pairIKS6_S9_EEEEEixERSD_() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::SimpleStringBuilder(rtc::ArrayView<char, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderC2ENS_9ArrayViewIcLin4711EEE(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderC2ENS_9ArrayViewIcLin4711EEE() called");
    return 0;
}

/* Demangled: pffft_transform_ordered */
extern "C" __attribute__((visibility("default"))) int pffft_transform_ordered(void) {
    ALOGD("pffft_transform_ordered() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_CreateCore() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21WebRtcAecm_CreateCoreEv(void) {
    ALOGD("_ZN6webrtc21WebRtcAecm_CreateCoreEv() called");
    return 0;
}

/* Demangled: webrtc::FftBuffer::FftBuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9FftBufferC1Ejj(void) {
    ALOGD("_ZN6webrtc9FftBufferC1Ejj() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigC1ERKS0_(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigC1ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<int>::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIiE3GetEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIiE3GetEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::~RuntimeSettingEnqueuer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerD2Ev() called");
    return 0;
}

/* Demangled: WebRtcAecm_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Free(void) {
    ALOGD("WebRtcAecm_Free() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::FilterAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzerC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzerC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEptEv() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<float>::Resample(float const*, unsigned int, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIfE8ResampleEPKfjPfj(void) {
    ALOGD("_ZN6webrtc13PushResamplerIfE8ResampleEPKfjPfj() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::OouraFft(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8OouraFftC1Eb(void) {
    ALOGD("_ZN6webrtc8OouraFftC1Eb() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::~MonoAgc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgcD2Ev(void) {
    ALOGD("_ZN6webrtc7MonoAgcD2Ev() called");
    return 0;
}

/* Demangled: webrtc::metrics::GetAndReset(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics11GetAndResetEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_10unique_ptrINS0_10SampleInfoENS1_14default_deleteISA_EEEENS1_4lessIS8_EENS6_INS1_4pairIKS8_SD_EEEEEE(void) {
    ALOGD("_ZN6webrtc7metrics11GetAndResetEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_10unique_ptrINS0_10SampleInfoENS1_14default_deleteISA_EEEENS1_4lessIS8_EENS6_INS1_4pairIKS8_SD_EEEEEE() called");
    return 0;
}

/* Demangled: webrtc::AecState::FilterDelay::FilterDelay(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState11FilterDelayC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc8AecState11FilterDelayC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FullBandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void) {
    ALOGD("_ZNK6webrtc21FullBandErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilter::LogFilterProperties(int, unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc13MatchedFilter19LogFilterPropertiesEijj(void) {
    ALOGD("_ZNK6webrtc13MatchedFilter19LogFilterPropertiesEijj() called");
    return 0;
}

/* Demangled: webrtc::RenderSignalAnalyzer::MaskRegionsAroundNarrowBands(std::__1::array<float, 65u>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20RenderSignalAnalyzer28MaskRegionsAroundNarrowBandsEPNSt3__15arrayIfLj65EEE(void) {
    ALOGD("_ZNK6webrtc20RenderSignalAnalyzer28MaskRegionsAroundNarrowBandsEPNSt3__15arrayIfLj65EEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::~ApmCaptureState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15ApmCaptureStateD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeLocked(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16InitializeLockedERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EstimateDecay(rtc::ArrayView<float const, -4711>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator13EstimateDecayEN3rtc9ArrayViewIKfLin4711EEEi(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator13EstimateDecayEN3rtc9ArrayViewIKfLin4711EEEi() called");
    return 0;
}

/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetectorC1Ev(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetectorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::ComputeOutput(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19FullyConnectedLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad19FullyConnectedLayer13ComputeOutputEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_set_config(void*, webrtc::WebRtcAgcConfig) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20WebRtcAgc_set_configEPvNS_15WebRtcAgcConfigE(void) {
    ALOGD("_ZN6webrtc20WebRtcAgc_set_configEPvNS_15WebRtcAgcConfigE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int> > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, int>, std::__1::__tree_node<std::__1::__value_type<int, int>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EEiEERPNS_15__tree_end_nodeISE_EESF_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiiEENS_19__map_value_compareIiS2_NS_4lessIiEELb1EEENS_9allocatorIS2_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_SC_EEiEERPNS_15__tree_end_nodeISE_EESF_RKT_() called");
    return 0;
}

/* Demangled: WebRtcSpl_DivResultInQ31 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivResultInQ31(void) {
    ALOGD("WebRtcSpl_DivResultInQ31() called");
    return 0;
}

/* Demangled: webrtc::SuppressionParams::SuppressionParams(webrtc::NsConfig::SuppressionLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17SuppressionParamsC2ENS_8NsConfig16SuppressionLevelE(void) {
    ALOGD("_ZN6webrtc17SuppressionParamsC2ENS_8NsConfig16SuppressionLevelE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveDigitalGainApplier::Process(webrtc::SignalWithLevels) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveDigitalGainApplier7ProcessENS_16SignalWithLevelsE(void) {
    ALOGD("_ZN6webrtc26AdaptiveDigitalGainApplier7ProcessENS_16SignalWithLevelsE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameterInterface::~FieldTrialParameterInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28FieldTrialParameterInterfaceD2Ev(void) {
    ALOGD("_ZN6webrtc28FieldTrialParameterInterfaceD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::FrameExtender::FrameExtender(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifier13FrameExtenderC2Ejj(void) {
    ALOGD("_ZN6webrtc16SignalClassifier13FrameExtenderC2Ejj() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_AllocateHistoryBufferMemory(webrtc::BinaryDelayEstimator*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc34WebRtc_AllocateHistoryBufferMemoryEPNS_20BinaryDelayEstimatorEi(void) {
    ALOGD("_ZN6webrtc34WebRtc_AllocateHistoryBufferMemoryEPNS_20BinaryDelayEstimatorEi() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer6CreateEi(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer6CreateEi() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<int>::operator int() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIiEcviEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIiEcviEv() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::GainParameters::GainParameters(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGain14GainParametersC2ERKNS_20EchoCanceller3Config10Suppressor6TuningE(void) {
    ALOGD("_ZN6webrtc15SuppressionGain14GainParametersC2ERKNS_20EchoCanceller3Config10Suppressor6TuningE() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::Update(double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram6UpdateEdd(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram6UpdateEdd() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterNEON::Filter(float const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FIRFilterNEON6FilterEPKfjPf(void) {
    ALOGD("_ZN6webrtc13FIRFilterNEON6FilterEPKfjPf() called");
    return 0;
}

/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, bool, bool, float, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AlignmentMixerC1Ejbbfb(void) {
    ALOGD("_ZN6webrtc14AlignmentMixerC1Ejbbfb() called");
    return 0;
}

/* Demangled: webrtc::RenderBuffer::~RenderBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12RenderBufferD1Ev(void) {
    ALOGD("_ZN6webrtc12RenderBufferD1Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKsEES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKsEES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKsEES7_S7_() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_InitDelayEstimatorFarend(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc31WebRtc_InitDelayEstimatorFarendEPv(void) {
    ALOGD("_ZN6webrtc31WebRtc_InitDelayEstimatorFarendEPv() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::~HighPassFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilterD2Ev(void) {
    ALOGD("_ZN6webrtc14HighPassFilterD2Ev() called");
    return 0;
}

/* Demangled: webrtc::BlockDelayBuffer::BlockDelayBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16BlockDelayBufferC1Ejjjj(void) {
    ALOGD("_ZN6webrtc16BlockDelayBufferC1Ejjjj() called");
    return 0;
}

/* Demangled: webrtc::ClockdriftDetector::ClockdriftDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18ClockdriftDetectorC1Ev(void) {
    ALOGD("_ZN6webrtc18ClockdriftDetectorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::Pffft::FloatBuffer::~FloatBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft11FloatBufferD1Ev(void) {
    ALOGD("_ZN6webrtc5Pffft11FloatBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Histograms::Update(webrtc::SignalModel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10Histograms6UpdateERKNS_11SignalModelE(void) {
    ALOGD("_ZN6webrtc10Histograms6UpdateERKNS_11SignalModelE() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::UpdateStationarityFlags(webrtc::SpectrumBuffer const&, rtc::ArrayView<float const, -4711>, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator23UpdateStationarityFlagsERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEEii(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator23UpdateStationarityFlagsERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEEii() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::EarlyReverbLengthEstimator(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC2Ei(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorC2Ei() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6insertINS_11__wrap_iterIPS6_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISE_E9referenceEEE5valueESC_E4typeENSA_IPKS6_EESE_SE_() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::Update(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNode6UpdateEPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNode6UpdateEPKfj() called");
    return 0;
}

/* Exported Object: WebRtcSpl_CrossCorrelation */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_CrossCorrelation = NULL;

/* Demangled: webrtc::TransientSuppressorImpl::TransientSuppressorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImplC1Ev(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImplC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AecState::TransparentMode::TransparentMode(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState15TransparentModeC2ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc8AecState15TransparentModeC2ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::ComfortNoiseGenerator::Compute(bool, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<webrtc::FftData, -4711>, rtc::ArrayView<webrtc::FftData, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ComfortNoiseGenerator7ComputeEbN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEENS2_INS_7FftDataELin4711EEES9_(void) {
    ALOGD("_ZN6webrtc21ComfortNoiseGenerator7ComputeEbN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEENS2_INS_7FftDataELin4711EEES9_() called");
    return 0;
}

/* Demangled: webrtc::ComfortNoiseGenerator::~ComfortNoiseGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ComfortNoiseGeneratorD1Ev(void) {
    ALOGD("_ZN6webrtc21ComfortNoiseGeneratorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilterLagAggregator::~MatchedFilterLagAggregator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26MatchedFilterLagAggregatorD1Ev(void) {
    ALOGD("_ZN6webrtc26MatchedFilterLagAggregatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::HandleCaptureRuntimeSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl28HandleCaptureRuntimeSettingsEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl28HandleCaptureRuntimeSettingsEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::operator unsigned int() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIjEcvjEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIjEcvjEv() called");
    return 0;
}

/* Demangled: webrtc::GainController2::Validate(webrtc::AudioProcessing::Config::GainController2 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController28ValidateERKNS_15AudioProcessing6Config15GainController2E(void) {
    ALOGD("_ZN6webrtc15GainController28ValidateERKNS_15AudioProcessing6Config15GainController2E() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureMultiBandProcessingActive(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandProcessingActiveEb(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandProcessingActiveEb() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibility5ResetEv(void) {
    ALOGD("_ZN6webrtc14EchoAudibility5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::ReverbModel::UpdateReverbNoFreqShaping(rtc::ArrayView<float const, -4711>, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11ReverbModel25UpdateReverbNoFreqShapingEN3rtc9ArrayViewIKfLin4711EEEff(void) {
    ALOGD("_ZN6webrtc11ReverbModel25UpdateReverbNoFreqShapingEN3rtc9ArrayViewIKfLin4711EEEff() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_ComputeDigitalGains(webrtc::DigitalAgc*, short const* const*, unsigned int, unsigned int, short, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29WebRtcAgc_ComputeDigitalGainsEPNS_10DigitalAgcEPKPKsjjsPi(void) {
    ALOGD("_ZN6webrtc29WebRtcAgc_ComputeDigitalGainsEPNS_10DigitalAgcEPKPKsjjsPi() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FullBandErleEstimator17ErleInstantaneous4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS2_14default_deleteIS4_EEEE(void) {
    ALOGD("_ZNK6webrtc21FullBandErleEstimator17ErleInstantaneous4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS2_14default_deleteIS4_EEEE() called");
    return 0;
}

/* Demangled: PreProcessingFx_GetDescriptor */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_GetDescriptor(void) {
    ALOGD("PreProcessingFx_GetDescriptor() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::rftfsub_128(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft11rftfsub_128EPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft11rftfsub_128EPf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<bool>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_AddFarend(void*, short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19WebRtcAgc_AddFarendEPvPKsj(void) {
    ALOGD("_ZN6webrtc19WebRtcAgc_AddFarendEPvPKsj() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::UpdateQualityEstimate() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous21UpdateQualityEstimateEv(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneous21UpdateQualityEstimateEv() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator13NoiseSpectrum5ResetEv(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator13NoiseSpectrum5ResetEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::GetMinLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage17GetMinLogSeverityEv(void) {
    ALOGD("_ZN3rtc10LogMessage17GetMinLogSeverityEv() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::AdaptiveModeLevelEstimatorAgc(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29AdaptiveModeLevelEstimatorAgcC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc29AdaptiveModeLevelEstimatorAgcC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::MovingMoments(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsC2Ej(void) {
    ALOGD("_ZN6webrtc13MovingMomentsC2Ej() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::Configure() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl9ConfigureEv(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl9ConfigureEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ScaleVector */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleVector(void) {
    ALOGD("WebRtcSpl_ScaleVector() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::TwoBandsAnalysis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter16TwoBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_() called");
    return 0;
}

/* Demangled: webrtc::BlockBuffer::BlockBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockBufferC1Ejjjj(void) {
    ALOGD("_ZN6webrtc11BlockBufferC1Ejjjj() called");
    return 0;
}

/* Demangled: rtc::Event::Wait(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5Event4WaitEii(void) {
    ALOGD("_ZN3rtc5Event4WaitEii() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_5arrayIfLj65EEENS_9allocatorIS2_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_5arrayIfLj65EEENS_9allocatorIS2_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::OouraFft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8OouraFftC1Ev(void) {
    ALOGD("_ZN6webrtc8OouraFftC1Ev() called");
    return 0;
}

/* Demangled: pffftd_is_power_of_two */
extern "C" __attribute__((visibility("default"))) int pffftd_is_power_of_two(void) {
    ALOGD("pffftd_is_power_of_two() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_target_level_dbfs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl21set_target_level_dbfsEi(void) {
    ALOGD("_ZN6webrtc15GainControlImpl21set_target_level_dbfsEi() called");
    return 0;
}

/* Demangled: webrtc::Log2TodB(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8Log2TodBEf(void) {
    ALOGD("_ZN6webrtc8Log2TodBEf() called");
    return 0;
}

/* Demangled: WebRtc_MoveReadPtr */
extern "C" __attribute__((visibility("default"))) int WebRtc_MoveReadPtr(void) {
    ALOGD("WebRtc_MoveReadPtr() called");
    return 0;
}

/* Demangled: webrtc::aec3::MovingAverage::MovingAverage(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec313MovingAverageC2Ejj(void) {
    ALOGD("_ZN6webrtc4aec313MovingAverageC2Ejj() called");
    return 0;
}

/* Demangled: webrtc::ValidAlignment(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14ValidAlignmentEj(void) {
    ALOGD("_ZN6webrtc14ValidAlignmentEj() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_set_allowed_offset(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25WebRtc_set_allowed_offsetEPvi(void) {
    ALOGD("_ZN6webrtc25WebRtc_set_allowed_offsetEPvi() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferD1Ev(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FftBuffer::~FftBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9FftBufferD2Ev(void) {
    ALOGD("_ZN6webrtc9FftBufferD2Ev() called");
    return 0;
}

/* Demangled: rtc::ToString(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEb(void) {
    ALOGD("_ZN3rtc8ToStringEb() called");
    return 0;
}

/* Demangled: rtc::TimeAfter(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9TimeAfterEx(void) {
    ALOGD("_ZN3rtc9TimeAfterEx() called");
    return 0;
}

/* Demangled: webrtc::Agc::~Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcD1Ev(void) {
    ALOGD("_ZN6webrtc3AgcD1Ev() called");
    return 0;
}

/* Demangled: webrtc::field_trial::FindFullName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11field_trial12FindFullNameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc11field_trial12FindFullNameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<bool>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::Pffft::IsSimdEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft13IsSimdEnabledEv(void) {
    ALOGD("_ZN6webrtc5Pffft13IsSimdEnabledEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::HighPassFilteringRequired() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates25HighPassFilteringRequiredEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates25HighPassFilteringRequiredEv() called");
    return 0;
}

/* Demangled: rtc::ToString(double) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEd(void) {
    ALOGD("_ZN3rtc8ToStringEd() called");
    return 0;
}

/* Demangled: webrtc::metrics::MinSample(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics9MinSampleERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc7metrics9MinSampleERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MaxAbsValueW16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxAbsValueW16 = NULL;

/* Demangled: webrtc::BlockProcessorMetrics::UpdateRender(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21BlockProcessorMetrics12UpdateRenderEb(void) {
    ALOGD("_ZN6webrtc21BlockProcessorMetrics12UpdateRenderEb() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigC1EOS0_(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigC1EOS0_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingBuilder::AudioProcessingBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AudioProcessingBuilderC2Ev(void) {
    ALOGD("_ZN6webrtc22AudioProcessingBuilderC2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::operator=(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3ConfigaSERKS0_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3ConfigaSERKS0_() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferD0Ev(void) {
    ALOGD("_ZN6webrtc11AudioBufferD0Ev() called");
    return 0;
}

/* Demangled: rtc::ToString(long double) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEe(void) {
    ALOGD("_ZN3rtc8ToStringEe() called");
    return 0;
}

/* Demangled: webrtc::Limiter::Limiter(unsigned int, webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7LimiterC2EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc7LimiterC2EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::~VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcD2Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcD2Ev() called");
    return 0;
}

/* Demangled: webrtc::DownsampledRenderBuffer::DownsampledRenderBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23DownsampledRenderBufferC2Ej(void) {
    ALOGD("_ZN6webrtc23DownsampledRenderBufferC2Ej() called");
    return 0;
}

/* Demangled: webrtc::VadWithLevel::~VadWithLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadWithLevelD2Ev(void) {
    ALOGD("_ZN6webrtc12VadWithLevelD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20AudioProcessingStatsC2Ev(void) {
    ALOGD("_ZN6webrtc20AudioProcessingStatsC2Ev() called");
    return 0;
}

/* Demangled: WebRtcVad_CalcVad16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad16khz(void) {
    ALOGD("WebRtcVad_CalcVad16khz() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_enable_robust_validation(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc31WebRtc_enable_robust_validationEPvi(void) {
    ALOGD("_ZN6webrtc31WebRtc_enable_robust_validationEPvi() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::AppendFormat(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilder12AppendFormatEPKcz(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilder12AppendFormatEPKcz() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::UpdateRestoration(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl17UpdateRestorationEf(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl17UpdateRestorationEf() called");
    return 0;
}

/* Demangled: PreProcessingLib_Create */
extern "C" __attribute__((visibility("default"))) int PreProcessingLib_Create(void) {
    ALOGD("PreProcessingLib_Create() called");
    return 0;
}

/* Demangled: rtc::ToString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEi(void) {
    ALOGD("_ZN3rtc8ToStringEi() called");
    return 0;
}

/* Demangled: webrtc::EchoPathDelayEstimator::~EchoPathDelayEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22EchoPathDelayEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc22EchoPathDelayEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::Subtractor(webrtc::EchoCanceller3Config const&, unsigned int, unsigned int, webrtc::ApmDataDumper*, webrtc::Aec3Optimization) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10SubtractorC1ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE(void) {
    ALOGD("_ZN6webrtc10SubtractorC1ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: rtc::ToString(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEj(void) {
    ALOGD("_ZN3rtc8ToStringEj() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::IsRunning() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc14PlatformThread9IsRunningEv(void) {
    ALOGD("_ZNK3rtc14PlatformThread9IsRunningEv() called");
    return 0;
}

/* Demangled: webrtc::GainController2::ToString(webrtc::AudioProcessing::Config::GainController2 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController28ToStringERKNS_15AudioProcessing6Config15GainController2E(void) {
    ALOGD("_ZN6webrtc15GainController28ToStringERKNS_15AudioProcessing6Config15GainController2E() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE() called");
    return 0;
}

/* Demangled: webrtc::CircularBuffer::Pop() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14CircularBuffer3PopEv(void) {
    ALOGD("_ZN6webrtc14CircularBuffer3PopEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<unsigned int>::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIjE3GetEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIjE3GetEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::UpdateMinLogSeverity() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage20UpdateMinLogSeverityEv(void) {
    ALOGD("_ZN3rtc10LogMessage20UpdateMinLogSeverityEv() called");
    return 0;
}

/* Demangled: rtc::ToString(long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEl(void) {
    ALOGD("_ZN3rtc8ToStringEl() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::OverrideSubmoduleCreationForTesting(webrtc::ApmSubmoduleCreationOverrides const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl35OverrideSubmoduleCreationForTestingERKNS_29ApmSubmoduleCreationOverridesE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl35OverrideSubmoduleCreationForTestingERKNS_29ApmSubmoduleCreationOverridesE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > >, std::__1::allocator<std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > > > >::__push_back_slow_path<std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > > >(std::__1::unique_ptr<webrtc::ChannelBuffer<float>, std::__1::default_delete<webrtc::ChannelBuffer<float> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc13ChannelBufferIfEENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6webrtc13ChannelBufferIfEENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_() called");
    return 0;
}

/* Demangled: rtc::ToString(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEm(void) {
    ALOGD("_ZN3rtc8ToStringEm() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ERKS2_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC2ERKS2_() called");
    return 0;
}

/* Demangled: webrtc::QuantileNoiseEstimator::Estimate(rtc::ArrayView<float const, 129>, rtc::ArrayView<float, 129>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22QuantileNoiseEstimator8EstimateEN3rtc9ArrayViewIKfLi129EEENS2_IfLi129EEE(void) {
    ALOGD("_ZN6webrtc22QuantileNoiseEstimator8EstimateEN3rtc9ArrayViewIKfLi129EEENS2_IfLi129EEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<double>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIdEptEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIdEptEv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::RefinedFilterUpdateGain::HandleEchoPathChange(webrtc::EchoPathVariability const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23RefinedFilterUpdateGain20HandleEchoPathChangeERKNS_19EchoPathVariabilityE(void) {
    ALOGD("_ZN6webrtc23RefinedFilterUpdateGain20HandleEchoPathChangeERKNS_19EchoPathVariabilityE() called");
    return 0;
}

/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc(void) {
    ALOGD("_ZN3rtc25hex_decode_with_delimiterEPcjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEc() called");
    return 0;
}

/* Demangled: WebRtc_available_write */
extern "C" __attribute__((visibility("default"))) int WebRtc_available_write(void) {
    ALOGD("WebRtc_available_write() called");
    return 0;
}

/* Demangled: std::__1::vector<float*, std::__1::allocator<float*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPfNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPfNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator5ResetEv() called");
    return 0;
}

/* Exported Object: webrtc::RefinedFilterUpdateGain::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc23RefinedFilterUpdateGain15instance_count_E = NULL;

/* Demangled: webrtc::Resampler::~Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerD2Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerD2Ev() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, rtc::LogErrorContext, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEi(void) {
    ALOGD("_ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityENS_15LogErrorContextEi() called");
    return 0;
}

/* Demangled: rtc::TimeNanos() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc9TimeNanosEv(void) {
    ALOGD("_ZN3rtc9TimeNanosEv() called");
    return 0;
}

/* Demangled: rtc::Event::~Event() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventD2Ev(void) {
    ALOGD("_ZN3rtc5EventD2Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::RnnBasedVad::RnnBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad11RnnBasedVadC2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad11RnnBasedVadC2Ev() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::Update(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, webrtc::RenderBuffer const&, bool*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferEPbPf(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferEPbPf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<unsigned int>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIjEptEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIjEptEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::AddTag(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage6AddTagEPKc(void) {
    ALOGD("_ZN3rtc10LogMessage6AddTagEPKc() called");
    return 0;
}

/* Demangled: webrtc::NoiseSpectrumEstimator::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22NoiseSpectrumEstimator10InitializeEv(void) {
    ALOGD("_ZN6webrtc22NoiseSpectrumEstimator10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::Create(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AudioConverter6CreateEjjjj(void) {
    ALOGD("_ZN6webrtc14AudioConverter6CreateEjjjj() called");
    return 0;
}

/* Demangled: webrtc::SpectrumBuffer::~SpectrumBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14SpectrumBufferD1Ev(void) {
    ALOGD("_ZN6webrtc14SpectrumBufferD1Ev() called");
    return 0;
}

/* Demangled: rtc::ToString(short) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEs(void) {
    ALOGD("_ZN3rtc8ToStringEs() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::~WPDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeD1Ev(void) {
    ALOGD("_ZN6webrtc7WPDNodeD1Ev() called");
    return 0;
}

/* Exported Object: webrtc::WebRtcAecm_kSinTable */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc20WebRtcAecm_kSinTableE = NULL;

/* Demangled: webrtc::AecState::ErleUncertainty() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8AecState15ErleUncertaintyEv(void) {
    ALOGD("_ZNK6webrtc8AecState15ErleUncertaintyEv() called");
    return 0;
}

/* Demangled: webrtc::ReverbFrequencyResponse::~ReverbFrequencyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23ReverbFrequencyResponseD1Ev(void) {
    ALOGD("_ZN6webrtc23ReverbFrequencyResponseD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::SetForTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE10SetForTestES7_(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE10SetForTestES7_() called");
    return 0;
}

/* Demangled: rtc::ToString(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEt(void) {
    ALOGD("_ZN3rtc8ToStringEt() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::recommended_stream_analog_level() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl31recommended_stream_analog_levelEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl31recommended_stream_analog_levelEv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferC1Ejjjjjj(void) {
    ALOGD("_ZN6webrtc11AudioBufferC1Ejjjjjj() called");
    return 0;
}

/* Demangled: webrtc::GainApplier::GainApplier(bool, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11GainApplierC1Ebf(void) {
    ALOGD("_ZN6webrtc11GainApplierC1Ebf() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config9EchoModelC1Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config9EchoModelC1Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::~AutoCorrelationCalculator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AecState::GetResidualEchoScaling(rtc::ArrayView<float, -4711>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8AecState22GetResidualEchoScalingEN3rtc9ArrayViewIfLin4711EEE(void) {
    ALOGD("_ZNK6webrtc8AecState22GetResidualEchoScalingEN3rtc9ArrayViewIfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::AnalyzeRender(webrtc::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller313AnalyzeRenderERKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc14EchoCanceller313AnalyzeRenderERKNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::RenderBuffer::SpectralSum(unsigned int, std::__1::array<float, 65u>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc12RenderBuffer11SpectralSumEjPNSt3__15arrayIfLj65EEE(void) {
    ALOGD("_ZNK6webrtc12RenderBuffer11SpectralSumEjPNSt3__15arrayIfLj65EEE() called");
    return 0;
}

/* Demangled: rtc::SystemTimeMillis() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc16SystemTimeMillisEv(void) {
    ALOGD("_ZN3rtc16SystemTimeMillisEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<float, std::__1::allocator<float> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIfNS_9allocatorIfEEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIfNS_9allocatorIfEEED2Ev() called");
    return 0;
}

/* Demangled: PreProcessingFx_ProcessReverse */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_ProcessReverse(void) {
    ALOGD("PreProcessingFx_ProcessReverse() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::KeyboardInfo::Extract(float const* const*, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15ApmCaptureState12KeyboardInfo7ExtractEPKPKfRKNS_12StreamConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15ApmCaptureState12KeyboardInfo7ExtractEPKPKfRKNS_12StreamConfigE() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::~EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplD2Ev(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplD2Ev() called");
    return 0;
}

/* Exported Object: webrtc::WebRtcAecm_kCosTable */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc20WebRtcAecm_kCosTableE = NULL;

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)4, unsigned int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE4EjEENS4_ILS5_1EiEEEEEvPKciS9_DpRKT_E1t = NULL;

/* Demangled: webrtc::aec3::ComputeFrequencyResponse(unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec324ComputeFrequencyResponseEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE(void) {
    ALOGD("_ZN6webrtc4aec324ComputeFrequencyResponseEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEEPNS2_INS1_5arrayIfLj65EEENS4_ISC_EEEE() called");
    return 0;
}

/* Demangled: webrtc::ReverbModel::~ReverbModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11ReverbModelD1Ev(void) {
    ALOGD("_ZN6webrtc11ReverbModelD1Ev() called");
    return 0;
}

/* Demangled: NsCreate(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z8NsCreateP16preproc_effect_s(void) {
    ALOGD("_Z8NsCreateP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoDetector::AnalyzeRenderAudio(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ResidualEchoDetector18AnalyzeRenderAudioEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc20ResidualEchoDetector18AnalyzeRenderAudioEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::Limiter::~Limiter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7LimiterD2Ev(void) {
    ALOGD("_ZN6webrtc7LimiterD2Ev() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::~CascadedBiQuadFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilterD1Ev(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilterD1Ev() called");
    return 0;
}

/* Demangled: rtc::ToString(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEx(void) {
    ALOGD("_ZN3rtc8ToStringEx() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AdaptiveModeLevelEstimatorAgc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc29AdaptiveModeLevelEstimatorAgcE = NULL;

/* Demangled: webrtc::rnn_vad::FeaturesExtractor::FeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad17FeaturesExtractorC1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad17FeaturesExtractorC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*>&>::push_back(float*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectD1Ev(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectD1Ev() called");
    return 0;
}

/* Demangled: rtc::ToString(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEy(void) {
    ALOGD("_ZN3rtc8ToStringEy() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RecordUnprocessedCaptureStream(short const*, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKsRKNS_12StreamConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKsRKNS_12StreamConfigE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::operator=(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsaSERKS2_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsaSERKS2_() called");
    return 0;
}

/* Demangled: WebRtcVad_set_mode_core */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_set_mode_core(void) {
    ALOGD("WebRtcVad_set_mode_core() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_InitVad(webrtc::AgcVad*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17WebRtcAgc_InitVadEPNS_6AgcVadE(void) {
    ALOGD("_ZN6webrtc17WebRtcAgc_InitVadEPNS_6AgcVadE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessing::Config::Pipeline::Pipeline() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioProcessing6Config8PipelineC1Ev(void) {
    ALOGD("_ZN6webrtc15AudioProcessing6Config8PipelineC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::GetLinearAecOutput(rtc::ArrayView<std::__1::array<float, 160u>, -4711>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl18GetLinearAecOutputEN3rtc9ArrayViewINSt3__15arrayIfLj160EEELin4711EEE(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl18GetLinearAecOutputEN3rtc9ArrayViewINSt3__15arrayIfLj160EEELin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplD1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SqrtFastApproximation(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21SqrtFastApproximationEf(void) {
    ALOGD("_ZN6webrtc21SqrtFastApproximationEf() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::RefinePitchPeriod48kHz(rtc::ArrayView<float const, 864>, rtc::ArrayView<unsigned int const, 2>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad22RefinePitchPeriod48kHzEN3rtc9ArrayViewIKfLi864EEENS2_IKjLi2EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad22RefinePitchPeriod48kHzEN3rtc9ArrayViewIKfLi864EEENS2_IKjLi2EEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::__map_value_compare<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > >, std::__1::less<std::__1::basic_string_view<char, std::__1::char_traits<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> > > > >::__emplace_unique_key_args<std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string_view<char, std::__1::char_traits<char> > const&>, std::__1::tuple<> >(std::__1::basic_string_view<char, std::__1::char_traits<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string_view<char, std::__1::char_traits<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS5_JRKNS_21piecewise_construct_tENS_5tupleIJRKS5_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_17basic_string_viewIcNS_11char_traitsIcEEEES5_EENS_19__map_value_compareIS5_S6_NS_4lessIS5_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS5_JRKNS_21piecewise_construct_tENS_5tupleIJRKS5_EEENSI_IJEEEEEENS_4pairINS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE(void) {
    ALOGD("_ZN6webrtc13SincResamplerC1EdjPNS_21SincResamplerCallbackE() called");
    return 0;
}

/* Demangled: webrtc::NoiseLevelEstimator::~NoiseLevelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NoiseLevelEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc19NoiseLevelEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::BlockProcessor, std::__1::default_delete<webrtc::BlockProcessor> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN6webrtc14EchoCanceller3C1ERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_14BlockProcessorENS4_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::LateReverbLinearRegressor::Estimate() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor8EstimateEv(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor8EstimateEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::operator*() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIdEdeEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIdEdeEv() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerC2Ejj(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerC2Ejj() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Push(short const*, unsigned int, short*, unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Resampler4PushEPKsjPsjRj(void) {
    ALOGD("_ZN6webrtc9Resampler4PushEPKsjPsjRj() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::ComputeEchoEstimatePerFilterSection(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimator35ComputeEchoEstimatePerFilterSectionERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimator35ComputeEchoEstimatePerFilterSectionERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<std::__1::array<float, 6u>, std::__1::allocator<std::__1::array<float, 6u> > >, std::__1::allocator<std::__1::vector<std::__1::array<float, 6u>, std::__1::allocator<std::__1::array<float, 6u> > > > >::vector(unsigned int, std::__1::vector<std::__1::array<float, 6u>, std::__1::allocator<std::__1::array<float, 6u> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_INS_5arrayIfLj6EEENS_9allocatorIS2_EEEENS3_IS5_EEEC2EjRKS5_(void) {
    ALOGD("_ZNSt3__16vectorINS0_INS_5arrayIfLj6EEENS_9allocatorIS2_EEEENS3_IS5_EEEC2EjRKS5_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<unsigned int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEj() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::ExperimentalAgc const& webrtc::Config::default_value<webrtc::ExperimentalAgc>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_15ExperimentalAgcEEERKT_vE3def = NULL;

/* Demangled: rtc::RaceChecker::RaceChecker() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11RaceCheckerC1Ev(void) {
    ALOGD("_ZN3rtc11RaceCheckerC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> >, std::__1::allocator<std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> > > >::__push_back_slow_path<std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> > >(std::__1::unique_ptr<webrtc::AudioConverter, std::__1::default_delete<webrtc::AudioConverter> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc14AudioConverterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6webrtc14AudioConverterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics8DbMetricC1Ev(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics8DbMetricC1Ev() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::set_data(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNode8set_dataEPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNode8set_dataEPKfj() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::AudioBuffer*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer6CopyToEPS0_(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer6CopyToEPS0_() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::Dump(webrtc::ApmDataDumper*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20ReverbDecayEstimator4DumpEPNS_13ApmDataDumperE(void) {
    ALOGD("_ZNK6webrtc20ReverbDecayEstimator4DumpEPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIiEE() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_last_delay_quality(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25WebRtc_last_delay_qualityEPv(void) {
    ALOGD("_ZN6webrtc25WebRtc_last_delay_qualityEPv() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::set_num_channels(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer16set_num_channelsEj(void) {
    ALOGD("_ZN6webrtc11AudioBuffer16set_num_channelsEj() called");
    return 0;
}

/* Demangled: webrtc::Config::Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc6ConfigC2Ev(void) {
    ALOGD("_ZN6webrtc6ConfigC2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::RenderWriter::RenderWriter(webrtc::ApmDataDumper*, webrtc::SwapQueue<std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >, webrtc::Aec3RenderQueueItemVerifier>*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller312RenderWriterC2EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj(void) {
    ALOGD("_ZN6webrtc14EchoCanceller312RenderWriterC2EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj() called");
    return 0;
}

/* Demangled: webrtc::FrameBlocker::InsertSubFrameAndExtractBlock(std::__1::vector<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > >, std::__1::allocator<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > > > const&, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12FrameBlocker29InsertSubFrameAndExtractBlockERKNSt3__16vectorINS2_IN3rtc9ArrayViewIfLin4711EEENS1_9allocatorIS5_EEEENS6_IS8_EEEEPNS2_INS2_INS2_IfNS6_IfEEEENS6_ISE_EEEENS6_ISG_EEEE(void) {
    ALOGD("_ZN6webrtc12FrameBlocker29InsertSubFrameAndExtractBlockERKNSt3__16vectorINS2_IN3rtc9ArrayViewIfLin4711EEENS1_9allocatorIS5_EEEENS6_IS8_EEEEPNS2_INS2_INS2_IfNS6_IfEEEENS6_ISE_EEEENS6_ISG_EEEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::PitchEstimator::~PitchEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad14PitchEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad14PitchEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, float* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKPKfRKNS_12StreamConfigES7_PKPf() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::RenderMultiBandSubModulesActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandSubModulesActiveEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31RenderMultiBandSubModulesActiveEv() called");
    return 0;
}

/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::Update(bool, bool, bool, std::__1::optional<webrtc::DelayEstimate> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState24FilteringQualityAnalyzer6UpdateEbbbRKNSt3__18optionalINS_13DelayEstimateEEEb(void) {
    ALOGD("_ZN6webrtc8AecState24FilteringQualityAnalyzer6UpdateEbbbRKNSt3__18optionalINS_13DelayEstimateEEEb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<bool>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIbEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialOptional<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18FieldTrialOptionalIjEE = NULL;

/* Demangled: webrtc::DownSampler::DownSample(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11DownSampler10DownSampleEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc11DownSampler10DownSampleEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::RegionLogger(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurve12RegionLoggerC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEES8_S8_S8_() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::MonoAgc(webrtc::ApmDataDumper*, int, int, bool, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgcC1EPNS_13ApmDataDumperEiibbi(void) {
    ALOGD("_ZN6webrtc7MonoAgcC1EPNS_13ApmDataDumperEiibbi() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralCorrelator::~SpectralCorrelator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad18SpectralCorrelatorD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad18SpectralCorrelatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::BlockProcessorMetrics::UpdateCapture(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21BlockProcessorMetrics13UpdateCaptureEb(void) {
    ALOGD("_ZN6webrtc21BlockProcessorMetrics13UpdateCaptureEb() called");
    return 0;
}

/* Demangled: webrtc::AecDumpFactory::Create(webrtc::FileWrapper, long long, rtc::TaskQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AecDumpFactory6CreateENS_11FileWrapperExPN3rtc9TaskQueueE(void) {
    ALOGD("_ZN6webrtc14AecDumpFactory6CreateENS_11FileWrapperExPN3rtc9TaskQueueE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::Update(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTree6UpdateEPKfj(void) {
    ALOGD("_ZN6webrtc7WPDTree6UpdateEPKfj() called");
    return 0;
}

/* Demangled: webrtc::CircularBuffer::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14CircularBuffer5ClearEv(void) {
    ALOGD("_ZN6webrtc14CircularBuffer5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_ExpCurve(short, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18WebRtcAgc_ExpCurveEsPs(void) {
    ALOGD("_ZN6webrtc18WebRtcAgc_ExpCurveEsPs() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<double>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::VoiceActivityDetector::ProcessChunk(short const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetector12ProcessChunkEPKsji() called");
    return 0;
}

/* Demangled: webrtc::EchoPathDelayEstimator::Reset(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22EchoPathDelayEstimator5ResetEb(void) {
    ALOGD("_ZN6webrtc22EchoPathDelayEstimator5ResetEb() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutputAnalyzer::HandleEchoPathChange() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24SubtractorOutputAnalyzer20HandleEchoPathChangeEv(void) {
    ALOGD("_ZN6webrtc24SubtractorOutputAnalyzer20HandleEchoPathChangeEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_MemSetW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MemSetW16(void) {
    ALOGD("WebRtcSpl_MemSetW16() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::~ThreeBandFilterBank() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBankD1Ev(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBankD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeGainController2() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25InitializeGainController2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25InitializeGainController2Ev() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::RmsLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevelC2Ev(void) {
    ALOGD("_ZN6webrtc8RmsLevelC2Ev() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::InterpolatedGainCurve(webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurveC1EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurveC1EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: rtc::Event::Event(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventC2Ebb(void) {
    ALOGD("_ZN3rtc5EventC2Ebb() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::proc_fullband_sample_rate_hz() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl28proc_fullband_sample_rate_hzEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl28proc_fullband_sample_rate_hzEv() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevel5ResetEv(void) {
    ALOGD("_ZN6webrtc8RmsLevel5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::aec3::ErlComputer_NEON(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec316ErlComputer_NEONERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE(void) {
    ALOGD("_ZN6webrtc4aec316ErlComputer_NEONERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEN3rtc9ArrayViewIfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutputAnalyzer::SubtractorOutputAnalyzer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24SubtractorOutputAnalyzerC1Ej(void) {
    ALOGD("_ZN6webrtc24SubtractorOutputAnalyzerC1Ej() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay(webrtc::EchoCanceller3Config::Delay const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config5DelayC2ERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config5DelayC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_SpeakerInactiveCtrl(webrtc::LegacyAgc*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29WebRtcAgc_SpeakerInactiveCtrlEPNS_9LegacyAgcE(void) {
    ALOGD("_ZN6webrtc29WebRtcAgc_SpeakerInactiveCtrlEPNS_9LegacyAgcE() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::~PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadD2Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FrameBlocker::IsBlockAvailable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc12FrameBlocker16IsBlockAvailableEv(void) {
    ALOGD("_ZNK6webrtc12FrameBlocker16IsBlockAvailableEv() called");
    return 0;
}

/* Demangled: webrtc::aec3::UpdateDbMetric(std::__1::array<float, 65u> const&, std::__1::array<webrtc::EchoRemoverMetrics::DbMetric, 2u>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec314UpdateDbMetricERKNSt3__15arrayIfLj65EEEPNS2_INS_18EchoRemoverMetrics8DbMetricELj2EEE(void) {
    ALOGD("_ZN6webrtc4aec314UpdateDbMetricERKNSt3__15arrayIfLj65EEEPNS2_INS_18EchoRemoverMetrics8DbMetricELj2EEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: AecSetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AecSetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z15AecSetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: WebRtcSpl_ScaleVectorWithSat */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleVectorWithSat(void) {
    ALOGD("WebRtcSpl_ScaleVectorWithSat() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: std::__1::optional<double> webrtc::ParseTypedParameter<double>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterIdEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterIdEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchAnalysis */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchAnalysis(void) {
    ALOGD("WebRtcIsac_PitchAnalysis() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::~ApmRenderState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateD2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl14ApmRenderStateD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::RuntimeSettingEnqueuer(webrtc::SwapQueue<webrtc::AudioProcessing::RuntimeSetting, webrtc::SwapQueueItemVerifier<webrtc::AudioProcessing::RuntimeSetting, &(bool webrtc::internal::NoopSwapQueueItemVerifierFunction<webrtc::AudioProcessing::RuntimeSetting>(webrtc::AudioProcessing::RuntimeSetting const&))> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC1EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC1EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer5ResetEv(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::metrics::HistogramFactoryGetCounts(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii(void) {
    ALOGD("_ZN6webrtc7metrics25HistogramFactoryGetCountsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiii() called");
    return 0;
}

/* Exported Object: WebRtcSpl_DownsampleFast */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_DownsampleFast = NULL;

/* Demangled: WebRtcSpl_ComplexIFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ComplexIFFT(void) {
    ALOGD("WebRtcSpl_ComplexIFFT() called");
    return 0;
}

/* Demangled: webrtc::AecState::AecState(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecStateC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc8AecStateC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Exported Object: vtable for webrtc::CopyConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13CopyConverterE = NULL;

/* Demangled: rtc::GetClockForTesting() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc18GetClockForTestingEv(void) {
    ALOGD("_ZN3rtc18GetClockForTestingEv() called");
    return 0;
}

/* Demangled: webrtc::CreateTransientSuppressor(webrtc::ApmSubmoduleCreationOverrides const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25CreateTransientSuppressorERKNS_29ApmSubmoduleCreationOverridesE(void) {
    ALOGD("_ZN6webrtc25CreateTransientSuppressorERKNS_29ApmSubmoduleCreationOverridesE() called");
    return 0;
}

/* Demangled: webrtc::AecState::~AecState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecStateD1Ev(void) {
    ALOGD("_ZN6webrtc8AecStateD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::LowerBandGain(bool, webrtc::AecState const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::array<float, 65u>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGain13LowerBandGainEbRKNS_8AecStateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESA_SA_PS8_(void) {
    ALOGD("_ZN6webrtc15SuppressionGain13LowerBandGainEbRKNS_8AecStateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESA_SA_PS8_() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE = NULL;

/* Demangled: webrtc::AudioProcessingImpl::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl10InitializeEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::ExpApproximation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16ExpApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc16ExpApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressor::ChannelState::ChannelState(webrtc::SuppressionParams const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15NoiseSuppressor12ChannelStateC1ERKNS_17SuppressionParamsEj(void) {
    ALOGD("_ZN6webrtc15NoiseSuppressor12ChannelStateC1ERKNS_17SuppressionParamsEj() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::~EchoCanceller3() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller3D2Ev(void) {
    ALOGD("_ZN6webrtc14EchoCanceller3D2Ev() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::NoiseSpectrum() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator13NoiseSpectrumC2Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator13NoiseSpectrumC2Ev() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEc(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEc() called");
    return 0;
}

/* Demangled: AgcCreate(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AgcCreateP16preproc_effect_s(void) {
    ALOGD("_Z9AgcCreateP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::GainController2::Initialize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController210InitializeEi(void) {
    ALOGD("_ZN6webrtc15GainController210InitializeEi() called");
    return 0;
}

/* Demangled: webrtc::LogApproximation(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16LogApproximationEf(void) {
    ALOGD("_ZN6webrtc16LogApproximationEf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::operator*() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIbEdeEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIbEdeEv() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(double) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEd(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEd() called");
    return 0;
}

/* Exported Object: rnnoise::kInputDenseBias */
extern "C" __attribute__((visibility("default"))) void* _ZN7rnnoise15kInputDenseBiasE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<webrtc::PushResampler<float>::ChannelResampler, std::__1::allocator<webrtc::PushResampler<float>::ChannelResampler> >::__push_back_slow_path<webrtc::PushResampler<float>::ChannelResampler>(webrtc::PushResampler<float>::ChannelResampler&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6webrtc13PushResamplerIfE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6webrtc13PushResamplerIfE16ChannelResamplerENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(long double) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEe(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEe() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::RuntimeSettingEnqueuer(webrtc::SwapQueue<webrtc::AudioProcessing::RuntimeSetting, webrtc::SwapQueueItemVerifier<webrtc::AudioProcessing::RuntimeSetting, &(bool webrtc::internal::NoopSwapQueueItemVerifierFunction<webrtc::AudioProcessing::RuntimeSetting>(webrtc::AudioProcessing::RuntimeSetting const&))> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC2EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuerC2EPNS_9SwapQueueINS_15AudioProcessing14RuntimeSettingENS_21SwapQueueItemVerifierIS4_XadL_ZNS_8internal33NoopSwapQueueItemVerifierFunctionIS4_EEbRKT_EEEEEE() called");
    return 0;
}

/* Demangled: rtc::webrtc_checks_impl::ParseArg(std::__va_list*, rtc::webrtc_checks_impl::CheckArgType const**, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc18webrtc_checks_impl8ParseArgEPSt9__va_listPPKNS0_12CheckArgTypeEPNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc18webrtc_checks_impl8ParseArgEPSt9__va_listPPKNS0_12CheckArgTypeEPNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<short*, std::__1::allocator<short*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPsNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(float) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEf(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEf() called");
    return 0;
}

/* Demangled: webrtc::ComputeErl(webrtc::Aec3Optimization const&, std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10ComputeErlERKNS_16Aec3OptimizationERKNSt3__16vectorINS3_5arrayIfLj65EEENS3_9allocatorIS6_EEEEN3rtc9ArrayViewIfLin4711EEE(void) {
    ALOGD("_ZN6webrtc10ComputeErlERKNS_16Aec3OptimizationERKNSt3__16vectorINS3_5arrayIfLj65EEENS3_9allocatorIS6_EEEEN3rtc9ArrayViewIfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::~EchoAudibility() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibilityD1Ev(void) {
    ALOGD("_ZN6webrtc14EchoAudibilityD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc14FieldTrialFlagC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::ErlEstimator::Update(std::__1::vector<bool, std::__1::allocator<bool> > const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12ErlEstimator6UpdateERKNSt3__16vectorIbNS1_9allocatorIbEEEEN3rtc9ArrayViewIKNS1_5arrayIfLj65EEELin4711EEESD_(void) {
    ALOGD("_ZN6webrtc12ErlEstimator6UpdateERKNSt3__16vectorIbNS1_9allocatorIbEEEEN3rtc9ArrayViewIKNS1_5arrayIfLj65EEELin4711EEESD_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeEchoController() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl24InitializeEchoControllerEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl24InitializeEchoControllerEv() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoDetector::GetMetrics() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc20ResidualEchoDetector10GetMetricsEv(void) {
    ALOGD("_ZNK6webrtc20ResidualEchoDetector10GetMetricsEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ZerosArrayW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ZerosArrayW16(void) {
    ALOGD("WebRtcSpl_ZerosArrayW16() called");
    return 0;
}

/* Demangled: WebRtcVad_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Create(void) {
    ALOGD("WebRtcVad_Create() called");
    return 0;
}

/* Demangled: webrtc::CreateFirFilter(float const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15CreateFirFilterEPKfjj(void) {
    ALOGD("_ZN6webrtc15CreateFirFilterEPKfjj() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::Rms(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc3RmsEPdj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc3RmsEPdj() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::AecState::TransparentMode::TransparentMode(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState15TransparentModeC1ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc8AecState15TransparentModeC1ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::~SuppressionGain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGainD2Ev(void) {
    ALOGD("_ZN6webrtc15SuppressionGainD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int, std::__1::optional<unsigned int>, std::__1::optional<unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::CopyTo(webrtc::StreamConfig const&, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPs(void) {
    ALOGD("_ZN6webrtc11AudioBuffer6CopyToERKNS_12StreamConfigEPs() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoModel::operator=(webrtc::EchoCanceller3Config::EchoModel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config9EchoModelaSERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config9EchoModelaSERKS1_() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEi(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEi() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::ScaleFilter(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter11ScaleFilterEf(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter11ScaleFilterEf() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)2, long> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE2ElEES6_EEEvPKciS8_DpRKT_E1t = NULL;

/* Demangled: webrtc::LevelEstimator::~LevelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14LevelEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc14LevelEstimatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::~SincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerD2Ev(void) {
    ALOGD("_ZN6webrtc13SincResamplerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::ErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc13ErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void) {
    ALOGD("_ZNK6webrtc13ErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEj(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEj() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::AudioBuffer(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferC2Ejjjjjj(void) {
    ALOGD("_ZN6webrtc11AudioBufferC2Ejjjjjj() called");
    return 0;
}

/* Demangled: rtc::IsThreadRefEqual(long const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc16IsThreadRefEqualERKlS1_(void) {
    ALOGD("_ZN3rtc16IsThreadRefEqualERKlS1_() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::ComputeSlidingFrameSquareEnergies(rtc::ArrayView<float const, 864>, rtc::ArrayView<float, 385>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad33ComputeSlidingFrameSquareEnergiesEN3rtc9ArrayViewIKfLi864EEENS2_IfLi385EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad33ComputeSlidingFrameSquareEnergiesEN3rtc9ArrayViewIKfLi864EEENS2_IfLi385EEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::ComputeNormalizedCepstralCorrelation(rtc::ArrayView<float, 6>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor36ComputeNormalizedCepstralCorrelationEN3rtc9ArrayViewIfLi6EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad25SpectralFeaturesExtractor36ComputeNormalizedCepstralCorrelationEN3rtc9ArrayViewIfLi6EEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::SpectralFeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25SpectralFeaturesExtractorC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample44khzTo32khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample44khzTo32khz(void) {
    ALOGD("WebRtcSpl_Resample44khzTo32khz() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_BufferFarFrame(webrtc::AecmCore*, short const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25WebRtcAecm_BufferFarFrameEPNS_8AecmCoreEPKsi(void) {
    ALOGD("_ZN6webrtc25WebRtcAecm_BufferFarFrameEPNS_8AecmCoreEPKsi() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::~StationarityEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimatorD1Ev() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEl(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEl() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::~WPDTree() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeD1Ev(void) {
    ALOGD("_ZN6webrtc7WPDTreeD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10SuppressorC1Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10SuppressorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<short>::PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIsEC1Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIsEC1Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_NS1_8optionalIS7_EE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_NS1_8optionalIS7_EE() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEm(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEm() called");
    return 0;
}

/* Demangled: webrtc::AecDumpFactory::Create(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long, rtc::TaskQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AecDumpFactory6CreateENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE(void) {
    ALOGD("_ZN6webrtc14AecDumpFactory6CreateENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEExPN3rtc9TaskQueueE() called");
    return 0;
}

/* Demangled: rtc::RaceChecker::Release() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc11RaceChecker7ReleaseEv(void) {
    ALOGD("_ZNK3rtc11RaceChecker7ReleaseEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AudioConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc14AudioConverterE = NULL;

/* Demangled: webrtc::EchoCanceller3::RenderWriter::Insert(webrtc::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller312RenderWriter6InsertERKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc14EchoCanceller312RenderWriter6InsertERKNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::HandleEchoPathChange(webrtc::EchoPathVariability const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10Subtractor20HandleEchoPathChangeERKNS_19EchoPathVariabilityE(void) {
    ALOGD("_ZN6webrtc10Subtractor20HandleEchoPathChangeERKNS_19EchoPathVariabilityE() called");
    return 0;
}

/* Demangled: webrtc::RefinedFilterUpdateGain::~RefinedFilterUpdateGain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23RefinedFilterUpdateGainD1Ev(void) {
    ALOGD("_ZN6webrtc23RefinedFilterUpdateGainD1Ev() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::Update(rtc::ArrayView<float const, -4711>, std::__1::optional<float> const&, int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEERKNSt3__18optionalIfEEibb(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEERKNSt3__18optionalIfEEibb() called");
    return 0;
}

/* Demangled: webrtc::Limiter::GetGainCurveStats() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7Limiter17GetGainCurveStatsEv(void) {
    ALOGD("_ZNK6webrtc7Limiter17GetGainCurveStatsEv() called");
    return 0;
}

/* Demangled: webrtc::ErlEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12ErlEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc12ErlEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::UpdateRenderNoisePower(webrtc::RenderBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimator22UpdateRenderNoisePowerERKNS_12RenderBufferE(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimator22UpdateRenderNoisePowerERKNS_12RenderBufferE() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigC1Ev(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigC1Ev() called");
    return 0;
}

/* Demangled: webrtc::field_trial::InitFieldTrialsFromString(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11field_trial25InitFieldTrialsFromStringEPKc(void) {
    ALOGD("_ZN6webrtc11field_trial25InitFieldTrialsFromStringEPKc() called");
    return 0;
}

/* Demangled: WebRtcSpl_UpsampleBy2 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpsampleBy2(void) {
    ALOGD("WebRtcSpl_UpsampleBy2() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<float>::PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIfEC2Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIfEC2Ev() called");
    return 0;
}

/* Demangled: webrtc::CircularBuffer::CircularBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14CircularBufferC2Ej(void) {
    ALOGD("_ZN6webrtc14CircularBufferC2Ej() called");
    return 0;
}

/* Demangled: webrtc::GainController2::~GainController2() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController2D2Ev(void) {
    ALOGD("_ZN6webrtc15GainController2D2Ev() called");
    return 0;
}

/* Demangled: webrtc::CircularBuffer::Push(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14CircularBuffer4PushEf(void) {
    ALOGD("_ZN6webrtc14CircularBuffer4PushEf() called");
    return 0;
}

/* Demangled: WebRtcIsac_AllPassFilter2Float */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AllPassFilter2Float(void) {
    ALOGD("WebRtcIsac_AllPassFilter2Float() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_AddMic(void*, short* const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16WebRtcAgc_AddMicEPvPKPsjj(void) {
    ALOGD("_ZN6webrtc16WebRtcAgc_AddMicEPvPKPsjj() called");
    return 0;
}

/* Demangled: WebRtcAecm_GetBufferFarendError */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_GetBufferFarendError(void) {
    ALOGD("WebRtcAecm_GetBufferFarendError() called");
    return 0;
}

/* Demangled: WebRtcIsac_WeightingFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_WeightingFilter(void) {
    ALOGD("WebRtcIsac_WeightingFilter() called");
    return 0;
}

/* Demangled: webrtc::Pffft::FloatBuffer::FloatBuffer(unsigned int, webrtc::Pffft::FftType) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft11FloatBufferC2EjNS0_7FftTypeE(void) {
    ALOGD("_ZN6webrtc5Pffft11FloatBufferC2EjNS0_7FftTypeE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplD1Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplD1Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_CreateRealFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_CreateRealFFT(void) {
    ALOGD("WebRtcSpl_CreateRealFFT() called");
    return 0;
}

/* Demangled: webrtc::aec3::MatchedFilterCore_NEON(unsigned int, float, float, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>, bool*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec322MatchedFilterCore_NEONEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf(void) {
    ALOGD("_ZN6webrtc4aec322MatchedFilterCore_NEONEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilterLagAggregator::MatchedFilterLagAggregator(webrtc::ApmDataDumper*, unsigned int, webrtc::EchoCanceller3Config::Delay::DelaySelectionThresholds const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26MatchedFilterLagAggregatorC2EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE(void) {
    ALOGD("_ZN6webrtc26MatchedFilterLagAggregatorC2EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE() called");
    return 0;
}

/* Demangled: rtc::tracing::ShutdownInternalTracer() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing22ShutdownInternalTracerEv(void) {
    ALOGD("_ZN3rtc7tracing22ShutdownInternalTracerEv() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MaxAbsValueW32 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxAbsValueW32 = NULL;

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: pffft_simd_arch */
extern "C" __attribute__((visibility("default"))) int pffft_simd_arch(void) {
    ALOGD("pffft_simd_arch() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_stream_key_pressed(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22set_stream_key_pressedEb() called");
    return 0;
}

/* Demangled: webrtc::GetExtraSaturationMarginOffsetDb() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc32GetExtraSaturationMarginOffsetDbEv(void) {
    ALOGD("_ZN6webrtc32GetExtraSaturationMarginOffsetDbEv() called");
    return 0;
}

/* Demangled: webrtc::BlockBuffer::~BlockBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockBufferD2Ev(void) {
    ALOGD("_ZN6webrtc11BlockBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AlignmentMixer::Downmix(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, rtc::ArrayView<float, 64>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc14AlignmentMixer7DownmixEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE(void) {
    ALOGD("_ZNK6webrtc14AlignmentMixer7DownmixEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE() called");
    return 0;
}

/* Demangled: webrtc::ApiCallJitterMetrics::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ApiCallJitterMetrics5ResetEv(void) {
    ALOGD("_ZN6webrtc20ApiCallJitterMetrics5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::ErlEstimator::ErlEstimator(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12ErlEstimatorC2Ej(void) {
    ALOGD("_ZN6webrtc12ErlEstimatorC2Ej() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEx(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEx() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogramC2Ei(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogramC2Ei() called");
    return 0;
}

/* Demangled: webrtc::DownSampler::DownSampler(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11DownSamplerC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc11DownSamplerC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::AdaptAndUpdateSize(webrtc::RenderBuffer const&, webrtc::FftData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter18AdaptAndUpdateSizeERKNS_12RenderBufferERKNS_7FftDataE(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter18AdaptAndUpdateSizeERKNS_12RenderBufferERKNS_7FftDataE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<bool>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsEy(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsEy() called");
    return 0;
}

/* Demangled: webrtc::Dbfs2Loudness(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13Dbfs2LoudnessEd(void) {
    ALOGD("_ZN6webrtc13Dbfs2LoudnessEd() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessStream(short const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKsRKNS_12StreamConfigES5_Ps(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl13ProcessStreamEPKsRKNS_12StreamConfigES5_Ps() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::ApmStatsReporter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC1Ev() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetection::VoiceDetection(int, webrtc::VoiceDetection::Likelihood) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14VoiceDetectionC2EiNS0_10LikelihoodE(void) {
    ALOGD("_ZN6webrtc14VoiceDetectionC2EiNS0_10LikelihoodE() called");
    return 0;
}

/* Demangled: WebRtcAecm_set_config */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_set_config(void) {
    ALOGD("WebRtcAecm_set_config() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::RegionLogger::~RegionLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurve12RegionLoggerD2Ev(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurve12RegionLoggerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::~AdaptiveFirFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilterD2Ev(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilterD2Ev() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilter::~MatchedFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MatchedFilterD1Ev(void) {
    ALOGD("_ZN6webrtc13MatchedFilterD1Ev() called");
    return 0;
}

/* Demangled: PreProc_GetSession(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18PreProc_GetSessioniii(void) {
    ALOGD("_Z18PreProc_GetSessioniii() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::ThreeBandsAnalysis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter18ThreeBandsAnalysisEPKNS_13ChannelBufferIfEEPS2_() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::GetActivity(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad11GetActivityEPdj(void) {
    ALOGD("_ZN6webrtc13StandaloneVad11GetActivityEPdj() called");
    return 0;
}

/* Demangled: rtc::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageD1Ev(void) {
    ALOGD("_ZN3rtc10LogMessageD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3ConfigC1Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3ConfigC1Ev() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::Convolve_NEON(float const*, float const*, float const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler13Convolve_NEONEPKfS2_S2_d(void) {
    ALOGD("_ZN6webrtc13SincResampler13Convolve_NEONEPKfS2_S2_d() called");
    return 0;
}

/* Demangled: WebRtc_available_read */
extern "C" __attribute__((visibility("default"))) int WebRtc_available_read(void) {
    ALOGD("WebRtc_available_read() called");
    return 0;
}

/* Demangled: WebRtcVad_ValidRateAndFrameLength */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_ValidRateAndFrameLength(void) {
    ALOGD("WebRtcVad_ValidRateAndFrameLength() called");
    return 0;
}

/* Demangled: webrtc::DetectOptimization() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18DetectOptimizationEv(void) {
    ALOGD("_ZN6webrtc18DetectOptimizationEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::AnalyzeCapture(webrtc::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller314AnalyzeCaptureERKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc14EchoCanceller314AnalyzeCaptureERKNS_11AudioBufferE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::SubbandNearendDetector */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc22SubbandNearendDetectorE = NULL;

/* Demangled: webrtc::AudioProcessingImpl::InitializeNoiseSuppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl25InitializeNoiseSuppressorEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl25InitializeNoiseSuppressorEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxValueW16Neon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxValueW16Neon(void) {
    ALOGD("WebRtcSpl_MaxValueW16Neon() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_CreateDelayEstimator(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc27WebRtc_CreateDelayEstimatorEPvi(void) {
    ALOGD("_ZN6webrtc27WebRtc_CreateDelayEstimatorEPvi() called");
    return 0;
}

/* Demangled: webrtc::WienerFilter::WienerFilter(webrtc::SuppressionParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12WienerFilterC1ERKNS_17SuppressionParamsE(void) {
    ALOGD("_ZN6webrtc12WienerFilterC1ERKNS_17SuppressionParamsE() called");
    return 0;
}

/* Demangled: webrtc::GainController2::Process(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController27ProcessEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc15GainController27ProcessEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::SignalDependentErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::Agc::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc5ResetEv(void) {
    ALOGD("_ZN6webrtc3Agc5ResetEv() called");
    return 0;
}

/* Demangled: rtc::internal::RaceCheckerScope::~RaceCheckerScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8internal16RaceCheckerScopeD1Ev(void) {
    ALOGD("_ZN3rtc8internal16RaceCheckerScopeD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AbstractFieldTrialEnum::~AbstractFieldTrialEnum() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnumD0Ev(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnumD0Ev() called");
    return 0;
}

/* Demangled: webrtc::GetRightAlign(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13GetRightAlignEjj(void) {
    ALOGD("_ZN6webrtc13GetRightAlignEjj() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_DelayEstimatorProcessFloat(void*, float const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc33WebRtc_DelayEstimatorProcessFloatEPvPKfi(void) {
    ALOGD("_ZN6webrtc33WebRtc_DelayEstimatorProcessFloatEPvPKfi() called");
    return 0;
}

/* Demangled: WebRtcSpl_SynthesisQMF */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_SynthesisQMF(void) {
    ALOGD("WebRtcSpl_SynthesisQMF() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<float>::~PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIfED0Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIfED0Ev() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::SetFilter(unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter9SetFilterEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEE(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter9SetFilterEjRKNSt3__16vectorINS2_INS_7FftDataENS1_9allocatorIS3_EEEENS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::FullyConnectedLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::FunctionView<float (float)>, webrtc::rnn_vad::Optimization) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19FullyConnectedLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE(void) {
    ALOGD("_ZN6webrtc7rnn_vad19FullyConnectedLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::~FullyConnectedLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19FullyConnectedLayerD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad19FullyConnectedLayerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_ProcessFrame(webrtc::AecmCore*, short const*, short const*, short const*, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23WebRtcAecm_ProcessFrameEPNS_8AecmCoreEPKsS3_S3_Ps(void) {
    ALOGD("_ZN6webrtc23WebRtcAecm_ProcessFrameEPNS_8AecmCoreEPKsS3_S3_Ps() called");
    return 0;
}

/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ApiCallJitterMetrics6Jitter5ResetEv(void) {
    ALOGD("_ZN6webrtc20ApiCallJitterMetrics6Jitter5ResetEv() called");
    return 0;
}

/* Demangled: rtc::StringBuilder::AppendFormat(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13StringBuilder12AppendFormatEPKcz(void) {
    ALOGD("_ZN3rtc13StringBuilder12AppendFormatEPKcz() called");
    return 0;
}

/* Demangled: Agc2Create(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10Agc2CreateP16preproc_effect_s(void) {
    ALOGD("_Z10Agc2CreateP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveDigitalGainApplier::AdaptiveDigitalGainApplier(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveDigitalGainApplierC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc26AdaptiveDigitalGainApplierC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::~FilterAnalyzer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzerD2Ev(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::RenderDelayControllerMetrics::RenderDelayControllerMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28RenderDelayControllerMetricsC1Ev(void) {
    ALOGD("_ZN6webrtc28RenderDelayControllerMetricsC1Ev() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::LateReverbLinearRegressor::Reset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor5ResetEi(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor5ResetEi() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<double>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIdEptEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIdEptEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE = NULL;

/* Demangled: rtc::LogMessage::LogThreads(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage10LogThreadsEb(void) {
    ALOGD("_ZN3rtc10LogMessage10LogThreadsEb() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AudioProcessingImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19AudioProcessingImplE = NULL;

/* Demangled: WebRtcVad_CalculateFeatures */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalculateFeatures(void) {
    ALOGD("WebRtcVad_CalculateFeatures() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::SincResampler(double, unsigned int, webrtc::SincResamplerCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE(void) {
    ALOGD("_ZN6webrtc13SincResamplerC2EdjPNS_21SincResamplerCallbackE() called");
    return 0;
}

/* Demangled: webrtc::FixedDigitalLevelEstimator::SetSampleRate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26FixedDigitalLevelEstimator13SetSampleRateEj(void) {
    ALOGD("_ZN6webrtc26FixedDigitalLevelEstimator13SetSampleRateEj() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::FilterMisadjustmentEstimator::Dump(webrtc::ApmDataDumper*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc10Subtractor28FilterMisadjustmentEstimator4DumpEPNS_13ApmDataDumperE(void) {
    ALOGD("_ZNK6webrtc10Subtractor28FilterMisadjustmentEstimator4DumpEPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::LoudnessHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogramC2Ev(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogramC2Ev() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::~TransientDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorD2Ev(void) {
    ALOGD("_ZN6webrtc17TransientDetectorD2Ev() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::Call<>(char const*, int, char const*)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE4CallIJEEEvPKciS5_DpRKT_E1t = NULL;

/* Demangled: webrtc::WebRtcAgc_ProcessAnalog(void*, int, int*, short, short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23WebRtcAgc_ProcessAnalogEPviPissPh(void) {
    ALOGD("_ZN6webrtc23WebRtcAgc_ProcessAnalogEPviPissPh() called");
    return 0;
}

/* Demangled: webrtc::FrameBlocker::FrameBlocker(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12FrameBlockerC1Ejj(void) {
    ALOGD("_ZN6webrtc12FrameBlockerC1Ejj() called");
    return 0;
}

/* Demangled: validate_pffft_simd_ex */
extern "C" __attribute__((visibility("default"))) int validate_pffft_simd_ex(void) {
    ALOGD("validate_pffft_simd_ex() called");
    return 0;
}

/* Demangled: webrtc::MovingMax::~MovingMax() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9MovingMaxD1Ev(void) {
    ALOGD("_ZN6webrtc9MovingMaxD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Linear2Loudness(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15Linear2LoudnessEd(void) {
    ALOGD("_ZN6webrtc15Linear2LoudnessEd() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::ComputePitchGainThreshold(int, int, int, float, int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25ComputePitchGainThresholdEiiifif(void) {
    ALOGD("_ZN6webrtc7rnn_vad25ComputePitchGainThresholdEiiifif() called");
    return 0;
}

/* Demangled: webrtc::MeanVarianceEstimator::std_deviation() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21MeanVarianceEstimator13std_deviationEv(void) {
    ALOGD("_ZNK6webrtc21MeanVarianceEstimator13std_deviationEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RecordUnprocessedCaptureStream(float const* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKPKf(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl30RecordUnprocessedCaptureStreamEPKPKf() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample8khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample8khzTo22khz(void) {
    ALOGD("WebRtcSpl_ResetResample8khzTo22khz() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutput::~SubtractorOutput() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SubtractorOutputD1Ev(void) {
    ALOGD("_ZN6webrtc16SubtractorOutputD1Ev() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::OouraFft(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8OouraFftC2Eb(void) {
    ALOGD("_ZN6webrtc8OouraFftC2Eb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialFlag::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FieldTrialFlag5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc14FieldTrialFlag5ParseENSt3__18optionalINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AbstractFieldTrialEnum */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc22AbstractFieldTrialEnumE = NULL;

/* Demangled: webrtc::WebRtc_set_lookahead(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20WebRtc_set_lookaheadEPvi(void) {
    ALOGD("_ZN6webrtc20WebRtc_set_lookaheadEPvi() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKfEES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKfEES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE6insertIPfEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKfEES7_S7_() called");
    return 0;
}

/* Demangled: WebRtcSpl_ScaleAndAddVectors */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ScaleAndAddVectors(void) {
    ALOGD("WebRtcSpl_ScaleAndAddVectors() called");
    return 0;
}

/* Demangled: webrtc::PriorSignalModelEstimator::Update(webrtc::Histograms const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25PriorSignalModelEstimator6UpdateERKNS_10HistogramsE(void) {
    ALOGD("_ZN6webrtc25PriorSignalModelEstimator6UpdateERKNS_10HistogramsE() called");
    return 0;
}

/* Demangled: webrtc::VadWithLevel::AnalyzeFrame(webrtc::AudioFrameView<float const>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadWithLevel12AnalyzeFrameENS_14AudioFrameViewIKfEE(void) {
    ALOGD("_ZN6webrtc12VadWithLevel12AnalyzeFrameENS_14AudioFrameViewIKfEE() called");
    return 0;
}

/* Demangled: webrtc::CoarseFilterUpdateGain::Compute(std::__1::array<float, 65u> const&, webrtc::RenderSignalAnalyzer const&, webrtc::FftData const&, unsigned int, bool, webrtc::FftData*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22CoarseFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_7FftDataEjbPS9_(void) {
    ALOGD("_ZN6webrtc22CoarseFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_7FftDataEjbPS9_() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::MonoAgc(webrtc::ApmDataDumper*, int, int, bool, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgcC2EPNS_13ApmDataDumperEiibbi(void) {
    ALOGD("_ZN6webrtc7MonoAgcC2EPNS_13ApmDataDumperEiibbi() called");
    return 0;
}

/* Demangled: webrtc::ApmDataDumper::~ApmDataDumper() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ApmDataDumperD1Ev(void) {
    ALOGD("_ZN6webrtc13ApmDataDumperD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::QueueBandedRenderAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22QueueBandedRenderAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22QueueBandedRenderAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: WebRtcSpl_DivW32W16ResW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivW32W16ResW16(void) {
    ALOGD("WebRtcSpl_DivW32W16ResW16() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample48khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample48khzTo8khz(void) {
    ALOGD("WebRtcSpl_ResetResample48khzTo8khz() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilterC1Ejjj(void) {
    ALOGD("_ZN6webrtc15SplittingFilterC1Ejjj() called");
    return 0;
}

/* Demangled: webrtc::VoiceActivityDetector::VoiceActivityDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetectorC2Ev(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetectorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::num_reverse_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl20num_reverse_channelsEv() called");
    return 0;
}

/* Demangled: webrtc::RenderBuffer::RenderBuffer(webrtc::BlockBuffer*, webrtc::SpectrumBuffer*, webrtc::FftBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12RenderBufferC2EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE(void) {
    ALOGD("_ZN6webrtc12RenderBufferC2EPNS_11BlockBufferEPNS_14SpectrumBufferEPNS_9FftBufferE() called");
    return 0;
}

/* Demangled: pffft_transform_internal */
extern "C" __attribute__((visibility("default"))) int pffft_transform_internal(void) {
    ALOGD("pffft_transform_internal() called");
    return 0;
}

/* Exported Object: webrtc::InterpolatedGainCurve::approximation_params_q_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc21InterpolatedGainCurve23approximation_params_q_E = NULL;

/* Demangled: webrtc::AgcManagerDirect::AggregateChannelLevels() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect22AggregateChannelLevelsEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect22AggregateChannelLevelsEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<int>::operator int() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIiEcviEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIiEcviEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_FreeBinaryDelayEstimator(webrtc::BinaryDelayEstimator*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc31WebRtc_FreeBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE(void) {
    ALOGD("_ZN6webrtc31WebRtc_FreeBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE() called");
    return 0;
}

/* Demangled: webrtc::ExpApproximationSignFlip(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24ExpApproximationSignFlipEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc24ExpApproximationSignFlipEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::SetCaptureMuted(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect15SetCaptureMutedEb() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::FilteringQualityAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState24FilteringQualityAnalyzerC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc8AecState24FilteringQualityAnalyzerC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::RenderBuffer::~RenderBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12RenderBufferD2Ev(void) {
    ALOGD("_ZN6webrtc12RenderBufferD2Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialParameterInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc28FieldTrialParameterInterfaceE = NULL;

/* Demangled: AecInit(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z7AecInitP16preproc_effect_s(void) {
    ALOGD("_Z7AecInitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::FloatS16ToFloat(float const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FloatS16ToFloatEPKfjPf(void) {
    ALOGD("_ZN6webrtc15FloatS16ToFloatEPKfjPf() called");
    return 0;
}

/* Demangled: webrtc::ClockdriftDetector::ClockdriftDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18ClockdriftDetectorC2Ev(void) {
    ALOGD("_ZN6webrtc18ClockdriftDetectorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::ResetRegion() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer11ResetRegionEv(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer11ResetRegionEv() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::SetMaxLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc11SetMaxLevelEi(void) {
    ALOGD("_ZN6webrtc7MonoAgc11SetMaxLevelEi() called");
    return 0;
}

/* Demangled: webrtc::Agc::Process(short const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc7ProcessEPKsji(void) {
    ALOGD("_ZN6webrtc3Agc7ProcessEPKsji() called");
    return 0;
}

/* Demangled: webrtc::Pffft::FloatBuffer::~FloatBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft11FloatBufferD2Ev(void) {
    ALOGD("_ZN6webrtc5Pffft11FloatBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoDetector::AnalyzeCaptureAudio(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ResidualEchoDetector19AnalyzeCaptureAudioEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc20ResidualEchoDetector19AnalyzeCaptureAudioEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::array<short, 160u>, std::__1::allocator<std::__1::array<short, 160u> > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_5arrayIsLj160EEENS_9allocatorIS2_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_5arrayIsLj160EEENS_9allocatorIS2_EEE8__appendEj() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample48khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample48khzTo16khz(void) {
    ALOGD("WebRtcSpl_ResetResample48khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::EchoRemoverMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetricsC1Ev(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetricsC1Ev() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::rftbsub_128(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft11rftbsub_128EPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft11rftbsub_128EPf() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::GetBinIndex(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram11GetBinIndexEd(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram11GetBinIndexEd() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FeaturesExtractor::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad17FeaturesExtractor5ResetEv(void) {
    ALOGD("_ZN6webrtc7rnn_vad17FeaturesExtractor5ResetEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_MemSetW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MemSetW32(void) {
    ALOGD("WebRtcSpl_MemSetW32() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::bitrv2_128(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft10bitrv2_128EPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft10bitrv2_128EPf() called");
    return 0;
}

/* Demangled: PreProcessingFx_Process */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_Process(void) {
    ALOGD("PreProcessingFx_Process() called");
    return 0;
}

/* Demangled: WebRtcSpl_DivU32U16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivU32U16(void) {
    ALOGD("WebRtcSpl_DivU32U16() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC1Eiij(void) {
    ALOGD("_ZN6webrtc9ResamplerC1Eiij() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<double>::SetForTest(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIdE10SetForTestEd(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIdE10SetForTestEd() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<bool>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIbEptEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIbEptEv() called");
    return 0;
}

/* Demangled: webrtc::EchoDetector::PackRenderAudioBuffer(webrtc::AudioBuffer*, std::__1::vector<float, std::__1::allocator<float> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12EchoDetector21PackRenderAudioBufferEPNS_11AudioBufferEPNSt3__16vectorIfNS3_9allocatorIfEEEE(void) {
    ALOGD("_ZN6webrtc12EchoDetector21PackRenderAudioBufferEPNS_11AudioBufferEPNSt3__16vectorIfNS3_9allocatorIfEEEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeRender(webrtc::ProcessingConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl21MaybeInitializeRenderERKNS_16ProcessingConfigE() called");
    return 0;
}

/* Demangled: webrtc::ComfortNoiseGenerator::~ComfortNoiseGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ComfortNoiseGeneratorD2Ev(void) {
    ALOGD("_ZN6webrtc21ComfortNoiseGeneratorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilterLagAggregator::~MatchedFilterLagAggregator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26MatchedFilterLagAggregatorD2Ev(void) {
    ALOGD("_ZN6webrtc26MatchedFilterLagAggregatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::Process(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogTimestamps(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage13LogTimestampsEb(void) {
    ALOGD("_ZN3rtc10LogMessage13LogTimestampsEb() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_SoftResetDelayEstimator(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc30WebRtc_SoftResetDelayEstimatorEPvi(void) {
    ALOGD("_ZN6webrtc30WebRtc_SoftResetDelayEstimatorEPvi() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::TransientSuppressorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImplC2Ev(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImplC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureAnalyzerActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates21CaptureAnalyzerActiveEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates21CaptureAnalyzerActiveEv() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::HandleClipping() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc14HandleClippingEv(void) {
    ALOGD("_ZN6webrtc7MonoAgc14HandleClippingEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<unsigned int>::operator unsigned int() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIjEcvjEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIjEcvjEv() called");
    return 0;
}

/* Exported Object: webrtc::AudioProcessingImpl::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc19AudioProcessingImpl15instance_count_E = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, webrtc::FieldTrialParameterInterface*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN6webrtc28FieldTrialParameterInterfaceEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessCaptureStreamLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl26ProcessCaptureStreamLockedEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl26ProcessCaptureStreamLockedEv() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::HandleEchoPathChange() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter20HandleEchoPathChangeEv(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter20HandleEchoPathChangeEv() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::Update(webrtc::AecState const&, std::__1::array<float, 65u> const&, std::__1::array<float, 65u> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics6UpdateERKNS_8AecStateERKNSt3__15arrayIfLj65EEES8_(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics6UpdateERKNS_8AecStateERKNSt3__15arrayIfLj65EEES8_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC1ES7_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIjEcvbEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIjEcvbEv() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::Create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram6CreateEi(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram6CreateEi() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2ERKS2_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2ERKS2_() called");
    return 0;
}

/* Demangled: WebRtcSpl_MinValueW16Neon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MinValueW16Neon(void) {
    ALOGD("WebRtcSpl_MinValueW16Neon() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::~SplittingFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilterD1Ev(void) {
    ALOGD("_ZN6webrtc15SplittingFilterD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureFullBandProcessingActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31CaptureFullBandProcessingActiveEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates31CaptureFullBandProcessingActiveEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIjEptEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIjEptEv() called");
    return 0;
}

/* Demangled: rtc::tokenize_first(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_(void) {
    ALOGD("_ZN3rtc14tokenize_firstERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPS6_S9_() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPost */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPost(void) {
    ALOGD("WebRtcIsac_PitchfilterPost() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializePostProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl23InitializePostProcessorEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl23InitializePostProcessorEv() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::OouraFft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8OouraFftC2Ev(void) {
    ALOGD("_ZN6webrtc8OouraFftC2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<double>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIdEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEd() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitPitchFilter */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitPitchFilter(void) {
    ALOGD("WebRtcIsac_InitPitchFilter() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::ComputeLpResidual(rtc::ArrayView<float const, 5>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad17ComputeLpResidualEN3rtc9ArrayViewIKfLi5EEENS2_IS3_Lin4711EEENS2_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad17ComputeLpResidualEN3rtc9ArrayViewIKfLi5EEENS2_IS3_Lin4711EEENS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19GatedRecurrentLayer5ResetEv(void) {
    ALOGD("_ZN6webrtc7rnn_vad19GatedRecurrentLayer5ResetEv() called");
    return 0;
}

/* Demangled: NsSetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z14NsSetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z14NsSetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::ProcessCaptureAudio(webrtc::AudioBuffer*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferEi(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl19ProcessCaptureAudioEPNS_11AudioBufferEi() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::UpdateBandBySmoothing(float, float, float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21StationarityEstimator13NoiseSpectrum21UpdateBandBySmoothingEfff(void) {
    ALOGD("_ZNK6webrtc21StationarityEstimator13NoiseSpectrum21UpdateBandBySmoothingEfff() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::PlatformThread(void (*)(void*), void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >, rtc::ThreadPriority) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadC1EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE(void) {
    ALOGD("_ZN3rtc14PlatformThreadC1EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE() called");
    return 0;
}

/* Demangled: webrtc::ParseFieldTrial(std::initializer_list<webrtc::FieldTrialParameterInterface*>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15ParseFieldTrialESt16initializer_listIPNS_28FieldTrialParameterInterfaceEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc15ParseFieldTrialESt16initializer_listIPNS_28FieldTrialParameterInterfaceEENSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: rtc::LeftPad(char, unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7LeftPadEcjNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc7LeftPadEcjNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE1EiEES6_S6_NS4_ILS5_9EPKcEES6_EEEvS8_iS8_DpRKT_E1t = NULL;

/* Demangled: webrtc::rnn_vad::ComputeDct(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, 484>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad10ComputeDctEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li484EEENS2_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad10ComputeDctEN3rtc9ArrayViewIKfLin4711EEENS2_IS3_Li484EEENS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: pffft_min_fft_size */
extern "C" __attribute__((visibility("default"))) int pffft_min_fft_size(void) {
    ALOGD("pffft_min_fft_size() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_FreeBinaryDelayEstimatorFarend(webrtc::BinaryDelayEstimatorFarend*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc37WebRtc_FreeBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE(void) {
    ALOGD("_ZN6webrtc37WebRtc_FreeBinaryDelayEstimatorFarendEPNS_26BinaryDelayEstimatorFarendE() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::~VadCircularBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferD2Ev(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionParams::SuppressionParams(webrtc::NsConfig::SuppressionLevel) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17SuppressionParamsC1ENS_8NsConfig16SuppressionLevelE(void) {
    ALOGD("_ZN6webrtc17SuppressionParamsC1ENS_8NsConfig16SuppressionLevelE() called");
    return 0;
}

/* Demangled: webrtc::Agc::~Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcD2Ev(void) {
    ALOGD("_ZN6webrtc3AgcD2Ev() called");
    return 0;
}

/* Exported Object: guard variable for webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def = NULL;

/* Demangled: WebRtcSpl_RealForwardFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RealForwardFFT(void) {
    ALOGD("WebRtcSpl_RealForwardFFT() called");
    return 0;
}

/* Exported Object: vtable for webrtc::ResampleConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc17ResampleConverterE = NULL;

/* Demangled: rtc_FatalMessage */
extern "C" __attribute__((visibility("default"))) int rtc_FatalMessage(void) {
    ALOGD("rtc_FatalMessage() called");
    return 0;
}

/* Demangled: WebRtcSpl_ZerosArrayW32 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ZerosArrayW32(void) {
    ALOGD("WebRtcSpl_ZerosArrayW32() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::ComputeActiveFilterSections() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimator27ComputeActiveFilterSectionsEv(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimator27ComputeActiveFilterSectionsEv() called");
    return 0;
}

/* Demangled: webrtc::Agc::GetRmsErrorDb(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc13GetRmsErrorDbEPi(void) {
    ALOGD("_ZN6webrtc3Agc13GetRmsErrorDbEPi() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_AddFarSpectrumFloat(void*, float const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26WebRtc_AddFarSpectrumFloatEPvPKfi(void) {
    ALOGD("_ZN6webrtc26WebRtc_AddFarSpectrumFloatEPvPKfi() called");
    return 0;
}

/* Demangled: WebRtc_CreateBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_CreateBuffer(void) {
    ALOGD("WebRtc_CreateBuffer() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferD1Ev(void) {
    ALOGD("_ZN6webrtc11AudioBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Aec3Fft::Aec3Fft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7Aec3FftC1Ev(void) {
    ALOGD("_ZN6webrtc7Aec3FftC1Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionFilter::SuppressionFilter(webrtc::Aec3Optimization, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17SuppressionFilterC1ENS_16Aec3OptimizationEij(void) {
    ALOGD("_ZN6webrtc17SuppressionFilterC1ENS_16Aec3OptimizationEij() called");
    return 0;
}

/* Demangled: webrtc::Pow2Approximation(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17Pow2ApproximationEf(void) {
    ALOGD("_ZN6webrtc17Pow2ApproximationEf() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialConstrained<double> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc21FieldTrialConstrainedIdEE = NULL;

/* Demangled: WebRtcIsac_AutoCorr */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_AutoCorr(void) {
    ALOGD("WebRtcIsac_AutoCorr() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingStats::AudioProcessingStats(webrtc::AudioProcessingStats const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20AudioProcessingStatsC1ERKS0_(void) {
    ALOGD("_ZN6webrtc20AudioProcessingStatsC1ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::GetSubframesPitchParameters(int, double*, double*, int, int, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc27GetSubframesPitchParametersEiPdS0_iiS0_S0_S0_S0_(void) {
    ALOGD("_ZN6webrtc27GetSubframesPitchParametersEiPdS0_iiS0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::SpectrumBuffer::SpectrumBuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14SpectrumBufferC2Ejj(void) {
    ALOGD("_ZN6webrtc14SpectrumBufferC2Ejj() called");
    return 0;
}

/* Demangled: rtc::tokenize_with_empty_tokens(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc26tokenize_with_empty_tokensERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::ApmCaptureState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC1Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_CopyFromEndW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_CopyFromEndW16(void) {
    ALOGD("WebRtcSpl_CopyFromEndW16() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::Dump(std::__1::unique_ptr<webrtc::ApmDataDumper, std::__1::default_delete<webrtc::ApmDataDumper> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc28SignalDependentErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE(void) {
    ALOGD("_ZNK6webrtc28SignalDependentErleEstimator4DumpERKNSt3__110unique_ptrINS_13ApmDataDumperENS1_14default_deleteIS3_EEEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_InitPreFilterbank */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_InitPreFilterbank(void) {
    ALOGD("WebRtcIsac_InitPreFilterbank() called");
    return 0;
}

/* Exported Object: vtable for webrtc::TransientSuppressorImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc23TransientSuppressorImplE = NULL;

/* Demangled: webrtc::EchoControlMobileImpl::is_comfort_noise_enabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv(void) {
    ALOGD("_ZNK6webrtc21EchoControlMobileImpl24is_comfort_noise_enabledEv() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::~FullBandErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram6CreateEv(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram6CreateEv() called");
    return 0;
}

/* Demangled: rtc::internal::RaceCheckerScope::RaceCheckerScope(rtc::RaceChecker const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8internal16RaceCheckerScopeC1EPKNS_11RaceCheckerE(void) {
    ALOGD("_ZN3rtc8internal16RaceCheckerScopeC1EPKNS_11RaceCheckerE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::UpmixConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc14UpmixConverterE = NULL;

/* Demangled: webrtc::EchoPathDelayEstimator::~EchoPathDelayEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22EchoPathDelayEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc22EchoPathDelayEstimatorD2Ev() called");
    return 0;
}

/* Demangled: pffft_destroy_setup */
extern "C" __attribute__((visibility("default"))) int pffft_destroy_setup(void) {
    ALOGD("pffft_destroy_setup() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::~TransientSuppressorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImplD0Ev(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImplD0Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::CustomProcessing */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc16CustomProcessingE = NULL;

/* Demangled: webrtc::TransientDetector::Detect(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetector6DetectEPKfjS2_j(void) {
    ALOGD("_ZN6webrtc17TransientDetector6DetectEPKfjS2_j() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStreamLocked(float const* const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl26AnalyzeReverseStreamLockedEPKPKfRKNS_12StreamConfigES7_() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgcC2EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::Resample(unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler8ResampleEjPf(void) {
    ALOGD("_ZN6webrtc13SincResampler8ResampleEjPf() called");
    return 0;
}

/* Demangled: webrtc::PriorSignalModel::PriorSignalModel(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16PriorSignalModelC1Ef(void) {
    ALOGD("_ZN6webrtc16PriorSignalModelC1Ef() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::SubbandErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimatorC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::optional<double> > webrtc::ParseTypedParameter<std::__1::optional<double> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIdEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterINSt3__18optionalIdEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialOptional<bool> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc18FieldTrialOptionalIbEE = NULL;

/* Demangled: webrtc::AudioProcessingImpl::num_proc_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl17num_proc_channelsEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_InitCore(webrtc::AecmCore*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19WebRtcAecm_InitCoreEPNS_8AecmCoreEi(void) {
    ALOGD("_ZN6webrtc19WebRtcAecm_InitCoreEPNS_8AecmCoreEi() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::UpdatePrior(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVad11UpdatePriorEd(void) {
    ALOGD("_ZN6webrtc13PitchBasedVad11UpdatePriorEd() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetection::~VoiceDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14VoiceDetectionD1Ev(void) {
    ALOGD("_ZN6webrtc14VoiceDetectionD1Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_UpBy2ShortToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_UpBy2ShortToInt(void) {
    ALOGD("WebRtcSpl_UpBy2ShortToInt() called");
    return 0;
}

/* Demangled: webrtc::BlockProcessorMetrics::ResetMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21BlockProcessorMetrics12ResetMetricsEv(void) {
    ALOGD("_ZN6webrtc21BlockProcessorMetrics12ResetMetricsEv() called");
    return 0;
}

/* Demangled: webrtc::RefinedFilterUpdateGain::RefinedFilterUpdateGain(webrtc::EchoCanceller3Config::Filter::RefinedConfiguration const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23RefinedFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj(void) {
    ALOGD("_ZN6webrtc23RefinedFilterUpdateGainC2ERKNS_20EchoCanceller3Config6Filter20RefinedConfigurationEj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<int>::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIiE3GetEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIiE3GetEv() called");
    return 0;
}

/* Demangled: webrtc::EventTracer::AddTraceEvent(char, unsigned char const*, char const*, unsigned long long, int, char const**, unsigned char const*, unsigned long long const*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh(void) {
    ALOGD("_ZN6webrtc11EventTracer13AddTraceEventEcPKhPKcyiPS4_S2_PKyh() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeVoiceDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl23InitializeVoiceDetectorEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl23InitializeVoiceDetectorEv() called");
    return 0;
}

/* Demangled: webrtc::ErleEstimator::Update(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_RKNS7_IbNSA_IbEEEE(void) {
    ALOGD("_ZN6webrtc13ErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_RKNS7_IbNSA_IbEEEE() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::IsBlockStationary() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21StationarityEstimator17IsBlockStationaryEv(void) {
    ALOGD("_ZNK6webrtc21StationarityEstimator17IsBlockStationaryEv() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::UpperBandsGain(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::optional<int> const&, bool, std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > const&, std::__1::array<float, 65u> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15SuppressionGain14UpperBandsGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_RKNS3_8optionalIiEEbRKNS3_6vectorINSC_INSC_IfNS3_9allocatorIfEEEENSD_ISF_EEEENSD_ISH_EEEERS6_(void) {
    ALOGD("_ZNK6webrtc15SuppressionGain14UpperBandsGainEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_RKNS3_8optionalIiEEbRKNS3_6vectorINSC_INSC_IfNS3_9allocatorIfEEEENSD_ISF_EEEENSD_ISH_EEEERS6_() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::CheckLowerPitchPeriodsAndComputePitchGain(rtc::ArrayView<float const, 864>, int, webrtc::rnn_vad::PitchInfo) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad41CheckLowerPitchPeriodsAndComputePitchGainEN3rtc9ArrayViewIKfLi864EEEiNS0_9PitchInfoE(void) {
    ALOGD("_ZN6webrtc7rnn_vad41CheckLowerPitchPeriodsAndComputePitchGainEN3rtc9ArrayViewIKfLi864EEEiNS0_9PitchInfoE() called");
    return 0;
}

/* Demangled: WebRtcVad_GaussianProbability */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_GaussianProbability(void) {
    ALOGD("WebRtcVad_GaussianProbability() called");
    return 0;
}

/* Demangled: AecDisable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10AecDisableP16preproc_effect_s(void) {
    ALOGD("_Z10AecDisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::metrics::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics5ResetEv(void) {
    ALOGD("_ZN6webrtc7metrics5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::SpectrumBuffer::~SpectrumBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14SpectrumBufferD2Ev(void) {
    ALOGD("_ZN6webrtc14SpectrumBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<double>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double, std::__1::optional<double>, std::__1::optional<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEdNS2_8optionalIdEESA_() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::GetRmsErrorDb(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29AdaptiveModeLevelEstimatorAgc13GetRmsErrorDbEPi(void) {
    ALOGD("_ZN6webrtc29AdaptiveModeLevelEstimatorAgc13GetRmsErrorDbEPi() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::~WPDNode() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeD2Ev(void) {
    ALOGD("_ZN6webrtc7WPDNodeD2Ev() called");
    return 0;
}

/* Demangled: webrtc::ReverbFrequencyResponse::~ReverbFrequencyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23ReverbFrequencyResponseD2Ev(void) {
    ALOGD("_ZN6webrtc23ReverbFrequencyResponseD2Ev() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::Run() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread3RunEv(void) {
    ALOGD("_ZN3rtc14PlatformThread3RunEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config9EchoModelC2Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config9EchoModelC2Ev() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::~EarlyReverbLengthEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::~AutoCorrelationCalculator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25AutoCorrelationCalculatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::EventTracer::GetCategoryEnabled(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11EventTracer18GetCategoryEnabledEPKc(void) {
    ALOGD("_ZN6webrtc11EventTracer18GetCategoryEnabledEPKc() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::MutateConfig(rtc::FunctionView<void (webrtc::AudioProcessing::Config*)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl12MutateConfigEN3rtc12FunctionViewIFvPNS_15AudioProcessing6ConfigEEEE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl12MutateConfigEN3rtc12FunctionViewIFvPNS_15AudioProcessing6ConfigEEEE() called");
    return 0;
}

/* Demangled: webrtc::WienerFilter::WienerFilter(webrtc::SuppressionParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12WienerFilterC2ERKNS_17SuppressionParamsE(void) {
    ALOGD("_ZN6webrtc12WienerFilterC2ERKNS_17SuppressionParamsE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingBuilder::~AudioProcessingBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AudioProcessingBuilderD1Ev(void) {
    ALOGD("_ZN6webrtc22AudioProcessingBuilderD1Ev() called");
    return 0;
}

/* Demangled: webrtc::LogApproximation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16LogApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc16LogApproximationEN3rtc9ArrayViewIKfLin4711EEENS1_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::AlignmentMixer::ProduceOutput(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, rtc::ArrayView<float, 64>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AlignmentMixer13ProduceOutputEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE(void) {
    ALOGD("_ZN6webrtc14AlignmentMixer13ProduceOutputEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IfLi64EEE() called");
    return 0;
}

/* Demangled: webrtc::ReverbModel::~ReverbModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11ReverbModelD2Ev(void) {
    ALOGD("_ZN6webrtc11ReverbModelD2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_ProcessBinarySpectrum(webrtc::BinaryDelayEstimator*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28WebRtc_ProcessBinarySpectrumEPNS_20BinaryDelayEstimatorEj(void) {
    ALOGD("_ZN6webrtc28WebRtc_ProcessBinarySpectrumEPNS_20BinaryDelayEstimatorEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MaxValueW16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxValueW16 = NULL;

/* Demangled: webrtc::CascadedBiQuadFilter::~CascadedBiQuadFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilterD2Ev(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilterD2Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FeaturesExtractor::FeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad17FeaturesExtractorC2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad17FeaturesExtractorC2Ev() called");
    return 0;
}

/* Demangled: WebRtcVad_Init */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Init(void) {
    ALOGD("WebRtcVad_Init() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerD0Ev(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerD0Ev() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::~AgcManagerDirect() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectD2Ev(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectD2Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::PitchEstimator::Estimate(rtc::ArrayView<float const, 864>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad14PitchEstimator8EstimateEN3rtc9ArrayViewIKfLi864EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad14PitchEstimator8EstimateEN3rtc9ArrayViewIKfLi864EEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingStats::~AudioProcessingStats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20AudioProcessingStatsD1Ev(void) {
    ALOGD("_ZN6webrtc20AudioProcessingStatsD1Ev() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::AverageAndPeak() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevel14AverageAndPeakEv(void) {
    ALOGD("_ZN6webrtc8RmsLevel14AverageAndPeakEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::PushSincResampler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc17PushSincResamplerE = NULL;

/* Demangled: webrtc::NoiseSuppressor::AggregateWienerFilters(rtc::ArrayView<float, 129>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15NoiseSuppressor22AggregateWienerFiltersEN3rtc9ArrayViewIfLi129EEE(void) {
    ALOGD("_ZNK6webrtc15NoiseSuppressor22AggregateWienerFiltersEN3rtc9ArrayViewIfLi129EEE() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(std::__1::vector<webrtc::CascadedBiQuadFilter::BiQuadParam, std::__1::allocator<webrtc::CascadedBiQuadFilter::BiQuadParam> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilterC2ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilterC2ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::~AudioProcessingImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplD2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplD2Ev() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEESA_EEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::WebRtcAgc_GetAddFarendError(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc27WebRtcAgc_GetAddFarendErrorEPvj(void) {
    ALOGD("_ZN6webrtc27WebRtcAgc_GetAddFarendErrorEPvj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessing::Config::Pipeline::Pipeline() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15AudioProcessing6Config8PipelineC2Ev(void) {
    ALOGD("_ZN6webrtc15AudioProcessing6Config8PipelineC2Ev() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperEf(void) {
    ALOGD("_ZN6webrtc19SaturationProtectorC1EPNS_13ApmDataDumperEf() called");
    return 0;
}

/* Exported Object: WebRtcIsac_kUpperApFactorsFloat */
extern "C" __attribute__((visibility("default"))) void* WebRtcIsac_kUpperApFactorsFloat = NULL;

/* Demangled: webrtc::MovingMoments::~MovingMoments() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsD1Ev(void) {
    ALOGD("_ZN6webrtc13MovingMomentsD1Ev() called");
    return 0;
}

/* Demangled: AecEnable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AecEnableP16preproc_effect_s(void) {
    ALOGD("_Z9AecEnableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::EmptyQueuedRenderAudioLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl28EmptyQueuedRenderAudioLockedEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl28EmptyQueuedRenderAudioLockedEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::GainControlImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc15GainControlImplE = NULL;

/* Demangled: webrtc::FieldTrialConstrained<double>::operator double() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIdEcvdEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIdEcvdEv() called");
    return 0;
}

/* Demangled: rtc::hex_encode_with_delimiter(char const*, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc25hex_encode_with_delimiterEPKcjc(void) {
    ALOGD("_ZN3rtc25hex_encode_with_delimiterEPKcjc() called");
    return 0;
}

/* Demangled: webrtc::NoiseLevelEstimator::~NoiseLevelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NoiseLevelEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc19NoiseLevelEstimatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_CalcStepSize(webrtc::AecmCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23WebRtcAecm_CalcStepSizeEPNS_8AecmCoreE(void) {
    ALOGD("_ZN6webrtc23WebRtcAecm_CalcStepSizeEPNS_8AecmCoreE() called");
    return 0;
}

/* Exported Object: webrtc::InterpolatedGainCurve::approximation_params_m_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc21InterpolatedGainCurve23approximation_params_m_E = NULL;

/* Demangled: webrtc::ApiCallJitterMetrics::ReportRenderCall() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ApiCallJitterMetrics16ReportRenderCallEv(void) {
    ALOGD("_ZN6webrtc20ApiCallJitterMetrics16ReportRenderCallEv() called");
    return 0;
}

/* Demangled: webrtc::RenderSignalAnalyzer::~RenderSignalAnalyzer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20RenderSignalAnalyzerD1Ev(void) {
    ALOGD("_ZN6webrtc20RenderSignalAnalyzerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > webrtc::ParseTypedParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEENS1_8optionalIT_EES7_(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEENS1_8optionalIT_EES7_() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::ProcessCapture(webrtc::AudioBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferEb(void) {
    ALOGD("_ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferEb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::GetOptional() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE11GetOptionalEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE11GetOptionalEv() called");
    return 0;
}

/* Demangled: rtc::webrtc_checks_impl::FatalLog(char const*, int, char const*, rtc::webrtc_checks_impl::CheckArgType const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc18webrtc_checks_impl8FatalLogEPKciS2_PKNS0_12CheckArgTypeEz(void) {
    ALOGD("_ZN3rtc18webrtc_checks_impl8FatalLogEPKciS2_PKNS0_12CheckArgTypeEz() called");
    return 0;
}

/* Demangled: rtc::RaceChecker::RaceChecker() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11RaceCheckerC2Ev(void) {
    ALOGD("_ZN3rtc11RaceCheckerC2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics8DbMetricC2Ev(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics8DbMetricC2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIsNS_9allocatorIsEEE6insertIPKsEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIsNS_15iterator_traitsIS8_E9referenceEEE5valueENS_11__wrap_iterIPsEEE4typeENSC_IS6_EES8_S8_() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::Synthesis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter9SynthesisEPKNS_13ChannelBufferIfEEPS2_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter9SynthesisEPKNS_13ChannelBufferIfEEPS2_() called");
    return 0;
}

/* Demangled: webrtc::AecState::FilteringQualityAnalyzer::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState24FilteringQualityAnalyzer5ResetEv(void) {
    ALOGD("_ZN6webrtc8AecState24FilteringQualityAnalyzer5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector5ResetEv(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector5ResetEv() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPre_la */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPre_la(void) {
    ALOGD("WebRtcIsac_PitchfilterPre_la() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay(webrtc::EchoCanceller3Config::Delay const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config5DelayC1ERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config5DelayC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_InitDigital(webrtc::DigitalAgc*, short) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21WebRtcAgc_InitDigitalEPNS_10DigitalAgcEs(void) {
    ALOGD("_ZN6webrtc21WebRtcAgc_InitDigitalEPNS_10DigitalAgcEs() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::SignalClassifier(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifierC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc16SignalClassifierC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::PitchEstimator::~PitchEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad14PitchEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad14PitchEstimatorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for rtc::RefCountedObject<webrtc::AudioProcessingImpl> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3rtc16RefCountedObjectIN6webrtc19AudioProcessingImplEEE = NULL;

/* Demangled: webrtc::VoiceDetection::VoiceDetection(int, webrtc::VoiceDetection::Likelihood) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14VoiceDetectionC1EiNS0_10LikelihoodE(void) {
    ALOGD("_ZN6webrtc14VoiceDetectionC1EiNS0_10LikelihoodE() called");
    return 0;
}

/* Demangled: WebRtcAecm_Create */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Create(void) {
    ALOGD("WebRtcAecm_Create() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxAbsValueW16Neon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxAbsValueW16Neon(void) {
    ALOGD("WebRtcSpl_MaxAbsValueW16Neon() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::set_mode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad8set_modeEi(void) {
    ALOGD("_ZN6webrtc13StandaloneVad8set_modeEi() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcC1Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcC1Ev() called");
    return 0;
}

/* Demangled: webrtc::VadWithLevel::VadWithLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadWithLevelC1Ev(void) {
    ALOGD("_ZN6webrtc12VadWithLevelC1Ev() called");
    return 0;
}

/* Demangled: webrtc::CoarseFilterUpdateGain::HandleEchoPathChange() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22CoarseFilterUpdateGain20HandleEchoPathChangeEv(void) {
    ALOGD("_ZN6webrtc22CoarseFilterUpdateGain20HandleEchoPathChangeEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIbEcvbEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIbEcvbEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::RnnBasedVad::ComputeVadProbability(rtc::ArrayView<float const, 42>, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad11RnnBasedVad21ComputeVadProbabilityEN3rtc9ArrayViewIKfLi42EEEb(void) {
    ALOGD("_ZN6webrtc7rnn_vad11RnnBasedVad21ComputeVadProbabilityEN3rtc9ArrayViewIKfLi42EEEb() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPKfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsISA_E9referenceEEE5valueENS5_IPfEEE4typeES8_SA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPKfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsISA_E9referenceEEE5valueENS5_IPfEEE4typeES8_SA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE6insertINS_11__wrap_iterIPKfEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIfNS_15iterator_traitsISA_E9referenceEEE5valueENS5_IPfEEE4typeES8_SA_SA_() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::ErleInstantaneous(webrtc::EchoCanceller3Config::Erle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC1ERKNS_20EchoCanceller3Config4ErleE(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneousC1ERKNS_20EchoCanceller3Config4ErleE() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::ResidualEchoEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimatorC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::cftfsub_128(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft11cftfsub_128EPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft11cftfsub_128EPf() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::RnnBasedVad::~RnnBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad11RnnBasedVadD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad11RnnBasedVadD1Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralCorrelator::~SpectralCorrelator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad18SpectralCorrelatorD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad18SpectralCorrelatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::CopyFrom(float const* const*, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE(void) {
    ALOGD("_ZN6webrtc11AudioBuffer8CopyFromEPKPKfRKNS_12StreamConfigE() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::set_stream_analog_level(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect23set_stream_analog_levelEi(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect23set_stream_analog_levelEi() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::CallCheckOp<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int>, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)1, int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE11CallCheckOpIJNS0_3ValILNS0_12CheckArgTypeE1EiEES6_EEEvPKciS8_DpRKT_E1t = NULL;

/* Exported Object: vtable for webrtc::PushResampler<short> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13PushResamplerIsEE = NULL;

/* Demangled: webrtc::FixedDigitalLevelEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26FixedDigitalLevelEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc26FixedDigitalLevelEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::PeakEnveloper::PeakEnveloper() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtector13PeakEnveloperC1Ev(void) {
    ALOGD("_ZN6webrtc19SaturationProtector13PeakEnveloperC1Ev() called");
    return 0;
}

/* Demangled: webrtc::DownsampledRenderBuffer::~DownsampledRenderBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23DownsampledRenderBufferD1Ev(void) {
    ALOGD("_ZN6webrtc23DownsampledRenderBufferD1Ev() called");
    return 0;
}

/* Demangled: rtc::Event::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5Event5ResetEv(void) {
    ALOGD("_ZN3rtc5Event5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_FetchFarFrame(webrtc::AecmCore*, short*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24WebRtcAecm_FetchFarFrameEPNS_8AecmCoreEPsii(void) {
    ALOGD("_ZN6webrtc24WebRtcAecm_FetchFarFrameEPNS_8AecmCoreEPsii() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::ConsistentFilterDetector(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC1ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC1ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Estimate() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator8EstimateEv(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator8EstimateEv() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEiii(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC1EPNS_3AgcEiii() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_output_will_be_muted(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl24set_output_will_be_mutedEb() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::~ThreeBandFilterBank() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBankD2Ev(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBankD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperEf(void) {
    ALOGD("_ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperEf() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10LogMessageC2EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::Initialize(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl10InitializeEiii(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl10InitializeEiii() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_ZeroCtrl(webrtc::LegacyAgc*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18WebRtcAgc_ZeroCtrlEPNS_9LegacyAgcEPiS2_(void) {
    ALOGD("_ZN6webrtc18WebRtcAgc_ZeroCtrlEPNS_9LegacyAgcEPiS2_() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilter::Update(webrtc::DownsampledRenderBuffer const&, rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MatchedFilter6UpdateERKNS_23DownsampledRenderBufferEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc13MatchedFilter6UpdateERKNS_23DownsampledRenderBufferEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: pffftd_aligned_free */
extern "C" __attribute__((visibility("default"))) int pffftd_aligned_free(void) {
    ALOGD("pffftd_aligned_free() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::PackRenderAudioBuffer(webrtc::AudioBuffer const&, std::__1::vector<short, std::__1::allocator<short> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl21PackRenderAudioBufferERKNS_11AudioBufferEPNSt3__16vectorIsNS4_9allocatorIsEEEE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl21PackRenderAudioBufferERKNS_11AudioBufferEPNSt3__16vectorIsNS4_9allocatorIsEEEE() called");
    return 0;
}

/* Demangled: rtc::split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc5splitERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutputAnalyzer::SubtractorOutputAnalyzer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24SubtractorOutputAnalyzerC2Ej(void) {
    ALOGD("_ZN6webrtc24SubtractorOutputAnalyzerC2Ej() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::optional<int>, std::__1::optional<int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiNS2_8optionalIiEESA_() called");
    return 0;
}

/* Demangled: rtc::LogMessage::LogToDebug(rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessage10LogToDebugENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializePreAmplifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22InitializePreAmplifierEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22InitializePreAmplifierEv() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Set(int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer3SetEid(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer3SetEid() called");
    return 0;
}

/* Demangled: rtc::RaceChecker::Acquire() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3rtc11RaceChecker7AcquireEv(void) {
    ALOGD("_ZNK3rtc11RaceChecker7AcquireEv() called");
    return 0;
}

/* Demangled: rtc::Event::Event() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventC1Ev(void) {
    ALOGD("_ZN3rtc5EventC1Ev() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC1Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerC1Ev() called");
    return 0;
}

/* Exported Object: webrtc::SincResampler::kKernelSize */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc13SincResampler11kKernelSizeE = NULL;

/* Demangled: webrtc::VadCircularBuffer::Oldest() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17VadCircularBuffer6OldestEv(void) {
    ALOGD("_ZNK6webrtc17VadCircularBuffer6OldestEv() called");
    return 0;
}

/* Demangled: webrtc::ErleEstimator::~ErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ErleEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc13ErleEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::UpdateBands(std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimator11UpdateBandsERKNSt3__16vectorIbNS1_9allocatorIbEEEE(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimator11UpdateBandsERKNSt3__16vectorIbNS1_9allocatorIbEEEE() called");
    return 0;
}

/* Demangled: webrtc::Pffft::CreateBuffer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc5Pffft12CreateBufferEv(void) {
    ALOGD("_ZNK6webrtc5Pffft12CreateBufferEv() called");
    return 0;
}

/* Exported Object: rnnoise::kOutputDenseBias */
extern "C" __attribute__((visibility("default"))) void* _ZN7rnnoise16kOutputDenseBiasE = NULL;

/* Demangled: WebRtcSpl_ResetResample16khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample16khzTo22khz(void) {
    ALOGD("WebRtcSpl_ResetResample16khzTo22khz() called");
    return 0;
}

/* Demangled: WebRtcSpl_DownBy2IntToShort */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownBy2IntToShort(void) {
    ALOGD("WebRtcSpl_DownBy2IntToShort() called");
    return 0;
}

/* Demangled: rtc::SetClockForTesting(rtc::ClockInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc18SetClockForTestingEPNS_14ClockInterfaceE(void) {
    ALOGD("_ZN3rtc18SetClockForTestingEPNS_14ClockInterfaceE() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::CheckBlockSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevel14CheckBlockSizeEj(void) {
    ALOGD("_ZN6webrtc8RmsLevel14CheckBlockSizeEj() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor(webrtc::EchoCanceller3Config::Suppressor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10SuppressorC2ERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10SuppressorC2ERKS1_() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MinValueW16 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MinValueW16 = NULL;

/* Demangled: webrtc::WebRtcAecm_AsymFilt(short, short, short, short) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19WebRtcAecm_AsymFiltEssss(void) {
    ALOGD("_ZN6webrtc19WebRtcAecm_AsymFiltEssss() called");
    return 0;
}

/* Demangled: rtc::TimeUTCMillis() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13TimeUTCMillisEv(void) {
    ALOGD("_ZN3rtc13TimeUTCMillisEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_AllPassQMF */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_AllPassQMF(void) {
    ALOGD("WebRtcSpl_AllPassQMF() called");
    return 0;
}

/* Demangled: webrtc::EvaluateGmm(double const*, webrtc::GmmParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE(void) {
    ALOGD("_ZN6webrtc11EvaluateGmmEPKdRKNS_13GmmParametersE() called");
    return 0;
}

/* Demangled: webrtc::AecState::~AecState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecStateD2Ev(void) {
    ALOGD("_ZN6webrtc8AecStateD2Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::GatedRecurrentLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, webrtc::rnn_vad::Optimization) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19GatedRecurrentLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE(void) {
    ALOGD("_ZN6webrtc7rnn_vad19GatedRecurrentLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::SetLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc8SetLevelEi(void) {
    ALOGD("_ZN6webrtc7MonoAgc8SetLevelEi() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::~GatedRecurrentLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19GatedRecurrentLayerD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad19GatedRecurrentLayerD1Ev() called");
    return 0;
}

/* Demangled: AecGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AecGetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z15AecGetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::Process(webrtc::AudioBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect7ProcessEPKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect7ProcessEPKNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeAnalyzer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl18InitializeAnalyzerEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl18InitializeAnalyzerEv() called");
    return 0;
}

/* Exported Object: webrtc::GainController2::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15GainController215instance_count_E = NULL;

/* Demangled: WebRtcSpl_MaxValueW32Neon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxValueW32Neon(void) {
    ALOGD("WebRtcSpl_MaxValueW32Neon() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::Adapt(webrtc::RenderBuffer const&, webrtc::FftData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataE(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilter5AdaptERKNS_12RenderBufferERKNS_7FftDataE() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::EstimateBandStationarity(webrtc::SpectrumBuffer const&, rtc::ArrayView<float const, -4711>, std::__1::array<int, 13u> const&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21StationarityEstimator24EstimateBandStationarityERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEERKNSt3__15arrayIiLj13EEEj(void) {
    ALOGD("_ZNK6webrtc21StationarityEstimator24EstimateBandStationarityERKNS_14SpectrumBufferEN3rtc9ArrayViewIKfLin4711EEERKNSt3__15arrayIiLj13EEEj() called");
    return 0;
}

/* Demangled: rtc::LogMessage::RemoveLogToStream(rtc::LogSink*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE(void) {
    ALOGD("_ZN3rtc10LogMessage17RemoveLogToStreamEPNS_7LogSinkE() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::RemoveTransient() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram15RemoveTransientEv(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram15RemoveTransientEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplC1Ev(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplC1Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIjE3GetEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIjE3GetEv() called");
    return 0;
}

/* Demangled: webrtc::Config::~Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc6ConfigD1Ev(void) {
    ALOGD("_ZN6webrtc6ConfigD1Ev() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressor::ChannelState::ChannelState(webrtc::SuppressionParams const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15NoiseSuppressor12ChannelStateC2ERKNS_17SuppressionParamsEj(void) {
    ALOGD("_ZN6webrtc15NoiseSuppressor12ChannelStateC2ERKNS_17SuppressionParamsEj() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::~EchoAudibility() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibilityD2Ev(void) {
    ALOGD("_ZN6webrtc14EchoAudibilityD2Ev() called");
    return 0;
}

/* Demangled: webrtc::Resampler::ResetIfNeeded(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Resampler13ResetIfNeededEiij(void) {
    ALOGD("_ZN6webrtc9Resampler13ResetIfNeededEiij() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::Insert(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer6InsertEd(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer6InsertEd() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIbE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_Control(webrtc::AecmCore*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18WebRtcAecm_ControlEPNS_8AecmCoreEii(void) {
    ALOGD("_ZN6webrtc18WebRtcAecm_ControlEPNS_8AecmCoreEii() called");
    return 0;
}

/* Demangled: rtc::TimeMicros() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10TimeMicrosEv(void) {
    ALOGD("_ZN3rtc10TimeMicrosEv() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::SubframeCorrelation(double*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj(void) {
    ALOGD("_ZN6webrtc12VadAudioProc19SubframeCorrelationEPdjj() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtector5ResetEv(void) {
    ALOGD("_ZN6webrtc19SaturationProtector5ResetEv() called");
    return 0;
}

/* Exported Object: rnnoise::kHiddenGruWeights */
extern "C" __attribute__((visibility("default"))) void* _ZN7rnnoise17kHiddenGruWeightsE = NULL;

/* Demangled: webrtc::SignalClassifier::Analyze(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifier7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc16SignalClassifier7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::NoiseLevelEstimator::NoiseLevelEstimator(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NoiseLevelEstimatorC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc19NoiseLevelEstimatorC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: WebRtcSpl_RandUArray */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RandUArray(void) {
    ALOGD("WebRtcSpl_RandUArray() called");
    return 0;
}

/* Demangled: WebRtcVad_CalcVad8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad8khz(void) {
    ALOGD("WebRtcVad_CalcVad8khz() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_SB_EEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::ReverbFrequencyResponse::Update(std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const&, int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEif(void) {
    ALOGD("_ZN6webrtc23ReverbFrequencyResponse6UpdateERKNSt3__16vectorINS1_5arrayIfLj65EEENS1_9allocatorIS4_EEEEif() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::SplitIntoFrequencyBands() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer23SplitIntoFrequencyBandsEv() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::~StationarityEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimatorD2Ev() called");
    return 0;
}

/* Demangled: rtc::TimeUTCMicros() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc13TimeUTCMicrosEv(void) {
    ALOGD("_ZN3rtc13TimeUTCMicrosEv() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::~WPDTree() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeD2Ev(void) {
    ALOGD("_ZN6webrtc7WPDTreeD2Ev() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::~RmsLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevelD1Ev(void) {
    ALOGD("_ZN6webrtc8RmsLevelD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10SuppressorC2Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10SuppressorC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_DownsampleFastNeon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DownsampleFastNeon(void) {
    ALOGD("WebRtcSpl_DownsampleFastNeon() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<short>::PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIsEC2Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIsEC2Ev() called");
    return 0;
}

/* Demangled: webrtc::FastApproxLog2f(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FastApproxLog2fEf(void) {
    ALOGD("_ZN6webrtc15FastApproxLog2fEf() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::Update(webrtc::RenderBuffer const&, rtc::ArrayView<float const, -4711>, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibility6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEib(void) {
    ALOGD("_ZN6webrtc14EchoAudibility6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEib() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeTransientSuppressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl29InitializeTransientSuppressorEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl29InitializeTransientSuppressorEv() called");
    return 0;
}

/* Demangled: webrtc::RefinedFilterUpdateGain::~RefinedFilterUpdateGain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23RefinedFilterUpdateGainD2Ev(void) {
    ALOGD("_ZN6webrtc23RefinedFilterUpdateGainD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::DecreaseErlePerBandForLowRenderSignals() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimator38DecreaseErlePerBandForLowRenderSignalsEv(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimator38DecreaseErlePerBandForLowRenderSignalsEv() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeC2EjPKfS2_ji(void) {
    ALOGD("_ZN6webrtc7WPDTreeC2EjPKfS2_ji() called");
    return 0;
}

/* Demangled: webrtc::ExperimentalAgc const& webrtc::Config::Get<webrtc::ExperimentalAgc>() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc6Config3GetINS_15ExperimentalAgcEEERKT_v(void) {
    ALOGD("_ZNK6webrtc6Config3GetINS_15ExperimentalAgcEEERKT_v() called");
    return 0;
}

/* Demangled: webrtc::NoiseLevelEstimator::Analyze(webrtc::AudioFrameView<float const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19NoiseLevelEstimator7AnalyzeERKNS_14AudioFrameViewIKfEE(void) {
    ALOGD("_ZN6webrtc19NoiseLevelEstimator7AnalyzeERKNS_14AudioFrameViewIKfEE() called");
    return 0;
}

/* Demangled: webrtc::BlockFramer::BlockFramer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockFramerC2Ejj(void) {
    ALOGD("_ZN6webrtc11BlockFramerC2Ejj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::GetOptional() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIjE11GetOptionalEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIjE11GetOptionalEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::enable_comfort_noise(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl20enable_comfort_noiseEb() called");
    return 0;
}

/* Demangled: WebRtc_ReadBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_ReadBuffer(void) {
    ALOGD("WebRtc_ReadBuffer() called");
    return 0;
}

/* Exported Object: vtable for webrtc::PushResampler<float> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc13PushResamplerIfEE = NULL;

/* Demangled: webrtc::BlockDelayBuffer::~BlockDelayBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16BlockDelayBufferD1Ev(void) {
    ALOGD("_ZN6webrtc16BlockDelayBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigC2Ev(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigC2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIdEptEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIdEptEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<float*, std::__1::allocator<float*> >::push_back(float*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPfNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEEEEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::EchoAudibility::IsRenderTooLow(webrtc::BlockBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibility14IsRenderTooLowERKNS_11BlockBufferE(void) {
    ALOGD("_ZN6webrtc14EchoAudibility14IsRenderTooLowERKNS_11BlockBufferE() called");
    return 0;
}

/* Demangled: PreProc_GetDescriptor(audio_uuid_s const*) */
extern "C" __attribute__((visibility("default"))) int _Z21PreProc_GetDescriptorPK12audio_uuid_s(void) {
    ALOGD("_Z21PreProc_GetDescriptorPK12audio_uuid_s() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SetRuntimeSetting(webrtc::AudioProcessing::RuntimeSetting) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl17SetRuntimeSettingENS_15AudioProcessing14RuntimeSettingE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::EchoControlMobileImpl::Canceller, std::__1::default_delete<webrtc::EchoControlMobileImpl::Canceller> >, std::__1::allocator<std::__1::unique_ptr<webrtc::EchoControlMobileImpl::Canceller, std::__1::default_delete<webrtc::EchoControlMobileImpl::Canceller> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc21EchoControlMobileImpl9CancellerENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6webrtc21EchoControlMobileImpl9CancellerENS_14default_deleteIS4_EEEENS_9allocatorIS7_EEE8__appendEj() called");
    return 0;
}

/* Demangled: WebRtcSpl_RandN */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RandN(void) {
    ALOGD("WebRtcSpl_RandN() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterNEON::~FIRFilterNEON() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FIRFilterNEOND0Ev(void) {
    ALOGD("_ZN6webrtc13FIRFilterNEOND0Ev() called");
    return 0;
}

/* Demangled: webrtc::RenderBuffer::SpectralSums(unsigned int, unsigned int, std::__1::array<float, 65u>*, std::__1::array<float, 65u>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc12RenderBuffer12SpectralSumsEjjPNSt3__15arrayIfLj65EEES4_(void) {
    ALOGD("_ZNK6webrtc12RenderBuffer12SpectralSumsEjjPNSt3__15arrayIfLj65EEES4_() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::UpdateHangover() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator14UpdateHangoverEv(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator14UpdateHangoverEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::HandleRenderRuntimeSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl27HandleRenderRuntimeSettingsEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl27HandleRenderRuntimeSettingsEv() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::PackRenderAudioBuffer(webrtc::AudioBuffer const*, unsigned int, unsigned int, std::__1::vector<short, std::__1::allocator<short> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl21PackRenderAudioBufferEPKNS_11AudioBufferEjjPNSt3__16vectorIsNS4_9allocatorIsEEEE(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl21PackRenderAudioBufferEPKNS_11AudioBufferEjjPNSt3__16vectorIsNS4_9allocatorIsEEEE() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread4StopEv(void) {
    ALOGD("_ZN3rtc14PlatformThread4StopEv() called");
    return 0;
}

/* Demangled: webrtc::ReverbModelEstimator::~ReverbModelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbModelEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc20ReverbModelEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::RenderDelayControllerMetrics::Update(std::__1::optional<unsigned int>, unsigned int, std::__1::optional<int>, webrtc::ClockdriftDetector::Level) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28RenderDelayControllerMetrics6UpdateENSt3__18optionalIjEEjNS2_IiEENS_18ClockdriftDetector5LevelE(void) {
    ALOGD("_ZN6webrtc28RenderDelayControllerMetrics6UpdateENSt3__18optionalIjEEjNS2_IiEENS_18ClockdriftDetector5LevelE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EEiEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::CurrentRms() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17LoudnessHistogram10CurrentRmsEv(void) {
    ALOGD("_ZNK6webrtc17LoudnessHistogram10CurrentRmsEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::~GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplD2Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplD2Ev() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter5ResetEv(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_NS1_8optionalIS7_EE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_NS1_8optionalIS7_EE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::stream_delay_ms() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15stream_delay_msEv() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::~NoiseSpectrum() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator13NoiseSpectrumD1Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator13NoiseSpectrumD1Ev() called");
    return 0;
}

/* Demangled: rtc::hex_encode(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10hex_encodeERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Session_Init(preproc_session_s*) */
extern "C" __attribute__((visibility("default"))) int _Z12Session_InitP17preproc_session_s(void) {
    ALOGD("_Z12Session_InitP17preproc_session_s() called");
    return 0;
}

/* Demangled: webrtc::EchoPathDelayEstimator::Reset(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22EchoPathDelayEstimator5ResetEbb(void) {
    ALOGD("_ZN6webrtc22EchoPathDelayEstimator5ResetEbb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<unsigned int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::MovingMax::max() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc9MovingMax3maxEv(void) {
    ALOGD("_ZNK6webrtc9MovingMax3maxEv() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadC1Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadC1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::UpdateRenderStationarityFlags(webrtc::RenderBuffer const&, rtc::ArrayView<float const, -4711>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibility29UpdateRenderStationarityFlagsERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEi(void) {
    ALOGD("_ZN6webrtc14EchoAudibility29UpdateRenderStationarityFlagsERKNS_12RenderBufferEN3rtc9ArrayViewIKfLin4711EEEi() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialParameter<double> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19FieldTrialParameterIdEE = NULL;

/* Demangled: std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::destroy(std::__1::__tree_node<int, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE(void) {
    ALOGD("_ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE7destroyEPNS_11__tree_nodeIiPvEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RecordProcessedCaptureStream(short const*, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKsRKNS_12StreamConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl28RecordProcessedCaptureStreamEPKsRKNS_12StreamConfigE() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoDetector::ResidualEchoDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ResidualEchoDetectorC2Ev(void) {
    ALOGD("_ZN6webrtc20ResidualEchoDetectorC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_RandU */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_RandU(void) {
    ALOGD("WebRtcSpl_RandU() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::CascadedBiQuadFilter(std::__1::vector<webrtc::CascadedBiQuadFilter::BiQuadParam, std::__1::allocator<webrtc::CascadedBiQuadFilter::BiQuadParam> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilterC1ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilterC1ERKNSt3__16vectorINS0_11BiQuadParamENS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::HighPassFilter(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilterC1Eij(void) {
    ALOGD("_ZN6webrtc14HighPassFilterC1Eij() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::ApmRenderState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateC1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl14ApmRenderStateC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::ApmStatsReporter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16ApmStatsReporterC2Ev() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::Filter(webrtc::RenderBuffer const&, webrtc::FftData*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17AdaptiveFirFilter6FilterERKNS_12RenderBufferEPNS_7FftDataE(void) {
    ALOGD("_ZNK6webrtc17AdaptiveFirFilter6FilterERKNS_12RenderBufferEPNS_7FftDataE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::RenderWriter::RenderWriter(webrtc::ApmDataDumper*, webrtc::SwapQueue<std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >, webrtc::Aec3RenderQueueItemVerifier>*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller312RenderWriterC1EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj(void) {
    ALOGD("_ZN6webrtc14EchoCanceller312RenderWriterC1EPNS_13ApmDataDumperEPNS_9SwapQueueINSt3__16vectorINS6_INS6_IfNS5_9allocatorIfEEEENS7_IS9_EEEENS7_ISB_EEEENS_27Aec3RenderQueueItemVerifierEEEjj() called");
    return 0;
}

/* Demangled: webrtc::Limiter::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7Limiter5ResetEv(void) {
    ALOGD("_ZN6webrtc7Limiter5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilter::~MatchedFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MatchedFilterD2Ev(void) {
    ALOGD("_ZN6webrtc13MatchedFilterD2Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialConstrained<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc21FieldTrialConstrainedIiEE = NULL;

/* Demangled: rtc::LogMessage::LogMessage(char const*, int, rtc::LoggingSeverity, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc10LogMessageC1EPKciNS_15LoggingSeverityERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::GainController2::NotifyAnalogLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController217NotifyAnalogLevelEi(void) {
    ALOGD("_ZN6webrtc15GainController217NotifyAnalogLevelEi() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::Update(webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_SI_RKNS7_IbNSA_IbEEEE(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimator6UpdateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__16vectorINS6_5arrayIfLj65EEENS6_9allocatorIS9_EEEELin4711EEENS5_IKfLi65EEENS5_IKS9_Lin4711EEESI_SI_RKNS7_IbNSA_IbEEEE() called");
    return 0;
}

/* Demangled: rtc::LogMessage::~LogMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessageD2Ev(void) {
    ALOGD("_ZN3rtc10LogMessageD2Ev() called");
    return 0;
}

/* Demangled: webrtc::Pffft::~Pffft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5PffftD1Ev(void) {
    ALOGD("_ZN6webrtc5PffftD1Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_AllocateFarendBufferMemory(webrtc::BinaryDelayEstimatorFarend*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc33WebRtc_AllocateFarendBufferMemoryEPNS_26BinaryDelayEstimatorFarendEi(void) {
    ALOGD("_ZN6webrtc33WebRtc_AllocateFarendBufferMemoryEPNS_26BinaryDelayEstimatorFarendEi() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3ConfigC2Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3ConfigC2Ev() called");
    return 0;
}

/* Exported Object: vtable for webrtc::DominantNearendDetector */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc23DominantNearendDetectorE = NULL;

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::~SpectralFeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD1Ev() called");
    return 0;
}

/* Demangled: validate_pffft_simd */
extern "C" __attribute__((visibility("default"))) int validate_pffft_simd(void) {
    ALOGD("validate_pffft_simd() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureMultiBandSubModulesActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandSubModulesActiveEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates32CaptureMultiBandSubModulesActiveEv() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::Convolve_C(float const*, float const*, float const*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d(void) {
    ALOGD("_ZN6webrtc13SincResampler10Convolve_CEPKfS2_S2_d() called");
    return 0;
}

/* Demangled: webrtc::SuppressionFilter::~SuppressionFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17SuppressionFilterD1Ev(void) {
    ALOGD("_ZN6webrtc17SuppressionFilterD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::FrameExtender::~FrameExtender() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifier13FrameExtenderD1Ev(void) {
    ALOGD("_ZN6webrtc16SignalClassifier13FrameExtenderD1Ev() called");
    return 0;
}

/* Demangled: Effect_SetState(preproc_effect_s*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15Effect_SetStateP16preproc_effect_sj(void) {
    ALOGD("_Z15Effect_SetStateP16preproc_effect_sj() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3ConfigC2ERKS0_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3ConfigC2ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<short>::~PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIsED0Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIsED0Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_ApplyDigitalGains(int const*, unsigned int, unsigned int, short const* const*, short* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc27WebRtcAgc_ApplyDigitalGainsEPKijjPKPKsPKPs(void) {
    ALOGD("_ZN6webrtc27WebRtcAgc_ApplyDigitalGainsEPKijjPKPKsPKPs() called");
    return 0;
}

/* Demangled: webrtc::Pffft::Pffft(unsigned int, webrtc::Pffft::FftType) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5PffftC2EjNS0_7FftTypeE(void) {
    ALOGD("_ZN6webrtc5PffftC2EjNS0_7FftTypeE() called");
    return 0;
}

/* Demangled: webrtc::metrics::HistogramAdd(webrtc::metrics::Histogram*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramEi(void) {
    ALOGD("_ZN6webrtc7metrics12HistogramAddEPNS0_9HistogramEi() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThread5StartEv(void) {
    ALOGD("_ZN3rtc14PlatformThread5StartEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample16khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample16khzTo22khz(void) {
    ALOGD("WebRtcSpl_Resample16khzTo22khz() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::~ResidualEchoEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::ConsistentFilterDetector(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC2ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer24ConsistentFilterDetectorC2ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: rtc::ToString(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEPKc(void) {
    ALOGD("_ZN3rtc8ToStringEPKc() called");
    return 0;
}

/* Demangled: rtc::internal::RaceCheckerScope::~RaceCheckerScope() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8internal16RaceCheckerScopeD2Ev(void) {
    ALOGD("_ZN3rtc8internal16RaceCheckerScopeD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::InitializeCPUSpecificFeatures() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv(void) {
    ALOGD("_ZN6webrtc13SincResampler29InitializeCPUSpecificFeaturesEv() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::SplittingFilter(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilterC2Ejjj(void) {
    ALOGD("_ZN6webrtc15SplittingFilterC2Ejjj() called");
    return 0;
}

/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Jitter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ApiCallJitterMetrics6JitterC1Ev(void) {
    ALOGD("_ZN6webrtc20ApiCallJitterMetrics6JitterC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AbstractFieldTrialEnum::~AbstractFieldTrialEnum() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnumD1Ev(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnumD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Pffft::BackwardTransform(webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft17BackwardTransformERKNS0_11FloatBufferEPS1_b(void) {
    ALOGD("_ZN6webrtc5Pffft17BackwardTransformERKNS0_11FloatBufferEPS1_b() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> >, std::__1::allocator<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> > > >::__push_back_slow_path<std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> > >(std::__1::unique_ptr<webrtc::PushSincResampler, std::__1::default_delete<webrtc::PushSincResampler> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6webrtc17PushSincResamplerENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<float>::~PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIfED1Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIfED1Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_get_allowed_offset(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25WebRtc_get_allowed_offsetEPKv(void) {
    ALOGD("_ZN6webrtc25WebRtc_get_allowed_offsetEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<int, std::__1::less<int>, std::__1::allocator<int> >::__find_equal<int>(std::__1::__tree_const_iterator<int, std::__1::__tree_node<int, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_(void) {
    ALOGD("_ZNSt3__16__treeIiNS_4lessIiEENS_9allocatorIiEEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIiPNS_11__tree_nodeIiS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_() called");
    return 0;
}

/* Demangled: rtc::TmToSeconds(tm const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11TmToSecondsERK2tm(void) {
    ALOGD("_ZN3rtc11TmToSecondsERK2tm() called");
    return 0;
}

/* Demangled: WebRtcAecm_Process */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_Process(void) {
    ALOGD("WebRtcAecm_Process() called");
    return 0;
}

/* Demangled: WebRtcSpl_MinValueW32Neon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MinValueW32Neon(void) {
    ALOGD("WebRtcSpl_MinValueW32Neon() called");
    return 0;
}

/* Demangled: webrtc::NoiseEstimator::PrepareAnalysis() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14NoiseEstimator15PrepareAnalysisEv(void) {
    ALOGD("_ZN6webrtc14NoiseEstimator15PrepareAnalysisEv() called");
    return 0;
}

/* Demangled: webrtc::BlockProcessor::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::RenderDelayBuffer, std::__1::default_delete<webrtc::RenderDelayBuffer> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEE(void) {
    ALOGD("_ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::RenderDelayControllerMetrics::RenderDelayControllerMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28RenderDelayControllerMetricsC2Ev(void) {
    ALOGD("_ZN6webrtc28RenderDelayControllerMetricsC2Ev() called");
    return 0;
}

/* Demangled: webrtc::SignalDependentErleEstimator::UpdateCorrectionFactors(rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimator23UpdateCorrectionFactorsEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimator23UpdateCorrectionFactorsEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::Update(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator13NoiseSpectrum6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator13NoiseSpectrum6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEE() called");
    return 0;
}

/* Demangled: pffft_cplx_finalize */
extern "C" __attribute__((visibility("default"))) int pffft_cplx_finalize(void) {
    ALOGD("pffft_cplx_finalize() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimator::LevelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14LevelEstimatorC1Ev(void) {
    ALOGD("_ZN6webrtc14LevelEstimatorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::Average() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevel7AverageEv(void) {
    ALOGD("_ZN6webrtc8RmsLevel7AverageEv() called");
    return 0;
}

/* Demangled: webrtc::SignalModelEstimator::AdjustNormalization(int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SignalModelEstimator19AdjustNormalizationEif(void) {
    ALOGD("_ZN6webrtc20SignalModelEstimator19AdjustNormalizationEif() called");
    return 0;
}

/* Demangled: webrtc::AecState::TransparentMode::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState15TransparentMode5ResetEv(void) {
    ALOGD("_ZN6webrtc8AecState15TransparentMode5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::EchoPathVariability::EchoPathVariability(bool, webrtc::EchoPathVariability::DelayAdjustment, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19EchoPathVariabilityC2EbNS0_15DelayAdjustmentEb(void) {
    ALOGD("_ZN6webrtc19EchoPathVariabilityC2EbNS0_15DelayAdjustmentEb() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::Update(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics8DbMetric6UpdateEf(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics8DbMetric6UpdateEf() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(std::__1::complex<float>, std::__1::complex<float>, float, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ENSt3__17complexIfEES4_fb(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC1ENSt3__17complexIfEES4_fb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIbEptEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIbEptEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::WallClockStartTime() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage18WallClockStartTimeEv(void) {
    ALOGD("_ZN3rtc10LogMessage18WallClockStartTimeEv() called");
    return 0;
}

/* Demangled: webrtc::Pffft::FloatBuffer::FloatBuffer(unsigned int, webrtc::Pffft::FftType) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft11FloatBufferC1EjNS0_7FftTypeE(void) {
    ALOGD("_ZN6webrtc5Pffft11FloatBufferC1EjNS0_7FftTypeE() called");
    return 0;
}

/* Demangled: HasReverseStream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16HasReverseStreamj(void) {
    ALOGD("_Z16HasReverseStreamj() called");
    return 0;
}

/* Demangled: webrtc::ErleEstimator::Reset(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ErleEstimator5ResetEb(void) {
    ALOGD("_ZN6webrtc13ErleEstimator5ResetEb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<double>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::num_output_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl19num_output_channelsEv() called");
    return 0;
}

/* Demangled: webrtc::MovingMax::~MovingMax() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9MovingMaxD2Ev(void) {
    ALOGD("_ZN6webrtc9MovingMaxD2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_ProcessBlock(webrtc::AecmCore*, short const*, short const*, short const*, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23WebRtcAecm_ProcessBlockEPNS_8AecmCoreEPKsS3_S3_Ps(void) {
    ALOGD("_ZN6webrtc23WebRtcAecm_ProcessBlockEPNS_8AecmCoreEPKsS3_S3_Ps() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::Resample(float const*, unsigned int, float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResampler8ResampleEPKfjPfj(void) {
    ALOGD("_ZN6webrtc17PushSincResampler8ResampleEPKfjPfj() called");
    return 0;
}

/* Demangled: webrtc::AecState::SaturationDetector::Update(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, bool, bool, rtc::ArrayView<webrtc::SubtractorOutput const, -4711>, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState18SaturationDetector6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS4_9allocatorIfEEEELin4711EEEbbNS3_IKNS_16SubtractorOutputELin4711EEEf(void) {
    ALOGD("_ZN6webrtc8AecState18SaturationDetector6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS4_9allocatorIfEEEELin4711EEEbbNS3_IKNS_16SubtractorOutputELin4711EEEf() called");
    return 0;
}

/* Demangled: webrtc::ApiCallJitterMetrics::ReportCaptureCall() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ApiCallJitterMetrics17ReportCaptureCallEv(void) {
    ALOGD("_ZN6webrtc20ApiCallJitterMetrics17ReportCaptureCallEv() called");
    return 0;
}

/* Demangled: webrtc::FrameBlocker::ExtractBlock(std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12FrameBlocker12ExtractBlockEPNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE(void) {
    ALOGD("_ZN6webrtc12FrameBlocker12ExtractBlockEPNSt3__16vectorINS2_INS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEENS3_IS7_EEEE() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::Update(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous6UpdateEff(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneous6UpdateEff() called");
    return 0;
}

/* Exported Object: vtable for rtc::LogSink */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3rtc7LogSinkE = NULL;

/* Exported Object: webrtc::ResidualEchoDetector::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc20ResidualEchoDetector15instance_count_E = NULL;

/* Demangled: webrtc::FilterAnalyzer::AnalyzeRegion(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, webrtc::RenderBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer13AnalyzeRegionEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferE(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer13AnalyzeRegionEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEERKNS_12RenderBufferE() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MaxValueW32 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MaxValueW32 = NULL;

/* Demangled: webrtc::MatchedFilterLagAggregator::MatchedFilterLagAggregator(webrtc::ApmDataDumper*, unsigned int, webrtc::EchoCanceller3Config::Delay::DelaySelectionThresholds const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26MatchedFilterLagAggregatorC1EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE(void) {
    ALOGD("_ZN6webrtc26MatchedFilterLagAggregatorC1EPNS_13ApmDataDumperEjRKNS_20EchoCanceller3Config5Delay24DelaySelectionThresholdsE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::CheckSilenceComputeFeatures(rtc::ArrayView<float const, 480>, rtc::ArrayView<float const, 480>, rtc::ArrayView<float, 16>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi480EEES5_NS3_IfLi16EEENS3_IfLi6EEES7_S7_S7_Pf(void) {
    ALOGD("_ZN6webrtc7rnn_vad25SpectralFeaturesExtractor27CheckSilenceComputeFeaturesEN3rtc9ArrayViewIKfLi480EEES5_NS3_IfLi16EEENS3_IfLi6EEES7_S7_S7_Pf() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Resampler(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC2Eiij(void) {
    ALOGD("_ZN6webrtc9ResamplerC2Eiij() called");
    return 0;
}

/* Demangled: pffft_zconvolve_accumulate */
extern "C" __attribute__((visibility("default"))) int pffft_zconvolve_accumulate(void) {
    ALOGD("pffft_zconvolve_accumulate() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoDetector::~ResidualEchoDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ResidualEchoDetectorD0Ev(void) {
    ALOGD("_ZN6webrtc20ResidualEchoDetectorD0Ev() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::ResetAccumulatedSpectra() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimator23ResetAccumulatedSpectraEv(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimator23ResetAccumulatedSpectraEv() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::BiQuad::BiQuad(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter6BiQuadC1ERKNS0_11BiQuadParamE(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter6BiQuadC1ERKNS0_11BiQuadParamE() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::~PlatformThread() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadD0Ev(void) {
    ALOGD("_ZN3rtc14PlatformThreadD0Ev() called");
    return 0;
}

/* Demangled: webrtc::GainController2::GainController2() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController2C1Ev(void) {
    ALOGD("_ZN6webrtc15GainController2C1Ev() called");
    return 0;
}

/* Demangled: webrtc::FixedDigitalLevelEstimator::ComputeLevel(webrtc::AudioFrameView<float const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26FixedDigitalLevelEstimator12ComputeLevelERKNS_14AudioFrameViewIKfEE(void) {
    ALOGD("_ZN6webrtc26FixedDigitalLevelEstimator12ComputeLevelERKNS_14AudioFrameViewIKfEE() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::ExitInitialState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10Subtractor16ExitInitialStateEv(void) {
    ALOGD("_ZN6webrtc10Subtractor16ExitInitialStateEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_iEEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEENS_21__tree_const_iteratorIS8_SP_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_CreateBinaryDelayEstimator(webrtc::BinaryDelayEstimatorFarend*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc33WebRtc_CreateBinaryDelayEstimatorEPNS_26BinaryDelayEstimatorFarendEi(void) {
    ALOGD("_ZN6webrtc33WebRtc_CreateBinaryDelayEstimatorEPNS_26BinaryDelayEstimatorFarendEi() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::CalculateMoments(float const*, unsigned int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_(void) {
    ALOGD("_ZN6webrtc13MovingMoments16CalculateMomentsEPKfjPfS3_() called");
    return 0;
}

/* Demangled: WebRtc_FreeBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_FreeBuffer(void) {
    ALOGD("WebRtc_FreeBuffer() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics8DbMetricC1Efff(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics8DbMetricC1Efff() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutput::~SubtractorOutput() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SubtractorOutputD2Ev(void) {
    ALOGD("_ZN6webrtc16SubtractorOutputD2Ev() called");
    return 0;
}

/* Demangled: rtc::FromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10FromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb(void) {
    ALOGD("_ZN3rtc10FromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPb() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::GetDigitalComressionGain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect24GetDigitalComressionGainEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect24GetDigitalComressionGainEv() called");
    return 0;
}

/* Demangled: WebRtcVad_Free */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_Free(void) {
    ALOGD("WebRtcVad_Free() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::Analysis(rtc::ArrayView<float const, 480>, rtc::ArrayView<rtc::ArrayView<float, -4711> const, 3>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBank8AnalysisEN3rtc9ArrayViewIKfLi480EEENS2_IKNS2_IfLin4711EEELi3EEE(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBank8AnalysisEN3rtc9ArrayViewIKfLi480EEENS2_IKNS2_IfLin4711EEELi3EEE() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadD1Ev(void) {
    ALOGD("_ZN6webrtc13StandaloneVadD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::FilterAnalyzer(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzerC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzerC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingBuilder::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AudioProcessingBuilder6CreateEv(void) {
    ALOGD("_ZN6webrtc22AudioProcessingBuilder6CreateEv() called");
    return 0;
}

/* Demangled: webrtc::CircularBuffer::~CircularBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14CircularBufferD1Ev(void) {
    ALOGD("_ZN6webrtc14CircularBufferD1Ev() called");
    return 0;
}

/* Demangled: webrtc::Decimator::Decimator(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9DecimatorC1Ej(void) {
    ALOGD("_ZN6webrtc9DecimatorC1Ej() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEC2ES7_() called");
    return 0;
}

/* Demangled: webrtc::ApmDataDumper::~ApmDataDumper() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ApmDataDumperD2Ev(void) {
    ALOGD("_ZN6webrtc13ApmDataDumperD2Ev() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::Reset(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilter5ResetEj(void) {
    ALOGD("_ZN6webrtc14HighPassFilter5ResetEj() called");
    return 0;
}

/* Demangled: webrtc::SpeechProbabilityEstimator::Update(int, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26SpeechProbabilityEstimator6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff(void) {
    ALOGD("_ZN6webrtc26SpeechProbabilityEstimator6UpdateEiN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff() called");
    return 0;
}

/* Demangled: webrtc::NrFft::Fft(rtc::ArrayView<float, 256>, rtc::ArrayView<float, 256>, rtc::ArrayView<float, 256>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5NrFft3FftEN3rtc9ArrayViewIfLi256EEES3_S3_(void) {
    ALOGD("_ZN6webrtc5NrFft3FftEN3rtc9ArrayViewIfLi256EEES3_S3_() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::~ErleInstantaneous() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD1Ev(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD1Ev() called");
    return 0;
}

/* Demangled: rtc::ScopedYieldPolicy::~ScopedYieldPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17ScopedYieldPolicyD1Ev(void) {
    ALOGD("_ZN3rtc17ScopedYieldPolicyD1Ev() called");
    return 0;
}

/* Exported Object: webrtc::WebRtcAecm_ResetAdaptiveChannel */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc31WebRtcAecm_ResetAdaptiveChannelE = NULL;

/* Demangled: webrtc::FilterAnalyzer::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer5ResetEv(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer5ResetEv() called");
    return 0;
}

/* Exported Object: webrtc::ExperimentalNs const& webrtc::Config::default_value<webrtc::ExperimentalNs>()::def */
extern "C" __attribute__((visibility("default"))) void* _ZZN6webrtc6Config13default_valueINS_14ExperimentalNsEEERKT_vE3def = NULL;

/* Demangled: std::__1::vector<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > >, std::__1::allocator<std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > > >::vector(unsigned int, std::__1::vector<rtc::ArrayView<float, -4711>, std::__1::allocator<rtc::ArrayView<float, -4711> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IN3rtc9ArrayViewIfLin4711EEENS_9allocatorIS3_EEEENS4_IS6_EEEC2EjRKS6_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IN3rtc9ArrayViewIfLin4711EEENS_9allocatorIS3_EEEENS4_IS6_EEEC2EjRKS6_() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::ThreeBandsSynthesis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter19ThreeBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::UpdateInstant(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics8DbMetric13UpdateInstantEf(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics8DbMetric13UpdateInstantEf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<int>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21FieldTrialConstrainedIiEptEv(void) {
    ALOGD("_ZNK6webrtc21FieldTrialConstrainedIiEptEv() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::streams_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage8streams_E = NULL;

/* Demangled: Effect_Release(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z14Effect_ReleaseP16preproc_effect_s(void) {
    ALOGD("_Z14Effect_ReleaseP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::BiQuadParam::BiQuadParam(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ERKS1_(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter11BiQuadParamC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::GetOptional() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIdE11GetOptionalEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIdE11GetOptionalEv() called");
    return 0;
}

/* Demangled: rtc::ToString(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringEPKv(void) {
    ALOGD("_ZN3rtc8ToStringEPKv() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorC1Ei(void) {
    ALOGD("_ZN6webrtc17TransientDetectorC1Ei() called");
    return 0;
}

/* Demangled: Effect_Init(preproc_effect_s*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11Effect_InitP16preproc_effect_sj(void) {
    ALOGD("_Z11Effect_InitP16preproc_effect_sj() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilter::MatchedFilter(webrtc::ApmDataDumper*, webrtc::Aec3Optimization, unsigned int, unsigned int, int, unsigned int, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MatchedFilterC2EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff(void) {
    ALOGD("_ZN6webrtc13MatchedFilterC2EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::SubmoduleStates::CaptureMultiBandProcessingPresent() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl15SubmoduleStates33CaptureMultiBandProcessingPresentEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl15SubmoduleStates33CaptureMultiBandProcessingPresentEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIiEcvbEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIiEcvbEv() called");
    return 0;
}

/* Demangled: AgcSetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AgcSetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z15AgcSetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: webrtc::ErlEstimator::~ErlEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12ErlEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc12ErlEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::EchoRemoverMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetricsC2Ev(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetricsC2Ev() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::~LoudnessHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogramD1Ev(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogramD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveAgc::AdaptiveAgc(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgcC1EPNS_13ApmDataDumperERKNS_15AudioProcessing6Config15GainController2E() called");
    return 0;
}

/* Demangled: webrtc::metrics::HistogramFactoryGetEnumeration(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_ZN6webrtc7metrics30HistogramFactoryGetEnumerationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: WebRtcSpl_SqrtLocal */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_SqrtLocal(void) {
    ALOGD("WebRtcSpl_SqrtLocal() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::~Subtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10SubtractorD1Ev(void) {
    ALOGD("_ZN6webrtc10SubtractorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnumC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnumC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE() called");
    return 0;
}

/* Demangled: WebRtcIsac_PitchfilterPre_gains */
extern "C" __attribute__((visibility("default"))) int WebRtcIsac_PitchfilterPre_gains(void) {
    ALOGD("WebRtcIsac_PitchfilterPre_gains() called");
    return 0;
}

/* Demangled: webrtc::FloatToS16(float const*, unsigned int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10FloatToS16EPKfjPs(void) {
    ALOGD("_ZN6webrtc10FloatToS16EPKfjPs() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::Update(rtc::ArrayView<float const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator6UpdateEN3rtc9ArrayViewIKfLin4711EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::FullBandErleEstimator(webrtc::EchoCanceller3Config::Erle const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimatorC2ERKNS_20EchoCanceller3Config4ErleEj(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimatorC2ERKNS_20EchoCanceller3Config4ErleEj() called");
    return 0;
}

/* Demangled: webrtc::RenderSignalAnalyzer::RenderSignalAnalyzer(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20RenderSignalAnalyzerC2ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc20RenderSignalAnalyzerC2ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: rtc::TimeDiff(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8TimeDiffExx(void) {
    ALOGD("_ZN3rtc8TimeDiffExx() called");
    return 0;
}

/* Demangled: PreProcessingLib_GetDescriptor */
extern "C" __attribute__((visibility("default"))) int PreProcessingLib_GetDescriptor(void) {
    ALOGD("PreProcessingLib_GetDescriptor() called");
    return 0;
}

/* Demangled: Agc2Init(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z8Agc2InitP16preproc_effect_s(void) {
    ALOGD("_Z8Agc2InitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::ConsistentFilterDetector::Detect(rtc::ArrayView<float const, -4711>, webrtc::FilterAnalyzer::FilterRegion const&, rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector6DetectEN3rtc9ArrayViewIKfLin4711EEERKNS0_12FilterRegionENS3_IKNSt3__16vectorIfNS9_9allocatorIfEEEELin4711EEEji(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer24ConsistentFilterDetector6DetectEN3rtc9ArrayViewIKfLin4711EEERKNS0_12FilterRegionENS3_IKNSt3__16vectorIfNS9_9allocatorIfEEEELin4711EEEji() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::~SignalClassifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifierD1Ev(void) {
    ALOGD("_ZN6webrtc16SignalClassifierD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::UpdateActiveSubmoduleStates() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl27UpdateActiveSubmoduleStatesEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl27UpdateActiveSubmoduleStatesEv() called");
    return 0;
}

/* Demangled: rtc::LogMessage::FinishPrintStream() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage17FinishPrintStreamEv(void) {
    ALOGD("_ZN3rtc10LogMessage17FinishPrintStreamEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Tuning::Tuning(webrtc::EchoCanceller3Config::Suppressor::Tuning const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ERKS2_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor6TuningC1ERKS2_() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample22khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample22khzTo16khz(void) {
    ALOGD("WebRtcSpl_ResetResample22khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilter5ResetEv(void) {
    ALOGD("_ZN6webrtc14HighPassFilter5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::BlockProcessor::Create(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int, std::__1::unique_ptr<webrtc::RenderDelayBuffer, std::__1::default_delete<webrtc::RenderDelayBuffer> >, std::__1::unique_ptr<webrtc::RenderDelayController, std::__1::default_delete<webrtc::RenderDelayController> >, std::__1::unique_ptr<webrtc::EchoRemover, std::__1::default_delete<webrtc::EchoRemover> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEENS5_INS_21RenderDelayControllerENS7_ISA_EEEENS5_INS_11EchoRemoverENS7_ISD_EEEE(void) {
    ALOGD("_ZN6webrtc14BlockProcessor6CreateERKNS_20EchoCanceller3ConfigEijjNSt3__110unique_ptrINS_17RenderDelayBufferENS4_14default_deleteIS6_EEEENS5_INS_21RenderDelayControllerENS7_ISA_EEEENS5_INS_11EchoRemoverENS7_ISD_EEEE() called");
    return 0;
}

/* Demangled: webrtc::RenderSignalAnalyzer::Update(webrtc::RenderBuffer const&, std::__1::optional<unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20RenderSignalAnalyzer6UpdateERKNS_12RenderBufferERKNSt3__18optionalIjEE(void) {
    ALOGD("_ZN6webrtc20RenderSignalAnalyzer6UpdateERKNS_12RenderBufferERKNSt3__18optionalIjEE() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc10InitializeEv(void) {
    ALOGD("_ZN6webrtc7MonoAgc10InitializeEv() called");
    return 0;
}

/* Demangled: webrtc::Pffft::FloatBuffer::GetConstView() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc5Pffft11FloatBuffer12GetConstViewEv(void) {
    ALOGD("_ZNK6webrtc5Pffft11FloatBuffer12GetConstViewEv() called");
    return 0;
}

/* Demangled: webrtc::FftBuffer::FftBuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9FftBufferC2Ejj(void) {
    ALOGD("_ZN6webrtc9FftBufferC2Ejj() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::log_to_stderr_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage14log_to_stderr_E = NULL;

/* Demangled: webrtc::WebRtcAgc_Init(void*, int, int, short, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14WebRtcAgc_InitEPviisj(void) {
    ALOGD("_ZN6webrtc14WebRtcAgc_InitEPviisj() called");
    return 0;
}

/* Demangled: WebRtcVad_CalcVad32khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad32khz(void) {
    ALOGD("WebRtcVad_CalcVad32khz() called");
    return 0;
}

/* Demangled: webrtc::ReverbModel::UpdateReverb(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11ReverbModel12UpdateReverbEN3rtc9ArrayViewIKfLin4711EEES4_f(void) {
    ALOGD("_ZN6webrtc11ReverbModel12UpdateReverbEN3rtc9ArrayViewIKfLin4711EEES4_f() called");
    return 0;
}

/* Demangled: rtc::tracing::StopInternalCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7tracing19StopInternalCaptureEv(void) {
    ALOGD("_ZN3rtc7tracing19StopInternalCaptureEv() called");
    return 0;
}

/* Exported Object: WebRtcSpl_MinValueW32 */
extern "C" __attribute__((visibility("default"))) void* WebRtcSpl_MinValueW32 = NULL;

/* Demangled: webrtc::SplittingFilter::~SplittingFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilterD2Ev(void) {
    ALOGD("_ZN6webrtc15SplittingFilterD2Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::ComputeVariability() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor18ComputeVariabilityEv(void) {
    ALOGD("_ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor18ComputeVariabilityEv() called");
    return 0;
}

/* Exported Object: sEffectInterface */
extern "C" __attribute__((visibility("default"))) void* sEffectInterface = NULL;

/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(webrtc::AbstractFieldTrialEnum const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnumC2ERKS0_(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnumC2ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::operator*() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIiEdeEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIiEdeEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<bool>::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIbE3GetEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIbE3GetEv() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoDetector::Initialize(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ResidualEchoDetector10InitializeEiiii(void) {
    ALOGD("_ZN6webrtc20ResidualEchoDetector10InitializeEiiii() called");
    return 0;
}

/* Demangled: webrtc::VoiceActivityDetector::~VoiceActivityDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetectorD1Ev(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetectorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::BlockDelayBuffer::BlockDelayBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16BlockDelayBufferC2Ejjjj(void) {
    ALOGD("_ZN6webrtc16BlockDelayBufferC2Ejjjj() called");
    return 0;
}

/* Demangled: webrtc::BlockFramer::~BlockFramer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockFramerD1Ev(void) {
    ALOGD("_ZN6webrtc11BlockFramerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::UpdateCompressor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc16UpdateCompressorEv(void) {
    ALOGD("_ZN6webrtc7MonoAgc16UpdateCompressorEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::Value() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIiE5ValueEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIiE5ValueEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::CreateDefaultConfig(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller319CreateDefaultConfigEjj(void) {
    ALOGD("_ZN6webrtc14EchoCanceller319CreateDefaultConfigEjj() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::InverseFft(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft10InverseFftEPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft10InverseFftEPf() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::InsertNewestEntryAndUpdate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram26InsertNewestEntryAndUpdateEii(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram26InsertNewestEntryAndUpdateEii() called");
    return 0;
}

/* Demangled: webrtc::GetRightAlign(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13GetRightAlignEPKvj(void) {
    ALOGD("_ZN6webrtc13GetRightAlignEPKvj() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<float>::InitializeIfNeeded(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIfE18InitializeIfNeededEiij(void) {
    ALOGD("_ZN6webrtc13PushResamplerIfE18InitializeIfNeededEiij() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst(void) {
    ALOGD("_ZN6webrtc13StandaloneVadC1EP13WebRtcVadInst() called");
    return 0;
}

/* Demangled: webrtc::SubbandNearendDetector::Update(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22SubbandNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b(void) {
    ALOGD("_ZN6webrtc22SubbandNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b() called");
    return 0;
}

/* Demangled: webrtc::BiQuadFilter::Process(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12BiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc12BiQuadFilter7ProcessEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ProcessReverseStream(short const*, webrtc::StreamConfig const&, webrtc::StreamConfig const&, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKsRKNS_12StreamConfigES5_Ps(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20ProcessReverseStreamEPKsRKNS_12StreamConfigES5_Ps() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::proc_split_sample_rate_hz() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl25proc_split_sample_rate_hzEv() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressor::NoiseSuppressor(webrtc::NsConfig const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15NoiseSuppressorC1ERKNS_8NsConfigEjj(void) {
    ALOGD("_ZN6webrtc15NoiseSuppressorC1ERKNS_8NsConfigEjj() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::FrameExtender::ExtendFrame(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifier13FrameExtender11ExtendFrameEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc16SignalClassifier13FrameExtender11ExtendFrameEN3rtc9ArrayViewIKfLin4711EEENS3_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::MeanVarianceEstimator::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21MeanVarianceEstimator5ClearEv(void) {
    ALOGD("_ZN6webrtc21MeanVarianceEstimator5ClearEv() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::DebugDumpEstimate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19SaturationProtector17DebugDumpEstimateEv(void) {
    ALOGD("_ZNK6webrtc19SaturationProtector17DebugDumpEstimateEv() called");
    return 0;
}

/* Demangled: webrtc::AecState::Update(std::__1::optional<webrtc::DelayEstimate> const&, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<webrtc::SubtractorOutput const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState6UpdateERKNSt3__18optionalINS_13DelayEstimateEEEN3rtc9ArrayViewIKNS1_6vectorINS1_5arrayIfLj65EEENS1_9allocatorISB_EEEELin4711EEENS8_IKNS9_IfNSC_IfEEEELin4711EEERKNS_12RenderBufferENS8_IKSB_Lin4711EEESP_NS8_IKNS_16SubtractorOutputELin4711EEE(void) {
    ALOGD("_ZN6webrtc8AecState6UpdateERKNSt3__18optionalINS_13DelayEstimateEEEN3rtc9ArrayViewIKNS1_6vectorINS1_5arrayIfLj65EEENS1_9allocatorISB_EEEELin4711EEENS8_IKNS9_IfNSC_IfEEEELin4711EEERKNS_12RenderBufferENS8_IKSB_Lin4711EEESP_NS8_IKNS_16SubtractorOutputELin4711EEE() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)4, unsigned int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_4EjEESA_SB_EEEvDpRKT_E1t = NULL;

/* Demangled: rtc::LogMessage::SetLogToStderr(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage14SetLogToStderrEb(void) {
    ALOGD("_ZN3rtc10LogMessage14SetLogToStderrEb() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::GatedRecurrentLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, webrtc::rnn_vad::Optimization) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19GatedRecurrentLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE(void) {
    ALOGD("_ZN6webrtc7rnn_vad19GatedRecurrentLayerC1EjjN3rtc9ArrayViewIKaLin4711EEES5_S5_NS0_12OptimizationE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1Efff(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1Efff() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::~AudioBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBufferD2Ev(void) {
    ALOGD("_ZN6webrtc11AudioBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::Aec3Fft::Aec3Fft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7Aec3FftC2Ev(void) {
    ALOGD("_ZN6webrtc7Aec3FftC2Ev() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilter::MatchedFilter(webrtc::ApmDataDumper*, webrtc::Aec3Optimization, unsigned int, unsigned int, int, unsigned int, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MatchedFilterC1EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff(void) {
    ALOGD("_ZN6webrtc13MatchedFilterC1EPNS_13ApmDataDumperENS_16Aec3OptimizationEjjijfff() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::GetOptional() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIiE11GetOptionalEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIiE11GetOptionalEv() called");
    return 0;
}

/* Demangled: rtc::TimestampWrapAroundHandler::Unwrap(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26TimestampWrapAroundHandler6UnwrapEj(void) {
    ALOGD("_ZN3rtc26TimestampWrapAroundHandler6UnwrapEj() called");
    return 0;
}

/* Demangled: NsEnable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z8NsEnableP16preproc_effect_s(void) {
    ALOGD("_Z8NsEnableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_stream_analog_level(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl23set_stream_analog_levelEi(void) {
    ALOGD("_ZN6webrtc15GainControlImpl23set_stream_analog_levelEi() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::VoicingProbability(AudioFeatures const&, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd(void) {
    ALOGD("_ZN6webrtc13PitchBasedVad18VoicingProbabilityERK13AudioFeaturesPd() called");
    return 0;
}

/* Demangled: webrtc::ClockdriftDetector::~ClockdriftDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18ClockdriftDetectorD1Ev(void) {
    ALOGD("_ZN6webrtc18ClockdriftDetectorD1Ev() called");
    return 0;
}

/* Demangled: WebRtcVad_set_mode */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_set_mode(void) {
    ALOGD("WebRtcVad_set_mode() called");
    return 0;
}

/* Demangled: WebRtcSpl_MaxAbsValueW32Neon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_MaxAbsValueW32Neon(void) {
    ALOGD("WebRtcSpl_MaxAbsValueW32Neon() called");
    return 0;
}

/* Demangled: webrtc::SplittingFilter::TwoBandsSynthesis(webrtc::ChannelBuffer<float> const*, webrtc::ChannelBuffer<float>*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_(void) {
    ALOGD("_ZN6webrtc15SplittingFilter17TwoBandsSynthesisEPKNS_13ChannelBufferIfEEPS2_() called");
    return 0;
}

/* Demangled: webrtc::aec3::MatchedFilterCore(unsigned int, float, float, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>, bool*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec317MatchedFilterCoreEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf(void) {
    ALOGD("_ZN6webrtc4aec317MatchedFilterCoreEjffN3rtc9ArrayViewIKfLin4711EEES4_NS2_IfLin4711EEEPbPf() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::optional<unsigned int> > webrtc::ParseOptionalParameter<unsigned int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ParseOptionalParameterIjEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc22ParseOptionalParameterIjEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: AgcGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AgcGetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z15AgcGetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmCaptureState::ApmCaptureState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl15ApmCaptureStateC2Ev() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::AnalyzeFilter(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator13AnalyzeFilterEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator13AnalyzeFilterEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: Agc2GetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z16Agc2GetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z16Agc2GetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: webrtc::ComfortNoiseGenerator::ComfortNoiseGenerator(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ComfortNoiseGeneratorC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj(void) {
    ALOGD("_ZN6webrtc21ComfortNoiseGeneratorC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::~SubbandErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous5ResetEv(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneous5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::~FullBandErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimator5ResetEv() called");
    return 0;
}

/* Demangled: pffft_simd_size */
extern "C" __attribute__((visibility("default"))) int pffft_simd_size(void) {
    ALOGD("pffft_simd_size() called");
    return 0;
}

/* Demangled: Session_SetConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z17Session_SetConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z17Session_SetConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample48khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample48khzTo16khz(void) {
    ALOGD("WebRtcSpl_Resample48khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_AddFarendToDigital(webrtc::DigitalAgc*, short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28WebRtcAgc_AddFarendToDigitalEPNS_10DigitalAgcEPKsj(void) {
    ALOGD("_ZN6webrtc28WebRtcAgc_AddFarendToDigitalEPNS_10DigitalAgcEPKsj() called");
    return 0;
}

/* Demangled: webrtc::HighPassFilter::Process(std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14HighPassFilter7ProcessEPNSt3__16vectorINS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEE(void) {
    ALOGD("_ZN6webrtc14HighPassFilter7ProcessEPNSt3__16vectorINS2_IfNS1_9allocatorIfEEEENS3_IS5_EEEE() called");
    return 0;
}

/* Demangled: webrtc::BlockBuffer::BlockBuffer(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockBufferC2Ejjjj(void) {
    ALOGD("_ZN6webrtc11BlockBufferC2Ejjjj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<bool>::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIbEcvbEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIbEcvbEv() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::FrameExtender::FrameExtender(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifier13FrameExtenderC1Ejj(void) {
    ALOGD("_ZN6webrtc16SignalClassifier13FrameExtenderC1Ejj() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::~TransientSuppressorImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImplD1Ev(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImplD1Ev() called");
    return 0;
}

/* Demangled: Session_SetProcEnabled(preproc_session_s*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z22Session_SetProcEnabledP17preproc_session_sjb(void) {
    ALOGD("_Z22Session_SetProcEnabledP17preproc_session_sjb() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2::LevelEstimator, bool, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf(void) {
    ALOGD("_ZN6webrtc26AdaptiveModeLevelEstimatorC1EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::DetectOptimization() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad18DetectOptimizationEv(void) {
    ALOGD("_ZN6webrtc7rnn_vad18DetectOptimizationEv() called");
    return 0;
}

/* Demangled: webrtc::AlignmentMixer::SelectChannel(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AlignmentMixer13SelectChannelEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE(void) {
    ALOGD("_ZN6webrtc14AlignmentMixer13SelectChannelEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutput::ComputeMetrics(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SubtractorOutput14ComputeMetricsEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc16SubtractorOutput14ComputeMetricsEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29AdaptiveModeLevelEstimatorAgc5ResetEv(void) {
    ALOGD("_ZN6webrtc29AdaptiveModeLevelEstimatorAgc5ResetEv() called");
    return 0;
}

/* Demangled: rtc::internal::RaceCheckerScope::RaceCheckerScope(rtc::RaceChecker const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8internal16RaceCheckerScopeC2EPKNS_11RaceCheckerE(void) {
    ALOGD("_ZN3rtc8internal16RaceCheckerScopeC2EPKNS_11RaceCheckerE() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_CalcLinearEnergiesNeon(webrtc::AecmCore*, unsigned short const*, int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc33WebRtcAecm_CalcLinearEnergiesNeonEPNS_8AecmCoreEPKtPiPjS5_S5_(void) {
    ALOGD("_ZN6webrtc33WebRtcAecm_CalcLinearEnergiesNeonEPNS_8AecmCoreEPKtPiPjS5_S5_() called");
    return 0;
}

/* Demangled: webrtc::PriorSignalModel::PriorSignalModel(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16PriorSignalModelC2Ef(void) {
    ALOGD("_ZN6webrtc16PriorSignalModelC2Ef() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameterInterface::FieldTrialParameterInterface(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28FieldTrialParameterInterfaceC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc28FieldTrialParameterInterfaceC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::optional<double> > webrtc::ParseOptionalParameter<double>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22ParseOptionalParameterIdEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc22ParseOptionalParameterIdEENSt3__18optionalINS2_IT_EEEENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: rnnoise::kInputDenseWeights */
extern "C" __attribute__((visibility("default"))) void* _ZN7rnnoise18kInputDenseWeightsE = NULL;

/* Exported Object: webrtc::GainControlImpl::instance_counter_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15GainControlImpl17instance_counter_E = NULL;

/* Demangled: webrtc::EchoCanceller3Config::EchoModel::EchoModel(webrtc::EchoCanceller3Config::EchoModel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config9EchoModelC2ERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config9EchoModelC2ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressor::Process(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15NoiseSuppressor7ProcessEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc15NoiseSuppressor7ProcessEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetection::~VoiceDetection() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14VoiceDetectionD2Ev(void) {
    ALOGD("_ZN6webrtc14VoiceDetectionD2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_CreateBinaryDelayEstimatorFarend(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc39WebRtc_CreateBinaryDelayEstimatorFarendEi(void) {
    ALOGD("_ZN6webrtc39WebRtc_CreateBinaryDelayEstimatorFarendEi() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::VadCircularBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBufferC1Ei(void) {
    ALOGD("_ZN6webrtc17VadCircularBufferC1Ei() called");
    return 0;
}

/* Demangled: webrtc::SignalModel::SignalModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11SignalModelC1Ev(void) {
    ALOGD("_ZN6webrtc11SignalModelC1Ev() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::InternalAPMConfig(webrtc::InternalAPMConfig&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigC2EOS0_(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigC2EOS0_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIjE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::FixedDigitalLevelEstimator::FixedDigitalLevelEstimator(unsigned int, webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26FixedDigitalLevelEstimatorC1EjPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc26FixedDigitalLevelEstimatorC1EjPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::Synthesis(rtc::ArrayView<rtc::ArrayView<float, -4711> const, 3>, rtc::ArrayView<float, 480>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBank9SynthesisEN3rtc9ArrayViewIKNS2_IfLin4711EEELi3EEENS2_IfLi480EEE(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBank9SynthesisEN3rtc9ArrayViewIKNS2_IfLin4711EEELi3EEENS2_IfLi480EEE() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::~OouraFft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8OouraFftD1Ev(void) {
    ALOGD("_ZN6webrtc8OouraFftD1Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator*() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEdeEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEdeEv() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialFlag */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc14FieldTrialFlagE = NULL;

/* Demangled: rtc::webrtc_logging_impl::Log(rtc::webrtc_logging_impl::LogArgType const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19webrtc_logging_impl3LogEPKNS0_10LogArgTypeEz(void) {
    ALOGD("_ZN3rtc19webrtc_logging_impl3LogEPKNS0_10LogArgTypeEz() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<short>::Resample(short const*, unsigned int, short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIsE8ResampleEPKsjPsj(void) {
    ALOGD("_ZN6webrtc13PushResamplerIsE8ResampleEPKsjPsj() called");
    return 0;
}

/* Demangled: webrtc::SubbandNearendDetector::SubbandNearendDetector(webrtc::EchoCanceller3Config::Suppressor::SubbandNearendDetection const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22SubbandNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj(void) {
    ALOGD("_ZN6webrtc22SubbandNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor23SubbandNearendDetectionEj() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractor5ResetEv(void) {
    ALOGD("_ZN6webrtc7rnn_vad25SpectralFeaturesExtractor5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_mode(webrtc::GainControl::Mode) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE(void) {
    ALOGD("_ZN6webrtc15GainControlImpl8set_modeENS_11GainControl4ModeE() called");
    return 0;
}

/* Demangled: webrtc::ReverbModelEstimator::ReverbModelEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbModelEstimatorC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc20ReverbModelEstimatorC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterNEON::FIRFilterNEON(float const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FIRFilterNEONC2EPKfjj(void) {
    ALOGD("_ZN6webrtc13FIRFilterNEONC2EPKfjj() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilterLagAggregator::Reset(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26MatchedFilterLagAggregator5ResetEb(void) {
    ALOGD("_ZN6webrtc26MatchedFilterLagAggregator5ResetEb() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::~EarlyReverbLengthEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<double>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIdEE() called");
    return 0;
}

/* Demangled: rtc::LogMessage::GetLogToDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage13GetLogToDebugEv(void) {
    ALOGD("_ZN3rtc10LogMessage13GetLogToDebugEv() called");
    return 0;
}

/* Demangled: rtc::ToString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc8ToStringENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc8ToStringENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::SoftRestoration(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl15SoftRestorationEPf(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl15SoftRestorationEPf() called");
    return 0;
}

/* Demangled: webrtc::aec3::AdaptPartitions(webrtc::RenderBuffer const&, webrtc::FftData const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec315AdaptPartitionsERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE(void) {
    ALOGD("_ZN6webrtc4aec315AdaptPartitionsERKNS_12RenderBufferERKNS_7FftDataEjPNSt3__16vectorINS8_IS4_NS7_9allocatorIS4_EEEENS9_ISB_EEEE() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::UpdateFilterGain(rtc::ArrayView<float const, -4711>, webrtc::FilterAnalyzer::FilterAnalysisState*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer16UpdateFilterGainEN3rtc9ArrayViewIKfLin4711EEEPNS0_19FilterAnalysisStateE(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer16UpdateFilterGainEN3rtc9ArrayViewIKfLin4711EEEPNS0_19FilterAnalysisStateE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingBuilder::~AudioProcessingBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AudioProcessingBuilderD2Ev(void) {
    ALOGD("_ZN6webrtc22AudioProcessingBuilderD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AllocateRenderQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19AllocateRenderQueueEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19AllocateRenderQueueEv() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_SB_SA_SB_SA_SB_SA_SB_EEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::WebRtc_FreeDelayEstimator(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25WebRtc_FreeDelayEstimatorEPv(void) {
    ALOGD("_ZN6webrtc25WebRtc_FreeDelayEstimatorEPv() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Reset(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Resampler5ResetEiij(void) {
    ALOGD("_ZN6webrtc9Resampler5ResetEiij() called");
    return 0;
}

/* Demangled: webrtc::AecState::FilterDelay::FilterDelay(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState11FilterDelayC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc8AecState11FilterDelayC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::ComfortNoiseGenerator::ComfortNoiseGenerator(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ComfortNoiseGeneratorC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj(void) {
    ALOGD("_ZN6webrtc21ComfortNoiseGeneratorC1ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEj() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialParameter<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc19FieldTrialParameterIiEE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::RnnBasedVad::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad11RnnBasedVad5ResetEv(void) {
    ALOGD("_ZN6webrtc7rnn_vad11RnnBasedVad5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::WPDTree(unsigned int, float const*, float const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTreeC1EjPKfS2_ji(void) {
    ALOGD("_ZN6webrtc7WPDTreeC1EjPKfS2_ji() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializeResidualEchoDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl30InitializeResidualEchoDetectorEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl30InitializeResidualEchoDetectorEv() called");
    return 0;
}

/* Demangled: webrtc::field_trial::MergeFieldTrialsStrings(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11field_trial23MergeFieldTrialsStringsEPKcS2_(void) {
    ALOGD("_ZN6webrtc11field_trial23MergeFieldTrialsStringsEPKcS2_() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_InitEchoPathCore(webrtc::AecmCore*, short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc27WebRtcAecm_InitEchoPathCoreEPNS_8AecmCoreEPKs(void) {
    ALOGD("_ZN6webrtc27WebRtcAecm_InitEchoPathCoreEPNS_8AecmCoreEPKs() called");
    return 0;
}

/* Demangled: webrtc::PushSincResampler::~PushSincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerD1Ev(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::WienerFilter::ComputeOverallScalingFactor(int, float, float, float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc12WienerFilter27ComputeOverallScalingFactorEifff(void) {
    ALOGD("_ZNK6webrtc12WienerFilter27ComputeOverallScalingFactorEifff() called");
    return 0;
}

/* Demangled: webrtc::FloatS16ToS16(float const*, unsigned int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FloatS16ToS16EPKfjPs(void) {
    ALOGD("_ZN6webrtc13FloatS16ToS16EPKfjPs() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingStats::~AudioProcessingStats() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20AudioProcessingStatsD2Ev(void) {
    ALOGD("_ZN6webrtc20AudioProcessingStatsD2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample22khzTo16khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample22khzTo16khz(void) {
    ALOGD("WebRtcSpl_Resample22khzTo16khz() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_SaturationCtrl(webrtc::LegacyAgc*, unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24WebRtcAgc_SaturationCtrlEPNS_9LegacyAgcEPhPi(void) {
    ALOGD("_ZN6webrtc24WebRtcAgc_SaturationCtrlEPNS_9LegacyAgcEPhPi() called");
    return 0;
}

/* Demangled: webrtc::PoleZeroFilter::Create(float const*, unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j(void) {
    ALOGD("_ZN6webrtc14PoleZeroFilter6CreateEPKfjS2_j() called");
    return 0;
}

/* Demangled: webrtc::QuantileNoiseEstimator::QuantileNoiseEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22QuantileNoiseEstimatorC1Ev(void) {
    ALOGD("_ZN6webrtc22QuantileNoiseEstimatorC1Ev() called");
    return 0;
}

/* Exported Object: rtc::LogMessage::thread_ */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc10LogMessage7thread_E = NULL;

/* Demangled: webrtc::MonoAgc::UpdateGain() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc10UpdateGainEv(void) {
    ALOGD("_ZN6webrtc7MonoAgc10UpdateGainEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIjEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIjEE() called");
    return 0;
}

/* Demangled: webrtc::NoiseSpectrumEstimator::NoiseSpectrumEstimator(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22NoiseSpectrumEstimatorC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc22NoiseSpectrumEstimatorC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::MovingMoments::~MovingMoments() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MovingMomentsD2Ev(void) {
    ALOGD("_ZN6webrtc13MovingMomentsD2Ev() called");
    return 0;
}

/* Demangled: Effect_Create(preproc_effect_s*, preproc_session_s*, effect_interface_s***) */
extern "C" __attribute__((visibility("default"))) int _Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s(void) {
    ALOGD("_Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::ResetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc11ResetBufferEv(void) {
    ALOGD("_ZN6webrtc12VadAudioProc11ResetBufferEv() called");
    return 0;
}

/* Demangled: webrtc::aec3::MovingAverage::MovingAverage(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec313MovingAverageC1Ejj(void) {
    ALOGD("_ZN6webrtc4aec313MovingAverageC1Ejj() called");
    return 0;
}

/* Demangled: webrtc::MonoAgc::Process(short const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7MonoAgc7ProcessEPKsji(void) {
    ALOGD("_ZN6webrtc7MonoAgc7ProcessEPKsji() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::cftbsub_128(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft11cftbsub_128EPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft11cftbsub_128EPf() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameterInterface::~FieldTrialParameterInterface() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28FieldTrialParameterInterfaceD0Ev(void) {
    ALOGD("_ZN6webrtc28FieldTrialParameterInterfaceD0Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<double>::operator double() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIdEcvdEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIdEcvdEv() called");
    return 0;
}

/* Demangled: std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::operator[](std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES6_NS_4lessIS6_EENS4_INS_4pairIKS6_S6_EEEEEixERSA_(void) {
    ALOGD("_ZNSt3__13mapINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES6_NS_4lessIS6_EENS4_INS_4pairIKS6_S6_EEEEEixERSA_() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::FullBandErleEstimator(webrtc::EchoCanceller3Config::Erle const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimatorC1ERKNS_20EchoCanceller3Config4ErleEj(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimatorC1ERKNS_20EchoCanceller3Config4ErleEj() called");
    return 0;
}

/* Demangled: webrtc::RenderSignalAnalyzer::~RenderSignalAnalyzer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20RenderSignalAnalyzerD2Ev(void) {
    ALOGD("_ZN6webrtc20RenderSignalAnalyzerD2Ev() called");
    return 0;
}

/* Demangled: webrtc::Agc::Agc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3AgcC1Ev(void) {
    ALOGD("_ZN6webrtc3AgcC1Ev() called");
    return 0;
}

/* Demangled: webrtc::VoiceDetection::ProcessCaptureAudio(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14VoiceDetection19ProcessCaptureAudioEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc14VoiceDetection19ProcessCaptureAudioEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::MovingMax::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9MovingMax5ClearEv(void) {
    ALOGD("_ZN6webrtc9MovingMax5ClearEv() called");
    return 0;
}

/* Demangled: WebRtcVad_FindMinimum */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_FindMinimum(void) {
    ALOGD("WebRtcVad_FindMinimum() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::Subtractor(webrtc::EchoCanceller3Config const&, unsigned int, unsigned int, webrtc::ApmDataDumper*, webrtc::Aec3Optimization) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10SubtractorC2ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE(void) {
    ALOGD("_ZN6webrtc10SubtractorC2ERKNS_20EchoCanceller3ConfigEjjPNS_13ApmDataDumperENS_16Aec3OptimizationE() called");
    return 0;
}

/* Demangled: rtc::hex_decode_with_delimiter(char*, unsigned int, char const*, unsigned int, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc25hex_decode_with_delimiterEPcjPKcjc(void) {
    ALOGD("_ZN3rtc25hex_decode_with_delimiterEPcjPKcjc() called");
    return 0;
}

/* Demangled: AgcEnable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AgcEnableP16preproc_effect_s(void) {
    ALOGD("_Z9AgcEnableP16preproc_effect_s() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_EEEvDpRKT_E1t = NULL;

/* Demangled: WebRtcSpl_ResetResample8khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample8khzTo48khz(void) {
    ALOGD("WebRtcSpl_ResetResample8khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIdE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvS7_Ev(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEEcvS7_Ev() called");
    return 0;
}

/* Demangled: webrtc::Pffft::IsValidFftSize(unsigned int, webrtc::Pffft::FftType) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft14IsValidFftSizeEjNS0_7FftTypeE(void) {
    ALOGD("_ZN6webrtc5Pffft14IsValidFftSizeEjNS0_7FftTypeE() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_UpdateFarHistory(webrtc::AecmCore*, unsigned short*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc27WebRtcAecm_UpdateFarHistoryEPNS_8AecmCoreEPti(void) {
    ALOGD("_ZN6webrtc27WebRtcAecm_UpdateFarHistoryEPNS_8AecmCoreEPti() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::Process(rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIfLin4711EEE(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter7ProcessEN3rtc9ArrayViewIfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::ResetAccumulators() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneous17ResetAccumulatorsEv(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneous17ResetAccumulatorsEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::Append(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilder6AppendEPKcj(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilder6AppendEPKcj() called");
    return 0;
}

/* Demangled: rtc::TimeMillis() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10TimeMillisEv(void) {
    ALOGD("_ZN3rtc10TimeMillisEv() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::Initialize(int, int, int, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout, webrtc::AudioProcessing::ChannelLayout) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl10InitializeEiiiNS_15AudioProcessing13ChannelLayoutES2_S2_() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample8khzTo22khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample8khzTo22khz(void) {
    ALOGD("WebRtcSpl_Resample8khzTo22khz() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::VadAudioProc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProcC2Ev(void) {
    ALOGD("_ZN6webrtc12VadAudioProcC2Ev() called");
    return 0;
}

/* Demangled: rtc::LogSink::OnLogMessage(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc7LogSink12OnLogMessageERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: webrtc::VadWithLevel::VadWithLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadWithLevelC2Ev(void) {
    ALOGD("_ZN6webrtc12VadWithLevelC2Ev() called");
    return 0;
}

/* Demangled: WebRtcAecm_InitEchoPath */
extern "C" __attribute__((visibility("default"))) int WebRtcAecm_InitEchoPath(void) {
    ALOGD("WebRtcAecm_InitEchoPath() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::EchoCanceller3(webrtc::EchoCanceller3Config const&, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijj(void) {
    ALOGD("_ZN6webrtc14EchoCanceller3C2ERKNS_20EchoCanceller3ConfigEijj() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::RnnBasedVad::~RnnBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad11RnnBasedVadD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad11RnnBasedVadD2Ev() called");
    return 0;
}

/* Demangled: webrtc::TransientSuppressorImpl::UpdateBuffers(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23TransientSuppressorImpl13UpdateBuffersEPf(void) {
    ALOGD("_ZN6webrtc23TransientSuppressorImpl13UpdateBuffersEPf() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_FreeDelayEstimatorFarend(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc31WebRtc_FreeDelayEstimatorFarendEPv(void) {
    ALOGD("_ZN6webrtc31WebRtc_FreeDelayEstimatorFarendEPv() called");
    return 0;
}

/* Demangled: webrtc::aec3::ApplyFilter(webrtc::RenderBuffer const&, unsigned int, std::__1::vector<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> >, std::__1::allocator<std::__1::vector<webrtc::FftData, std::__1::allocator<webrtc::FftData> > > > const&, webrtc::FftData*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec311ApplyFilterERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_(void) {
    ALOGD("_ZN6webrtc4aec311ApplyFilterERKNS_12RenderBufferEjRKNSt3__16vectorINS5_INS_7FftDataENS4_9allocatorIS6_EEEENS7_IS9_EEEEPS6_() called");
    return 0;
}

/* Demangled: rtc::LogMessage::stream() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage6streamEv(void) {
    ALOGD("_ZN3rtc10LogMessage6streamEv() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::Suppressor(webrtc::EchoCanceller3Config::Suppressor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10SuppressorC1ERKS1_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10SuppressorC1ERKS1_() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::LastMargin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19SaturationProtector10LastMarginEv(void) {
    ALOGD("_ZNK6webrtc19SaturationProtector10LastMarginEv() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::PeakEnveloper::PeakEnveloper() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtector13PeakEnveloperC2Ev(void) {
    ALOGD("_ZN6webrtc19SaturationProtector13PeakEnveloperC2Ev() called");
    return 0;
}

/* Demangled: webrtc::DownsampledRenderBuffer::~DownsampledRenderBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23DownsampledRenderBufferD2Ev(void) {
    ALOGD("_ZN6webrtc23DownsampledRenderBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIdEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: rtc::ToHex(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5ToHexEi(void) {
    ALOGD("_ZN3rtc5ToHexEi() called");
    return 0;
}

/* Demangled: rtc::Time32() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc6Time32Ev(void) {
    ALOGD("_ZN3rtc6Time32Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_binary_last_delay(webrtc::BinaryDelayEstimator*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24WebRtc_binary_last_delayEPNS_20BinaryDelayEstimatorE(void) {
    ALOGD("_ZN6webrtc24WebRtc_binary_last_delayEPNS_20BinaryDelayEstimatorE() called");
    return 0;
}

/* Demangled: WebRtcSpl_Resample48khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_Resample48khzTo8khz(void) {
    ALOGD("WebRtcSpl_Resample48khzTo8khz() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AnalyzePreProcess(float const* const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKPKfj(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect17AnalyzePreProcessEPKPKfj() called");
    return 0;
}

/* Demangled: webrtc::cftmdl_128_neon(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15cftmdl_128_neonEPf(void) {
    ALOGD("_ZN6webrtc15cftmdl_128_neonEPf() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::GetOutput() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7rnn_vad19GatedRecurrentLayer9GetOutputEv(void) {
    ALOGD("_ZNK6webrtc7rnn_vad19GatedRecurrentLayer9GetOutputEv() called");
    return 0;
}

/* Demangled: rtc::CurrentThreadId() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15CurrentThreadIdEv(void) {
    ALOGD("_ZN3rtc15CurrentThreadIdEv() called");
    return 0;
}

/* Demangled: webrtc::GainApplier::GainApplier(bool, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11GainApplierC2Ebf(void) {
    ALOGD("_ZN6webrtc11GainApplierC2Ebf() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::SetRatio(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler8SetRatioEd(void) {
    ALOGD("_ZN6webrtc13SincResampler8SetRatioEd() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::RenderWriter::~RenderWriter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller312RenderWriterD1Ev(void) {
    ALOGD("_ZN6webrtc14EchoCanceller312RenderWriterD1Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_SoftResetBinaryDelayEstimator(webrtc::BinaryDelayEstimator*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc36WebRtc_SoftResetBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorEi(void) {
    ALOGD("_ZN6webrtc36WebRtc_SoftResetBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorEi() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::InitializePreProcessor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22InitializePreProcessorEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22InitializePreProcessorEv() called");
    return 0;
}

/* Demangled: webrtc::field_trial::FieldTrialsStringIsValid(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11field_trial24FieldTrialsStringIsValidEPKc(void) {
    ALOGD("_ZN6webrtc11field_trial24FieldTrialsStringIsValidEPKc() called");
    return 0;
}

/* Demangled: webrtc::aec3::TransformDbMetricForReporting(bool, float, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec329TransformDbMetricForReportingEbfffff(void) {
    ALOGD("_ZN6webrtc4aec329TransformDbMetricForReportingEbfffff() called");
    return 0;
}

/* Demangled: webrtc::DownSampler::DownSampler(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11DownSamplerC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc11DownSamplerC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::enable_limiter(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl14enable_limiterEb(void) {
    ALOGD("_ZN6webrtc15GainControlImpl14enable_limiterEb() called");
    return 0;
}

/* Demangled: rtc::SystemTimeNanos() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15SystemTimeNanosEv(void) {
    ALOGD("_ZN3rtc15SystemTimeNanosEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FeaturesExtractor::~FeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad17FeaturesExtractorD1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad17FeaturesExtractorD1Ev() called");
    return 0;
}

/* Demangled: PreProcessingFx_Command */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_Command(void) {
    ALOGD("PreProcessingFx_Command() called");
    return 0;
}

/* Demangled: webrtc::Limiter::Limiter(unsigned int, webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7LimiterC1EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc7LimiterC1EjPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::StandaloneVad(WebRtcVadInst*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst(void) {
    ALOGD("_ZN6webrtc13StandaloneVadC2EP13WebRtcVadInst() called");
    return 0;
}

/* Demangled: webrtc::FrameBlocker::~FrameBlocker() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12FrameBlockerD1Ev(void) {
    ALOGD("_ZN6webrtc12FrameBlockerD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SubbandErleEstimator::Update(rtc::ArrayView<float const, 65>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SubbandErleEstimator6UpdateEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE(void) {
    ALOGD("_ZN6webrtc20SubbandErleEstimator6UpdateEN3rtc9ArrayViewIKfLi65EEENS2_IKNSt3__15arrayIfLj65EEELin4711EEES9_RKNS5_6vectorIbNS5_9allocatorIbEEEE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AnalyzeReverseStream(float const* const*, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfRKNS_12StreamConfigE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl20AnalyzeReverseStreamEPKPKfRKNS_12StreamConfigE() called");
    return 0;
}

/* Demangled: webrtc::Resampler::Resampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9ResamplerC2Ev(void) {
    ALOGD("_ZN6webrtc9ResamplerC2Ev() called");
    return 0;
}

/* Demangled: webrtc::ErleEstimator::~ErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ErleEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc13ErleEstimatorD2Ev() called");
    return 0;
}

/* Demangled: std::__1::optional<bool> webrtc::ParseTypedParameter<bool>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterIbEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterIbEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: rtc::Event::Event() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventC2Ev(void) {
    ALOGD("_ZN3rtc5EventC2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_AlignedFarend(webrtc::AecmCore*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24WebRtcAecm_AlignedFarendEPNS_8AecmCoreEPii(void) {
    ALOGD("_ZN6webrtc24WebRtcAecm_AlignedFarendEPNS_8AecmCoreEPii() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::Estimate(webrtc::AecState const&, webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u>, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimator8EstimateERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESD_NS8_ISB_Lin4711EEE(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimator8EstimateERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEESD_NS8_ISB_Lin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_StoreAdaptiveChannelNeon(webrtc::AecmCore*, unsigned short const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc35WebRtcAecm_StoreAdaptiveChannelNeonEPNS_8AecmCoreEPKtPi(void) {
    ALOGD("_ZN6webrtc35WebRtcAecm_StoreAdaptiveChannelNeonEPNS_8AecmCoreEPKtPi() called");
    return 0;
}

/* Demangled: webrtc::AlignedFree(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AlignedFreeEPv(void) {
    ALOGD("_ZN6webrtc11AlignedFreeEPv() called");
    return 0;
}

/* Demangled: webrtc::SignalModelEstimator::SignalModelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SignalModelEstimatorC1Ev(void) {
    ALOGD("_ZN6webrtc20SignalModelEstimatorC1Ev() called");
    return 0;
}

/* Demangled: rtc::LogMessage::AddLogToStream(rtc::LogSink*, rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessage14AddLogToStreamEPNS_7LogSinkENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::set_downmixing_to_specific_channel(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer34set_downmixing_to_specific_channelEj(void) {
    ALOGD("_ZN6webrtc11AudioBuffer34set_downmixing_to_specific_channelEj() called");
    return 0;
}

/* Demangled: webrtc::ReverbFrequencyResponse::ReverbFrequencyResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23ReverbFrequencyResponseC1Ev(void) {
    ALOGD("_ZN6webrtc23ReverbFrequencyResponseC1Ev() called");
    return 0;
}

/* Demangled: std::__1::optional<int> webrtc::ParseTypedParameter<int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterIiEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterIiEENSt3__18optionalIT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::GetOutput() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7rnn_vad19FullyConnectedLayer9GetOutputEv(void) {
    ALOGD("_ZNK6webrtc7rnn_vad19FullyConnectedLayer9GetOutputEv() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::PlatformThread(void (*)(void*), void*, std::__1::basic_string_view<char, std::__1::char_traits<char> >, rtc::ThreadPriority) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadC2EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE(void) {
    ALOGD("_ZN3rtc14PlatformThreadC2EPFvPvES1_NSt3__117basic_string_viewIcNS4_11char_traitsIcEEEENS_14ThreadPriorityE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::AutoCorrelationCalculator::AutoCorrelationCalculator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25AutoCorrelationCalculatorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::GatedRecurrentLayer::~GatedRecurrentLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19GatedRecurrentLayerD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad19GatedRecurrentLayerD2Ev() called");
    return 0;
}

/* Demangled: PreProcessingLib_Release */
extern "C" __attribute__((visibility("default"))) int PreProcessingLib_Release(void) {
    ALOGD("PreProcessingLib_Release() called");
    return 0;
}

/* Demangled: rtc::LogMessage::ConfigureLogging(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage16ConfigureLoggingEPKc(void) {
    ALOGD("_ZN3rtc10LogMessage16ConfigureLoggingEPKc() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::EchoControlMobileImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImplC2Ev(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImplC2Ev() called");
    return 0;
}

/* Demangled: webrtc::ReverbModel::ReverbModel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11ReverbModelC1Ev(void) {
    ALOGD("_ZN6webrtc11ReverbModelC1Ev() called");
    return 0;
}

/* Demangled: webrtc::Config::~Config() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc6ConfigD2Ev(void) {
    ALOGD("_ZN6webrtc6ConfigD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AecState::InitialState::Update(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecState12InitialState6UpdateEbb(void) {
    ALOGD("_ZN6webrtc8AecState12InitialState6UpdateEbb() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<int>::operator->() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIiEptEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIiEptEv() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)10, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_10EPKNSt3__112basic_stringIcNSB_11char_traitsIcEENSB_9allocatorIcEEEEEESA_SK_SA_EEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::AudioProcessingImpl::EmptyQueuedRenderAudio() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22EmptyQueuedRenderAudioEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22EmptyQueuedRenderAudioEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample22khzTo8khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample22khzTo8khz(void) {
    ALOGD("WebRtcSpl_ResetResample22khzTo8khz() called");
    return 0;
}

/* Exported Object: vtable for webrtc::AudioBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc11AudioBufferE = NULL;

/* Demangled: webrtc::RenderSignalAnalyzer::RenderSignalAnalyzer(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20RenderSignalAnalyzerC1ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc20RenderSignalAnalyzerC1ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilterLagAggregator::Aggregate(rtc::ArrayView<webrtc::MatchedFilter::LagEstimate const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26MatchedFilterLagAggregator9AggregateEN3rtc9ArrayViewIKNS_13MatchedFilter11LagEstimateELin4711EEE(void) {
    ALOGD("_ZN6webrtc26MatchedFilterLagAggregator9AggregateEN3rtc9ArrayViewIKNS_13MatchedFilter11LagEstimateELin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_CalcSuppressionGain(webrtc::AecmCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc30WebRtcAecm_CalcSuppressionGainEPNS_8AecmCoreE(void) {
    ALOGD("_ZN6webrtc30WebRtcAecm_CalcSuppressionGainEPNS_8AecmCoreE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::voice_probability() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc29AdaptiveModeLevelEstimatorAgc17voice_probabilityEv(void) {
    ALOGD("_ZNK6webrtc29AdaptiveModeLevelEstimatorAgc17voice_probabilityEv() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirect10InitializeEv(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirect10InitializeEv() called");
    return 0;
}

/* Exported Object: webrtc::FilterAnalyzer::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc14FilterAnalyzer15instance_count_E = NULL;

/* Demangled: webrtc::FieldTrialParameter<int>::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIiE5ParseENSt3__18optionalINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEEE() called");
    return 0;
}

/* Exported Object: rnnoise::kHiddenGruRecurrentWeights */
extern "C" __attribute__((visibility("default"))) void* _ZN7rnnoise26kHiddenGruRecurrentWeightsE = NULL;

/* Demangled: webrtc::PushSincResampler::PushSincResampler(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17PushSincResamplerC1Ejj(void) {
    ALOGD("_ZN6webrtc17PushSincResamplerC1Ejj() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::InterpolatedGainCurve(webrtc::ApmDataDumper*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21InterpolatedGainCurveC2EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc21InterpolatedGainCurveC2EPNS_13ApmDataDumperENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::DominantNearendDetector::Update(rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, rtc::ArrayView<std::__1::array<float, 65u> const, -4711>, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23DominantNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b(void) {
    ALOGD("_ZN6webrtc23DominantNearendDetector6UpdateEN3rtc9ArrayViewIKNSt3__15arrayIfLj65EEELin4711EEES7_S7_b() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialFlag::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc14FieldTrialFlag3GetEv(void) {
    ALOGD("_ZNK6webrtc14FieldTrialFlag3GetEv() called");
    return 0;
}

/* Demangled: webrtc::Db2Loudness(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11Db2LoudnessEd(void) {
    ALOGD("_ZN6webrtc11Db2LoudnessEd() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEEEEEvDpRKT_E1t = NULL;

/* Demangled: webrtc::AudioBuffer::ExportSplitChannelData(unsigned int, short* const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc11AudioBuffer22ExportSplitChannelDataEjPKPs(void) {
    ALOGD("_ZNK6webrtc11AudioBuffer22ExportSplitChannelDataEjPKPs() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::~RmsLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevelD2Ev(void) {
    ALOGD("_ZN6webrtc8RmsLevelD2Ev() called");
    return 0;
}

/* Demangled: webrtc::Decimator::Decimate(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9Decimator8DecimateEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE(void) {
    ALOGD("_ZN6webrtc9Decimator8DecimateEN3rtc9ArrayViewIKfLin4711EEENS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::EchoAudibility::EchoAudibility(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoAudibilityC1Eb(void) {
    ALOGD("_ZN6webrtc14EchoAudibilityC1Eb() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::FilterMisadjustmentEstimator::Update(webrtc::SubtractorOutput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10Subtractor28FilterMisadjustmentEstimator6UpdateERKNS_16SubtractorOutputE(void) {
    ALOGD("_ZN6webrtc10Subtractor28FilterMisadjustmentEstimator6UpdateERKNS_16SubtractorOutputE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::set_stream_delay_ms(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl19set_stream_delay_msEi() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::AudioContent() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc17LoudnessHistogram12AudioContentEv(void) {
    ALOGD("_ZNK6webrtc17LoudnessHistogram12AudioContentEv() called");
    return 0;
}

/* Demangled: webrtc::WPDTree::NodeAt(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDTree6NodeAtEii(void) {
    ALOGD("_ZN6webrtc7WPDTree6NodeAtEii() called");
    return 0;
}

/* Demangled: webrtc::AudioBuffer::CopyFrom(short const*, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer8CopyFromEPKsRKNS_12StreamConfigE(void) {
    ALOGD("_ZN6webrtc11AudioBuffer8CopyFromEPKsRKNS_12StreamConfigE() called");
    return 0;
}

/* Demangled: webrtc::InternalAPMConfig::operator=(webrtc::InternalAPMConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17InternalAPMConfigaSERKS0_(void) {
    ALOGD("_ZN6webrtc17InternalAPMConfigaSERKS0_() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_AddFarSpectrumFix(void*, unsigned short const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24WebRtc_AddFarSpectrumFixEPvPKtii(void) {
    ALOGD("_ZN6webrtc24WebRtc_AddFarSpectrumFixEPvPKtii() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::ChunkSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc13SincResampler9ChunkSizeEv(void) {
    ALOGD("_ZNK6webrtc13SincResampler9ChunkSizeEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<unsigned int>::Value() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIjE5ValueEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIjE5ValueEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::PitchEstimator::PitchEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad14PitchEstimatorC1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad14PitchEstimatorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::GetConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl9GetConfigEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl9GetConfigEv() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_checks_impl::LogStreamer<>::Call<rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> >(char const*, int, char const*, rtc::webrtc_checks_impl::Val<(rtc::webrtc_checks_impl::CheckArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc18webrtc_checks_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_12CheckArgTypeE9EPKcEEEEEvS7_iS7_DpRKT_E1t = NULL;

/* Demangled: webrtc::AudioBuffer::set_downmixing_by_averaging() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AudioBuffer27set_downmixing_by_averagingEv(void) {
    ALOGD("_ZN6webrtc11AudioBuffer27set_downmixing_by_averagingEv() called");
    return 0;
}

/* Demangled: webrtc::BlockDelayBuffer::~BlockDelayBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16BlockDelayBufferD2Ev(void) {
    ALOGD("_ZN6webrtc16BlockDelayBufferD2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >::vector(unsigned int, std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_INS0_IfNS_9allocatorIfEEEENS1_IS3_EEEENS1_IS5_EEEC2EjRKS5_(void) {
    ALOGD("_ZNSt3__16vectorINS0_INS0_IfNS_9allocatorIfEEEENS1_IS3_EEEENS1_IS5_EEEC2EjRKS5_() called");
    return 0;
}

/* Demangled: webrtc::VadCircularBuffer::BufferLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17VadCircularBuffer11BufferLevelEv(void) {
    ALOGD("_ZN6webrtc17VadCircularBuffer11BufferLevelEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FindBestPitchPeriods(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad20FindBestPitchPeriodsEN3rtc9ArrayViewIKfLin4711EEES4_j(void) {
    ALOGD("_ZN6webrtc7rnn_vad20FindBestPitchPeriodsEN3rtc9ArrayViewIKfLin4711EEES4_j() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralCorrelator::SpectralCorrelator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad18SpectralCorrelatorC1Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad18SpectralCorrelatorC1Ev() called");
    return 0;
}

/* Demangled: Agc2Enable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10Agc2EnableP16preproc_effect_s(void) {
    ALOGD("_Z10Agc2EnableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::FIRFilterNEON::~FIRFilterNEON() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13FIRFilterNEOND1Ev(void) {
    ALOGD("_ZN6webrtc13FIRFilterNEOND1Ev() called");
    return 0;
}

/* Demangled: pffft_transform */
extern "C" __attribute__((visibility("default"))) int pffft_transform(void) {
    ALOGD("pffft_transform() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_last_delay(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17WebRtc_last_delayEPv(void) {
    ALOGD("_ZN6webrtc17WebRtc_last_delayEPv() called");
    return 0;
}

/* Demangled: AecSetDevice(preproc_effect_s*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12AecSetDeviceP16preproc_effect_sj(void) {
    ALOGD("_Z12AecSetDeviceP16preproc_effect_sj() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_InitDelayEstimator(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc25WebRtc_InitDelayEstimatorEPv(void) {
    ALOGD("_ZN6webrtc25WebRtc_InitDelayEstimatorEPv() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::Create() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVad6CreateEv(void) {
    ALOGD("_ZN6webrtc13StandaloneVad6CreateEv() called");
    return 0;
}

/* Demangled: webrtc::EchoPathDelayEstimator::EchoPathDelayEstimator(webrtc::ApmDataDumper*, webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22EchoPathDelayEstimatorC2EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc22EchoPathDelayEstimatorC2EPNS_13ApmDataDumperERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::ReverbModelEstimator::~ReverbModelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbModelEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc20ReverbModelEstimatorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<int>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIiEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)1, int> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEENS4_ILS5_1EiEESA_EEEvDpRKT_E1t = NULL;

/* Exported Object: void rtc::webrtc_logging_impl::LogStreamer<>::Call<rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*>, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> >(rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)13, rtc::webrtc_logging_impl::LogMetadata> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&, rtc::webrtc_logging_impl::Val<(rtc::webrtc_logging_impl::LogArgType)9, char const*> const&)::t */
extern "C" __attribute__((visibility("default"))) void* _ZZN3rtc19webrtc_logging_impl11LogStreamerIJEE4CallIJNS0_3ValILNS0_10LogArgTypeE13ENS0_11LogMetadataEEENS4_ILS5_9EPKcEESA_SA_EEEvDpRKT_E1t = NULL;

/* Demangled: WebRtcVad_CalcVad48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcVad_CalcVad48khz(void) {
    ALOGD("WebRtcVad_CalcVad48khz() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::ProcessRenderAudio(rtc::ArrayView<short const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl18ProcessRenderAudioEN3rtc9ArrayViewIKsLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_DelayEstimatorProcessFix(void*, unsigned short const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc31WebRtc_DelayEstimatorProcessFixEPvPKtii(void) {
    ALOGD("_ZN6webrtc31WebRtc_DelayEstimatorProcessFixEPvPKtii() called");
    return 0;
}

/* Demangled: webrtc::ThreeBandFilterBank::ThreeBandFilterBank() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ThreeBandFilterBankC1Ev(void) {
    ALOGD("_ZN6webrtc19ThreeBandFilterBankC1Ev() called");
    return 0;
}

/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::SignalWithLevels const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalWithLevelsC2ERKS0_(void) {
    ALOGD("_ZN6webrtc16SignalWithLevelsC2ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::NoiseSpectrum::~NoiseSpectrum() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimator13NoiseSpectrumD2Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimator13NoiseSpectrumD2Ev() called");
    return 0;
}

/* Demangled: pffftd_next_power_of_two */
extern "C" __attribute__((visibility("default"))) int pffftd_next_power_of_two(void) {
    ALOGD("pffftd_next_power_of_two() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::EchoCanceller3Config(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3ConfigC1ERKS0_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3ConfigC1ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::SuppressionGain(webrtc::EchoCanceller3Config const&, webrtc::Aec3Optimization, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15SuppressionGainC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij(void) {
    ALOGD("_ZN6webrtc15SuppressionGainC2ERKNS_20EchoCanceller3ConfigENS_16Aec3OptimizationEij() called");
    return 0;
}

/* Demangled: rtc::LogMessage::OutputToDebug(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, rtc::LoggingSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE(void) {
    ALOGD("_ZN3rtc10LogMessage13OutputToDebugERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_15LoggingSeverityE() called");
    return 0;
}

/* Demangled: rtc::Event::Event(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5EventC1Ebb(void) {
    ALOGD("_ZN3rtc5EventC1Ebb() called");
    return 0;
}

/* Demangled: webrtc::VadWithLevel::SetSampleRate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadWithLevel13SetSampleRateEi(void) {
    ALOGD("_ZN6webrtc12VadWithLevel13SetSampleRateEi() called");
    return 0;
}

/* Demangled: webrtc::PitchBasedVad::PitchBasedVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PitchBasedVadC2Ev(void) {
    ALOGD("_ZN6webrtc13PitchBasedVadC2Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionGain::GetMinGain(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, bool, bool, rtc::ArrayView<float, -4711>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15SuppressionGain10GetMinGainEN3rtc9ArrayViewIKfLin4711EEES4_S4_bbNS2_IfLin4711EEE(void) {
    ALOGD("_ZNK6webrtc15SuppressionGain10GetMinGainEN3rtc9ArrayViewIKfLin4711EEES4_S4_bbNS2_IfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::FieldTrialOptional(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::optional<bool>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE(void) {
    ALOGD("_ZN6webrtc18FieldTrialOptionalIbEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS2_8optionalIbEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::Value() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIbE5ValueEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIbE5ValueEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<double>::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterIdE3GetEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterIdE3GetEv() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::SetupDigitalGainControl(webrtc::GainControl*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc16AgcManagerDirect23SetupDigitalGainControlEPNS_11GainControlE(void) {
    ALOGD("_ZNK6webrtc16AgcManagerDirect23SetupDigitalGainControlEPNS_11GainControlE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimatorAgc::AdaptiveModeLevelEstimatorAgc(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc29AdaptiveModeLevelEstimatorAgcC1EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc29AdaptiveModeLevelEstimatorAgcC1EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Exported Object: rtc::g_clock */
extern "C" __attribute__((visibility("default"))) void* _ZN3rtc7g_clockE = NULL;

/* Demangled: webrtc::Pffft::FrequencyDomainConvolve(webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft23FrequencyDomainConvolveERKNS0_11FloatBufferES3_PS1_f(void) {
    ALOGD("_ZN6webrtc5Pffft23FrequencyDomainConvolveERKNS0_11FloatBufferES3_PS1_f() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::AudioProcessingImpl(webrtc::Config const&, std::__1::unique_ptr<webrtc::CustomProcessing, std::__1::default_delete<webrtc::CustomProcessing> >, std::__1::unique_ptr<webrtc::CustomProcessing, std::__1::default_delete<webrtc::CustomProcessing> >, std::__1::unique_ptr<webrtc::EchoControlFactory, std::__1::default_delete<webrtc::EchoControlFactory> >, rtc::scoped_refptr<webrtc::EchoDetector>, std::__1::unique_ptr<webrtc::CustomAudioAnalyzer, std::__1::default_delete<webrtc::CustomAudioAnalyzer> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigENSt3__110unique_ptrINS_16CustomProcessingENS4_14default_deleteIS6_EEEES9_NS5_INS_18EchoControlFactoryENS7_ISA_EEEEN3rtc13scoped_refptrINS_12EchoDetectorEEENS5_INS_19CustomAudioAnalyzerENS7_ISH_EEEE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImplC2ERKNS_6ConfigENSt3__110unique_ptrINS_16CustomProcessingENS4_14default_deleteIS6_EEEES9_NS5_INS_18EchoControlFactoryENS7_ISA_EEEEN3rtc13scoped_refptrINS_12EchoDetectorEEENS5_INS_19CustomAudioAnalyzerENS7_ISH_EEEE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::ProcessCaptureAudio(webrtc::AudioBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferEb(void) {
    ALOGD("_ZN6webrtc15GainControlImpl19ProcessCaptureAudioEPNS_11AudioBufferEb() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::ApmRenderState::ApmRenderState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl14ApmRenderStateC2Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl14ApmRenderStateC2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_CrossCorrelationNeon */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_CrossCorrelationNeon(void) {
    ALOGD("WebRtcSpl_CrossCorrelationNeon() called");
    return 0;
}

/* Demangled: webrtc::CascadedBiQuadFilter::BiQuad::BiQuad(webrtc::CascadedBiQuadFilter::BiQuadParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20CascadedBiQuadFilter6BiQuadC2ERKNS0_11BiQuadParamE(void) {
    ALOGD("_ZN6webrtc20CascadedBiQuadFilter6BiQuadC2ERKNS0_11BiQuadParamE() called");
    return 0;
}

/* Demangled: pffft_aligned_malloc */
extern "C" __attribute__((visibility("default"))) int pffft_aligned_malloc(void) {
    ALOGD("pffft_aligned_malloc() called");
    return 0;
}

/* Demangled: webrtc::SignalWithLevels::SignalWithLevels(webrtc::AudioFrameView<float>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalWithLevelsC1ENS_14AudioFrameViewIfEE(void) {
    ALOGD("_ZN6webrtc16SignalWithLevelsC1ENS_14AudioFrameViewIfEE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::LatestLevelEstimate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc26AdaptiveModeLevelEstimator19LatestLevelEstimateEv(void) {
    ALOGD("_ZNK6webrtc26AdaptiveModeLevelEstimator19LatestLevelEstimateEv() called");
    return 0;
}

/* Demangled: webrtc::SaturationProtector::SaturationProtector(webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc19SaturationProtectorC2EPNS_13ApmDataDumperE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::FieldTrialConstrained<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc21FieldTrialConstrainedIjEE = NULL;

/* Demangled: std::__1::vector<short, std::__1::allocator<short> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIsNS_9allocatorIsEEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::SpeechProbabilityEstimator::SpeechProbabilityEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26SpeechProbabilityEstimatorC1Ev(void) {
    ALOGD("_ZN6webrtc26SpeechProbabilityEstimatorC1Ev() called");
    return 0;
}

/* Demangled: webrtc::OouraFft::Fft(float*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc8OouraFft3FftEPf(void) {
    ALOGD("_ZNK6webrtc8OouraFft3FftEPf() called");
    return 0;
}

/* Demangled: webrtc::SubtractorOutput::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SubtractorOutput5ResetEv(void) {
    ALOGD("_ZN6webrtc16SubtractorOutput5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::ComputeSmoothedLogMagnitudeSpectrum(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 22>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad35ComputeSmoothedLogMagnitudeSpectrumEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi22EEE(void) {
    ALOGD("_ZN6webrtc7rnn_vad35ComputeSmoothedLogMagnitudeSpectrumEN3rtc9ArrayViewIKfLin4711EEENS2_IfLi22EEE() called");
    return 0;
}

/* Demangled: webrtc::Pffft::~Pffft() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5PffftD2Ev(void) {
    ALOGD("_ZN6webrtc5PffftD2Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingBuilder::Create(webrtc::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AudioProcessingBuilder6CreateERKNS_6ConfigE(void) {
    ALOGD("_ZN6webrtc22AudioProcessingBuilder6CreateERKNS_6ConfigE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::~SpectralFeaturesExtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD2Ev(void) {
    ALOGD("_ZN6webrtc7rnn_vad25SpectralFeaturesExtractorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::DbMetric::DbMetric(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics8DbMetricC2Efff(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics8DbMetricC2Efff() called");
    return 0;
}

/* Demangled: webrtc::aec3::MovingAverage::~MovingAverage() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc4aec313MovingAverageD1Ev(void) {
    ALOGD("_ZN6webrtc4aec313MovingAverageD1Ev() called");
    return 0;
}

/* Demangled: webrtc::SuppressionFilter::~SuppressionFilter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17SuppressionFilterD2Ev(void) {
    ALOGD("_ZN6webrtc17SuppressionFilterD2Ev() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::FrameExtender::~FrameExtender() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifier13FrameExtenderD2Ev(void) {
    ALOGD("_ZN6webrtc16SignalClassifier13FrameExtenderD2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_LPBy2ShortToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_LPBy2ShortToInt(void) {
    ALOGD("WebRtcSpl_LPBy2ShortToInt() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<short>::~PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIsED1Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIsED1Ev() called");
    return 0;
}

/* Demangled: webrtc::CoarseFilterUpdateGain::UpdateCurrentConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22CoarseFilterUpdateGain19UpdateCurrentConfigEv(void) {
    ALOGD("_ZN6webrtc22CoarseFilterUpdateGain19UpdateCurrentConfigEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_DivW32HiLow */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivW32HiLow(void) {
    ALOGD("WebRtcSpl_DivW32HiLow() called");
    return 0;
}

/* Demangled: webrtc::BlockDelayBuffer::DelaySignal(webrtc::AudioBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16BlockDelayBuffer11DelaySignalEPNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc16BlockDelayBuffer11DelaySignalEPNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::~ResidualEchoEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimatorD2Ev() called");
    return 0;
}

/* Demangled: rtc::LogMessage::GetLogToStream(rtc::LogSink*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE(void) {
    ALOGD("_ZN3rtc10LogMessage14GetLogToStreamEPNS_7LogSinkE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::MaybeInitializeCapture(webrtc::StreamConfig const&, webrtc::StreamConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_12StreamConfigES3_(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22MaybeInitializeCaptureERKNS_12StreamConfigES3_() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveModeLevelEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc26AdaptiveModeLevelEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::AlignmentMixer::AlignmentMixer(unsigned int, webrtc::EchoCanceller3Config::Delay::AlignmentMixing const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AlignmentMixerC2EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE(void) {
    ALOGD("_ZN6webrtc14AlignmentMixerC2EjRKNS_20EchoCanceller3Config5Delay15AlignmentMixingE() called");
    return 0;
}

/* Demangled: webrtc::ApiCallJitterMetrics::Jitter::Jitter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ApiCallJitterMetrics6JitterC2Ev(void) {
    ALOGD("_ZN6webrtc20ApiCallJitterMetrics6JitterC2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoRemoverMetrics::ResetMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc18EchoRemoverMetrics12ResetMetricsEv(void) {
    ALOGD("_ZN6webrtc18EchoRemoverMetrics12ResetMetricsEv() called");
    return 0;
}

/* Demangled: webrtc::AbstractFieldTrialEnum::~AbstractFieldTrialEnum() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnumD2Ev(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnumD2Ev() called");
    return 0;
}

/* Demangled: rtc::TimestampWrapAroundHandler::TimestampWrapAroundHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc26TimestampWrapAroundHandlerC1Ev(void) {
    ALOGD("_ZN3rtc26TimestampWrapAroundHandlerC1Ev() called");
    return 0;
}

/* Demangled: NsDisable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9NsDisableP16preproc_effect_s(void) {
    ALOGD("_Z9NsDisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<float>::~PushResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIfED2Ev(void) {
    ALOGD("_ZN6webrtc13PushResamplerIfED2Ev() called");
    return 0;
}

/* Exported Object: webrtc::AudioProcessing::kNativeSampleRatesHz */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15AudioProcessing20kNativeSampleRatesHzE = NULL;

/* Demangled: webrtc::SignalDependentErleEstimator::SignalDependentErleEstimator(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimatorC1ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: webrtc::ResidualEchoEstimator::AddReverb(webrtc::ResidualEchoEstimator::ReverbType, webrtc::AecState const&, webrtc::RenderBuffer const&, rtc::ArrayView<std::__1::array<float, 65u>, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21ResidualEchoEstimator9AddReverbENS0_10ReverbTypeERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewINSt3__15arrayIfLj65EEELin4711EEE(void) {
    ALOGD("_ZN6webrtc21ResidualEchoEstimator9AddReverbENS0_10ReverbTypeERKNS_8AecStateERKNS_12RenderBufferEN3rtc9ArrayViewINSt3__15arrayIfLj65EEELin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::~ReverbDecayEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RecordAudioProcessingState() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl26RecordAudioProcessingStateEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl26RecordAudioProcessingStateEv() called");
    return 0;
}

/* Demangled: WebRtcSpl_DivW32W16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_DivW32W16(void) {
    ALOGD("WebRtcSpl_DivW32W16() called");
    return 0;
}

/* Demangled: webrtc::GetInitialSaturationMarginDb() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28GetInitialSaturationMarginDbEv(void) {
    ALOGD("_ZN6webrtc28GetInitialSaturationMarginDbEv() called");
    return 0;
}

/* Exported Object: webrtc::SuppressionGain::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc15SuppressionGain15instance_count_E = NULL;

/* Demangled: webrtc::AudioProcessingImpl::DetachAecDump() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl13DetachAecDumpEv(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl13DetachAecDumpEv() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimator::LevelEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14LevelEstimatorC2Ev(void) {
    ALOGD("_ZN6webrtc14LevelEstimatorC2Ev() called");
    return 0;
}

/* Demangled: webrtc::DominantNearendDetector::DominantNearendDetector(webrtc::EchoCanceller3Config::Suppressor::DominantNearendDetection const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23DominantNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj(void) {
    ALOGD("_ZN6webrtc23DominantNearendDetectorC1ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::EarlyReverbLengthEstimator::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator5ResetEv(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator26EarlyReverbLengthEstimator5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Parse(std::__1::optional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ParseENS1_8optionalIS7_EE() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_Free(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14WebRtcAgc_FreeEPv(void) {
    ALOGD("_ZN6webrtc14WebRtcAgc_FreeEPv() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Delay::Delay() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config5DelayC1Ev(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config5DelayC1Ev() called");
    return 0;
}

/* Demangled: WebRtc_InitBuffer */
extern "C" __attribute__((visibility("default"))) int WebRtc_InitBuffer(void) {
    ALOGD("WebRtc_InitBuffer() called");
    return 0;
}

/* Demangled: webrtc::ReverbModelEstimator::Update(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>, rtc::ArrayView<std::__1::vector<std::__1::array<float, 65u>, std::__1::allocator<std::__1::array<float, 65u> > > const, -4711>, rtc::ArrayView<std::__1::optional<float> const, -4711>, rtc::ArrayView<int const, -4711>, std::__1::vector<bool, std::__1::allocator<bool> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbModelEstimator6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IKNS4_INS3_5arrayIfLj65EEENS5_ISB_EEEELin4711EEENS2_IKNS3_8optionalIfEELin4711EEENS2_IKiLin4711EEERKNS4_IbNS5_IbEEEEb(void) {
    ALOGD("_ZN6webrtc20ReverbModelEstimator6UpdateEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEENS2_IKNS4_INS3_5arrayIfLj65EEENS5_ISB_EEEELin4711EEENS2_IKNS3_8optionalIfEELin4711EEENS2_IKiLin4711EEERKNS4_IbNS5_IbEEEEb() called");
    return 0;
}

/* Demangled: webrtc::StationarityEstimator::StationarityEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21StationarityEstimatorC1Ev(void) {
    ALOGD("_ZN6webrtc21StationarityEstimatorC1Ev() called");
    return 0;
}

/* Demangled: rtc::join(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc4joinERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEc(void) {
    ALOGD("_ZN3rtc4joinERKNSt3__16vectorINS0_12basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEENS5_IS7_EEEEc() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::Initialize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifier10InitializeEi(void) {
    ALOGD("_ZN6webrtc16SignalClassifier10InitializeEi() called");
    return 0;
}

/* Demangled: webrtc::MeanVarianceEstimator::Update(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21MeanVarianceEstimator6UpdateEf(void) {
    ALOGD("_ZN6webrtc21MeanVarianceEstimator6UpdateEf() called");
    return 0;
}

/* Demangled: webrtc::AlignedMalloc(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13AlignedMallocEjj(void) {
    ALOGD("_ZN6webrtc13AlignedMallocEjj() called");
    return 0;
}

/* Demangled: webrtc::metrics::SampleInfo::~SampleInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics10SampleInfoD1Ev(void) {
    ALOGD("_ZN6webrtc7metrics10SampleInfoD1Ev() called");
    return 0;
}

/* Exported Object: webrtc::AecState::instance_count_ */
extern "C" __attribute__((visibility("default"))) void* _ZN6webrtc8AecState15instance_count_E = NULL;

/* Demangled: webrtc::ResidualEchoDetector::~ResidualEchoDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ResidualEchoDetectorD1Ev(void) {
    ALOGD("_ZN6webrtc20ResidualEchoDetectorD1Ev() called");
    return 0;
}

/* Demangled: rtc::PlatformThread::~PlatformThread() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc14PlatformThreadD1Ev(void) {
    ALOGD("_ZN3rtc14PlatformThreadD1Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1ERKS2_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC1ERKS2_() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_CalcEnergies(webrtc::AecmCore*, unsigned short const*, short, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23WebRtcAecm_CalcEnergiesEPNS_8AecmCoreEPKtsjPi(void) {
    ALOGD("_ZN6webrtc23WebRtcAecm_CalcEnergiesEPNS_8AecmCoreEPKtsjPi() called");
    return 0;
}

/* Demangled: webrtc::FloatToFloatS16(float const*, unsigned int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15FloatToFloatS16EPKfjPf(void) {
    ALOGD("_ZN6webrtc15FloatToFloatS16EPKfjPf() called");
    return 0;
}

/* Demangled: webrtc::AecState::AecState(webrtc::EchoCanceller3Config const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8AecStateC2ERKNS_20EchoCanceller3ConfigEj(void) {
    ALOGD("_ZN6webrtc8AecStateC2ERKNS_20EchoCanceller3ConfigEj() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::optional<int> > webrtc::ParseTypedParameter<std::__1::optional<int> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIiEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterINSt3__18optionalIiEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for webrtc::Agc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6webrtc3AgcE = NULL;

/* Demangled: webrtc::AudioProcessingImpl::ApmStatsReporter::~ApmStatsReporter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD1Ev(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl16ApmStatsReporterD1Ev() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::Analyze(rtc::ArrayView<float const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE(void) {
    ALOGD("_ZN6webrtc8RmsLevel7AnalyzeEN3rtc9ArrayViewIKfLin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::GainController2::GainController2() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController2C2Ev(void) {
    ALOGD("_ZN6webrtc15GainController2C2Ev() called");
    return 0;
}

/* Demangled: WebRtcSpl_GetScalingSquare */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_GetScalingSquare(void) {
    ALOGD("WebRtcSpl_GetScalingSquare() called");
    return 0;
}

/* Demangled: WebRtcSpl_32khzTo22khzIntToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_32khzTo22khzIntToInt(void) {
    ALOGD("WebRtcSpl_32khzTo22khzIntToInt() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressor::NoiseSuppressor(webrtc::NsConfig const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15NoiseSuppressorC2ERKNS_8NsConfigEjj(void) {
    ALOGD("_ZN6webrtc15NoiseSuppressorC2ERKNS_8NsConfigEjj() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >::vector(unsigned int, std::__1::vector<float, std::__1::allocator<float> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEEC2EjRKS3_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEEC2EjRKS3_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<unsigned int>::SetForTest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIjE10SetForTestEj(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIjE10SetForTestEj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialConstrained<unsigned int>::FieldTrialConstrained(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int, std::__1::optional<unsigned int>, std::__1::optional<unsigned int>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FieldTrialConstrainedIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_(void) {
    ALOGD("_ZN6webrtc21FieldTrialConstrainedIjEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEjNS2_8optionalIjEESA_() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessing::Config::ToString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc15AudioProcessing6Config8ToStringEv(void) {
    ALOGD("_ZNK6webrtc15AudioProcessing6Config8ToStringEv() called");
    return 0;
}

/* Demangled: webrtc::StandaloneVad::~StandaloneVad() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13StandaloneVadD2Ev(void) {
    ALOGD("_ZN6webrtc13StandaloneVadD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Get() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE3GetEv(void) {
    ALOGD("_ZNK6webrtc19FieldTrialParameterINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE3GetEv() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::GainControlImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImplC1Ev(void) {
    ALOGD("_ZN6webrtc15GainControlImplC1Ev() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::RuntimeSettingEnqueuer::Enqueue(webrtc::AudioProcessing::RuntimeSetting) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuer7EnqueueENS_15AudioProcessing14RuntimeSettingE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22RuntimeSettingEnqueuer7EnqueueENS_15AudioProcessing14RuntimeSettingE() called");
    return 0;
}

/* Demangled: webrtc::CircularBuffer::~CircularBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14CircularBufferD2Ev(void) {
    ALOGD("_ZN6webrtc14CircularBufferD2Ev() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_UpdateChannel(webrtc::AecmCore*, unsigned short const*, short, unsigned short const*, short, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc24WebRtcAecm_UpdateChannelEPNS_8AecmCoreEPKtsS3_sPi(void) {
    ALOGD("_ZN6webrtc24WebRtcAecm_UpdateChannelEPNS_8AecmCoreEPKtsS3_sPi() called");
    return 0;
}

/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::Decimator::Decimator(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9DecimatorC2Ej(void) {
    ALOGD("_ZN6webrtc9DecimatorC2Ej() called");
    return 0;
}

/* Demangled: webrtc::AdjustConfig(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12AdjustConfigERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc12AdjustConfigERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::LateReverbLinearRegressor::Accumulate(float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor10AccumulateEf(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimator25LateReverbLinearRegressor10AccumulateEf() called");
    return 0;
}

/* Demangled: webrtc::Agc::set_target_level_dbfs(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc3Agc21set_target_level_dbfsEi(void) {
    ALOGD("_ZN6webrtc3Agc21set_target_level_dbfsEi() called");
    return 0;
}

/* Demangled: webrtc::Loudness2Db(double) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11Loudness2DbEd(void) {
    ALOGD("_ZN6webrtc11Loudness2DbEd() called");
    return 0;
}

/* Demangled: NsGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z14NsGetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z14NsGetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: webrtc::DominantNearendDetector::DominantNearendDetector(webrtc::EchoCanceller3Config::Suppressor::DominantNearendDetection const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23DominantNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj(void) {
    ALOGD("_ZN6webrtc23DominantNearendDetectorC2ERKNS_20EchoCanceller3Config10Suppressor24DominantNearendDetectionEj() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::~EchoCanceller3() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller3D0Ev(void) {
    ALOGD("_ZN6webrtc14EchoCanceller3D0Ev() called");
    return 0;
}

/* Demangled: webrtc::FilterAnalyzer::PreProcessFilters(rtc::ArrayView<std::__1::vector<float, std::__1::allocator<float> > const, -4711>) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FilterAnalyzer17PreProcessFiltersEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE(void) {
    ALOGD("_ZN6webrtc14FilterAnalyzer17PreProcessFiltersEN3rtc9ArrayViewIKNSt3__16vectorIfNS3_9allocatorIfEEEELin4711EEE() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::ErleInstantaneous::~ErleInstantaneous() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD2Ev(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator17ErleInstantaneousD2Ev() called");
    return 0;
}

/* Demangled: rtc::ScopedYieldPolicy::~ScopedYieldPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17ScopedYieldPolicyD2Ev(void) {
    ALOGD("_ZN3rtc17ScopedYieldPolicyD2Ev() called");
    return 0;
}

/* Demangled: Agc2SetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z16Agc2SetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z16Agc2SetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveModeLevelEstimator::AdaptiveModeLevelEstimator(webrtc::ApmDataDumper*, webrtc::AudioProcessing::Config::GainController2::LevelEstimator, bool, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf(void) {
    ALOGD("_ZN6webrtc26AdaptiveModeLevelEstimatorC2EPNS_13ApmDataDumperENS_15AudioProcessing6Config15GainController214LevelEstimatorEbf() called");
    return 0;
}

/* Demangled: rtc::strcpyn(char*, unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc7strcpynEPcjPKcj(void) {
    ALOGD("_ZN3rtc7strcpynEPcjPKcj() called");
    return 0;
}

/* Demangled: webrtc::Pffft::Pffft(unsigned int, webrtc::Pffft::FftType) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5PffftC1EjNS0_7FftTypeE(void) {
    ALOGD("_ZN6webrtc5PffftC1EjNS0_7FftTypeE() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::ReferenceDetectionValue(float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj(void) {
    ALOGD("_ZN6webrtc17TransientDetector23ReferenceDetectionValueEPKfj() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::set_analog_level_limits(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl23set_analog_level_limitsEii(void) {
    ALOGD("_ZN6webrtc15GainControlImpl23set_analog_level_limitsEii() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAgc_Analyze(void*, short const* const*, unsigned int, unsigned int, int, int*, short, unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17WebRtcAgc_AnalyzeEPvPKPKsjjiPisPhS5_(void) {
    ALOGD("_ZN6webrtc17WebRtcAgc_AnalyzeEPvPKPKsjjiPisPhS5_() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveAgc::~AdaptiveAgc() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11AdaptiveAgcD1Ev(void) {
    ALOGD("_ZN6webrtc11AdaptiveAgcD1Ev() called");
    return 0;
}

/* Demangled: rtc::SimpleStringBuilder::operator<<(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc19SimpleStringBuilderlsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc19SimpleStringBuilderlsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::SignalModelEstimator::Update(rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, rtc::ArrayView<float const, 129>, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20SignalModelEstimator6UpdateEN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff(void) {
    ALOGD("_ZN6webrtc20SignalModelEstimator6UpdateEN3rtc9ArrayViewIKfLi129EEES4_S4_S4_ff() called");
    return 0;
}

/* Demangled: rtc::Event::Set() */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc5Event3SetEv(void) {
    ALOGD("_ZN3rtc5Event3SetEv() called");
    return 0;
}

/* Demangled: webrtc::FullBandErleEstimator::UpdateQualityEstimates() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21FullBandErleEstimator22UpdateQualityEstimatesEv(void) {
    ALOGD("_ZN6webrtc21FullBandErleEstimator22UpdateQualityEstimatesEv() called");
    return 0;
}

/* Demangled: rtc::string_trim(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc11string_trimERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN3rtc11string_trimERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralFeaturesExtractor::ComputeAvgAndDerivatives(rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>, rtc::ArrayView<float, 6>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor24ComputeAvgAndDerivativesEN3rtc9ArrayViewIfLi6EEES4_S4_(void) {
    ALOGD("_ZNK6webrtc7rnn_vad25SpectralFeaturesExtractor24ComputeAvgAndDerivativesEN3rtc9ArrayViewIfLi6EEES4_S4_() called");
    return 0;
}

/* Demangled: webrtc::TransientDetector::TransientDetector(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17TransientDetectorC2Ei(void) {
    ALOGD("_ZN6webrtc17TransientDetectorC2Ei() called");
    return 0;
}

/* Demangled: rtc::ScopedYieldPolicy::ScopedYieldPolicy(rtc::YieldInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17ScopedYieldPolicyC1EPNS_14YieldInterfaceE(void) {
    ALOGD("_ZN3rtc17ScopedYieldPolicyC1EPNS_14YieldInterfaceE() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3::ProcessCapture(webrtc::AudioBuffer*, webrtc::AudioBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferES2_b(void) {
    ALOGD("_ZN6webrtc14EchoCanceller314ProcessCaptureEPNS_11AudioBufferES2_b() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<bool>::GetOptional() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIbE11GetOptionalEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIbE11GetOptionalEv() called");
    return 0;
}

/* Exported Object: rnnoise::kHiddenGruBias */
extern "C" __attribute__((visibility("default"))) void* _ZN7rnnoise14kHiddenGruBiasE = NULL;

/* Demangled: webrtc::SignalDependentErleEstimator::~SignalDependentErleEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28SignalDependentErleEstimatorD1Ev(void) {
    ALOGD("_ZN6webrtc28SignalDependentErleEstimatorD1Ev() called");
    return 0;
}

/* Demangled: webrtc::MatchedFilter::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13MatchedFilter5ResetEv(void) {
    ALOGD("_ZN6webrtc13MatchedFilter5ResetEv() called");
    return 0;
}

/* Demangled: webrtc::ReverbDecayEstimator::ReverbDecayEstimator(webrtc::EchoCanceller3Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20ReverbDecayEstimatorC2ERKNS_20EchoCanceller3ConfigE(void) {
    ALOGD("_ZN6webrtc20ReverbDecayEstimatorC2ERKNS_20EchoCanceller3ConfigE() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::UpdateHist(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram10UpdateHistEii(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram10UpdateHistEii() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::FullyConnectedLayer::FullyConnectedLayer(unsigned int, unsigned int, rtc::ArrayView<signed char const, -4711>, rtc::ArrayView<signed char const, -4711>, rtc::FunctionView<float (float)>, webrtc::rnn_vad::Optimization) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7rnn_vad19FullyConnectedLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE(void) {
    ALOGD("_ZN6webrtc7rnn_vad19FullyConnectedLayerC2EjjN3rtc9ArrayViewIKaLin4711EEES5_NS2_12FunctionViewIFffEEENS0_12OptimizationE() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_InitBinaryDelayEstimator(webrtc::BinaryDelayEstimator*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc31WebRtc_InitBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE(void) {
    ALOGD("_ZN6webrtc31WebRtc_InitBinaryDelayEstimatorEPNS_20BinaryDelayEstimatorE() called");
    return 0;
}

/* Demangled: webrtc::LevelEstimator::ProcessStream(webrtc::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14LevelEstimator13ProcessStreamERKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc14LevelEstimator13ProcessStreamERKNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: webrtc::MovingMax::MovingMax(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc9MovingMaxC1Ej(void) {
    ALOGD("_ZN6webrtc9MovingMaxC1Ej() called");
    return 0;
}

/* Demangled: WebRtcSpl_ResetResample16khzTo48khz */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ResetResample16khzTo48khz(void) {
    ALOGD("WebRtcSpl_ResetResample16khzTo48khz() called");
    return 0;
}

/* Demangled: webrtc::ErlEstimator::~ErlEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12ErlEstimatorD2Ev(void) {
    ALOGD("_ZN6webrtc12ErlEstimatorD2Ev() called");
    return 0;
}

/* Demangled: pffft_zconvolve_no_accu */
extern "C" __attribute__((visibility("default"))) int pffft_zconvolve_no_accu(void) {
    ALOGD("pffft_zconvolve_no_accu() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::CreateAndAttachAecDump(__sFILE*, long long, rtc::TaskQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpEP7__sFILExPN3rtc9TaskQueueE(void) {
    ALOGD("_ZN6webrtc19AudioProcessingImpl22CreateAndAttachAecDumpEP7__sFILExPN3rtc9TaskQueueE() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::~SincResampler() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResamplerD0Ev(void) {
    ALOGD("_ZN6webrtc13SincResamplerD0Ev() called");
    return 0;
}

/* Demangled: webrtc::AgcManagerDirect::AgcManagerDirect(webrtc::Agc*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEiii(void) {
    ALOGD("_ZN6webrtc16AgcManagerDirectC2EPNS_3AgcEiii() called");
    return 0;
}

/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(webrtc::AbstractFieldTrialEnum const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnumC1ERKS0_(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnumC1ERKS0_() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::Value() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ValueEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalINSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEE5ValueEv() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::~LoudnessHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogramD2Ev(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogramD2Ev() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Suppressor::MaskingThresholds::MaskingThresholds(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2Efff(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config10Suppressor17MaskingThresholdsC2Efff() called");
    return 0;
}

/* Demangled: webrtc::metrics::NumSamples(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics10NumSamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc7metrics10NumSamplesERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::VadAudioProc::PitchAnalysis(double*, double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j(void) {
    ALOGD("_ZN6webrtc12VadAudioProc13PitchAnalysisEPdS1_j() called");
    return 0;
}

/* Demangled: webrtc::FrameBlocker::FrameBlocker(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc12FrameBlockerC2Ejj(void) {
    ALOGD("_ZN6webrtc12FrameBlockerC2Ejj() called");
    return 0;
}

/* Demangled: webrtc::Subtractor::~Subtractor() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc10SubtractorD2Ev(void) {
    ALOGD("_ZN6webrtc10SubtractorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialFlag::FieldTrialFlag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc14FieldTrialFlagC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::optional<std::__1::optional<bool> > webrtc::ParseTypedParameter<std::__1::optional<bool> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19ParseTypedParameterINSt3__18optionalIbEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN6webrtc19ParseTypedParameterINSt3__18optionalIbEEEENS2_IT_EENS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: webrtc::GainController2::ApplyConfig(webrtc::AudioProcessing::Config::GainController2 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainController211ApplyConfigERKNS_15AudioProcessing6Config15GainController2E(void) {
    ALOGD("_ZN6webrtc15GainController211ApplyConfigERKNS_15AudioProcessing6Config15GainController2E() called");
    return 0;
}

/* Demangled: rtc::tokenize_append(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE(void) {
    ALOGD("_ZN3rtc15tokenize_appendERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEcPNS0_6vectorIS6_NS4_IS6_EEEE() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialParameter<int>::FieldTrialParameter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc19FieldTrialParameterIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi(void) {
    ALOGD("_ZN6webrtc19FieldTrialParameterIiEC1ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: webrtc::SignalClassifier::~SignalClassifier() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16SignalClassifierD2Ev(void) {
    ALOGD("_ZN6webrtc16SignalClassifierD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::unique_ptr<webrtc::metrics::SampleInfo, std::__1::default_delete<webrtc::metrics::SampleInfo> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_10unique_ptrIN6webrtc7metrics10SampleInfoENS_14default_deleteISB_EEEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE() called");
    return 0;
}

/* Demangled: webrtc::SincResampler::InitializeKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13SincResampler16InitializeKernelEv(void) {
    ALOGD("_ZN6webrtc13SincResampler16InitializeKernelEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::unique_ptr<webrtc::CascadedBiQuadFilter, std::__1::default_delete<webrtc::CascadedBiQuadFilter> >, std::__1::allocator<std::__1::unique_ptr<webrtc::CascadedBiQuadFilter, std::__1::default_delete<webrtc::CascadedBiQuadFilter> > > >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10unique_ptrIN6webrtc20CascadedBiQuadFilterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorINS_10unique_ptrIN6webrtc20CascadedBiQuadFilterENS_14default_deleteIS3_EEEENS_9allocatorIS6_EEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::PowApproximation(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc16PowApproximationEff(void) {
    ALOGD("_ZN6webrtc16PowApproximationEff() called");
    return 0;
}

/* Demangled: webrtc::RenderDelayControllerMetrics::ResetMetrics() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc28RenderDelayControllerMetrics12ResetMetricsEv(void) {
    ALOGD("_ZN6webrtc28RenderDelayControllerMetrics12ResetMetricsEv() called");
    return 0;
}

/* Demangled: webrtc::AbstractFieldTrialEnum::AbstractFieldTrialEnum(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, int> > >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc22AbstractFieldTrialEnumC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE(void) {
    ALOGD("_ZN6webrtc22AbstractFieldTrialEnumC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiNS1_3mapIS7_iNS1_4lessIS7_EENS5_INS1_4pairIKS7_iEEEEEE() called");
    return 0;
}

/* Demangled: webrtc::field_trial::InsertOrReplaceFieldTrialStringsInMap(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >*, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11field_trial37InsertOrReplaceFieldTrialStringsInMapEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEENS1_17basic_string_viewIcS5_EE(void) {
    ALOGD("_ZN6webrtc11field_trial37InsertOrReplaceFieldTrialStringsInMapEPNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEENS1_17basic_string_viewIcS5_EE() called");
    return 0;
}

/* Demangled: WebRtcSpl_LPBy2IntToInt */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_LPBy2IntToInt(void) {
    ALOGD("WebRtcSpl_LPBy2IntToInt() called");
    return 0;
}

/* Demangled: webrtc::WebRtc_AddBinaryFarSpectrum(webrtc::BinaryDelayEstimatorFarend*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc27WebRtc_AddBinaryFarSpectrumEPNS_26BinaryDelayEstimatorFarendEj(void) {
    ALOGD("_ZN6webrtc27WebRtc_AddBinaryFarSpectrumEPNS_26BinaryDelayEstimatorFarendEj() called");
    return 0;
}

/* Demangled: WebRtcSpl_VectorBitShiftW16 */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_VectorBitShiftW16(void) {
    ALOGD("WebRtcSpl_VectorBitShiftW16() called");
    return 0;
}

/* Demangled: WebRtcSpl_ComplexFFT */
extern "C" __attribute__((visibility("default"))) int WebRtcSpl_ComplexFFT(void) {
    ALOGD("WebRtcSpl_ComplexFFT() called");
    return 0;
}

/* Demangled: webrtc::AudioConverter::AudioConverter() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14AudioConverterC2Ev(void) {
    ALOGD("_ZN6webrtc14AudioConverterC2Ev() called");
    return 0;
}

/* Demangled: webrtc::InterpolatedGainCurve::LookUpGainToApply(float) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc21InterpolatedGainCurve17LookUpGainToApplyEf(void) {
    ALOGD("_ZNK6webrtc21InterpolatedGainCurve17LookUpGainToApplyEf() called");
    return 0;
}

/* Demangled: webrtc::rnn_vad::SpectralCorrelator::ComputeAutoCorrelation(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float, 20>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7rnn_vad18SpectralCorrelator22ComputeAutoCorrelationEN3rtc9ArrayViewIKfLin4711EEENS3_IfLi20EEE(void) {
    ALOGD("_ZNK6webrtc7rnn_vad18SpectralCorrelator22ComputeAutoCorrelationEN3rtc9ArrayViewIKfLin4711EEENS3_IfLi20EEE() called");
    return 0;
}

/* Demangled: webrtc::WPDNode::WPDNode(unsigned int, float const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7WPDNodeC2EjPKfj(void) {
    ALOGD("_ZN6webrtc7WPDNodeC2EjPKfj() called");
    return 0;
}

/* Demangled: webrtc::ApmDataDumper::ApmDataDumper(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13ApmDataDumperC1Ei(void) {
    ALOGD("_ZN6webrtc13ApmDataDumperC1Ei() called");
    return 0;
}

/* Demangled: webrtc::EchoControlMobileImpl::NumCancellersRequired(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21EchoControlMobileImpl21NumCancellersRequiredEjj(void) {
    ALOGD("_ZN6webrtc21EchoControlMobileImpl21NumCancellersRequiredEjj() called");
    return 0;
}

/* Exported Object: rnnoise::kOutputDenseWeights */
extern "C" __attribute__((visibility("default"))) void* _ZN7rnnoise19kOutputDenseWeightsE = NULL;

/* Demangled: pffft_next_power_of_two */
extern "C" __attribute__((visibility("default"))) int pffft_next_power_of_two(void) {
    ALOGD("pffft_next_power_of_two() called");
    return 0;
}

/* Demangled: webrtc::NoiseSuppressor::Analyze(webrtc::AudioBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15NoiseSuppressor7AnalyzeERKNS_11AudioBufferE(void) {
    ALOGD("_ZN6webrtc15NoiseSuppressor7AnalyzeERKNS_11AudioBufferE() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEj() called");
    return 0;
}

/* Demangled: webrtc::RmsLevel::AnalyzeMuted(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc8RmsLevel12AnalyzeMutedEj(void) {
    ALOGD("_ZN6webrtc8RmsLevel12AnalyzeMutedEj() called");
    return 0;
}

/* Demangled: webrtc::FieldTrialOptional<double>::operator bool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc18FieldTrialOptionalIdEcvbEv(void) {
    ALOGD("_ZNK6webrtc18FieldTrialOptionalIdEcvbEv() called");
    return 0;
}

/* Demangled: webrtc::LoudnessHistogram::RemoveOldestEntryAndUpdate() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17LoudnessHistogram26RemoveOldestEntryAndUpdateEv(void) {
    ALOGD("_ZN6webrtc17LoudnessHistogram26RemoveOldestEntryAndUpdateEv() called");
    return 0;
}

/* Demangled: rtc::ScopedYieldPolicy::ScopedYieldPolicy(rtc::YieldInterface*) */
extern "C" __attribute__((visibility("default"))) int _ZN3rtc17ScopedYieldPolicyC2EPNS_14YieldInterfaceE(void) {
    ALOGD("_ZN3rtc17ScopedYieldPolicyC2EPNS_14YieldInterfaceE() called");
    return 0;
}

/* Demangled: webrtc::GainControlImpl::Initialize(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc15GainControlImpl10InitializeEji(void) {
    ALOGD("_ZN6webrtc15GainControlImpl10InitializeEji() called");
    return 0;
}

/* Demangled: webrtc::metrics::SampleInfo::SampleInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc7metrics10SampleInfoC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij(void) {
    ALOGD("_ZN6webrtc7metrics10SampleInfoC2ERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEiij() called");
    return 0;
}

/* Demangled: webrtc::PushResampler<short>::InitializeIfNeeded(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc13PushResamplerIsE18InitializeIfNeededEiij(void) {
    ALOGD("_ZN6webrtc13PushResamplerIsE18InitializeIfNeededEiij() called");
    return 0;
}

/* Demangled: webrtc::Aec3Fft::PaddedFft(rtc::ArrayView<float const, -4711>, rtc::ArrayView<float const, -4711>, webrtc::Aec3Fft::Window, webrtc::FftData*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc7Aec3Fft9PaddedFftEN3rtc9ArrayViewIKfLin4711EEES4_NS0_6WindowEPNS_7FftDataE(void) {
    ALOGD("_ZNK6webrtc7Aec3Fft9PaddedFftEN3rtc9ArrayViewIKfLin4711EEES4_NS0_6WindowEPNS_7FftDataE() called");
    return 0;
}

/* Demangled: webrtc::RefinedFilterUpdateGain::Compute(std::__1::array<float, 65u> const&, webrtc::RenderSignalAnalyzer const&, webrtc::SubtractorOutput const&, rtc::ArrayView<float const, -4711>, unsigned int, bool, webrtc::FftData*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc23RefinedFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_16SubtractorOutputEN3rtc9ArrayViewIKfLin4711EEEjbPNS_7FftDataE(void) {
    ALOGD("_ZN6webrtc23RefinedFilterUpdateGain7ComputeERKNSt3__15arrayIfLj65EEERKNS_20RenderSignalAnalyzerERKNS_16SubtractorOutputEN3rtc9ArrayViewIKfLin4711EEEjbPNS_7FftDataE() called");
    return 0;
}

/* Demangled: webrtc::AudioProcessingImpl::num_input_channels() const */
extern "C" __attribute__((visibility("default"))) int _ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv(void) {
    ALOGD("_ZNK6webrtc19AudioProcessingImpl18num_input_channelsEv() called");
    return 0;
}

/* Demangled: webrtc::WebRtcAecm_ResetAdaptiveChannelNeon(webrtc::AecmCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc35WebRtcAecm_ResetAdaptiveChannelNeonEPNS_8AecmCoreE(void) {
    ALOGD("_ZN6webrtc35WebRtcAecm_ResetAdaptiveChannelNeonEPNS_8AecmCoreE() called");
    return 0;
}

/* Demangled: webrtc::NoiseEstimator::NoiseEstimator(webrtc::SuppressionParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc14NoiseEstimatorC1ERKNS_17SuppressionParamsE(void) {
    ALOGD("_ZN6webrtc14NoiseEstimatorC1ERKNS_17SuppressionParamsE() called");
    return 0;
}

/* Demangled: webrtc::AdaptiveFirFilter::AdaptiveFirFilter(unsigned int, unsigned int, unsigned int, unsigned int, webrtc::Aec3Optimization, webrtc::ApmDataDumper*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc17AdaptiveFirFilterC1EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE(void) {
    ALOGD("_ZN6webrtc17AdaptiveFirFilterC1EjjjjNS_16Aec3OptimizationEPNS_13ApmDataDumperE() called");
    return 0;
}

/* Demangled: webrtc::Pffft::ForwardTransform(webrtc::Pffft::FloatBuffer const&, webrtc::Pffft::FloatBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc5Pffft16ForwardTransformERKNS0_11FloatBufferEPS1_b(void) {
    ALOGD("_ZN6webrtc5Pffft16ForwardTransformERKNS0_11FloatBufferEPS1_b() called");
    return 0;
}

/* Demangled: webrtc::EchoCanceller3Config::Validate(webrtc::EchoCanceller3Config*) */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc20EchoCanceller3Config8ValidateEPS0_(void) {
    ALOGD("_ZN6webrtc20EchoCanceller3Config8ValidateEPS0_() called");
    return 0;
}

/* Demangled: webrtc::VoiceActivityDetector::~VoiceActivityDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc21VoiceActivityDetectorD2Ev(void) {
    ALOGD("_ZN6webrtc21VoiceActivityDetectorD2Ev() called");
    return 0;
}

/* Demangled: webrtc::BlockFramer::~BlockFramer() */
extern "C" __attribute__((visibility("default"))) int _ZN6webrtc11BlockFramerD2Ev(void) {
    ALOGD("_ZN6webrtc11BlockFramerD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}
