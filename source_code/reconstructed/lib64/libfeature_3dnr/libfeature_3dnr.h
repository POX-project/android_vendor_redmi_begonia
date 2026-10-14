/*
 * Reverse-Engineered ABI Specification for: libfeature_3dnr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libfeature_3dnr.so
 */

#ifndef BEGONIA_RE_LIBFEATURE_3DNR_H
#define BEGONIA_RE_LIBFEATURE_3DNR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10Hal3dnrObjILj7EE10spInstanceE */
/* Demangled: Hal3dnrObj<7u>::spInstance */
extern void* _ZN10Hal3dnrObjILj7EE10spInstanceE;

/* Symbol: _ZN7Hal3dnr11getInstanceEPKcj */
/* Demangled: Hal3dnr::getInstance(char const*, unsigned int) */
int _ZN7Hal3dnr11getInstanceEPKcj(void);

/* Symbol: _Z22get_3dnr_gmv_thresholdi */
/* Demangled: get_3dnr_gmv_threshold(int) */
int _Z22get_3dnr_gmv_thresholdi(void);

/* Symbol: _ZN7Hal3dnr13get3dnrParamsEjjjRPN5NSCam4NR3D9NR3DParamE */
/* Demangled: Hal3dnr::get3dnrParams(unsigned int, unsigned int, unsigned int, NSCam::NR3D::NR3DParam*&) */
int _ZN7Hal3dnr13get3dnrParamsEjjjRPN5NSCam4NR3D9NR3DParamE(void);

/* Symbol: _ZN15LmvStateMachineD0Ev */
/* Demangled: LmvStateMachine::~LmvStateMachine() */
int _ZN15LmvStateMachineD0Ev(void);

/* Symbol: _ZN15LmvStateMachineD1Ev */
/* Demangled: LmvStateMachine::~LmvStateMachine() */
int _ZN15LmvStateMachineD1Ev(void);

/* Symbol: _ZN15LmvStateMachineD2Ev */
/* Demangled: LmvStateMachine::~LmvStateMachine() */
int _ZN15LmvStateMachineD2Ev(void);

/* Symbol: _ZN8Util3dnr18prepareFeatureDataEiRKN5NSCam4NR3D10NR3DMVInfoEiiiRNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE */
/* Demangled: Util3dnr::prepareFeatureData(int, NSCam::NR3D::NR3DMVInfo const&, int, int, int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) */
int _ZN8Util3dnr18prepareFeatureDataEiRKN5NSCam4NR3D10NR3DMVInfoEiiiRNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void);

/* Symbol: _ZN10Hal3dnrObjILj5EE10spInstanceE */
/* Demangled: Hal3dnrObj<5u>::spInstance */
extern void* _ZN10Hal3dnrObjILj5EE10spInstanceE;

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIiEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<int> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIiEE;

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIjEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<unsigned int> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIjEE;

/* Symbol: _ZN7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE */
/* Demangled: Hal3dnr::configNR3D(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam const&) */
int _ZN7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE(void);

/* Symbol: _ZN7Hal3dnr14checkIMG3OSizeEjjj */
/* Demangled: Hal3dnr::checkIMG3OSize(unsigned int, unsigned int, unsigned int) */
int _ZN7Hal3dnr14checkIMG3OSizeEjjj(void);

/* Symbol: _ZTV15LmvStateMachine */
/* Demangled: vtable for LmvStateMachine */
extern void* _ZTV15LmvStateMachine;

/* Symbol: _ZN10Hal3dnrObjILj4EE11s_instMutexE */
/* Demangled: Hal3dnrObj<4u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj4EE11s_instMutexE;

/* Symbol: _ZN7Hal3dnr10setCMVModeEi */
/* Demangled: Hal3dnr::setCMVMode(int) */
int _ZN7Hal3dnr10setCMVModeEi(void);

/* Symbol: _Z33get_3dnr_iso_enable_threshold_lowv */
/* Demangled: get_3dnr_iso_enable_threshold_low() */
int _Z33get_3dnr_iso_enable_threshold_lowv(void);

