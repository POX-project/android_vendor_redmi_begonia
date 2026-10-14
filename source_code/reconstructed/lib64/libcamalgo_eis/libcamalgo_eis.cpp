/*
 * Reverse-Engineered Source for: libcamalgo.eis.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_eis"

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
#include "libcamalgo_eis.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Eis11Core::LMV_2NDLMV() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core10LMV_2NDLMVEv(void) {
    ALOGD("_ZN9Eis11Core10LMV_2NDLMVEv() called");
    return 0;
}

/* Demangled: Eis25Core::MarginHandling(EIS25_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core14MarginHandlingEP27EIS25_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis25Core14MarginHandlingEP27EIS25_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: AppEisPlus::EisPlusInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus11EisPlusInitEPv(void) {
    ALOGD("_ZN10AppEisPlus11EisPlusInitEPv() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreQueryWorkingBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core28Eis25CoreQueryWorkingBufSizeEv(void) {
    ALOGD("_ZN9Eis25Core28Eis25CoreQueryWorkingBufSizeEv() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore16EisPlusCoreResetEv(void) {
    ALOGD("_ZN11EisPlusCore16EisPlusCoreResetEv() called");
    return 0;
}

/* Demangled: Eis11Core::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core11getInstanceEv(void) {
    ALOGD("_ZN9Eis11Core11getInstanceEv() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreGetProcInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core24Eis25CoreGetProcInfoAddrEv(void) {
    ALOGD("_ZN9Eis25Core24Eis25CoreGetProcInfoAddrEv() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreSaveLog(EIS30_CORE_SAVE_LOG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core16Eis30CoreSaveLogEP26EIS30_CORE_SAVE_LOG_STRUCT(void) {
    ALOGD("_ZN9Eis30Core16Eis30CoreSaveLogEP26EIS30_CORE_SAVE_LOG_STRUCT() called");
    return 0;
}

/* Exported Object: gSmoothVoteZone */
extern "C" __attribute__((visibility("default"))) void* gSmoothVoteZone = NULL;

/* Demangled: Eis25Core::Eis25CoreGetFinalCoeffAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core26Eis25CoreGetFinalCoeffAddrEv(void) {
    ALOGD("_ZN9Eis25Core26Eis25CoreGetFinalCoeffAddrEv() called");
    return 0;
}

/* Demangled: EisPlusCore::BoundaryProtection(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore18BoundaryProtectionEPf(void) {
    ALOGD("_ZN11EisPlusCore18BoundaryProtectionEPf() called");
    return 0;
}

/* Exported Object: vtable for MTKEisPlus */
extern "C" __attribute__((visibility("default"))) void* _ZTV10MTKEisPlus = NULL;

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: EisPlusCore::~EisPlusCore() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCoreD0Ev(void) {
    ALOGD("_ZN11EisPlusCoreD0Ev() called");
    return 0;
}

/* Demangled: EisPlusCore::GetGyroAffineCoef() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore17GetGyroAffineCoefEv(void) {
    ALOGD("_ZN11EisPlusCore17GetGyroAffineCoefEv() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: Eis11Core::LMV_Center() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core10LMV_CenterEv(void) {
    ALOGD("_ZN9Eis11Core10LMV_CenterEv() called");
    return 0;
}

/* Demangled: Eis25Core::GisAffine(float const*, float const*, float*, float*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core9GisAffineEPKfS1_PfS2_iPiS2_(void) {
    ALOGD("_ZN9Eis25Core9GisAffineEPKfS1_PfS2_iPiS2_() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreQueryWorkingBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core28Eis30CoreQueryWorkingBufSizeEv(void) {
    ALOGD("_ZN9Eis30Core28Eis30CoreQueryWorkingBufSizeEv() called");
    return 0;
}

/* Demangled: Eis30Core::GetAffineCoef_BG() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core16GetAffineCoef_BGEv(void) {
    ALOGD("_ZN9Eis30Core16GetAffineCoef_BGEv() called");
    return 0;
}

/* Demangled: Eis25Core::CalcEisGmvConf() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core14CalcEisGmvConfEv(void) {
    ALOGD("_ZN9Eis25Core14CalcEisGmvConfEv() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11CoreSetEisInfo(EIS_SET_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core19Eis11CoreSetEisInfoEP24EIS_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN9Eis11Core19Eis11CoreSetEisInfoEP24EIS_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: gWorkingBufferAddr */
extern "C" __attribute__((visibility("default"))) void* gWorkingBufferAddr = NULL;

/* Demangled: EisPlusCore::GyroHandholdCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore17GyroHandholdCheckEv(void) {
    ALOGD("_ZN11EisPlusCore17GyroHandholdCheckEv() called");
    return 0;
}

/* Demangled: AppEis::EisFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEis14EisFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6AppEis14EisFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: Eis12Core::GyroStillCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core14GyroStillCheckEv(void) {
    ALOGD("_ZN9Eis12Core14GyroStillCheckEv() called");
    return 0;
}

/* Demangled: Eis30Core::affine(float const*, float const*, float*, float*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core6affineEPKfS1_PfS2_iPiS2_(void) {
    ALOGD("_ZN9Eis30Core6affineEPKfS1_PfS2_iPiS2_() called");
    return 0;
}

/* Demangled: region_mv_processing(MVEC*, MVEC*, int*, int, int, int, int, int, int, int, int, RGNMV_S*) */
extern "C" __attribute__((visibility("default"))) int _Z20region_mv_processingP4MVECS0_PiiiiiiiiiP7RGNMV_S(void) {
    ALOGD("_Z20region_mv_processingP4MVECS0_PiiiiiiiiiP7RGNMV_S() called");
    return 0;
}

/* Demangled: MTKEisPlus::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlus14createInstanceEv(void) {
    ALOGD("_ZN10MTKEisPlus14createInstanceEv() called");
    return 0;
}

/* Demangled: AppEisPlus::EisPlusFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus18EisPlusFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN10AppEisPlus18EisPlusFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Exported Object: gAbsoluteVoteZone */
extern "C" __attribute__((visibility("default"))) void* gAbsoluteVoteZone = NULL;

