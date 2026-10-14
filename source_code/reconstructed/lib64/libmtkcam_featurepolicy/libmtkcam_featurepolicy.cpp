/*
 * Reverse-Engineered Source for: libmtkcam_featurepolicy.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_featurepolicy"

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
#include "libmtkcam_featurepolicy.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::getCaptureP1DmaConfig(unsigned int&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21getCaptureP1DmaConfigERjPKNS3_18RequestInputParamsEjb(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21getCaptureP1DmaConfigERjPKNS3_18RequestInputParamsEjb() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateCaptureSetting(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy22evaluateCaptureSettingEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy22evaluateCaptureSettingEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::queryVsdofP1YuvCropRect(int, android::sp<NSCam::v3::IImageStreamInfo>&, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23queryVsdofP1YuvCropRectEiRN7android2spINS0_16IImageStreamInfoEEERNS_5MRectE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23queryVsdofP1YuvCropRectEiRN7android2spINS0_16IImageStreamInfoEEERNS_5MRectE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::~FeatureSettingPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyD1Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE18__construct_at_endINS_14__bit_iteratorIS3_Lb0ELm0EEEEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: void std::__1::__sort<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::collectParsedStrategyInfo(NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy25collectParsedStrategyInfoERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy25collectParsedStrategyInfoERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FeatureSettingPolicy(NSCam::v3::pipeline::policy::featuresetting::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyC1ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyC1ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateBoostControl(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::BoostControl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy18updateBoostControlEPNS3_19RequestOutputParamsERKNS2_12BoostControlE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy18updateBoostControlEPNS3_19RequestOutputParamsERKNS2_12BoostControlE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::createFeatureSettingPolicyInstance(NSCam::v3::pipeline::policy::featuresetting::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting34createFeatureSettingPolicyInstanceERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting34createFeatureSettingPolicyInstanceERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::hash<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::equal_to<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FusionPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FusionPluginWraper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy18FusionPluginWraperENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy18FusionPluginWraperENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::RawPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::RawPluginWrapper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16RawPluginWrapperENS_9allocatorIS7_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateStreamData(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16updateStreamDataEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16updateStreamDataEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsEb() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::strategyNormalSingleCapture(long, long, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27strategyNormalSingleCaptureEllPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27strategyNormalSingleCaptureEllPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateStreamSetting(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21evaluateStreamSettingEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21evaluateStreamSettingEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsEb() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updatePolicyDecision(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, unsigned int, NSCam::NSPipelinePlugin::Policy::Decision const&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy20updatePolicyDecisionEPNS3_19RequestOutputParamsEjRKNS_16NSPipelinePlugin6Policy8DecisionEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy20updatePolicyDecisionEPNS3_19RequestOutputParamsEjRKNS_16NSPipelinePlugin6Policy8DecisionEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::hash<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::equal_to<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > > > >::__emplace_unique_key_args<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&>, std::__1::tuple<> >(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS_5tupleIJRKS9_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> const&>(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEE6cancelEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEE6cancelEv() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::pushSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEE13pushSelectionEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEE13pushSelectionEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::hash<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::equal_to<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_unaligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__116__copy_unalignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Demangled: std::__1::vector<bool, std::__1::allocator<bool> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIbNS_9allocatorIbEEE7reserveEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::~FeatureSettingPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyD2Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::YuvPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::YuvPluginWrapper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16YuvPluginWrapperENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16YuvPluginWrapperENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::BokehPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::BokehPluginWraper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17BokehPluginWraperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17BokehPluginWraperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::~PluginWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEED2Ev(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEED2Ev() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::keepSelection(unsigned int, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>&) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEE13keepSelectionEjRNSt3__110shared_ptrINS4_9IProviderEEERNS7_INS4_9SelectionEEE(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEE13keepSelectionEjRNSt3__110shared_ptrINS4_9IProviderEEERNS7_INS4_9SelectionEEE() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEE6cancelEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEE6cancelEv() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::keepSelection(unsigned int, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>&) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEE13keepSelectionEjRNSt3__110shared_ptrINS4_9IProviderEEERNS7_INS4_9SelectionEEE(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEE13keepSelectionEjRNSt3__110shared_ptrINS4_9IProviderEEERNS7_INS4_9SelectionEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::resetSuperNightDecisionStatus(NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy29resetSuperNightDecisionStatusEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy29resetSuperNightDecisionStatusEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::YuvPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::YuvPluginWrapper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16YuvPluginWrapperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16YuvPluginWrapperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::IMetadata> const&>(std::__1::shared_ptr<NSCam::IMetadata> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::YuvPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::YuvPluginWrapper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16YuvPluginWrapperENS_9allocatorIS7_EEEE = NULL;

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::pushSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEE13pushSelectionEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEE13pushSelectionEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::DepthPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::DepthPluginWraper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17DepthPluginWraperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17DepthPluginWraperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::pushSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEE13pushSelectionEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3YuvEEEE13pushSelectionEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::isMasterSensorId(NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16isMasterSensorIdEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16isMasterSensorIdEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateCaptureDebugInfo(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy22updateCaptureDebugInfoEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy22updateCaptureDebugInfoEPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateDualCamRequestOutputParams(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, std::__1::shared_ptr<NSCam::IMetadata>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int, unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy32updateDualCamRequestOutputParamsEPNS3_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEESA_jjl(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy32updateDualCamRequestOutputParamsEPNS3_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEESA_jjl() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::MFPPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::MFPPluginWrapper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16MFPPluginWrapperENS_9allocatorIS7_EEEE = NULL;

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::~PluginWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEED2Ev(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::queryVsdofSensorCropRect(int, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24queryVsdofSensorCropRectEiPKNS3_18RequestInputParamsERNS_5MRectE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24queryVsdofSensorCropRectEiPKNS3_18RequestInputParamsERNS_5MRectE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, unsigned int> >(unsigned int const&, std::__1::pair<unsigned int const, unsigned int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJNS_4pairIKjjEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJNS_4pairIKjjEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::shared_ptr<NSCam::IMetadata>, std::__1::allocator<std::__1::shared_ptr<NSCam::IMetadata> > >::__append(unsigned long, std::__1::shared_ptr<NSCam::IMetadata> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE8__appendEmRKS4_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam9IMetadataEEENS_9allocatorIS4_EEE8__appendEmRKS4_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::queryPolicyState(NSCam::NSPipelinePlugin::Policy::State&, unsigned int, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo const&, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams const*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16queryPolicyStateERNS_16NSPipelinePlugin6Policy5StateEjRKNS3_18ParsedStrategyInfoEPKNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16queryPolicyStateERNS_16NSPipelinePlugin6Policy5StateEjRKNS3_18ParsedStrategyInfoEPKNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::dumpRequestOutputParams(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23dumpRequestOutputParamsEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23dumpRequestOutputParamsEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsEb() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&> >, bool (NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*)>::operator()(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*&&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EEclEOSA_OSD_(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EEclEOSA_OSD_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::hash<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::equal_to<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0> std::__1::__copy_aligned<std::__1::vector<bool, std::__1::allocator<bool> >, false>(std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>, std::__1::__bit_iterator<std::__1::vector<bool, std::__1::allocator<bool> >, false, 0>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_(void) {
    ALOGD("_ZNSt3__114__copy_alignedINS_6vectorIbNS_9allocatorIbEEEELb0EEENS_14__bit_iteratorIT_Lb0EXLi0EEEENS5_IS6_XT0_EXLi0EEEES8_S7_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, debug_exif_module_info>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, debug_exif_module_info> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, debug_exif_module_info>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj22debug_exif_module_infoEENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&> >, bool (NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::isNeedIsoReconfig(NSCam::HDRMode*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17isNeedIsoReconfigEPNS_7HDRModeEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17isNeedIsoReconfigEPNS_7HDRModeEj() called");
    return 0;
}

/* Demangled: void std::__1::__sort<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateMultiCamStreamingData(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27updateMultiCamStreamingDataEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27updateMultiCamStreamingDataEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::MFPPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::MFPPluginWrapper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16MFPPluginWrapperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16MFPPluginWrapperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateRequest(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy15evaluateRequestEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy15evaluateRequestEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateStreamConfiguration(NSCam::v3::pipeline::policy::featuresetting::ConfigurationOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ConfigurationInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27evaluateStreamConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27evaluateStreamConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::RawPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::RawPluginWrapper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16RawPluginWrapperENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16RawPluginWrapperENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEE9SelectionEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::DepthPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::DepthPluginWraper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17DepthPluginWraperENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FusionPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FusionPluginWraper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy18FusionPluginWraperENS_9allocatorIS7_EEEE = NULL;

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::~PluginWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEED2Ev(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::pushSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEE13pushSelectionEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEE13pushSelectionEv() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::~PluginWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEED2Ev(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateCaptureConfiguration(NSCam::v3::pipeline::policy::featuresetting::ConfigurationOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ConfigurationInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy28evaluateCaptureConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy28evaluateCaptureConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&> >, bool (NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*)>::__clone(std::__1::__function::__base<bool (NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE7__cloneEPNS0_6__baseISS_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE7__cloneEPNS0_6__baseISS_EE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE9SelectionEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::~PluginWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEED2Ev(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateRequestResultParams(std::__1::shared_ptr<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams>&, std::__1::shared_ptr<NSCam::IMetadata>, std::__1::shared_ptr<NSCam::IMetadata>, unsigned int, unsigned int, long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy25updateRequestResultParamsERNSt3__110shared_ptrINS3_19RequestResultParamsEEENS6_INS_9IMetadataEEESB_jjlii(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy25updateRequestResultParamsERNSt3__110shared_ptrINS3_19RequestResultParamsEEENS6_INS_9IMetadataEEESB_jjlii() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateRequestOutputAllFramesMetadata(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, std::__1::shared_ptr<NSCam::IMetadata>, std::__1::shared_ptr<NSCam::IMetadata>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy36updateRequestOutputAllFramesMetadataEPNS3_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEESA_(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy36updateRequestOutputAllFramesMetadataEPNS3_19RequestOutputParamsENSt3__110shared_ptrINS_9IMetadataEEESA_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::IMetadata> > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::shared_ptr<NSCam::IMetadata> > >(unsigned int const&, std::__1::pair<unsigned int const, std::__1::shared_ptr<NSCam::IMetadata> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam9IMetadataEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FusionPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FusionPluginWraper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy18FusionPluginWraperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy18FusionPluginWraperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::pipeline::policy::BoostControl, std::__1::allocator<NSCam::v3::pipeline::policy::BoostControl> >::__push_back_slow_path<NSCam::v3::pipeline::policy::BoostControl const&>(NSCam::v3::pipeline::policy::BoostControl const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame> >::pushSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEE13pushSelectionEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEEEE13pushSelectionEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::createSuperNightDecision() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24createSuperNightDecisionEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24createSuperNightDecisionEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEE9IProviderEEENS_9allocatorIS8_EEE6assignIPS8_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS8_NS_15iterator_traitsISF_E9referenceEEE5valueEvE4typeESF_SF_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::pushSelection() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEE13pushSelectionEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEE13pushSelectionEv() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5DepthEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateVhdrDummyFrames(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21updateVhdrDummyFramesEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21updateVhdrDummyFramesEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::appendSuperNightDecisionSetting(std::__1::shared_ptr<NSCam::IMetadata>, std::__1::shared_ptr<NSCam::IMetadata>, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy31appendSuperNightDecisionSettingENSt3__110shared_ptrINS_9IMetadataEEES8_PNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy31appendSuperNightDecisionSettingENSt3__110shared_ptrINS_9IMetadataEEES8_PNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&> >, bool (NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::hash<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > >, std::__1::equal_to<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection> > > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned int>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned int> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjjEENS_22__unordered_map_hasherIjS2_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS2_NS_8equal_toIjEELb1EEENS_9allocatorIS2_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned long, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEmRKj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEmRKj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::appendMulticamHalMeta(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21appendMulticamHalMetaEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21appendMulticamHalMetaEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::getCaptureProvidersByScenarioFeatures(NSCam::v3::pipeline::policy::featuresetting::ConfigurationOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ConfigurationInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy37getCaptureProvidersByScenarioFeaturesEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy37getCaptureProvidersByScenarioFeaturesEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::strategySingleRawPlugin(long, long, long&, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23strategySingleRawPluginEllRlPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23strategySingleRawPluginEllRlPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&> >, bool (NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::toTPIDualHint(NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy13toTPIDualHintERNS2_11scenariomgr12ScenarioHintE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy13toTPIDualHintERNS2_11scenariomgr12ScenarioHintE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateZslConfiguration(NSCam::v3::pipeline::policy::featuresetting::ConfigurationOutputParams&, NSCam::v3::pipeline::policy::featuresetting::ConfigurationInputParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24evaluateZslConfigurationERNS3_25ConfigurationOutputParamsERKNS3_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24evaluateZslConfigurationERNS3_25ConfigurationOutputParamsERKNS3_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&>, std::__1::allocator<std::__1::__bind<bool (NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::*)(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*), NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy*, std::__1::placeholders::__ph<1> const&, std::__1::placeholders::__ph<2> const&> >, bool (NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIMN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyEFbPNS7_19RequestOutputParamsEPKNS7_18RequestInputParamsEEJPS8_RKNS_12placeholders4__phILi1EEERKNSI_ILi2EEEEEENS_9allocatorISP_EEFbSA_SD_EE7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::__sort<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_5BokehEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::RequestResultParams> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting19RequestResultParamsENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateConfiguration(NSCam::v3::pipeline::policy::featuresetting::ConfigurationOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ConfigurationInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21evaluateConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21evaluateConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::strategyMultiFramePlugin(long, long, long&, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24strategyMultiFramePluginEllRlPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24strategyMultiFramePluginEllRlPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi() called");
    return 0;
}

/* Demangled: void std::__1::__sort<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__16__sortIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::strategyDualCamPlugin(long, long, long&, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21strategyDualCamPluginEllRlPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21strategyDualCamPluginEllRlPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::~FeatureSettingPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyD0Ev(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::RawPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::RawPluginWrapper> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16RawPluginWrapperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16RawPluginWrapperENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::BokehPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::BokehPluginWraper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17BokehPluginWraperENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17BokehPluginWraperENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::DepthPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::DepthPluginWraper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17DepthPluginWraperENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17DepthPluginWraperENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy12BoostControlENS_9allocatorIS5_EEE6assignIPS5_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updatePluginSelection(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21updatePluginSelectionEb(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy21updatePluginSelectionEb() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::updateCaptureDummyFrames(long, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo const&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24updateCaptureDummyFramesElPNS3_19RequestOutputParamsERKNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy24updateCaptureDummyFramesElPNS3_19RequestOutputParamsERKNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEE6cancelEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_6FusionEEEE6cancelEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::strategyCaptureFeature(long, long, NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ParsedStrategyInfo&, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy22strategyCaptureFeatureEllPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy22strategyCaptureFeatureEllPNS3_19RequestOutputParamsERNS3_18ParsedStrategyInfoEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3YuvEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::BokehPluginWraper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::BokehPluginWraper> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy17BokehPluginWraperENS_9allocatorIS7_EEEE = NULL;

/* Demangled: bool std::__1::__insertion_sort_incomplete<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEbT0_SO_T_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateReconfiguration(NSCam::v3::pipeline::policy::featuresetting::RequestOutputParams*, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23evaluateReconfigurationEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy23evaluateReconfigurationEPNS3_19RequestOutputParamsEPKNS3_18RequestInputParamsE() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_3RawEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEvT0_SO_T_() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::~PluginWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEED2Ev(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEED2Ev() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Depth> >::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEE6cancelEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5DepthEEEE6cancelEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::evaluateVhdrConfiguration(NSCam::v3::pipeline::policy::featuresetting::ConfigurationOutputParams*, NSCam::v3::pipeline::policy::featuresetting::ConfigurationInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy25evaluateVhdrConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy25evaluateVhdrConfigurationEPNS3_25ConfigurationOutputParamsEPKNS3_24ConfigurationInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::FeatureSettingPolicy(NSCam::v3::pipeline::policy::featuresetting::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyC2ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicyC2ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEEC2ERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEiimi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::MFPPluginWrapper, std::__1::allocator<NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::MFPPluginWrapper> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16MFPPluginWrapperENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy16MFPPluginWrapperENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw> >::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEE6cancelEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_3RawEEEE6cancelEv() called");
    return 0;
}

/* Demangled: PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Bokeh> >::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEE6cancelEv(void) {
    ALOGD("_ZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS1_5BokehEEEE6cancelEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::__unordered_map_hasher<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::hash<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::__unordered_map_equal<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > >, std::__1::equal_to<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::IProvider>, std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Raw>::Selection> > > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3RawEE9IProviderEEENS_6vectorINS2_INS7_9SelectionEEENS_9allocatorISC_EEEEEENS_22__unordered_map_hasherIS9_SG_NS_4hashIS9_EELb1EEENS_21__unordered_map_equalIS9_SG_NS_8equal_toIS9_EELb1EEENSD_ISG_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::featuresetting::FeatureSettingPolicy::queryVsdof3APreviewCropRect(int, NSCam::v3::pipeline::policy::featuresetting::RequestInputParams const*, NSCam::MRect&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27queryVsdof3APreviewCropRectEiPKNS3_18RequestInputParamsERNS_5MRectE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy14featuresetting20FeatureSettingPolicy27queryVsdof3APreviewCropRectEiPKNS3_18RequestInputParamsERNS_5MRectE() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider>*, PluginWrapper<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion> >::PluginWrapper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, unsigned long, int)::{lambda(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Fusion>::IProvider> const&)#1}&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRZN13PluginWrapperIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_6FusionEEEEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiimiEUlRKNS_10shared_ptrINS6_9IProviderEEESK_E_PSI_EEjT0_SO_SO_T_() called");
    return 0;
}
