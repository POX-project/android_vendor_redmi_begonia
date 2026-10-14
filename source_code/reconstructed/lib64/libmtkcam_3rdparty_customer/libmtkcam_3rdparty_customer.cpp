/*
 * Reverse-Engineered Source for: libmtkcam_3rdparty.customer.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_3rdparty_customer"

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
#include "libmtkcam_3rdparty_customer.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ALTEK_LDC_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::ALTEK_LDC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_PluginC1Ev(void) {
    ALOGD("_ZN16ALTEK_LDC_PluginC1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE16S_AiBokeh_PluginEE = NULL;

/* Exported Object: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex = NULL;

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: AltekLdc::~AltekLdc() */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdcD0Ev(void) {
    ALOGD("_ZN8AltekLdcD0Ev() called");
    return 0;
}

/* Demangled: int std::__1::uniform_int_distribution<int>::operator()<std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul> >(std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul>&, std::__1::uniform_int_distribution<int>::param_type const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE(void) {
    ALOGD("_ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin8propertyEv(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::~ALTEK_LDC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_PluginD2Ev(void) {
    ALOGD("_ZN16ALTEK_LDC_PluginD2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_features_table_by_scenario(int, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE() called");
    return 0;
}

/* Demangled: AltekLdc::AltekLdc() */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdcC1Ev(void) {
    ALOGD("_ZN8AltekLdcC1Ev() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin8drawMaskEPN5NSCam12IImageBufferEffff() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: ArcsoftDeflicker::~ArcsoftDeflicker() */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflickerD1Ev(void) {
    ALOGD("_ZN16ArcsoftDeflickerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: AltekLdc::~AltekLdc() */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdcD2Ev(void) {
    ALOGD("_ZN8AltekLdcD2Ev() called");
    return 0;
}

/* Demangled: ArcsoftDeflicker::ArcsoftDeflicker() */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflickerC2Ev(void) {
    ALOGD("_ZN16ArcsoftDeflickerC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::getEvSettingByHint(unsigned int, unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18getEvSettingByHintEjjRi(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18getEvSettingByHintEjjRi() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&>(int const&, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for AltekLdc */
extern "C" __attribute__((visibility("default"))) void* _ZTV8AltekLdc = NULL;

/* Demangled: S_Deflicker_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN18S_Deflicker_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: AltekLdc::initAnyPowerWoi(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdc15initAnyPowerWoiEjjN10NSAltekLdc12AltekLdcSizeEifi(void) {
    ALOGD("_ZN8AltekLdc15initAnyPowerWoiEjjN10NSAltekLdc12AltekLdcSizeEifi() called");
    return 0;
}

/* Demangled: ArcsoftDeflicker::init() */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflicker4initEv(void) {
    ALOGD("_ZN16ArcsoftDeflicker4initEv() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_AiBokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z38_CreatePluginProvider_S_AiBokeh_Pluginv(void) {
    ALOGD("_Z38_CreatePluginProvider_S_AiBokeh_Pluginv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: NSCam::v3::pipeline::policy::scenariomgr::gIsLowMemoryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline6policy11scenariomgr18gIsLowMemoryDeviceE = NULL;

/* Demangled: S_Deflicker_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN18S_Deflicker_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::getCurrent3AInfo(NSCam::v3::pipeline::policy::supernightevdecision::Current3AInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision16getCurrent3AInfoERNS3_13Current3AInfoE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision16getCurrent3AInfoERNS3_13Current3AInfoE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::updateFaceMetaData(NSCam::IMetadata*, NSCam::IMetadata*, NSCam::IImageBuffer*, alLDC_FACE_INFO) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin18updateFaceMetaDataEPN5NSCam9IMetadataES2_PNS0_12IImageBufferE15alLDC_FACE_INFO(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin18updateFaceMetaDataEPN5NSCam9IMetadataES2_PNS0_12IImageBufferE15alLDC_FACE_INFO() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: ALTEK_LDC_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin4copyEPKN5NSCam12IImageBufferEPS1_() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::~S_Deflicker_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_PluginD1Ev(void) {
    ALOGD("_ZN18S_Deflicker_PluginD1Ev() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex = NULL;

/* Demangled: AltekLdc::init(NSAltekLdc::AltekLdcSize, NSAltekLdc::AltekLdcSize, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdc4initEN10NSAltekLdc12AltekLdcSizeES1_iPKc(void) {
    ALOGD("_ZN8AltekLdc4initEN10NSAltekLdc12AltekLdcSizeES1_iPKc() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_(void) {
    ALOGD("_ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin3setEii(void) {
    ALOGD("_ZN18S_Deflicker_Plugin3setEii() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::S_Deflicker_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_PluginC2Ev(void) {
    ALOGD("_ZN18S_Deflicker_PluginC2Ev() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::~S_AiBokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_PluginD1Ev(void) {
    ALOGD("_ZN16S_AiBokeh_PluginD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::evaluateEvDecision(NSCam::v3::pipeline::policy::evdecision::DecisionOutputParams*, NSCam::v3::pipeline::policy::evdecision::DecisionInputParams const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18evaluateEvDecisionEPNS2_10evdecision20DecisionOutputParamsEPKNS5_19DecisionInputParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18evaluateEvDecisionEPNS2_10evdecision20DecisionOutputParamsEPKNS5_19DecisionInputParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::getSupportedFramesCountByState(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision30getSupportedFramesCountByStateEjRj(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision30getSupportedFramesCountByStateEjRj() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: _CreatePluginProvider_ALTEK_LDC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z38_CreatePluginProvider_ALTEK_LDC_Pluginv(void) {
    ALOGD("_Z38_CreatePluginProvider_ALTEK_LDC_Pluginv() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin6uninitEv(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin6uninitEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: ArcsoftDeflicker::process(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflicker7processEP20__tag_ASVL_OFFSCREENS1_(void) {
    ALOGD("_ZN16ArcsoftDeflicker7processEP20__tag_ASVL_OFFSCREENS1_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: S_AiBokeh_Plugin::S_AiBokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_PluginC2Ev(void) {
    ALOGD("_ZN16S_AiBokeh_PluginC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin6uninitEv(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin4copyEPKN5NSCam12IImageBufferEPS1_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin8propertyEv(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::initBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin9initBokehEv(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin9initBokehEv() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::~ALTEK_LDC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_PluginD1Ev(void) {
    ALOGD("_ZN16ALTEK_LDC_PluginD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_streaming_config(int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures const&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::ALTEK_LDC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_PluginC2Ev(void) {
    ALOGD("_ZN16ALTEK_LDC_PluginC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: ArcsoftDeflicker::~ArcsoftDeflicker() */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflickerD0Ev(void) {
    ALOGD("_ZN16ArcsoftDeflickerD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for ALTEK_LDC_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV16ALTEK_LDC_Plugin = NULL;

/* Demangled: S_Deflicker_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN18S_Deflicker_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin8propertyEv(void) {
    ALOGD("_ZN18S_Deflicker_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: AltekLdc::~AltekLdc() */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdcD1Ev(void) {
    ALOGD("_ZN8AltekLdcD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: ArcsoftDeflicker::ArcsoftDeflicker() */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflickerC1Ev(void) {
    ALOGD("_ZN16ArcsoftDeflickerC1Ev() called");
    return 0;
}

/* Demangled: XiaoMi::getBokehLevel(NSCam::IMetadata*, int&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf(void) {
    ALOGD("_ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf() called");
    return 0;
}

/* Exported Object: vtable for S_AiBokeh_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV16S_AiBokeh_Plugin = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::updateFpcMetaData(NSCam::IMetadata*, NSCam::IMetadata*, alLDC_FPC_DATA_T) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin17updateFpcMetaDataEPN5NSCam9IMetadataES2_16alLDC_FPC_DATA_T(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin17updateFpcMetaDataEPN5NSCam9IMetadataES2_16alLDC_FPC_DATA_T() called");
    return 0;
}

/* Demangled: AltekLdc::process_ldc(unsigned char*, unsigned char*, alLDC_FACE_INFO*, bool*, NSAltekLdc::AltekLdcRect, alLDC_FPC_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdc11process_ldcEPhS0_P15alLDC_FACE_INFOPbN10NSAltekLdc12AltekLdcRectEP16alLDC_FPC_DATA_T(void) {
    ALOGD("_ZN8AltekLdc11process_ldcEPhS0_P15alLDC_FACE_INFOPbN10NSAltekLdc12AltekLdcRectEP16alLDC_FPC_DATA_T() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: S_Deflicker_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin4initEv(void) {
    ALOGD("_ZN18S_Deflicker_Plugin4initEv() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18S_Deflicker_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void) {
    ALOGD("_ZNK18S_Deflicker_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::matchFormat(NSCam::EImageFormat) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18S_Deflicker_Plugin11matchFormatEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZNK18S_Deflicker_Plugin11matchFormatEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::matchFormat(NSCam::EImageFormat) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16ALTEK_LDC_Plugin11matchFormatEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZNK16ALTEK_LDC_Plugin11matchFormatEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: AltekLdc::AltekLdc() */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdcC2Ev(void) {
    ALOGD("_ZN8AltekLdcC2Ev() called");
    return 0;
}

/* Exported Object: vtable for S_Deflicker_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV18S_Deflicker_Plugin = NULL;

/* Demangled: S_AiBokeh_Plugin::uninitBokeh() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin11uninitBokehEv(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin11uninitBokehEv() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Exported Object: NSCam::v3::pipeline::policy::scenariomgr::gForceCustomerScenarioMgr */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline6policy11scenariomgr25gForceCustomerScenarioMgrE = NULL;

/* Demangled: ALTEK_LDC_Plugin::getFaceInfo(NSCam::IMetadata*, NSCam::IImageBuffer*, alLDC_FACE_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin11getFaceInfoEPN5NSCam9IMetadataEPNS0_12IImageBufferEP15alLDC_FACE_INFO(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin11getFaceInfoEPN5NSCam9IMetadataEPNS0_12IImageBufferEP15alLDC_FACE_INFO() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16ALTEK_LDC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void) {
    ALOGD("_ZNK16ALTEK_LDC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE = NULL;

/* Demangled: ArcsoftDeflicker::~ArcsoftDeflicker() */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflickerD2Ev(void) {
    ALOGD("_ZN16ArcsoftDeflickerD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: ArcsoftDeflicker::CopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflicker9CopyImageEP20__tag_ASVL_OFFSCREENS1_(void) {
    ALOGD("_ZN16ArcsoftDeflicker9CopyImageEP20__tag_ASVL_OFFSCREENS1_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin3setEii(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin3setEii() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void) {
    ALOGD("_ZN18S_Deflicker_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void) {
    ALOGD("_ZN18S_Deflicker_Plugin8drawMaskEPN5NSCam12IImageBufferEffff() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE16ALTEK_LDC_PluginEE = NULL;

/* Demangled: AltekLdc::allocBufAndReadFromFile(char const*, void**, long*) */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdc23allocBufAndReadFromFileEPKcPPvPl(void) {
    ALOGD("_ZN8AltekLdc23allocBufAndReadFromFileEPKcPPvPl() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::CustomSuperNightEvDecision(NSCam::v3::pipeline::policy::evdecision::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC1ERKNS2_10evdecision14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC1ERKNS2_10evdecision14CreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_capture_config_by_scenario(int, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE() called");
    return 0;
}

/* Demangled: AltekLdc::doInitWoi(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, unsigned int*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdc9doInitWoiEjjN10NSAltekLdc12AltekLdcSizeEiPjf(void) {
    ALOGD("_ZN8AltekLdc9doInitWoiEjjN10NSAltekLdc12AltekLdcSizeEiPjf() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::~S_Deflicker_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_PluginD0Ev(void) {
    ALOGD("_ZN18S_Deflicker_PluginD0Ev() called");
    return 0;
}

/* Exported Object: vtable for ArcsoftDeflicker */
extern "C" __attribute__((visibility("default"))) void* _ZTV16ArcsoftDeflicker = NULL;

/* Demangled: S_AiBokeh_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::matchFormat(NSCam::EImageFormat) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16S_AiBokeh_Plugin11matchFormatEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZNK16S_AiBokeh_Plugin11matchFormatEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE18S_Deflicker_PluginEE = NULL;

/* Demangled: ArcsoftDeflicker::setOffScreen(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflicker12setOffScreenEP20__tag_ASVL_OFFSCREENS1_(void) {
    ALOGD("_ZN16ArcsoftDeflicker12setOffScreenEP20__tag_ASVL_OFFSCREENS1_() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable = NULL;

/* Demangled: S_AiBokeh_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin3setEii(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin3setEii() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::reprocessTriggered() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18reprocessTriggeredEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18reprocessTriggeredEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::CaptureParam_T, std::__1::allocator<NS3Av3::CaptureParam_T> >::__push_back_slow_path<NS3Av3::CaptureParam_T const&>(NS3Av3::CaptureParam_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6NS3Av314CaptureParam_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6NS3Av314CaptureParam_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: ArcsoftDeflicker::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN16ArcsoftDeflicker6uninitEv(void) {
    ALOGD("_ZN16ArcsoftDeflicker6uninitEv() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::S_Deflicker_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_PluginC1Ev(void) {
    ALOGD("_ZN18S_Deflicker_PluginC1Ev() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::~S_AiBokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_PluginD0Ev(void) {
    ALOGD("_ZN16S_AiBokeh_PluginD0Ev() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16S_AiBokeh_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void) {
    ALOGD("_ZNK16S_AiBokeh_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::sensorcontrol::customer_decision_sensor_control(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy13sensorcontrol32customer_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy13sensorcontrol32customer_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_Plugin4initEv(void) {
    ALOGD("_ZN16ALTEK_LDC_Plugin4initEv() called");
    return 0;
}

/* Demangled: AltekLdc::initWoiFromInput(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdc16initWoiFromInputEjjN10NSAltekLdc12AltekLdcSizeEif(void) {
    ALOGD("_ZN8AltekLdc16initWoiFromInputEjjN10NSAltekLdc12AltekLdcSizeEif() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: S_Deflicker_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN18S_Deflicker_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::S_AiBokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_PluginC1Ev(void) {
    ALOGD("_ZN16S_AiBokeh_PluginC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::attach(unsigned int, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE6attachEjPKcS5_(void) {
    ALOGD("_ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE6attachEjPKcS5_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: _CreatePluginProvider_S_Deflicker_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z40_CreatePluginProvider_S_Deflicker_Pluginv(void) {
    ALOGD("_Z40_CreatePluginProvider_S_Deflicker_Pluginv() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN18S_Deflicker_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void) {
    ALOGD("_ZN18S_Deflicker_Plugin4copyEPKN5NSCam12IImageBufferEPS1_() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::~S_Deflicker_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_PluginD2Ev(void) {
    ALOGD("_ZN18S_Deflicker_PluginD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: AltekLdc::initFixedWoi(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, float) */
extern "C" __attribute__((visibility("default"))) int _ZN8AltekLdc12initFixedWoiEjjN10NSAltekLdc12AltekLdcSizeEif(void) {
    ALOGD("_ZN8AltekLdc12initFixedWoiEjjN10NSAltekLdc12AltekLdcSizeEif() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: S_Deflicker_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN18S_Deflicker_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin8drawMaskEPN5NSCam12IImageBufferEffff() called");
    return 0;
}

/* Demangled: ALTEK_LDC_Plugin::~ALTEK_LDC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16ALTEK_LDC_PluginD0Ev(void) {
    ALOGD("_ZN16ALTEK_LDC_PluginD0Ev() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_Plugin4initEv(void) {
    ALOGD("_ZN16S_AiBokeh_Plugin4initEv() called");
    return 0;
}

/* Demangled: S_AiBokeh_Plugin::~S_AiBokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN16S_AiBokeh_PluginD2Ev(void) {
    ALOGD("_ZN16S_AiBokeh_PluginD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: S_Deflicker_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_Deflicker_Plugin6uninitEv(void) {
    ALOGD("_ZN18S_Deflicker_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::CustomSuperNightEvDecision(NSCam::v3::pipeline::policy::evdecision::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC2ERKNS2_10evdecision14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC2ERKNS2_10evdecision14CreationParamsE() called");
    return 0;
}
