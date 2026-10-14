/*
 * Reverse-Engineered Source for: displayfeature.default.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "displayfeature_default"

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
#include "displayfeature_default.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int displayfeature_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int displayfeature_default_close(struct hw_device_t* dev);

static struct hw_module_methods_t displayfeature_default_module_methods = {
    .open = displayfeature_default_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "displayfeature",
    .name = "Begonia displayfeature_default Module",
    .author = "LineageOS / Community RE",
    .methods = &displayfeature_default_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int displayfeature_default_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int displayfeature_default_close(struct hw_device_t* dev) {
    ALOGI("Closing displayfeature_default module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setBacklightOffset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing18setBacklightOffsetEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing18setBacklightOffsetEi() called");
    return 0;
}

/* Demangled: android::DisplayUtil::xy_to_cct(double, double, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil9xy_to_cctEddPd(void) {
    ALOGD("_ZN7android11DisplayUtil9xy_to_cctEddPd() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::DisplayFeatureHal(hw_module_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHalC1EPK11hw_module_t(void) {
    ALOGD("_ZN7android17DisplayFeatureHalC1EPK11hw_module_t() called");
    return 0;
}

/* Demangled: android::SensorNotifyThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18SensorNotifyThread10threadLoopEv(void) {
    ALOGD("_ZN7android18SensorNotifyThread10threadLoopEv() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::isSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureState9isSupportEv(void) {
    ALOGD("_ZN7android19DisplayFeatureState9isSupportEv() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>& android::sp<android::DisplayFeatureState>::operator=<android::QualcommDPPSMode>(android::QualcommDPPSMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSINS_16QualcommDPPSModeEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSINS_16QualcommDPPSModeEEERS2_PT_() called");
    return 0;
}

/* Exported Object: vtable for android::DisplayEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13DisplayEffectE = NULL;

/* Exported Object: vtable for android::MTKModeImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11MTKModeImplE = NULL;

/* Demangled: android::DisplayEffect::HandleACNormal(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect14HandleACNormalEii(void) {
    ALOGD("_ZN7android13DisplayEffect14HandleACNormalEii() called");
    return 0;
}

/* Demangled: android::DisplayEffect::handleSensorControl(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect19handleSensorControlEii(void) {
    ALOGD("_ZN7android13DisplayEffect19handleSensorControlEii() called");
    return 0;
}

/* Demangled: android::sp<android::MTKPQServiceGet>::sp(android::MTKPQServiceGet*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_15MTKPQServiceGetEEC2EPS1_(void) {
    ALOGD("_ZN7android2spINS_15MTKPQServiceGetEEC2EPS1_() called");
    return 0;
}

/* Demangled: android::PccModeImpl::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PccModeImpl6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android11PccModeImpl6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::setDisplayEffect(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16setDisplayEffectEiii(void) {
    ALOGD("_ZN7android13DisplayEffect16setDisplayEffectEiii() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::close(hw_device_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal5closeEP11hw_device_t(void) {
    ALOGD("_ZN7android17DisplayFeatureHal5closeEP11hw_device_t() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: android::MTKModeImpl::~MTKModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MTKModeImplD1Ev(void) {
    ALOGD("_ZN7android11MTKModeImplD1Ev() called");
    return 0;
}

/* Demangled: android::PccModeImpl::~PccModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PccModeImplD0Ev(void) {
    ALOGD("_ZN7android11PccModeImplD0Ev() called");
    return 0;
}

/* Demangled: android::AdMode::~AdMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6AdModeD0Ev(void) {
    ALOGD("_ZN7android6AdModeD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleGABB(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect10HandleGABBEi(void) {
    ALOGD("_ZN7android13DisplayEffect10HandleGABBEi() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEEclEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEEclEv() called");
    return 0;
}

/* Demangled: android::PccMode::~PccMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PccModeD1Ev(void) {
    ALOGD("_ZN7android7PccModeD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::handleDispSwitchOption(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect22handleDispSwitchOptionEii(void) {
    ALOGD("_ZN7android13DisplayEffect22handleDispSwitchOptionEii() called");
    return 0;
}

/* Demangled: android::QCDPPSModeImpl::~QCDPPSModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14QCDPPSModeImplD1Ev(void) {
    ALOGD("_ZN7android14QCDPPSModeImplD1Ev() called");
    return 0;
}

/* Exported Object: android::disp_log_en */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11disp_log_enE = NULL;

/* Demangled: android::DisplayEffect::HandleEyeCare(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect13HandleEyeCareEii(void) {
    ALOGD("_ZN7android13DisplayEffect13HandleEyeCareEii() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleHBM(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect9HandleHBMEii(void) {
    ALOGD("_ZN7android13DisplayEffect9HandleHBMEii() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::~DisplayFeatureHal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHalD2Ev(void) {
    ALOGD("_ZN7android17DisplayFeatureHalD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: android::DisplayPostprocessing::setBreakCTDimming(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing17setBreakCTDimmingEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing17setBreakCTDimmingEi() called");
    return 0;
}

/* Demangled: android::QualcommMode::QualcommMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12QualcommModeC2Ev(void) {
    ALOGD("_ZN7android12QualcommModeC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<android::OutputFactory>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_13OutputFactoryEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_13OutputFactoryEEC2Ev() called");
    return 0;
}

/* Demangled: android::SensorCallback::SensorCallback(void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14SensorCallbackC2EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_(void) {
    ALOGD("_ZN7android14SensorCallbackC2EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleACCold(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12HandleACColdEi(void) {
    ALOGD("_ZN7android13DisplayEffect12HandleACColdEi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::ThreadWrapperHist(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect17ThreadWrapperHistEPv(void) {
    ALOGD("_ZN7android13DisplayEffect17ThreadWrapperHistEPv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleIncreasedContrast(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect23HandleIncreasedContrastEi(void) {
    ALOGD("_ZN7android13DisplayEffect23HandleIncreasedContrastEi() called");
    return 0;
}

/* Exported Object: android::DisplayPostprocessing::ccbb_log_en */
extern "C" __attribute__((visibility("default"))) void* _ZN7android21DisplayPostprocessing11ccbb_log_enE = NULL;