/* Demangled: EisPlusCore::GyroAidedMain(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore13GyroAidedMainEPf(void) {
    ALOGD("_ZN11EisPlusCore13GyroAidedMainEPf() called");
    return 0;
}

/* Demangled: Eis11Core::runCMV() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core6runCMVEv(void) {
    ALOGD("_ZN9Eis11Core6runCMVEv() called");
    return 0;
}

/* Demangled: Eis11Core::EisAdjustVoteBox() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core16EisAdjustVoteBoxEv(void) {
    ALOGD("_ZN9Eis11Core16EisAdjustVoteBoxEv() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: Eis30Core::affine_translation(float const*, float const*, float*, float*, int, int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core18affine_translationEPKfS1_PfS2_iPiS2_S2_(void) {
    ALOGD("_ZN9Eis30Core18affine_translationEPKfS1_PfS2_iPiS2_S2_() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: MTKEisPlus::destroyInstance(MTKEisPlus*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlus15destroyInstanceEPS_(void) {
    ALOGD("_ZN10MTKEisPlus15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: EisPlusCore::CalAffineAcc(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore12CalAffineAccEPfS0_S0_(void) {
    ALOGD("_ZN11EisPlusCore12CalAffineAccEPfS0_S0_() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: MTKEisPlus::EisPlusMain(EIS_PLUS_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN10MTKEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis25Core::ForegroundCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core15ForegroundCheckEv(void) {
    ALOGD("_ZN9Eis25Core15ForegroundCheckEv() called");
    return 0;
}

/* Demangled: Eis30Core::MarginHandling(EIS30_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core14MarginHandlingEP27EIS30_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis30Core14MarginHandlingEP27EIS30_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Demangled: Eis25Core::RotationFallback() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core16RotationFallbackEv(void) {
    ALOGD("_ZN9Eis25Core16RotationFallbackEv() called");
    return 0;
}

/* Demangled: Eis11Core::LMV_TrustValue() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core14LMV_TrustValueEv(void) {
    ALOGD("_ZN9Eis11Core14LMV_TrustValueEv() called");
    return 0;
}

/* Demangled: Eis25Core::GetGyroAffineCoef() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core17GetGyroAffineCoefEv(void) {
    ALOGD("_ZN9Eis25Core17GetGyroAffineCoefEv() called");
    return 0;
}

/* Demangled: EisPlusCore::NormalShakeCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore16NormalShakeCheckEv(void) {
    ALOGD("_ZN11EisPlusCore16NormalShakeCheckEv() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: Eis30Core::IIRStrength(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core11IIRStrengthEPfS0_(void) {
    ALOGD("_ZN9Eis30Core11IIRStrengthEPfS0_() called");
    return 0;
}

/* Demangled: Eis30Core::Similarity(float*, float*, int*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core10SimilarityEPfS0_PiS0_i(void) {
    ALOGD("_ZN9Eis30Core10SimilarityEPfS0_PiS0_i() called");
    return 0;
}

/* Demangled: Eis30Core::FreqCalc1(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core9FreqCalc1EPfS0_(void) {
    ALOGD("_ZN9Eis30Core9FreqCalc1EPfS0_() called");
    return 0;
}

/* Demangled: AppEisPlus::FW_BW_compare(EIS_PLUS_SET_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus13FW_BW_compareEP29EIS_PLUS_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN10AppEisPlus13FW_BW_compareEP29EIS_PLUS_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis12Core::GyroAidedMain(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core13GyroAidedMainEPf(void) {
    ALOGD("_ZN9Eis12Core13GyroAidedMainEPf() called");
    return 0;
}

/* Demangled: AppEis::EisReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEis8EisResetEv(void) {
    ALOGD("_ZN6AppEis8EisResetEv() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12CoreC2Ev(void) {
    ALOGD("_ZN9Eis12CoreC2Ev() called");
    return 0;
}

/* Demangled: Eis30Core::ShakeDeviceDetect(float*, int, float*, signed char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core17ShakeDeviceDetectEPfiS0_Pa(void) {
    ALOGD("_ZN9Eis30Core17ShakeDeviceDetectEPfiS0_Pa() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11CoreGetPlusInfo(EIS_GET_PLUS_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core20Eis11CoreGetPlusInfoEP24EIS_GET_PLUS_INFO_STRUCT(void) {
    ALOGD("_ZN9Eis11Core20Eis11CoreGetPlusInfoEP24EIS_GET_PLUS_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis30Core::GetAffineCoef2() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core14GetAffineCoef2Ev(void) {
    ALOGD("_ZN9Eis30Core14GetAffineCoef2Ev() called");
    return 0;
}

/* Demangled: Eis30CheckTuningParamRange(EIS30_TUNING_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z26Eis30CheckTuningParamRangeP24EIS30_TUNING_PARA_STRUCT(void) {
    ALOGD("_Z26Eis30CheckTuningParamRangeP24EIS30_TUNING_PARA_STRUCT() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30CoreC2Ev(void) {
    ALOGD("_ZN9Eis30CoreC2Ev() called");
    return 0;
}

/* Demangled: Eis30Core::GetCameraShake(EIS30_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core14GetCameraShakeEP27EIS30_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis30Core14GetCameraShakeEP27EIS30_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreSetWorkingBuf(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core22Eis30CoreSetWorkingBufEPh(void) {
    ALOGD("_ZN9Eis30Core22Eis30CoreSetWorkingBufEPh() called");
    return 0;
}

/* Demangled: AppEisPlus::AppEisPlus() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlusC1Ev(void) {
    ALOGD("_ZN10AppEisPlusC1Ev() called");
    return 0;
}

/* Demangled: AppEis::AppEis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEisC1Ev(void) {
    ALOGD("_ZN6AppEisC1Ev() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: Eis12Core::CalAffineAcc(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core12CalAffineAccEPfS0_S0_(void) {
    ALOGD("_ZN9Eis12Core12CalAffineAccEPfS0_S0_() called");
    return 0;
}

/* Demangled: Eis30Core::Fov2RegionGrid(float*, int (*) [2]) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core14Fov2RegionGridEPfPA2_i(void) {
    ALOGD("_ZN9Eis30Core14Fov2RegionGridEPfPA2_i() called");
    return 0;
}

/* Demangled: Eis12Core::~Eis12Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12CoreD2Ev(void) {
    ALOGD("_ZN9Eis12CoreD2Ev() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11CoreC1Ev(void) {
    ALOGD("_ZN9Eis11CoreC1Ev() called");
    return 0;
}

/* Demangled: AppEisPlus::~AppEisPlus() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlusD2Ev(void) {
    ALOGD("_ZN10AppEisPlusD2Ev() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreMain() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore15EisPlusCoreMainEv(void) {
    ALOGD("_ZN11EisPlusCore15EisPlusCoreMainEv() called");
    return 0;
}

/* Demangled: Eis30Core::MotionHistogramAnalysis() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core23MotionHistogramAnalysisEv(void) {
    ALOGD("_ZN9Eis30Core23MotionHistogramAnalysisEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: Eis12Core::CalCompensation(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core15CalCompensationEPfS0_S0_(void) {
    ALOGD("_ZN9Eis12Core15CalCompensationEPfS0_S0_() called");
    return 0;
}

/* Demangled: Eis12Core::smoothCurve(float*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core11smoothCurveEPff(void) {
    ALOGD("_ZN9Eis12Core11smoothCurveEPff() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreSetWorkingBuf(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core22Eis25CoreSetWorkingBufEPh(void) {
    ALOGD("_ZN9Eis25Core22Eis25CoreSetWorkingBufEPh() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCore() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCoreC2Ev(void) {
    ALOGD("_ZN11EisPlusCoreC2Ev() called");
    return 0;
}

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Demangled: Eis11Core::CMV_VirtualSpring() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core17CMV_VirtualSpringEv(void) {
    ALOGD("_ZN9Eis11Core17CMV_VirtualSpringEv() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11CoreGetOriGMV(EIS_GMV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core18Eis11CoreGetOriGMVEP19EIS_GMV_INFO_STRUCT(void) {
    ALOGD("_ZN9Eis11Core18Eis11CoreGetOriGMVEP19EIS_GMV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: EisPlusCore::GyroErrorCheck(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore14GyroErrorCheckEPf(void) {
    ALOGD("_ZN11EisPlusCore14GyroErrorCheckEPf() called");
    return 0;
}

/* Demangled: Eis30Core::~Eis30Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30CoreD0Ev(void) {
    ALOGD("_ZN9Eis30CoreD0Ev() called");
    return 0;
}

/* Demangled: EisPlusCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore11getInstanceEv(void) {
    ALOGD("_ZN11EisPlusCore11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKEisPlus::EisPlusInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlus11EisPlusInitEPv(void) {
    ALOGD("_ZN10MTKEisPlus11EisPlusInitEPv() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreGetProcInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core24Eis12CoreGetProcInfoAddrEv(void) {
    ALOGD("_ZN9Eis12Core24Eis12CoreGetProcInfoAddrEv() called");
    return 0;
}

/* Demangled: Eis12Core::GyroErrorCheck(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core14GyroErrorCheckEPf(void) {
    ALOGD("_ZN9Eis12Core14GyroErrorCheckEPf() called");
    return 0;
}

/* Demangled: Eis25Core::CalCompensation(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core15CalCompensationEPfS0_S0_(void) {
    ALOGD("_ZN9Eis25Core15CalCompensationEPfS0_S0_() called");
    return 0;
}

/* Demangled: Eis30Core::MemoryShift() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core11MemoryShiftEv(void) {
    ALOGD("_ZN9Eis30Core11MemoryShiftEv() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: Eis30Core::CalcHistogram(float (*) [6], int*, int, int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core13CalcHistogramEPA6_fPiiS2_PfS3_(void) {
    ALOGD("_ZN9Eis30Core13CalcHistogramEPA6_fPiiS2_PfS3_() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreGetTuningParaAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core26Eis25CoreGetTuningParaAddrEv(void) {
    ALOGD("_ZN9Eis25Core26Eis25CoreGetTuningParaAddrEv() called");
    return 0;
}

/* Demangled: Eis25Core::MotionHistogramAnalysis() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core23MotionHistogramAnalysisEv(void) {
    ALOGD("_ZN9Eis25Core23MotionHistogramAnalysisEv() called");
    return 0;
}

/* Demangled: AppEis::destroyInstance(MTKEis*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEis15destroyInstanceEP6MTKEis(void) {
    ALOGD("_ZN6AppEis15destroyInstanceEP6MTKEis() called");
    return 0;
}

/* Demangled: control_point_interpolation_FSC(int*, int*, int, int, int (*) [2], int, int, int, int, int, int, int, int, int*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z31control_point_interpolation_FSCPiS_iiPA2_iiiiiiiiiS_iS_(void) {
    ALOGD("_Z31control_point_interpolation_FSCPiS_iiPA2_iiiiiiiiiS_iS_() called");
    return 0;
}

/* Demangled: AppEisPlus::EisPlusReset() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus12EisPlusResetEv(void) {
    ALOGD("_ZN10AppEisPlus12EisPlusResetEv() called");
    return 0;
}

/* Demangled: affgrid2grid(int (*) [2], float*, int (*) [2], int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12affgrid2gridPA2_iPfS0_iiii(void) {
    ALOGD("_Z12affgrid2gridPA2_iPfS0_iiii() called");
    return 0;
}

/* Demangled: Eis12Core::GyroHandholdCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core17GyroHandholdCheckEv(void) {
    ALOGD("_ZN9Eis12Core17GyroHandholdCheckEv() called");
    return 0;
}

/* Demangled: EisPlusCore::destroyInstance(EisPlusCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN11EisPlusCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreGetTuningParaAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core26Eis12CoreGetTuningParaAddrEv(void) {
    ALOGD("_ZN9Eis12Core26Eis12CoreGetTuningParaAddrEv() called");
    return 0;
}

/* Demangled: Eis12Core::NormalShakeCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core16NormalShakeCheckEv(void) {
    ALOGD("_ZN9Eis12Core16NormalShakeCheckEv() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11CoreSetDebugInfo(EIS_SET_LOG_BUFFER_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core21Eis11CoreSetDebugInfoEP25EIS_SET_LOG_BUFFER_STRUCT(void) {
    ALOGD("_ZN9Eis11Core21Eis11CoreSetDebugInfoEP25EIS_SET_LOG_BUFFER_STRUCT() called");
    return 0;
}

/* Demangled: MTKEisPlus::~MTKEisPlus() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlusD0Ev(void) {
    ALOGD("_ZN10MTKEisPlusD0Ev() called");
    return 0;
}

/* Demangled: Eis30Core::GetAffineCoef() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core13GetAffineCoefEv(void) {
    ALOGD("_ZN9Eis30Core13GetAffineCoefEv() called");
    return 0;
}

/* Exported Object: vtable for AppEisPlus */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AppEisPlus = NULL;

