/*
 * Reverse-Engineered ABI Specification for: libmtkcam_3rdparty.mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_3rdparty.mtk.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_3RDPARTY_MTK_H
#define BEGONIA_RE_LIBMTKCAM_3RDPARTY_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam2v38pipeline6policy13sensorcontrol27mtk_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE */
/* Demangled: NSCam::v3::pipeline::policy::sensorcontrol::mtk_decision_sensor_control(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn const&) */
int _ZN5NSCam2v38pipeline6policy13sensorcontrol27mtk_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE(void);

/* Symbol: _ZNK13S_EISQ_Plugin11checkConfigEPKN5NSCam12IImageBufferE */
/* Demangled: S_EISQ_Plugin::checkConfig(NSCam::IImageBuffer const*) const */
int _ZNK13S_EISQ_Plugin11checkConfigEPKN5NSCam12IImageBufferE(void);

/* Symbol: _ZN13S_SEMI_Plugin6uninitEv */
/* Demangled: S_SEMI_Plugin::uninit() */
int _ZN13S_SEMI_Plugin6uninitEv(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo18getMfnrCoreVersionEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::getMfnrCoreVersion() */
int _ZN5NSCam6plugin12MFNRShotInfo18getMfnrCoreVersionEv(void);

/* Symbol: _ZN14S_ASYNC_PluginC1Ev */
/* Demangled: S_ASYNC_Plugin::S_ASYNC_Plugin() */
int _ZN14S_ASYNC_PluginC1Ev(void);

/* Symbol: _ZN13S_META_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_META_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_META_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_EISQ_Plugin14processDisplayERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE */
/* Demangled: S_EISQ_Plugin::processDisplay(S_EISQ_Plugin::QData const&, NSCam::IImageBuffer*, NSCam::NSPipelinePlugin::JoinImageInfo_t&) */
int _ZN13S_EISQ_Plugin14processDisplayERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE(void);

/* Symbol: _ZN13S_SEMI_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE */
/* Demangled: S_SEMI_Plugin::createWorkingBuffer(char const*, int, NSCam::MSize const&) */
int _ZN13S_SEMI_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<VideoRefocusEngine, std::__1::allocator<VideoRefocusEngine> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo14makesDebugInfoERKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE */
/* Demangled: NSCam::plugin::MFNRShotInfo::makesDebugInfo(std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > const&, NSCam::IMetadata*) */
int _ZN5NSCam6plugin12MFNRShotInfo14makesDebugInfoERKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo15updateCurrent3AENS1_18ExposureUpdateModeE */
/* Demangled: NSCam::plugin::MFNRShotInfo::updateCurrent3A(NSCam::plugin::MFNRShotInfo::ExposureUpdateMode) */
int _ZN5NSCam6plugin12MFNRShotInfo15updateCurrent3AENS1_18ExposureUpdateModeE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _Z35_CreatePluginProvider_S_SEMI_Pluginv */
/* Demangled: _CreatePluginProvider_S_SEMI_Plugin() */
int _Z35_CreatePluginProvider_S_SEMI_Pluginv(void);

/* Symbol: _ZNK5NSCam16NSPipelinePlugin21SwnrPluginProviderImp18getTuningFromNvramEjil */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::getTuningFromNvram(unsigned int, int, long) const */
int _ZNK5NSCam16NSPipelinePlugin21SwnrPluginProviderImp18getTuningFromNvramEjil(void);

/* Symbol: _ZN13S_META_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_META_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_META_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_front(void** const&) */
int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp7processENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS3_INS6_15RequestCallbackEEE */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::RequestCallback>) */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp7processENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS3_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN13S_META_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE */
/* Demangled: S_META_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
int _ZN13S_META_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void);

/* Symbol: _ZN13S_EISQ_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_EISQ_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_EISQ_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZTV11S_FB_Plugin */
/* Demangled: vtable for S_FB_Plugin */
extern void* _ZTV11S_FB_Plugin;

/* Symbol: _ZN13S_SEMI_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_ */
/* Demangled: S_SEMI_Plugin::imgProcess(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN13S_SEMI_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: _ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf */
/* Demangled: XiaoMi::getBokehLevel(NSCam::IMetadata*, int&, float&) */
int _ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf(void);

/* Symbol: _ZN7AISceneC2Ev */
/* Demangled: AIScene::AIScene() */
int _ZN7AISceneC2Ev(void);

