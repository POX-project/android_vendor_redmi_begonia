/*
 * Reverse-Engineered Source for: libmtkcam_3rdparty.mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_3rdparty_mtk"

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
#include "libmtkcam_3rdparty_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::pipeline::policy::sensorcontrol::mtk_decision_sensor_control(NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamOut&, NSCam::v3::pipeline::policy::sensorcontrol::SensorControlParamIn const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy13sensorcontrol27mtk_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy13sensorcontrol27mtk_decision_sensor_controlERNS3_21SensorControlParamOutERKNS3_20SensorControlParamInE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::checkConfig(NSCam::IImageBuffer const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13S_EISQ_Plugin11checkConfigEPKN5NSCam12IImageBufferE(void) {
    ALOGD("_ZNK13S_EISQ_Plugin11checkConfigEPKN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin6uninitEv(void) {
    ALOGD("_ZN13S_SEMI_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::getMfnrCoreVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo18getMfnrCoreVersionEv(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo18getMfnrCoreVersionEv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::S_ASYNC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_PluginC1Ev(void) {
    ALOGD("_ZN14S_ASYNC_PluginC1Ev() called");
    return 0;
}

/* Demangled: S_META_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_META_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::processDisplay(S_EISQ_Plugin::QData const&, NSCam::IImageBuffer*, NSCam::NSPipelinePlugin::JoinImageInfo_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin14processDisplayERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE(void) {
    ALOGD("_ZN13S_EISQ_Plugin14processDisplayERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::createWorkingBuffer(char const*, int, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE(void) {
    ALOGD("_ZN13S_SEMI_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<VideoRefocusEngine, std::__1::allocator<VideoRefocusEngine> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::makesDebugInfo(std::__1::map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, unsigned int> > > const&, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo14makesDebugInfoERKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo14makesDebugInfoERKNSt3__13mapIjjNS2_4lessIjEENS2_9allocatorINS2_4pairIKjjEEEEEEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::updateCurrent3A(NSCam::plugin::MFNRShotInfo::ExposureUpdateMode) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo15updateCurrent3AENS1_18ExposureUpdateModeE(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo15updateCurrent3AENS1_18ExposureUpdateModeE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_SEMI_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z35_CreatePluginProvider_S_SEMI_Pluginv(void) {
    ALOGD("_Z35_CreatePluginProvider_S_SEMI_Pluginv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::getTuningFromNvram(unsigned int, int, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam16NSPipelinePlugin21SwnrPluginProviderImp18getTuningFromNvramEjil(void) {
    ALOGD("_ZNK5NSCam16NSPipelinePlugin21SwnrPluginProviderImp18getTuningFromNvramEjil() called");
    return 0;
}

/* Demangled: S_META_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_META_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_front(void** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp7processENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS3_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp7processENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS3_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_META_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void) {
    ALOGD("_ZN13S_META_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_EISQ_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Exported Object: vtable for S_FB_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV11S_FB_Plugin = NULL;

/* Demangled: S_SEMI_Plugin::imgProcess(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_(void) {
    ALOGD("_ZN13S_SEMI_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: XiaoMi::getBokehLevel(NSCam::IMetadata*, int&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf(void) {
    ALOGD("_ZN6XiaoMi13getBokehLevelEPN5NSCam9IMetadataERiRf() called");
    return 0;
}

/* Demangled: AIScene::AIScene() */
extern "C" __attribute__((visibility("default"))) int _ZN7AISceneC2Ev(void) {
    ALOGD("_ZN7AISceneC2Ev() called");
    return 0;
}

/* Demangled: rgba2yuv420sp(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13rgba2yuv420spPhS_S_iiii(void) {
    ALOGD("_Z13rgba2yuv420spPhS_S_iiii() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_capture_config_by_scenario(int, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_capture_config_by_scenarioEiRNS3_21CaptureScenarioConfigE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE6rehashEm() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_DISP_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z35_CreatePluginProvider_S_DISP_Pluginv(void) {
    ALOGD("_Z35_CreatePluginProvider_S_DISP_Pluginv() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::~MFNRShotInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfoD1Ev(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfoD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::~S_SEMI_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_PluginD0Ev(void) {
    ALOGD("_ZN13S_SEMI_PluginD0Ev() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::~S_FOVA_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_PluginD0Ev(void) {
    ALOGD("_ZN13S_FOVA_PluginD0Ev() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::createWorkingBuffer(char const*, int, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin19createWorkingBufferEPKciRKN5NSCam5MSizeE() called");
    return 0;
}

/* Exported Object: guard variable for RawHDRPlugImpl::getCurrentCaptureParam(bool)::__locker */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN14RawHDRPlugImpl22getCurrentCaptureParamEbE8__locker = NULL;

/* Demangled: S_EISQ_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void) {
    ALOGD("_ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE() called");
    return 0;
}

/* Demangled: S_FB_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11S_FB_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void) {
    ALOGD("_ZNK11S_FB_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_GREEN_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::SwnrPluginProviderImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: SceneDetector::SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorC1Ev(void) {
    ALOGD("_ZN13SceneDetectorC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::weak_ptr<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8weak_ptrIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheEEEEENS_22__unordered_map_hasherIS7_SG_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SG_NS_8equal_toIS7_EELb1EEENS5_ISG_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin8propertyEv(void) {
    ALOGD("_ZN14S_GREEN_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin8propertyEv(void) {
    ALOGD("_ZN13S_SEMI_Plugin8propertyEv() called");
    return 0;
}

/* Exported Object: vtable for S_FOVA_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV13S_FOVA_Plugin = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEEE = NULL;

/* Demangled: MiFreeBuffer(MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _Z12MiFreeBufferP13MiImageBuffer(void) {
    ALOGD("_Z12MiFreeBufferP13MiImageBuffer() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::~S_EISQ_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_PluginD2Ev(void) {
    ALOGD("_ZN13S_EISQ_PluginD2Ev() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin4initEv(void) {
    ALOGD("_ZN14S_GREEN_Plugin4initEv() called");
    return 0;
}

/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: ArcsoftHdr::~ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdrD1Ev(void) {
    ALOGD("_ZN10ArcsoftHdrD1Ev() called");
    return 0;
}

/* Exported Object: vtable for S_GREEN_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV14S_GREEN_Plugin = NULL;

/* Demangled: S_EISQ_Plugin::printLog(S_EISQ_Plugin::QData const&, NSCam::IImageBuffer*, NSCam::MRectF const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin8printLogERKNS_5QDataEPN5NSCam12IImageBufferERKNS3_6MRectFEPKc(void) {
    ALOGD("_ZN13S_EISQ_Plugin8printLogERKNS_5QDataEPN5NSCam12IImageBufferERKNS3_6MRectFEPKc() called");
    return 0;
}

/* Demangled: S_FB_Plugin::~S_FB_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_PluginD2Ev(void) {
    ALOGD("_ZN11S_FB_PluginD2Ev() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::S_ARC_Bokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_PluginC2Ev(void) {
    ALOGD("_ZN18S_ARC_Bokeh_PluginC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: ArcsoftHdr::now_ms() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr6now_msEv(void) {
    ALOGD("_ZN10ArcsoftHdr6now_msEv() called");
    return 0;
}

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int __fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}

/* Exported Object: vtable for S_DISP_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV13S_DISP_Plugin = NULL;

/* Demangled: S_ASYNC_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin4initEv(void) {
    ALOGD("_ZN14S_ASYNC_Plugin4initEv() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::S_DISP_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_PluginC1Ev(void) {
    ALOGD("_ZN13S_DISP_PluginC1Ev() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void) {
    ALOGD("_ZN14S_GREEN_Plugin4copyEPKN5NSCam12IImageBufferEPS1_() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::configMfllCore(NSCam::IMetadata*, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo14configMfllCoreEPNS_9IMetadataES3_(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo14configMfllCoreEPNS_9IMetadataES3_() called");
    return 0;
}

/* Exported Object: RawHDRPlugImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZZN14RawHDRPlugImpl8propertyEvE4prop = NULL;

/* Demangled: SceneDetector::process(MiImageBuffer*, int, _MIALGO_SD_OUTPUT*, _MIALGO_SD_INPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetector7processEP13MiImageBufferiP17_MIALGO_SD_OUTPUTP16_MIALGO_SD_INPUT(void) {
    ALOGD("_ZN13SceneDetector7processEP13MiImageBufferiP17_MIALGO_SD_OUTPUTP16_MIALGO_SD_INPUT() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > > >::__emplace_unique_key_args<int, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > >(int const&, std::__1::pair<int const, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIiJNS_4pairIKiS9_EEEEENSN_INS_15__hash_iteratorIPNS_11__hash_nodeISA_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_DISP_PluginEE = NULL;

/* Demangled: S_SEMI_Plugin::save2file(NSCam::IImageBuffer*, int, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE(void) {
    ALOGD("_ZN13S_SEMI_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int __getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: S_FB_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin3setEii(void) {
    ALOGD("_ZN11S_FB_Plugin3setEii() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::rotateBuffer(unsigned char const*, NSCam::MSize, unsigned char*, ENUM_ROTATION) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_FOVA_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::HDR2::HDRCaptureParam, std::__1::allocator<NSCam::HDR2::HDRCaptureParam> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for S_SEMI_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV13S_SEMI_Plugin = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: S_FOVA_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin6uninitEv(void) {
    ALOGD("_ZN13S_FOVA_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_RemosaicProviderImpl() */