/* Demangled: AppEis::~AppEis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEisD2Ev(void) {
    ALOGD("_ZN6AppEisD2Ev() called");
    return 0;
}

/* Exported Object: vtable for MTKEis */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MTKEis = NULL;

/* Demangled: MTKEis::destroyInstance(MTKEis*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEis15destroyInstanceEPS_(void) {
    ALOGD("_ZN6MTKEis15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: AppEisPlus::SetInputFromFile(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus16SetInputFromFileEjPv(void) {
    ALOGD("_ZN10AppEisPlus16SetInputFromFileEjPv() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreGetLogBufAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core22Eis25CoreGetLogBufAddrEv(void) {
    ALOGD("_ZN9Eis25Core22Eis25CoreGetLogBufAddrEv() called");
    return 0;
}

/* Demangled: affine_coeff_inv(MCOEF) */
extern "C" __attribute__((visibility("default"))) int _Z16affine_coeff_inv5MCOEF(void) {
    ALOGD("_Z16affine_coeff_inv5MCOEF() called");
    return 0;
}

/* Demangled: Eis11Core::~Eis11Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11CoreD2Ev(void) {
    ALOGD("_ZN9Eis11CoreD2Ev() called");
    return 0;
}

/* Demangled: grid2affgrid(int (*) [2], float*, int (*) [2], int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12grid2affgridPA2_iPfS0_iiii(void) {
    ALOGD("_Z12grid2affgridPA2_iPfS0_iiii() called");
    return 0;
}

/* Demangled: EisPlusCore::affine(int const*, int const*, int*, int*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore6affineEPKiS1_PiS2_iS2_Pf(void) {
    ALOGD("_ZN11EisPlusCore6affineEPKiS1_PiS2_iS2_Pf() called");
    return 0;
}

/* Demangled: Eis11Core::LMV_Cluster() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core11LMV_ClusterEv(void) {
    ALOGD("_ZN9Eis11Core11LMV_ClusterEv() called");
    return 0;
}

/* Demangled: AppEisPlus::~AppEisPlus() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlusD0Ev(void) {
    ALOGD("_ZN10AppEisPlusD0Ev() called");
    return 0;
}

/* Demangled: Eis30Core::translation(float const*, float const*, float*, float*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core11translationEPKfS1_PfS2_iPiS2_(void) {
    ALOGD("_ZN9Eis30Core11translationEPKfS1_PfS2_iPiS2_() called");
    return 0;
}

/* Demangled: AppEisPlus::destroyInstance(MTKEisPlus*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus15destroyInstanceEP10MTKEisPlus(void) {
    ALOGD("_ZN10AppEisPlus15destroyInstanceEP10MTKEisPlus() called");
    return 0;
}

/* Demangled: Eis25Core::ForegroundTrace() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core15ForegroundTraceEv(void) {
    ALOGD("_ZN9Eis25Core15ForegroundTraceEv() called");
    return 0;
}

/* Demangled: Eis12Core::GetCameraShake(EIS_PLUS_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis12Core14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Demangled: AppEis::~AppEis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEisD0Ev(void) {
    ALOGD("_ZN6AppEisD0Ev() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11CoreC2Ev(void) {
    ALOGD("_ZN9Eis11CoreC2Ev() called");
    return 0;
}

/* Demangled: Eis30Core::CalAffineAcc(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core12CalAffineAccEPfS0_S0_(void) {
    ALOGD("_ZN9Eis30Core12CalAffineAccEPfS0_S0_() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreInitProcInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core21Eis12CoreInitProcInfoEv(void) {
    ALOGD("_ZN9Eis12Core21Eis12CoreInitProcInfoEv() called");
    return 0;
}

/* Demangled: EisPlusCore::CalCompensation(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore15CalCompensationEPfS0_S0_(void) {
    ALOGD("_ZN11EisPlusCore15CalCompensationEPfS0_S0_() called");
    return 0;
}

/* Demangled: Eis30Core::fov_affine(float const*, float const*, float*, float*, int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core10fov_affineEPKfS1_PfS2_iS2_(void) {
    ALOGD("_ZN9Eis30Core10fov_affineEPKfS1_PfS2_iS2_() called");
    return 0;
}

/* Demangled: Eis25Core::BoundaryProtection(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core18BoundaryProtectionEPf(void) {
    ALOGD("_ZN9Eis25Core18BoundaryProtectionEPf() called");
    return 0;
}

/* Demangled: AppEis::EisMain(EIS_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEis7EisMainEP22EIS_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN6AppEis7EisMainEP22EIS_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis25Core::GetAffineCoef4() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core14GetAffineCoef4Ev(void) {
    ALOGD("_ZN9Eis25Core14GetAffineCoef4Ev() called");
    return 0;
}

/* Demangled: Eis25Core::ScalingFallback() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core15ScalingFallbackEv(void) {
    ALOGD("_ZN9Eis25Core15ScalingFallbackEv() called");
    return 0;
}

/* Demangled: Eis11Core::~Eis11Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11CoreD0Ev(void) {
    ALOGD("_ZN9Eis11CoreD0Ev() called");
    return 0;
}

/* Demangled: mfloat2mcoef(float*, MCOEF) */
extern "C" __attribute__((visibility("default"))) int _Z12mfloat2mcoefPf5MCOEF(void) {
    ALOGD("_Z12mfloat2mcoefPf5MCOEF() called");
    return 0;
}