/* Demangled: android::PccModeImpl::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PccModeImpl8setParamEPv(void) {
    ALOGD("_ZN7android11PccModeImpl8setParamEPv() called");
    return 0;
}

/* Demangled: android::SviModeImpl::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11SviModeImpl6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android11SviModeImpl6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>::operator=(android::sp<android::frameworks::sensorservice::V1_0::ISensorManager>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_014ISensorManagerEEaSEOS5_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleAD(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect8HandleADEii(void) {
    ALOGD("_ZN7android13DisplayEffect8HandleADEii() called");
    return 0;
}

/* Exported Object: vtable for android::PccMode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7PccModeE = NULL;

/* Demangled: android::SensorControl::~SensorControl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControlD2Ev(void) {
    ALOGD("_ZN7android13SensorControlD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::setWCGState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect11setWCGStateEb(void) {
    ALOGD("_ZN7android13DisplayEffect11setWCGStateEb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: VTT for android::SensorNotifyThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android18SensorNotifyThreadE = NULL;

/* Demangled: android::XmlParser::IsRoot(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParser6IsRootEPKh(void) {
    ALOGD("_ZN7android9XmlParser6IsRootEPKh() called");
    return 0;
}

/* Demangled: android::DisplayEffect::threadFuncBacklight() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect19threadFuncBacklightEv(void) {
    ALOGD("_ZN7android13DisplayEffect19threadFuncBacklightEv() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setPCCConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing12setPCCConfigEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing12setPCCConfigEi() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setHDRPcc(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing9setHDRPccEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing9setHDRPccEi() called");
    return 0;
}

/* Demangled: android::Singleton<android::DisplayPostprocessing>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_21DisplayPostprocessingEED1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_21DisplayPostprocessingEED1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SviModeImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11SviModeImplE = NULL;

/* Exported Object: vtable for android::SensorCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14SensorCallbackE = NULL;

/* Demangled: android::DisplayEffect::HandleHDR(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect9HandleHDREii(void) {
    ALOGD("_ZN7android13DisplayEffect9HandleHDREii() called");
    return 0;
}

/* Exported Object: android::DisplayFeatureHal::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android17DisplayFeatureHal5mLockE = NULL;

/* Demangled: android::SviModeImpl::~SviModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11SviModeImplD1Ev(void) {
    ALOGD("_ZN7android11SviModeImplD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandlePreHBM() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12HandlePreHBMEv(void) {
    ALOGD("_ZN7android13DisplayEffect12HandlePreHBMEv() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setPCCConfigHDREyeCare(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing22setPCCConfigHDREyeCareEii(void) {
    ALOGD("_ZN7android21DisplayPostprocessing22setPCCConfigHDREyeCareEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::DisplayPostprocessing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessingC2Ev(void) {
    ALOGD("_ZN7android21DisplayPostprocessingC2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::featureEnablePolicy(int, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect19featureEnablePolicyEiiiib(void) {
    ALOGD("_ZN7android13DisplayEffect19featureEnablePolicyEiiiib() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getPanelName(char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12getPanelNameEPKcPc(void) {
    ALOGD("_ZN7android13DisplayEffect12getPanelNameEPKcPc() called");
    return 0;
}

/* Demangled: android::MTKPQServiceGet::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MTKPQServiceGet11serviceDiedEyRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN7android15MTKPQServiceGet11serviceDiedEyRKNS_2wpINS_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleCabcModeCustom(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect20HandleCabcModeCustomEii(void) {
    ALOGD("_ZN7android13DisplayEffect20HandleCabcModeCustomEii() called");
    return 0;
}

/* Demangled: virtual thunk to android::SensorNotifyThread::~SensorNotifyThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android18SensorNotifyThreadD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android18SensorNotifyThreadD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::restoreQcomMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect15restoreQcomModeEv(void) {
    ALOGD("_ZN7android13DisplayEffect15restoreQcomModeEv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::handleNightModeEyecare(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect22handleNightModeEyecareEiii(void) {
    ALOGD("_ZN7android13DisplayEffect22handleNightModeEyecareEiii() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::SensorNotifyThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18SensorNotifyThreadE0_NS_6ThreadE = NULL;

/* Demangled: android::sp<android::MTKPQServiceGet>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_15MTKPQServiceGetEED2Ev(void) {
    ALOGD("_ZN7android2spINS_15MTKPQServiceGetEED2Ev() called");
    return 0;
}

/* Demangled: android::MTKMode::~MTKMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7MTKModeD0Ev(void) {
    ALOGD("_ZN7android7MTKModeD0Ev() called");
    return 0;
}

/* Demangled: android::OutputFactory::~OutputFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13OutputFactoryD1Ev(void) {
    ALOGD("_ZN7android13OutputFactoryD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::notifySFWcgState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal16notifySFWcgStateEb(void) {
    ALOGD("_ZN7android17DisplayFeatureHal16notifySFWcgStateEb() called");
    return 0;
}

/* Demangled: android::QCModeImpl::~QCModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10QCModeImplD1Ev(void) {
    ALOGD("_ZN7android10QCModeImplD1Ev() called");
    return 0;
}

/* Demangled: android::MTKModeImpl::MTKModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MTKModeImplC1Ev(void) {
    ALOGD("_ZN7android11MTKModeImplC1Ev() called");
    return 0;
}

/* Demangled: android::QualcommDPPSMode::~QualcommDPPSMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16QualcommDPPSModeD1Ev(void) {
    ALOGD("_ZN7android16QualcommDPPSModeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::QualcommDPPSMode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16QualcommDPPSModeE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::DataCallback(android::hardware::sensors::V1_0::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12DataCallbackERKNS_8hardware7sensors4V1_05EventE(void) {
    ALOGD("_ZN7android13DisplayEffect12DataCallbackERKNS_8hardware7sensors4V1_05EventE() called");
    return 0;
}

/* Demangled: android::DisplayEffect::onResume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect8onResumeEv(void) {
    ALOGD("_ZN7android13DisplayEffect8onResumeEv() called");
    return 0;
}

/* Demangled: android::PccMode::PccMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PccModeC1Ev(void) {
    ALOGD("_ZN7android7PccModeC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::OutputMethod */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12OutputMethodE = NULL;

/* Demangled: android::DisplayPostprocessing::setPCCConfigCT(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing14setPCCConfigCTEiii(void) {
    ALOGD("_ZN7android21DisplayPostprocessing14setPCCConfigCTEiii() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Demangled: android::QCDPPSModeImpl::QCDPPSModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14QCDPPSModeImplC1Ev(void) {
    ALOGD("_ZN7android14QCDPPSModeImplC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::getDisplayDtsInfo(android::PanelInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing17getDisplayDtsInfoEPNS_9PanelInfoE(void) {
    ALOGD("_ZN7android21DisplayPostprocessing17getDisplayDtsInfoEPNS_9PanelInfoE() called");
    return 0;
}

/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void) {
    ALOGD("_ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::setValue(int, int, int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureState8setValueEiiibb(void) {
    ALOGD("_ZN7android19DisplayFeatureState8setValueEiiibb() called");
    return 0;
}

/* Demangled: android::DisplayUtil::getPanelInfo(int, android::PanelInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil12getPanelInfoEiPNS_9PanelInfoE(void) {
    ALOGD("_ZN7android11DisplayUtil12getPanelInfoEiPNS_9PanelInfoE() called");
    return 0;
}

/* Exported Object: android::DisplayUtil::mCallback */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11DisplayUtil9mCallbackE = NULL;

