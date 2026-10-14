/*
 * Reverse-Engineered ABI Specification for: libmtkcam_3rdparty.customer.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_3rdparty.customer.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_3RDPARTY_CUSTOMER_H
#define BEGONIA_RE_LIBMTKCAM_3RDPARTY_CUSTOMER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN16ALTEK_LDC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: ALTEK_LDC_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16ALTEK_LDC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN16ALTEK_LDC_PluginC1Ev */
/* Demangled: ALTEK_LDC_Plugin::ALTEK_LDC_Plugin() */
int _ZN16ALTEK_LDC_PluginC1Ev(void);

/* Symbol: _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE16S_AiBokeh_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE16S_AiBokeh_PluginEE;

/* Symbol: _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex;

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN8AltekLdcD0Ev */
/* Demangled: AltekLdc::~AltekLdc() */
int _ZN8AltekLdcD0Ev(void);

/* Symbol: _ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE */
/* Demangled: int std::__1::uniform_int_distribution<int>::operator()<std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul> >(std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul>&, std::__1::uniform_int_distribution<int>::param_type const&) */
int _ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin8propertyEv */
/* Demangled: ALTEK_LDC_Plugin::property() */
int _ZN16ALTEK_LDC_Plugin8propertyEv(void);

/* Symbol: _ZN16ALTEK_LDC_PluginD2Ev */
/* Demangled: ALTEK_LDC_Plugin::~ALTEK_LDC_Plugin() */
int _ZN16ALTEK_LDC_PluginD2Ev(void);