/* Demangled: MTKEisPlus::~MTKEisPlus() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlusD2Ev(void) {
    ALOGD("_ZN10MTKEisPlusD2Ev() called");
    return 0;
}

/* Demangled: Eis30Core::affine_final(float const*, float const*, float*, float*, int, int*, float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core12affine_finalEPKfS1_PfS2_iPiS2_S2_i(void) {
    ALOGD("_ZN9Eis30Core12affine_finalEPKfS1_PfS2_iPiS2_S2_i() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreSaveLog(EIS_PLUS_CORE_SAVE_LOG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore18EisPlusCoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT(void) {
    ALOGD("_ZN11EisPlusCore18EisPlusCoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT() called");
    return 0;
}

/* Demangled: MTKEisPlus::EisPlusFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlus18EisPlusFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN10MTKEisPlus18EisPlusFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: Eis25Core::Similarity(float*, float*, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core10SimilarityEPfS0_PiS0_(void) {
    ALOGD("_ZN9Eis25Core10SimilarityEPfS0_PiS0_() called");
    return 0;
}

/* Demangled: Eis25Core::GetAffineCoef() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core13GetAffineCoefEv(void) {
    ALOGD("_ZN9Eis25Core13GetAffineCoefEv() called");
    return 0;
}

/* Demangled: Eis30Core::ForegroundTrace() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15ForegroundTraceEv(void) {
    ALOGD("_ZN9Eis30Core15ForegroundTraceEv() called");
    return 0;
}

/* Demangled: Eis30Core::smoothCurve(float, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core11smoothCurveEfi(void) {
    ALOGD("_ZN9Eis30Core11smoothCurveEfi() called");
    return 0;
}

/* Demangled: EisPlusCore::GisAffine(float const*, float const*, float*, float*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore9GisAffineEPKfS1_PfS2_iPiS2_(void) {
    ALOGD("_ZN11EisPlusCore9GisAffineEPKfS1_PfS2_iPiS2_() called");
    return 0;
}

/* Demangled: new_affine_optimization(MVEC*, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z23new_affine_optimizationP4MVECiiiPi(void) {
    ALOGD("_Z23new_affine_optimizationP4MVECiiiPi() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: Eis30Core::FIR13_filter(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core12FIR13_filterEPf(void) {
    ALOGD("_ZN9Eis30Core12FIR13_filterEPf() called");
    return 0;
}

/* Demangled: Eis25Core::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core11getInstanceEv(void) {
    ALOGD("_ZN9Eis25Core11getInstanceEv() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreMain() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core13Eis30CoreMainEv(void) {
    ALOGD("_ZN9Eis30Core13Eis30CoreMainEv() called");
    return 0;
}

/* Demangled: EisPlusCore::~EisPlusCore() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCoreD1Ev(void) {
    ALOGD("_ZN11EisPlusCoreD1Ev() called");
    return 0;
}

/* Demangled: Eis30Core::GetGyroHomoCoef(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15GetGyroHomoCoefEii(void) {
    ALOGD("_ZN9Eis30Core15GetGyroHomoCoefEii() called");
    return 0;
}

/* Demangled: Eis11Core::runGMV() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core6runGMVEv(void) {
    ALOGD("_ZN9Eis11Core6runGMVEv() called");
    return 0;
}

/* Demangled: AppEisPlus::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus11getInstanceEv(void) {
    ALOGD("_ZN10AppEisPlus11getInstanceEv() called");
    return 0;
}

/* Demangled: Eis30Core::Homo2RegionGrid(float*, int (*) [2]) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15Homo2RegionGridEPfPA2_i(void) {
    ALOGD("_ZN9Eis30Core15Homo2RegionGridEPfPA2_i() called");
    return 0;
}

/* Demangled: AppEisPlus::AppEisPlus() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlusC2Ev(void) {
    ALOGD("_ZN10AppEisPlusC2Ev() called");
    return 0;
}

/* Demangled: MTKEis::~MTKEis() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEisD0Ev(void) {
    ALOGD("_ZN6MTKEisD0Ev() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: Eis25Core::~Eis25Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25CoreD1Ev(void) {
    ALOGD("_ZN9Eis25CoreD1Ev() called");
    return 0;
}

/* Demangled: Eis30Core::FIR_filter(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core10FIR_filterEPf(void) {
    ALOGD("_ZN9Eis30Core10FIR_filterEPf() called");
    return 0;
}

/* Demangled: MTKEis::EisFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEis14EisFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6MTKEis14EisFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: Eis25Core::destroyInstance(Eis25Core*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core15destroyInstanceEPS_(void) {
    ALOGD("_ZN9Eis25Core15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: Eis30Core::EISinverseMatrix4x4(double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core19EISinverseMatrix4x4EPKdPd(void) {
    ALOGD("_ZN9Eis30Core19EISinverseMatrix4x4EPKdPd() called");
    return 0;
}

/* Demangled: normal_mv_separation(MVEC*, int (*) [17632], MVEC*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z20normal_mv_separationP4MVECPA17632_iS0_iiii(void) {
    ALOGD("_Z20normal_mv_separationP4MVECPA17632_iS0_iiii() called");
    return 0;
}

/* Demangled: Eis30Core::GisHomo(float const*, float const*, float*, float*, int, int, int, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core7GisHomoEPKfS1_PfS2_iiiiPiS2_(void) {
    ALOGD("_ZN9Eis30Core7GisHomoEPKfS1_PfS2_iiiiPiS2_() called");
    return 0;
}

/* Demangled: Eis11Core::destroyInstance(Eis11Core*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core15destroyInstanceEPS_(void) {
    ALOGD("_ZN9Eis11Core15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: affine(int const*, int const*, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z6affinePKiS0_PiS1_i(void) {
    ALOGD("_Z6affinePKiS0_PiS1_i() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core14Eis12CoreResetEv(void) {
    ALOGD("_ZN9Eis12Core14Eis12CoreResetEv() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreGetProcInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore26EisPlusCoreGetProcInfoAddrEv(void) {
    ALOGD("_ZN11EisPlusCore26EisPlusCoreGetProcInfoAddrEv() called");
    return 0;
}

/* Exported Object: vtable for AppEis */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppEis = NULL;

