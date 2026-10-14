/*
 * Reverse-Engineered Source for: libfeature_3dnr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfeature_3dnr"

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
#include "libfeature_3dnr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: Hal3dnrObj<7u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj7EE10spInstanceE = NULL;

/* Demangled: Hal3dnr::getInstance(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr11getInstanceEPKcj(void) {
    ALOGD("_ZN7Hal3dnr11getInstanceEPKcj() called");
    return 0;
}

/* Demangled: get_3dnr_gmv_threshold(int) */
extern "C" __attribute__((visibility("default"))) int _Z22get_3dnr_gmv_thresholdi(void) {
    ALOGD("_Z22get_3dnr_gmv_thresholdi() called");
    return 0;
}

/* Demangled: Hal3dnr::get3dnrParams(unsigned int, unsigned int, unsigned int, NSCam::NR3D::NR3DParam*&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr13get3dnrParamsEjjjRPN5NSCam4NR3D9NR3DParamE(void) {
    ALOGD("_ZN7Hal3dnr13get3dnrParamsEjjjRPN5NSCam4NR3D9NR3DParamE() called");
    return 0;
}

/* Demangled: LmvStateMachine::~LmvStateMachine() */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachineD0Ev(void) {
    ALOGD("_ZN15LmvStateMachineD0Ev() called");
    return 0;
}

/* Demangled: LmvStateMachine::~LmvStateMachine() */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachineD1Ev(void) {
    ALOGD("_ZN15LmvStateMachineD1Ev() called");
    return 0;
}

/* Demangled: LmvStateMachine::~LmvStateMachine() */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachineD2Ev(void) {
    ALOGD("_ZN15LmvStateMachineD2Ev() called");
    return 0;
}

/* Demangled: Util3dnr::prepareFeatureData(int, NSCam::NR3D::NR3DMVInfo const&, int, int, int, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr18prepareFeatureDataEiRKN5NSCam4NR3D10NR3DMVInfoEiiiRNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void) {
    ALOGD("_ZN8Util3dnr18prepareFeatureDataEiRKN5NSCam4NR3D10NR3DMVInfoEiiiRNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<5u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj5EE10spInstanceE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIiEE = NULL;

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderIjEE = NULL;

/* Demangled: Hal3dnr::configNR3D(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE(void) {
    ALOGD("_ZN7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE() called");
    return 0;
}

/* Demangled: Hal3dnr::checkIMG3OSize(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr14checkIMG3OSizeEjjj(void) {
    ALOGD("_ZN7Hal3dnr14checkIMG3OSizeEjjj() called");
    return 0;
}

/* Exported Object: vtable for LmvStateMachine */
extern "C" __attribute__((visibility("default"))) void* _ZTV15LmvStateMachine = NULL;