/* Symbol: _ZN10Hal3dnrObjILj9EE11s_instMutexE */
/* Demangled: Hal3dnrObj<9u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj9EE11s_instMutexE;

/* Symbol: _ZN8Util3dnr21prepareNR3DTuningInfoERK22PrepareNR3DTuningParamRN5NSCam4NR3D14NR3DTuningInfoE */
/* Demangled: Util3dnr::prepareNR3DTuningInfo(PrepareNR3DTuningParam const&, NSCam::NR3D::NR3DTuningInfo&) */
int _ZN8Util3dnr21prepareNR3DTuningInfoERK22PrepareNR3DTuningParamRN5NSCam4NR3D14NR3DTuningInfoE(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_4NR3D8GyroDataEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::NR3D::GyroData> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_4NR3D8GyroDataEEE;

/* Symbol: _ZTV18LmvStateMachineUni */
/* Demangled: vtable for LmvStateMachineUni */
extern void* _ZTV18LmvStateMachineUni;

/* Symbol: _ZThn8_N7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE */
/* Demangled: non-virtual thunk to Hal3dnr::handle3DNROnOffPolicy(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
int _ZThn8_N7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN18LmvStateMachineUniC1EN15LmvStateMachine8LmvStateE */
/* Demangled: LmvStateMachineUni::LmvStateMachineUni(LmvStateMachine::LmvState) */
int _ZN18LmvStateMachineUniC1EN15LmvStateMachine8LmvStateE(void);

/* Symbol: _ZN15LmvStateMachine14createInstanceENS_8LmvStateE */
/* Demangled: LmvStateMachine::createInstance(LmvStateMachine::LmvState) */
int _ZN15LmvStateMachine14createInstanceENS_8LmvStateE(void);

/* Symbol: _ZN20LmvStateMachineDummyC1EN15LmvStateMachine8LmvStateE */
/* Demangled: LmvStateMachineDummy::LmvStateMachineDummy(LmvStateMachine::LmvState) */
int _ZN20LmvStateMachineDummyC1EN15LmvStateMachine8LmvStateE(void);

/* Symbol: _ZN10Hal3dnrObjILj3EE11s_instMutexE */
/* Demangled: Hal3dnrObj<3u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj3EE11s_instMutexE;

/* Symbol: _ZN7Hal3dnr11getInstanceEv */
/* Demangled: Hal3dnr::getInstance() */
int _ZN7Hal3dnr11getInstanceEv(void);

/* Symbol: _ZN7Hal3dnr13get3dnrParamsEjjjRN5NSCam4NR3D9NR3DParamE */
/* Demangled: Hal3dnr::get3dnrParams(unsigned int, unsigned int, unsigned int, NSCam::NR3D::NR3DParam&) */
int _ZN7Hal3dnr13get3dnrParamsEjjjRN5NSCam4NR3D9NR3DParamE(void);

/* Symbol: _ZN7Hal3dnr7prepareEji */
/* Demangled: Hal3dnr::prepare(unsigned int, int) */
int _ZN7Hal3dnr7prepareEji(void);

/* Symbol: _ZN8Util3dnr15is3dnrDebugModeEv */
/* Demangled: Util3dnr::is3dnrDebugMode() */
int _ZN8Util3dnr15is3dnrDebugModeEv(void);

/* Symbol: _ZN8Util3dnrC1Ei */
/* Demangled: Util3dnr::Util3dnr(int) */
int _ZN8Util3dnrC1Ei(void);

/* Symbol: _ZN8Util3dnrC2Ei */
/* Demangled: Util3dnr::Util3dnr(int) */
int _ZN8Util3dnrC2Ei(void);

/* Symbol: _Z31get_3dnr_hw_power_off_thresholdv */
/* Demangled: get_3dnr_hw_power_off_threshold() */
int _Z31get_3dnr_hw_power_off_thresholdv(void);

/* Symbol: _ZN10Hal3dnrObjILj3EE10spInstanceE */
/* Demangled: Hal3dnrObj<3u>::spInstance */
extern void* _ZN10Hal3dnrObjILj3EE10spInstanceE;

/* Symbol: _ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi */
/* Demangled: NR3DCustom::get_3dnr_off_iso_threshold(unsigned char, int) */
int _ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi(void);

/* Symbol: _ZN7Hal3dnrC1Ej */
/* Demangled: Hal3dnr::Hal3dnr(unsigned int) */
int _ZN7Hal3dnrC1Ej(void);

/* Symbol: _ZN7Hal3dnrC2Ej */
/* Demangled: Hal3dnr::Hal3dnr(unsigned int) */
int _ZN7Hal3dnrC2Ej(void);

/* Symbol: _ZN15LmvStateMachineC2ENS_8LmvStateE */
/* Demangled: LmvStateMachine::LmvStateMachine(LmvStateMachine::LmvState) */
int _ZN15LmvStateMachineC2ENS_8LmvStateE(void);

/* Symbol: _ZN8Util3dnr11prepareGyroEPN5NSCam4NR3D8GyroDataEPNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE */
/* Demangled: Util3dnr::prepareGyro(NSCam::NR3D::GyroData*, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam*) */
int _ZN8Util3dnr11prepareGyroEPN5NSCam4NR3D8GyroDataEPNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void);