/* Demangled: rgnmv_weighted_filter(RGNMV_S*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21rgnmv_weighted_filterP7RGNMV_Sii(void) {
    ALOGD("_Z21rgnmv_weighted_filterP7RGNMV_Sii() called");
    return 0;
}

/* Demangled: Eis30Core::FreqCalc(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core8FreqCalcEPfS0_(void) {
    ALOGD("_ZN9Eis30Core8FreqCalcEPfS0_() called");
    return 0;
}

/* Demangled: EisPlusCore::GetCameraShake(EIS_PLUS_CORE_COEF_PARA_STRUCT*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCTh(void) {
    ALOGD("_ZN11EisPlusCore14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCTh() called");
    return 0;
}

/* Demangled: AppEisPlus::EisPlusMain(EIS_PLUS_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN10AppEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreGetGyroInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore26EisPlusCoreGetGyroInfoAddrEv(void) {
    ALOGD("_ZN11EisPlusCore26EisPlusCoreGetGyroInfoAddrEv() called");
    return 0;
}

/* Demangled: EisPlusCore::get_one_frame_mv(unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore16get_one_frame_mvEPhii(void) {
    ALOGD("_ZN11EisPlusCore16get_one_frame_mvEPhii() called");
    return 0;
}

/* Demangled: eis1_time_display(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z17eis1_time_displayiPKc(void) {
    ALOGD("_Z17eis1_time_displayiPKc() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreMain() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core13Eis12CoreMainEv(void) {
    ALOGD("_ZN9Eis12Core13Eis12CoreMainEv() called");
    return 0;
}

/* Demangled: EisPlusCore::smoothCurve(float*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore11smoothCurveEPff(void) {
    ALOGD("_ZN11EisPlusCore11smoothCurveEPff() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreInitProcInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core21Eis30CoreInitProcInfoEv(void) {
    ALOGD("_ZN9Eis30Core21Eis30CoreInitProcInfoEv() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: Eis30Core::EISinvf(int, int, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core7EISinvfEiiPKd(void) {
    ALOGD("_ZN9Eis30Core7EISinvfEiiPKd() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: AppEis::EisInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEis7EisInitEPv(void) {
    ALOGD("_ZN6AppEis7EisInitEPv() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreSaveLog(EIS25_CORE_SAVE_LOG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core16Eis25CoreSaveLogEP26EIS25_CORE_SAVE_LOG_STRUCT(void) {
    ALOGD("_ZN9Eis25Core16Eis25CoreSaveLogEP26EIS25_CORE_SAVE_LOG_STRUCT() called");
    return 0;
}

/* Demangled: EisPlusCore::GyroStillCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore14GyroStillCheckEv(void) {
    ALOGD("_ZN11EisPlusCore14GyroStillCheckEv() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreInitProcInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore23EisPlusCoreInitProcInfoEv(void) {
    ALOGD("_ZN11EisPlusCore23EisPlusCoreInitProcInfoEv() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11CoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core14Eis11CoreResetEv(void) {
    ALOGD("_ZN9Eis11Core14Eis11CoreResetEv() called");
    return 0;
}

/* Demangled: MTKEis::EisReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEis8EisResetEv(void) {
    ALOGD("_ZN6MTKEis8EisResetEv() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreSetWorkingBuf(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core22Eis12CoreSetWorkingBufEPh(void) {
    ALOGD("_ZN9Eis12Core22Eis12CoreSetWorkingBufEPh() called");
    return 0;
}

/* Demangled: SetWorkingBuf(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z13SetWorkingBufPh(void) {
    ALOGD("_Z13SetWorkingBufPh() called");
    return 0;
}

/* Demangled: Eis30Core::PostDeSkew(EIS30_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core10PostDeSkewEP27EIS30_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis30Core10PostDeSkewEP27EIS30_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Demangled: Eis12Core::destroyInstance(Eis12Core*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core15destroyInstanceEPS_(void) {
    ALOGD("_ZN9Eis12Core15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: EisPlusCore::~EisPlusCore() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCoreD2Ev(void) {
    ALOGD("_ZN11EisPlusCoreD2Ev() called");
    return 0;
}

/* Demangled: Eis25Core::ShakeDeviceDetect(float*, int, float*, signed char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core17ShakeDeviceDetectEPfiS0_Pa(void) {
    ALOGD("_ZN9Eis25Core17ShakeDeviceDetectEPfiS0_Pa() called");
    return 0;
}

/* Exported Object: vtable for EisPlusCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV11EisPlusCore = NULL;

/* Demangled: Eis12Core::affine(int const*, int const*, int*, int*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core6affineEPKiS1_PiS2_iS2_Pf(void) {
    ALOGD("_ZN9Eis12Core6affineEPKiS1_PiS2_iS2_Pf() called");
    return 0;
}

/* Demangled: Eis30Core::GetMVtoHomoCoef(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15GetMVtoHomoCoefEPfS0_(void) {
    ALOGD("_ZN9Eis30Core15GetMVtoHomoCoefEPfS0_() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCore() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCoreC1Ev(void) {
    ALOGD("_ZN11EisPlusCoreC1Ev() called");
    return 0;
}

/* Demangled: Eis25Core::smoothCurve(float*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core11smoothCurveEPff(void) {
    ALOGD("_ZN9Eis25Core11smoothCurveEPff() called");
    return 0;
}

/* Demangled: Eis25Core::get_one_frame_mv(unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core16get_one_frame_mvEPhii(void) {
    ALOGD("_ZN9Eis25Core16get_one_frame_mvEPhii() called");
    return 0;
}

/* Demangled: Eis30Core::BoundaryProtection_Grid(int (*) [2], int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core23BoundaryProtection_GridEPA2_ii(void) {
    ALOGD("_ZN9Eis30Core23BoundaryProtection_GridEPA2_ii() called");
    return 0;
}

/* Demangled: Eis11Core::~Eis11Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11CoreD1Ev(void) {
    ALOGD("_ZN9Eis11CoreD1Ev() called");
    return 0;
}

/* Demangled: EisPlusCore::Calc_R_Square(float (*) [6], float (*) [6], int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore13Calc_R_SquareEPA6_fS1_PiPfS3_(void) {
    ALOGD("_ZN11EisPlusCore13Calc_R_SquareEPA6_fS1_PiPfS3_() called");
    return 0;
}

/* Demangled: Eis30Core::GetMVtoOneHomoCoef(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core18GetMVtoOneHomoCoefEPfS0_(void) {
    ALOGD("_ZN9Eis30Core18GetMVtoOneHomoCoefEPfS0_() called");
    return 0;
}

/* Demangled: MTKEisPlus::EisPlusReset() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKEisPlus12EisPlusResetEv(void) {
    ALOGD("_ZN10MTKEisPlus12EisPlusResetEv() called");
    return 0;
}

/* Exported Object: vtable for Eis11Core */
extern "C" __attribute__((visibility("default"))) void* _ZTV9Eis11Core = NULL;