extern "C" __attribute__((visibility("default"))) int _Z42_CreatePluginProvider_RemosaicProviderImplv(void) {
    ALOGD("_Z42_CreatePluginProvider_RemosaicProviderImplv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::~SwnrPluginProviderImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD0Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE() called");
    return 0;
}

/* Demangled: ArcsoftHdr::process_low_light_hdr(MiImageBuffer*, MiImageBuffer*, int, _tag_ARC_LLHDR_AEINFO&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr21process_low_light_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi(void) {
    ALOGD("_ZN10ArcsoftHdr21process_low_light_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
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

/* Demangled: S_FOVA_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN13S_FOVA_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::execute() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo7executeEv(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo7executeEv() called");
    return 0;
}

/* Exported Object: HDRProviderImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZZN15HDRProviderImpl8propertyEvE4prop = NULL;

/* Demangled: MiAllocBuffer(MiImageBuffer*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13MiAllocBufferP13MiImageBufferiii(void) {
    ALOGD("_Z13MiAllocBufferP13MiImageBufferiii() called");
    return 0;
}

/* Demangled: S_META_Plugin::~S_META_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_PluginD2Ev(void) {
    ALOGD("_ZN13S_META_PluginD2Ev() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_SEMI_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: AIScene::InitVars() */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene8InitVarsEv(void) {
    ALOGD("_ZN7AIScene8InitVarsEv() called");
    return 0;
}

/* Demangled: S_FB_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN11S_FB_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN13S_SEMI_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::getExecutionStatus() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam6plugin12MFNRShotInfo18getExecutionStatusEv(void) {
    ALOGD("_ZNK5NSCam6plugin12MFNRShotInfo18getExecutionStatusEv() called");
    return 0;
}

/* Exported Object: NSCam::v3::pipeline::policy::scenariomgr::gIsLowMemoryDevice */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v38pipeline6policy11scenariomgr18gIsLowMemoryDeviceE = NULL;

/* Demangled: S_DISP_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_DISP_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::~S_GREEN_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_PluginD1Ev(void) {
    ALOGD("_ZN14S_GREEN_PluginD1Ev() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::~S_ARC_Bokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_PluginD0Ev(void) {
    ALOGD("_ZN18S_ARC_Bokeh_PluginD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvENS2_21SwnrPluginProviderImpEEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_META_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void) {
    ALOGD("_ZN13S_META_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE14RawHDRPlugImplEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: S_GREEN_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin6uninitEv(void) {
    ALOGD("_ZN14S_GREEN_Plugin6uninitEv() called");
    return 0;
}

/* Exported Object: guard variable for MFNRProviderImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN16MFNRProviderImpl8propertyEvE4prop = NULL;

/* Demangled: NSCam::plugin::MFNRShotInfo::calMotionVector(NSCam::IMetadata const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo15calMotionVectorEPKNS_9IMetadataEm(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo15calMotionVectorEPKNS_9IMetadataEm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_features_table_by_scenario(int, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr34mtk_get_features_table_by_scenarioEiiRNS3_16ScenarioFeaturesE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin4initEv(void) {
    ALOGD("_ZN13S_EISQ_Plugin4initEv() called");
    return 0;
}

/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE15HDRProviderImplEE = NULL;

/* Exported Object: RawHDRPlugImpl::property()::inited */
extern "C" __attribute__((visibility("default"))) void* _ZZN14RawHDRPlugImpl8propertyEvE6inited = NULL;