/* Exported Object: Hal3dnrObj<4u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj4EE11s_instMutexE = NULL;

/* Demangled: Hal3dnr::setCMVMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr10setCMVModeEi(void) {
    ALOGD("_ZN7Hal3dnr10setCMVModeEi() called");
    return 0;
}

/* Demangled: get_3dnr_iso_enable_threshold_low() */
extern "C" __attribute__((visibility("default"))) int _Z33get_3dnr_iso_enable_threshold_lowv(void) {
    ALOGD("_Z33get_3dnr_iso_enable_threshold_lowv() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<9u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj9EE11s_instMutexE = NULL;

/* Demangled: Util3dnr::prepareNR3DTuningInfo(PrepareNR3DTuningParam const&, NSCam::NR3D::NR3DTuningInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr21prepareNR3DTuningInfoERK22PrepareNR3DTuningParamRN5NSCam4NR3D14NR3DTuningInfoE(void) {
    ALOGD("_ZN8Util3dnr21prepareNR3DTuningInfoERK22PrepareNR3DTuningParamRN5NSCam4NR3D14NR3DTuningInfoE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::NR3D::GyroData> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_4NR3D8GyroDataEEE = NULL;

/* Exported Object: vtable for LmvStateMachineUni */
extern "C" __attribute__((visibility("default"))) void* _ZTV18LmvStateMachineUni = NULL;

/* Demangled: non-virtual thunk to Hal3dnr::handle3DNROnOffPolicy(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void) {
    ALOGD("_ZThn8_N7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: LmvStateMachineUni::LmvStateMachineUni(LmvStateMachine::LmvState) */
extern "C" __attribute__((visibility("default"))) int _ZN18LmvStateMachineUniC1EN15LmvStateMachine8LmvStateE(void) {
    ALOGD("_ZN18LmvStateMachineUniC1EN15LmvStateMachine8LmvStateE() called");
    return 0;
}

/* Demangled: LmvStateMachine::createInstance(LmvStateMachine::LmvState) */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachine14createInstanceENS_8LmvStateE(void) {
    ALOGD("_ZN15LmvStateMachine14createInstanceENS_8LmvStateE() called");
    return 0;
}

/* Demangled: LmvStateMachineDummy::LmvStateMachineDummy(LmvStateMachine::LmvState) */
extern "C" __attribute__((visibility("default"))) int _ZN20LmvStateMachineDummyC1EN15LmvStateMachine8LmvStateE(void) {
    ALOGD("_ZN20LmvStateMachineDummyC1EN15LmvStateMachine8LmvStateE() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<3u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj3EE11s_instMutexE = NULL;

/* Demangled: Hal3dnr::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr11getInstanceEv(void) {
    ALOGD("_ZN7Hal3dnr11getInstanceEv() called");
    return 0;
}

/* Demangled: Hal3dnr::get3dnrParams(unsigned int, unsigned int, unsigned int, NSCam::NR3D::NR3DParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr13get3dnrParamsEjjjRN5NSCam4NR3D9NR3DParamE(void) {
    ALOGD("_ZN7Hal3dnr13get3dnrParamsEjjjRN5NSCam4NR3D9NR3DParamE() called");
    return 0;
}

/* Demangled: Hal3dnr::prepare(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr7prepareEji(void) {
    ALOGD("_ZN7Hal3dnr7prepareEji() called");
    return 0;
}

/* Demangled: Util3dnr::is3dnrDebugMode() */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr15is3dnrDebugModeEv(void) {
    ALOGD("_ZN8Util3dnr15is3dnrDebugModeEv() called");
    return 0;
}

/* Demangled: Util3dnr::Util3dnr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnrC1Ei(void) {
    ALOGD("_ZN8Util3dnrC1Ei() called");
    return 0;
}

/* Demangled: Util3dnr::Util3dnr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnrC2Ei(void) {
    ALOGD("_ZN8Util3dnrC2Ei() called");
    return 0;
}

/* Demangled: get_3dnr_hw_power_off_threshold() */
extern "C" __attribute__((visibility("default"))) int _Z31get_3dnr_hw_power_off_thresholdv(void) {
    ALOGD("_Z31get_3dnr_hw_power_off_thresholdv() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<3u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj3EE10spInstanceE = NULL;

/* Demangled: NR3DCustom::get_3dnr_off_iso_threshold(unsigned char, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi(void) {
    ALOGD("_ZN10NR3DCustom26get_3dnr_off_iso_thresholdEhi() called");
    return 0;
}

/* Demangled: Hal3dnr::Hal3dnr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnrC1Ej(void) {
    ALOGD("_ZN7Hal3dnrC1Ej() called");
    return 0;
}

/* Demangled: Hal3dnr::Hal3dnr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnrC2Ej(void) {
    ALOGD("_ZN7Hal3dnrC2Ej() called");
    return 0;
}

/* Demangled: LmvStateMachine::LmvStateMachine(LmvStateMachine::LmvState) */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachineC2ENS_8LmvStateE(void) {
    ALOGD("_ZN15LmvStateMachineC2ENS_8LmvStateE() called");
    return 0;
}

/* Demangled: Util3dnr::prepareGyro(NSCam::NR3D::GyroData*, NSCam::NSCamFeature::NSFeaturePipe::FeaturePipeParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr11prepareGyroEPN5NSCam4NR3D8GyroDataEPNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE(void) {
    ALOGD("_ZN8Util3dnr11prepareGyroEPN5NSCam4NR3D8GyroDataEPNS0_12NSCamFeature13NSFeaturePipe16FeaturePipeParamE() called");
    return 0;
}

/* Exported Object: LmvStateMachine::sSingletonMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN15LmvStateMachine15sSingletonMutexE = NULL;

/* Exported Object: LmvStateMachineUni::N_EXTRA_ENQUES */
extern "C" __attribute__((visibility("default"))) void* _ZN18LmvStateMachineUni14N_EXTRA_ENQUESE = NULL;

/* Demangled: LmvStateMachineDummy::notifyLmvValidity(LmvStateMachine::SensorId, bool, LmvStateMachine::Transition*) */
extern "C" __attribute__((visibility("default"))) int _ZN20LmvStateMachineDummy17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE(void) {
    ALOGD("_ZN20LmvStateMachineDummy17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE() called");
    return 0;
}

/* Demangled: Hal3dnr::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr4initEi(void) {
    ALOGD("_ZN7Hal3dnr4initEi() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<1u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj1EE10spInstanceE = NULL;

/* Demangled: Hal3dnr::SavedFrameInfo(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void) {
    ALOGD("_ZN7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE() called");
    return 0;
}

/* Demangled: non-virtual thunk to Hal3dnr::SavedFrameInfo(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void) {
    ALOGD("_ZThn8_N7Hal3dnr14SavedFrameInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE() called");
    return 0;
}

/* Demangled: Util3dnr::modifyMVInfo(int, int, NSCam::MRect const&, NSCam::MSize const&, NSCam::NR3D::NR3DMVInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr12modifyMVInfoEiiRKN5NSCam5MRectERKNS0_5MSizeERNS0_4NR3D10NR3DMVInfoE(void) {
    ALOGD("_ZN8Util3dnr12modifyMVInfoEiiRKN5NSCam5MRectERKNS0_5MSizeERNS0_4NR3D10NR3DMVInfoE() called");
    return 0;
}

/* Demangled: Util3dnr::prepareISPData(int, NSCam::NR3D::NR3DMVInfo const&, NSCam::MSize const&, NSCam::MRect const&, int, int, int, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr14prepareISPDataEiRKN5NSCam4NR3D10NR3DMVInfoERKNS0_5MSizeERKNS0_5MRectEiiiPNS0_9IMetadataE(void) {
    ALOGD("_ZN8Util3dnr14prepareISPDataEiRKN5NSCam4NR3D10NR3DMVInfoERKNS0_5MSizeERKNS0_5MRectEiiiPNS0_9IMetadataE() called");
    return 0;
}

/* Demangled: LmvStateMachineDummy::notifySwitchResult(LmvStateMachine::SensorId, LmvStateMachine::SwitchResult, LmvStateMachine::Transition*) */
extern "C" __attribute__((visibility("default"))) int _ZN20LmvStateMachineDummy18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE(void) {
    ALOGD("_ZN20LmvStateMachineDummy18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: Hal3dnrObj<8u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj8EE11s_instMutexE = NULL;

/* Demangled: get_3dnr_hw_power_reopen_delay() */
extern "C" __attribute__((visibility("default"))) int _Z30get_3dnr_hw_power_reopen_delayv(void) {
    ALOGD("_Z30get_3dnr_hw_power_reopen_delayv() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<8u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj8EE10spInstanceE = NULL;

/* Demangled: Hal3dnr::do3dnrFlow_v2(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr13do3dnrFlow_v2ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void) {
    ALOGD("_ZN7Hal3dnr13do3dnrFlow_v2ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE() called");
    return 0;
}

/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7Hal3dnrD0Ev(void) {
    ALOGD("_ZThn8_N7Hal3dnrD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7Hal3dnrD1Ev(void) {
    ALOGD("_ZThn8_N7Hal3dnrD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::hal3dnrBase::createInstance(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::hal3dnrBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc11hal3dnrBase14createInstanceEv() called");
    return 0;
}

/* Demangled: Util3dnr::canEnable3dnr(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr13canEnable3dnrEiii(void) {
    ALOGD("_ZN8Util3dnr13canEnable3dnrEiii() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<2u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj2EE11s_instMutexE = NULL;

/* Demangled: Hal3dnr::update3DNRMvInfo(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DMVInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr16update3DNRMvInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D10NR3DMVInfoE(void) {
    ALOGD("_ZN7Hal3dnr16update3DNRMvInfoERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D10NR3DMVInfoE() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<6u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj6EE10spInstanceE = NULL;

/* Exported Object: Hal3dnrObj<7u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj7EE11s_instMutexE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::sp<NSCam::NSCamFeature::VarHolderBase> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN7android2spIN5NSCam12NSCamFeature13VarHolderBaseEEEEENS_19__map_value_compareIS7_SE_NS_4lessIS7_EELb1EEENS5_ISE_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISP_EERKT_() called");
    return 0;
}

/* Demangled: NR3DCustom::isSupportRSC() */
extern "C" __attribute__((visibility("default"))) int _ZN10NR3DCustom12isSupportRSCEv(void) {
    ALOGD("_ZN10NR3DCustom12isSupportRSCEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to Hal3dnr::handleAlignVipiIMGI(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE(void) {
    ALOGD("_ZThn8_N7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE() called");
    return 0;
}

/* Demangled: LmvStateMachineUni::notifyLmvValidity(LmvStateMachine::SensorId, bool, LmvStateMachine::Transition*) */
extern "C" __attribute__((visibility("default"))) int _ZN18LmvStateMachineUni17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE(void) {
    ALOGD("_ZN18LmvStateMachineUni17notifyLmvValidityEN15LmvStateMachine8SensorIdEbPNS0_10TransitionE() called");
    return 0;
}

/* Demangled: Hal3dnr::fillGyroForAdjustment(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr21fillGyroForAdjustmentEPv(void) {
    ALOGD("_ZN7Hal3dnr21fillGyroForAdjustmentEPv() called");
    return 0;
}

/* Demangled: Hal3dnr::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr6uninitEv(void) {
    ALOGD("_ZN7Hal3dnr6uninitEv() called");
    return 0;
}

/* Demangled: LmvStateMachine::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachine11getInstanceEv(void) {
    ALOGD("_ZN15LmvStateMachine11getInstanceEv() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<4u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj4EE10spInstanceE = NULL;

/* Demangled: LmvStateMachine::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachine15destroyInstanceEv(void) {
    ALOGD("_ZN15LmvStateMachine15destroyInstanceEv() called");
    return 0;
}

/* Demangled: get_3dnr_iso_enable_threshold_high() */
extern "C" __attribute__((visibility("default"))) int _Z34get_3dnr_iso_enable_threshold_highv(void) {
    ALOGD("_Z34get_3dnr_iso_enable_threshold_highv() called");
    return 0;
}

/* Demangled: Hal3dnr::Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnrC1Ev(void) {
    ALOGD("_ZN7Hal3dnrC1Ev() called");
    return 0;
}

/* Demangled: Hal3dnr::Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnrC2Ev(void) {
    ALOGD("_ZN7Hal3dnrC2Ev() called");
    return 0;
}

/* Demangled: Hal3dnr::~Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnrD0Ev(void) {
    ALOGD("_ZN7Hal3dnrD0Ev() called");
    return 0;
}

/* Demangled: Hal3dnr::~Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnrD1Ev(void) {
    ALOGD("_ZN7Hal3dnrD1Ev() called");
    return 0;
}

/* Demangled: Hal3dnr::~Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnrD2Ev(void) {
    ALOGD("_ZN7Hal3dnrD2Ev() called");
    return 0;
}

/* Demangled: Util3dnr::~Util3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnrD0Ev(void) {
    ALOGD("_ZN8Util3dnrD0Ev() called");
    return 0;
}

/* Demangled: Util3dnr::~Util3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnrD1Ev(void) {
    ALOGD("_ZN8Util3dnrD1Ev() called");
    return 0;
}

/* Demangled: Util3dnr::~Util3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnrD2Ev(void) {
    ALOGD("_ZN8Util3dnrD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::VarMap::VarHolder<NSCam::NR3D::NR3DMVInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature6VarMap9VarHolderINS_4NR3D10NR3DMVInfoEEE = NULL;

/* Exported Object: LmvStateMachine::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN15LmvStateMachine10spInstanceE = NULL;

/* Demangled: Hal3dnr::handleAlignVipiIMGI(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE(void) {
    ALOGD("_ZN7Hal3dnr19handleAlignVipiIMGIERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS0_4NR3D9NR3DParamE() called");
    return 0;
}

/* Demangled: LmvStateMachineUni::switchTo(LmvStateMachine::SensorId, LmvStateMachine::Action*, LmvStateMachine::Transition*) */
extern "C" __attribute__((visibility("default"))) int _ZN18LmvStateMachineUni8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE(void) {
    ALOGD("_ZN18LmvStateMachineUni8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE() called");
    return 0;
}

/* Demangled: get_3dnr_max_iso_increase_percentage() */
extern "C" __attribute__((visibility("default"))) int _Z36get_3dnr_max_iso_increase_percentagev(void) {
    ALOGD("_Z36get_3dnr_max_iso_increase_percentagev() called");
    return 0;
}

/* Demangled: Hal3dnr::updateISPMetadata(NSCam::IMetadata*, NSCam::NR3D::NR3DTuningInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr17updateISPMetadataEPN5NSCam9IMetadataERKNS0_4NR3D14NR3DTuningInfoE(void) {
    ALOGD("_ZN7Hal3dnr17updateISPMetadataEPN5NSCam9IMetadataERKNS0_4NR3D14NR3DTuningInfoE() called");
    return 0;
}

/* Demangled: Hal3dnr::setGMV(unsigned int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr6setGMVEjiiii(void) {
    ALOGD("_ZN7Hal3dnr6setGMVEjiiii() called");
    return 0;
}

/* Demangled: Util3dnr::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr4initEi(void) {
    ALOGD("_ZN8Util3dnr4initEi() called");
    return 0;
}

/* Demangled: handleState(unsigned int, int, NSCam::NSIoPipe::NSPostProc::NR3D_STATE_ENUM&) */
extern "C" __attribute__((visibility("default"))) int _Z11handleStatejiRN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME(void) {
    ALOGD("_Z11handleStatejiRN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<1u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj1EE11s_instMutexE = NULL;

/* Exported Object: Hal3dnrObj<6u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj6EE11s_instMutexE = NULL;

/* Demangled: Hal3dnr::setVipiParams(int, unsigned int, unsigned int, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr13setVipiParamsEijjim(void) {
    ALOGD("_ZN7Hal3dnr13setVipiParamsEijjim() called");
    return 0;
}

/* Demangled: LmvStateMachineDummy::needEnque(LmvStateMachine::SensorId, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN20LmvStateMachineDummy9needEnqueEN15LmvStateMachine8SensorIdEb(void) {
    ALOGD("_ZN20LmvStateMachineDummy9needEnqueEN15LmvStateMachine8SensorIdEb() called");
    return 0;
}

/* Demangled: LmvStateMachineUni::LmvStateMachineUni(LmvStateMachine::LmvState) */
extern "C" __attribute__((visibility("default"))) int _ZN18LmvStateMachineUniC2EN15LmvStateMachine8LmvStateE(void) {
    ALOGD("_ZN18LmvStateMachineUniC2EN15LmvStateMachine8LmvStateE() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: Hal3dnrObj<2u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj2EE10spInstanceE = NULL;

/* Demangled: Hal3dnr::destroyInstance(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr15destroyInstanceEPKcj(void) {
    ALOGD("_ZN7Hal3dnr15destroyInstanceEPKcj() called");
    return 0;
}

/* Demangled: Hal3dnr::checkStateMachine(NSCam::NSIoPipe::NSPostProc::NR3D_STATE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr17checkStateMachineEN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME(void) {
    ALOGD("_ZN7Hal3dnr17checkStateMachineEN5NSCam8NSIoPipe10NSPostProc15NR3D_STATE_ENUME() called");
    return 0;
}

/* Exported Object: vtable for Util3dnr */
extern "C" __attribute__((visibility("default"))) void* _ZTV8Util3dnr = NULL;

/* Demangled: LmvStateMachineDummy::LmvStateMachineDummy(LmvStateMachine::LmvState) */
extern "C" __attribute__((visibility("default"))) int _ZN20LmvStateMachineDummyC2EN15LmvStateMachine8LmvStateE(void) {
    ALOGD("_ZN20LmvStateMachineDummyC2EN15LmvStateMachine8LmvStateE() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<0u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj0EE11s_instMutexE = NULL;

/* Exported Object: vtable for Hal3dnrObj<0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj0EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<1u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj1EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<2u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj2EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<3u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj3EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<4u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj4EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<5u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj5EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<6u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj6EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<7u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj7EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<8u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj8EE = NULL;

/* Exported Object: vtable for Hal3dnrObj<9u> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Hal3dnrObjILj9EE = NULL;

/* Demangled: non-virtual thunk to Hal3dnr::configNR3D(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NR3D::NR3DParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE(void) {
    ALOGD("_ZThn8_N7Hal3dnr10configNR3DERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERKNS0_4NR3D9NR3DParamE() called");
    return 0;
}

/* Demangled: Util3dnr::prepareISPDataHAL1(int, NSCam::NR3D::NR3DMVInfo const&, int, NSCam::MRect const&, int, int, int, int, NSCam::IImageBuffer*, NSCam::NSIoPipe::MCropRect const&, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Util3dnr18prepareISPDataHAL1EiRKN5NSCam4NR3D10NR3DMVInfoEiRKNS0_5MRectEiiiiPNS0_12IImageBufferERKNS0_8NSIoPipe9MCropRectEPNS0_9IMetadataE(void) {
    ALOGD("_ZN8Util3dnr18prepareISPDataHAL1EiRKN5NSCam4NR3D10NR3DMVInfoEiRKNS0_5MRectEiiiiPNS0_12IImageBufferERKNS0_8NSIoPipe9MCropRectEPNS0_9IMetadataE() called");
    return 0;
}

/* Demangled: LmvStateMachine::getCurrentState() */
extern "C" __attribute__((visibility("default"))) int _ZN15LmvStateMachine15getCurrentStateEv(void) {
    ALOGD("_ZN15LmvStateMachine15getCurrentStateEv() called");
    return 0;
}

/* Demangled: LmvStateMachineUni::notifySwitchResult(LmvStateMachine::SensorId, LmvStateMachine::SwitchResult, LmvStateMachine::Transition*) */
extern "C" __attribute__((visibility("default"))) int _ZN18LmvStateMachineUni18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE(void) {
    ALOGD("_ZN18LmvStateMachineUni18notifySwitchResultEN15LmvStateMachine8SensorIdENS0_12SwitchResultEPNS0_10TransitionE() called");
    return 0;
}

/* Demangled: is_vhdr_profile(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z15is_vhdr_profileh(void) {
    ALOGD("_Z15is_vhdr_profileh() called");
    return 0;
}

/* Exported Object: Hal3dnrObj<5u>::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj5EE11s_instMutexE = NULL;

/* Exported Object: Hal3dnrObj<9u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj9EE10spInstanceE = NULL;

/* Exported Object: vtable for Hal3dnr */
extern "C" __attribute__((visibility("default"))) void* _ZTV7Hal3dnr = NULL;

/* Demangled: NR3DCustom::isEnabledRSC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NR3DCustom12isEnabledRSCEj(void) {
    ALOGD("_ZN10NR3DCustom12isEnabledRSCEj() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: Hal3dnrObj<0u>::spInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10Hal3dnrObjILj0EE10spInstanceE = NULL;

/* Demangled: Hal3dnr::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr15destroyInstanceEv(void) {
    ALOGD("_ZN7Hal3dnr15destroyInstanceEv() called");
    return 0;
}

/* Demangled: Hal3dnr::handle3DNROnOffPolicy(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE(void) {
    ALOGD("_ZN7Hal3dnr21handle3DNROnOffPolicyERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamE() called");
    return 0;
}

/* Demangled: LmvStateMachineUni::needEnque(LmvStateMachine::SensorId, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18LmvStateMachineUni9needEnqueEN15LmvStateMachine8SensorIdEb(void) {
    ALOGD("_ZN18LmvStateMachineUni9needEnqueEN15LmvStateMachine8SensorIdEb() called");
    return 0;
}

/* Exported Object: vtable for LmvStateMachineDummy */
extern "C" __attribute__((visibility("default"))) void* _ZTV20LmvStateMachineDummy = NULL;

/* Demangled: Hal3dnr::do3dnrFlow(void*, int, NSCam::MRect const&, NSCam::NR3D::NR3DMVInfo const&, NSCam::IImageBuffer*, int, unsigned int, NS3Av3::IHal3A*) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr10do3dnrFlowEPviRKN5NSCam5MRectERKNS1_4NR3D10NR3DMVInfoEPNS1_12IImageBufferEijPN6NS3Av36IHal3AE(void) {
    ALOGD("_ZN7Hal3dnr10do3dnrFlowEPviRKN5NSCam5MRectERKNS1_4NR3D10NR3DMVInfoEPNS1_12IImageBufferEijPN6NS3Av36IHal3AE() called");
    return 0;
}

/* Demangled: Hal3dnr::do3dnrFlow_v3(NSCam::NSIoPipe::NSPostProc::NR3DHALParam const&, NSCam::NSIoPipe::NSPostProc::NR3DHALResult&) */
extern "C" __attribute__((visibility("default"))) int _ZN7Hal3dnr13do3dnrFlow_v3ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS2_13NR3DHALResultE(void) {
    ALOGD("_ZN7Hal3dnr13do3dnrFlow_v3ERKN5NSCam8NSIoPipe10NSPostProc12NR3DHALParamERNS2_13NR3DHALResultE() called");
    return 0;
}

/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N7Hal3dnrD0Ev(void) {
    ALOGD("_ZThn56_N7Hal3dnrD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to Hal3dnr::~Hal3dnr() */
extern "C" __attribute__((visibility("default"))) int _ZThn56_N7Hal3dnrD1Ev(void) {
    ALOGD("_ZThn56_N7Hal3dnrD1Ev() called");
    return 0;
}

/* Demangled: LmvStateMachineDummy::switchTo(LmvStateMachine::SensorId, LmvStateMachine::Action*, LmvStateMachine::Transition*) */
extern "C" __attribute__((visibility("default"))) int _ZN20LmvStateMachineDummy8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE(void) {
    ALOGD("_ZN20LmvStateMachineDummy8switchToEN15LmvStateMachine8SensorIdEPNS0_6ActionEPNS0_10TransitionE() called");
    return 0;
}