/* Demangled: Eis11Core::Eis11CoreMain(EIS_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core13Eis11CoreMainEP22EIS_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN9Eis11Core13Eis11CoreMainEP22EIS_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: eis1_time_diff(int*, timeval, timeval) */
extern "C" __attribute__((visibility("default"))) int _Z14eis1_time_diffPi7timevalS0_(void) {
    ALOGD("_Z14eis1_time_diffPi7timevalS0_() called");
    return 0;
}

/* Demangled: calculate_major_mv(MVEC*, int*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18calculate_major_mvP4MVECPiiii(void) {
    ALOGD("_Z18calculate_major_mvP4MVECPiiii() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreGetMultiScaleAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core26Eis25CoreGetMultiScaleAddrEv(void) {
    ALOGD("_ZN9Eis25Core26Eis25CoreGetMultiScaleAddrEv() called");
    return 0;
}

/* Demangled: control_point_interpolation_bypass(int*, int*, int, int, int (*) [2], int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z34control_point_interpolation_bypassPiS_iiPA2_iiiiiiiii(void) {
    ALOGD("_Z34control_point_interpolation_bypassPiS_iiPA2_iiiiiiiii() called");
    return 0;
}

/* Demangled: Eis25Core::FIR_filter(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core10FIR_filterEPf(void) {
    ALOGD("_ZN9Eis25Core10FIR_filterEPf() called");
    return 0;
}

/* Demangled: Eis30Core::~Eis30Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30CoreD2Ev(void) {
    ALOGD("_ZN9Eis30CoreD2Ev() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreGetGyroInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core24Eis25CoreGetGyroInfoAddrEv(void) {
    ALOGD("_ZN9Eis25Core24Eis25CoreGetGyroInfoAddrEv() called");
    return 0;
}

/* Demangled: Eis30Core::CalCompensation(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15CalCompensationEPfS0_S0_(void) {
    ALOGD("_ZN9Eis30Core15CalCompensationEPfS0_S0_() called");
    return 0;
}

/* Demangled: AppEisPlus::~AppEisPlus() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlusD1Ev(void) {
    ALOGD("_ZN10AppEisPlusD1Ev() called");
    return 0;
}

/* Demangled: EisPlusCore::FeaturePointMatch() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore17FeaturePointMatchEv(void) {
    ALOGD("_ZN11EisPlusCore17FeaturePointMatchEv() called");
    return 0;
}

/* Demangled: AppEis::~AppEis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEisD1Ev(void) {
    ALOGD("_ZN6AppEisD1Ev() called");
    return 0;
}

/* Demangled: MTKEis::~MTKEis() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEisD2Ev(void) {
    ALOGD("_ZN6MTKEisD2Ev() called");
    return 0;
}

/* Demangled: Eis11Core::PanDetect(int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core9PanDetectEiiRiS0_(void) {
    ALOGD("_ZN9Eis11Core9PanDetectEiiRiS0_() called");
    return 0;
}

/* Demangled: Eis12Core::affine_final(int const*, int const*, int*, int*, int, int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core12affine_finalEPKiS1_PiS2_iS2_PfS3_(void) {
    ALOGD("_ZN9Eis12Core12affine_finalEPKiS1_PiS2_iS2_PfS3_() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: AppEisPlus::EisPlusGetHWFE(EIS25_FE_INFO_STRUCT) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus14EisPlusGetHWFEE20EIS25_FE_INFO_STRUCT(void) {
    ALOGD("_ZN10AppEisPlus14EisPlusGetHWFEE20EIS25_FE_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreGetProcInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core24Eis30CoreGetProcInfoAddrEv(void) {
    ALOGD("_ZN9Eis30Core24Eis30CoreGetProcInfoAddrEv() called");
    return 0;
}

/* Demangled: Eis12Core::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core11getInstanceEv(void) {
    ALOGD("_ZN9Eis12Core11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKEis::EisInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEis7EisInitEPv(void) {
    ALOGD("_ZN6MTKEis7EisInitEPv() called");
    return 0;
}

/* Demangled: EisCheckTuningParamRange(EIS_TUNING_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24EisCheckTuningParamRangeP22EIS_TUNING_PARA_STRUCT(void) {
    ALOGD("_Z24EisCheckTuningParamRangeP22EIS_TUNING_PARA_STRUCT() called");
    return 0;
}

/* Demangled: rounding_divide(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z15rounding_divideii(void) {
    ALOGD("_Z15rounding_divideii() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: rsc_process_one_frame(float*, int*, int*, int (*) [17632], int (*) [2], int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21rsc_process_one_framePfPiS0_PA17632_iPA2_iiiiiiii(void) {
    ALOGD("_Z21rsc_process_one_framePfPiS0_PA17632_iPA2_iiiiiiii() called");
    return 0;
}

/* Demangled: MTKEis::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEis14createInstanceEv(void) {
    ALOGD("_ZN6MTKEis14createInstanceEv() called");
    return 0;
}

/* Demangled: Eis30Core::ScalingFallback() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15ScalingFallbackEv(void) {
    ALOGD("_ZN9Eis30Core15ScalingFallbackEv() called");
    return 0;
}

/* Demangled: Eis25Core::GetCameraShake(EIS25_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core14GetCameraShakeEP27EIS25_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis25Core14GetCameraShakeEP27EIS25_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: Eis30Core::get_one_frame_mv(unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core16get_one_frame_mvEPhii(void) {
    ALOGD("_ZN9Eis30Core16get_one_frame_mvEPhii() called");
    return 0;
}

/* Demangled: model_generation(MVEC*, MCOEF, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16model_generationP4MVEC5MCOEFiiiii(void) {
    ALOGD("_Z16model_generationP4MVEC5MCOEFiiiii() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25CoreC2Ev(void) {
    ALOGD("_ZN9Eis25CoreC2Ev() called");
    return 0;
}

/* Demangled: Eis25Core::~Eis25Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25CoreD0Ev(void) {
    ALOGD("_ZN9Eis25CoreD0Ev() called");
    return 0;
}

/* Demangled: EisPlusCore::MemoryShift() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore11MemoryShiftEv(void) {
    ALOGD("_ZN11EisPlusCore11MemoryShiftEv() called");
    return 0;
}

/* Demangled: Eis25Core::MemoryShift() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core11MemoryShiftEv(void) {
    ALOGD("_ZN9Eis25Core11MemoryShiftEv() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreGetMultiScaleAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core26Eis30CoreGetMultiScaleAddrEv(void) {
    ALOGD("_ZN9Eis30Core26Eis30CoreGetMultiScaleAddrEv() called");
    return 0;
}

/* Demangled: Eis30Core::AroundMotionDet(float*, float*, float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15AroundMotionDetEPfS0_S0_S0_i(void) {
    ALOGD("_ZN9Eis30Core15AroundMotionDetEPfS0_S0_S0_i() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreSaveLog(EIS_PLUS_CORE_SAVE_LOG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core16Eis12CoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT(void) {
    ALOGD("_ZN9Eis12Core16Eis12CoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT() called");
    return 0;
}

/* Demangled: Eis30Core::destroyInstance(Eis30Core*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15destroyInstanceEPS_(void) {
    ALOGD("_ZN9Eis30Core15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: Eis25CheckTuningParamRange(EIS25_TUNING_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z26Eis25CheckTuningParamRangeP24EIS25_TUNING_PARA_STRUCT(void) {
    ALOGD("_Z26Eis25CheckTuningParamRangeP24EIS25_TUNING_PARA_STRUCT() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: Eis25Core::BoundaryProtection_Grid(EIS25_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core23BoundaryProtection_GridEP27EIS25_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis25Core23BoundaryProtection_GridEP27EIS25_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Demangled: Eis11Core::Eis11CoreInit(EIS_SET_ENV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core13Eis11CoreInitEP23EIS_SET_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN9Eis11Core13Eis11CoreInitEP23EIS_SET_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis30Core::GetAverageShake() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15GetAverageShakeEv(void) {
    ALOGD("_ZN9Eis30Core15GetAverageShakeEv() called");
    return 0;
}

/* Demangled: Eis25Core::FIR13_filter(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core12FIR13_filterEPf(void) {
    ALOGD("_ZN9Eis25Core12FIR13_filterEPf() called");
    return 0;
}

/* Demangled: EisPlusCheckTuningParamRange(EIS_PLUS_TUNING_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z28EisPlusCheckTuningParamRangeP27EIS_PLUS_TUNING_PARA_STRUCT(void) {
    ALOGD("_Z28EisPlusCheckTuningParamRangeP27EIS_PLUS_TUNING_PARA_STRUCT() called");
    return 0;
}

/* Demangled: AppEisPlus::SaveParamToFile(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus15SaveParamToFileEjPv(void) {
    ALOGD("_ZN10AppEisPlus15SaveParamToFileEjPv() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreMain() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core13Eis25CoreMainEv(void) {
    ALOGD("_ZN9Eis25Core13Eis25CoreMainEv() called");
    return 0;
}

/* Demangled: Eis25Core::RegionMotion() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core12RegionMotionEv(void) {
    ALOGD("_ZN9Eis25Core12RegionMotionEv() called");
    return 0;
}

/* Demangled: Eis25Core::GetAverageShake() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core15GetAverageShakeEv(void) {
    ALOGD("_ZN9Eis25Core15GetAverageShakeEv() called");
    return 0;
}

/* Demangled: EisPlusCore::CalcEisGmvConf() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore14CalcEisGmvConfEv(void) {
    ALOGD("_ZN11EisPlusCore14CalcEisGmvConfEv() called");
    return 0;
}

/* Demangled: control_point_interpolation(int*, int*, int, int, int (*) [2], int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z27control_point_interpolationPiS_iiPA2_iiiiiiiii(void) {
    ALOGD("_Z27control_point_interpolationPiS_iiPA2_iiiiiiiii() called");
    return 0;
}

/* Demangled: Eis12Core::~Eis12Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12CoreD0Ev(void) {
    ALOGD("_ZN9Eis12CoreD0Ev() called");
    return 0;
}

/* Demangled: EisPlusCore::GetAffineCoef() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore13GetAffineCoefEv(void) {
    ALOGD("_ZN11EisPlusCore13GetAffineCoefEv() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreSetWorkingBuf(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore24EisPlusCoreSetWorkingBufEPh(void) {
    ALOGD("_ZN11EisPlusCore24EisPlusCoreSetWorkingBufEPh() called");
    return 0;
}

/* Demangled: Eis25Core::affine_region(float const*, float const*, float*, float*, int, int*, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core13affine_regionEPKfS1_PfS2_iPiS3_S2_(void) {
    ALOGD("_ZN9Eis25Core13affine_regionEPKfS1_PfS2_iPiS3_S2_() called");
    return 0;
}

/* Demangled: Eis25Core::~Eis25Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25CoreD2Ev(void) {
    ALOGD("_ZN9Eis25CoreD2Ev() called");
    return 0;
}

/* Demangled: Eis11Core::LMV_MINSAD() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis11Core10LMV_MINSADEv(void) {
    ALOGD("_ZN9Eis11Core10LMV_MINSADEv() called");
    return 0;
}

/* Demangled: Eis25Core::affine_final(float const*, float const*, float*, float*, int, int*, float*, float*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core12affine_finalEPKfS1_PfS2_iPiS2_S2_b(void) {
    ALOGD("_ZN9Eis25Core12affine_finalEPKfS1_PfS2_iPiS2_S2_b() called");
    return 0;
}

/* Demangled: EisPlusCore::EisPlusCoreQueryWorkingBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore30EisPlusCoreQueryWorkingBufSizeEv(void) {
    ALOGD("_ZN11EisPlusCore30EisPlusCoreQueryWorkingBufSizeEv() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreGetFinalCoeffAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core26Eis30CoreGetFinalCoeffAddrEv(void) {
    ALOGD("_ZN9Eis30Core26Eis30CoreGetFinalCoeffAddrEv() called");
    return 0;
}

/* Exported Object: vtable for Eis25Core */
extern "C" __attribute__((visibility("default"))) void* _ZTV9Eis25Core = NULL;