/* Symbol: _Z13rgba2yuv420spPhS_S_iiii */
/* Demangled: rgba2yuv420sp(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
int _Z13rgba2yuv420spPhS_S_iiii(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_capture_config_by_scenario(int, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm(void);

/* Symbol: _Z35_CreatePluginProvider_S_DISP_Pluginv */
/* Demangled: _CreatePluginProvider_S_DISP_Plugin() */
int _Z35_CreatePluginProvider_S_DISP_Pluginv(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfoD1Ev */
/* Demangled: NSCam::plugin::MFNRShotInfo::~MFNRShotInfo() */
int _ZN5NSCam6plugin12MFNRShotInfoD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13S_SEMI_PluginD0Ev */
/* Demangled: S_SEMI_Plugin::~S_SEMI_Plugin() */
int _ZN13S_SEMI_PluginD0Ev(void);

/* Symbol: _ZN13S_FOVA_PluginD0Ev */
/* Demangled: S_FOVA_Plugin::~S_FOVA_Plugin() */
int _ZN13S_FOVA_PluginD0Ev(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE */
/* Demangled: S_ARC_Bokeh_Plugin::createWorkingBuffer(char const*, int, NSCam::MSize const&) */
int _ZN18S_ARC_Bokeh_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE(void);

/* Symbol: _ZGVZN14RawHDRPlugImpl22getCurrentCaptureParamEbE8__locker */
/* Demangled: guard variable for RawHDRPlugImpl::getCurrentCaptureParam(bool)::__locker */
extern void* _ZGVZN14RawHDRPlugImpl22getCurrentCaptureParamEbE8__locker;

/* Symbol: _ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE */
/* Demangled: S_EISQ_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
int _ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void);

/* Symbol: _ZNK11S_FB_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_ */
/* Demangled: S_FB_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
int _ZNK11S_FB_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void);

/* Symbol: _ZN14S_GREEN_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_GREEN_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_GREEN_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC2Ev */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::SwnrPluginProviderImp() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN13SceneDetectorC1Ev */
/* Demangled: SceneDetector::SceneDetector() */
int _ZN13SceneDetectorC1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm(void);

/* Symbol: _ZN14S_GREEN_Plugin8propertyEv */
/* Demangled: S_GREEN_Plugin::property() */
int _ZN14S_GREEN_Plugin8propertyEv(void);

/* Symbol: _ZN13S_SEMI_Plugin8propertyEv */
/* Demangled: S_SEMI_Plugin::property() */
int _ZN13S_SEMI_Plugin8propertyEv(void);

/* Symbol: _ZTV13S_FOVA_Plugin */
/* Demangled: vtable for S_FOVA_Plugin */
extern void* _ZTV13S_FOVA_Plugin;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE;

/* Symbol: _Z12MiFreeBufferP13MiImageBuffer */
/* Demangled: MiFreeBuffer(MiImageBuffer*) */
int _Z12MiFreeBufferP13MiImageBuffer(void);

/* Symbol: _ZN13S_EISQ_PluginD2Ev */
/* Demangled: S_EISQ_Plugin::~S_EISQ_Plugin() */
int _ZN13S_EISQ_PluginD2Ev(void);

/* Symbol: _ZN14S_GREEN_Plugin4initEv */
/* Demangled: S_GREEN_Plugin::init() */
int _ZN14S_GREEN_Plugin4initEv(void);

/* Symbol: _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN10ArcsoftHdrD1Ev */
/* Demangled: ArcsoftHdr::~ArcsoftHdr() */
int _ZN10ArcsoftHdrD1Ev(void);

/* Symbol: _ZTV14S_GREEN_Plugin */
/* Demangled: vtable for S_GREEN_Plugin */
extern void* _ZTV14S_GREEN_Plugin;

/* Symbol: _ZN13S_EISQ_Plugin8printLogERKNS_5QDataEPN5NSCam12IImageBufferERKNS3_6MRectFEPKc */
/* Demangled: S_EISQ_Plugin::printLog(S_EISQ_Plugin::QData const&, NSCam::IImageBuffer*, NSCam::MRectF const&, char const*) */
int _ZN13S_EISQ_Plugin8printLogERKNS_5QDataEPN5NSCam12IImageBufferERKNS3_6MRectFEPKc(void);

/* Symbol: _ZN11S_FB_PluginD2Ev */
/* Demangled: S_FB_Plugin::~S_FB_Plugin() */
int _ZN11S_FB_PluginD2Ev(void);

/* Symbol: _ZN18S_ARC_Bokeh_PluginC2Ev */
/* Demangled: S_ARC_Bokeh_Plugin::S_ARC_Bokeh_Plugin() */
int _ZN18S_ARC_Bokeh_PluginC2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN10ArcsoftHdr6now_msEv */
/* Demangled: ArcsoftHdr::now_ms() */
int _ZN10ArcsoftHdr6now_msEv(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

/* Symbol: _ZTV13S_DISP_Plugin */
/* Demangled: vtable for S_DISP_Plugin */
extern void* _ZTV13S_DISP_Plugin;

/* Symbol: _ZN14S_ASYNC_Plugin4initEv */
/* Demangled: S_ASYNC_Plugin::init() */
int _ZN14S_ASYNC_Plugin4initEv(void);

/* Symbol: _ZN13S_DISP_PluginC1Ev */
/* Demangled: S_DISP_Plugin::S_DISP_Plugin() */
int _ZN13S_DISP_PluginC1Ev(void);

/* Symbol: _ZN14S_GREEN_Plugin4copyEPKN5NSCam12IImageBufferEPS1_ */
/* Demangled: S_GREEN_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
int _ZN14S_GREEN_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo14configMfllCoreEPNS_9IMetadataES3_ */
/* Demangled: NSCam::plugin::MFNRShotInfo::configMfllCore(NSCam::IMetadata*, NSCam::IMetadata*) */
int _ZN5NSCam6plugin12MFNRShotInfo14configMfllCoreEPNS_9IMetadataES3_(void);

/* Symbol: _ZZN14RawHDRPlugImpl8propertyEvE4prop */
/* Demangled: RawHDRPlugImpl::property()::prop */
extern void* _ZZN14RawHDRPlugImpl8propertyEvE4prop;

/* Symbol: _ZN13SceneDetector7processEP13MiImageBufferiP17_MIALGO_SD_OUTPUTP16_MIALGO_SD_INPUT */
/* Demangled: SceneDetector::process(MiImageBuffer*, int, _MIALGO_SD_OUTPUT*, _MIALGO_SD_INPUT*) */
int _ZN13SceneDetector7processEP13MiImageBufferiP17_MIALGO_SD_OUTPUTP16_MIALGO_SD_INPUT(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_DISP_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_DISP_PluginEE;

/* Symbol: _ZN13S_SEMI_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE */
/* Demangled: S_SEMI_Plugin::save2file(NSCam::IImageBuffer*, int, NSCam::IMetadata*) */
int _ZN13S_SEMI_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEEE;

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN11S_FB_Plugin3setEii */
/* Demangled: S_FB_Plugin::set(int, int) */
int _ZN11S_FB_Plugin3setEii(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION */
/* Demangled: S_ARC_Bokeh_Plugin::rotateBuffer(unsigned char const*, NSCam::MSize, unsigned char*, ENUM_ROTATION) */
int _ZN18S_ARC_Bokeh_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION(void);

/* Symbol: _ZN13S_FOVA_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_FOVA_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_FOVA_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<NSCam::HDR2::HDRCaptureParam, std::__1::allocator<NSCam::HDR2::HDRCaptureParam> >::__append(unsigned long) */
int _ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTV13S_SEMI_Plugin */
/* Demangled: vtable for S_SEMI_Plugin */
extern void* _ZTV13S_SEMI_Plugin;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN13S_FOVA_Plugin6uninitEv */
/* Demangled: S_FOVA_Plugin::uninit() */
int _ZN13S_FOVA_Plugin6uninitEv(void);

/* Symbol: _Z42_CreatePluginProvider_RemosaicProviderImplv */
/* Demangled: _CreatePluginProvider_RemosaicProviderImpl() */
int _Z42_CreatePluginProvider_RemosaicProviderImplv(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD0Ev */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::~SwnrPluginProviderImp() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void);

/* Symbol: _ZN10ArcsoftHdr21process_low_light_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi */
/* Demangled: ArcsoftHdr::process_low_light_hdr(MiImageBuffer*, MiImageBuffer*, int, _tag_ARC_LLHDR_AEINFO&, int) */
int _ZN10ArcsoftHdr21process_low_light_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE6attachEjPKcS5_ */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::attach(unsigned int, char const*, char const*) */
int _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE6attachEjPKcS5_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>, std::__1::tuple<> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE25__emplace_unique_key_argsIS7_JRKNS_21piecewise_construct_tENS_5tupleIJRKS7_EEENSV_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISG_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN13S_FOVA_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_FOVA_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN13S_FOVA_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo7executeEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::execute() */
int _ZN5NSCam6plugin12MFNRShotInfo7executeEv(void);

/* Symbol: _ZZN15HDRProviderImpl8propertyEvE4prop */
/* Demangled: HDRProviderImpl::property()::prop */
extern void* _ZZN15HDRProviderImpl8propertyEvE4prop;

/* Symbol: _Z13MiAllocBufferP13MiImageBufferiii */
/* Demangled: MiAllocBuffer(MiImageBuffer*, int, int, int) */
int _Z13MiAllocBufferP13MiImageBufferiii(void);

/* Symbol: _ZN13S_META_PluginD2Ev */
/* Demangled: S_META_Plugin::~S_META_Plugin() */
int _ZN13S_META_PluginD2Ev(void);

/* Symbol: _ZN13S_SEMI_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_SEMI_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_SEMI_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN7AIScene8InitVarsEv */
/* Demangled: AIScene::InitVars() */
int _ZN7AIScene8InitVarsEv(void);

/* Symbol: _ZN11S_FB_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_FB_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN11S_FB_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN13S_SEMI_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_SEMI_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN13S_SEMI_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZNK5NSCam6plugin12MFNRShotInfo18getExecutionStatusEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::getExecutionStatus() const */
int _ZNK5NSCam6plugin12MFNRShotInfo18getExecutionStatusEv(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr18gIsLowMemoryDeviceE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::gIsLowMemoryDevice */
extern void* _ZN5NSCam2v38pipeline6policy11scenariomgr18gIsLowMemoryDeviceE;

/* Symbol: _ZN13S_DISP_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_DISP_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_DISP_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN14S_GREEN_PluginD1Ev */
/* Demangled: S_GREEN_Plugin::~S_GREEN_Plugin() */
int _ZN14S_GREEN_PluginD1Ev(void);

/* Symbol: _ZN18S_ARC_Bokeh_PluginD0Ev */
/* Demangled: S_ARC_Bokeh_Plugin::~S_ARC_Bokeh_Plugin() */
int _ZN18S_ARC_Bokeh_PluginD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN13S_META_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE */
/* Demangled: S_META_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
int _ZN13S_META_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE14RawHDRPlugImplEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE14RawHDRPlugImplEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN14S_GREEN_Plugin6uninitEv */
/* Demangled: S_GREEN_Plugin::uninit() */
int _ZN14S_GREEN_Plugin6uninitEv(void);

/* Symbol: _ZGVZN16MFNRProviderImpl8propertyEvE4prop */
/* Demangled: guard variable for MFNRProviderImpl::property()::prop */
extern void* _ZGVZN16MFNRProviderImpl8propertyEvE4prop;

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo15calMotionVectorEPKNS_9IMetadataEm */
/* Demangled: NSCam::plugin::MFNRShotInfo::calMotionVector(NSCam::IMetadata const*, unsigned long) */
int _ZN5NSCam6plugin12MFNRShotInfo15calMotionVectorEPKNS_9IMetadataEm(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_features_table_by_scenario(int, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE(void);

/* Symbol: _ZN13S_EISQ_Plugin4initEv */
/* Demangled: S_EISQ_Plugin::init() */
int _ZN13S_EISQ_Plugin4initEv(void);

/* Symbol: _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE10do_destroyEPvm */
/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE15HDRProviderImplEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE15HDRProviderImplEE;

/* Symbol: _ZZN14RawHDRPlugImpl8propertyEvE6inited */
/* Demangled: RawHDRPlugImpl::property()::inited */
extern void* _ZZN14RawHDRPlugImpl8propertyEvE6inited;

/* Symbol: _Z6now_msv */
/* Demangled: now_ms() */
int _Z6now_msv(void);

/* Symbol: _ZN14S_ASYNC_PluginC2Ev */
/* Demangled: S_ASYNC_Plugin::S_ASYNC_Plugin() */
int _ZN14S_ASYNC_PluginC2Ev(void);

/* Symbol: _ZN11S_FB_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_FB_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN11S_FB_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin13processArcBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE */
/* Demangled: S_ARC_Bokeh_Plugin::processArcBkh(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_ARC_Bokeh_Plugin::TpBkhInBuffer, S_ARC_Bokeh_Plugin::TpBkhOutBuffer, S_ARC_Bokeh_Plugin::TpBkhInParam const&) */
int _ZN18S_ARC_Bokeh_Plugin13processArcBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE */
/* Demangled: S_EISQ_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
int _ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void);

/* Symbol: _ZN13S_SEMI_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE */
/* Demangled: S_SEMI_Plugin::processTpBkh(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_SEMI_Plugin::TpBkhInBuffer, S_SEMI_Plugin::TpBkhOutBuffer, S_SEMI_Plugin::TpBkhInParam const&) */
int _ZN13S_SEMI_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp4initEv */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::init() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp4initEv(void);

/* Symbol: _ZN10ArcsoftHdr11load_configEP19ArcHDRCommonAEParamP11ArcHDRParam */
/* Demangled: ArcsoftHdr::load_config(ArcHDRCommonAEParam*, ArcHDRParam*) */
int _ZN10ArcsoftHdr11load_configEP19ArcHDRCommonAEParamP11ArcHDRParam(void);

/* Symbol: _ZN10ArcsoftHdr17processHdrCheckerEP13MiImageBufferiP19arcsoft_hdr_checkerR21_tag_ARC_LLHDR_AEINFOii */
/* Demangled: ArcsoftHdr::processHdrChecker(MiImageBuffer*, int, arcsoft_hdr_checker*, _tag_ARC_LLHDR_AEINFO&, int, int) */
int _ZN10ArcsoftHdr17processHdrCheckerEP13MiImageBufferiP19arcsoft_hdr_checkerR21_tag_ARC_LLHDR_AEINFOii(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZZN16MFNRProviderImpl8propertyEvE4prop */
/* Demangled: MFNRProviderImpl::property()::prop */
extern void* _ZZN16MFNRProviderImpl8propertyEvE4prop;

/* Symbol: _ZN14S_ASYNC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_ASYNC_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_ASYNC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3YuvENS0_21SwnrPluginProviderImpEEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3YuvENS0_21SwnrPluginProviderImpEEE;

/* Symbol: _ZN13S_META_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_META_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_META_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_SEMI_Plugin4initEv */
/* Demangled: S_SEMI_Plugin::init() */
int _ZN13S_SEMI_Plugin4initEv(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_ARC_Bokeh_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN18S_ARC_Bokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfoD2Ev */
/* Demangled: NSCam::plugin::MFNRShotInfo::~MFNRShotInfo() */
int _ZN5NSCam6plugin12MFNRShotInfoD2Ev(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp14onDequeRequestEv */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::onDequeRequest() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp14onDequeRequestEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*>&>::push_front(S_EISQ_Plugin::QData* const&) */
int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN13S_SEMI_PluginD1Ev */
/* Demangled: S_SEMI_Plugin::~S_SEMI_Plugin() */
int _ZN13S_SEMI_PluginD1Ev(void);

/* Symbol: _ZN13S_FOVA_PluginD1Ev */
/* Demangled: S_FOVA_Plugin::~S_FOVA_Plugin() */
int _ZN13S_FOVA_PluginD1Ev(void);

/* Symbol: _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_ */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE14S_GREEN_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE14S_GREEN_PluginEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<VideoRefocusEngine, std::__1::allocator<VideoRefocusEngine> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEEE;

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN13S_META_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_META_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN13S_META_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN13S_EISQ_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_EISQ_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN13S_EISQ_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN13S_SEMI_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_SEMI_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN13S_SEMI_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN13S_FOVA_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_FOVA_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN13S_FOVA_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN13SceneDetectorC2Ev */
/* Demangled: SceneDetector::SceneDetector() */
int _ZN13SceneDetectorC2Ev(void);

/* Symbol: _ZN7AIScene11SetMoonModeEb */
/* Demangled: AIScene::SetMoonMode(bool) */
int _ZN7AIScene11SetMoonModeEb(void);

/* Symbol: _ZN13S_DISP_Plugin4initEv */
/* Demangled: S_DISP_Plugin::init() */
int _ZN13S_DISP_Plugin4initEv(void);

/* Symbol: _ZN13S_EISQ_PluginC1Ev */
/* Demangled: S_EISQ_Plugin::S_EISQ_Plugin() */
int _ZN13S_EISQ_PluginC1Ev(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin7copyImgEP20__tag_ASVL_OFFSCREENS1_ */
/* Demangled: S_ARC_Bokeh_Plugin::copyImg(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN18S_ARC_Bokeh_Plugin7copyImgEP20__tag_ASVL_OFFSCREENS1_(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo18updateMfllStrategyEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::updateMfllStrategy() */
int _ZN5NSCam6plugin12MFNRShotInfo18updateMfllStrategyEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN11S_FB_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE */
/* Demangled: S_FB_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
int _ZN11S_FB_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEEE;

/* Symbol: _ZGVZN14RawHDRPlugImpl8propertyEvE4prop */
/* Demangled: guard variable for RawHDRPlugImpl::property()::prop */
extern void* _ZGVZN14RawHDRPlugImpl8propertyEvE4prop;

/* Symbol: _ZN14S_ASYNC_PluginD0Ev */
/* Demangled: S_ASYNC_Plugin::~S_ASYNC_Plugin() */
int _ZN14S_ASYNC_PluginD0Ev(void);

/* Symbol: _ZN10ArcsoftHdrD2Ev */
/* Demangled: ArcsoftHdr::~ArcsoftHdr() */
int _ZN10ArcsoftHdrD2Ev(void);

/* Symbol: _ZN11S_FB_PluginC1Ev */
/* Demangled: S_FB_Plugin::S_FB_Plugin() */
int _ZN11S_FB_PluginC1Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::plugin::MFNRShotInfo*, std::__1::default_delete<NSCam::plugin::MFNRShotInfo>, std::__1::allocator<NSCam::plugin::MFNRShotInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEEE;

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo6doMfnrEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::doMfnr() */
int _ZN5NSCam6plugin12MFNRShotInfo6doMfnrEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::HDR2::HDRCaptureParam, std::__1::allocator<NSCam::HDR2::HDRCaptureParam> >::__push_back_slow_path<NSCam::HDR2::HDRCaptureParam const&>(NSCam::HDR2::HDRCaptureParam const&) */
int _ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_META_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_META_PluginEE;

/* Symbol: _ZN11S_FB_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_FB_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN11S_FB_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTV20RemosaicProviderImpl */
/* Demangled: vtable for RemosaicProviderImpl */
extern void* _ZTV20RemosaicProviderImpl;

/* Symbol: _ZZN14FBProviderImpl8propertyEvE4prop */
/* Demangled: FBProviderImpl::property()::prop */
extern void* _ZZN14FBProviderImpl8propertyEvE4prop;

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN13S_DISP_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_DISP_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_DISP_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN13S_DISP_PluginC2Ev */
/* Demangled: S_DISP_Plugin::S_DISP_Plugin() */
int _ZN13S_DISP_PluginC2Ev(void);

/* Symbol: _ZN11S_FB_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_FB_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN11S_FB_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _Z40_CreatePluginProvider_S_ARC_Bokeh_Pluginv */
/* Demangled: _CreatePluginProvider_S_ARC_Bokeh_Plugin() */
int _Z40_CreatePluginProvider_S_ARC_Bokeh_Pluginv(void);

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int __subtf3(void);

/* Symbol: _ZTV13S_META_Plugin */
/* Demangled: vtable for S_META_Plugin */
extern void* _ZTV13S_META_Plugin;

/* Symbol: _ZZN16MFNRProviderImpl8propertyEvE6inited */
/* Demangled: MFNRProviderImpl::property()::inited */
extern void* _ZZN16MFNRProviderImpl8propertyEvE6inited;

/* Symbol: _ZN7AISceneD1Ev */
/* Demangled: AIScene::~AIScene() */
int _ZN7AISceneD1Ev(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfoC2EiiN4mfll8MfllModeEiib */
/* Demangled: NSCam::plugin::MFNRShotInfo::MFNRShotInfo(int, int, mfll::MfllMode, int, int, bool) */
int _ZN5NSCam6plugin12MFNRShotInfoC2EiiN4mfll8MfllModeEiib(void);

/* Symbol: _ZN13S_EISQ_Plugin13processRecordERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE */
/* Demangled: S_EISQ_Plugin::processRecord(S_EISQ_Plugin::QData const&, NSCam::IImageBuffer*, NSCam::NSPipelinePlugin::JoinImageInfo_t&) */
int _ZN13S_EISQ_Plugin13processRecordERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp9negotiateERNS0_14PipelinePluginINS0_3YuvEE9SelectionE */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection&) */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp9negotiateERNS0_14PipelinePluginINS0_3YuvEE9SelectionE(void);

/* Symbol: xmlPath */
/* Demangled: xmlPath */
extern void* xmlPath;

/* Symbol: _ZN7AIScene8SetModelEii */
/* Demangled: AIScene::SetModel(int, int) */
int _ZN7AIScene8SetModelEii(void);

/* Symbol: _ZTV14S_ASYNC_Plugin */
/* Demangled: vtable for S_ASYNC_Plugin */
extern void* _ZTV14S_ASYNC_Plugin;

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_streaming_config(int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures const&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin4initEv */
/* Demangled: S_ARC_Bokeh_Plugin::init() */
int _ZN18S_ARC_Bokeh_Plugin4initEv(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3RawE20RemosaicProviderImplEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3RawE20RemosaicProviderImplEE;

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_ARC_Bokeh_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN18S_ARC_Bokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN13S_FOVA_Plugin4initEv */
/* Demangled: S_FOVA_Plugin::init() */
int _ZN13S_FOVA_Plugin4initEv(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD1Ev */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::~SwnrPluginProviderImp() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD1Ev(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv */
/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void);

/* Symbol: _ZN13SceneDetectorD0Ev */
/* Demangled: SceneDetector::~SceneDetector() */
int _ZN13SceneDetectorD0Ev(void);

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable */
/* Demangled: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable;

/* Symbol: _ZN13S_META_PluginC1Ev */
/* Demangled: S_META_Plugin::S_META_Plugin() */
int _ZN13S_META_PluginC1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK13S_EISQ_Plugin11matchFormatEN5NSCam12EImageFormatE */
/* Demangled: S_EISQ_Plugin::matchFormat(NSCam::EImageFormat) const */
int _ZNK13S_EISQ_Plugin11matchFormatEN5NSCam12EImageFormatE(void);

/* Symbol: _ZTV13S_EISQ_Plugin */
/* Demangled: vtable for S_EISQ_Plugin */
extern void* _ZTV13S_EISQ_Plugin;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEEE;

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_ARC_Bokeh_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN18S_ARC_Bokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo17addDataToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEES7_NS4_16MfllMotionVectorEPNS_9IMetadataESA_SA_i */
/* Demangled: NSCam::plugin::MFNRShotInfo::addDataToMfnrCore(android::sp<mfll::IMfllImageBuffer>&, android::sp<mfll::IMfllImageBuffer>&, mfll::MfllMotionVector, NSCam::IMetadata*, NSCam::IMetadata*, NSCam::IMetadata*, int) */
int _ZN5NSCam6plugin12MFNRShotInfo17addDataToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEES7_NS4_16MfllMotionVectorEPNS_9IMetadataESA_SA_i(void);

/* Symbol: _Z36_CreatePluginProvider_RawHDRPlugImplv */
/* Demangled: _CreatePluginProvider_RawHDRPlugImpl() */
int _Z36_CreatePluginProvider_RawHDRPlugImplv(void);

/* Symbol: _ZN11S_FB_Plugin6uninitEv */
/* Demangled: S_FB_Plugin::uninit() */
int _ZN11S_FB_Plugin6uninitEv(void);

/* Symbol: _ZN13S_SEMI_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE */
/* Demangled: S_SEMI_Plugin::releaseWorkingBuffer(char const*, android::sp<NSCam::IImageBuffer>&) */
int _ZN13S_SEMI_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE(void);

/* Symbol: _Z35_CreatePluginProvider_S_FOVA_Pluginv */
/* Demangled: _CreatePluginProvider_S_FOVA_Plugin() */
int _Z35_CreatePluginProvider_S_FOVA_Pluginv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void);

/* Symbol: _ZN13S_META_Plugin8propertyEv */
/* Demangled: S_META_Plugin::property() */
int _ZN13S_META_Plugin8propertyEv(void);

/* Symbol: _ZN13S_DISP_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_DISP_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN13S_DISP_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN14S_GREEN_PluginD2Ev */
/* Demangled: S_GREEN_Plugin::~S_GREEN_Plugin() */
int _ZN14S_GREEN_PluginD2Ev(void);

/* Symbol: _ZNK14S_GREEN_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_ */
/* Demangled: S_GREEN_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
int _ZNK14S_GREEN_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void);

/* Symbol: _ZN18S_ARC_Bokeh_PluginD1Ev */
/* Demangled: S_ARC_Bokeh_Plugin::~S_ARC_Bokeh_Plugin() */
int _ZN18S_ARC_Bokeh_PluginD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::plugin::MFNRShotInfo*, std::__1::default_delete<NSCam::plugin::MFNRShotInfo>, std::__1::allocator<NSCam::plugin::MFNRShotInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZZN16MFNRProviderImpl9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEE9SelectionEE15mfllCoreVersion */
/* Demangled: MFNRProviderImpl::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection&)::mfllCoreVersion */
extern void* _ZZN16MFNRProviderImpl9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEE9SelectionEE15mfllCoreVersion;

/* Symbol: _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<void*, std::__1::allocator<void*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTV15HDRProviderImpl */
/* Demangled: vtable for HDRProviderImpl */
extern void* _ZTV15HDRProviderImpl;

/* Symbol: _Z36_CreatePluginProvider_S_ASYNC_Pluginv */
/* Demangled: _CreatePluginProvider_S_ASYNC_Plugin() */
int _Z36_CreatePluginProvider_S_ASYNC_Pluginv(void);

/* Symbol: _ZN14S_ASYNC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_ASYNC_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN14S_ASYNC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*> >::push_back(S_EISQ_Plugin::QData*&&) */
int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN14S_GREEN_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_GREEN_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_GREEN_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _Z15retrieveGmvInfoPKN5NSCam9IMetadataERiS3_RNS_5MSizeE */
/* Demangled: retrieveGmvInfo(NSCam::IMetadata const*, int&, int&, NSCam::MSize&) */
int _Z15retrieveGmvInfoPKN5NSCam9IMetadataERiS3_RNS_5MSizeE(void);

/* Symbol: _ZN10ArcsoftHdr4initEv */
/* Demangled: ArcsoftHdr::init() */
int _ZN10ArcsoftHdr4initEv(void);

/* Symbol: _ZN10ArcsoftHdr7processEP13MiImageBufferS1_iPiR21_tag_ARC_LLHDR_AEINFOi */
/* Demangled: ArcsoftHdr::process(MiImageBuffer*, MiImageBuffer*, int, int*, _tag_ARC_LLHDR_AEINFO&, int) */
int _ZN10ArcsoftHdr7processEP13MiImageBufferS1_iPiR21_tag_ARC_LLHDR_AEINFOi(void);

/* Symbol: _ZN13S_DISP_PluginD0Ev */
/* Demangled: S_DISP_Plugin::~S_DISP_Plugin() */
int _ZN13S_DISP_PluginD0Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN10ArcsoftHdr11process_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi */
/* Demangled: ArcsoftHdr::process_hdr(MiImageBuffer*, MiImageBuffer*, int, _tag_ARC_LLHDR_AEINFO&, int) */
int _ZN10ArcsoftHdr11process_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi(void);

/* Symbol: _ZTV10ArcsoftHdr */
/* Demangled: vtable for ArcsoftHdr */
extern void* _ZTV10ArcsoftHdr;

/* Symbol: _ZN14S_GREEN_Plugin8drawMaskEPN5NSCam12IImageBufferEffff */
/* Demangled: S_GREEN_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
int _ZN14S_GREEN_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void);

/* Symbol: _ZN13S_FOVA_Plugin8propertyEv */
/* Demangled: S_FOVA_Plugin::property() */
int _ZN13S_FOVA_Plugin8propertyEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN7AIScene7SetZoomEf */
/* Demangled: AIScene::SetZoom(float) */
int _ZN7AIScene7SetZoomEf(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE */
/* Demangled: S_ARC_Bokeh_Plugin::prepareTpBkhInOutData(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_ARC_Bokeh_Plugin::TpBkhInBuffer*, S_ARC_Bokeh_Plugin::TpBkhOutBuffer*, S_ARC_Bokeh_Plugin::TpBkhInParam*) */
int _ZN18S_ARC_Bokeh_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE(void);

/* Symbol: _ZZN15HDRProviderImpl8propertyEvE6inited */
/* Demangled: HDRProviderImpl::property()::inited */
extern void* _ZZN15HDRProviderImpl8propertyEvE6inited;

/* Symbol: _ZN13S_DISP_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_DISP_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN13S_DISP_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN13S_EISQ_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_EISQ_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_EISQ_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE */
/* Demangled: S_EISQ_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::BufferHandle> const&) */
int _ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*> >::push_front(S_EISQ_Plugin::QData*&&) */
int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN7AIScene17NeedIsoAndExpTimeEv */
/* Demangled: AIScene::NeedIsoAndExpTime() */
int _ZN7AIScene17NeedIsoAndExpTimeEv(void);

/* Symbol: _ZN13S_SEMI_PluginD2Ev */
/* Demangled: S_SEMI_Plugin::~S_SEMI_Plugin() */
int _ZN13S_SEMI_PluginD2Ev(void);

/* Symbol: _ZN13S_FOVA_PluginD2Ev */
/* Demangled: S_FOVA_Plugin::~S_FOVA_Plugin() */
int _ZN13S_FOVA_PluginD2Ev(void);

/* Symbol: _Z13yuv420sp2rgbaPhS_S_iiii */
/* Demangled: yuv420sp2rgba(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
int _Z13yuv420sp2rgbaPhS_S_iiii(void);

/* Symbol: _ZN14S_GREEN_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE */
/* Demangled: S_GREEN_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
int _ZN14S_GREEN_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_ARC_Bokeh_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN18S_ARC_Bokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE */
/* Demangled: S_ARC_Bokeh_Plugin::save2file(NSCam::IImageBuffer*, int, NSCam::IMetadata*) */
int _ZN18S_ARC_Bokeh_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZGVZN15HDRProviderImpl8propertyEvE4prop */
/* Demangled: guard variable for HDRProviderImpl::property()::prop */
extern void* _ZGVZN15HDRProviderImpl8propertyEvE4prop;

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp11waitForIdleEv */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::waitForIdle() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp11waitForIdleEv(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_ */
/* Demangled: S_ARC_Bokeh_Plugin::imgProcess(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN18S_ARC_Bokeh_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin8propertyEv */
/* Demangled: S_ARC_Bokeh_Plugin::property() */
int _ZN18S_ARC_Bokeh_Plugin8propertyEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_back(void**&&) */
int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _Z19createWorkingBufferPKciN5NSCam5MSizeE */
/* Demangled: createWorkingBuffer(char const*, int, NSCam::MSize) */
int _Z19createWorkingBufferPKciN5NSCam5MSizeE(void);

/* Symbol: _ZGVZN14FBProviderImpl8propertyEvE4prop */
/* Demangled: guard variable for FBProviderImpl::property()::prop */
extern void* _ZGVZN14FBProviderImpl8propertyEvE4prop;

/* Symbol: _ZN13S_EISQ_PluginC2Ev */
/* Demangled: S_EISQ_Plugin::S_EISQ_Plugin() */
int _ZN13S_EISQ_PluginC2Ev(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo13waitExecutionEPl */
/* Demangled: NSCam::plugin::MFNRShotInfo::waitExecution(long*) */
int _ZN5NSCam6plugin12MFNRShotInfo13waitExecutionEPl(void);

/* Symbol: _ZZN14FBProviderImpl8propertyEvE6inited */
/* Demangled: FBProviderImpl::property()::inited */
extern void* _ZZN14FBProviderImpl8propertyEvE6inited;

/* Symbol: _ZN10ArcsoftHdrC1Ev */
/* Demangled: ArcsoftHdr::ArcsoftHdr() */
int _ZN10ArcsoftHdrC1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&>(int const&, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN13S_META_Plugin3setEii */
/* Demangled: S_META_Plugin::set(int, int) */
int _ZN13S_META_Plugin3setEii(void);

/* Symbol: _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _Z10dumpBufferPN5NSCam12IImageBufferEPKcS3_ */
/* Demangled: dumpBuffer(NSCam::IImageBuffer*, char const*, char const*) */
int _Z10dumpBufferPN5NSCam12IImageBufferEPKcS3_(void);

/* Symbol: _ZTV14RawHDRPlugImpl */
/* Demangled: vtable for RawHDRPlugImpl */
extern void* _ZTV14RawHDRPlugImpl;

/* Symbol: _ZN14S_ASYNC_PluginD1Ev */
/* Demangled: S_ASYNC_Plugin::~S_ASYNC_Plugin() */
int _ZN14S_ASYNC_PluginD1Ev(void);

/* Symbol: _ZN13S_EISQ_Plugin8propertyEv */
/* Demangled: S_EISQ_Plugin::property() */
int _ZN13S_EISQ_Plugin8propertyEv(void);

/* Symbol: _ZN11S_FB_PluginC2Ev */
/* Demangled: S_FB_Plugin::S_FB_Plugin() */
int _ZN11S_FB_PluginC2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN7AIScene17NeedCheckCameraIdEv */
/* Demangled: AIScene::NeedCheckCameraId() */
int _ZN7AIScene17NeedCheckCameraIdEv(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE14S_ASYNC_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE14S_ASYNC_PluginEE;

/* Symbol: _ZN11S_FB_Plugin4initEv */
/* Demangled: S_FB_Plugin::init() */
int _ZN11S_FB_Plugin4initEv(void);

/* Symbol: _ZZN14RawHDRPlugImpl22getCurrentCaptureParamEbE8__locker */
/* Demangled: RawHDRPlugImpl::getCurrentCaptureParam(bool)::__locker */
extern void* _ZZN14RawHDRPlugImpl22getCurrentCaptureParamEbE8__locker;

/* Symbol: _ZN14S_ASYNC_Plugin8simulateEPN5NSCam12IImageBufferE */
/* Demangled: S_ASYNC_Plugin::simulate(NSCam::IImageBuffer*) */
int _ZN14S_ASYNC_Plugin8simulateEPN5NSCam12IImageBufferE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _Z35_CreatePluginProvider_S_EISQ_Pluginv */
/* Demangled: _CreatePluginProvider_S_EISQ_Plugin() */
int _Z35_CreatePluginProvider_S_EISQ_Pluginv(void);

/* Symbol: _ZN13S_EISQ_Plugin6uninitEv */
/* Demangled: S_EISQ_Plugin::uninit() */
int _ZN13S_EISQ_Plugin6uninitEv(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo24getMfnrCoreVersionStringEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::getMfnrCoreVersionString() */
int _ZN5NSCam6plugin12MFNRShotInfo24getMfnrCoreVersionStringEv(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::SwnrPluginProviderImp */
extern void* _ZTVN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN10ArcsoftHdr12WriteFileLogEPcPKcz */
/* Demangled: ArcsoftHdr::WriteFileLog(char*, char const*, ...) */
int _ZN10ArcsoftHdr12WriteFileLogEPcPKcz(void);

/* Symbol: _ZN11S_FB_Plugin8propertyEv */
/* Demangled: S_FB_Plugin::property() */
int _ZN11S_FB_Plugin8propertyEv(void);

/* Symbol: _ZN7AISceneD2Ev */
/* Demangled: AIScene::~AIScene() */
int _ZN7AISceneD2Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN13S_META_Plugin6uninitEv */
/* Demangled: S_META_Plugin::uninit() */
int _ZN13S_META_Plugin6uninitEv(void);

/* Symbol: _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_back(void**&&) */
int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN13S_FOVA_Plugin13imgCpy2TargetENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_ */
/* Demangled: S_FOVA_Plugin::imgCpy2Target(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN13S_FOVA_Plugin13imgCpy2TargetENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13S_DISP_Plugin8propertyEv */
/* Demangled: S_DISP_Plugin::property() */
int _ZN13S_DISP_Plugin8propertyEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::plugin::MFNRShotInfo*, std::__1::default_delete<NSCam::plugin::MFNRShotInfo>, std::__1::allocator<NSCam::plugin::MFNRShotInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVN7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEEE */
/* Demangled: vtable for android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > */
extern void* _ZTVN7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEEE;

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int __multf3(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD2Ev */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::~SwnrPluginProviderImp() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD2Ev(void);

/* Symbol: _ZN13SceneDetectorD1Ev */
/* Demangled: SceneDetector::~SceneDetector() */
int _ZN13SceneDetectorD1Ev(void);

/* Symbol: _ZN14S_ASYNC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_ASYNC_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN14S_ASYNC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN13S_META_PluginC2Ev */
/* Demangled: S_META_Plugin::S_META_Plugin() */
int _ZN13S_META_PluginC2Ev(void);

/* Symbol: _ZN13S_EISQ_Plugin4copyEPKN5NSCam12IImageBufferEPS1_ */
/* Demangled: S_EISQ_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
int _ZN13S_EISQ_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void);

/* Symbol: _ZN13S_EISQ_PluginD0Ev */
/* Demangled: S_EISQ_Plugin::~S_EISQ_Plugin() */
int _ZN13S_EISQ_PluginD0Ev(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE11S_FB_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE11S_FB_PluginEE;

/* Symbol: _ZN18S_ARC_Bokeh_Plugin6uninitEv */
/* Demangled: S_ARC_Bokeh_Plugin::uninit() */
int _ZN18S_ARC_Bokeh_Plugin6uninitEv(void);

/* Symbol: _ZTV16MFNRProviderImpl */
/* Demangled: vtable for MFNRProviderImpl */
extern void* _ZTV16MFNRProviderImpl;

/* Symbol: _ZN14S_ASYNC_Plugin6uninitEv */
/* Demangled: S_ASYNC_Plugin::uninit() */
int _ZN14S_ASYNC_Plugin6uninitEv(void);

/* Symbol: _ZN13S_DISP_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_DISP_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_DISP_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN13S_EISQ_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_EISQ_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN13S_EISQ_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN11S_FB_PluginD0Ev */
/* Demangled: S_FB_Plugin::~S_FB_Plugin() */
int _ZN11S_FB_PluginD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN14S_GREEN_PluginC1Ev */
/* Demangled: S_GREEN_Plugin::S_GREEN_Plugin() */
int _ZN14S_GREEN_PluginC1Ev(void);

/* Symbol: _ZN13S_FOVA_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE */
/* Demangled: S_FOVA_Plugin::save2file(NSCam::IImageBuffer*, int, NSCam::IMetadata*) */
int _ZN13S_FOVA_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE(void);

/* Symbol: _ZN13S_META_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_META_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_META_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN18S_ARC_Bokeh_PluginD2Ev */
/* Demangled: S_ARC_Bokeh_Plugin::~S_ARC_Bokeh_Plugin() */
int _ZN18S_ARC_Bokeh_PluginD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp5abortERNSt3__16vectorINS2_10shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS2_9allocatorIS9_EEEE */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> > >&) */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp5abortERNSt3__16vectorINS2_10shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS2_9allocatorIS9_EEEE(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: _ZN13S_DISP_PluginD1Ev */
/* Demangled: S_DISP_Plugin::~S_DISP_Plugin() */
int _ZN13S_DISP_PluginD1Ev(void);

/* Symbol: _ZN14S_GREEN_Plugin3setEii */
/* Demangled: S_GREEN_Plugin::set(int, int) */
int _ZN14S_GREEN_Plugin3setEii(void);

/* Symbol: _ZN13S_SEMI_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE */
/* Demangled: S_SEMI_Plugin::prepareTpBkhInOutData(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_SEMI_Plugin::TpBkhInBuffer*, S_SEMI_Plugin::TpBkhOutBuffer*, S_SEMI_Plugin::TpBkhInParam*) */
int _ZN13S_SEMI_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo12initMfnrCoreEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::initMfnrCore() */
int _ZN5NSCam6plugin12MFNRShotInfo12initMfnrCoreEv(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3YuvE14FBProviderImplEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3YuvE14FBProviderImplEE;

/* Symbol: _ZN14S_ASYNC_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE */
/* Demangled: S_ASYNC_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
int _ZN14S_ASYNC_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void);

/* Symbol: _Z12setOffScreenP20__tag_ASVL_OFFSCREENP13MiImageBuffer */
/* Demangled: setOffScreen(__tag_ASVL_OFFSCREEN*, MiImageBuffer*) */
int _Z12setOffScreenP20__tag_ASVL_OFFSCREENP13MiImageBuffer(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN14S_ASYNC_Plugin10processASDEPN5NSCam12IImageBufferE */
/* Demangled: S_ASYNC_Plugin::processASD(NSCam::IImageBuffer*) */
int _ZN14S_ASYNC_Plugin10processASDEPN5NSCam12IImageBufferE(void);

/* Symbol: _ZN14S_ASYNC_Plugin8propertyEv */
/* Demangled: S_ASYNC_Plugin::property() */
int _ZN14S_ASYNC_Plugin8propertyEv(void);

/* Symbol: _ZN10ArcsoftHdr11getUserDataEv */
/* Demangled: ArcsoftHdr::getUserData() */
int _ZN10ArcsoftHdr11getUserDataEv(void);

/* Symbol: _ZN14S_GREEN_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_GREEN_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN14S_GREEN_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEEE;

/* Symbol: _Z35_CreatePluginProvider_S_META_Pluginv */
/* Demangled: _CreatePluginProvider_S_META_Plugin() */
int _Z35_CreatePluginProvider_S_META_Pluginv(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp15onProcessFutureEv */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::onProcessFuture() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp15onProcessFutureEv(void);

/* Symbol: _ZN14S_ASYNC_Plugin3setEii */
/* Demangled: S_ASYNC_Plugin::set(int, int) */
int _ZN14S_ASYNC_Plugin3setEii(void);

/* Symbol: _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE12do_constructEPvm */
/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZGVZN15HDRProviderImpl22getCurrentCaptureParamEbE8__locker */
/* Demangled: guard variable for HDRProviderImpl::getCurrentCaptureParam(bool)::__locker */
extern void* _ZGVZN15HDRProviderImpl22getCurrentCaptureParamEbE8__locker;

/* Symbol: _ZTV13SceneDetector */
/* Demangled: vtable for SceneDetector */
extern void* _ZTV13SceneDetector;

/* Symbol: _ZN7AIScene4InitEv */
/* Demangled: AIScene::Init() */
int _ZN7AIScene4InitEv(void);

/* Symbol: _ZTV18S_ARC_Bokeh_Plugin */
/* Demangled: vtable for S_ARC_Bokeh_Plugin */
extern void* _ZTV18S_ARC_Bokeh_Plugin;

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: _ZN13S_META_PluginD0Ev */
/* Demangled: S_META_Plugin::~S_META_Plugin() */
int _ZN13S_META_PluginD0Ev(void);

/* Symbol: _ZNK11S_FB_Plugin11matchFormatEN5NSCam12EImageFormatE */
/* Demangled: S_FB_Plugin::matchFormat(NSCam::EImageFormat) const */
int _ZNK11S_FB_Plugin11matchFormatEN5NSCam12EImageFormatE(void);

/* Symbol: _ZN14S_GREEN_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_GREEN_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_GREEN_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_SEMI_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_SEMI_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_SEMI_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE18S_ARC_Bokeh_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE18S_ARC_Bokeh_PluginEE;

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int __floatditf(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_EISQ_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_EISQ_PluginEE;

/* Symbol: _ZN11S_FB_Plugin4copyEPKN5NSCam12IImageBufferEPS1_ */
/* Demangled: S_FB_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
int _ZN11S_FB_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void);

/* Symbol: _ZN13S_SEMI_PluginC1Ev */
/* Demangled: S_SEMI_Plugin::S_SEMI_Plugin() */
int _ZN13S_SEMI_PluginC1Ev(void);

/* Symbol: _ZN13S_FOVA_PluginC1Ev */
/* Demangled: S_FOVA_Plugin::S_FOVA_Plugin() */
int _ZN13S_FOVA_PluginC1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIjEEmRKT_ */
/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::__erase_unique<unsigned int>(unsigned int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIjEEmRKT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZN13S_FOVA_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_FOVA_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_FOVA_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZZN15HDRProviderImpl22getCurrentCaptureParamEbE8__locker */
/* Demangled: HDRProviderImpl::getCurrentCaptureParam(bool)::__locker */
extern void* _ZZN15HDRProviderImpl22getCurrentCaptureParamEbE8__locker;

/* Symbol: _ZN7AIScene21HasWideAngleRecommendEv */
/* Demangled: AIScene::HasWideAngleRecommend() */
int _ZN7AIScene21HasWideAngleRecommendEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN13S_DISP_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_DISP_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_DISP_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _Z36_CreatePluginProvider_FBProviderImplv */
/* Demangled: _CreatePluginProvider_FBProviderImpl() */
int _Z36_CreatePluginProvider_FBProviderImplv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp3setEii */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::set(int, int) */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp3setEii(void);

/* Symbol: _ZN10ArcsoftHdrC2Ev */
/* Demangled: ArcsoftHdr::ArcsoftHdr() */
int _ZN10ArcsoftHdrC2Ev(void);

/* Symbol: _ZN13S_DISP_Plugin8drawMaskEPN5NSCam12IImageBufferEffff */
/* Demangled: S_DISP_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
int _ZN13S_DISP_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void);

/* Symbol: _ZN11S_FB_Plugin8drawMaskEPN5NSCam12IImageBufferEffff */
/* Demangled: S_FB_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
int _ZN11S_FB_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void);

/* Symbol: _Z36_CreatePluginProvider_S_GREEN_Pluginv */
/* Demangled: _CreatePluginProvider_S_GREEN_Plugin() */
int _Z36_CreatePluginProvider_S_GREEN_Pluginv(void);

/* Symbol: _ZN14S_GREEN_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_GREEN_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_GREEN_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN14S_ASYNC_Plugin21processXiaomiHDRCheckEPN5NSCam12IImageBufferER12S_ASYNC_Data */
/* Demangled: S_ASYNC_Plugin::processXiaomiHDRCheck(NSCam::IImageBuffer*, S_ASYNC_Data&) */
int _ZN14S_ASYNC_Plugin21processXiaomiHDRCheckEPN5NSCam12IImageBufferER12S_ASYNC_Data(void);

/* Symbol: _ZN14S_ASYNC_PluginD2Ev */
/* Demangled: S_ASYNC_Plugin::~S_ASYNC_Plugin() */
int _ZN14S_ASYNC_PluginD2Ev(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp8propertyEv */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::property() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp8propertyEv(void);

/* Symbol: _ZN14S_ASYNC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_ASYNC_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_ASYNC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_EISQ_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_EISQ_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_EISQ_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZGVZN16MFNRProviderImpl9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEE9SelectionEE15mfllCoreVersion */
/* Demangled: guard variable for MFNRProviderImpl::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection&)::mfllCoreVersion */
extern void* _ZGVZN16MFNRProviderImpl9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEE9SelectionEE15mfllCoreVersion;

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo22setOutputBufToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEE */
/* Demangled: NSCam::plugin::MFNRShotInfo::setOutputBufToMfnrCore(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN5NSCam6plugin12MFNRShotInfo22setOutputBufToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEE(void);

/* Symbol: _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable */
/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable;

/* Symbol: _Z38_CreatePluginProvider_MFNRProviderImplv */
/* Demangled: _CreatePluginProvider_MFNRProviderImpl() */
int _Z38_CreatePluginProvider_MFNRProviderImplv(void);

/* Symbol: _ZTVN5NSCam6plugin12MFNRShotInfoE */
/* Demangled: vtable for NSCam::plugin::MFNRShotInfo */
extern void* _ZTVN5NSCam6plugin12MFNRShotInfoE;

/* Symbol: _ZN13S_DISP_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE */
/* Demangled: S_DISP_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
int _ZN13S_DISP_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void);

/* Symbol: _ZN13S_EISQ_Plugin3setEii */
/* Demangled: S_EISQ_Plugin::set(int, int) */
int _ZN13S_EISQ_Plugin3setEii(void);

/* Symbol: _ZNSt3__113__assoc_stateIbE4copyEv */
/* Demangled: std::__1::__assoc_state<bool>::copy() */
int _ZNSt3__113__assoc_stateIbE4copyEv(void);

/* Symbol: _ZN7AISceneC1Ev */
/* Demangled: AIScene::AIScene() */
int _ZN7AISceneC1Ev(void);

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfoD0Ev */
/* Demangled: NSCam::plugin::MFNRShotInfo::~MFNRShotInfo() */
int _ZN5NSCam6plugin12MFNRShotInfoD0Ev(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE4moveEv */
/* Demangled: std::__1::__assoc_state<int>::move() */
int _ZNSt3__113__assoc_stateIiE4moveEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTV14FBProviderImpl */
/* Demangled: vtable for FBProviderImpl */
extern void* _ZTV14FBProviderImpl;

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_FOVA_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_FOVA_PluginEE;

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6uninitEv */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::uninit() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6uninitEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*>&>::push_back(S_EISQ_Plugin::QData*&&) */
int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC1Ev */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::SwnrPluginProviderImp() */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC1Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
int _ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void);

/* Symbol: _ZN13S_EISQ_Plugin8copyCropEPKN5NSCam12IImageBufferEPS1_RKNS0_5MRectE */
/* Demangled: S_EISQ_Plugin::copyCrop(NSCam::IImageBuffer const*, NSCam::IImageBuffer*, NSCam::MRect const&) */
int _ZN13S_EISQ_Plugin8copyCropEPKN5NSCam12IImageBufferEPS1_RKNS0_5MRectE(void);

/* Symbol: _Z37_CreatePluginProvider_HDRProviderImplv */
/* Demangled: _CreatePluginProvider_HDRProviderImpl() */
int _Z37_CreatePluginProvider_HDRProviderImplv(void);

/* Symbol: _ZN13SceneDetectorD2Ev */
/* Demangled: SceneDetector::~SceneDetector() */
int _ZN13SceneDetectorD2Ev(void);

/* Symbol: _ZN14S_ASYNC_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE */
/* Demangled: S_ASYNC_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
int _ZN14S_ASYNC_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void);

/* Symbol: _ZN13S_EISQ_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_EISQ_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_EISQ_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_EISQ_PluginD1Ev */
/* Demangled: S_EISQ_Plugin::~S_EISQ_Plugin() */
int _ZN13S_EISQ_PluginD1Ev(void);

/* Symbol: _ZN13S_SEMI_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_SEMI_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN13S_SEMI_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_SEMI_Plugin3setEii */
/* Demangled: S_SEMI_Plugin::set(int, int) */
int _ZN13S_SEMI_Plugin3setEii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE5eraseENS_21__tree_const_iteratorISC_PNS_11__tree_nodeISC_PvEElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE5eraseENS_21__tree_const_iteratorISC_PNS_11__tree_nodeISC_PvEElEE(void);

/* Symbol: _ZN10ArcsoftHdrD0Ev */
/* Demangled: ArcsoftHdr::~ArcsoftHdr() */
int _ZN10ArcsoftHdrD0Ev(void);

/* Symbol: _ZN11S_FB_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_FB_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN11S_FB_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_front(void**&&) */
int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__push_back_slow_path<NSCam::MRect>(NSCam::MRect&&) */
int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN11S_FB_PluginD1Ev */
/* Demangled: S_FB_Plugin::~S_FB_Plugin() */
int _ZN11S_FB_PluginD1Ev(void);

/* Symbol: _ZN14S_GREEN_PluginC2Ev */
/* Demangled: S_GREEN_Plugin::S_GREEN_Plugin() */
int _ZN14S_GREEN_PluginC2Ev(void);

/* Symbol: _ZN18S_ARC_Bokeh_PluginC1Ev */
/* Demangled: S_ARC_Bokeh_Plugin::S_ARC_Bokeh_Plugin() */
int _ZN18S_ARC_Bokeh_PluginC1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<VideoRefocusEngine, std::__1::allocator<VideoRefocusEngine> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN7AIScene15NeedSetMoonModeEv */
/* Demangled: AIScene::NeedSetMoonMode() */
int _ZN7AIScene15NeedSetMoonModeEv(void);

/* Symbol: _ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE */
/* Demangled: S_EISQ_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::BufferHandle> const&) */
int _ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _Z12MiCopyBufferP13MiImageBufferS0_ */
/* Demangled: MiCopyBuffer(MiImageBuffer*, MiImageBuffer*) */
int _Z12MiCopyBufferP13MiImageBufferS0_(void);

/* Symbol: _ZN13S_DISP_Plugin3setEii */
/* Demangled: S_DISP_Plugin::set(int, int) */
int _ZN13S_DISP_Plugin3setEii(void);

/* Symbol: _ZN13S_DISP_Plugin6uninitEv */
/* Demangled: S_DISP_Plugin::uninit() */
int _ZN13S_DISP_Plugin6uninitEv(void);

/* Symbol: _ZN14S_ASYNC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_ASYNC_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_ASYNC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZN13S_META_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE */
/* Demangled: S_META_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
int _ZN13S_META_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void);

/* Symbol: _ZN13S_DISP_PluginD2Ev */
/* Demangled: S_DISP_Plugin::~S_DISP_Plugin() */
int _ZN13S_DISP_PluginD2Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<S_EISQ_Plugin::QData, std::__1::allocator<S_EISQ_Plugin::QData> >::clear() */
int _ZNSt3__112__deque_baseIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZN14S_GREEN_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE */
/* Demangled: S_GREEN_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
int _ZN14S_GREEN_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfoC1EiiN4mfll8MfllModeEiib */
/* Demangled: NSCam::plugin::MFNRShotInfo::MFNRShotInfo(int, int, mfll::MfllMode, int, int, bool) */
int _ZN5NSCam6plugin12MFNRShotInfoC1EiiN4mfll8MfllModeEiib(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE16MFNRProviderImplEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE16MFNRProviderImplEE;

/* Symbol: _ZN7AIScene13NeedCheckZoomEv */
/* Demangled: AIScene::NeedCheckZoom() */
int _ZN7AIScene13NeedCheckZoomEv(void);

/* Symbol: _ZN13S_FOVA_Plugin3setEii */
/* Demangled: S_FOVA_Plugin::set(int, int) */
int _ZN13S_FOVA_Plugin3setEii(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _Z12MiDumpBufferP13MiImageBufferPKc */
/* Demangled: MiDumpBuffer(MiImageBuffer*, char const*) */
int _Z12MiDumpBufferP13MiImageBufferPKc(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN13S_EISQ_Plugin8drawMaskEPN5NSCam12IImageBufferEffff */
/* Demangled: S_EISQ_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
int _ZN13S_EISQ_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void);

/* Symbol: _ZN5NSCam6plugin12MFNRShotInfo8doCancelEv */
/* Demangled: NSCam::plugin::MFNRShotInfo::doCancel() */
int _ZN5NSCam6plugin12MFNRShotInfo8doCancelEv(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void);

/* Symbol: _ZN7AIScene17ForwardAISceneNetEP13MiImageBufferP9miAiAsd_tiii */
/* Demangled: AIScene::ForwardAISceneNet(MiImageBuffer*, miAiAsd_t*, int, int, int) */
int _ZN7AIScene17ForwardAISceneNetEP13MiImageBufferP9miAiAsd_tiii(void);

/* Symbol: _ZNK14S_ASYNC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_ */
/* Demangled: S_ASYNC_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
int _ZNK14S_ASYNC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm(void);

/* Symbol: _ZN13S_SEMI_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION */
/* Demangled: S_SEMI_Plugin::rotateBuffer(unsigned char const*, NSCam::MSize, unsigned char*, ENUM_ROTATION) */
int _ZN13S_SEMI_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_SEMI_PluginEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_SEMI_PluginEE;

/* Symbol: _ZN18S_ARC_Bokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_ARC_Bokeh_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN18S_ARC_Bokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE */
/* Demangled: int std::__1::uniform_int_distribution<int>::operator()<std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul> >(std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul>&, std::__1::uniform_int_distribution<int>::param_type const&) */
int _ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin8mergeImgEP20__tag_ASVL_OFFSCREENS1_i */
/* Demangled: S_ARC_Bokeh_Plugin::mergeImg(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, int) */
int _ZN18S_ARC_Bokeh_Plugin8mergeImgEP20__tag_ASVL_OFFSCREENS1_i(void);

/* Symbol: _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13S_META_PluginD1Ev */
/* Demangled: S_META_Plugin::~S_META_Plugin() */
int _ZN13S_META_PluginD1Ev(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE */
/* Demangled: S_ARC_Bokeh_Plugin::releaseWorkingBuffer(char const*, android::sp<NSCam::IImageBuffer>&) */
int _ZN18S_ARC_Bokeh_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE(void);

/* Symbol: _Z43_CreatePluginProvider_SwnrPluginProviderImpv */
/* Demangled: _CreatePluginProvider_SwnrPluginProviderImp() */
int _Z43_CreatePluginProvider_SwnrPluginProviderImpv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN13S_META_Plugin4initEv */
/* Demangled: S_META_Plugin::init() */
int _ZN13S_META_Plugin4initEv(void);

/* Symbol: _ZN11S_FB_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_FB_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN11S_FB_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

/* Symbol: _ZNK14S_GREEN_Plugin11matchFormatEN5NSCam12EImageFormatE */
/* Demangled: S_GREEN_Plugin::matchFormat(NSCam::EImageFormat) const */
int _ZNK14S_GREEN_Plugin11matchFormatEN5NSCam12EImageFormatE(void);

/* Symbol: _ZN13S_SEMI_PluginC2Ev */
/* Demangled: S_SEMI_Plugin::S_SEMI_Plugin() */
int _ZN13S_SEMI_PluginC2Ev(void);

/* Symbol: _ZN13S_FOVA_PluginC2Ev */
/* Demangled: S_FOVA_Plugin::S_FOVA_Plugin() */
int _ZN13S_FOVA_PluginC2Ev(void);

/* Symbol: _ZN14S_ASYNC_Plugin19processMiHdrCheckerEPN5NSCam12IImageBufferENS0_5MSizeEjNS0_12EImageFormatEii14XiaomiAEInfo_Ti */
/* Demangled: S_ASYNC_Plugin::processMiHdrChecker(NSCam::IImageBuffer*, NSCam::MSize, unsigned int, NSCam::EImageFormat, int, int, XiaomiAEInfo_T, int) */
int _ZN14S_ASYNC_Plugin19processMiHdrCheckerEPN5NSCam12IImageBufferENS0_5MSizeEjNS0_12EImageFormatEii14XiaomiAEInfo_Ti(void);

/* Symbol: _ZNSt3__15dequeIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<S_EISQ_Plugin::QData, std::__1::allocator<S_EISQ_Plugin::QData> >::__add_back_capacity() */
int _ZNSt3__15dequeIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN14S_GREEN_PluginD0Ev */
/* Demangled: S_GREEN_Plugin::~S_GREEN_Plugin() */
int _ZN14S_GREEN_PluginD0Ev(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE */
/* Demangled: S_ARC_Bokeh_Plugin::processTpBkh(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_ARC_Bokeh_Plugin::TpBkhInBuffer, S_ARC_Bokeh_Plugin::TpBkhOutBuffer, S_ARC_Bokeh_Plugin::TpBkhInParam const&) */
int _ZN18S_ARC_Bokeh_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE(void);

/* Symbol: _ZN18S_ARC_Bokeh_Plugin3setEii */
/* Demangled: S_ARC_Bokeh_Plugin::set(int, int) */
int _ZN18S_ARC_Bokeh_Plugin3setEii(void);

/* Symbol: _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6doSwnrENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEE */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::doSwnr(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>) */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6doSwnrENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEE(void);

/* Symbol: _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex */
/* Demangled: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex;

/* Symbol: _ZN13S_EISQ_Plugin10clearQueueEv */
/* Demangled: S_EISQ_Plugin::clearQueue() */
int _ZN13S_EISQ_Plugin10clearQueueEv(void);

/* Symbol: _Z33_CreatePluginProvider_S_FB_Pluginv */
/* Demangled: _CreatePluginProvider_S_FB_Plugin() */
int _Z33_CreatePluginProvider_S_FB_Pluginv(void);

/* Symbol: _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp16queryNrThresholdElRiS2_ */
/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::queryNrThreshold(long, int&, int&) */
int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp16queryNrThresholdElRiS2_(void);

/* Symbol: _ZN14S_ASYNC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE */
/* Demangled: S_ASYNC_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
int _ZN14S_ASYNC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_3RDPARTY_MTK_H */