/* Demangled: now_ms() */
extern "C" __attribute__((visibility("default"))) int _Z6now_msv(void) {
    ALOGD("_Z6now_msv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::S_ASYNC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_PluginC2Ev(void) {
    ALOGD("_ZN14S_ASYNC_PluginC2Ev() called");
    return 0;
}

/* Demangled: S_FB_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN11S_FB_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::processArcBkh(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_ARC_Bokeh_Plugin::TpBkhInBuffer, S_ARC_Bokeh_Plugin::TpBkhOutBuffer, S_ARC_Bokeh_Plugin::TpBkhInParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin13processArcBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin13processArcBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void) {
    ALOGD("_ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::processTpBkh(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_SEMI_Plugin::TpBkhInBuffer, S_SEMI_Plugin::TpBkhOutBuffer, S_SEMI_Plugin::TpBkhInParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE(void) {
    ALOGD("_ZN13S_SEMI_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp4initEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp4initEv() called");
    return 0;
}

/* Demangled: ArcsoftHdr::load_config(ArcHDRCommonAEParam*, ArcHDRParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr11load_configEP19ArcHDRCommonAEParamP11ArcHDRParam(void) {
    ALOGD("_ZN10ArcsoftHdr11load_configEP19ArcHDRCommonAEParamP11ArcHDRParam() called");
    return 0;
}

/* Demangled: ArcsoftHdr::processHdrChecker(MiImageBuffer*, int, arcsoft_hdr_checker*, _tag_ARC_LLHDR_AEINFO&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr17processHdrCheckerEP13MiImageBufferiP19arcsoft_hdr_checkerR21_tag_ARC_LLHDR_AEINFOii(void) {
    ALOGD("_ZN10ArcsoftHdr17processHdrCheckerEP13MiImageBufferiP19arcsoft_hdr_checkerR21_tag_ARC_LLHDR_AEINFOii() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: MFNRProviderImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZZN16MFNRProviderImpl8propertyEvE4prop = NULL;

/* Demangled: S_ASYNC_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, NSCam::NSPipelinePlugin::SwnrPluginProviderImp> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3YuvENS0_21SwnrPluginProviderImpEEE = NULL;

/* Demangled: S_META_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_META_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin4initEv(void) {
    ALOGD("_ZN13S_SEMI_Plugin4initEv() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::~MFNRShotInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfoD2Ev(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfoD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::onDequeRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp14onDequeRequestEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp14onDequeRequestEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*>&>::push_front(S_EISQ_Plugin::QData* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::~S_SEMI_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_PluginD1Ev(void) {
    ALOGD("_ZN13S_SEMI_PluginD1Ev() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::~S_FOVA_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_PluginD1Ev(void) {
    ALOGD("_ZN13S_FOVA_PluginD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_(void) {
    ALOGD("_ZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE14S_GREEN_PluginEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<VideoRefocusEngine, std::__1::allocator<VideoRefocusEngine> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEEE = NULL;

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: S_META_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN13S_META_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN13S_EISQ_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN13S_SEMI_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN13S_FOVA_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: SceneDetector::SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorC2Ev(void) {
    ALOGD("_ZN13SceneDetectorC2Ev() called");
    return 0;
}

/* Demangled: AIScene::SetMoonMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene11SetMoonModeEb(void) {
    ALOGD("_ZN7AIScene11SetMoonModeEb() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin4initEv(void) {
    ALOGD("_ZN13S_DISP_Plugin4initEv() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::S_EISQ_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_PluginC1Ev(void) {
    ALOGD("_ZN13S_EISQ_PluginC1Ev() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::copyImg(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin7copyImgEP20__tag_ASVL_OFFSCREENS1_(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin7copyImgEP20__tag_ASVL_OFFSCREENS1_() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::updateMfllStrategy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo18updateMfllStrategyEv(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo18updateMfllStrategyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: S_FB_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void) {
    ALOGD("_ZN11S_FB_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEEE = NULL;

/* Exported Object: guard variable for RawHDRPlugImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN14RawHDRPlugImpl8propertyEvE4prop = NULL;

/* Demangled: S_ASYNC_Plugin::~S_ASYNC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_PluginD0Ev(void) {
    ALOGD("_ZN14S_ASYNC_PluginD0Ev() called");
    return 0;
}

/* Demangled: ArcsoftHdr::~ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdrD2Ev(void) {
    ALOGD("_ZN10ArcsoftHdrD2Ev() called");
    return 0;
}

/* Demangled: S_FB_Plugin::S_FB_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_PluginC1Ev(void) {
    ALOGD("_ZN11S_FB_PluginC1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::plugin::MFNRShotInfo*, std::__1::default_delete<NSCam::plugin::MFNRShotInfo>, std::__1::allocator<NSCam::plugin::MFNRShotInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEEE = NULL;

/* Demangled: NSCam::plugin::MFNRShotInfo::doMfnr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo6doMfnrEv(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo6doMfnrEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::HDR2::HDRCaptureParam, std::__1::allocator<NSCam::HDR2::HDRCaptureParam> >::__push_back_slow_path<NSCam::HDR2::HDRCaptureParam const&>(NSCam::HDR2::HDRCaptureParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam4HDR215HDRCaptureParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_META_PluginEE = NULL;

/* Demangled: S_FB_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN11S_FB_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for RemosaicProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV20RemosaicProviderImpl = NULL;

/* Exported Object: FBProviderImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZZN14FBProviderImpl8propertyEvE4prop = NULL;

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::CaptureScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRNS3_16ScenarioFeaturesERNS3_21CaptureScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_DISP_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::S_DISP_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_PluginC2Ev(void) {
    ALOGD("_ZN13S_DISP_PluginC2Ev() called");
    return 0;
}

/* Demangled: S_FB_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN11S_FB_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_ARC_Bokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z40_CreatePluginProvider_S_ARC_Bokeh_Pluginv(void) {
    ALOGD("_Z40_CreatePluginProvider_S_ARC_Bokeh_Pluginv() called");
    return 0;
}

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int __subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}

/* Exported Object: vtable for S_META_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV13S_META_Plugin = NULL;

/* Exported Object: MFNRProviderImpl::property()::inited */
extern "C" __attribute__((visibility("default"))) void* _ZZN16MFNRProviderImpl8propertyEvE6inited = NULL;

/* Demangled: AIScene::~AIScene() */
extern "C" __attribute__((visibility("default"))) int _ZN7AISceneD1Ev(void) {
    ALOGD("_ZN7AISceneD1Ev() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int __unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::MFNRShotInfo(int, int, mfll::MfllMode, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfoC2EiiN4mfll8MfllModeEiib(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfoC2EiiN4mfll8MfllModeEiib() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::processRecord(S_EISQ_Plugin::QData const&, NSCam::IImageBuffer*, NSCam::NSPipelinePlugin::JoinImageInfo_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin13processRecordERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE(void) {
    ALOGD("_ZN13S_EISQ_Plugin13processRecordERKNS_5QDataEPN5NSCam12IImageBufferERNS3_16NSPipelinePlugin15JoinImageInfo_tE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp9negotiateERNS0_14PipelinePluginINS0_3YuvEE9SelectionE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp9negotiateERNS0_14PipelinePluginINS0_3YuvEE9SelectionE() called");
    return 0;
}

/* Exported Object: xmlPath */
extern "C" __attribute__((visibility("default"))) void* xmlPath = NULL;

/* Demangled: AIScene::SetModel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene8SetModelEii(void) {
    ALOGD("_ZN7AIScene8SetModelEii() called");
    return 0;
}

/* Exported Object: vtable for S_ASYNC_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV14S_ASYNC_Plugin = NULL;

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_streaming_config(int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures const&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_streaming_configEiRKNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin4initEv(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin4initEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3RawE20RemosaicProviderImplEE = NULL;

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int __netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin4initEv(void) {
    ALOGD("_ZN13S_FOVA_Plugin4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::~SwnrPluginProviderImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: SceneDetector::~SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorD0Ev(void) {
    ALOGD("_ZN13SceneDetectorD0Ev() called");
    return 0;
}

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int __eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable = NULL;

/* Demangled: S_META_Plugin::S_META_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_PluginC1Ev(void) {
    ALOGD("_ZN13S_META_PluginC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_META_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_META_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::matchFormat(NSCam::EImageFormat) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13S_EISQ_Plugin11matchFormatEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZNK13S_EISQ_Plugin11matchFormatEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Exported Object: vtable for S_EISQ_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV13S_EISQ_Plugin = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int __gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::addDataToMfnrCore(android::sp<mfll::IMfllImageBuffer>&, android::sp<mfll::IMfllImageBuffer>&, mfll::MfllMotionVector, NSCam::IMetadata*, NSCam::IMetadata*, NSCam::IMetadata*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo17addDataToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEES7_NS4_16MfllMotionVectorEPNS_9IMetadataESA_SA_i(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo17addDataToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEES7_NS4_16MfllMotionVectorEPNS_9IMetadataESA_SA_i() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_RawHDRPlugImpl() */
extern "C" __attribute__((visibility("default"))) int _Z36_CreatePluginProvider_RawHDRPlugImplv(void) {
    ALOGD("_Z36_CreatePluginProvider_RawHDRPlugImplv() called");
    return 0;
}

/* Demangled: S_FB_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin6uninitEv(void) {
    ALOGD("_ZN11S_FB_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::releaseWorkingBuffer(char const*, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN13S_SEMI_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_FOVA_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z35_CreatePluginProvider_S_FOVA_Pluginv(void) {
    ALOGD("_Z35_CreatePluginProvider_S_FOVA_Pluginv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: S_META_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin8propertyEv(void) {
    ALOGD("_ZN13S_META_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN13S_DISP_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::~S_GREEN_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_PluginD2Ev(void) {
    ALOGD("_ZN14S_GREEN_PluginD2Ev() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14S_GREEN_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void) {
    ALOGD("_ZNK14S_GREEN_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::~S_ARC_Bokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_PluginD1Ev(void) {
    ALOGD("_ZN18S_ARC_Bokeh_PluginD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::plugin::MFNRShotInfo*, std::__1::default_delete<NSCam::plugin::MFNRShotInfo>, std::__1::allocator<NSCam::plugin::MFNRShotInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: MFNRProviderImpl::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection&)::mfllCoreVersion */
extern "C" __attribute__((visibility("default"))) void* _ZZN16MFNRProviderImpl9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEE9SelectionEE15mfllCoreVersion = NULL;

/* Demangled: std::__1::deque<void*, std::__1::allocator<void*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: vtable for HDRProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV15HDRProviderImpl = NULL;

/* Demangled: _CreatePluginProvider_S_ASYNC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z36_CreatePluginProvider_S_ASYNC_Pluginv(void) {
    ALOGD("_Z36_CreatePluginProvider_S_ASYNC_Pluginv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*> >::push_back(S_EISQ_Plugin::QData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_GREEN_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: retrieveGmvInfo(NSCam::IMetadata const*, int&, int&, NSCam::MSize&) */
extern "C" __attribute__((visibility("default"))) int _Z15retrieveGmvInfoPKN5NSCam9IMetadataERiS3_RNS_5MSizeE(void) {
    ALOGD("_Z15retrieveGmvInfoPKN5NSCam9IMetadataERiS3_RNS_5MSizeE() called");
    return 0;
}

/* Demangled: ArcsoftHdr::init() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr4initEv(void) {
    ALOGD("_ZN10ArcsoftHdr4initEv() called");
    return 0;
}

/* Demangled: ArcsoftHdr::process(MiImageBuffer*, MiImageBuffer*, int, int*, _tag_ARC_LLHDR_AEINFO&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr7processEP13MiImageBufferS1_iPiR21_tag_ARC_LLHDR_AEINFOi(void) {
    ALOGD("_ZN10ArcsoftHdr7processEP13MiImageBufferS1_iPiR21_tag_ARC_LLHDR_AEINFOi() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::~S_DISP_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_PluginD0Ev(void) {
    ALOGD("_ZN13S_DISP_PluginD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: ArcsoftHdr::process_hdr(MiImageBuffer*, MiImageBuffer*, int, _tag_ARC_LLHDR_AEINFO&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr11process_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi(void) {
    ALOGD("_ZN10ArcsoftHdr11process_hdrEP13MiImageBufferS1_iR21_tag_ARC_LLHDR_AEINFOi() called");
    return 0;
}

/* Exported Object: vtable for ArcsoftHdr */
extern "C" __attribute__((visibility("default"))) void* _ZTV10ArcsoftHdr = NULL;

/* Demangled: S_GREEN_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void) {
    ALOGD("_ZN14S_GREEN_Plugin8drawMaskEPN5NSCam12IImageBufferEffff() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin8propertyEv(void) {
    ALOGD("_ZN13S_FOVA_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: AIScene::SetZoom(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene7SetZoomEf(void) {
    ALOGD("_ZN7AIScene7SetZoomEf() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_ASYNC_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::prepareTpBkhInOutData(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_ARC_Bokeh_Plugin::TpBkhInBuffer*, S_ARC_Bokeh_Plugin::TpBkhOutBuffer*, S_ARC_Bokeh_Plugin::TpBkhInParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE() called");
    return 0;
}

/* Exported Object: HDRProviderImpl::property()::inited */
extern "C" __attribute__((visibility("default"))) void* _ZZN15HDRProviderImpl8propertyEvE6inited = NULL;

/* Demangled: S_DISP_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN13S_DISP_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_EISQ_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::BufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE(void) {
    ALOGD("_ZN13S_EISQ_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*> >::push_front(S_EISQ_Plugin::QData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: AIScene::NeedIsoAndExpTime() */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene17NeedIsoAndExpTimeEv(void) {
    ALOGD("_ZN7AIScene17NeedIsoAndExpTimeEv() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::~S_SEMI_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_PluginD2Ev(void) {
    ALOGD("_ZN13S_SEMI_PluginD2Ev() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::~S_FOVA_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_PluginD2Ev(void) {
    ALOGD("_ZN13S_FOVA_PluginD2Ev() called");
    return 0;
}

/* Demangled: yuv420sp2rgba(unsigned char*, unsigned char*, unsigned char*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13yuv420sp2rgbaPhS_S_iiii(void) {
    ALOGD("_Z13yuv420sp2rgbaPhS_S_iiii() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void) {
    ALOGD("_ZN14S_GREEN_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::save2file(NSCam::IImageBuffer*, int, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: guard variable for HDRProviderImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN15HDRProviderImpl8propertyEvE4prop = NULL;

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::waitForIdle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp11waitForIdleEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp11waitForIdleEv() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::imgProcess(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin10imgProcessENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_SA_() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin8propertyEv(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_back(void**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: createWorkingBuffer(char const*, int, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _Z19createWorkingBufferPKciN5NSCam5MSizeE(void) {
    ALOGD("_Z19createWorkingBufferPKciN5NSCam5MSizeE() called");
    return 0;
}

/* Exported Object: guard variable for FBProviderImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN14FBProviderImpl8propertyEvE4prop = NULL;

/* Demangled: S_EISQ_Plugin::S_EISQ_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_PluginC2Ev(void) {
    ALOGD("_ZN13S_EISQ_PluginC2Ev() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::waitExecution(long*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo13waitExecutionEPl(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo13waitExecutionEPl() called");
    return 0;
}

/* Exported Object: FBProviderImpl::property()::inited */
extern "C" __attribute__((visibility("default"))) void* _ZZN14FBProviderImpl8propertyEvE6inited = NULL;

/* Demangled: ArcsoftHdr::ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdrC1Ev(void) {
    ALOGD("_ZN10ArcsoftHdrC1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::__emplace_unique_key_args<int, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&>(int const&, std::__1::pair<int const, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE25__emplace_unique_key_argsIiJRKNS_4pairIKiS7_EEEEENSL_INS_15__hash_iteratorIPNS_11__hash_nodeIS8_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: S_META_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin3setEii(void) {
    ALOGD("_ZN13S_META_Plugin3setEii() called");
    return 0;
}

/* Exported Object: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: dumpBuffer(NSCam::IImageBuffer*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z10dumpBufferPN5NSCam12IImageBufferEPKcS3_(void) {
    ALOGD("_Z10dumpBufferPN5NSCam12IImageBufferEPKcS3_() called");
    return 0;
}

/* Exported Object: vtable for RawHDRPlugImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV14RawHDRPlugImpl = NULL;

/* Demangled: S_ASYNC_Plugin::~S_ASYNC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_PluginD1Ev(void) {
    ALOGD("_ZN14S_ASYNC_PluginD1Ev() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin8propertyEv(void) {
    ALOGD("_ZN13S_EISQ_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: S_FB_Plugin::S_FB_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_PluginC2Ev(void) {
    ALOGD("_ZN11S_FB_PluginC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: AIScene::NeedCheckCameraId() */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene17NeedCheckCameraIdEv(void) {
    ALOGD("_ZN7AIScene17NeedCheckCameraIdEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ASYNC_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE14S_ASYNC_PluginEE = NULL;

/* Demangled: S_FB_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin4initEv(void) {
    ALOGD("_ZN11S_FB_Plugin4initEv() called");
    return 0;
}

/* Exported Object: RawHDRPlugImpl::getCurrentCaptureParam(bool)::__locker */
extern "C" __attribute__((visibility("default"))) void* _ZZN14RawHDRPlugImpl22getCurrentCaptureParamEbE8__locker = NULL;

/* Demangled: S_ASYNC_Plugin::simulate(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin8simulateEPN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin8simulateEPN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_EISQ_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z35_CreatePluginProvider_S_EISQ_Pluginv(void) {
    ALOGD("_Z35_CreatePluginProvider_S_EISQ_Pluginv() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin6uninitEv(void) {
    ALOGD("_ZN13S_EISQ_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::getMfnrCoreVersionString() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo24getMfnrCoreVersionStringEv(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo24getMfnrCoreVersionStringEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::SwnrPluginProviderImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_DISP_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_DISP_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: ArcsoftHdr::WriteFileLog(char*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr12WriteFileLogEPcPKcz(void) {
    ALOGD("_ZN10ArcsoftHdr12WriteFileLogEPcPKcz() called");
    return 0;
}

/* Demangled: S_FB_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin8propertyEv(void) {
    ALOGD("_ZN11S_FB_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: AIScene::~AIScene() */
extern "C" __attribute__((visibility("default"))) int _ZN7AISceneD2Ev(void) {
    ALOGD("_ZN7AISceneD2Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: S_META_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin6uninitEv(void) {
    ALOGD("_ZN13S_META_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_back(void**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::imgCpy2Target(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin13imgCpy2TargetENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_(void) {
    ALOGD("_ZN13S_FOVA_Plugin13imgCpy2TargetENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS2_12IImageBufferESA_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE18S_ARC_Bokeh_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin8propertyEv(void) {
    ALOGD("_ZN13S_DISP_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_EISQ_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::plugin::MFNRShotInfo*, std::__1::default_delete<NSCam::plugin::MFNRShotInfo>, std::__1::allocator<NSCam::plugin::MFNRShotInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam6plugin12MFNRShotInfoENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEEE = NULL;

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int __multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::~SwnrPluginProviderImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD2Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpD2Ev() called");
    return 0;
}

/* Demangled: SceneDetector::~SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorD1Ev(void) {
    ALOGD("_ZN13SceneDetectorD1Ev() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: S_META_Plugin::S_META_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_PluginC2Ev(void) {
    ALOGD("_ZN13S_META_PluginC2Ev() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void) {
    ALOGD("_ZN13S_EISQ_Plugin4copyEPKN5NSCam12IImageBufferEPS1_() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::~S_EISQ_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_PluginD0Ev(void) {
    ALOGD("_ZN13S_EISQ_PluginD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE11S_FB_PluginEE = NULL;

/* Demangled: S_ARC_Bokeh_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin6uninitEv(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin6uninitEv() called");
    return 0;
}

/* Exported Object: vtable for MFNRProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV16MFNRProviderImpl = NULL;

/* Demangled: S_ASYNC_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin6uninitEv(void) {
    ALOGD("_ZN14S_ASYNC_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_DISP_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN13S_EISQ_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: S_FB_Plugin::~S_FB_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_PluginD0Ev(void) {
    ALOGD("_ZN11S_FB_PluginD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FB_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE11S_FB_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::S_GREEN_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_PluginC1Ev(void) {
    ALOGD("_ZN14S_GREEN_PluginC1Ev() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::save2file(NSCam::IImageBuffer*, int, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE(void) {
    ALOGD("_ZN13S_FOVA_Plugin9save2fileEPN5NSCam12IImageBufferEiPNS0_9IMetadataE() called");
    return 0;
}

/* Demangled: S_META_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_META_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::~S_ARC_Bokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_PluginD2Ev(void) {
    ALOGD("_ZN18S_ARC_Bokeh_PluginD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiN5NSCam2v38pipeline6policy11scenariomgr16ScenarioFeaturesEEENS_22__unordered_map_hasherIiS8_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS8_NS_8equal_toIiEELb1EEENS_9allocatorIS8_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp5abortERNSt3__16vectorINS2_10shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS2_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp5abortERNSt3__16vectorINS2_10shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEENS2_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int __cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::~S_DISP_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_PluginD1Ev(void) {
    ALOGD("_ZN13S_DISP_PluginD1Ev() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin3setEii(void) {
    ALOGD("_ZN14S_GREEN_Plugin3setEii() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::prepareTpBkhInOutData(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_SEMI_Plugin::TpBkhInBuffer*, S_SEMI_Plugin::TpBkhOutBuffer*, S_SEMI_Plugin::TpBkhInParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE(void) {
    ALOGD("_ZN13S_SEMI_Plugin21prepareTpBkhInOutDataENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEEPNS_13TpBkhInBufferEPNS_14TpBkhOutBufferEPNS_12TpBkhInParamE() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::initMfnrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo12initMfnrCoreEv(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo12initMfnrCoreEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_3YuvE14FBProviderImplEE = NULL;

/* Demangled: S_ASYNC_Plugin::acquire(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin7acquireERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE() called");
    return 0;
}

/* Demangled: setOffScreen(__tag_ASVL_OFFSCREEN*, MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _Z12setOffScreenP20__tag_ASVL_OFFSCREENP13MiImageBuffer(void) {
    ALOGD("_Z12setOffScreenP20__tag_ASVL_OFFSCREENP13MiImageBuffer() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::processASD(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin10processASDEPN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin10processASDEPN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::property() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin8propertyEv(void) {
    ALOGD("_ZN14S_ASYNC_Plugin8propertyEv() called");
    return 0;
}

/* Demangled: ArcsoftHdr::getUserData() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdr11getUserDataEv(void) {
    ALOGD("_ZN10ArcsoftHdr11getUserDataEv() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN14S_GREEN_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE6rehashEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEEE = NULL;

/* Demangled: _CreatePluginProvider_S_META_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z35_CreatePluginProvider_S_META_Pluginv(void) {
    ALOGD("_Z35_CreatePluginProvider_S_META_Pluginv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::onProcessFuture() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp15onProcessFutureEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp15onProcessFutureEv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin3setEii(void) {
    ALOGD("_ZN14S_ASYNC_Plugin3setEii() called");
    return 0;
}

/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJOjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: guard variable for HDRProviderImpl::getCurrentCaptureParam(bool)::__locker */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN15HDRProviderImpl22getCurrentCaptureParamEbE8__locker = NULL;

/* Exported Object: vtable for SceneDetector */
extern "C" __attribute__((visibility("default"))) void* _ZTV13SceneDetector = NULL;

/* Demangled: AIScene::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene4InitEv(void) {
    ALOGD("_ZN7AIScene4InitEv() called");
    return 0;
}

/* Exported Object: vtable for S_ARC_Bokeh_Plugin */
extern "C" __attribute__((visibility("default"))) void* _ZTV18S_ARC_Bokeh_Plugin = NULL;

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int __addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Demangled: S_META_Plugin::~S_META_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_PluginD0Ev(void) {
    ALOGD("_ZN13S_META_PluginD0Ev() called");
    return 0;
}

/* Demangled: S_FB_Plugin::matchFormat(NSCam::EImageFormat) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11S_FB_Plugin11matchFormatEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZNK11S_FB_Plugin11matchFormatEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_GREEN_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_SEMI_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_SEMI_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_ARC_Bokeh_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE18S_ARC_Bokeh_PluginEE = NULL;

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int __floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_capture_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr24mtk_get_capture_scenarioERiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_EISQ_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_EISQ_PluginEE = NULL;

/* Demangled: S_FB_Plugin::copy(NSCam::IImageBuffer const*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin4copyEPKN5NSCam12IImageBufferEPS1_(void) {
    ALOGD("_ZN11S_FB_Plugin4copyEPKN5NSCam12IImageBufferEPS1_() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::S_SEMI_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_PluginC1Ev(void) {
    ALOGD("_ZN13S_SEMI_PluginC1Ev() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::S_FOVA_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_PluginC1Ev(void) {
    ALOGD("_ZN13S_FOVA_PluginC1Ev() called");
    return 0;
}

/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::__erase_unique<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIjEEmRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIjEEmRKT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<NSCam::plugin::MFNRShotInfo> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN5NSCam6plugin12MFNRShotInfoEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_FOVA_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Exported Object: HDRProviderImpl::getCurrentCaptureParam(bool)::__locker */
extern "C" __attribute__((visibility("default"))) void* _ZZN15HDRProviderImpl22getCurrentCaptureParamEbE8__locker = NULL;

/* Demangled: AIScene::HasWideAngleRecommend() */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene21HasWideAngleRecommendEv(void) {
    ALOGD("_ZN7AIScene21HasWideAngleRecommendEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: S_DISP_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_DISP_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_FBProviderImpl() */
extern "C" __attribute__((visibility("default"))) int _Z36_CreatePluginProvider_FBProviderImplv(void) {
    ALOGD("_Z36_CreatePluginProvider_FBProviderImplv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache, std::__1::allocator<NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::Cache> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE5CacheENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp3setEii(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp3setEii() called");
    return 0;
}

/* Demangled: ArcsoftHdr::ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdrC2Ev(void) {
    ALOGD("_ZN10ArcsoftHdrC2Ev() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void) {
    ALOGD("_ZN13S_DISP_Plugin8drawMaskEPN5NSCam12IImageBufferEffff() called");
    return 0;
}

/* Demangled: S_FB_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void) {
    ALOGD("_ZN11S_FB_Plugin8drawMaskEPN5NSCam12IImageBufferEffff() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_GREEN_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z36_CreatePluginProvider_S_GREEN_Pluginv(void) {
    ALOGD("_Z36_CreatePluginProvider_S_GREEN_Pluginv() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_GREEN_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::processXiaomiHDRCheck(NSCam::IImageBuffer*, S_ASYNC_Data&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin21processXiaomiHDRCheckEPN5NSCam12IImageBufferER12S_ASYNC_Data(void) {
    ALOGD("_ZN14S_ASYNC_Plugin21processXiaomiHDRCheckEPN5NSCam12IImageBufferER12S_ASYNC_Data() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::~S_ASYNC_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_PluginD2Ev(void) {
    ALOGD("_ZN14S_ASYNC_PluginD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::property() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp8propertyEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp8propertyEv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_EISQ_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Exported Object: guard variable for MFNRProviderImpl::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Selection&)::mfllCoreVersion */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN16MFNRProviderImpl9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_10MultiFrameEE9SelectionEE15mfllCoreVersion = NULL;

/* Demangled: NSCam::plugin::MFNRShotInfo::setOutputBufToMfnrCore(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo22setOutputBufToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEE(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo22setOutputBufToMfnrCoreERN7android2spIN4mfll16IMfllImageBufferEEE() called");
    return 0;
}

/* Exported Object: NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTable */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E11sCacheTable = NULL;

/* Demangled: _CreatePluginProvider_MFNRProviderImpl() */
extern "C" __attribute__((visibility("default"))) int _Z38_CreatePluginProvider_MFNRProviderImplv(void) {
    ALOGD("_Z38_CreatePluginProvider_MFNRProviderImplv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::plugin::MFNRShotInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam6plugin12MFNRShotInfoE = NULL;

/* Demangled: S_DISP_Plugin::config(NSCam::NSPipelinePlugin::Join::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE(void) {
    ALOGD("_ZN13S_DISP_Plugin6configERKN5NSCam16NSPipelinePlugin4Join11ConfigParamE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin3setEii(void) {
    ALOGD("_ZN13S_EISQ_Plugin3setEii() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<bool>::copy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIbE4copyEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIbE4copyEv() called");
    return 0;
}

/* Demangled: AIScene::AIScene() */
extern "C" __attribute__((visibility("default"))) int _ZN7AISceneC1Ev(void) {
    ALOGD("_ZN7AISceneC1Ev() called");
    return 0;
}

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int __fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::~MFNRShotInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfoD0Ev(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfoD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<int>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE4moveEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_GREEN_Plugin> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE14S_GREEN_PluginEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for FBProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV14FBProviderImpl = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_FOVA_PluginEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6uninitEv(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6uninitEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<S_EISQ_Plugin::QData*, std::__1::allocator<S_EISQ_Plugin::QData*>&>::push_back(S_EISQ_Plugin::QData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN13S_EISQ_Plugin5QDataERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_FOVA_Plugin> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinE13S_FOVA_PluginEENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::SwnrPluginProviderImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC1Ev(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImpC1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::policy::scenariomgr::mtk_get_streaming_scenario(int&, NSCam::v3::pipeline::policy::scenariomgr::ScenarioFeatures&, NSCam::v3::pipeline::policy::scenariomgr::StreamingScenarioConfig&, int, NSCam::v3::pipeline::policy::scenariomgr::ScenarioHint const&, NSCam::IMetadata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v38pipeline6policy11scenariomgr26mtk_get_streaming_scenarioERiRNS3_16ScenarioFeaturesERNS3_23StreamingScenarioConfigEiRKNS3_12ScenarioHintEPKNS_9IMetadataE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::copyCrop(NSCam::IImageBuffer const*, NSCam::IImageBuffer*, NSCam::MRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin8copyCropEPKN5NSCam12IImageBufferEPS1_RKNS0_5MRectE(void) {
    ALOGD("_ZN13S_EISQ_Plugin8copyCropEPKN5NSCam12IImageBufferEPS1_RKNS0_5MRectE() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_HDRProviderImpl() */
extern "C" __attribute__((visibility("default"))) int _Z37_CreatePluginProvider_HDRProviderImplv(void) {
    ALOGD("_Z37_CreatePluginProvider_HDRProviderImplv() called");
    return 0;
}

/* Demangled: SceneDetector::~SceneDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN13SceneDetectorD2Ev(void) {
    ALOGD("_ZN13SceneDetectorD2Ev() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::MetadataHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14MetadataHandleEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam2v38pipeline6policy11scenariomgr10FeatureSetENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_EISQ_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::~S_EISQ_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_PluginD1Ev(void) {
    ALOGD("_ZN13S_EISQ_PluginD1Ev() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::getP2Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN13S_SEMI_Plugin12getP2SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin3setEii(void) {
    ALOGD("_ZN13S_SEMI_Plugin3setEii() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::__map_value_compare<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::less<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, std::__1::__tree_node<std::__1::__value_type<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>, std::__1::future<int> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE5eraseENS_21__tree_const_iteratorISC_PNS_11__tree_nodeISC_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_3YuvEE7RequestEEENS_6futureIiEEEENS_19__map_value_compareIS9_SC_NS_4lessIS9_EELb1EEENS_9allocatorISC_EEE5eraseENS_21__tree_const_iteratorISC_PNS_11__tree_nodeISC_PvEElEE() called");
    return 0;
}

/* Demangled: ArcsoftHdr::~ArcsoftHdr() */
extern "C" __attribute__((visibility("default"))) int _ZN10ArcsoftHdrD0Ev(void) {
    ALOGD("_ZN10ArcsoftHdrD0Ev() called");
    return 0;
}

/* Demangled: S_FB_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN11S_FB_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_front(void**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__push_back_slow_path<NSCam::MRect>(NSCam::MRect&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: S_FB_Plugin::~S_FB_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_PluginD1Ev(void) {
    ALOGD("_ZN11S_FB_PluginD1Ev() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::S_GREEN_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_PluginC2Ev(void) {
    ALOGD("_ZN14S_GREEN_PluginC2Ev() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::S_ARC_Bokeh_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_PluginC1Ev(void) {
    ALOGD("_ZN18S_ARC_Bokeh_PluginC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<VideoRefocusEngine, std::__1::allocator<VideoRefocusEngine> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI18VideoRefocusEngineNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: AIScene::NeedSetMoonMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene15NeedSetMoonModeEv(void) {
    ALOGD("_ZN7AIScene15NeedSetMoonModeEv() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::release(std::__1::shared_ptr<NSCam::NSPipelinePlugin::BufferHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE(void) {
    ALOGD("_ZN13S_EISQ_Plugin7releaseERKNSt3__110shared_ptrIN5NSCam16NSPipelinePlugin12BufferHandleEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE16MFNRProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Yuv, FBProviderImpl> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3YuvE14FBProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: MiCopyBuffer(MiImageBuffer*, MiImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _Z12MiCopyBufferP13MiImageBufferS0_(void) {
    ALOGD("_Z12MiCopyBufferP13MiImageBufferS0_() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin3setEii(void) {
    ALOGD("_ZN13S_DISP_Plugin3setEii() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_Plugin6uninitEv(void) {
    ALOGD("_ZN13S_DISP_Plugin6uninitEv() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::getP1Setting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin12getP1SettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_META_Plugin::process(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::RequestCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE(void) {
    ALOGD("_ZN13S_META_Plugin7processENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS1_INS6_15RequestCallbackEEE() called");
    return 0;
}

/* Demangled: S_DISP_Plugin::~S_DISP_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_DISP_PluginD2Ev(void) {
    ALOGD("_ZN13S_DISP_PluginD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<S_EISQ_Plugin::QData, std::__1::allocator<S_EISQ_Plugin::QData> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::abort(std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN14S_GREEN_Plugin5abortERNSt3__16vectorINS0_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_4JoinEE7RequestEEENS0_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::MFNRShotInfo(int, int, mfll::MfllMode, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfoC1EiiN4mfll8MfllModeEiib(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfoC1EiiN4mfll8MfllModeEiib() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, MFNRProviderImpl> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_10MultiFrameE16MFNRProviderImplEE = NULL;

/* Demangled: AIScene::NeedCheckZoom() */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene13NeedCheckZoomEv(void) {
    ALOGD("_ZN7AIScene13NeedCheckZoomEv() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_Plugin3setEii(void) {
    ALOGD("_ZN13S_FOVA_Plugin3setEii() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Raw, RemosaicProviderImpl> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_3RawE20RemosaicProviderImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: MiDumpBuffer(MiImageBuffer*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z12MiDumpBufferP13MiImageBufferPKc(void) {
    ALOGD("_Z12MiDumpBufferP13MiImageBufferPKc() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, RawHDRPlugImpl> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE14RawHDRPlugImplEENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_EISQ_Plugin::drawMask(NSCam::IImageBuffer*, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin8drawMaskEPN5NSCam12IImageBufferEffff(void) {
    ALOGD("_ZN13S_EISQ_Plugin8drawMaskEPN5NSCam12IImageBufferEffff() called");
    return 0;
}

/* Demangled: NSCam::plugin::MFNRShotInfo::doCancel() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam6plugin12MFNRShotInfo8doCancelEv(void) {
    ALOGD("_ZN5NSCam6plugin12MFNRShotInfo8doCancelEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request>, std::__1::allocator<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&>(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_10MultiFrameEE7RequestEEENS_9allocatorIS8_EEE21__push_back_slow_pathIRKS8_EEvOT_() called");
    return 0;
}

/* Demangled: AIScene::ForwardAISceneNet(MiImageBuffer*, miAiAsd_t*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AIScene17ForwardAISceneNetEP13MiImageBufferP9miAiAsd_tiii(void) {
    ALOGD("_ZN7AIScene17ForwardAISceneNetEP13MiImageBufferP9miAiAsd_tiii() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::checkConfig(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14S_ASYNC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_(void) {
    ALOGD("_ZNK14S_ASYNC_Plugin11checkConfigEPKN5NSCam12IImageBufferES3_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultEEEEENS_22__unordered_map_hasherIiSA_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiSA_NS_8equal_toIiEELb1EEENS_9allocatorISA_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::rotateBuffer(unsigned char const*, NSCam::MSize, unsigned char*, ENUM_ROTATION) */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION(void) {
    ALOGD("_ZN13S_SEMI_Plugin12rotateBufferEPKhN5NSCam5MSizeEPh13ENUM_ROTATION() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, S_SEMI_Plugin> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinE13S_SEMI_PluginEE = NULL;

/* Demangled: S_ARC_Bokeh_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: int std::__1::uniform_int_distribution<int>::operator()<std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul> >(std::__1::linear_congruential_engine<unsigned long, 48271ul, 0ul, 2147483647ul>&, std::__1::uniform_int_distribution<int>::param_type const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE(void) {
    ALOGD("_ZNSt3__124uniform_int_distributionIiEclINS_26linear_congruential_engineImLm48271ELm0ELm2147483647EEEEEiRT_RKNS1_10param_typeE() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::mergeImg(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin8mergeImgEP20__tag_ASVL_OFFSCREENS1_i(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin8mergeImgEP20__tag_ASVL_OFFSCREENS1_i() called");
    return 0;
}

/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::MultiFrame, HDRProviderImpl> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_10MultiFrameE15HDRProviderImplEENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: S_META_Plugin::~S_META_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_PluginD1Ev(void) {
    ALOGD("_ZN13S_META_PluginD1Ev() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::releaseWorkingBuffer(char const*, android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin20releaseWorkingBufferEPKcRN7android2spIN5NSCam12IImageBufferEEE() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_SwnrPluginProviderImp() */
extern "C" __attribute__((visibility("default"))) int _Z43_CreatePluginProvider_SwnrPluginProviderImpv(void) {
    ALOGD("_Z43_CreatePluginProvider_SwnrPluginProviderImpv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult, std::__1::allocator<NSCam::v3::pipeline::policy::sensorcontrol::SensorControlResult> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy13sensorcontrol19SensorControlResultENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: S_META_Plugin::init() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_META_Plugin4initEv(void) {
    ALOGD("_ZN13S_META_Plugin4initEv() called");
    return 0;
}

/* Demangled: S_FB_Plugin::getConfigSetting(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN11S_FB_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN11S_FB_Plugin16getConfigSettingERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::matchFormat(NSCam::EImageFormat) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14S_GREEN_Plugin11matchFormatEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZNK14S_GREEN_Plugin11matchFormatEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: S_SEMI_Plugin::S_SEMI_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_SEMI_PluginC2Ev(void) {
    ALOGD("_ZN13S_SEMI_PluginC2Ev() called");
    return 0;
}

/* Demangled: S_FOVA_Plugin::S_FOVA_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_FOVA_PluginC2Ev(void) {
    ALOGD("_ZN13S_FOVA_PluginC2Ev() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::processMiHdrChecker(NSCam::IImageBuffer*, NSCam::MSize, unsigned int, NSCam::EImageFormat, int, int, XiaomiAEInfo_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin19processMiHdrCheckerEPN5NSCam12IImageBufferENS0_5MSizeEjNS0_12EImageFormatEii14XiaomiAEInfo_Ti(void) {
    ALOGD("_ZN14S_ASYNC_Plugin19processMiHdrCheckerEPN5NSCam12IImageBufferENS0_5MSizeEjNS0_12EImageFormatEii14XiaomiAEInfo_Ti() called");
    return 0;
}

/* Demangled: std::__1::deque<S_EISQ_Plugin::QData, std::__1::allocator<S_EISQ_Plugin::QData> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN13S_EISQ_Plugin5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: S_GREEN_Plugin::~S_GREEN_Plugin() */
extern "C" __attribute__((visibility("default"))) int _ZN14S_GREEN_PluginD0Ev(void) {
    ALOGD("_ZN14S_GREEN_PluginD0Ev() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::processTpBkh(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Request>, S_ARC_Bokeh_Plugin::TpBkhInBuffer, S_ARC_Bokeh_Plugin::TpBkhOutBuffer, S_ARC_Bokeh_Plugin::TpBkhInParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin12processTpBkhENSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS3_4JoinEE7RequestEEENS_13TpBkhInBufferENS_14TpBkhOutBufferERKNS_12TpBkhInParamE() called");
    return 0;
}

/* Demangled: S_ARC_Bokeh_Plugin::set(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18S_ARC_Bokeh_Plugin3setEii(void) {
    ALOGD("_ZN18S_ARC_Bokeh_Plugin3setEii() called");
    return 0;
}

/* Demangled: android::Vector<std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::MultiFrame>::Request> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINSt3__110shared_ptrIN5NSCam16NSPipelinePlugin14PipelinePluginINS4_10MultiFrameEE7RequestEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::IMetadata, std::__1::allocator<NSCam::IMetadata> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam9IMetadataENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::doSwnr(std::__1::shared_ptr<NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Yuv>::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6doSwnrENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEE(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp6doSwnrENSt3__110shared_ptrINS0_14PipelinePluginINS0_3YuvEE7RequestEEE() called");
    return 0;
}

/* Exported Object: guard variable for NSCam::NSTPIUtil::SingletonCache<S_ASYNC_Data>::getCache(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&)::sCacheTableMutex */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam9NSTPIUtil14SingletonCacheI12S_ASYNC_DataE8getCacheEjRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEESC_E16sCacheTableMutex = NULL;

/* Demangled: S_EISQ_Plugin::clearQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN13S_EISQ_Plugin10clearQueueEv(void) {
    ALOGD("_ZN13S_EISQ_Plugin10clearQueueEv() called");
    return 0;
}

/* Demangled: _CreatePluginProvider_S_FB_Plugin() */
extern "C" __attribute__((visibility("default"))) int _Z33_CreatePluginProvider_S_FB_Pluginv(void) {
    ALOGD("_Z33_CreatePluginProvider_S_FB_Pluginv() called");
    return 0;
}

/* Demangled: NSCam::NSPipelinePlugin::SwnrPluginProviderImp::queryNrThreshold(long, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp16queryNrThresholdElRiS2_(void) {
    ALOGD("_ZN5NSCam16NSPipelinePlugin21SwnrPluginProviderImp16queryNrThresholdElRiS2_() called");
    return 0;
}

/* Demangled: S_ASYNC_Plugin::negotiate(NSCam::NSPipelinePlugin::PipelinePlugin<NSCam::NSPipelinePlugin::Join>::Selection&) */
extern "C" __attribute__((visibility("default"))) int _ZN14S_ASYNC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE(void) {
    ALOGD("_ZN14S_ASYNC_Plugin9negotiateERN5NSCam16NSPipelinePlugin14PipelinePluginINS1_4JoinEE9SelectionE() called");
    return 0;
}