/* Symbol: _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_features_table_by_scenario(int, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE(void);

/* Symbol: _ZN8AltekLdcC1Ev */
/* Demangled: AltekLdc::AltekLdc() */
int _ZN8AltekLdcC1Ev(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin8drawMaskEPN5NSCam12IImageBufferEffff */
/* Demangled: ALTEK_LDC_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
int _ZN16ALTEK_LDC_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN16ArcsoftDeflickerD1Ev */
/* Demangled: ArcsoftDeflicker::~ArcsoftDeflicker() */
int _ZN16ArcsoftDeflickerD1Ev(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN8AltekLdcD2Ev */
/* Demangled: AltekLdc::~AltekLdc() */
int _ZN8AltekLdcD2Ev(void);

/* Symbol: _ZN16ArcsoftDeflickerC2Ev */
/* Demangled: ArcsoftDeflicker::ArcsoftDeflicker() */
int _ZN16ArcsoftDeflickerC2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18getEvSettingByHintEjjRi */
/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::getEvSettingByHint(unsigned int, unsigned int, int&) */
int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18getEvSettingByHintEjjRi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&>(int const&, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTV8AltekLdc */
/* Demangled: vtable for AltekLdc */
extern void* _ZTV8AltekLdc;

/* Symbol: _ZN18S_Deflicker_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_Deflicker_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN18S_Deflicker_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN8AltekLdc15initAnyPowerWoiEjjN10NSAltekLdc12AltekLdcSizeEifi */
/* Demangled: AltekLdc::initAnyPowerWoi(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, float, int) */
int _ZN8AltekLdc15initAnyPowerWoiEjjN10NSAltekLdc12AltekLdcSizeEifi(void);

/* Symbol: _ZN16ArcsoftDeflicker4initEv */
/* Demangled: ArcsoftDeflicker::init() */
int _ZN16ArcsoftDeflicker4initEv(void);

/* Symbol: _Z38_CreatePluginProvider_S_AiBokeh_Pluginv */
/* Demangled: _CreatePluginProvider_S_AiBokeh_Plugin() */
int _Z38_CreatePluginProvider_S_AiBokeh_Pluginv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr18gIsLowMemoryDeviceE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::gIsLowMemoryDevice */
extern void* _ZN5NSCam2v38pipeline6policy11scenariomgr18gIsLowMemoryDeviceE;

/* Symbol: _ZN18S_Deflicker_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_Deflicker_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN18S_Deflicker_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN16S_AiBokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_AiBokeh_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16S_AiBokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision16getCurrent3AInfoERNS3_13Current3AInfoE */
/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::getCurrent3AInfo(NSCam::v3::pipeline::policy::supernightevdecision::Current3AInfo&) */
int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision16getCurrent3AInfoERNS3_13Current3AInfoE(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin18updateFaceMetaDataEPN5NSCam9IMetadataES2_PNS0_12IImageBufferE15alLDC_FACE_INFO */
/* Demangled: ALTEK_LDC_Plugin::updateFaceMetaData(NSCam::IMetadata*, NSCam::IMetadata*, NSCam::IImageBuffer*, alLDC_FACE_INFO) */
int _ZN16ALTEK_LDC_Plugin18updateFaceMetaDataEPN5NSCam9IMetadataES2_PNS0_12IImageBufferE15alLDC_FACE_INFO(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN16ALTEK_LDC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: ALTEK_LDC_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN16ALTEK_LDC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: ALTEK_LDC_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN16ALTEK_LDC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN16S_AiBokeh_Plugin4copyEPKN5NSCam12IImageBufferEPS1_ */
/* Demangled: S_AiBokeh_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
int _ZN16S_AiBokeh_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void);

/* Symbol: _ZN16S_AiBokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_AiBokeh_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN16S_AiBokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE */
/* Demangled: ALTEK_LDC_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
int _ZN16ALTEK_LDC_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN18S_Deflicker_PluginD1Ev */
/* Demangled: S_Deflicker_Plugin::~S_Deflicker_Plugin() */
int _ZN18S_Deflicker_PluginD1Ev(void);

/* Symbol: _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex */
/* Demangled: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex;

/* Symbol: _ZN8AltekLdc4initEN10NSAltekLdc12AltekLdcSizeES1_iPKc */
/* Demangled: AltekLdc::init(NSAltekLdc::AltekLdcSize, NSAltekLdc::AltekLdcSize, int, char const*) */
int _ZN8AltekLdc4initEN10NSAltekLdc12AltekLdcSizeES1_iPKc(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN16S_AiBokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_AiBokeh_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN16S_AiBokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_ */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN18S_Deflicker_Plugin3setEii */
/* Demangled: S_Deflicker_Plugin::set(int, int) */
int _ZN18S_Deflicker_Plugin3setEii(void);

/* Symbol: _ZN18S_Deflicker_PluginC2Ev */
/* Demangled: S_Deflicker_Plugin::S_Deflicker_Plugin() */
int _ZN18S_Deflicker_PluginC2Ev(void);

/* Symbol: _ZN16S_AiBokeh_PluginD1Ev */
/* Demangled: S_AiBokeh_Plugin::~S_AiBokeh_Plugin() */
int _ZN16S_AiBokeh_PluginD1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18evaluateEvDecisionEPNS2_10evdecision20DecisionOutputParamsEPKNS5_19DecisionInputParamsE */
/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::evaluateEvDecision(NSCam::v3::pipeline::policy::evdecision::DecisionOutputParams*, NSCam::v3::pipeline::policy::evdecision::DecisionInputParams const*) */
int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18evaluateEvDecisionEPNS2_10evdecision20DecisionOutputParamsEPKNS5_19DecisionInputParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision30getSupportedFramesCountByStateEjRj */
/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::getSupportedFramesCountByState(unsigned int, unsigned int&) */
int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision30getSupportedFramesCountByStateEjRj(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _Z38_CreatePluginProvider_ALTEK_LDC_Pluginv */
/* Demangled: _CreatePluginProvider_ALTEK_LDC_Plugin() */
int _Z38_CreatePluginProvider_ALTEK_LDC_Pluginv(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin6uninitEv */
/* Demangled: ALTEK_LDC_Plugin::uninit() */
int _ZN16ALTEK_LDC_Plugin6uninitEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr31customer_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN16ArcsoftDeflicker7processEP20__tag_ASVL_OFFSCREENS1_ */
/* Demangled: ArcsoftDeflicker::process(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN16ArcsoftDeflicker7processEP20__tag_ASVL_OFFSCREENS1_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_Deflicker_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN16S_AiBokeh_PluginC2Ev */
/* Demangled: S_AiBokeh_Plugin::S_AiBokeh_Plugin() */
int _ZN16S_AiBokeh_PluginC2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm(void);

/* Symbol: _ZN16S_AiBokeh_Plugin6uninitEv */
/* Demangled: S_AiBokeh_Plugin::uninit() */
int _ZN16S_AiBokeh_Plugin6uninitEv(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin4copyEPKN5NSCam12IImageBufferEPS1_ */
/* Demangled: ALTEK_LDC_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
int _ZN16ALTEK_LDC_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZN16S_AiBokeh_Plugin8propertyEv */
/* Demangled: S_AiBokeh_Plugin::property() */
int _ZN16S_AiBokeh_Plugin8propertyEv(void);

/* Symbol: _ZN16S_AiBokeh_Plugin9initBokehEv */
/* Demangled: S_AiBokeh_Plugin::initBokeh() */
int _ZN16S_AiBokeh_Plugin9initBokehEv(void);

/* Symbol: _ZN16ALTEK_LDC_PluginD1Ev */
/* Demangled: ALTEK_LDC_Plugin::~ALTEK_LDC_Plugin() */
int _ZN16ALTEK_LDC_PluginD1Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN16S_AiBokeh_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE */
/* Demangled: S_AiBokeh_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
int _ZN16S_AiBokeh_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_streaming_config(int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures const&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN16ALTEK_LDC_PluginC2Ev */
/* Demangled: ALTEK_LDC_Plugin::ALTEK_LDC_Plugin() */
int _ZN16ALTEK_LDC_PluginC2Ev(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN16ArcsoftDeflickerD0Ev */
/* Demangled: ArcsoftDeflicker::~ArcsoftDeflicker() */
int _ZN16ArcsoftDeflickerD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTV16ALTEK_LDC_Plugin */
/* Demangled: vtable for ALTEK_LDC_Plugin */
extern void* _ZTV16ALTEK_LDC_Plugin;

/* Symbol: _ZN18S_Deflicker_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_Deflicker_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN18S_Deflicker_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN18S_Deflicker_Plugin8propertyEv */
/* Demangled: S_Deflicker_Plugin::property() */
int _ZN18S_Deflicker_Plugin8propertyEv(void);

/* Symbol: _ZN8AltekLdcD1Ev */
/* Demangled: AltekLdc::~AltekLdc() */
int _ZN8AltekLdcD1Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN16ArcsoftDeflickerC1Ev */
/* Demangled: ArcsoftDeflicker::ArcsoftDeflicker() */
int _ZN16ArcsoftDeflickerC1Ev(void);

/* Symbol: _ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf */
/* Demangled: XiaoMi::getBokehLevel(NSCam::IMetadata*, int&, float&) */
int _ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf(void);

/* Symbol: _ZTV16S_AiBokeh_Plugin */
/* Demangled: vtable for S_AiBokeh_Plugin */
extern void* _ZTV16S_AiBokeh_Plugin;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin17updateFpcMetaDataEPN5NSCam9IMetadataES2_16alLDC_FPC_DATA_T */
/* Demangled: ALTEK_LDC_Plugin::updateFpcMetaData(NSCam::IMetadata*, NSCam::IMetadata*, alLDC_FPC_DATA_T) */
int _ZN16ALTEK_LDC_Plugin17updateFpcMetaDataEPN5NSCam9IMetadataES2_16alLDC_FPC_DATA_T(void);

/* Symbol: _ZN8AltekLdc11process_ldcEPhS0_P15alLDC_FACE_INFOPbN10NSAltekLdc12AltekLdcRectEP16alLDC_FPC_DATA_T */
/* Demangled: AltekLdc::process_ldc(unsigned char*, unsigned char*, alLDC_FACE_INFO*, bool*, NSAltekLdc::AltekLdcRect, alLDC_FPC_DATA_T*) */
int _ZN8AltekLdc11process_ldcEPhS0_P15alLDC_FACE_INFOPbN10NSAltekLdc12AltekLdcRectEP16alLDC_FPC_DATA_T(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN18S_Deflicker_Plugin4initEv */
/* Demangled: S_Deflicker_Plugin::init() */
int _ZN18S_Deflicker_Plugin4initEv(void);

/* Symbol: _ZNK18S_Deflicker_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_ */
/* Demangled: S_Deflicker_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
int _ZNK18S_Deflicker_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void);

/* Symbol: _ZNK18S_Deflicker_Plugin11matchFormatEN5NSCam12EImageFormatE */
/* Demangled: S_Deflicker_Plugin::matchFormat(NSCam::EImageFormat) const */
int _ZNK18S_Deflicker_Plugin11matchFormatEN5NSCam12EImageFormatE(void);

/* Symbol: _ZNK16ALTEK_LDC_Plugin11matchFormatEN5NSCam12EImageFormatE */
/* Demangled: ALTEK_LDC_Plugin::matchFormat(NSCam::EImageFormat) const */
int _ZNK16ALTEK_LDC_Plugin11matchFormatEN5NSCam12EImageFormatE(void);

/* Symbol: _ZN8AltekLdcC2Ev */
/* Demangled: AltekLdc::AltekLdc() */
int _ZN8AltekLdcC2Ev(void);

/* Symbol: _ZTV18S_Deflicker_Plugin */
/* Demangled: vtable for S_Deflicker_Plugin */
extern void* _ZTV18S_Deflicker_Plugin;

/* Symbol: _ZN16S_AiBokeh_Plugin11uninitBokehEv */
/* Demangled: S_AiBokeh_Plugin::uninitBokeh() */
int _ZN16S_AiBokeh_Plugin11uninitBokehEv(void);

/* Symbol: _ZN16S_AiBokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_AiBokeh_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16S_AiBokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr25gForceCustomerScenarioMgrE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::gForceCustomerScenarioMgr */
extern void* _ZN5NSCam2v38pipeline6policy11scenariomgr25gForceCustomerScenarioMgrE;

/* Symbol: _ZN16ALTEK_LDC_Plugin11getFaceInfoEPN5NSCam9IMetadataEPNS0_12IImageBufferEP15alLDC_FACE_INFO */
/* Demangled: ALTEK_LDC_Plugin::getFaceInfo(NSCam::IMetadata*, NSCam::IImageBuffer*, alLDC_FACE_INFO*) */
int _ZN16ALTEK_LDC_Plugin11getFaceInfoEPN5NSCam9IMetadataEPNS0_12IImageBufferEP15alLDC_FACE_INFO(void);

/* Symbol: _ZNK16ALTEK_LDC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_ */
/* Demangled: ALTEK_LDC_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
int _ZNK16ALTEK_LDC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE;

/* Symbol: _ZN16ArcsoftDeflickerD2Ev */
/* Demangled: ArcsoftDeflicker::~ArcsoftDeflicker() */
int _ZN16ArcsoftDeflickerD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: ALTEK_LDC_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16ALTEK_LDC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN16ArcsoftDeflicker9CopyImageEP20__tag_ASVL_OFFSCREENS1_ */
/* Demangled: ArcsoftDeflicker::CopyImage(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN16ArcsoftDeflicker9CopyImageEP20__tag_ASVL_OFFSCREENS1_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr29customer_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin3setEii */
/* Demangled: ALTEK_LDC_Plugin::set(int, int) */
int _ZN16ALTEK_LDC_Plugin3setEii(void);

/* Symbol: _ZN18S_Deflicker_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE */
/* Demangled: S_Deflicker_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
int _ZN18S_Deflicker_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void);

/* Symbol: _ZN18S_Deflicker_Plugin8drawMaskEPN5NSCam12IImageBufferEffff */
/* Demangled: S_Deflicker_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
int _ZN18S_Deflicker_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE16ALTEK_LDC_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE16ALTEK_LDC_PluginEE;

/* Symbol: _ZN8AltekLdc23allocBufAndReadFromFileEPKcPPvPl */
/* Demangled: AltekLdc::allocBufAndReadFromFile(char const*, void**, long*) */
int _ZN8AltekLdc23allocBufAndReadFromFileEPKcPPvPl(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC1ERKNS2_10evdecision14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::CustomSuperNightEvDecision(NSCam::v3::pipeline::policy::evdecision::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC1ERKNS2_10evdecision14CreationParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::customer_get_capture_config_by_scenario(int, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr39customer_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE(void);

/* Symbol: _ZN8AltekLdc9doInitWoiEjjN10NSAltekLdc12AltekLdcSizeEiPjf */
/* Demangled: AltekLdc::doInitWoi(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, unsigned int*, float) */
int _ZN8AltekLdc9doInitWoiEjjN10NSAltekLdc12AltekLdcSizeEiPjf(void);

/* Symbol: _ZN18S_Deflicker_PluginD0Ev */
/* Demangled: S_Deflicker_Plugin::~S_Deflicker_Plugin() */
int _ZN18S_Deflicker_PluginD0Ev(void);

/* Symbol: _ZTV16ArcsoftDeflicker */
/* Demangled: vtable for ArcsoftDeflicker */
extern void* _ZTV16ArcsoftDeflicker;

/* Symbol: _ZN16S_AiBokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_AiBokeh_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16S_AiBokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNK16S_AiBokeh_Plugin11matchFormatEN5NSCam12EImageFormatE */
/* Demangled: S_AiBokeh_Plugin::matchFormat(NSCam::EImageFormat) const */
int _ZNK16S_AiBokeh_Plugin11matchFormatEN5NSCam12EImageFormatE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void);

/* Symbol: _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE18S_Deflicker_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_Deflicker_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE18S_Deflicker_PluginEE;

/* Symbol: _ZN16ArcsoftDeflicker12setOffScreenEP20__tag_ASVL_OFFSCREENS1_ */
/* Demangled: ArcsoftDeflicker::setOffScreen(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN16ArcsoftDeflicker12setOffScreenEP20__tag_ASVL_OFFSCREENS1_(void);

/* Symbol: _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable */
/* Demangled: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable;

/* Symbol: _ZN16S_AiBokeh_Plugin3setEii */
/* Demangled: S_AiBokeh_Plugin::set(int, int) */
int _ZN16S_AiBokeh_Plugin3setEii(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18reprocessTriggeredEv */
/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::reprocessTriggered() */
int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecision18reprocessTriggeredEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIN6NS3Av314CaptureParam_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::CaptureParam_T, std::__1::allocator<NS3Av3::CaptureParam_T> >::__push_back_slow_path<NS3Av3::CaptureParam_T const&>(NS3Av3::CaptureParam_T const&) */
int _ZNSt3__16vectorIN6NS3Av314CaptureParam_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN16ArcsoftDeflicker6uninitEv */
/* Demangled: ArcsoftDeflicker::uninit() */
int _ZN16ArcsoftDeflicker6uninitEv(void);

/* Symbol: _ZN18S_Deflicker_PluginC1Ev */
/* Demangled: S_Deflicker_Plugin::S_Deflicker_Plugin() */
int _ZN18S_Deflicker_PluginC1Ev(void);

/* Symbol: _ZN16S_AiBokeh_PluginD0Ev */
/* Demangled: S_AiBokeh_Plugin::~S_AiBokeh_Plugin() */
int _ZN16S_AiBokeh_PluginD0Ev(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: ALTEK_LDC_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16ALTEK_LDC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: ALTEK_LDC_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16ALTEK_LDC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNK16S_AiBokeh_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_ */
/* Demangled: S_AiBokeh_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
int _ZNK16S_AiBokeh_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy13sensorcontrol32customer_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE */
/* Demangled: NSCam::v3::pipeline::policy::sensorcontrol::customer_decision_sensor_control(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn const&) */
int _ZN5NSCam2v38pipeline6policy13sensorcontrol32customer_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE(void);

/* Symbol: _ZN16ALTEK_LDC_Plugin4initEv */
/* Demangled: ALTEK_LDC_Plugin::init() */
int _ZN16ALTEK_LDC_Plugin4initEv(void);

/* Symbol: _ZN8AltekLdc16initWoiFromInputEjjN10NSAltekLdc12AltekLdcSizeEif */
/* Demangled: AltekLdc::initWoiFromInput(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, float) */
int _ZN8AltekLdc16initWoiFromInputEjjN10NSAltekLdc12AltekLdcSizeEif(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN18S_Deflicker_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_Deflicker_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN18S_Deflicker_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN16S_AiBokeh_PluginC1Ev */
/* Demangled: S_AiBokeh_Plugin::S_AiBokeh_Plugin() */
int _ZN16S_AiBokeh_PluginC1Ev(void);

/* Symbol: _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE6attachEjPKcS5_ */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::attach(unsigned int, char const*, char const*) */
int _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE6attachEjPKcS5_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _Z40_CreatePluginProvider_S_Deflicker_Pluginv */
/* Demangled: _CreatePluginProvider_S_Deflicker_Plugin() */
int _Z40_CreatePluginProvider_S_Deflicker_Pluginv(void);

/* Symbol: _ZN18S_Deflicker_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_Deflicker_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN18S_Deflicker_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN18S_Deflicker_Plugin4copyEPKN5NSCam12IImageBufferEPS1_ */
/* Demangled: S_Deflicker_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
int _ZN18S_Deflicker_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void);

/* Symbol: _ZN18S_Deflicker_PluginD2Ev */
/* Demangled: S_Deflicker_Plugin::~S_Deflicker_Plugin() */
int _ZN18S_Deflicker_PluginD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_AiBokeh_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16S_AiBokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, ALTEK_LDC_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE16ALTEK_LDC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN8AltekLdc12initFixedWoiEjjN10NSAltekLdc12AltekLdcSizeEif */
/* Demangled: AltekLdc::initFixedWoi(unsigned int, unsigned int, NSAltekLdc::AltekLdcSize, int, float) */
int _ZN8AltekLdc12initFixedWoiEjjN10NSAltekLdc12AltekLdcSizeEif(void);

/* Symbol: _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN18S_Deflicker_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_Deflicker_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN18S_Deflicker_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN16S_AiBokeh_Plugin8drawMaskEPN5NSCam12IImageBufferEffff */
/* Demangled: S_AiBokeh_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
int _ZN16S_AiBokeh_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void);

/* Symbol: _ZN16ALTEK_LDC_PluginD0Ev */
/* Demangled: ALTEK_LDC_Plugin::~ALTEK_LDC_Plugin() */
int _ZN16ALTEK_LDC_PluginD0Ev(void);

/* Symbol: _ZN16S_AiBokeh_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_AiBokeh_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN16S_AiBokeh_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN16S_AiBokeh_Plugin4initEv */
/* Demangled: S_AiBokeh_Plugin::init() */
int _ZN16S_AiBokeh_Plugin4initEv(void);

/* Symbol: _ZN16S_AiBokeh_PluginD2Ev */
/* Demangled: S_AiBokeh_Plugin::~S_AiBokeh_Plugin() */
int _ZN16S_AiBokeh_PluginD2Ev(void);

/* Symbol: _ZTVN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionE */
/* Demangled: vtable for NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision */
extern void* _ZTVN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN18S_Deflicker_Plugin6uninitEv */
/* Demangled: S_Deflicker_Plugin::uninit() */
int _ZN18S_Deflicker_Plugin6uninitEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC2ERKNS2_10evdecision14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::policy::supernightevdecision::CustomSuperNightEvDecision::CustomSuperNightEvDecision(NSCam::v3::pipeline::policy::evdecision::CreationParams const&) */
int _ZN5NSCam2v38pipeline6policy20supernightevdecision26CustomSuperNightEvDecisionC2ERKNS2_10evdecision14CreationParamsE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_3RDPARTY_CUSTOMER_H */