/* Exported Object: vtable for Eis30Core */
extern "C" __attribute__((visibility("default"))) void* _ZTV9Eis30Core = NULL;

/* Demangled: Eis30Core::Eis30CoreGetTuningParaAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core26Eis30CoreGetTuningParaAddrEv(void) {
    ALOGD("_ZN9Eis30Core26Eis30CoreGetTuningParaAddrEv() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core14Eis30CoreResetEv(void) {
    ALOGD("_ZN9Eis30Core14Eis30CoreResetEv() called");
    return 0;
}

/* Demangled: Eis25Core::CalAffineAcc(float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core12CalAffineAccEPfS0_S0_(void) {
    ALOGD("_ZN9Eis25Core12CalAffineAccEPfS0_S0_() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: Eis30Core::ForegroundCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core15ForegroundCheckEv(void) {
    ALOGD("_ZN9Eis30Core15ForegroundCheckEv() called");
    return 0;
}

/* Demangled: Eis25Core::FreqCalc(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core8FreqCalcEPfS0_(void) {
    ALOGD("_ZN9Eis25Core8FreqCalcEPfS0_() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreGetLogBufAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core22Eis30CoreGetLogBufAddrEv(void) {
    ALOGD("_ZN9Eis30Core22Eis30CoreGetLogBufAddrEv() called");
    return 0;
}

/* Demangled: EisPlusCore::affine_final(int const*, int const*, int*, int*, int, int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore12affine_finalEPKiS1_PiS2_iS2_PfS3_(void) {
    ALOGD("_ZN11EisPlusCore12affine_finalEPKiS1_PiS2_iS2_PfS3_() called");
    return 0;
}

/* Demangled: Eis25Core::FreqCalc1(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core9FreqCalc1EPfS0_(void) {
    ALOGD("_ZN9Eis25Core9FreqCalc1EPfS0_() called");
    return 0;
}

/* Demangled: Eis30Core::get_one_frame_mv_rsc(unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core20get_one_frame_mv_rscEPhS0_ii(void) {
    ALOGD("_ZN9Eis30Core20get_one_frame_mv_rscEPhS0_ii() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreGetGyroInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core24Eis30CoreGetGyroInfoAddrEv(void) {
    ALOGD("_ZN9Eis30Core24Eis30CoreGetGyroInfoAddrEv() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25CoreC1Ev(void) {
    ALOGD("_ZN9Eis25CoreC1Ev() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: AppEisPlus::EisPlusGetResult(EIS_PLUS_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus16EisPlusGetResultEP27EIS_PLUS_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN10AppEisPlus16EisPlusGetResultEP27EIS_PLUS_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: AppEisPlus::EisPlusSetProcInfo(EIS_PLUS_SET_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppEisPlus18EisPlusSetProcInfoEP29EIS_PLUS_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN10AppEisPlus18EisPlusSetProcInfoEP29EIS_PLUS_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12CoreC1Ev(void) {
    ALOGD("_ZN9Eis12CoreC1Ev() called");
    return 0;
}

/* Demangled: MTKEis::EisMain(EIS_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKEis7EisMainEP22EIS_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN6MTKEis7EisMainEP22EIS_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis30Core::RotationFallback() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core16RotationFallbackEv(void) {
    ALOGD("_ZN9Eis30Core16RotationFallbackEv() called");
    return 0;
}

/* Demangled: AppEis::AppEis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEisC2Ev(void) {
    ALOGD("_ZN6AppEisC2Ev() called");
    return 0;
}

/* Demangled: Eis12Core::Eis12CoreQueryWorkingBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core28Eis12CoreQueryWorkingBufSizeEv(void) {
    ALOGD("_ZN9Eis12Core28Eis12CoreQueryWorkingBufSizeEv() called");
    return 0;
}

/* Demangled: Eis30Core::~Eis30Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30CoreD1Ev(void) {
    ALOGD("_ZN9Eis30CoreD1Ev() called");
    return 0;
}

/* Demangled: Eis12Core::~Eis12Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12CoreD1Ev(void) {
    ALOGD("_ZN9Eis12CoreD1Ev() called");
    return 0;
}

/* Demangled: AppEis::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppEis11getInstanceEv(void) {
    ALOGD("_ZN6AppEis11getInstanceEv() called");
    return 0;
}

/* Demangled: Eis30Core::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core11getInstanceEv(void) {
    ALOGD("_ZN9Eis30Core11getInstanceEv() called");
    return 0;
}

/* Demangled: QueryWorkingBufSize() */
extern "C" __attribute__((visibility("default"))) int _Z19QueryWorkingBufSizev(void) {
    ALOGD("_Z19QueryWorkingBufSizev() called");
    return 0;
}