/* Symbol: _ZN15LmvStateMachine15sSingletonMutexE */
/* Demangled: LmvStateMachine::sSingletonMutex */
extern void* _ZN15LmvStateMachine15sSingletonMutexE;

/* Symbol: _ZN18LmvStateMachineUni14N_EXTRA_ENQUESE */
/* Demangled: LmvStateMachineUni::N_EXTRA_ENQUES */
extern void* _ZN18LmvStateMachineUni14N_EXTRA_ENQUESE;

/* Symbol: _ZN20LmvStateMachineDummy17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE */
/* Demangled: LmvStateMachineDummy::notifyLmvValidity(LmvStateMachine::SensorId, bool, LmvStateMachine::Transition*) */
int _ZN20LmvStateMachineDummy17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE(void);

/* Symbol: _ZN7Hal3dnr4initEi */
/* Demangled: Hal3dnr::init(int) */
int _ZN7Hal3dnr4initEi(void);

/* Symbol: _ZN10Hal3dnrObjILj1EE10spInstanceE */
/* Demangled: Hal3dnrObj<1u>::spInstance */
extern void* _ZN10Hal3dnrObjILj1EE10spInstanceE;

/* Symbol: _ZN7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE */
/* Demangled: Hal3dnr::SavedFrameInfo(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
int _ZN7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void);

/* Symbol: _ZThn8_N7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE */
/* Demangled: non-virtual thunk to Hal3dnr::SavedFrameInfo(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
int _ZThn8_N7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void);

/* Symbol: _ZN8Util3dnr12modifyMVInfoEiiRKN5NSCam5MRectERKNS0_5MSizeERNS0_4NR3D10NR3DMVInfoE */
/* Demangled: Util3dnr::modifyMVInfo(int, int, NSCam::MRect const&, NSCam::MSize const&, NSCam::NR3D::NR3DMVInfo&) */
int _ZN8Util3dnr12modifyMVInfoEiiRKN5NSCam5MRectERKNS0_5MSizeERNS0_4NR3D10NR3DMVInfoE(void);

/* Symbol: _ZN8Util3dnr14prepareISPDataEiRKN5NSCam4NR3D10NR3DMVInfoERKNS0_5MSizeERKNS0_5MRectEiiiPNS0_9IMetadataE */
/* Demangled: Util3dnr::prepareISPData(int, NSCam::NR3D::NR3DMVInfo const&, NSCam::MSize const&, NSCam::MRect const&, int, int, int, NSCam::IMetadata*) */
int _ZN8Util3dnr14prepareISPDataEiRKN5NSCam4NR3D10NR3DMVInfoERKNS0_5MSizeERKNS0_5MRectEiiiPNS0_9IMetadataE(void);

/* Symbol: _ZN20LmvStateMachineDummy18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE */
/* Demangled: LmvStateMachineDummy::notifySwitchResult(LmvStateMachine::SensorId, LmvStateMachine::SwitchResult, LmvStateMachine::Transition*) */
int _ZN20LmvStateMachineDummy18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN10Hal3dnrObjILj8EE11s_instMutexE */
/* Demangled: Hal3dnrObj<8u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj8EE11s_instMutexE;

/* Symbol: _Z30get_3dnr_hw_power_reopen_delayv */
/* Demangled: get_3dnr_hw_power_reopen_delay() */
int _Z30get_3dnr_hw_power_reopen_delayv(void);

/* Symbol: _ZN10Hal3dnrObjILj8EE10spInstanceE */
/* Demangled: Hal3dnrObj<8u>::spInstance */
extern void* _ZN10Hal3dnrObjILj8EE10spInstanceE;