/* Demangled: android::DisplayFeatureHal::setFunctionEnable(df_device*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal17setFunctionEnableEP9df_deviceiiii(void) {
    ALOGD("_ZN7android17DisplayFeatureHal17setFunctionEnableEP9df_deviceiiii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::clearPccConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing14clearPccConfigEv(void) {
    ALOGD("_ZN7android21DisplayPostprocessing14clearPccConfigEv() called");
    return 0;
}

/* Demangled: android::MTKModeImpl::~MTKModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MTKModeImplD2Ev(void) {
    ALOGD("_ZN7android11MTKModeImplD2Ev() called");
    return 0;
}

/* Demangled: android::PccModeImpl::~PccModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PccModeImplD1Ev(void) {
    ALOGD("_ZN7android11PccModeImplD1Ev() called");
    return 0;
}

/* Demangled: android::AdMode::~AdMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6AdModeD1Ev(void) {
    ALOGD("_ZN7android6AdModeD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::~DisplayEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffectD0Ev(void) {
    ALOGD("_ZN7android13DisplayEffectD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::getIsEnableByValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureState18getIsEnableByValueEi(void) {
    ALOGD("_ZN7android19DisplayFeatureState18getIsEnableByValueEi() called");
    return 0;
}

/* Demangled: android::PccMode::~PccMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PccModeD2Ev(void) {
    ALOGD("_ZN7android7PccModeD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::threadWrapper(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing13threadWrapperEPv(void) {
    ALOGD("_ZN7android21DisplayPostprocessing13threadWrapperEPv() called");
    return 0;
}

/* Demangled: android::SviModeImpl::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11SviModeImpl8setParamEPv(void) {
    ALOGD("_ZN7android11SviModeImpl8setParamEPv() called");
    return 0;
}

/* Demangled: android::QCDPPSModeImpl::~QCDPPSModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14QCDPPSModeImplD2Ev(void) {
    ALOGD("_ZN7android14QCDPPSModeImplD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::setParams(int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect9setParamsEiPv(void) {
    ALOGD("_ZN7android13DisplayEffect9setParamsEiPv() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal4initEv(void) {
    ALOGD("_ZN7android17DisplayFeatureHal4initEv() called");
    return 0;
}

/* Demangled: android::Singleton<android::DisplayPostprocessing>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_21DisplayPostprocessingEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_21DisplayPostprocessingEEC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::frameworks::sensorservice::V1_0::IEventQueueCallback-in-android::SensorCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14SensorCallbackE0_NS_10frameworks13sensorservice4V1_019IEventQueueCallbackE = NULL;

/* Demangled: android::DisplayEffect::HandlePccGABB(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect13HandlePccGABBEi(void) {
    ALOGD("_ZN7android13DisplayEffect13HandlePccGABBEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: android::SviModeImpl::SviModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11SviModeImplC1Ev(void) {
    ALOGD("_ZN7android11SviModeImplC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::SetCancelRestore(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16SetCancelRestoreEi(void) {
    ALOGD("_ZN7android13DisplayEffect16SetCancelRestoreEi() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::checkWCGEnable(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal14checkWCGEnableEii(void) {
    ALOGD("_ZN7android17DisplayFeatureHal14checkWCGEnableEii() called");
    return 0;
}

/* Demangled: android::DisplayUtil::readPanelWhiteXYCoordinate(int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil26readPanelWhiteXYCoordinateERiS1_(void) {
    ALOGD("_ZN7android11DisplayUtil26readPanelWhiteXYCoordinateERiS1_() called");
    return 0;
}

/* Exported Object: vtable for android::MTKPQServiceGet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android15MTKPQServiceGetE = NULL;

/* Demangled: android::AdModeImpl::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AdModeImpl6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android10AdModeImpl6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: android::DisplayEffect::handleCCBB(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect10handleCCBBEii(void) {
    ALOGD("_ZN7android13DisplayEffect10handleCCBBEii() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>::operator=(android::DisplayFeatureState*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSEPS1_() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>::operator=(android::sp<android::DisplayFeatureState> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSERKS2_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSERKS2_() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setDREFunction(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing14setDREFunctionEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing14setDREFunctionEi() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>::operator=(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityEEaSERKS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityEEaSERKS7_() called");
    return 0;
}

/* Demangled: android::Singleton<android::DisplayPostprocessing>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_21DisplayPostprocessingEED2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_21DisplayPostprocessingEED2Ev() called");
    return 0;
}

/* Demangled: android::DisplayUtil::readPanelMaxLuminance(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil21readPanelMaxLuminanceERi(void) {
    ALOGD("_ZN7android11DisplayUtil21readPanelMaxLuminanceERi() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>::operator=(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityEEaSEOS7_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::restorePanelEffect(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect18restorePanelEffectEii(void) {
    ALOGD("_ZN7android13DisplayEffect18restorePanelEffectEii() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: android::Singleton<android::DisplayPostprocessing>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_21DisplayPostprocessingEE5sLockE = NULL;

/* Demangled: android::SviModeImpl::~SviModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11SviModeImplD2Ev(void) {
    ALOGD("_ZN7android11SviModeImplD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_fstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: android::OutputFactory::OutputFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13OutputFactoryC1Ev(void) {
    ALOGD("_ZN7android13OutputFactoryC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::checkHBMStatus(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect14checkHBMStatusEf(void) {
    ALOGD("_ZN7android13DisplayEffect14checkHBMStatusEf() called");
    return 0;
}

/* Demangled: android::DisplayEffect::CalculateGABBParms(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect18CalculateGABBParmsEi(void) {
    ALOGD("_ZN7android13DisplayEffect18CalculateGABBParmsEi() called");
    return 0;
}

/* Demangled: android::SensorControl::start(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControl5startEiib(void) {
    ALOGD("_ZN7android13SensorControl5startEiib() called");
    return 0;
}

/* Demangled: android::QualcommDPPSMode::QualcommDPPSMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16QualcommDPPSModeC1Ev(void) {
    ALOGD("_ZN7android16QualcommDPPSModeC1Ev() called");
    return 0;
}

/* Demangled: android::MTKPQServiceGet::getMTKPQService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MTKPQServiceGet15getMTKPQServiceEv(void) {
    ALOGD("_ZN7android15MTKPQServiceGet15getMTKPQServiceEv() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::changeWhitePoint(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing16changeWhitePointEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing16changeWhitePointEi() called");
    return 0;
}

/* Demangled: android::QCModeImpl::QCModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10QCModeImplC1Ev(void) {
    ALOGD("_ZN7android10QCModeImplC1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<android::OutputFactory>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_13OutputFactoryEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_13OutputFactoryEE11hasInstanceEv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleACWarm(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12HandleACWarmEi(void) {
    ALOGD("_ZN7android13DisplayEffect12HandleACWarmEi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::setEffectStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect15setEffectStatusEi(void) {
    ALOGD("_ZN7android13DisplayEffect15setEffectStatusEi() called");
    return 0;
}

/* Demangled: android::XmlParser::~XmlParser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParserD1Ev(void) {
    ALOGD("_ZN7android9XmlParserD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::processDCBacklight(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect18processDCBacklightEii(void) {
    ALOGD("_ZN7android13DisplayEffect18processDCBacklightEii() called");
    return 0;
}

/* Demangled: android::sp<android::AMessage>::sp(android::AMessage*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8AMessageEEC2EPS1_(void) {
    ALOGD("_ZN7android2spINS_8AMessageEEC2EPS1_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::PanelModeImpl::~PanelModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PanelModeImplD0Ev(void) {
    ALOGD("_ZN7android13PanelModeImplD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::~DisplayFeatureState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureStateD0Ev(void) {
    ALOGD("_ZN7android19DisplayFeatureStateD0Ev() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueueCallback>::sp<android::SensorCallback>(android::SensorCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_019IEventQueueCallbackEEC2INS_14SensorCallbackEEEPT_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_019IEventQueueCallbackEEC2INS_14SensorCallbackEEEPT_() called");
    return 0;
}

/* Demangled: android::DisplayUtil::onCallback(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil10onCallbackEii(void) {
    ALOGD("_ZN7android11DisplayUtil10onCallbackEii() called");
    return 0;
}

/* Exported Object: android::Singleton<android::DisplayPostprocessing>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_21DisplayPostprocessingEE9sInstanceE = NULL;

/* Demangled: android::MTKMode::~MTKMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7MTKModeD1Ev(void) {
    ALOGD("_ZN7android7MTKModeD1Ev() called");
    return 0;
}

/* Demangled: android::OutputFactory::~OutputFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13OutputFactoryD2Ev(void) {
    ALOGD("_ZN7android13OutputFactoryD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleGameMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect14HandleGameModeEii(void) {
    ALOGD("_ZN7android13DisplayEffect14HandleGameModeEii() called");
    return 0;
}

/* Demangled: android::AdMode::AdMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6AdModeC1Ev(void) {
    ALOGD("_ZN7android6AdModeC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: android::Singleton<android::DisplayPostprocessing>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_21DisplayPostprocessingEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_21DisplayPostprocessingEE11hasInstanceEv() called");
    return 0;
}

/* Demangled: android::QCModeImpl::~QCModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10QCModeImplD2Ev(void) {
    ALOGD("_ZN7android10QCModeImplD2Ev() called");
    return 0;
}

/* Demangled: android::MTKModeImpl::MTKModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MTKModeImplC2Ev(void) {
    ALOGD("_ZN7android11MTKModeImplC2Ev() called");
    return 0;
}

/* Demangled: android::PccModeImpl::PccModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PccModeImplC1Ev(void) {
    ALOGD("_ZN7android11PccModeImplC1Ev() called");
    return 0;
}

/* Demangled: android::QualcommDPPSMode::~QualcommDPPSMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16QualcommDPPSModeD2Ev(void) {
    ALOGD("_ZN7android16QualcommDPPSModeD2Ev() called");
    return 0;
}

/* Demangled: android::SensorControl::SensorControl(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControlC2ERKNS_8String16E(void) {
    ALOGD("_ZN7android13SensorControlC2ERKNS_8String16E() called");
    return 0;
}

/* Exported Object: android::DisplayPostprocessing::ccbb_enable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android21DisplayPostprocessing11ccbb_enableE = NULL;

/* Demangled: android::PccMode::PccMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PccModeC2Ev(void) {
    ALOGD("_ZN7android7PccModeC2Ev() called");
    return 0;
}

/* Exported Object: android::SensorControl::sensor_log */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13SensorControl10sensor_logE = NULL;

