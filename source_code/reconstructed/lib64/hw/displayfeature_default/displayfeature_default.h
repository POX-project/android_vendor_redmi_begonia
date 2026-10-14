/*
 * Reverse-Engineered ABI Specification for: displayfeature.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: displayfeature.default.so
 */

#ifndef BEGONIA_RE_DISPLAYFEATURE_DEFAULT_H
#define BEGONIA_RE_DISPLAYFEATURE_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZTv0_n24_N7android18SensorNotifyThreadD0Ev */
/* Demangled: virtual thunk to android::SensorNotifyThread::~SensorNotifyThread() */
int _ZTv0_n24_N7android18SensorNotifyThreadD0Ev(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEE9sInstanceE */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::sInstance */
extern void* _ZN7android9SingletonINS_21DisplayPostprocessingEE9sInstanceE;

/* Symbol: _ZN7android19DisplayFeatureStateD0Ev */
/* Demangled: android::DisplayFeatureState::~DisplayFeatureState() */
int _ZN7android19DisplayFeatureStateD0Ev(void);

/* Symbol: _ZN7android11DisplayUtil13readPanelTempEPi */
/* Demangled: android::DisplayUtil::readPanelTemp(int*) */
int _ZN7android11DisplayUtil13readPanelTempEPi(void);

/* Symbol: _ZN7android13DisplayEffect17handleFodScreenOnEi */
/* Demangled: android::DisplayEffect::handleFodScreenOn(int) */
int _ZN7android13DisplayEffect17handleFodScreenOnEi(void);

/* Symbol: _ZN7android13DisplayEffect22ThreadWrapperBacklightEPv */
/* Demangled: android::DisplayEffect::ThreadWrapperBacklight(void*) */
int _ZN7android13DisplayEffect22ThreadWrapperBacklightEPv(void);

/* Symbol: _ZN7android19DisplayFeatureState8setParamEPv */
/* Demangled: android::DisplayFeatureState::setParam(void*) */
int _ZN7android19DisplayFeatureState8setParamEPv(void);

/* Symbol: _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_ */
/* Demangled: std::__1::basic_istream<char, std::__1::char_traits<char> >& std::__1::getline<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char) */
int _ZNSt3__17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_(void);

/* Symbol: _ZN7android11SviModeImplD2Ev */
/* Demangled: android::SviModeImpl::~SviModeImpl() */
int _ZN7android11SviModeImplD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN7android21DisplayPostprocessing26setPCCConfigSunlightScreenEii */
/* Demangled: android::DisplayPostprocessing::setPCCConfigSunlightScreen(int, int) */
int _ZN7android21DisplayPostprocessing26setPCCConfigSunlightScreenEii(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEED1Ev */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::~Singleton() */
int _ZN7android9SingletonINS_21DisplayPostprocessingEED1Ev(void);

/* Symbol: _ZN7android13DisplayEffect9getDCmodeEv */
/* Demangled: android::DisplayEffect::getDCmode() */
int _ZN7android13DisplayEffect9getDCmodeEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN7android17DisplayFeatureHal5mLockE */
/* Demangled: android::DisplayFeatureHal::mLock */
extern void* _ZN7android17DisplayFeatureHal5mLockE;

/* Symbol: _ZN7android18SensorNotifyThreadD1Ev */
/* Demangled: android::SensorNotifyThread::~SensorNotifyThread() */
int _ZN7android18SensorNotifyThreadD1Ev(void);

/* Symbol: _ZN7android14QCDPPSModeImplD2Ev */
/* Demangled: android::QCDPPSModeImpl::~QCDPPSModeImpl() */
int _ZN7android14QCDPPSModeImplD2Ev(void);

/* Symbol: _ZN7android13DisplayEffect14HandleACNormalEii */
/* Demangled: android::DisplayEffect::HandleACNormal(int, int) */
int _ZN7android13DisplayEffect14HandleACNormalEii(void);

/* Symbol: _ZN7android13DisplayEffect16_setEffectStatusEi */
/* Demangled: android::DisplayEffect::_setEffectStatus(int) */
int _ZN7android13DisplayEffect16_setEffectStatusEi(void);

/* Symbol: _ZTVN7android11MTKModeImplE */
/* Demangled: vtable for android::MTKModeImpl */
extern void* _ZTVN7android11MTKModeImplE;

/* Symbol: _ZN7android7SviModeD1Ev */
/* Demangled: android::SviMode::~SviMode() */
int _ZN7android7SviModeD1Ev(void);

/* Symbol: _ZN7android13PanelModeImpl6outputENS_11OutputParamE */
/* Demangled: android::PanelModeImpl::output(android::OutputParam) */
int _ZN7android13PanelModeImpl6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android11DisplayUtil12readPanelNTCEPi */
/* Demangled: android::DisplayUtil::readPanelNTC(int*) */
int _ZN7android11DisplayUtil12readPanelNTCEPi(void);

/* Symbol: _ZN7android11DisplayUtil16writeDCBacklightEPc */
/* Demangled: android::DisplayUtil::writeDCBacklight(char*) */
int _ZN7android11DisplayUtil16writeDCBacklightEPc(void);

/* Symbol: _ZN7android13DisplayEffectC1Ev */
/* Demangled: android::DisplayEffect::DisplayEffect() */
int _ZN7android13DisplayEffectC1Ev(void);

/* Symbol: _ZN7android10AdModeImplD1Ev */
/* Demangled: android::AdModeImpl::~AdModeImpl() */
int _ZN7android10AdModeImplD1Ev(void);

/* Symbol: _ZN7android12OutputMethodD1Ev */
/* Demangled: android::OutputMethod::~OutputMethod() */
int _ZN7android12OutputMethodD1Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessing14setDREFunctionEi */
/* Demangled: android::DisplayPostprocessing::setDREFunction(int) */
int _ZN7android21DisplayPostprocessing14setDREFunctionEi(void);

/* Symbol: _ZN7android11DisplayUtil14getDisplayModeEiPNS_9PanelInfoE */
/* Demangled: android::DisplayUtil::getDisplayMode(int, android::PanelInfo*) */
int _ZN7android11DisplayUtil14getDisplayModeEiPNS_9PanelInfoE(void);

/* Symbol: _ZN7android13DisplayEffect12HandleACColdEi */
/* Demangled: android::DisplayEffect::HandleACCold(int) */
int _ZN7android13DisplayEffect12HandleACColdEi(void);

/* Symbol: _ZN7android15MTKPQServiceGet11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE */
/* Demangled: android::MTKPQServiceGet::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN7android15MTKPQServiceGet11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN7android13PanelModeImplC1Ev */
/* Demangled: android::PanelModeImpl::PanelModeImpl() */
int _ZN7android13PanelModeImplC1Ev(void);

/* Symbol: _ZN7android7PccModeD1Ev */
/* Demangled: android::PccMode::~PccMode() */
int _ZN7android7PccModeD1Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessingC2Ev */
/* Demangled: android::DisplayPostprocessing::DisplayPostprocessing() */
int _ZN7android21DisplayPostprocessingC2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN7android13DisplayEffect14HandleGameModeEii */
/* Demangled: android::DisplayEffect::HandleGameMode(int, int) */
int _ZN7android13DisplayEffect14HandleGameModeEii(void);

/* Symbol: _ZN7android13DisplayEffect8parseXmlEv */
/* Demangled: android::DisplayEffect::parseXml() */
int _ZN7android13DisplayEffect8parseXmlEv(void);

/* Symbol: _ZN7android17DisplayFeatureHal11setListenerEP9df_devicePFviiE */
/* Demangled: android::DisplayFeatureHal::setListener(df_device*, void (*)(int, int)) */
int _ZN7android17DisplayFeatureHal11setListenerEP9df_devicePFviiE(void);

/* Symbol: _ZN7android17DisplayFeatureHal16setFeatureEnableEP9df_deviceiiii */
/* Demangled: android::DisplayFeatureHal::setFeatureEnable(df_device*, int, int, int, int) */
int _ZN7android17DisplayFeatureHal16setFeatureEnableEP9df_deviceiiii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android11DisplayUtil26readPanelWhiteXYCoordinateERiS1_ */
/* Demangled: android::DisplayUtil::readPanelWhiteXYCoordinate(int&, int&) */
int _ZN7android11DisplayUtil26readPanelWhiteXYCoordinateERiS1_(void);

/* Symbol: _ZN7android9XmlParserD1Ev */
/* Demangled: android::XmlParser::~XmlParser() */
int _ZN7android9XmlParserD1Ev(void);

/* Symbol: _ZN7android11MTKModeImplC2Ev */
/* Demangled: android::MTKModeImpl::MTKModeImpl() */
int _ZN7android11MTKModeImplC2Ev(void);

/* Symbol: _ZN7android6AdModeC2Ev */
/* Demangled: android::AdMode::AdMode() */
int _ZN7android6AdModeC2Ev(void);

/* Symbol: _ZN7android7MTKModeC2Ev */
/* Demangled: android::MTKMode::MTKMode() */
int _ZN7android7MTKModeC2Ev(void);

/* Symbol: _ZN7android13DisplayEffect24HandleBrightnessInteractEii */
/* Demangled: android::DisplayEffect::HandleBrightnessInteract(int, int) */
int _ZN7android13DisplayEffect24HandleBrightnessInteractEii(void);

/* Symbol: _ZN7android21DisplayPostprocessing16analyzeHistogramEjPi */
/* Demangled: android::DisplayPostprocessing::analyzeHistogram(unsigned int, int*) */
int _ZN7android21DisplayPostprocessing16analyzeHistogramEjPi(void);

/* Symbol: _ZN7android10QCModeImplC1Ev */
/* Demangled: android::QCModeImpl::QCModeImpl() */
int _ZN7android10QCModeImplC1Ev(void);

/* Symbol: _ZN7android19DisplayFeatureState6outputEv */
/* Demangled: android::DisplayFeatureState::output() */
int _ZN7android19DisplayFeatureState6outputEv(void);

/* Symbol: _ZN7android14SensorCallbackC1EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_ */
/* Demangled: android::SensorCallback::SensorCallback(void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
int _ZN7android14SensorCallbackC1EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_(void);

/* Symbol: _ZN7android13DisplayEffect10handleCCBBEii */
/* Demangled: android::DisplayEffect::handleCCBB(int, int) */
int _ZN7android13DisplayEffect10handleCCBBEii(void);

/* Symbol: _ZN7android13DisplayEffect13timerCallbackEiii */
/* Demangled: android::DisplayEffect::timerCallback(int, int, int) */
int _ZN7android13DisplayEffect13timerCallbackEiii(void);

/* Symbol: _ZN7android12OutputMethod9doDisableEv */
/* Demangled: android::OutputMethod::doDisable() */
int _ZN7android12OutputMethod9doDisableEv(void);

/* Symbol: _ZTVN7android19DisplayFeatureStateE */
/* Demangled: vtable for android::DisplayFeatureState */
extern void* _ZTVN7android19DisplayFeatureStateE;

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEE11getInstanceEv */
/* Demangled: android::Singleton<android::OutputFactory>::getInstance() */
int _ZN7android9SingletonINS_13OutputFactoryEE11getInstanceEv(void);

/* Symbol: _ZN7android11disp_log_enE */
/* Demangled: android::disp_log_en */
extern void* _ZN7android11disp_log_enE;

/* Symbol: _ZN7android17DisplayFeatureHal4initEv */
/* Demangled: android::DisplayFeatureHal::init() */
int _ZN7android17DisplayFeatureHal4initEv(void);

/* Symbol: _ZN7android11MTKModeImplD0Ev */
/* Demangled: android::MTKModeImpl::~MTKModeImpl() */
int _ZN7android11MTKModeImplD0Ev(void);

/* Symbol: _ZN7android12OutputMethod6outputENS_11OutputParamE */
/* Demangled: android::OutputMethod::output(android::OutputParam) */
int _ZN7android12OutputMethod6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android6AdModeD0Ev */
/* Demangled: android::AdMode::~AdMode() */
int _ZN7android6AdModeD0Ev(void);

/* Symbol: _ZN7android7MTKModeD0Ev */
/* Demangled: android::MTKMode::~MTKMode() */
int _ZN7android7MTKModeD0Ev(void);

/* Symbol: _ZTCN7android14SensorCallbackE0_NS_10frameworks13sensorservice4V1_019IEventQueueCallbackE */
/* Demangled: construction vtable for android::frameworks::sensorservice::V1_0::IEventQueueCallback-in-android::SensorCallback */
extern void* _ZTCN7android14SensorCallbackE0_NS_10frameworks13sensorservice4V1_019IEventQueueCallbackE;

/* Symbol: _ZN7android10QCModeImpl8setParamEPv */
/* Demangled: android::QCModeImpl::setParam(void*) */
int _ZN7android10QCModeImpl8setParamEPv(void);

/* Symbol: _ZN7android11PccModeImplD1Ev */
/* Demangled: android::PccModeImpl::~PccModeImpl() */
int _ZN7android11PccModeImplD1Ev(void);

/* Symbol: _ZN7android9PanelModeD1Ev */
/* Demangled: android::PanelMode::~PanelMode() */
int _ZN7android9PanelModeD1Ev(void);

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEEC1Ev */
/* Demangled: android::Singleton<android::OutputFactory>::Singleton() */
int _ZN7android9SingletonINS_13OutputFactoryEEC1Ev(void);

/* Symbol: _ZN7android11DisplayUtil12getPanelInfoEiPNS_9PanelInfoE */
/* Demangled: android::DisplayUtil::getPanelInfo(int, android::PanelInfo*) */
int _ZN7android11DisplayUtil12getPanelInfoEiPNS_9PanelInfoE(void);

/* Symbol: _ZN7android13DisplayEffect14threadFuncHistEv */
/* Demangled: android::DisplayEffect::threadFuncHist() */
int _ZN7android13DisplayEffect14threadFuncHistEv(void);

/* Symbol: _ZN7android21DisplayPostprocessing13threadWrapperEPv */
/* Demangled: android::DisplayPostprocessing::threadWrapper(void*) */
int _ZN7android21DisplayPostprocessing13threadWrapperEPv(void);

/* Symbol: _ZTVN7android10AdModeImplE */
/* Demangled: vtable for android::AdModeImpl */
extern void* _ZTVN7android10AdModeImplE;

/* Symbol: _ZN7android17DisplayFeatureHalD2Ev */
/* Demangled: android::DisplayFeatureHal::~DisplayFeatureHal() */
int _ZN7android17DisplayFeatureHalD2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZN7android19DisplayFeatureState8setValueEiiibb */
/* Demangled: android::DisplayFeatureState::setValue(int, int, int, bool, bool) */
int _ZN7android19DisplayFeatureState8setValueEiiibb(void);

/* Symbol: _ZN7android21DisplayPostprocessing18forceScreenRefreshEv */
/* Demangled: android::DisplayPostprocessing::forceScreenRefresh() */
int _ZN7android21DisplayPostprocessing18forceScreenRefreshEv(void);

/* Symbol: _ZN7android2spINS_15MTKPQServiceGetEEC2EPS1_ */
/* Demangled: android::sp<android::MTKPQServiceGet>::sp(android::MTKPQServiceGet*) */
int _ZN7android2spINS_15MTKPQServiceGetEEC2EPS1_(void);

/* Symbol: _ZN7android13DisplayEffect14HandleStandardEi */
/* Demangled: android::DisplayEffect::HandleStandard(int) */
int _ZN7android13DisplayEffect14HandleStandardEi(void);

/* Symbol: _ZN7android17DisplayFeatureHal11getFunctionEP9df_devicei */
/* Demangled: android::DisplayFeatureHal::getFunction(df_device*, int) */
int _ZN7android17DisplayFeatureHal11getFunctionEP9df_devicei(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZTVN7android11PccModeImplE */
/* Demangled: vtable for android::PccModeImpl */
extern void* _ZTVN7android11PccModeImplE;

/* Symbol: _ZN7android13OutputFactoryC2Ev */
/* Demangled: android::OutputFactory::OutputFactory() */
int _ZN7android13OutputFactoryC2Ev(void);

/* Symbol: _ZTCN7android18SensorNotifyThreadE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::SensorNotifyThread */
extern void* _ZTCN7android18SensorNotifyThreadE0_NS_6ThreadE;

/* Symbol: _ZTv0_n24_N7android18SensorNotifyThreadD1Ev */
/* Demangled: virtual thunk to android::SensorNotifyThread::~SensorNotifyThread() */
int _ZTv0_n24_N7android18SensorNotifyThreadD1Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessing17setBreakCTDimmingEi */
/* Demangled: android::DisplayPostprocessing::setBreakCTDimming(int) */
int _ZN7android21DisplayPostprocessing17setBreakCTDimmingEi(void);

/* Symbol: _ZN7android19DisplayFeatureStateD1Ev */
/* Demangled: android::DisplayFeatureState::~DisplayFeatureState() */
int _ZN7android19DisplayFeatureStateD1Ev(void);

/* Symbol: _ZN7android13SensorControlC2ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_ */
/* Demangled: android::SensorControl::SensorControl(android::String16 const&, int, void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
int _ZN7android13SensorControlC2ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_(void);

/* Symbol: _ZN7android19DisplayFeatureState4initEbbii */
/* Demangled: android::DisplayFeatureState::init(bool, bool, int, int) */
int _ZN7android19DisplayFeatureState4initEbbii(void);

/* Symbol: _ZN7android16QualcommDPPSModeC1Ev */
/* Demangled: android::QualcommDPPSMode::QualcommDPPSMode() */
int _ZN7android16QualcommDPPSModeC1Ev(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEED2Ev */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::~Singleton() */
int _ZN7android9SingletonINS_21DisplayPostprocessingEED2Ev(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN7android11SviModeImpl6outputENS_11OutputParamE */
/* Demangled: android::SviModeImpl::output(android::OutputParam) */
int _ZN7android11SviModeImpl6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android14QCDPPSModeImpl6outputENS_11OutputParamE */
/* Demangled: android::QCDPPSModeImpl::output(android::OutputParam) */
int _ZN7android14QCDPPSModeImpl6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android13DisplayEffect13HandleEyeCareEii */
/* Demangled: android::DisplayEffect::HandleEyeCare(int, int) */
int _ZN7android13DisplayEffect13HandleEyeCareEii(void);

/* Symbol: _ZTVN7android16QualcommDPPSModeE */
/* Demangled: vtable for android::QualcommDPPSMode */
extern void* _ZTVN7android16QualcommDPPSModeE;

/* Symbol: _ZN7android13DisplayEffect15HandleNightModeEii */
/* Demangled: android::DisplayEffect::HandleNightMode(int, int) */
int _ZN7android13DisplayEffect15HandleNightModeEii(void);

/* Symbol: _ZN7android13DisplayEffect16setDisplayEffectEiii */
/* Demangled: android::DisplayEffect::setDisplayEffect(int, int, int) */
int _ZN7android13DisplayEffect16setDisplayEffectEiii(void);

/* Symbol: _ZN7android18SensorNotifyThreadD2Ev */
/* Demangled: android::SensorNotifyThread::~SensorNotifyThread() */
int _ZN7android18SensorNotifyThreadD2Ev(void);

/* Symbol: _ZTCN7android15MTKPQServiceGetE0_NS_8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-android::MTKPQServiceGet */
extern void* _ZTCN7android15MTKPQServiceGetE0_NS_8hardware20hidl_death_recipientE;

/* Symbol: _ZN7android11DisplayUtil10ulvl_to_xyEddPdS1_ */
/* Demangled: android::DisplayUtil::ulvl_to_xy(double, double, double*, double*) */
int _ZN7android11DisplayUtil10ulvl_to_xyEddPdS1_(void);

/* Symbol: _ZN7android12QualcommModeC1Ev */
/* Demangled: android::QualcommMode::QualcommMode() */
int _ZN7android12QualcommModeC1Ev(void);

/* Symbol: _ZN7android13DisplayEffect9HandleHDREii */
/* Demangled: android::DisplayEffect::HandleHDR(int, int) */
int _ZN7android13DisplayEffect9HandleHDREii(void);

/* Symbol: _ZTVNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEEE */
/* Demangled: vtable for std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()> */
extern void* _ZTVNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEEE;

/* Symbol: _ZN7android13DisplayEffect18clearEyeCareStatusEv */
/* Demangled: android::DisplayEffect::clearEyeCareStatus() */
int _ZN7android13DisplayEffect18clearEyeCareStatusEv(void);

/* Symbol: _ZN7android7SviModeD2Ev */
/* Demangled: android::SviMode::~SviMode() */
int _ZN7android7SviModeD2Ev(void);

/* Symbol: _ZN7android13DisplayEffect13HandlePccGABBEi */
/* Demangled: android::DisplayEffect::HandlePccGABB(int) */
int _ZN7android13DisplayEffect13HandlePccGABBEi(void);

/* Symbol: _ZN7android17DisplayFeatureHalC1EPK11hw_module_t */
/* Demangled: android::DisplayFeatureHal::DisplayFeatureHal(hw_module_t const*) */
int _ZN7android17DisplayFeatureHalC1EPK11hw_module_t(void);

/* Symbol: _ZN7android11SviModeImplC1Ev */
/* Demangled: android::SviModeImpl::SviModeImpl() */
int _ZN7android11SviModeImplC1Ev(void);

/* Symbol: _ZTVN7android14SensorCallbackE */
/* Demangled: vtable for android::SensorCallback */
extern void* _ZTVN7android14SensorCallbackE;

/* Symbol: _ZN7android13DisplayEffect16SetCancelRestoreEi */
/* Demangled: android::DisplayEffect::SetCancelRestore(int) */
int _ZN7android13DisplayEffect16SetCancelRestoreEi(void);

/* Symbol: _ZN7android13DisplayEffectC2Ev */
/* Demangled: android::DisplayEffect::DisplayEffect() */
int _ZN7android13DisplayEffectC2Ev(void);

/* Symbol: _ZN7android17DisplayFeatureHal15getCapabilitiesEP9df_devicePjPi */
/* Demangled: android::DisplayFeatureHal::getCapabilities(df_device*, unsigned int*, int*) */
int _ZN7android17DisplayFeatureHal15getCapabilitiesEP9df_devicePjPi(void);

/* Symbol: _ZN7android14QCDPPSModeImpl8setParamEPv */
/* Demangled: android::QCDPPSModeImpl::setParam(void*) */
int _ZN7android14QCDPPSModeImpl8setParamEPv(void);

/* Symbol: _ZN7android13DisplayEffect12getDispParamEPNS_9DispParamE */
/* Demangled: android::DisplayEffect::getDispParam(android::DispParam*) */
int _ZN7android13DisplayEffect12getDispParamEPNS_9DispParamE(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::destroy_deallocate() */
int _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE18destroy_deallocateEv(void);

/* Symbol: _ZN7android10AdModeImplD2Ev */
/* Demangled: android::AdModeImpl::~AdModeImpl() */
int _ZN7android10AdModeImplD2Ev(void);

/* Symbol: _ZN7android10QCModeImpl6outputENS_11OutputParamE */
/* Demangled: android::QCModeImpl::output(android::OutputParam) */
int _ZN7android10QCModeImpl6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android12OutputMethodD2Ev */
/* Demangled: android::OutputMethod::~OutputMethod() */
int _ZN7android12OutputMethodD2Ev(void);

/* Symbol: _ZN7android21timerCallbackFunctionEPviii */
/* Demangled: android::timerCallbackFunction(void*, int, int, int) */
int _ZN7android21timerCallbackFunctionEPviii(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN7android14QCDPPSModeImplC1Ev */
/* Demangled: android::QCDPPSModeImpl::QCDPPSModeImpl() */
int _ZN7android14QCDPPSModeImplC1Ev(void);

/* Symbol: _ZN7android9XmlParser6deinitEv */
/* Demangled: android::XmlParser::deinit() */
int _ZN7android9XmlParser6deinitEv(void);

/* Symbol: _ZN7android13DisplayEffect15getEffectStatusEi */
/* Demangled: android::DisplayEffect::getEffectStatus(int) */
int _ZN7android13DisplayEffect15getEffectStatusEi(void);

/* Symbol: _ZN7android13DisplayEffect18HandleEXTColorProcEii */
/* Demangled: android::DisplayEffect::HandleEXTColorProc(int, int) */
int _ZN7android13DisplayEffect18HandleEXTColorProcEii(void);

/* Symbol: _ZN7android13DisplayEffect19handleSensorControlEii */
/* Demangled: android::DisplayEffect::handleSensorControl(int, int) */
int _ZN7android13DisplayEffect19handleSensorControlEii(void);

/* Symbol: _ZN7android13DisplayEffectD0Ev */
/* Demangled: android::DisplayEffect::~DisplayEffect() */
int _ZN7android13DisplayEffectD0Ev(void);

/* Symbol: _ZN7android17DisplayFeatureHal17setFunctionEnableEP9df_deviceiiii */
/* Demangled: android::DisplayFeatureHal::setFunctionEnable(df_device*, int, int, int, int) */
int _ZN7android17DisplayFeatureHal17setFunctionEnableEP9df_deviceiiii(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEE5sLockE */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::sLock */
extern void* _ZN7android9SingletonINS_21DisplayPostprocessingEE5sLockE;

/* Symbol: _ZN7android13PanelModeImplC2Ev */
/* Demangled: android::PanelModeImpl::PanelModeImpl() */
int _ZN7android13PanelModeImplC2Ev(void);

/* Symbol: _ZN7android7PccModeD2Ev */
/* Demangled: android::PccMode::~PccMode() */
int _ZN7android7PccModeD2Ev(void);

/* Symbol: _ZN7android13DisplayEffect22handleNightModeEyecareEiii */
/* Demangled: android::DisplayEffect::handleNightModeEyecare(int, int, int) */
int _ZN7android13DisplayEffect22handleNightModeEyecareEiii(void);

/* Symbol: _ZN7android17DisplayFeatureHalC2EPK11hw_module_t */
/* Demangled: android::DisplayFeatureHal::DisplayFeatureHal(hw_module_t const*) */
int _ZN7android17DisplayFeatureHalC2EPK11hw_module_t(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN7android9XmlParserD2Ev */
/* Demangled: android::XmlParser::~XmlParser() */
int _ZN7android9XmlParserD2Ev(void);

/* Symbol: _ZN7android13DisplayEffect15getDisplayStateEv */
/* Demangled: android::DisplayEffect::getDisplayState() */
int _ZN7android13DisplayEffect15getDisplayStateEv(void);

/* Symbol: _ZN7android13DisplayEffect16HandleBCBCCustomEi */
/* Demangled: android::DisplayEffect::HandleBCBCCustom(int) */
int _ZN7android13DisplayEffect16HandleBCBCCustomEi(void);

/* Symbol: _ZN7android13SensorControl4stopEv */
/* Demangled: android::SensorControl::stop() */
int _ZN7android13SensorControl4stopEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN7android10QCModeImplC2Ev */
/* Demangled: android::QCModeImpl::QCModeImpl() */
int _ZN7android10QCModeImplC2Ev(void);

/* Symbol: _ZN7android13PanelModeImplD0Ev */
/* Demangled: android::PanelModeImpl::~PanelModeImpl() */
int _ZN7android13PanelModeImplD0Ev(void);

/* Symbol: _ZTVN7android12QualcommModeE */
/* Demangled: vtable for android::QualcommMode */
extern void* _ZTVN7android12QualcommModeE;

/* Symbol: _ZN7android13DisplayEffect19histogram_operationEi */
/* Demangled: android::DisplayEffect::histogram_operation(int) */
int _ZN7android13DisplayEffect19histogram_operationEi(void);

/* Symbol: _ZN7android13DisplayEffect24HandleKeepWhitePointSRGBEii */
/* Demangled: android::DisplayEffect::HandleKeepWhitePointSRGB(int, int) */
int _ZN7android13DisplayEffect24HandleKeepWhitePointSRGBEii(void);

/* Symbol: _ZN7android21DisplayPostprocessingD1Ev */
/* Demangled: android::DisplayPostprocessing::~DisplayPostprocessing() */
int _ZN7android21DisplayPostprocessingD1Ev(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEE11getInstanceEv */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::getInstance() */
int _ZN7android9SingletonINS_21DisplayPostprocessingEE11getInstanceEv(void);

/* Symbol: _ZN7android9XmlParser9ParseLineEPKcS2_PPcjPj */
/* Demangled: android::XmlParser::ParseLine(char const*, char const*, char**, unsigned int, unsigned int*) */
int _ZN7android9XmlParser9ParseLineEPKcS2_PPcjPj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android11DisplayUtil12getPanelNameEiPc */
/* Demangled: android::DisplayUtil::getPanelName(int, char*) */
int _ZN7android11DisplayUtil12getPanelNameEiPc(void);

/* Symbol: _ZN7android13DisplayEffect5startEv */
/* Demangled: android::DisplayEffect::start() */
int _ZN7android13DisplayEffect5startEv(void);

/* Symbol: _ZN7android13DisplayEffect8HandleADEii */
/* Demangled: android::DisplayEffect::HandleAD(int, int) */
int _ZN7android13DisplayEffect8HandleADEii(void);

/* Symbol: _ZN7android17DisplayFeatureHal11sendMessageEP9df_deviceiiRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: android::DisplayFeatureHal::sendMessage(df_device*, int, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android17DisplayFeatureHal11sendMessageEP9df_deviceiiRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZTVN7android17DisplayFeatureHalE */
/* Demangled: vtable for android::DisplayFeatureHal */
extern void* _ZTVN7android17DisplayFeatureHalE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN7android11MTKModeImplD1Ev */
/* Demangled: android::MTKModeImpl::~MTKModeImpl() */
int _ZN7android11MTKModeImplD1Ev(void);

/* Symbol: _ZN7android6AdModeD1Ev */
/* Demangled: android::AdMode::~AdMode() */
int _ZN7android6AdModeD1Ev(void);

/* Symbol: _ZN7android7MTKModeD1Ev */
/* Demangled: android::MTKMode::~MTKMode() */
int _ZN7android7MTKModeD1Ev(void);

/* Symbol: _ZN7android13DisplayEffect12HandleACWarmEi */
/* Demangled: android::DisplayEffect::HandleACWarm(int) */
int _ZN7android13DisplayEffect12HandleACWarmEi(void);

/* Symbol: _ZN7android21DisplayPostprocessing19calibrateWhitePointEff */
/* Demangled: android::DisplayPostprocessing::calibrateWhitePoint(float, float) */
int _ZN7android21DisplayPostprocessing19calibrateWhitePointEff(void);

/* Symbol: _ZN7android10QCModeImplD0Ev */
/* Demangled: android::QCModeImpl::~QCModeImpl() */
int _ZN7android10QCModeImplD0Ev(void);

/* Symbol: _ZN7android11PccModeImplD2Ev */
/* Demangled: android::PccModeImpl::~PccModeImpl() */
int _ZN7android11PccModeImplD2Ev(void);

/* Symbol: _ZTVN7android13PanelModeImplE */
/* Demangled: vtable for android::PanelModeImpl */
extern void* _ZTVN7android13PanelModeImplE;

/* Symbol: _ZN7android9PanelModeD2Ev */
/* Demangled: android::PanelMode::~PanelMode() */
int _ZN7android9PanelModeD2Ev(void);

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEEC2Ev */
/* Demangled: android::Singleton<android::OutputFactory>::Singleton() */
int _ZN7android9SingletonINS_13OutputFactoryEEC2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void);

/* Symbol: _ZN7android13DisplayEffect12HandlePreHBMEv */
/* Demangled: android::DisplayEffect::HandlePreHBM() */
int _ZN7android13DisplayEffect12HandlePreHBMEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void);

/* Symbol: _ZN7android15MTKPQServiceGet15getMTKPQServiceEv */
/* Demangled: android::MTKPQServiceGet::getMTKPQService() */
int _ZN7android15MTKPQServiceGet15getMTKPQServiceEv(void);

/* Symbol: _ZTVN7android13SensorControlE */
/* Demangled: vtable for android::SensorControl */
extern void* _ZTVN7android13SensorControlE;

/* Symbol: _ZN7android18SensorNotifyThreadC1Ei */
/* Demangled: android::SensorNotifyThread::SensorNotifyThread(int) */
int _ZN7android18SensorNotifyThreadC1Ei(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android13DisplayEffectE */
/* Demangled: vtable for android::DisplayEffect */
extern void* _ZTVN7android13DisplayEffectE;

/* Symbol: _ZN7android21DisplayPostprocessing7initPCCEv */
/* Demangled: android::DisplayPostprocessing::initPCC() */
int _ZN7android21DisplayPostprocessing7initPCCEv(void);

/* Symbol: _ZN7android9XmlParser11getXmlValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPci */
/* Demangled: android::XmlParser::getXmlValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char*, int) */
int _ZN7android9XmlParser11getXmlValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPci(void);

/* Symbol: _ZN7android11DisplayUtil16registerCallbackEPv */
/* Demangled: android::DisplayUtil::registerCallback(void*) */
int _ZN7android11DisplayUtil16registerCallbackEPv(void);

/* Symbol: _ZN7android13DisplayEffect20HandleSunlightScreenEii */
/* Demangled: android::DisplayEffect::HandleSunlightScreen(int, int) */
int _ZN7android13DisplayEffect20HandleSunlightScreenEii(void);

/* Symbol: _ZN7android17DisplayFeatureHal6deinitEv */
/* Demangled: android::DisplayFeatureHal::deinit() */
int _ZN7android17DisplayFeatureHal6deinitEv(void);

/* Symbol: _ZN7android21DisplayPostprocessing19setPCCConfigEyeCareEii */
/* Demangled: android::DisplayPostprocessing::setPCCConfigEyeCare(int, int) */
int _ZN7android21DisplayPostprocessing19setPCCConfigEyeCareEii(void);

/* Symbol: _ZN7android13DisplayEffect14checkHBMStatusEf */
/* Demangled: android::DisplayEffect::checkHBMStatus(float) */
int _ZN7android13DisplayEffect14checkHBMStatusEf(void);

/* Symbol: _ZN7android19DisplayFeatureState18getMethodByProductEv */
/* Demangled: android::DisplayFeatureState::getMethodByProduct() */
int _ZN7android19DisplayFeatureState18getMethodByProductEv(void);

/* Symbol: _ZN7android13DisplayEffect18CalculateGABBParmsEi */
/* Demangled: android::DisplayEffect::CalculateGABBParms(int) */
int _ZN7android13DisplayEffect18CalculateGABBParmsEi(void);

/* Symbol: _ZN7android19DisplayFeatureStateD2Ev */
/* Demangled: android::DisplayFeatureState::~DisplayFeatureState() */
int _ZN7android19DisplayFeatureStateD2Ev(void);

/* Symbol: _ZN7android17DisplayFeatureHal16notifySFWcgStateEb */
/* Demangled: android::DisplayFeatureHal::notifySFWcgState(bool) */
int _ZN7android17DisplayFeatureHal16notifySFWcgStateEb(void);

/* Symbol: _ZN7android17DisplayFeatureHal4openEPK11hw_module_tPKcPP11hw_device_t */
/* Demangled: android::DisplayFeatureHal::open(hw_module_t const*, char const*, hw_device_t**) */
int _ZN7android17DisplayFeatureHal4openEPK11hw_module_tPKcPP11hw_device_t(void);

/* Symbol: _ZN7android21DisplayPostprocessing22setPCCConfigHDREyeCareEii */
/* Demangled: android::DisplayPostprocessing::setPCCConfigHDREyeCare(int, int) */
int _ZN7android21DisplayPostprocessing22setPCCConfigHDREyeCareEii(void);

/* Symbol: _ZN7android13DisplayEffect15getEffectStatusEv */
/* Demangled: android::DisplayEffect::getEffectStatus() */
int _ZN7android13DisplayEffect15getEffectStatusEv(void);

/* Symbol: _ZN7android13DisplayEffect18processDCBacklightEii */
/* Demangled: android::DisplayEffect::processDCBacklight(int, int) */
int _ZN7android13DisplayEffect18processDCBacklightEii(void);

/* Symbol: _ZN7android10AdModeImpl8setParamEPv */
/* Demangled: android::AdModeImpl::setParam(void*) */
int _ZN7android10AdModeImpl8setParamEPv(void);

/* Symbol: _ZN7android11MTKModeImpl6outputENS_11OutputParamE */
/* Demangled: android::MTKModeImpl::output(android::OutputParam) */
int _ZN7android11MTKModeImpl6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android16QualcommDPPSModeC2Ev */
/* Demangled: android::QualcommDPPSMode::QualcommDPPSMode() */
int _ZN7android16QualcommDPPSModeC2Ev(void);

/* Symbol: _ZN7android13OutputFactoryD1Ev */
/* Demangled: android::OutputFactory::~OutputFactory() */
int _ZN7android13OutputFactoryD1Ev(void);

/* Symbol: _ZN7android11DisplayUtil10onCallbackEii */
/* Demangled: android::DisplayUtil::onCallback(int, int) */
int _ZN7android11DisplayUtil10onCallbackEii(void);

/* Symbol: _ZN7android17DisplayFeatureHal15checkModeForWCGEii */
/* Demangled: android::DisplayFeatureHal::checkModeForWCG(int, int) */
int _ZN7android17DisplayFeatureHal15checkModeForWCGEii(void);

/* Symbol: _ZN7android13PanelModeImpl8setParamEPv */
/* Demangled: android::PanelModeImpl::setParam(void*) */
int _ZN7android13PanelModeImpl8setParamEPv(void);

/* Symbol: _ZN7android13DisplayEffect17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::DisplayEffect::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android13DisplayEffect17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android21DisplayPostprocessing11ccbb_enableE */
/* Demangled: android::DisplayPostprocessing::ccbb_enable */
extern void* _ZN7android21DisplayPostprocessing11ccbb_enableE;

/* Symbol: _ZN7android21DisplayPostprocessing14setPCCConfigCTEiii */
/* Demangled: android::DisplayPostprocessing::setPCCConfigCT(int, int, int) */
int _ZN7android21DisplayPostprocessing14setPCCConfigCTEiii(void);

/* Symbol: _ZN7android13SensorControl3setEiPFviPvRKNS_8hardware7sensors4V1_05EventEES1_ */
/* Demangled: android::SensorControl::set(int, void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
int _ZN7android13SensorControl3setEiPFviPvRKNS_8hardware7sensors4V1_05EventEES1_(void);

/* Symbol: _ZN7android13DisplayEffect15HandleColorTempEii */
/* Demangled: android::DisplayEffect::HandleColorTemp(int, int) */
int _ZN7android13DisplayEffect15HandleColorTempEii(void);

/* Symbol: _ZN7android9XmlParser8parseXmlENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::XmlParser::parseXml(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN7android9XmlParser8parseXmlENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android12QualcommModeC2Ev */
/* Demangled: android::QualcommMode::QualcommMode() */
int _ZN7android12QualcommModeC2Ev(void);

/* Symbol: _ZN7android16QualcommDPPSModeD0Ev */
/* Demangled: android::QualcommDPPSMode::~QualcommDPPSMode() */
int _ZN7android16QualcommDPPSModeD0Ev(void);

/* Symbol: _ZTVN7android7SviModeE */
/* Demangled: vtable for android::SviMode */
extern void* _ZTVN7android7SviModeE;

/* Symbol: _ZN7android16printFeatureModeEi */
/* Demangled: android::printFeatureMode(int) */
int _ZN7android16printFeatureModeEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN7android13DisplayEffect12setDispParamEiiii */
/* Demangled: android::DisplayEffect::setDispParam(int, int, int, int) */
int _ZN7android13DisplayEffect12setDispParamEiiii(void);

/* Symbol: _ZN7android13DisplayEffect22HandleRegisterCallbackEPv */
/* Demangled: android::DisplayEffect::HandleRegisterCallback(void*) */
int _ZN7android13DisplayEffect22HandleRegisterCallbackEPv(void);

/* Symbol: _ZN7android10AdModeImpl6outputENS_11OutputParamE */
/* Demangled: android::AdModeImpl::output(android::OutputParam) */
int _ZN7android10AdModeImpl6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android11SviModeImplC2Ev */
/* Demangled: android::SviModeImpl::SviModeImpl() */
int _ZN7android11SviModeImplC2Ev(void);

/* Symbol: _ZN7android13SensorControlD0Ev */
/* Demangled: android::SensorControl::~SensorControl() */
int _ZN7android13SensorControlD0Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessing14clearPccConfigEv */
/* Demangled: android::DisplayPostprocessing::clearPccConfig() */
int _ZN7android21DisplayPostprocessing14clearPccConfigEv(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEEC1Ev */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::Singleton() */
int _ZN7android9SingletonINS_21DisplayPostprocessingEEC1Ev(void);

/* Symbol: _ZN7android12QualcommModeD0Ev */
/* Demangled: android::QualcommMode::~QualcommMode() */
int _ZN7android12QualcommModeD0Ev(void);

/* Symbol: _ZN7android13DisplayEffect13HandleCTAdaptEii */
/* Demangled: android::DisplayEffect::HandleCTAdapt(int, int) */
int _ZN7android13DisplayEffect13HandleCTAdaptEii(void);

/* Symbol: _ZN7android13DisplayEffect19HandleCameraRequestEii */
/* Demangled: android::DisplayEffect::HandleCameraRequest(int, int) */
int _ZN7android13DisplayEffect19HandleCameraRequestEii(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7destroyEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::destroy() */
int _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7destroyEv(void);

/* Symbol: _ZN7android11SviModeImplD0Ev */
/* Demangled: android::SviModeImpl::~SviModeImpl() */
int _ZN7android11SviModeImplD0Ev(void);

/* Symbol: _ZN7android14QCDPPSModeImplC2Ev */
/* Demangled: android::QCDPPSModeImpl::QCDPPSModeImpl() */
int _ZN7android14QCDPPSModeImplC2Ev(void);

/* Symbol: _ZN7android13DisplayEffect11setWCGStateEb */
/* Demangled: android::DisplayEffect::setWCGState(bool) */
int _ZN7android13DisplayEffect11setWCGStateEb(void);

/* Symbol: _ZN7android13DisplayEffectD1Ev */
/* Demangled: android::DisplayEffect::~DisplayEffect() */
int _ZN7android13DisplayEffectD1Ev(void);

/* Symbol: _ZTVN7android11SviModeImplE */
/* Demangled: vtable for android::SviModeImpl */
extern void* _ZTVN7android11SviModeImplE;

/* Symbol: _ZN7android13DisplayEffect12DataCallbackERKNS_8hardware7sensors4V1_05EventE */
/* Demangled: android::DisplayEffect::DataCallback(android::hardware::sensors::V1_0::Event const&) */
int _ZN7android13DisplayEffect12DataCallbackERKNS_8hardware7sensors4V1_05EventE(void);

/* Symbol: _ZN7android13DisplayEffect23HandleIncreasedContrastEi */
/* Demangled: android::DisplayEffect::HandleIncreasedContrast(int) */
int _ZN7android13DisplayEffect23HandleIncreasedContrastEi(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEPNS0_6__baseISE_EE */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::__clone(std::__1::__function::__base<void ()>*) const */
int _ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEPNS0_6__baseISE_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::__clone() const */
int _ZNKSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEE7__cloneEv(void);

/* Symbol: _ZN7android21DisplayPostprocessing9setParamsEPv */
/* Demangled: android::DisplayPostprocessing::setParams(void*) */
int _ZN7android21DisplayPostprocessing9setParamsEPv(void);

/* Symbol: _ZN7android7SviModeC1Ev */
/* Demangled: android::SviMode::SviMode() */
int _ZN7android7SviModeC1Ev(void);

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEE9sInstanceE */
/* Demangled: android::Singleton<android::OutputFactory>::sInstance */
extern void* _ZN7android9SingletonINS_13OutputFactoryEE9sInstanceE;

/* Symbol: _ZN7android13DisplayEffect18HandleDisplayStateEii */
/* Demangled: android::DisplayEffect::HandleDisplayState(int, int) */
int _ZN7android13DisplayEffect18HandleDisplayStateEii(void);

/* Symbol: _ZN7android21DisplayPostprocessing16computeHistogramEj */
/* Demangled: android::DisplayPostprocessing::computeHistogram(unsigned int) */
int _ZN7android21DisplayPostprocessing16computeHistogramEj(void);

/* Symbol: _ZN7android14QCDPPSModeImplD0Ev */
/* Demangled: android::QCDPPSModeImpl::~QCDPPSModeImpl() */
int _ZN7android14QCDPPSModeImplD0Ev(void);

/* Symbol: _ZTVN7android7MTKModeE */
/* Demangled: vtable for android::MTKMode */
extern void* _ZTVN7android7MTKModeE;

/* Symbol: _ZN7android12OutputMethod8setParamEPv */
/* Demangled: android::OutputMethod::setParam(void*) */
int _ZN7android12OutputMethod8setParamEPv(void);

/* Symbol: _ZN7android13PanelModeImplD1Ev */
/* Demangled: android::PanelModeImpl::~PanelModeImpl() */
int _ZN7android13PanelModeImplD1Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessingD2Ev */
/* Demangled: android::DisplayPostprocessing::~DisplayPostprocessing() */
int _ZN7android21DisplayPostprocessingD2Ev(void);

/* Symbol: _ZN7android10AdModeImplC1Ev */
/* Demangled: android::AdModeImpl::AdModeImpl() */
int _ZN7android10AdModeImplC1Ev(void);

/* Symbol: _ZN7android12OutputMethodC1Ev */
/* Demangled: android::OutputMethod::OutputMethod() */
int _ZN7android12OutputMethodC1Ev(void);

/* Symbol: _ZN7android13OutputFactory13createProductEiPc */
/* Demangled: android::OutputFactory::createProduct(int, char*) */
int _ZN7android13OutputFactory13createProductEiPc(void);

/* Symbol: _ZN7android9XmlParser6IsRootEPKh */
/* Demangled: android::XmlParser::IsRoot(unsigned char const*) */
int _ZN7android9XmlParser6IsRootEPKh(void);

/* Symbol: _ZN7android13SensorControlC1ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_ */
/* Demangled: android::SensorControl::SensorControl(android::String16 const&, int, void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
int _ZN7android13SensorControlC1ERKNS_8String16EiPFviPvRKNS_8hardware7sensors4V1_05EventEES4_(void);

/* Symbol: _ZN7android11MTKModeImplD2Ev */
/* Demangled: android::MTKModeImpl::~MTKModeImpl() */
int _ZN7android11MTKModeImplD2Ev(void);

/* Symbol: _ZN7android6AdModeD2Ev */
/* Demangled: android::AdMode::~AdMode() */
int _ZN7android6AdModeD2Ev(void);

/* Symbol: _ZN7android7MTKModeD2Ev */
/* Demangled: android::MTKMode::~MTKMode() */
int _ZN7android7MTKModeD2Ev(void);

/* Symbol: _ZN7android13DisplayEffect18restorePanelEffectEii */
/* Demangled: android::DisplayEffect::restorePanelEffect(int, int) */
int _ZN7android13DisplayEffect18restorePanelEffectEii(void);

/* Symbol: _ZN7android13DisplayEffect22handleDispSwitchOptionEii */
/* Demangled: android::DisplayEffect::handleDispSwitchOption(int, int) */
int _ZN7android13DisplayEffect22handleDispSwitchOptionEii(void);

/* Symbol: _ZN7android7PccModeC1Ev */
/* Demangled: android::PccMode::PccMode() */
int _ZN7android7PccModeC1Ev(void);

/* Symbol: _ZN7android10QCModeImplD1Ev */
/* Demangled: android::QCModeImpl::~QCModeImpl() */
int _ZN7android10QCModeImplD1Ev(void);

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEE11hasInstanceEv */
/* Demangled: android::Singleton<android::OutputFactory>::hasInstance() */
int _ZN7android9SingletonINS_13OutputFactoryEE11hasInstanceEv(void);

/* Symbol: _ZN7android18SensorNotifyThreadC2Ei */
/* Demangled: android::SensorNotifyThread::SensorNotifyThread(int) */
int _ZN7android18SensorNotifyThreadC2Ei(void);

/* Symbol: _ZN7android9XmlParserC1Ev */
/* Demangled: android::XmlParser::XmlParser() */
int _ZN7android9XmlParserC1Ev(void);

/* Symbol: _ZN7android19DisplayFeatureState18getIsEnableByValueEi */
/* Demangled: android::DisplayFeatureState::getIsEnableByValue(int) */
int _ZN7android19DisplayFeatureState18getIsEnableByValueEi(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEED1Ev */
/* Demangled: android::Singleton<android::OutputFactory>::~Singleton() */
int _ZN7android9SingletonINS_13OutputFactoryEED1Ev(void);

/* Symbol: _ZN7android13DisplayEffect16getEffectFirstIdEi */
/* Demangled: android::DisplayEffect::getEffectFirstId(int) */
int _ZN7android13DisplayEffect16getEffectFirstIdEi(void);

/* Symbol: _ZN7android11DisplayUtil9parseLineEPKcS2_PPcjPj */
/* Demangled: android::DisplayUtil::parseLine(char const*, char const*, char**, unsigned int, unsigned int*) */
int _ZN7android11DisplayUtil9parseLineEPKcS2_PPcjPj(void);

/* Symbol: _ZN7android13DisplayEffect17HandleDCBacklightEii */
/* Demangled: android::DisplayEffect::HandleDCBacklight(int, int) */
int _ZN7android13DisplayEffect17HandleDCBacklightEii(void);

/* Symbol: _ZN7android13DisplayEffect20SetMessageGenerationEii */
/* Demangled: android::DisplayEffect::SetMessageGeneration(int, int) */
int _ZN7android13DisplayEffect20SetMessageGenerationEii(void);

/* Symbol: _ZN7android9PanelModeC1Ev */
/* Demangled: android::PanelMode::PanelMode() */
int _ZN7android9PanelModeC1Ev(void);

/* Symbol: _ZTTN7android18SensorNotifyThreadE */
/* Demangled: VTT for android::SensorNotifyThread */
extern void* _ZTTN7android18SensorNotifyThreadE;

/* Symbol: _ZN7android11PccModeImplC1Ev */
/* Demangled: android::PccModeImpl::PccModeImpl() */
int _ZN7android11PccModeImplC1Ev(void);

/* Symbol: _ZN7android11DisplayUtil10xy_to_ulvlEddPdS1_ */
/* Demangled: android::DisplayUtil::xy_to_ulvl(double, double, double*, double*) */
int _ZN7android11DisplayUtil10xy_to_ulvlEddPdS1_(void);

/* Symbol: _ZN7android21DisplayPostprocessing10threadFuncEv */
/* Demangled: android::DisplayPostprocessing::threadFunc() */
int _ZN7android21DisplayPostprocessing10threadFuncEv(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android13OutputFactoryD2Ev */
/* Demangled: android::OutputFactory::~OutputFactory() */
int _ZN7android13OutputFactoryD2Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessing16setPCCConfigGABBEi */
/* Demangled: android::DisplayPostprocessing::setPCCConfigGABB(int) */
int _ZN7android21DisplayPostprocessing16setPCCConfigGABBEi(void);

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN7android16QualcommDPPSModeD1Ev */
/* Demangled: android::QualcommDPPSMode::~QualcommDPPSMode() */
int _ZN7android16QualcommDPPSModeD1Ev(void);

/* Symbol: _ZN7android11DisplayUtil17writePanelDsiCmdsEPc */
/* Demangled: android::DisplayUtil::writePanelDsiCmds(char*) */
int _ZN7android11DisplayUtil17writePanelDsiCmdsEPc(void);

/* Symbol: _ZN7android13DisplayEffect16HandleDFPSCustomEii */
/* Demangled: android::DisplayEffect::HandleDFPSCustom(int, int) */
int _ZN7android13DisplayEffect16HandleDFPSCustomEii(void);

/* Symbol: _ZN7android17DisplayFeatureHalD0Ev */
/* Demangled: android::DisplayFeatureHal::~DisplayFeatureHal() */
int _ZN7android17DisplayFeatureHalD0Ev(void);

/* Symbol: _ZN7android11DisplayUtil14matrix_inverseEPA6_f */
/* Demangled: android::DisplayUtil::matrix_inverse(float (*) [6]) */
int _ZN7android11DisplayUtil14matrix_inverseEPA6_f(void);

/* Symbol: _ZN7android21DisplayPostprocessing19computeRGBCoeffbyBLEPfj */
/* Demangled: android::DisplayPostprocessing::computeRGBCoeffbyBL(float*, unsigned int) */
int _ZN7android21DisplayPostprocessing19computeRGBCoeffbyBLEPfj(void);

/* Symbol: _ZN7android2spINS_15MTKPQServiceGetEED2Ev */
/* Demangled: android::sp<android::MTKPQServiceGet>::~sp() */
int _ZN7android2spINS_15MTKPQServiceGetEED2Ev(void);

/* Symbol: _ZTVN7android15MTKPQServiceGetE */
/* Demangled: vtable for android::MTKPQServiceGet */
extern void* _ZTVN7android15MTKPQServiceGetE;

/* Symbol: _ZN7android19DisplayFeatureStateC1Ev */
/* Demangled: android::DisplayFeatureState::DisplayFeatureState() */
int _ZN7android19DisplayFeatureStateC1Ev(void);

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEE5sLockE */
/* Demangled: android::Singleton<android::OutputFactory>::sLock */
extern void* _ZN7android9SingletonINS_13OutputFactoryEE5sLockE;

/* Symbol: _ZN7android11DisplayUtil9cct_to_xyEdPdS1_ */
/* Demangled: android::DisplayUtil::cct_to_xy(double, double*, double*) */
int _ZN7android11DisplayUtil9cct_to_xyEdPdS1_(void);

/* Symbol: _ZN7android13DisplayEffect13setBrightnessEi */
/* Demangled: android::DisplayEffect::setBrightness(int) */
int _ZN7android13DisplayEffect13setBrightnessEi(void);

/* Symbol: _ZN7android13DisplayEffect18HandleBacklightFODEii */
/* Demangled: android::DisplayEffect::HandleBacklightFOD(int, int) */
int _ZN7android13DisplayEffect18HandleBacklightFODEii(void);

/* Symbol: _ZN7android17DisplayFeatureHal9log_levelE */
/* Demangled: android::DisplayFeatureHal::log_level */
extern void* _ZN7android17DisplayFeatureHal9log_levelE;

/* Symbol: _ZN7android13SensorControlC1ERKNS_8String16E */
/* Demangled: android::SensorControl::SensorControl(android::String16 const&) */
int _ZN7android13SensorControlC1ERKNS_8String16E(void);

/* Symbol: _ZN7android13SensorControlD1Ev */
/* Demangled: android::SensorControl::~SensorControl() */
int _ZN7android13SensorControlD1Ev(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEEC2Ev */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::Singleton() */
int _ZN7android9SingletonINS_21DisplayPostprocessingEEC2Ev(void);

/* Symbol: _ZN7android12QualcommModeD1Ev */
/* Demangled: android::QualcommMode::~QualcommMode() */
int _ZN7android12QualcommModeD1Ev(void);

/* Symbol: _ZN7android14SensorCallback7onEventERKNS_8hardware7sensors4V1_05EventE */
/* Demangled: android::SensorCallback::onEvent(android::hardware::sensors::V1_0::Event const&) */
int _ZN7android14SensorCallback7onEventERKNS_8hardware7sensors4V1_05EventE(void);

/* Symbol: _ZTTN7android14SensorCallbackE */
/* Demangled: VTT for android::SensorCallback */
extern void* _ZTTN7android14SensorCallbackE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE4findIS7_EENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEERKT_(void);

/* Symbol: _ZN7android13DisplayEffect17ThreadWrapperHistEPv */
/* Demangled: android::DisplayEffect::ThreadWrapperHist(void*) */
int _ZN7android13DisplayEffect17ThreadWrapperHistEPv(void);

/* Symbol: _ZTVN7android6AdModeE */
/* Demangled: vtable for android::AdMode */
extern void* _ZTVN7android6AdModeE;

/* Symbol: _ZN7android13DisplayEffect12GetHdrStatusEv */
/* Demangled: android::DisplayEffect::GetHdrStatus() */
int _ZN7android13DisplayEffect12GetHdrStatusEv(void);

/* Symbol: _ZN7android13DisplayEffect14notifyQserviceEii */
/* Demangled: android::DisplayEffect::notifyQservice(int, int) */
int _ZN7android13DisplayEffect14notifyQserviceEii(void);

/* Symbol: _ZN7android13DisplayEffect20GetMessageGenerationEi */
/* Demangled: android::DisplayEffect::GetMessageGeneration(int) */
int _ZN7android13DisplayEffect20GetMessageGenerationEi(void);

/* Symbol: _ZN7android21DisplayPostprocessing12setPCCConfigEi */
/* Demangled: android::DisplayPostprocessing::setPCCConfig(int) */
int _ZN7android21DisplayPostprocessing12setPCCConfigEi(void);

/* Symbol: _ZN7android21DisplayPostprocessing9setHDRPccEi */
/* Demangled: android::DisplayPostprocessing::setHDRPcc(int) */
int _ZN7android21DisplayPostprocessing9setHDRPccEi(void);

/* Symbol: _ZN7android11SviModeImplD1Ev */
/* Demangled: android::SviModeImpl::~SviModeImpl() */
int _ZN7android11SviModeImplD1Ev(void);

/* Symbol: _ZN7android13DisplayEffect15restoreQcomModeEv */
/* Demangled: android::DisplayEffect::restoreQcomMode() */
int _ZN7android13DisplayEffect15restoreQcomModeEv(void);

/* Symbol: _ZN7android13DisplayEffect19featureEnablePolicyEiiiib */
/* Demangled: android::DisplayEffect::featureEnablePolicy(int, int, int, int, bool) */
int _ZN7android13DisplayEffect19featureEnablePolicyEiiiib(void);

/* Symbol: _ZN7android13DisplayEffect9onSuspendEv */
/* Demangled: android::DisplayEffect::onSuspend() */
int _ZN7android13DisplayEffect9onSuspendEv(void);

/* Symbol: _ZN7android13DisplayEffectD2Ev */
/* Demangled: android::DisplayEffect::~DisplayEffect() */
int _ZN7android13DisplayEffectD2Ev(void);

/* Symbol: _ZN7android14SensorCallbackC2EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_ */
/* Demangled: android::SensorCallback::SensorCallback(void (*)(int, void*, android::hardware::sensors::V1_0::Event const&), void*) */
int _ZN7android14SensorCallbackC2EPFviPvRKNS_8hardware7sensors4V1_05EventEES1_(void);

/* Symbol: _ZN7android13DisplayEffect10HandleGABBEi */
/* Demangled: android::DisplayEffect::HandleGABB(int) */
int _ZN7android13DisplayEffect10HandleGABBEi(void);

/* Symbol: _ZN7android21DisplayPostprocessing11ccbb_log_enE */
/* Demangled: android::DisplayPostprocessing::ccbb_log_en */
extern void* _ZN7android21DisplayPostprocessing11ccbb_log_enE;

/* Symbol: _ZN7android21DisplayPostprocessing18setBacklightOffsetEi */
/* Demangled: android::DisplayPostprocessing::setBacklightOffset(int) */
int _ZN7android21DisplayPostprocessing18setBacklightOffsetEi(void);

/* Symbol: _ZN7android7SviModeC2Ev */
/* Demangled: android::SviMode::SviMode() */
int _ZN7android7SviModeC2Ev(void);

/* Symbol: _ZN7android11DisplayUtil9xy_to_cctEddPd */
/* Demangled: android::DisplayUtil::xy_to_cct(double, double, double*) */
int _ZN7android11DisplayUtil9xy_to_cctEddPd(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN7android18SensorNotifyThreadD0Ev */
/* Demangled: android::SensorNotifyThread::~SensorNotifyThread() */
int _ZN7android18SensorNotifyThreadD0Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessing16changeWhitePointEi */
/* Demangled: android::DisplayPostprocessing::changeWhitePoint(int) */
int _ZN7android21DisplayPostprocessing16changeWhitePointEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN7android14QCDPPSModeImplD1Ev */
/* Demangled: android::QCDPPSModeImpl::~QCDPPSModeImpl() */
int _ZN7android14QCDPPSModeImplD1Ev(void);

/* Symbol: _ZN7android13SensorControlC2ERKNS_8String16E */
/* Demangled: android::SensorControl::SensorControl(android::String16 const&) */
int _ZN7android13SensorControlC2ERKNS_8String16E(void);

/* Symbol: _ZN7android13DisplayEffect22enableNightModeEyecareEi */
/* Demangled: android::DisplayEffect::enableNightModeEyecare(int) */
int _ZN7android13DisplayEffect22enableNightModeEyecareEi(void);

/* Symbol: _ZN7android13DisplayEffect8onResumeEv */
/* Demangled: android::DisplayEffect::onResume() */
int _ZN7android13DisplayEffect8onResumeEv(void);

/* Symbol: _ZN7android21DisplayPostprocessing14setESSFunctionEi */
/* Demangled: android::DisplayPostprocessing::setESSFunction(int) */
int _ZN7android21DisplayPostprocessing14setESSFunctionEi(void);

/* Symbol: _ZN7android21DisplayPostprocessing16restorePccConfigEv */
/* Demangled: android::DisplayPostprocessing::restorePccConfig() */
int _ZN7android21DisplayPostprocessing16restorePccConfigEv(void);

/* Symbol: _ZN7android13PanelModeImplD2Ev */
/* Demangled: android::PanelModeImpl::~PanelModeImpl() */
int _ZN7android13PanelModeImplD2Ev(void);

/* Symbol: _ZN7android13SensorControl5startEiib */
/* Demangled: android::SensorControl::start(int, int, bool) */
int _ZN7android13SensorControl5startEiib(void);

/* Symbol: _ZN7android21DisplayPostprocessing21setPostprocessingModeEiibb */
/* Demangled: android::DisplayPostprocessing::setPostprocessingMode(int, int, bool, bool) */
int _ZN7android21DisplayPostprocessing21setPostprocessingModeEiibb(void);

/* Symbol: _ZN7android10AdModeImplC2Ev */
/* Demangled: android::AdModeImpl::AdModeImpl() */
int _ZN7android10AdModeImplC2Ev(void);

/* Symbol: _ZN7android12OutputMethodC2Ev */
/* Demangled: android::OutputMethod::OutputMethod() */
int _ZN7android12OutputMethodC2Ev(void);

/* Symbol: _ZN7android7SviModeD0Ev */
/* Demangled: android::SviMode::~SviMode() */
int _ZN7android7SviModeD0Ev(void);

/* Symbol: _ZN7android11DisplayUtil9mCallbackE */
/* Demangled: android::DisplayUtil::mCallback */
extern void* _ZN7android11DisplayUtil9mCallbackE;

/* Symbol: _ZN7android21DisplayPostprocessing16setPCCConfigCCBBEiibb */
/* Demangled: android::DisplayPostprocessing::setPCCConfigCCBB(int, int, bool, bool) */
int _ZN7android21DisplayPostprocessing16setPCCConfigCCBBEiibb(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZTVN7android12OutputMethodE */
/* Demangled: vtable for android::OutputMethod */
extern void* _ZTVN7android12OutputMethodE;

/* Symbol: _ZTVN7android14QCDPPSModeImplE */
/* Demangled: vtable for android::QCDPPSModeImpl */
extern void* _ZTVN7android14QCDPPSModeImplE;

/* Symbol: _ZN7android11DisplayUtil17readMaxBrightnessEPl */
/* Demangled: android::DisplayUtil::readMaxBrightness(long*) */
int _ZN7android11DisplayUtil17readMaxBrightnessEPl(void);

/* Symbol: _ZN7android12getPQServiceEv */
/* Demangled: android::getPQService() */
int _ZN7android12getPQServiceEv(void);

/* Symbol: _ZN7android9SingletonINS_21DisplayPostprocessingEE11hasInstanceEv */
/* Demangled: android::Singleton<android::DisplayPostprocessing>::hasInstance() */
int _ZN7android9SingletonINS_21DisplayPostprocessingEE11hasInstanceEv(void);

/* Symbol: _ZTTN7android15MTKPQServiceGetE */
/* Demangled: VTT for android::MTKPQServiceGet */
extern void* _ZTTN7android15MTKPQServiceGetE;

/* Symbol: _ZN7android10QCModeImplD2Ev */
/* Demangled: android::QCModeImpl::~QCModeImpl() */
int _ZN7android10QCModeImplD2Ev(void);

/* Symbol: _ZN7android11PccModeImpl8setParamEPv */
/* Demangled: android::PccModeImpl::setParam(void*) */
int _ZN7android11PccModeImpl8setParamEPv(void);

/* Symbol: _ZN7android7PccModeC2Ev */
/* Demangled: android::PccMode::PccMode() */
int _ZN7android7PccModeC2Ev(void);

/* Symbol: _ZN7android13DisplayEffect19threadFuncBacklightEv */
/* Demangled: android::DisplayEffect::threadFuncBacklight() */
int _ZN7android13DisplayEffect19threadFuncBacklightEv(void);

/* Symbol: _ZN7android13SensorControl10sensor_logE */
/* Demangled: android::SensorControl::sensor_log */
extern void* _ZN7android13SensorControl10sensor_logE;

/* Symbol: _ZN7android10AdModeImplD0Ev */
/* Demangled: android::AdModeImpl::~AdModeImpl() */
int _ZN7android10AdModeImplD0Ev(void);

/* Symbol: _ZN7android11PccModeImpl6outputENS_11OutputParamE */
/* Demangled: android::PccModeImpl::output(android::OutputParam) */
int _ZN7android11PccModeImpl6outputENS_11OutputParamE(void);

/* Symbol: _ZN7android12OutputMethodD0Ev */
/* Demangled: android::OutputMethod::~OutputMethod() */
int _ZN7android12OutputMethodD0Ev(void);

/* Symbol: _ZN7android13DisplayEffect20HandleCabcModeCustomEii */
/* Demangled: android::DisplayEffect::HandleCabcModeCustom(int, int) */
int _ZN7android13DisplayEffect20HandleCabcModeCustomEii(void);

/* Symbol: _ZN7android13DisplayEffect20isStartSensorControlEv */
/* Demangled: android::DisplayEffect::isStartSensorControl() */
int _ZN7android13DisplayEffect20isStartSensorControlEv(void);

/* Symbol: _ZN7android13DisplayEffect9HandleHBMEii */
/* Demangled: android::DisplayEffect::HandleHBM(int, int) */
int _ZN7android13DisplayEffect9HandleHBMEii(void);

/* Symbol: _ZTVN7android18SensorNotifyThreadE */
/* Demangled: vtable for android::SensorNotifyThread */
extern void* _ZTVN7android18SensorNotifyThreadE;

/* Symbol: _ZN7android9XmlParserC2Ev */
/* Demangled: android::XmlParser::XmlParser() */
int _ZN7android9XmlParserC2Ev(void);

/* Symbol: _ZN7android13DisplayEffect15setEffectStatusEi */
/* Demangled: android::DisplayEffect::setEffectStatus(int) */
int _ZN7android13DisplayEffect15setEffectStatusEi(void);

/* Symbol: _ZN7android13DisplayEffect9setParamsEiPv */
/* Demangled: android::DisplayEffect::setParams(int, void*) */
int _ZN7android13DisplayEffect9setParamsEiPv(void);

/* Symbol: _ZN7android21DisplayPostprocessing17getDisplayDtsInfoEPNS_9PanelInfoE */
/* Demangled: android::DisplayPostprocessing::getDisplayDtsInfo(android::PanelInfo*) */
int _ZN7android21DisplayPostprocessing17getDisplayDtsInfoEPNS_9PanelInfoE(void);

/* Symbol: _ZN7android7PccModeD0Ev */
/* Demangled: android::PccMode::~PccMode() */
int _ZN7android7PccModeD0Ev(void);

/* Symbol: _ZN7android9SingletonINS_13OutputFactoryEED2Ev */
/* Demangled: android::Singleton<android::OutputFactory>::~Singleton() */
int _ZN7android9SingletonINS_13OutputFactoryEED2Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessingC1Ev */
/* Demangled: android::DisplayPostprocessing::DisplayPostprocessing() */
int _ZN7android21DisplayPostprocessingC1Ev(void);

/* Symbol: _ZN7android18SensorNotifyThread10threadLoopEv */
/* Demangled: android::SensorNotifyThread::threadLoop() */
int _ZN7android18SensorNotifyThread10threadLoopEv(void);

/* Symbol: _ZN7android6AdModeC1Ev */
/* Demangled: android::AdMode::AdMode() */
int _ZN7android6AdModeC1Ev(void);

/* Symbol: _ZN7android7MTKModeC1Ev */
/* Demangled: android::MTKMode::MTKMode() */
int _ZN7android7MTKModeC1Ev(void);

/* Symbol: _ZN7android11MTKModeImplC1Ev */
/* Demangled: android::MTKModeImpl::MTKModeImpl() */
int _ZN7android11MTKModeImplC1Ev(void);

/* Symbol: _ZN7android11PccModeImplC2Ev */
/* Demangled: android::PccModeImpl::PccModeImpl() */
int _ZN7android11PccModeImplC2Ev(void);

/* Symbol: _ZN7android9PanelModeC2Ev */
/* Demangled: android::PanelMode::PanelMode() */
int _ZN7android9PanelModeC2Ev(void);

/* Symbol: _ZTCN7android14SensorCallbackE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::SensorCallback */
extern void* _ZTCN7android14SensorCallbackE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android9XmlParser4initEv */
/* Demangled: android::XmlParser::init() */
int _ZN7android9XmlParser4initEv(void);

/* Symbol: _ZN7android17DisplayFeatureHal14checkWCGEnableEii */
/* Demangled: android::DisplayFeatureHal::checkWCGEnable(int, int) */
int _ZN7android17DisplayFeatureHal14checkWCGEnableEii(void);

/* Symbol: _ZN7android19DisplayFeatureState9isSupportEv */
/* Demangled: android::DisplayFeatureState::isSupport() */
int _ZN7android19DisplayFeatureState9isSupportEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEEclEv */
/* Demangled: std::__1::__function::__func<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int>, std::__1::allocator<std::__1::__bind<void (&)(void*, int, int, int), android::DisplayEffect*, android::DISPLAY_FEATURE_TIMER_STATE, int&, int> >, void ()>::operator()() */
int _ZNSt3__110__function6__funcINS_6__bindIRFvPviiiEJPN7android13DisplayEffectENS6_27DISPLAY_FEATURE_TIMER_STATEERiiEEENS_9allocatorISB_EEFvvEEclEv(void);

/* Symbol: _ZN7android13DisplayEffect12getPanelNameEPKcPc */
/* Demangled: android::DisplayEffect::getPanelName(char const*, char*) */
int _ZN7android13DisplayEffect12getPanelNameEPKcPc(void);

/* Symbol: _ZN7android11SviModeImpl8setParamEPv */
/* Demangled: android::SviModeImpl::setParam(void*) */
int _ZN7android11SviModeImpl8setParamEPv(void);

/* Symbol: _ZTVN7android7PccModeE */
/* Demangled: vtable for android::PccMode */
extern void* _ZTVN7android7PccModeE;

/* Symbol: _ZN7android11DisplayUtil9xy_to_XYZEddPdS1_S1_ */
/* Demangled: android::DisplayUtil::xy_to_XYZ(double, double, double*, double*, double*) */
int _ZN7android11DisplayUtil9xy_to_XYZEddPdS1_S1_(void);

/* Symbol: _ZN7android13DisplayEffect16getSunlightLevelEi */
/* Demangled: android::DisplayEffect::getSunlightLevel(int) */
int _ZN7android13DisplayEffect16getSunlightLevelEi(void);

/* Symbol: _ZN7android13DisplayEffect17setBreakCTDimmingEi */
/* Demangled: android::DisplayEffect::setBreakCTDimming(int) */
int _ZN7android13DisplayEffect17setBreakCTDimmingEi(void);

/* Symbol: _ZN7android11PccModeImplD0Ev */
/* Demangled: android::PccModeImpl::~PccModeImpl() */
int _ZN7android11PccModeImplD0Ev(void);

/* Symbol: _ZN7android9PanelModeD0Ev */
/* Demangled: android::PanelMode::~PanelMode() */
int _ZN7android9PanelModeD0Ev(void);

/* Symbol: _ZTVN7android9PanelModeE */
/* Demangled: vtable for android::PanelMode */
extern void* _ZTVN7android9PanelModeE;

/* Symbol: _ZN7android13DisplayEffect17getEXTColorStatusEv */
/* Demangled: android::DisplayEffect::getEXTColorStatus() */
int _ZN7android13DisplayEffect17getEXTColorStatusEv(void);

/* Symbol: _ZN7android17DisplayFeatureHal5closeEP11hw_device_t */
/* Demangled: android::DisplayFeatureHal::close(hw_device_t*) */
int _ZN7android17DisplayFeatureHal5closeEP11hw_device_t(void);

/* Symbol: _ZN7android16QualcommDPPSModeD2Ev */
/* Demangled: android::QualcommDPPSMode::~QualcommDPPSMode() */
int _ZN7android16QualcommDPPSModeD2Ev(void);

/* Symbol: _ZN7android13DisplayEffect16getEyecareParamsEj */
/* Demangled: android::DisplayEffect::getEyecareParams(unsigned int) */
int _ZN7android13DisplayEffect16getEyecareParamsEj(void);

/* Symbol: _ZN7android17DisplayFeatureHalD1Ev */
/* Demangled: android::DisplayFeatureHal::~DisplayFeatureHal() */
int _ZN7android17DisplayFeatureHalD1Ev(void);

/* Symbol: _ZN7android21DisplayPostprocessing9setPQModeEi */
/* Demangled: android::DisplayPostprocessing::setPQMode(int) */
int _ZN7android21DisplayPostprocessing9setPQModeEi(void);

/* Symbol: _ZN7android11DisplayUtil21readPanelMaxLuminanceERi */
/* Demangled: android::DisplayUtil::readPanelMaxLuminance(int&) */
int _ZN7android11DisplayUtil21readPanelMaxLuminanceERi(void);

/* Symbol: _ZN7android19DisplayFeatureStateC2Ev */
/* Demangled: android::DisplayFeatureState::DisplayFeatureState() */
int _ZN7android19DisplayFeatureStateC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android21DisplayPostprocessing19checkParameterValidEPiii */
/* Demangled: android::DisplayPostprocessing::checkParameterValid(int*, int, int) */
int _ZN7android21DisplayPostprocessing19checkParameterValidEPiii(void);

/* Symbol: _ZN7android11MTKModeImpl8setParamEPv */
/* Demangled: android::MTKModeImpl::setParam(void*) */
int _ZN7android11MTKModeImpl8setParamEPv(void);

/* Symbol: _ZTVN7android10QCModeImplE */
/* Demangled: vtable for android::QCModeImpl */
extern void* _ZTVN7android10QCModeImplE;

/* Symbol: _ZN7android13SensorControlD2Ev */
/* Demangled: android::SensorControl::~SensorControl() */
int _ZN7android13SensorControlD2Ev(void);

/* Symbol: _ZN7android12QualcommModeD2Ev */
/* Demangled: android::QualcommMode::~QualcommMode() */
int _ZN7android12QualcommModeD2Ev(void);

/* Symbol: _ZN7android13OutputFactoryC1Ev */
/* Demangled: android::OutputFactory::OutputFactory() */
int _ZN7android13OutputFactoryC1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_DISPLAYFEATURE_DEFAULT_H */
