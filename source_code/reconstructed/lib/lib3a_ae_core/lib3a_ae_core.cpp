/*
 * Reverse-Engineered Source for: lib3a.ae.core.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_ae_core"

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
#include "lib3a_ae_core.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEFlickerAutoMode(LIB3A_AE_FLICKER_AUTO_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20setAEFlickerAutoModeE28LIB3A_AE_FLICKER_AUTO_MODE_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo20setAEFlickerAutoModeE28LIB3A_AE_FLICKER_AUTO_MODE_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::backupPreviewAEStableIndex() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo26backupPreviewAEStableIndexEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo26backupPreviewAEStableIndexEv() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::initFaceAE() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo10initFaceAEEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo10initFaceAEEv() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getEVCompensateIndex(LIB3A_AE_EVCOMP_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20getEVCompensateIndexE17LIB3A_AE_EVCOMP_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo20getEVCompensateIndexE17LIB3A_AE_EVCOMP_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::SetCaptureFlareValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20SetCaptureFlareValueEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo20SetCaptureFlareValueEi() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: __aeabi_dadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_dadd(void) {
    ALOGD("__aeabi_dadd() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::resetVar() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo8resetVarEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo8resetVarEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkFaceAE(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11checkFaceAEEjRj(void) {
    ALOGD("_ZN4NS3A6AeAlgo11checkFaceAEEjRj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkMeterFaceAE(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16checkMeterFaceAEEjRj(void) {
    ALOGD("_ZN4NS3A6AeAlgo16checkMeterFaceAEEjRj() called");
    return 0;
}

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setEVCompensate(LIB3A_AE_EVCOMP_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo15setEVCompensateE17LIB3A_AE_EVCOMP_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo15setEVCompensateE17LIB3A_AE_EVCOMP_T() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getSenstivityDeltaIndex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo23getSenstivityDeltaIndexEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo23getSenstivityDeltaIndexEj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkHistogramStretch_v4p0(unsigned int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo26checkHistogramStretch_v4p0ERjRi(void) {
    ALOGD("_ZN4NS3A6AeAlgo26checkHistogramStretch_v4p0ERjRi() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAETarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11getAETargetEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo11getAETargetEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setWeightTable(AE_PARAMETER const*, eWeightingID, strWeightTable**) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14setWeightTableEPK12AE_PARAMETER12eWeightingIDPP14strWeightTable(void) {
    ALOGD("_ZN4NS3A6AeAlgo14setWeightTableEPK12AE_PARAMETER12eWeightingIDPP14strWeightTable() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::DoPreFlare(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo10DoPreFlareEPv(void) {
    ALOGD("_ZN4NS3A6AeAlgo10DoPreFlareEPv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setIsoSpeed(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11setIsoSpeedEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo11setIsoSpeedEj() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEInfoForISP(AE_INFO_T&, LIB3A_SENSOR_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo15getAEInfoForISPER9AE_INFO_T19LIB3A_SENSOR_MODE_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo15getAEInfoForISPER9AE_INFO_T19LIB3A_SENSOR_MODE_T() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAERealISOSpeed(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17setAERealISOSpeedEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo17setAERealISOSpeedEi() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAELCEIndexInfo(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17getAELCEIndexInfoEPjS1_(void) {
    ALOGD("_ZN4NS3A6AeAlgo17getAELCEIndexInfoEPjS1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::UpdateCaptureFlare(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo18UpdateCaptureFlareEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo18UpdateCaptureFlareEP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::prepareFrameRateInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20prepareFrameRateInfoEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo20prepareFrameRateInfoEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getFaceProb(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11getFaceProbERj(void) {
    ALOGD("_ZN4NS3A6AeAlgo11getFaceProbERj() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: __floatunsidf */