/* Exported Object: vtable for Eis12Core */
extern "C" __attribute__((visibility("default"))) void* _ZTV9Eis12Core = NULL;

/* Demangled: EisPlusCore::EisPlusCoreGetTuningParaAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN11EisPlusCore28EisPlusCoreGetTuningParaAddrEv(void) {
    ALOGD("_ZN11EisPlusCore28EisPlusCoreGetTuningParaAddrEv() called");
    return 0;
}

/* Demangled: Eis12Core::MemoryShift() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core11MemoryShiftEv(void) {
    ALOGD("_ZN9Eis12Core11MemoryShiftEv() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30CoreRSCMV(EIS30_CORE_RSC_MV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core14Eis30CoreRSCMVEP29EIS30_CORE_RSC_MV_INFO_STRUCT(void) {
    ALOGD("_ZN9Eis30Core14Eis30CoreRSCMVEP29EIS30_CORE_RSC_MV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core14Eis25CoreResetEv(void) {
    ALOGD("_ZN9Eis25Core14Eis25CoreResetEv() called");
    return 0;
}

/* Demangled: Eis25Core::Eis25CoreInitProcInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core21Eis25CoreInitProcInfoEv(void) {
    ALOGD("_ZN9Eis25Core21Eis25CoreInitProcInfoEv() called");
    return 0;
}

/* Demangled: Eis30Core::Eis30Core() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30CoreC1Ev(void) {
    ALOGD("_ZN9Eis30CoreC1Ev() called");
    return 0;
}

/* Demangled: Eis12Core::CalcEisGmvConf() */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core14CalcEisGmvConfEv(void) {
    ALOGD("_ZN9Eis12Core14CalcEisGmvConfEv() called");
    return 0;
}

/* Demangled: Eis30Core::SkewBoundaryProtection_Grid(EIS30_CORE_COEF_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis30Core27SkewBoundaryProtection_GridEP27EIS30_CORE_COEF_PARA_STRUCT(void) {
    ALOGD("_ZN9Eis30Core27SkewBoundaryProtection_GridEP27EIS30_CORE_COEF_PARA_STRUCT() called");
    return 0;
}

/* Demangled: Eis12Core::BoundaryProtection(float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis12Core18BoundaryProtectionEPf(void) {
    ALOGD("_ZN9Eis12Core18BoundaryProtectionEPf() called");
    return 0;
}

/* Demangled: Eis25Core::affine(float const*, float const*, float*, float*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN9Eis25Core6affineEPKfS1_PfS2_iPiS2_(void) {
    ALOGD("_ZN9Eis25Core6affineEPKfS1_PfS2_iPiS2_() called");
    return 0;
}