/* Demangled: android::QCDPPSModeImpl::QCDPPSModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14QCDPPSModeImplC2Ev(void) {
    ALOGD("_ZN7android14QCDPPSModeImplC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::SensorCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14SensorCallbackE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: android::DisplayEffect::HandleKeepWhitePointSRGB(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect24HandleKeepWhitePointSRGBEii(void) {
    ALOGD("_ZN7android13DisplayEffect24HandleKeepWhitePointSRGBEii() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::getFunction(df_device*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal11getFunctionEP9df_devicei(void) {
    ALOGD("_ZN7android17DisplayFeatureHal11getFunctionEP9df_devicei() called");
    return 0;
}

/* Demangled: android::DisplayUtil::writeDCBacklight(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil16writeDCBacklightEPc(void) {
    ALOGD("_ZN7android11DisplayUtil16writeDCBacklightEPc() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::setListener(df_device*, void (*)(int, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal11setListenerEP9df_devicePFviiE(void) {
    ALOGD("_ZN7android17DisplayFeatureHal11setListenerEP9df_devicePFviiE() called");
    return 0;
}

/* Demangled: android::sp<android::AHandler>::sp<android::DisplayEffect>(android::DisplayEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8AHandlerEEC2INS_13DisplayEffectEEEPT_(void) {
    ALOGD("_ZN7android2spINS_8AHandlerEEC2INS_13DisplayEffectEEEPT_() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::checkParameterValid(int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing19checkParameterValidEPiii(void) {
    ALOGD("_ZN7android21DisplayPostprocessing19checkParameterValidEPiii() called");
    return 0;
}

/* Demangled: android::XmlParser::parseXml(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParser8parseXmlENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android9XmlParser8parseXmlENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: android::PccModeImpl::~PccModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PccModeImplD2Ev(void) {
    ALOGD("_ZN7android11PccModeImplD2Ev() called");
    return 0;
}

/* Demangled: android::AdMode::~AdMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6AdModeD2Ev(void) {
    ALOGD("_ZN7android6AdModeD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::timerCallback(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect13timerCallbackEiii(void) {
    ALOGD("_ZN7android13DisplayEffect13timerCallbackEiii() called");
    return 0;
}

/* Demangled: android::DisplayEffect::~DisplayEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffectD1Ev(void) {
    ALOGD("_ZN7android13DisplayEffectD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setPCCConfigCCBB(int, int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing16setPCCConfigCCBBEiibb(void) {
    ALOGD("_ZN7android21DisplayPostprocessing16setPCCConfigCCBBEiibb() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleDCBacklight(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect17HandleDCBacklightEii(void) {
    ALOGD("_ZN7android13DisplayEffect17HandleDCBacklightEii() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleDisplayState(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect18HandleDisplayStateEii(void) {
    ALOGD("_ZN7android13DisplayEffect18HandleDisplayStateEii() called");
    return 0;
}

/* Demangled: android::SensorControl::SensorControl(android::String16 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControlC1ERKNS_8String16E(void) {
    ALOGD("_ZN7android13SensorControlC1ERKNS_8String16E() called");
    return 0;
}

/* Demangled: android::DisplayEffect::histogram_operation(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect19histogram_operationEi(void) {
    ALOGD("_ZN7android13DisplayEffect19histogram_operationEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEEE = NULL;

/* Demangled: android::Singleton<android::DisplayPostprocessing>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_21DisplayPostprocessingEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_21DisplayPostprocessingEEC2Ev() called");
    return 0;
}

/* Exported Object: android::Singleton<android::OutputFactory>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_13OutputFactoryEE9sInstanceE = NULL;

/* Demangled: android::SviModeImpl::SviModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11SviModeImplC2Ev(void) {
    ALOGD("_ZN7android11SviModeImplC2Ev() called");
    return 0;
}

/* Demangled: android::QCDPPSModeImpl::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14QCDPPSModeImpl8setParamEPv(void) {
    ALOGD("_ZN7android14QCDPPSModeImpl8setParamEPv() called");
    return 0;
}

/* Exported Object: vtable for android::QCDPPSModeImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14QCDPPSModeImplE = NULL;

/* Exported Object: vtable for android::DisplayFeatureState */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android19DisplayFeatureStateE = NULL;

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::AdModeImpl::~AdModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AdModeImplD0Ev(void) {
    ALOGD("_ZN7android10AdModeImplD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayUtil::cct_to_xy(double, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil9cct_to_xyEdPdS1_(void) {
    ALOGD("_ZN7android11DisplayUtil9cct_to_xyEdPdS1_() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureState8setParamEPv(void) {
    ALOGD("_ZN7android19DisplayFeatureState8setParamEPv() called");
    return 0;
}

/* Demangled: android::PanelMode::~PanelMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9PanelModeD0Ev(void) {
    ALOGD("_ZN7android9PanelModeD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: android::SensorNotifyThread::~SensorNotifyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18SensorNotifyThreadD0Ev(void) {
    ALOGD("_ZN7android18SensorNotifyThreadD0Ev() called");
    return 0;
}

/* Demangled: android::SensorCallback::SensorCallback(void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14SensorCallbackC1EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_(void) {
    ALOGD("_ZN7android14SensorCallbackC1EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getDispParam(android::DispParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12getDispParamEPNS_9DispParamE(void) {
    ALOGD("_ZN7android13DisplayEffect12getDispParamEPNS_9DispParamE() called");
    return 0;
}

/* Demangled: android::SensorControl::SensorControl(android::String16 const&, int, void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControlC1ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_(void) {
    ALOGD("_ZN7android13SensorControlC1ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_() called");
    return 0;
}

/* Demangled: android::XmlParser::XmlParser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParserC1Ev(void) {
    ALOGD("_ZN7android9XmlParserC1Ev() called");
    return 0;
}

/* Demangled: android::sp<android::SensorControl>::operator=(android::SensorControl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_13SensorControlEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_13SensorControlEEaSEPS1_() called");
    return 0;
}

/* Exported Object: vtable for android::QCModeImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10QCModeImplE = NULL;

/* Demangled: android::DisplayEffect::HandleBrightnessInteract(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect24HandleBrightnessInteractEii(void) {
    ALOGD("_ZN7android13DisplayEffect24HandleBrightnessInteractEii() called");
    return 0;
}

/* Demangled: android::MTKMode::MTKMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7MTKModeC1Ev(void) {
    ALOGD("_ZN7android7MTKModeC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for android::DisplayFeatureHal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17DisplayFeatureHalE = NULL;

/* Demangled: android::DisplayPostprocessing::setPCCConfigGABB(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing16setPCCConfigGABBEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing16setPCCConfigGABBEi() called");
    return 0;
}

/* Demangled: android::OutputFactory::OutputFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13OutputFactoryC2Ev(void) {
    ALOGD("_ZN7android13OutputFactoryC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: android::QCModeImpl::QCModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10QCModeImplC2Ev(void) {
    ALOGD("_ZN7android10QCModeImplC2Ev() called");
    return 0;
}

/* Demangled: android::MTKModeImpl::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MTKModeImpl8setParamEPv(void) {
    ALOGD("_ZN7android11MTKModeImpl8setParamEPv() called");
    return 0;
}

/* Demangled: android::QualcommDPPSMode::QualcommDPPSMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16QualcommDPPSModeC2Ev(void) {
    ALOGD("_ZN7android16QualcommDPPSModeC2Ev() called");
    return 0;
}

/* Demangled: android::SviMode::~SviMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7SviModeD0Ev(void) {
    ALOGD("_ZN7android7SviModeD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::setBrightness(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect13setBrightnessEi(void) {
    ALOGD("_ZN7android13DisplayEffect13setBrightnessEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::AdModeImpl::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AdModeImpl8setParamEPv(void) {
    ALOGD("_ZN7android10AdModeImpl8setParamEPv() called");
    return 0;
}

/* Demangled: android::OutputMethod::~OutputMethod() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethodD0Ev(void) {
    ALOGD("_ZN7android12OutputMethodD0Ev() called");
    return 0;
}

/* Demangled: android::XmlParser::deinit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParser6deinitEv(void) {
    ALOGD("_ZN7android9XmlParser6deinitEv() called");
    return 0;
}

/* Demangled: android::XmlParser::~XmlParser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParserD2Ev(void) {
    ALOGD("_ZN7android9XmlParserD2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::ALooper>::operator=(android::ALooper*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_7ALooperEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_7ALooperEEaSEPS1_() called");
    return 0;
}

/* Demangled: android::QCModeImpl::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10QCModeImpl6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android10QCModeImpl6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: android::PanelModeImpl::~PanelModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PanelModeImplD1Ev(void) {
    ALOGD("_ZN7android13PanelModeImplD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::~DisplayFeatureState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureStateD1Ev(void) {
    ALOGD("_ZN7android19DisplayFeatureStateD1Ev() called");
    return 0;
}

/* Demangled: android::SensorControl::SensorControl(android::String16 const&, int, void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControlC2ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_(void) {
    ALOGD("_ZN7android13SensorControlC2ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>& android::sp<android::DisplayFeatureState>::operator=<android::QualcommMode>(android::QualcommMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSINS_12QualcommModeEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSINS_12QualcommModeEEERS2_PT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: android::MTKMode::~MTKMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7MTKModeD2Ev(void) {
    ALOGD("_ZN7android7MTKModeD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayUtil::getPanelName(int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil12getPanelNameEiPc(void) {
    ALOGD("_ZN7android11DisplayUtil12getPanelNameEiPc() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getEyecareParams(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16getEyecareParamsEj(void) {
    ALOGD("_ZN7android13DisplayEffect16getEyecareParamsEj() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>& android::sp<android::DisplayFeatureState>::operator=<android::PccMode>(android::PccMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSINS_7PccModeEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSINS_7PccModeEEERS2_PT_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setESSFunction(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing14setESSFunctionEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing14setESSFunctionEi() called");
    return 0;
}

/* Demangled: android::PccModeImpl::PccModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11PccModeImplC2Ev(void) {
    ALOGD("_ZN7android11PccModeImplC2Ev() called");
    return 0;
}

/* Demangled: android::AdMode::AdMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6AdModeC2Ev(void) {
    ALOGD("_ZN7android6AdModeC2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::DisplayEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffectC1Ev(void) {
    ALOGD("_ZN7android13DisplayEffectC1Ev() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::hidl_death_recipient>::sp<android::MTKPQServiceGet>(android::MTKPQServiceGet*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware20hidl_death_recipientEEC2INS_15MTKPQServiceGetEEEPT_(void) {
    ALOGD("_ZN7android2spINS_8hardware20hidl_death_recipientEEC2INS_15MTKPQServiceGetEEEPT_() called");
    return 0;
}

/* Demangled: android::DisplayUtil::readPanelTemp(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil13readPanelTempEPi(void) {
    ALOGD("_ZN7android11DisplayUtil13readPanelTempEPi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getDisplayState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect15getDisplayStateEv(void) {
    ALOGD("_ZN7android13DisplayEffect15getDisplayStateEv() called");
    return 0;
}

/* Demangled: android::XmlParser::getXmlValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParser11getXmlValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPci(void) {
    ALOGD("_ZN7android9XmlParser11getXmlValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPci() called");
    return 0;
}

/* Demangled: android::SensorCallback::onEvent(android::hardware::sensors::V1_0::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14SensorCallback7onEventERKNS_8hardware7sensors4V1_05EventE(void) {
    ALOGD("_ZN7android14SensorCallback7onEventERKNS_8hardware7sensors4V1_05EventE() called");
    return 0;
}

/* Demangled: android::sp<android::frameworks::sensorservice::V1_0::IEventQueue>::operator=(android::sp<android::frameworks::sensorservice::V1_0::IEventQueue> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_(void) {
    ALOGD("_ZN7android2spINS_10frameworks13sensorservice4V1_011IEventQueueEEaSERKS5_() called");
    return 0;
}

/* Demangled: android::DisplayUtil::writePanelDsiCmds(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil17writePanelDsiCmdsEPc(void) {
    ALOGD("_ZN7android11DisplayUtil17writePanelDsiCmdsEPc() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getDCmode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect9getDCmodeEv(void) {
    ALOGD("_ZN7android13DisplayEffect9getDCmodeEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-android::MTKPQServiceGet */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android15MTKPQServiceGetE0_NS_8hardware20hidl_death_recipientE = NULL;

/* Demangled: android::DisplayFeatureState::getMethodByProduct() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureState18getMethodByProductEv(void) {
    ALOGD("_ZN7android19DisplayFeatureState18getMethodByProductEv() called");
    return 0;
}

/* Exported Object: android::Singleton<android::OutputFactory>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_13OutputFactoryEE5sLockE = NULL;

/* Demangled: android::DisplayEffect::HandleCTAdapt(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect13HandleCTAdaptEii(void) {
    ALOGD("_ZN7android13DisplayEffect13HandleCTAdaptEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setPCCConfigEyeCare(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing19setPCCConfigEyeCareEii(void) {
    ALOGD("_ZN7android21DisplayPostprocessing19setPCCConfigEyeCareEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setPostprocessingMode(int, int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing21setPostprocessingModeEiibb(void) {
    ALOGD("_ZN7android21DisplayPostprocessing21setPostprocessingModeEiibb() called");
    return 0;
}

/* Demangled: android::XmlParser::ParseLine(char const*, char const*, char**, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParser9ParseLineEPKcS2_PPcjPj(void) {
    ALOGD("_ZN7android9XmlParser9ParseLineEPKcS2_PPcjPj() called");
    return 0;
}

/* Demangled: android::QualcommMode::~QualcommMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12QualcommModeD0Ev(void) {
    ALOGD("_ZN7android12QualcommModeD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::~DisplayEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffectD2Ev(void) {
    ALOGD("_ZN7android13DisplayEffectD2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService>::operator=(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceEEaSEOS7_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::computeRGBCoeffbyBL(float*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing19computeRGBCoeffbyBLEPfj(void) {
    ALOGD("_ZN7android21DisplayPostprocessing19computeRGBCoeffbyBLEPfj() called");
    return 0;
}

/* Demangled: android::PanelModeImpl::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PanelModeImpl6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android13PanelModeImpl6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: android::DisplayUtil::parseLine(char const*, char const*, char**, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil9parseLineEPKcS2_PPcjPj(void) {
    ALOGD("_ZN7android11DisplayUtil9parseLineEPKcS2_PPcjPj() called");
    return 0;
}

/* Exported Object: VTT for android::SensorCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android14SensorCallbackE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::GetHdrStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12GetHdrStatusEv(void) {
    ALOGD("_ZN7android13DisplayEffect12GetHdrStatusEv() called");
    return 0;
}

/* Demangled: android::sp<android::AHandler const>::sp<android::DisplayEffect>(android::DisplayEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIKNS_8AHandlerEEC2INS_13DisplayEffectEEEPT_(void) {
    ALOGD("_ZN7android2spIKNS_8AHandlerEEC2INS_13DisplayEffectEEEPT_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: android::DisplayUtil::matrix_inverse(float (*) [6]) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil14matrix_inverseEPA6_f(void) {
    ALOGD("_ZN7android11DisplayUtil14matrix_inverseEPA6_f() called");
    return 0;
}

/* Demangled: android::AdModeImpl::~AdModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AdModeImplD1Ev(void) {
    ALOGD("_ZN7android10AdModeImplD1Ev() called");
    return 0;
}

/* Demangled: android::PanelModeImpl::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PanelModeImpl8setParamEPv(void) {
    ALOGD("_ZN7android13PanelModeImpl8setParamEPv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Demangled: android::PanelMode::~PanelMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9PanelModeD1Ev(void) {
    ALOGD("_ZN7android9PanelModeD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleBCBCCustom(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16HandleBCBCCustomEi(void) {
    ALOGD("_ZN7android13DisplayEffect16HandleBCBCCustomEi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getEffectFirstId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16getEffectFirstIdEi(void) {
    ALOGD("_ZN7android13DisplayEffect16getEffectFirstIdEi() called");
    return 0;
}

/* Demangled: android::SensorNotifyThread::~SensorNotifyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18SensorNotifyThreadD1Ev(void) {
    ALOGD("_ZN7android18SensorNotifyThreadD1Ev() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>& android::sp<android::DisplayFeatureState>::operator=<android::AdMode>(android::AdMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSINS_6AdModeEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSINS_6AdModeEEERS2_PT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Exported Object: vtable for android::QualcommMode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12QualcommModeE = NULL;

/* Demangled: android::DisplayEffect::getEffectStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect15getEffectStatusEi(void) {
    ALOGD("_ZN7android13DisplayEffect15getEffectStatusEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityEE5clearEv(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for android::PccModeImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11PccModeImplE = NULL;

/* Demangled: android::XmlParser::XmlParser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParserC2Ev(void) {
    ALOGD("_ZN7android9XmlParserC2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::SetMessageGeneration(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect20SetMessageGenerationEii(void) {
    ALOGD("_ZN7android13DisplayEffect20SetMessageGenerationEii() called");
    return 0;
}

/* Demangled: android::SensorNotifyThread::SensorNotifyThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18SensorNotifyThreadC1Ei(void) {
    ALOGD("_ZN7android18SensorNotifyThreadC1Ei() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>& android::sp<android::DisplayFeatureState>::operator=<android::PanelMode>(android::PanelMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSINS_9PanelModeEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSINS_9PanelModeEEERS2_PT_() called");
    return 0;
}

/* Demangled: android::PanelModeImpl::PanelModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PanelModeImplC1Ev(void) {
    ALOGD("_ZN7android13PanelModeImplC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::DisplayFeatureState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureStateC1Ev(void) {
    ALOGD("_ZN7android19DisplayFeatureStateC1Ev() called");
    return 0;
}

/* Demangled: android::timerCallbackFunction(void*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21timerCallbackFunctionEPviii(void) {
    ALOGD("_ZN7android21timerCallbackFunctionEPviii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::forceScreenRefresh() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing18forceScreenRefreshEv(void) {
    ALOGD("_ZN7android21DisplayPostprocessing18forceScreenRefreshEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::MTKMode::MTKMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7MTKModeC2Ev(void) {
    ALOGD("_ZN7android7MTKModeC2Ev() called");
    return 0;
}

/* Demangled: android::SviMode::~SviMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7SviModeD1Ev(void) {
    ALOGD("_ZN7android7SviModeD1Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::getCapabilities(df_device*, unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal15getCapabilitiesEP9df_devicePjPi(void) {
    ALOGD("_ZN7android17DisplayFeatureHal15getCapabilitiesEP9df_devicePjPi() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::calibrateWhitePoint(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing19calibrateWhitePointEff(void) {
    ALOGD("_ZN7android21DisplayPostprocessing19calibrateWhitePointEff() called");
    return 0;
}

/* Demangled: android::OutputMethod::~OutputMethod() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethodD1Ev(void) {
    ALOGD("_ZN7android12OutputMethodD1Ev() called");
    return 0;
}

/* Exported Object: android::DisplayFeatureHal::log_level */
extern "C" __attribute__((visibility("default"))) void* _ZN7android17DisplayFeatureHal9log_levelE = NULL;

/* Demangled: android::MTKModeImpl::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MTKModeImpl6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android11MTKModeImpl6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: android::PanelModeImpl::~PanelModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PanelModeImplD2Ev(void) {
    ALOGD("_ZN7android13PanelModeImplD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::~DisplayFeatureState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureStateD2Ev(void) {
    ALOGD("_ZN7android19DisplayFeatureStateD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayUtil::xy_to_XYZ(double, double, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil9xy_to_XYZEddPdS1_S1_(void) {
    ALOGD("_ZN7android11DisplayUtil9xy_to_XYZEddPdS1_S1_() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleSunlightScreen(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect20HandleSunlightScreenEii(void) {
    ALOGD("_ZN7android13DisplayEffect20HandleSunlightScreenEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::analyzeHistogram(unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing16analyzeHistogramEjPi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing16analyzeHistogramEjPi() called");
    return 0;
}

/* Demangled: android::DisplayUtil::xy_to_ulvl(double, double, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil10xy_to_ulvlEddPdS1_(void) {
    ALOGD("_ZN7android11DisplayUtil10xy_to_ulvlEddPdS1_() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::~DisplayFeatureHal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHalD0Ev(void) {
    ALOGD("_ZN7android17DisplayFeatureHalD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: vtable for android::AdMode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6AdModeE = NULL;

/* Demangled: android::DisplayEffect::DisplayEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffectC2Ev(void) {
    ALOGD("_ZN7android13DisplayEffectC2Ev() called");
    return 0;
}

/* Demangled: android::SensorControl::set(int, void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControl3setEiPFviPvRKNS_8hardware7sensors4V1_05EventEES1_(void) {
    ALOGD("_ZN7android13SensorControl3setEiPFviPvRKNS_8hardware7sensors4V1_05EventEES1_() called");
    return 0;
}

/* Exported Object: vtable for android::SensorControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13SensorControlE = NULL;

/* Demangled: android::DisplayFeatureHal::open(hw_module_t const*, char const*, hw_device_t**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal4openEPK11hw_module_tPKcPP11hw_device_t(void) {
    ALOGD("_ZN7android17DisplayFeatureHal4openEPK11hw_module_tPKcPP11hw_device_t() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: android::DisplayFeatureState::output() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureState6outputEv(void) {
    ALOGD("_ZN7android19DisplayFeatureState6outputEv() called");
    return 0;
}

/* Demangled: android::SensorControl::~SensorControl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControlD0Ev(void) {
    ALOGD("_ZN7android13SensorControlD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleColorTemp(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect15HandleColorTempEii(void) {
    ALOGD("_ZN7android13DisplayEffect15HandleColorTempEii() called");
    return 0;
}

/* Demangled: android::DisplayEffect::enableNightModeEyecare(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect22enableNightModeEyecareEi(void) {
    ALOGD("_ZN7android13DisplayEffect22enableNightModeEyecareEi() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::QualcommMode::~QualcommMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12QualcommModeD1Ev(void) {
    ALOGD("_ZN7android12QualcommModeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SviMode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7SviModeE = NULL;

/* Demangled: android::Singleton<android::OutputFactory>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_13OutputFactoryEED1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_13OutputFactoryEED1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::_setEffectStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16_setEffectStatusEi(void) {
    ALOGD("_ZN7android13DisplayEffect16_setEffectStatusEi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleRegisterCallback(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect22HandleRegisterCallbackEPv(void) {
    ALOGD("_ZN7android13DisplayEffect22HandleRegisterCallbackEPv() called");
    return 0;
}

/* Demangled: android::AdModeImpl::AdModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AdModeImplC1Ev(void) {
    ALOGD("_ZN7android10AdModeImplC1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::PanelMode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9PanelModeE = NULL;

/* Demangled: android::DisplayEffect::getEffectStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect15getEffectStatusEv(void) {
    ALOGD("_ZN7android13DisplayEffect15getEffectStatusEv() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::setFeatureEnable(df_device*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal16setFeatureEnableEP9df_deviceiiii(void) {
    ALOGD("_ZN7android17DisplayFeatureHal16setFeatureEnableEP9df_deviceiiii() called");
    return 0;
}

/* Demangled: android::PanelMode::PanelMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9PanelModeC1Ev(void) {
    ALOGD("_ZN7android9PanelModeC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayUtil::getDisplayMode(int, android::PanelInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil14getDisplayModeEiPNS_9PanelInfoE(void) {
    ALOGD("_ZN7android11DisplayUtil14getDisplayModeEiPNS_9PanelInfoE() called");
    return 0;
}

/* Demangled: android::sp<android::RefBase>& android::sp<android::RefBase>::operator=<android::DisplayEffect>(android::DisplayEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_7RefBaseEEaSINS_13DisplayEffectEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_7RefBaseEEaSINS_13DisplayEffectEEERS2_PT_() called");
    return 0;
}

/* Exported Object: vtable for android::MTKMode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android7MTKModeE = NULL;

/* Demangled: android::getPQService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12getPQServiceEv(void) {
    ALOGD("_ZN7android12getPQServiceEv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleStandard(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect14HandleStandardEi(void) {
    ALOGD("_ZN7android13DisplayEffect14HandleStandardEi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::notifyQservice(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect14notifyQserviceEii(void) {
    ALOGD("_ZN7android13DisplayEffect14notifyQserviceEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::initPCC() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing7initPCCEv(void) {
    ALOGD("_ZN7android21DisplayPostprocessing7initPCCEv() called");
    return 0;
}

/* Demangled: android::AdModeImpl::~AdModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AdModeImplD2Ev(void) {
    ALOGD("_ZN7android10AdModeImplD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13DisplayEffect17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::DisplayEffect::GetMessageGeneration(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect20GetMessageGenerationEi(void) {
    ALOGD("_ZN7android13DisplayEffect20GetMessageGenerationEi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::ThreadWrapperBacklight(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect22ThreadWrapperBacklightEPv(void) {
    ALOGD("_ZN7android13DisplayEffect22ThreadWrapperBacklightEPv() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::checkModeForWCG(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal15checkModeForWCGEii(void) {
    ALOGD("_ZN7android17DisplayFeatureHal15checkModeForWCGEii() called");
    return 0;
}

/* Exported Object: vtable for android::AdModeImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10AdModeImplE = NULL;

/* Demangled: android::PanelMode::~PanelMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9PanelModeD2Ev(void) {
    ALOGD("_ZN7android9PanelModeD2Ev() called");
    return 0;
}

/* Demangled: android::SensorNotifyThread::~SensorNotifyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android18SensorNotifyThreadD2Ev(void) {
    ALOGD("_ZN7android18SensorNotifyThreadD2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::SensorControl>::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_13SensorControlEE5clearEv(void) {
    ALOGD("_ZN7android2spINS_13SensorControlEE5clearEv() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayFeatureState>& android::sp<android::DisplayFeatureState>::operator=<android::MTKMode>(android::MTKMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_19DisplayFeatureStateEEaSINS_7MTKModeEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_19DisplayFeatureStateEEaSINS_7MTKModeEEERS2_PT_() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setPCCConfigSunlightScreen(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing26setPCCConfigSunlightScreenEii(void) {
    ALOGD("_ZN7android21DisplayPostprocessing26setPCCConfigSunlightScreenEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::~DisplayPostprocessing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessingD1Ev(void) {
    ALOGD("_ZN7android21DisplayPostprocessingD1Ev() called");
    return 0;
}

/* Demangled: android::SviMode::SviMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7SviModeC1Ev(void) {
    ALOGD("_ZN7android7SviModeC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleEXTColorProc(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect18HandleEXTColorProcEii(void) {
    ALOGD("_ZN7android13DisplayEffect18HandleEXTColorProcEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setParams(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing9setParamsEPv(void) {
    ALOGD("_ZN7android21DisplayPostprocessing9setParamsEPv() called");
    return 0;
}

/* Demangled: android::OutputMethod::OutputMethod() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethodC1Ev(void) {
    ALOGD("_ZN7android12OutputMethodC1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JNS_4pairIS7_S7_EEEEENSG_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE25__emplace_unique_key_argsIS7_JNS_4pairIS7_S7_EEEEENSG_INS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect5startEv(void) {
    ALOGD("_ZN7android13DisplayEffect5startEv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::onSuspend() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect9onSuspendEv(void) {
    ALOGD("_ZN7android13DisplayEffect9onSuspendEv() called");
    return 0;
}

/* Demangled: android::SensorNotifyThread::SensorNotifyThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18SensorNotifyThreadC2Ei(void) {
    ALOGD("_ZN7android18SensorNotifyThreadC2Ei() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::__clone(std::__1::__function::__base<void ()>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEPNS0_6__baseISE_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEPNS0_6__baseISE_EE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::PanelModeImpl::PanelModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13PanelModeImplC2Ev(void) {
    ALOGD("_ZN7android13PanelModeImplC2Ev() called");
    return 0;
}

/* Demangled: android::QCDPPSModeImpl::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14QCDPPSModeImpl6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android14QCDPPSModeImpl6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::DisplayFeatureState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureStateC2Ev(void) {
    ALOGD("_ZN7android19DisplayFeatureStateC2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleDFPSCustom(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16HandleDFPSCustomEii(void) {
    ALOGD("_ZN7android13DisplayEffect16HandleDFPSCustomEii() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: android::SviMode::~SviMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7SviModeD2Ev(void) {
    ALOGD("_ZN7android7SviModeD2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleBacklightFOD(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect18HandleBacklightFODEii(void) {
    ALOGD("_ZN7android13DisplayEffect18HandleBacklightFODEii() called");
    return 0;
}

/* Demangled: android::MTKModeImpl::~MTKModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MTKModeImplD0Ev(void) {
    ALOGD("_ZN7android11MTKModeImplD0Ev() called");
    return 0;
}

/* Demangled: android::OutputMethod::~OutputMethod() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethodD2Ev(void) {
    ALOGD("_ZN7android12OutputMethodD2Ev() called");
    return 0;
}

/* Demangled: android::XmlParser::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9XmlParser4initEv(void) {
    ALOGD("_ZN7android9XmlParser4initEv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::clearEyeCareStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect18clearEyeCareStatusEv(void) {
    ALOGD("_ZN7android13DisplayEffect18clearEyeCareStatusEv() called");
    return 0;
}

/* Demangled: android::PccMode::~PccMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7PccModeD0Ev(void) {
    ALOGD("_ZN7android7PccModeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getEXTColorStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect17getEXTColorStatusEv(void) {
    ALOGD("_ZN7android13DisplayEffect17getEXTColorStatusEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::DisplayUtil::readMaxBrightness(long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil17readMaxBrightnessEPl(void) {
    ALOGD("_ZN7android11DisplayUtil17readMaxBrightnessEPl() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: android::QCDPPSModeImpl::~QCDPPSModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14QCDPPSModeImplD0Ev(void) {
    ALOGD("_ZN7android14QCDPPSModeImplD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::QualcommMode::QualcommMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12QualcommModeC1Ev(void) {
    ALOGD("_ZN7android12QualcommModeC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::~DisplayFeatureHal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHalD1Ev(void) {
    ALOGD("_ZN7android17DisplayFeatureHalD1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Demangled: android::QCModeImpl::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10QCModeImpl8setParamEPv(void) {
    ALOGD("_ZN7android10QCModeImpl8setParamEPv() called");
    return 0;
}

/* Demangled: android::OutputMethod::output(android::OutputParam) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethod6outputENS_11OutputParamE(void) {
    ALOGD("_ZN7android12OutputMethod6outputENS_11OutputParamE() called");
    return 0;
}

/* Demangled: android::Singleton<android::OutputFactory>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_13OutputFactoryEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_13OutputFactoryEEC1Ev() called");
    return 0;
}

/* Demangled: android::DisplayUtil::registerCallback(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil16registerCallbackEPv(void) {
    ALOGD("_ZN7android11DisplayUtil16registerCallbackEPv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::handleFodScreenOn(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect17handleFodScreenOnEi(void) {
    ALOGD("_ZN7android13DisplayEffect17handleFodScreenOnEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: android::printFeatureMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16printFeatureModeEi(void) {
    ALOGD("_ZN7android16printFeatureModeEi() called");
    return 0;
}

/* Demangled: android::DisplayUtil::readPanelNTC(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil12readPanelNTCEPi(void) {
    ALOGD("_ZN7android11DisplayUtil12readPanelNTCEPi() called");
    return 0;
}

/* Demangled: android::SensorControl::~SensorControl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControlD1Ev(void) {
    ALOGD("_ZN7android13SensorControlD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_() called");
    return 0;
}

/* Demangled: android::DisplayEffect::setBreakCTDimming(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect17setBreakCTDimmingEi(void) {
    ALOGD("_ZN7android13DisplayEffect17setBreakCTDimmingEi() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleCameraRequest(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect19HandleCameraRequestEii(void) {
    ALOGD("_ZN7android13DisplayEffect19HandleCameraRequestEii() called");
    return 0;
}

/* Demangled: android::SensorControl::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13SensorControl4stopEv(void) {
    ALOGD("_ZN7android13SensorControl4stopEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::QualcommMode::~QualcommMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12QualcommModeD2Ev(void) {
    ALOGD("_ZN7android12QualcommModeD2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<android::OutputFactory>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_13OutputFactoryEED2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_13OutputFactoryEED2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::isStartSensorControl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect20isStartSensorControlEv(void) {
    ALOGD("_ZN7android13DisplayEffect20isStartSensorControlEv() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::setPQMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing9setPQModeEi(void) {
    ALOGD("_ZN7android21DisplayPostprocessing9setPQModeEi() called");
    return 0;
}

/* Demangled: android::AdModeImpl::AdModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10AdModeImplC2Ev(void) {
    ALOGD("_ZN7android10AdModeImplC2Ev() called");
    return 0;
}

/* Demangled: android::SviModeImpl::~SviModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11SviModeImplD0Ev(void) {
    ALOGD("_ZN7android11SviModeImplD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SensorNotifyThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android18SensorNotifyThreadE = NULL;

/* Demangled: android::sp<android::OutputMethod>::operator=(android::OutputMethod*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_12OutputMethodEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_12OutputMethodEEaSEPS1_() called");
    return 0;
}

/* Demangled: android::PanelMode::PanelMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9PanelModeC2Ev(void) {
    ALOGD("_ZN7android9PanelModeC2Ev() called");
    return 0;
}

/* Demangled: android::DisplayEffect::HandleNightMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect15HandleNightModeEii(void) {
    ALOGD("_ZN7android13DisplayEffect15HandleNightModeEii() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::restorePccConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing16restorePccConfigEv(void) {
    ALOGD("_ZN7android21DisplayPostprocessing16restorePccConfigEv() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::DisplayPostprocessing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessingC1Ev(void) {
    ALOGD("_ZN7android21DisplayPostprocessingC1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::PanelModeImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13PanelModeImplE = NULL;

/* Demangled: android::DisplayFeatureHal::DisplayFeatureHal(hw_module_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHalC2EPK11hw_module_t(void) {
    ALOGD("_ZN7android17DisplayFeatureHalC2EPK11hw_module_t() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::computeHistogram(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing16computeHistogramEj(void) {
    ALOGD("_ZN7android21DisplayPostprocessing16computeHistogramEj() called");
    return 0;
}

/* Exported Object: VTT for android::MTKPQServiceGet */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android15MTKPQServiceGetE = NULL;

/* Demangled: android::DisplayEffect::threadFuncHist() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect14threadFuncHistEv(void) {
    ALOGD("_ZN7android13DisplayEffect14threadFuncHistEv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::getSunlightLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect16getSunlightLevelEi(void) {
    ALOGD("_ZN7android13DisplayEffect16getSunlightLevelEi() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::deinit() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal6deinitEv(void) {
    ALOGD("_ZN7android17DisplayFeatureHal6deinitEv() called");
    return 0;
}

/* Demangled: android::DisplayFeatureState::init(bool, bool, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19DisplayFeatureState4initEbbii(void) {
    ALOGD("_ZN7android19DisplayFeatureState4initEbbii() called");
    return 0;
}

/* Demangled: android::OutputMethod::setParam(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethod8setParamEPv(void) {
    ALOGD("_ZN7android12OutputMethod8setParamEPv() called");
    return 0;
}

/* Demangled: android::DisplayEffect::setDispParam(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect12setDispParamEiiii(void) {
    ALOGD("_ZN7android13DisplayEffect12setDispParamEiiii() called");
    return 0;
}

/* Demangled: android::DisplayEffect::parseXml() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13DisplayEffect8parseXmlEv(void) {
    ALOGD("_ZN7android13DisplayEffect8parseXmlEv() called");
    return 0;
}

/* Demangled: android::DisplayFeatureHal::sendMessage(df_device*, int, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureHal11sendMessageEP9df_deviceiiRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android17DisplayFeatureHal11sendMessageEP9df_deviceiiRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::sp<android::DisplayEffect>::sp(android::DisplayEffect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_13DisplayEffectEEC2EPS1_(void) {
    ALOGD("_ZN7android2spINS_13DisplayEffectEEC2EPS1_() called");
    return 0;
}

/* Demangled: virtual thunk to android::SensorNotifyThread::~SensorNotifyThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android18SensorNotifyThreadD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android18SensorNotifyThreadD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::threadFunc() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessing10threadFuncEv(void) {
    ALOGD("_ZN7android21DisplayPostprocessing10threadFuncEv() called");
    return 0;
}

/* Demangled: android::DisplayPostprocessing::~DisplayPostprocessing() */
extern "C" __attribute__((visibility("default"))) int _ZN7android21DisplayPostprocessingD2Ev(void) {
    ALOGD("_ZN7android21DisplayPostprocessingD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: android::OutputFactory::createProduct(int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13OutputFactory13createProductEiPc(void) {
    ALOGD("_ZN7android13OutputFactory13createProductEiPc() called");
    return 0;
}

/* Demangled: android::SviMode::SviMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android7SviModeC2Ev(void) {
    ALOGD("_ZN7android7SviModeC2Ev() called");
    return 0;
}

/* Demangled: android::QCModeImpl::~QCModeImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10QCModeImplD0Ev(void) {
    ALOGD("_ZN7android10QCModeImplD0Ev() called");
    return 0;
}

/* Demangled: android::OutputMethod::doDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethod9doDisableEv(void) {
    ALOGD("_ZN7android12OutputMethod9doDisableEv() called");
    return 0;
}

/* Demangled: android::OutputMethod::OutputMethod() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12OutputMethodC2Ev(void) {
    ALOGD("_ZN7android12OutputMethodC2Ev() called");
    return 0;
}

/* Demangled: android::QualcommDPPSMode::~QualcommDPPSMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16QualcommDPPSModeD0Ev(void) {
    ALOGD("_ZN7android16QualcommDPPSModeD0Ev() called");
    return 0;
}

/* Demangled: android::DisplayUtil::ulvl_to_xy(double, double, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11DisplayUtil10ulvl_to_xyEddPdS1_(void) {
    ALOGD("_ZN7android11DisplayUtil10ulvl_to_xyEddPdS1_() called");
    return 0;
}