/* Symbol: _ZN7Hal3dnr13do3dnrFlow_v2ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE */
/* Demangled: Hal3dnr::do3dnrFlow_v2(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
int _ZN7Hal3dnr13do3dnrFlow_v2ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void);

/* Symbol: _ZThn8_N7Hal3dnrD0Ev */
/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
int _ZThn8_N7Hal3dnrD0Ev(void);

/* Symbol: _ZThn8_N7Hal3dnrD1Ev */
/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
int _ZThn8_N7Hal3dnrD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEPKcj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::hal3dnrBase::createInstance(char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEPKcj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::hal3dnrBase::createInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEv(void);

/* Symbol: _ZN8Util3dnr13canEnable3dnrEiii */
/* Demangled: Util3dnr::canEnable3dnr(int, int, int) */
int _ZN8Util3dnr13canEnable3dnrEiii(void);

/* Symbol: _ZN10Hal3dnrObjILj2EE11s_instMutexE */
/* Demangled: Hal3dnrObj<2u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj2EE11s_instMutexE;

/* Symbol: _ZN7Hal3dnr16update3DNRMvInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D10NR3DMVInfoE */
/* Demangled: Hal3dnr::update3DNRMvInfo(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DMVInfo&) */
int _ZN7Hal3dnr16update3DNRMvInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D10NR3DMVInfoE(void);

/* Symbol: _ZN10Hal3dnrObjILj6EE10spInstanceE */
/* Demangled: Hal3dnrObj<6u>::spInstance */
extern void* _ZN10Hal3dnrObjILj6EE10spInstanceE;

/* Symbol: _ZN10Hal3dnrObjILj7EE11s_instMutexE */
/* Demangled: Hal3dnrObj<7u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj7EE11s_instMutexE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void);

/* Symbol: _ZN10NR3DCustom12isSupportRSCEv */
/* Demangled: NR3DCustom::isSupportRSC() */
int _ZN10NR3DCustom12isSupportRSCEv(void);

/* Symbol: _ZThn8_N7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE */
/* Demangled: non-virtual thunk to Hal3dnr::handleAlignVipiIMGI(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam&) */
int _ZThn8_N7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE(void);

/* Symbol: _ZN18LmvStateMachineUni17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE */
/* Demangled: LmvStateMachineUni::notifyLmvValidity(LmvStateMachine::SensorId, bool, LmvStateMachine::Transition*) */
int _ZN18LmvStateMachineUni17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE(void);

/* Symbol: _ZN7Hal3dnr21fillGyroForAdjustmentEPv */
/* Demangled: Hal3dnr::fillGyroForAdjustment(void*) */
int _ZN7Hal3dnr21fillGyroForAdjustmentEPv(void);

/* Symbol: _ZN7Hal3dnr6uninitEv */
/* Demangled: Hal3dnr::uninit() */
int _ZN7Hal3dnr6uninitEv(void);

/* Symbol: _ZN15LmvStateMachine11getInstanceEv */
/* Demangled: LmvStateMachine::getInstance() */
int _ZN15LmvStateMachine11getInstanceEv(void);

/* Symbol: _ZN10Hal3dnrObjILj4EE10spInstanceE */
/* Demangled: Hal3dnrObj<4u>::spInstance */
extern void* _ZN10Hal3dnrObjILj4EE10spInstanceE;

/* Symbol: _ZN15LmvStateMachine15destroyInstanceEv */
/* Demangled: LmvStateMachine::destroyInstance() */
int _ZN15LmvStateMachine15destroyInstanceEv(void);

/* Symbol: _Z34get_3dnr_iso_enable_threshold_highv */
/* Demangled: get_3dnr_iso_enable_threshold_high() */
int _Z34get_3dnr_iso_enable_threshold_highv(void);

/* Symbol: _ZN7Hal3dnrC1Ev */
/* Demangled: Hal3dnr::Hal3dnr() */
int _ZN7Hal3dnrC1Ev(void);

/* Symbol: _ZN7Hal3dnrC2Ev */
/* Demangled: Hal3dnr::Hal3dnr() */
int _ZN7Hal3dnrC2Ev(void);

/* Symbol: _ZN7Hal3dnrD0Ev */
/* Demangled: Hal3dnr::~Hal3dnr() */
int _ZN7Hal3dnrD0Ev(void);

/* Symbol: _ZN7Hal3dnrD1Ev */
/* Demangled: Hal3dnr::~Hal3dnr() */
int _ZN7Hal3dnrD1Ev(void);

/* Symbol: _ZN7Hal3dnrD2Ev */
/* Demangled: Hal3dnr::~Hal3dnr() */
int _ZN7Hal3dnrD2Ev(void);

/* Symbol: _ZN8Util3dnrD0Ev */
/* Demangled: Util3dnr::~Util3dnr() */
int _ZN8Util3dnrD0Ev(void);

/* Symbol: _ZN8Util3dnrD1Ev */
/* Demangled: Util3dnr::~Util3dnr() */
int _ZN8Util3dnrD1Ev(void);

/* Symbol: _ZN8Util3dnrD2Ev */
/* Demangled: Util3dnr::~Util3dnr() */
int _ZN8Util3dnrD2Ev(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_4NR3D10NR3DMVInfoEEE */
/* Demangled: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::NR3D::NR3DMVInfo> */
extern void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_4NR3D10NR3DMVInfoEEE;

/* Symbol: _ZN15LmvStateMachine10spInstanceE */
/* Demangled: LmvStateMachine::spInstance */
extern void* _ZN15LmvStateMachine10spInstanceE;

/* Symbol: _ZN7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE */
/* Demangled: Hal3dnr::handleAlignVipiIMGI(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam&) */
int _ZN7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE(void);

/* Symbol: _ZN18LmvStateMachineUni8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE */
/* Demangled: LmvStateMachineUni::switchTo(LmvStateMachine::SensorId, LmvStateMachine::Action*, LmvStateMachine::Transition*) */
int _ZN18LmvStateMachineUni8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE(void);

/* Symbol: _Z36get_3dnr_max_iso_increase_percentagev */
/* Demangled: get_3dnr_max_iso_increase_percentage() */
int _Z36get_3dnr_max_iso_increase_percentagev(void);

/* Symbol: _ZN7Hal3dnr17updateISPMetadataEPN5NSCam9IMetadataERKNS0_4NR3D14NR3DTuningInfoE */
/* Demangled: Hal3dnr::updateISPMetadata(NSCam::IMetadata*, NSCam::NR3D::NR3DTuningInfo const&) */
int _ZN7Hal3dnr17updateISPMetadataEPN5NSCam9IMetadataERKNS0_4NR3D14NR3DTuningInfoE(void);

/* Symbol: _ZN7Hal3dnr6setGMVEjiiii */
/* Demangled: Hal3dnr::setGMV(unsigned int, int, int, int, int) */
int _ZN7Hal3dnr6setGMVEjiiii(void);

/* Symbol: _ZN8Util3dnr4initEi */
/* Demangled: Util3dnr::init(int) */
int _ZN8Util3dnr4initEi(void);

/* Symbol: _Z11handleStatejiRN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME */
/* Demangled: handleState(unsigned int, int, NSCam::NSIoPipe::NSPostProc::NR3D_STATE_ENUM&) */
int _Z11handleStatejiRN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME(void);

/* Symbol: _ZN10Hal3dnrObjILj1EE11s_instMutexE */
/* Demangled: Hal3dnrObj<1u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj1EE11s_instMutexE;

/* Symbol: _ZN10Hal3dnrObjILj6EE11s_instMutexE */
/* Demangled: Hal3dnrObj<6u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj6EE11s_instMutexE;

/* Symbol: _ZN7Hal3dnr13setVipiParamsEijjim */
/* Demangled: Hal3dnr::setVipiParams(int, unsigned int, unsigned int, int, unsigned long) */
int _ZN7Hal3dnr13setVipiParamsEijjim(void);

/* Symbol: _ZN20LmvStateMachineDummy9needEnqueEN15LmvStateMachine8SensorIdEb */
/* Demangled: LmvStateMachineDummy::needEnque(LmvStateMachine::SensorId, bool) */
int _ZN20LmvStateMachineDummy9needEnqueEN15LmvStateMachine8SensorIdEb(void);

/* Symbol: _ZN18LmvStateMachineUniC2EN15LmvStateMachine8LmvStateE */
/* Demangled: LmvStateMachineUni::LmvStateMachineUni(LmvStateMachine::LmvState) */
int _ZN18LmvStateMachineUniC2EN15LmvStateMachine8LmvStateE(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN10Hal3dnrObjILj2EE10spInstanceE */
/* Demangled: Hal3dnrObj<2u>::spInstance */
extern void* _ZN10Hal3dnrObjILj2EE10spInstanceE;

/* Symbol: _ZN7Hal3dnr15destroyInstanceEPKcj */
/* Demangled: Hal3dnr::destroyInstance(char const*, unsigned int) */
int _ZN7Hal3dnr15destroyInstanceEPKcj(void);

/* Symbol: _ZN7Hal3dnr17checkStateMachineEN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME */
/* Demangled: Hal3dnr::checkStateMachine(NSCam::NSIoPipe::NSPostProc::NR3D_STATE_ENUM) */
int _ZN7Hal3dnr17checkStateMachineEN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME(void);

/* Symbol: _ZTV8Util3dnr */
/* Demangled: vtable for Util3dnr */
extern void* _ZTV8Util3dnr;

/* Symbol: _ZN20LmvStateMachineDummyC2EN15LmvStateMachine8LmvStateE */
/* Demangled: LmvStateMachineDummy::LmvStateMachineDummy(LmvStateMachine::LmvState) */
int _ZN20LmvStateMachineDummyC2EN15LmvStateMachine8LmvStateE(void);

/* Symbol: _ZN10Hal3dnrObjILj0EE11s_instMutexE */
/* Demangled: Hal3dnrObj<0u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj0EE11s_instMutexE;

/* Symbol: _ZTV10Hal3dnrObjILj0EE */
/* Demangled: vtable for Hal3dnrObj<0u> */
extern void* _ZTV10Hal3dnrObjILj0EE;

/* Symbol: _ZTV10Hal3dnrObjILj1EE */
/* Demangled: vtable for Hal3dnrObj<1u> */
extern void* _ZTV10Hal3dnrObjILj1EE;

/* Symbol: _ZTV10Hal3dnrObjILj2EE */
/* Demangled: vtable for Hal3dnrObj<2u> */
extern void* _ZTV10Hal3dnrObjILj2EE;

/* Symbol: _ZTV10Hal3dnrObjILj3EE */
/* Demangled: vtable for Hal3dnrObj<3u> */
extern void* _ZTV10Hal3dnrObjILj3EE;

/* Symbol: _ZTV10Hal3dnrObjILj4EE */
/* Demangled: vtable for Hal3dnrObj<4u> */
extern void* _ZTV10Hal3dnrObjILj4EE;

/* Symbol: _ZTV10Hal3dnrObjILj5EE */
/* Demangled: vtable for Hal3dnrObj<5u> */
extern void* _ZTV10Hal3dnrObjILj5EE;

/* Symbol: _ZTV10Hal3dnrObjILj6EE */
/* Demangled: vtable for Hal3dnrObj<6u> */
extern void* _ZTV10Hal3dnrObjILj6EE;

/* Symbol: _ZTV10Hal3dnrObjILj7EE */
/* Demangled: vtable for Hal3dnrObj<7u> */
extern void* _ZTV10Hal3dnrObjILj7EE;

/* Symbol: _ZTV10Hal3dnrObjILj8EE */
/* Demangled: vtable for Hal3dnrObj<8u> */
extern void* _ZTV10Hal3dnrObjILj8EE;

/* Symbol: _ZTV10Hal3dnrObjILj9EE */
/* Demangled: vtable for Hal3dnrObj<9u> */
extern void* _ZTV10Hal3dnrObjILj9EE;

/* Symbol: _ZThn8_N7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE */
/* Demangled: non-virtual thunk to Hal3dnr::configNR3D(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam const&) */
int _ZThn8_N7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE(void);

/* Symbol: _ZN8Util3dnr18prepareISPDataHAL1EiRKN5NSCam4NR3D10NR3DMVInfoEiRKNS0_5MRectEiiiiPNS0_12IImageBufferERKNS0_8NSIoPipe9MCropRectEPNS0_9IMetadataE */
/* Demangled: Util3dnr::prepareISPDataHAL1(int, NSCam::NR3D::NR3DMVInfo const&, int, NSCam::MRect const&, int, int, int, int, NSCam::IImageBuffer*, NSCam::NSIoPipe::MCropRect const&, NSCam::IMetadata*) */
int _ZN8Util3dnr18prepareISPDataHAL1EiRKN5NSCam4NR3D10NR3DMVInfoEiRKNS0_5MRectEiiiiPNS0_12IImageBufferERKNS0_8NSIoPipe9MCropRectEPNS0_9IMetadataE(void);

/* Symbol: _ZN15LmvStateMachine15getCurrentStateEv */
/* Demangled: LmvStateMachine::getCurrentState() */
int _ZN15LmvStateMachine15getCurrentStateEv(void);

/* Symbol: _ZN18LmvStateMachineUni18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE */
/* Demangled: LmvStateMachineUni::notifySwitchResult(LmvStateMachine::SensorId, LmvStateMachine::SwitchResult, LmvStateMachine::Transition*) */
int _ZN18LmvStateMachineUni18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE(void);

/* Symbol: _Z15is_vhdr_profileh */
/* Demangled: is_vhdr_profile(unsigned char) */
int _Z15is_vhdr_profileh(void);

/* Symbol: _ZN10Hal3dnrObjILj5EE11s_instMutexE */
/* Demangled: Hal3dnrObj<5u>::s_instMutex */
extern void* _ZN10Hal3dnrObjILj5EE11s_instMutexE;

/* Symbol: _ZN10Hal3dnrObjILj9EE10spInstanceE */
/* Demangled: Hal3dnrObj<9u>::spInstance */
extern void* _ZN10Hal3dnrObjILj9EE10spInstanceE;

/* Symbol: _ZTV7Hal3dnr */
/* Demangled: vtable for Hal3dnr */
extern void* _ZTV7Hal3dnr;

/* Symbol: _ZN10NR3DCustom12isEnabledRSCEj */
/* Demangled: NR3DCustom::isEnabledRSC(unsigned int) */
int _ZN10NR3DCustom12isEnabledRSCEj(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN10Hal3dnrObjILj0EE10spInstanceE */
/* Demangled: Hal3dnrObj<0u>::spInstance */
extern void* _ZN10Hal3dnrObjILj0EE10spInstanceE;

/* Symbol: _ZN7Hal3dnr15destroyInstanceEv */
/* Demangled: Hal3dnr::destroyInstance() */
int _ZN7Hal3dnr15destroyInstanceEv(void);

/* Symbol: _ZN7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE */
/* Demangled: Hal3dnr::handle3DNROnOffPolicy(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
int _ZN7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void);

/* Symbol: _ZN18LmvStateMachineUni9needEnqueEN15LmvStateMachine8SensorIdEb */
/* Demangled: LmvStateMachineUni::needEnque(LmvStateMachine::SensorId, bool) */
int _ZN18LmvStateMachineUni9needEnqueEN15LmvStateMachine8SensorIdEb(void);

/* Symbol: _ZTV20LmvStateMachineDummy */
/* Demangled: vtable for LmvStateMachineDummy */
extern void* _ZTV20LmvStateMachineDummy;

/* Symbol: _ZN7Hal3dnr10do3dnrFlowEPviRKN5NSCam5MRectERKNS1_4NR3D10NR3DMVInfoEPNS1_12IImageBufferEijPN6NS3Av36IHal3AE */
/* Demangled: Hal3dnr::do3dnrFlow(void*, int, NSCam::MRect const&, NSCam::NR3D::NR3DMVInfo const&, NSCam::IImageBuffer*, int, unsigned int, NS3Av3::IHal3A*) */
int _ZN7Hal3dnr10do3dnrFlowEPviRKN5NSCam5MRectERKNS1_4NR3D10NR3DMVInfoEPNS1_12IImageBufferEijPN6NS3Av36IHal3AE(void);

/* Symbol: _ZN7Hal3dnr13do3dnrFlow_v3ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS2_13NR3DHALResultE */
/* Demangled: Hal3dnr::do3dnrFlow_v3(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NSIoPipe::NSPostProc::NR3DHALResult&) */
int _ZN7Hal3dnr13do3dnrFlow_v3ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS2_13NR3DHALResultE(void);

/* Symbol: _ZThn56_N7Hal3dnrD0Ev */
/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
int _ZThn56_N7Hal3dnrD0Ev(void);

/* Symbol: _ZThn56_N7Hal3dnrD1Ev */
/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
int _ZThn56_N7Hal3dnrD1Ev(void);

/* Symbol: _ZN20LmvStateMachineDummy8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE */
/* Demangled: LmvStateMachineDummy::switchTo(LmvStateMachine::SensorId, LmvStateMachine::Action*, LmvStateMachine::Transition*) */
int _ZN20LmvStateMachineDummy8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFEATURE_3DNR_H */