extern "C" __attribute__((visibility("default"))) int __floatunsidf(void) {
    ALOGD("__floatunsidf() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::SetPreviewFlareValue(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20SetPreviewFlareValueEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo20SetPreviewFlareValueEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::restorePreviewAEIndex() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo21restorePreviewAEIndexEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo21restorePreviewAEIndexEv() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::SaveAeCoreInfo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14SaveAeCoreInfoEPKc(void) {
    ALOGD("_ZN4NS3A6AeAlgo14SaveAeCoreInfoEPKc() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkOverExposure_v2p0(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo22checkOverExposure_v2p0ERj(void) {
    ALOGD("_ZN4NS3A6AeAlgo22checkOverExposure_v2p0ERj() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::CalculateCaptureFlare(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo21CalculateCaptureFlareEPvi(void) {
    ALOGD("_ZN4NS3A6AeAlgo21CalculateCaptureFlareEPvi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAETargetValue(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16setAETargetValueEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo16setAETargetValueEj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setHdrRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11setHdrRatioEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo11setHdrRatioEj() called");
    return 0;
}

/* Demangled: non-virtual thunk to NS3A::AeAlgo::~AeAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N4NS3A6AeAlgoD0Ev(void) {
    ALOGD("_ZThn8_N4NS3A6AeAlgoD0Ev() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: __subdf3 */
extern "C" __attribute__((visibility("default"))) int __subdf3(void) {
    ALOGD("__subdf3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::isTouchValidAfter(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17isTouchValidAfterEiiii(void) {
    ALOGD("_ZN4NS3A6AeAlgo17isTouchValidAfterEiiii() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEFrameRate(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14getAEFrameRateEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo14getAEFrameRateEP11strAEOutput() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::updateAETuningParam(AE_PARAMETER*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo19updateAETuningParamEP12AE_PARAMETER(void) {
    ALOGD("_ZN4NS3A6AeAlgo19updateAETuningParamEP12AE_PARAMETER() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11getInstanceEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo11getInstanceEi() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEMeteringArea(AEMeteringArea*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17setAEMeteringAreaEP14AEMeteringArea(void) {
    ALOGD("_ZN4NS3A6AeAlgo17setAEMeteringAreaEP14AEMeteringArea() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::GetPreviewParams(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16GetPreviewParamsEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo16GetPreviewParamsEP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::~AeAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgoD0Ev(void) {
    ALOGD("_ZN4NS3A6AeAlgoD0Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::TgNormalAEInterAction(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo21TgNormalAEInterActionEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo21TgNormalAEInterActionEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEMeteringAreaValue(AEMeterArea, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo22getAEMeteringAreaValueE11AEMeterAreaPh(void) {
    ALOGD("_ZN4NS3A6AeAlgo22getAEMeteringAreaValueE11AEMeterAreaPh() called");
    return 0;
}

/* Exported Object: vtable for AeAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AeAlgoDevILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEMinMaxFrameRate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20setAEMinMaxFrameRateEii(void) {
    ALOGD("_ZN4NS3A6AeAlgo20setAEMinMaxFrameRateEii() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setEVIdxInfo_v4p0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17setEVIdxInfo_v4p0Ejjjjjj(void) {
    ALOGD("_ZN4NS3A6AeAlgo17setEVIdxInfo_v4p0Ejjjjjj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkBackLight_v2p0(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo19checkBackLight_v2p0ERj(void) {
    ALOGD("_ZN4NS3A6AeAlgo19checkBackLight_v2p0ERj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::AeAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgoC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A6AeAlgoC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEScene(LIB3A_AE_SCENE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo10setAESceneE16LIB3A_AE_SCENE_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo10setAESceneE16LIB3A_AE_SCENE_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getHSTarget(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11getHSTargetERjS1_(void) {
    ALOGD("_ZN4NS3A6AeAlgo11getHSTargetERjS1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::switchCapureState(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17switchCapureStateEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo17switchCapureStateEP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::~AeAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgoD2Ev(void) {
    ALOGD("_ZN4NS3A6AeAlgoD2Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setFinerEVEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16setFinerEVEnableEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo16setFinerEVEnableEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getBrightnessCenterWeightedValue() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo32getBrightnessCenterWeightedValueEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo32getBrightnessCenterWeightedValueEv() called");
    return 0;
}

/* Exported Object: vtable for AeAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AeAlgoDevILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: NS3A::AeAlgo::getPreviewFlare(short*, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo15getPreviewFlareEPsS1_(void) {
    ALOGD("_ZN4NS3A6AeAlgo15getPreviewFlareEPsS1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setFlareInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12setFlareInfoEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo12setFlareInfoEj() called");
    return 0;
}

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkTouchAE(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12checkTouchAEEjRj(void) {
    ALOGD("_ZN4NS3A6AeAlgo12checkTouchAEEjRj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::handleInterAE(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13handleInterAEEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo13handleInterAEEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::calculatePreviewRealISO(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo23calculatePreviewRealISOEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo23calculatePreviewRealISOEP11strAEOutput() called");
    return 0;
}

/* Exported Object: vtable for NS3A::IAeAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A7IAeAlgoE = NULL;

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getRecommendCWTarget_v2p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo25getRecommendCWTarget_v2p0Ev(void) {
    ALOGD("_ZN4NS3A6AeAlgo25getRecommendCWTarget_v2p0Ev() called");
    return 0;
}

/* Exported Object: vtable for AeAlgoDev<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AeAlgoDevILN11NSIspTuning12ESensorDev_TE16EE = NULL;

/* Demangled: NS3A::AeAlgo::getVideoCWRTS() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13getVideoCWRTSEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo13getVideoCWRTSEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::calRatio2AEInfoIf(strEvSetting) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17calRatio2AEInfoIfE12strEvSetting(void) {
    ALOGD("_ZN4NS3A6AeAlgo17calRatio2AEInfoIfE12strEvSetting() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setHdrAEInfo(rVHDRExpSettingInfo_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12setHdrAEInfoE21rVHDRExpSettingInfo_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo12setHdrAEInfoE21rVHDRExpSettingInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getHdrCWTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14getHdrCWTargetEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo14getHdrCWTargetEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::UpdatePreviewFlare(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo18UpdatePreviewFlareEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo18UpdatePreviewFlareEP11strAEOutput() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setEVIdxInfo(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12setEVIdxInfoEjjj(void) {
    ALOGD("_ZN4NS3A6AeAlgo12setEVIdxInfoEjjj() called");
    return 0;
}

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAESensorMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo15setAESensorModeEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo15setAESensorModeEi() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAOETarget(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12getAOETargetERjS1_(void) {
    ALOGD("_ZN4NS3A6AeAlgo12getAOETargetERjS1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::switchSensorExposureGain(int, AE_EXP_GAIN_MODIFY_T&, AE_EXP_GAIN_MODIFY_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo24switchSensorExposureGainEiR20AE_EXP_GAIN_MODIFY_TS2_(void) {
    ALOGD("_ZN4NS3A6AeAlgo24switchSensorExposureGainEiR20AE_EXP_GAIN_MODIFY_TS2_() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Exported Object: vtable for AeAlgoDev<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AeAlgoDevILN11NSIspTuning12ESensorDev_TE8EE = NULL;

/* Demangled: NS3A::AeAlgo::updateAEPlineInfo_v4p0(strAETable*, strAETable*, strFinerEvPline*, strFinerEvPline*, strAEPLineGainList*, AE_NVRAM_T*, AE_PARAMETER*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo22updateAEPlineInfo_v4p0EP10strAETableS2_P15strFinerEvPlineS4_P18strAEPLineGainListP10AE_NVRAM_TP12AE_PARAMETERRj(void) {
    ALOGD("_ZN4NS3A6AeAlgo22updateAEPlineInfo_v4p0EP10strAETableS2_P15strFinerEvPlineS4_P18strAEPLineGainListP10AE_NVRAM_TP12AE_PARAMETERRj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::faceLandMarkProcess(AEMeteringArea*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo19faceLandMarkProcessEP14AEMeteringArea(void) {
    ALOGD("_ZN4NS3A6AeAlgo19faceLandMarkProcessEP14AEMeteringArea() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getEVIdxInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12getEVIdxInfoERjS1_S1_(void) {
    ALOGD("_ZN4NS3A6AeAlgo12getEVIdxInfoERjS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo15destroyInstanceEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::calHdrNormalAETarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20calHdrNormalAETargetEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo20calHdrNormalAETargetEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NS3A::AeAlgo::getFlareValue() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13getFlareValueEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo13getFlareValueEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getRecommendStableTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo24getRecommendStableTargetEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo24getRecommendStableTargetEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::calculateAFParams(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17calculateAFParamsEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo17calculateAFParamsEP11strAEOutput() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAECamMode(LIB3A_AECAM_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12setAECamModeE18LIB3A_AECAM_MODE_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo12setAECamModeE18LIB3A_AECAM_MODE_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAElimitorEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo18setAElimitorEnableEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo18setAElimitorEnableEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkHistogramStretch_v2p0(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo26checkHistogramStretch_v2p0ERj(void) {
    ALOGD("_ZN4NS3A6AeAlgo26checkHistogramStretch_v2p0ERj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::handleAE(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo8handleAEEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo8handleAEEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Exported Object: m_i4AEDebugPline */
extern "C" __attribute__((visibility("default"))) void* m_i4AEDebugPline = NULL;

/* Demangled: NS3A::AeAlgo::getPseudoOEValue(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16getPseudoOEValueERj(void) {
    ALOGD("_ZN4NS3A6AeAlgo16getPseudoOEValueERj() called");
    return 0;
}

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getBrightnessAverageValue() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo25getBrightnessAverageValueEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo25getBrightnessAverageValueEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::calFaceTarget(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13calFaceTargetEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo13calFaceTargetEj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::lockAE(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo6lockAEEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo6lockAEEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::processAE(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo9processAEEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo9processAEEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setZoomRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12setZoomRatioEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo12setZoomRatioEj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setSensorModeMaxBVdiff(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo22setSensorModeMaxBVdiffEii(void) {
    ALOGD("_ZN4NS3A6AeAlgo22setSensorModeMaxBVdiffEii() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::initAE(AE_INITIAL_INPUT_T*, strAEOutput*, AE_STAT_PARAM_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo6initAEEP18AE_INITIAL_INPUT_TP11strAEOutputP15AE_STAT_PARAM_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo6initAEEP18AE_INITIAL_INPUT_TP11strAEOutputP15AE_STAT_PARAM_T() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getHSv4p0Target(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo15getHSv4p0TargetERj(void) {
    ALOGD("_ZN4NS3A6AeAlgo15getHSv4p0TargetERj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setmVHDRAESatisticBufferAddr(void*, AE_3EXPO_PROC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo28setmVHDRAESatisticBufferAddrEPvP20AE_3EXPO_PROC_INFO_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo28setmVHDRAESatisticBufferAddrEPvP20AE_3EXPO_PROC_INFO_T() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::switchAELock(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12switchAELockEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo12switchAELockEP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkNightScene_v2p0(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20checkNightScene_v2p0ERj(void) {
    ALOGD("_ZN4NS3A6AeAlgo20checkNightScene_v2p0ERj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAESatisticBufferAddr_v4p0(void*, void*, AAO_PROC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo28setAESatisticBufferAddr_v4p0EPvS1_P15AAO_PROC_INFO_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo28setAESatisticBufferAddr_v4p0EPvS1_P15AAO_PROC_INFO_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEMainTarget(unsigned int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo15getAEMainTargetERjRi(void) {
    ALOGD("_ZN4NS3A6AeAlgo15getAEMainTargetERjRi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEHistogram(unsigned char, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14getAEHistogramEhPj(void) {
    ALOGD("_ZN4NS3A6AeAlgo14getAEHistogramEhPj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEVideoRecord(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16setAEVideoRecordEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo16setAEVideoRecordEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::updateAEInitIndex(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17updateAEInitIndexEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo17updateAEInitIndexEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::updateHdrInfo(strEvHdrSetting&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13updateHdrInfoER15strEvHdrSetting(void) {
    ALOGD("_ZN4NS3A6AeAlgo13updateHdrInfoER15strEvHdrSetting() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setFinerEVComp(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14setFinerEVCompEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo14setFinerEVCompEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAERealISOvalue(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17getAERealISOvalueEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo17getAERealISOvalueEP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAESWHdrInfo(HDR_CHDR_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14getAESWHdrInfoER15HDR_CHDR_INFO_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo14getAESWHdrInfoER15HDR_CHDR_INFO_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::CalculateCaptureLV(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo18CalculateCaptureLVEPi(void) {
    ALOGD("_ZN4NS3A6AeAlgo18CalculateCaptureLVEPi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::faceLandMarkPosCorrection(AEMeteringArea*, AEMeterArea*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo25faceLandMarkPosCorrectionEP14AEMeteringAreaP11AEMeterArea(void) {
    ALOGD("_ZN4NS3A6AeAlgo25faceLandMarkPosCorrectionEP14AEMeteringAreaP11AEMeterArea() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEMaxISO(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11getAEMaxISOERjS1_(void) {
    ALOGD("_ZN4NS3A6AeAlgo11getAEMaxISOERjS1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::AeAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgoC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A6AeAlgoC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEBlockYvalues(unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17getAEBlockYvaluesEPhh(void) {
    ALOGD("_ZN4NS3A6AeAlgo17getAEBlockYvaluesEPhh() called");
    return 0;
}

/* Demangled: non-virtual thunk to NS3A::AeAlgo::~AeAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N4NS3A6AeAlgoD1Ev(void) {
    ALOGD("_ZThn8_N4NS3A6AeAlgoD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getTouchIsReferencedFlag(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo24getTouchIsReferencedFlagERi(void) {
    ALOGD("_ZN4NS3A6AeAlgo24getTouchIsReferencedFlagERi() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::updateAEParam(AE_INITIAL_INPUT_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13updateAEParamEP18AE_INITIAL_INPUT_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo13updateAEParamEP18AE_INITIAL_INPUT_T() called");
    return 0;
}

/* Demangled: NS3A::IAeAlgo* NS3A::IAeAlgo::createInstance<(NS3A::EAAAOpt_T)0>(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7IAeAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i(void) {
    ALOGD("_ZN4NS3A7IAeAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i() called");
    return 0;
}

/* Exported Object: vtable for AeAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AeAlgoDevILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: NS3A::AeAlgo::setStrobeMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13setStrobeModeEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo13setStrobeModeEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::processInterAE(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo14processInterAEEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo14processInterAEEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getDebugInfo(AE_DEBUG_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12getDebugInfoER15AE_DEBUG_INFO_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo12getDebugInfoER15AE_DEBUG_INFO_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setFlareValue(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13setFlareValueEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo13setFlareValueEj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::process_HdrAE(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13process_HdrAEEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo13process_HdrAEEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getCapPlineTable(int*, strAETable&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16getCapPlineTableEPiR10strAETable(void) {
    ALOGD("_ZN4NS3A6AeAlgo16getCapPlineTableEPiR10strAETable() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEMeteringMode(LIB3A_AE_METERING_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17setAEMeteringModeE24LIB3A_AE_METERING_MODE_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo17setAEMeteringModeE24LIB3A_AE_METERING_MODE_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::updateAEPlineInfo(strAETable*, strAETable*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17updateAEPlineInfoEP10strAETableS2_(void) {
    ALOGD("_ZN4NS3A6AeAlgo17updateAEPlineInfoEP10strAETableS2_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::switchCapureDiffEVState(strAEOutput*, signed char) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo23switchCapureDiffEVStateEP11strAEOutputa(void) {
    ALOGD("_ZN4NS3A6AeAlgo23switchCapureDiffEVStateEP11strAEOutputa() called");
    return 0;
}

/* Exported Object: vtable for NS3A::AeAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A6AeAlgoE = NULL;

/* Demangled: NS3A::AeAlgo::getFaceIsReferencedFlag(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo23getFaceIsReferencedFlagERi(void) {
    ALOGD("_ZN4NS3A6AeAlgo23getFaceIsReferencedFlagERi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::~AeAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgoD1Ev(void) {
    ALOGD("_ZN4NS3A6AeAlgoD1Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NS3A::AeAlgo::storeAeDebugParam() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17storeAeDebugParamEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo17storeAeDebugParamEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::isTouchValidBefore(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo18isTouchValidBeforeEiiii(void) {
    ALOGD("_ZN4NS3A6AeAlgo18isTouchValidBeforeEiiii() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: __aeabi_f2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2d(void) {
    ALOGD("__aeabi_f2d() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::checkAEPlineInfo(strFinerEvPline*, strFinerEvPline*, strAEPLineGainList*, AE_NVRAM_T*, AE_PARAMETER*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16checkAEPlineInfoEP15strFinerEvPlineS2_P18strAEPLineGainListP10AE_NVRAM_TP12AE_PARAMETER(void) {
    ALOGD("_ZN4NS3A6AeAlgo16checkAEPlineInfoEP15strFinerEvPlineS2_P18strAEPLineGainListP10AE_NVRAM_TP12AE_PARAMETER() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEFlickerMode(LIB3A_AE_FLICKER_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16setAEFlickerModeE23LIB3A_AE_FLICKER_MODE_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo16setAEFlickerModeE23LIB3A_AE_FLICKER_MODE_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAESatisticBufferAddr(void*, AWB_GAIN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo23setAESatisticBufferAddrEPv10AWB_GAIN_T(void) {
    ALOGD("_ZN4NS3A6AeAlgo23setAESatisticBufferAddrEPv10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAeDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo16getAeDebugConfigEv(void) {
    ALOGD("_ZN4NS3A6AeAlgo16getAeDebugConfigEv() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getEvCompensateCWR() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo18getEvCompensateCWREv(void) {
    ALOGD("_ZN4NS3A6AeAlgo18getEvCompensateCWREv() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::switchAFAssistState(strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo19switchAFAssistStateEP11strAEOutput(void) {
    ALOGD("_ZN4NS3A6AeAlgo19switchAFAssistStateEP11strAEOutput() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getEVIdxInfo_v4p0(unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo17getEVIdxInfo_v4p0ERjS1_S1_S1_S1_S1_(void) {
    ALOGD("_ZN4NS3A6AeAlgo17getEVIdxInfo_v4p0ERjS1_S1_S1_S1_S1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEFDArea(AEMeteringArea*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo11setAEFDAreaEP14AEMeteringArea(void) {
    ALOGD("_ZN4NS3A6AeAlgo11setAEFDAreaEP14AEMeteringArea() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEVideoDynamicEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo23setAEVideoDynamicEnableEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo23setAEVideoDynamicEnableEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::updateAEIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo13updateAEIndexEii(void) {
    ALOGD("_ZN4NS3A6AeAlgo13updateAEIndexEii() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::modifyHistogramWinConfig(EZOOM_WINDOW_T, AE_STAT_PARAM_T*, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo24modifyHistogramWinConfigE14EZOOM_WINDOW_TP15AE_STAT_PARAM_Tjjjj(void) {
    ALOGD("_ZN4NS3A6AeAlgo24modifyHistogramWinConfigE14EZOOM_WINDOW_TP15AE_STAT_PARAM_Tjjjj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::Ratio2DIndex(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo12Ratio2DIndexEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo12Ratio2DIndexEj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::getAEMeteringBlockAreaValue(AEMeterArea, unsigned char*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo27getAEMeteringBlockAreaValueE11AEMeterAreaPhPt(void) {
    ALOGD("_ZN4NS3A6AeAlgo27getAEMeteringBlockAreaValueE11AEMeterAreaPhPt() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAEObjectTracking(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo19setAEObjectTrackingEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo19setAEObjectTrackingEi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::CalculateFlareOffset(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20CalculateFlareOffsetEj(void) {
    ALOGD("_ZN4NS3A6AeAlgo20CalculateFlareOffsetEj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgo::setAERotateWeighting(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A6AeAlgo20setAERotateWeightingEi(void) {
    ALOGD("_ZN4NS3A6AeAlgo20setAERotateWeightingEi() called");
    return 0;
}
