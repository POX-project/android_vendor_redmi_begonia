/*
 * Reverse-Engineered ABI Specification for: libcamalgo.eis.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.eis.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_EIS_H
#define BEGONIA_RE_LIBCAMALGO_EIS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9Eis11Core10LMV_2NDLMVEv */
/* Demangled: Eis11Core::LMV_2NDLMV() */
int _ZN9Eis11Core10LMV_2NDLMVEv(void);

/* Symbol: _ZN9Eis25Core14MarginHandlingEP27EIS25_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis25Core::MarginHandling(EIS25_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis25Core14MarginHandlingEP27EIS25_CORE_COEF_PARA_STRUCT(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _ZN10AppEisPlus11EisPlusInitEPv */
/* Demangled: AppEisPlus::EisPlusInit(void*) */
int _ZN10AppEisPlus11EisPlusInitEPv(void);

/* Symbol: _ZN9Eis25Core28Eis25CoreQueryWorkingBufSizeEv */
/* Demangled: Eis25Core::Eis25CoreQueryWorkingBufSize() */
int _ZN9Eis25Core28Eis25CoreQueryWorkingBufSizeEv(void);

/* Symbol: _ZN11EisPlusCore16EisPlusCoreResetEv */
/* Demangled: EisPlusCore::EisPlusCoreReset() */
int _ZN11EisPlusCore16EisPlusCoreResetEv(void);

/* Symbol: _ZN9Eis11Core11getInstanceEv */
/* Demangled: Eis11Core::getInstance() */
int _ZN9Eis11Core11getInstanceEv(void);

/* Symbol: _ZN9Eis25Core24Eis25CoreGetProcInfoAddrEv */
/* Demangled: Eis25Core::Eis25CoreGetProcInfoAddr() */
int _ZN9Eis25Core24Eis25CoreGetProcInfoAddrEv(void);

/* Symbol: _ZN9Eis30Core16Eis30CoreSaveLogEP26EIS30_CORE_SAVE_LOG_STRUCT */
/* Demangled: Eis30Core::Eis30CoreSaveLog(EIS30_CORE_SAVE_LOG_STRUCT*) */
int _ZN9Eis30Core16Eis30CoreSaveLogEP26EIS30_CORE_SAVE_LOG_STRUCT(void);

/* Symbol: gSmoothVoteZone */
/* Demangled: gSmoothVoteZone */
extern void* gSmoothVoteZone;

/* Symbol: _ZN9Eis25Core26Eis25CoreGetFinalCoeffAddrEv */
/* Demangled: Eis25Core::Eis25CoreGetFinalCoeffAddr() */
int _ZN9Eis25Core26Eis25CoreGetFinalCoeffAddrEv(void);

/* Symbol: _ZN11EisPlusCore18BoundaryProtectionEPf */
/* Demangled: EisPlusCore::BoundaryProtection(float*) */
int _ZN11EisPlusCore18BoundaryProtectionEPf(void);

/* Symbol: _ZTV10MTKEisPlus */
/* Demangled: vtable for MTKEisPlus */
extern void* _ZTV10MTKEisPlus;

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: _ZN11EisPlusCoreD0Ev */
/* Demangled: EisPlusCore::~EisPlusCore() */
int _ZN11EisPlusCoreD0Ev(void);

/* Symbol: _ZN11EisPlusCore17GetGyroAffineCoefEv */
/* Demangled: EisPlusCore::GetGyroAffineCoef() */
int _ZN11EisPlusCore17GetGyroAffineCoefEv(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: _ZN9Eis11Core10LMV_CenterEv */
/* Demangled: Eis11Core::LMV_Center() */
int _ZN9Eis11Core10LMV_CenterEv(void);

/* Symbol: _ZN9Eis25Core9GisAffineEPKfS1_PfS2_iPiS2_ */
/* Demangled: Eis25Core::GisAffine(float const*, float const*, float*, float*, int, int*, float*) */
int _ZN9Eis25Core9GisAffineEPKfS1_PfS2_iPiS2_(void);

/* Symbol: _ZN9Eis30Core28Eis30CoreQueryWorkingBufSizeEv */
/* Demangled: Eis30Core::Eis30CoreQueryWorkingBufSize() */
int _ZN9Eis30Core28Eis30CoreQueryWorkingBufSizeEv(void);

/* Symbol: _ZN9Eis30Core16GetAffineCoef_BGEv */
/* Demangled: Eis30Core::GetAffineCoef_BG() */
int _ZN9Eis30Core16GetAffineCoef_BGEv(void);

/* Symbol: _ZN9Eis25Core14CalcEisGmvConfEv */
/* Demangled: Eis25Core::CalcEisGmvConf() */
int _ZN9Eis25Core14CalcEisGmvConfEv(void);

/* Symbol: _ZN9Eis11Core19Eis11CoreSetEisInfoEP24EIS_SET_PROC_INFO_STRUCT */
/* Demangled: Eis11Core::Eis11CoreSetEisInfo(EIS_SET_PROC_INFO_STRUCT*) */
int _ZN9Eis11Core19Eis11CoreSetEisInfoEP24EIS_SET_PROC_INFO_STRUCT(void);

/* Symbol: gWorkingBufferAddr */
/* Demangled: gWorkingBufferAddr */
extern void* gWorkingBufferAddr;

/* Symbol: _ZN11EisPlusCore17GyroHandholdCheckEv */
/* Demangled: EisPlusCore::GyroHandholdCheck() */
int _ZN11EisPlusCore17GyroHandholdCheckEv(void);

/* Symbol: _ZN6AppEis14EisFeatureCtrlEjPvS0_ */
/* Demangled: AppEis::EisFeatureCtrl(unsigned int, void*, void*) */
int _ZN6AppEis14EisFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN9Eis12Core14GyroStillCheckEv */
/* Demangled: Eis12Core::GyroStillCheck() */
int _ZN9Eis12Core14GyroStillCheckEv(void);

/* Symbol: _ZN9Eis30Core6affineEPKfS1_PfS2_iPiS2_ */
/* Demangled: Eis30Core::affine(float const*, float const*, float*, float*, int, int*, float*) */
int _ZN9Eis30Core6affineEPKfS1_PfS2_iPiS2_(void);

/* Symbol: _Z20region_mv_processingP4MVECS0_PiiiiiiiiiP7RGNMV_S */
/* Demangled: region_mv_processing(MVEC*, MVEC*, int*, int, int, int, int, int, int, int, int, RGNMV_S*) */
int _Z20region_mv_processingP4MVECS0_PiiiiiiiiiP7RGNMV_S(void);

/* Symbol: _ZN10MTKEisPlus14createInstanceEv */
/* Demangled: MTKEisPlus::createInstance() */
int _ZN10MTKEisPlus14createInstanceEv(void);

/* Symbol: _ZN10AppEisPlus18EisPlusFeatureCtrlEjPvS0_ */
/* Demangled: AppEisPlus::EisPlusFeatureCtrl(unsigned int, void*, void*) */
int _ZN10AppEisPlus18EisPlusFeatureCtrlEjPvS0_(void);

/* Symbol: gAbsoluteVoteZone */
/* Demangled: gAbsoluteVoteZone */
extern void* gAbsoluteVoteZone;

/* Symbol: _ZN11EisPlusCore13GyroAidedMainEPf */
/* Demangled: EisPlusCore::GyroAidedMain(float*) */
int _ZN11EisPlusCore13GyroAidedMainEPf(void);

/* Symbol: _ZN9Eis11Core6runCMVEv */
/* Demangled: Eis11Core::runCMV() */
int _ZN9Eis11Core6runCMVEv(void);

/* Symbol: _ZN9Eis11Core16EisAdjustVoteBoxEv */
/* Demangled: Eis11Core::EisAdjustVoteBox() */
int _ZN9Eis11Core16EisAdjustVoteBoxEv(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _ZN9Eis30Core18affine_translationEPKfS1_PfS2_iPiS2_S2_ */
/* Demangled: Eis30Core::affine_translation(float const*, float const*, float*, float*, int, int*, float*, float*) */
int _ZN9Eis30Core18affine_translationEPKfS1_PfS2_iPiS2_S2_(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: _ZN10MTKEisPlus15destroyInstanceEPS_ */
/* Demangled: MTKEisPlus::destroyInstance(MTKEisPlus*) */
int _ZN10MTKEisPlus15destroyInstanceEPS_(void);

/* Symbol: _ZN11EisPlusCore12CalAffineAccEPfS0_S0_ */
/* Demangled: EisPlusCore::CalAffineAcc(float*, float*, float*) */
int _ZN11EisPlusCore12CalAffineAccEPfS0_S0_(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _ZN10MTKEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT */
/* Demangled: MTKEisPlus::EisPlusMain(EIS_PLUS_RESULT_INFO_STRUCT*) */
int _ZN10MTKEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT(void);

/* Symbol: _ZN9Eis25Core15ForegroundCheckEv */
/* Demangled: Eis25Core::ForegroundCheck() */
int _ZN9Eis25Core15ForegroundCheckEv(void);

/* Symbol: _ZN9Eis30Core14MarginHandlingEP27EIS30_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis30Core::MarginHandling(EIS30_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis30Core14MarginHandlingEP27EIS30_CORE_COEF_PARA_STRUCT(void);

/* Symbol: _ZN9Eis25Core16RotationFallbackEv */
/* Demangled: Eis25Core::RotationFallback() */
int _ZN9Eis25Core16RotationFallbackEv(void);

/* Symbol: _ZN9Eis11Core14LMV_TrustValueEv */
/* Demangled: Eis11Core::LMV_TrustValue() */
int _ZN9Eis11Core14LMV_TrustValueEv(void);

/* Symbol: _ZN9Eis25Core17GetGyroAffineCoefEv */
/* Demangled: Eis25Core::GetGyroAffineCoef() */
int _ZN9Eis25Core17GetGyroAffineCoefEv(void);

/* Symbol: _ZN11EisPlusCore16NormalShakeCheckEv */
/* Demangled: EisPlusCore::NormalShakeCheck() */
int _ZN11EisPlusCore16NormalShakeCheckEv(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _ZN9Eis30Core11IIRStrengthEPfS0_ */
/* Demangled: Eis30Core::IIRStrength(float*, float*) */
int _ZN9Eis30Core11IIRStrengthEPfS0_(void);

/* Symbol: _ZN9Eis30Core10SimilarityEPfS0_PiS0_i */
/* Demangled: Eis30Core::Similarity(float*, float*, int*, float*, int) */
int _ZN9Eis30Core10SimilarityEPfS0_PiS0_i(void);

/* Symbol: _ZN9Eis30Core9FreqCalc1EPfS0_ */
/* Demangled: Eis30Core::FreqCalc1(float*, float*) */
int _ZN9Eis30Core9FreqCalc1EPfS0_(void);

/* Symbol: _ZN10AppEisPlus13FW_BW_compareEP29EIS_PLUS_SET_PROC_INFO_STRUCT */
/* Demangled: AppEisPlus::FW_BW_compare(EIS_PLUS_SET_PROC_INFO_STRUCT*) */
int _ZN10AppEisPlus13FW_BW_compareEP29EIS_PLUS_SET_PROC_INFO_STRUCT(void);

/* Symbol: _ZN9Eis12Core13GyroAidedMainEPf */
/* Demangled: Eis12Core::GyroAidedMain(float*) */
int _ZN9Eis12Core13GyroAidedMainEPf(void);

/* Symbol: _ZN6AppEis8EisResetEv */
/* Demangled: AppEis::EisReset() */
int _ZN6AppEis8EisResetEv(void);

/* Symbol: _ZN9Eis12CoreC2Ev */
/* Demangled: Eis12Core::Eis12Core() */
int _ZN9Eis12CoreC2Ev(void);

/* Symbol: _ZN9Eis30Core17ShakeDeviceDetectEPfiS0_Pa */
/* Demangled: Eis30Core::ShakeDeviceDetect(float*, int, float*, signed char*) */
int _ZN9Eis30Core17ShakeDeviceDetectEPfiS0_Pa(void);

/* Symbol: _ZN9Eis11Core20Eis11CoreGetPlusInfoEP24EIS_GET_PLUS_INFO_STRUCT */
/* Demangled: Eis11Core::Eis11CoreGetPlusInfo(EIS_GET_PLUS_INFO_STRUCT*) */
int _ZN9Eis11Core20Eis11CoreGetPlusInfoEP24EIS_GET_PLUS_INFO_STRUCT(void);

/* Symbol: _ZN9Eis30Core14GetAffineCoef2Ev */
/* Demangled: Eis30Core::GetAffineCoef2() */
int _ZN9Eis30Core14GetAffineCoef2Ev(void);

/* Symbol: _Z26Eis30CheckTuningParamRangeP24EIS30_TUNING_PARA_STRUCT */
/* Demangled: Eis30CheckTuningParamRange(EIS30_TUNING_PARA_STRUCT*) */
int _Z26Eis30CheckTuningParamRangeP24EIS30_TUNING_PARA_STRUCT(void);

/* Symbol: _ZN9Eis30CoreC2Ev */
/* Demangled: Eis30Core::Eis30Core() */
int _ZN9Eis30CoreC2Ev(void);

/* Symbol: _ZN9Eis30Core14GetCameraShakeEP27EIS30_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis30Core::GetCameraShake(EIS30_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis30Core14GetCameraShakeEP27EIS30_CORE_COEF_PARA_STRUCT(void);

/* Symbol: _ZN9Eis30Core22Eis30CoreSetWorkingBufEPh */
/* Demangled: Eis30Core::Eis30CoreSetWorkingBuf(unsigned char*) */
int _ZN9Eis30Core22Eis30CoreSetWorkingBufEPh(void);

/* Symbol: _ZN10AppEisPlusC1Ev */
/* Demangled: AppEisPlus::AppEisPlus() */
int _ZN10AppEisPlusC1Ev(void);

/* Symbol: _ZN6AppEisC1Ev */
/* Demangled: AppEis::AppEis() */
int _ZN6AppEisC1Ev(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _ZN9Eis12Core12CalAffineAccEPfS0_S0_ */
/* Demangled: Eis12Core::CalAffineAcc(float*, float*, float*) */
int _ZN9Eis12Core12CalAffineAccEPfS0_S0_(void);

/* Symbol: _ZN9Eis30Core14Fov2RegionGridEPfPA2_i */
/* Demangled: Eis30Core::Fov2RegionGrid(float*, int (*) [2]) */
int _ZN9Eis30Core14Fov2RegionGridEPfPA2_i(void);

/* Symbol: _ZN9Eis12CoreD2Ev */
/* Demangled: Eis12Core::~Eis12Core() */
int _ZN9Eis12CoreD2Ev(void);

/* Symbol: _ZN9Eis11CoreC1Ev */
/* Demangled: Eis11Core::Eis11Core() */
int _ZN9Eis11CoreC1Ev(void);

/* Symbol: _ZN10AppEisPlusD2Ev */
/* Demangled: AppEisPlus::~AppEisPlus() */
int _ZN10AppEisPlusD2Ev(void);

/* Symbol: _ZN11EisPlusCore15EisPlusCoreMainEv */
/* Demangled: EisPlusCore::EisPlusCoreMain() */
int _ZN11EisPlusCore15EisPlusCoreMainEv(void);

/* Symbol: _ZN9Eis30Core23MotionHistogramAnalysisEv */
/* Demangled: Eis30Core::MotionHistogramAnalysis() */
int _ZN9Eis30Core23MotionHistogramAnalysisEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN9Eis12Core15CalCompensationEPfS0_S0_ */
/* Demangled: Eis12Core::CalCompensation(float*, float*, float*) */
int _ZN9Eis12Core15CalCompensationEPfS0_S0_(void);

/* Symbol: _ZN9Eis12Core11smoothCurveEPff */
/* Demangled: Eis12Core::smoothCurve(float*, float) */
int _ZN9Eis12Core11smoothCurveEPff(void);

/* Symbol: _ZN9Eis25Core22Eis25CoreSetWorkingBufEPh */
/* Demangled: Eis25Core::Eis25CoreSetWorkingBuf(unsigned char*) */
int _ZN9Eis25Core22Eis25CoreSetWorkingBufEPh(void);

/* Symbol: _ZN11EisPlusCoreC2Ev */
/* Demangled: EisPlusCore::EisPlusCore() */
int _ZN11EisPlusCoreC2Ev(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: _ZN9Eis11Core17CMV_VirtualSpringEv */
/* Demangled: Eis11Core::CMV_VirtualSpring() */
int _ZN9Eis11Core17CMV_VirtualSpringEv(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: _ZN9Eis11Core18Eis11CoreGetOriGMVEP19EIS_GMV_INFO_STRUCT */
/* Demangled: Eis11Core::Eis11CoreGetOriGMV(EIS_GMV_INFO_STRUCT*) */
int _ZN9Eis11Core18Eis11CoreGetOriGMVEP19EIS_GMV_INFO_STRUCT(void);

/* Symbol: _ZN11EisPlusCore14GyroErrorCheckEPf */
/* Demangled: EisPlusCore::GyroErrorCheck(float*) */
int _ZN11EisPlusCore14GyroErrorCheckEPf(void);

/* Symbol: _ZN9Eis30CoreD0Ev */
/* Demangled: Eis30Core::~Eis30Core() */
int _ZN9Eis30CoreD0Ev(void);

/* Symbol: _ZN11EisPlusCore11getInstanceEv */
/* Demangled: EisPlusCore::getInstance() */
int _ZN11EisPlusCore11getInstanceEv(void);

/* Symbol: _ZN10MTKEisPlus11EisPlusInitEPv */
/* Demangled: MTKEisPlus::EisPlusInit(void*) */
int _ZN10MTKEisPlus11EisPlusInitEPv(void);

/* Symbol: _ZN9Eis12Core24Eis12CoreGetProcInfoAddrEv */
/* Demangled: Eis12Core::Eis12CoreGetProcInfoAddr() */
int _ZN9Eis12Core24Eis12CoreGetProcInfoAddrEv(void);

/* Symbol: _ZN9Eis12Core14GyroErrorCheckEPf */
/* Demangled: Eis12Core::GyroErrorCheck(float*) */
int _ZN9Eis12Core14GyroErrorCheckEPf(void);

/* Symbol: _ZN9Eis25Core15CalCompensationEPfS0_S0_ */
/* Demangled: Eis25Core::CalCompensation(float*, float*, float*) */
int _ZN9Eis25Core15CalCompensationEPfS0_S0_(void);

/* Symbol: _ZN9Eis30Core11MemoryShiftEv */
/* Demangled: Eis30Core::MemoryShift() */
int _ZN9Eis30Core11MemoryShiftEv(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZN9Eis30Core13CalcHistogramEPA6_fPiiS2_PfS3_ */
/* Demangled: Eis30Core::CalcHistogram(float (*) [6], int*, int, int*, float*, float*) */
int _ZN9Eis30Core13CalcHistogramEPA6_fPiiS2_PfS3_(void);

/* Symbol: _ZN9Eis25Core26Eis25CoreGetTuningParaAddrEv */
/* Demangled: Eis25Core::Eis25CoreGetTuningParaAddr() */
int _ZN9Eis25Core26Eis25CoreGetTuningParaAddrEv(void);

/* Symbol: _ZN9Eis25Core23MotionHistogramAnalysisEv */
/* Demangled: Eis25Core::MotionHistogramAnalysis() */
int _ZN9Eis25Core23MotionHistogramAnalysisEv(void);

/* Symbol: _ZN6AppEis15destroyInstanceEP6MTKEis */
/* Demangled: AppEis::destroyInstance(MTKEis*) */
int _ZN6AppEis15destroyInstanceEP6MTKEis(void);

/* Symbol: _Z31control_point_interpolation_FSCPiS_iiPA2_iiiiiiiiiS_iS_ */
/* Demangled: control_point_interpolation_FSC(int*, int*, int, int, int (*) [2], int, int, int, int, int, int, int, int, int*, int, int*) */
int _Z31control_point_interpolation_FSCPiS_iiPA2_iiiiiiiiiS_iS_(void);

/* Symbol: _ZN10AppEisPlus12EisPlusResetEv */
/* Demangled: AppEisPlus::EisPlusReset() */
int _ZN10AppEisPlus12EisPlusResetEv(void);

/* Symbol: _Z12affgrid2gridPA2_iPfS0_iiii */
/* Demangled: affgrid2grid(int (*) [2], float*, int (*) [2], int, int, int, int) */
int _Z12affgrid2gridPA2_iPfS0_iiii(void);

/* Symbol: _ZN9Eis12Core17GyroHandholdCheckEv */
/* Demangled: Eis12Core::GyroHandholdCheck() */
int _ZN9Eis12Core17GyroHandholdCheckEv(void);

/* Symbol: _ZN11EisPlusCore15destroyInstanceEPS_ */
/* Demangled: EisPlusCore::destroyInstance(EisPlusCore*) */
int _ZN11EisPlusCore15destroyInstanceEPS_(void);

/* Symbol: _ZN9Eis12Core26Eis12CoreGetTuningParaAddrEv */
/* Demangled: Eis12Core::Eis12CoreGetTuningParaAddr() */
int _ZN9Eis12Core26Eis12CoreGetTuningParaAddrEv(void);

/* Symbol: _ZN9Eis12Core16NormalShakeCheckEv */
/* Demangled: Eis12Core::NormalShakeCheck() */
int _ZN9Eis12Core16NormalShakeCheckEv(void);

/* Symbol: _ZN9Eis11Core21Eis11CoreSetDebugInfoEP25EIS_SET_LOG_BUFFER_STRUCT */
/* Demangled: Eis11Core::Eis11CoreSetDebugInfo(EIS_SET_LOG_BUFFER_STRUCT*) */
int _ZN9Eis11Core21Eis11CoreSetDebugInfoEP25EIS_SET_LOG_BUFFER_STRUCT(void);

/* Symbol: _ZN10MTKEisPlusD0Ev */
/* Demangled: MTKEisPlus::~MTKEisPlus() */
int _ZN10MTKEisPlusD0Ev(void);

/* Symbol: _ZN9Eis30Core13GetAffineCoefEv */
/* Demangled: Eis30Core::GetAffineCoef() */
int _ZN9Eis30Core13GetAffineCoefEv(void);

/* Symbol: _ZTV10AppEisPlus */
/* Demangled: vtable for AppEisPlus */
extern void* _ZTV10AppEisPlus;

/* Symbol: _ZN6AppEisD2Ev */
/* Demangled: AppEis::~AppEis() */
int _ZN6AppEisD2Ev(void);

/* Symbol: _ZTV6MTKEis */
/* Demangled: vtable for MTKEis */
extern void* _ZTV6MTKEis;

/* Symbol: _ZN6MTKEis15destroyInstanceEPS_ */
/* Demangled: MTKEis::destroyInstance(MTKEis*) */
int _ZN6MTKEis15destroyInstanceEPS_(void);

/* Symbol: _ZN10AppEisPlus16SetInputFromFileEjPv */
/* Demangled: AppEisPlus::SetInputFromFile(unsigned int, void*) */
int _ZN10AppEisPlus16SetInputFromFileEjPv(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _ZN9Eis25Core22Eis25CoreGetLogBufAddrEv */
/* Demangled: Eis25Core::Eis25CoreGetLogBufAddr() */
int _ZN9Eis25Core22Eis25CoreGetLogBufAddrEv(void);

/* Symbol: _Z16affine_coeff_inv5MCOEF */
/* Demangled: affine_coeff_inv(MCOEF) */
int _Z16affine_coeff_inv5MCOEF(void);

/* Symbol: _ZN9Eis11CoreD2Ev */
/* Demangled: Eis11Core::~Eis11Core() */
int _ZN9Eis11CoreD2Ev(void);

/* Symbol: _Z12grid2affgridPA2_iPfS0_iiii */
/* Demangled: grid2affgrid(int (*) [2], float*, int (*) [2], int, int, int, int) */
int _Z12grid2affgridPA2_iPfS0_iiii(void);

/* Symbol: _ZN11EisPlusCore6affineEPKiS1_PiS2_iS2_Pf */
/* Demangled: EisPlusCore::affine(int const*, int const*, int*, int*, int, int*, float*) */
int _ZN11EisPlusCore6affineEPKiS1_PiS2_iS2_Pf(void);

/* Symbol: _ZN9Eis11Core11LMV_ClusterEv */
/* Demangled: Eis11Core::LMV_Cluster() */
int _ZN9Eis11Core11LMV_ClusterEv(void);

/* Symbol: _ZN10AppEisPlusD0Ev */
/* Demangled: AppEisPlus::~AppEisPlus() */
int _ZN10AppEisPlusD0Ev(void);

/* Symbol: _ZN9Eis30Core11translationEPKfS1_PfS2_iPiS2_ */
/* Demangled: Eis30Core::translation(float const*, float const*, float*, float*, int, int*, float*) */
int _ZN9Eis30Core11translationEPKfS1_PfS2_iPiS2_(void);

/* Symbol: _ZN10AppEisPlus15destroyInstanceEP10MTKEisPlus */
/* Demangled: AppEisPlus::destroyInstance(MTKEisPlus*) */
int _ZN10AppEisPlus15destroyInstanceEP10MTKEisPlus(void);

/* Symbol: _ZN9Eis25Core15ForegroundTraceEv */
/* Demangled: Eis25Core::ForegroundTrace() */
int _ZN9Eis25Core15ForegroundTraceEv(void);

/* Symbol: _ZN9Eis12Core14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis12Core::GetCameraShake(EIS_PLUS_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis12Core14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCT(void);

/* Symbol: _ZN6AppEisD0Ev */
/* Demangled: AppEis::~AppEis() */
int _ZN6AppEisD0Ev(void);

/* Symbol: _ZN9Eis11CoreC2Ev */
/* Demangled: Eis11Core::Eis11Core() */
int _ZN9Eis11CoreC2Ev(void);

/* Symbol: _ZN9Eis30Core12CalAffineAccEPfS0_S0_ */
/* Demangled: Eis30Core::CalAffineAcc(float*, float*, float*) */
int _ZN9Eis30Core12CalAffineAccEPfS0_S0_(void);

/* Symbol: _ZN9Eis12Core21Eis12CoreInitProcInfoEv */
/* Demangled: Eis12Core::Eis12CoreInitProcInfo() */
int _ZN9Eis12Core21Eis12CoreInitProcInfoEv(void);

/* Symbol: _ZN11EisPlusCore15CalCompensationEPfS0_S0_ */
/* Demangled: EisPlusCore::CalCompensation(float*, float*, float*) */
int _ZN11EisPlusCore15CalCompensationEPfS0_S0_(void);

/* Symbol: _ZN9Eis30Core10fov_affineEPKfS1_PfS2_iS2_ */
/* Demangled: Eis30Core::fov_affine(float const*, float const*, float*, float*, int, float*) */
int _ZN9Eis30Core10fov_affineEPKfS1_PfS2_iS2_(void);

/* Symbol: _ZN9Eis25Core18BoundaryProtectionEPf */
/* Demangled: Eis25Core::BoundaryProtection(float*) */
int _ZN9Eis25Core18BoundaryProtectionEPf(void);

/* Symbol: _ZN6AppEis7EisMainEP22EIS_RESULT_INFO_STRUCT */
/* Demangled: AppEis::EisMain(EIS_RESULT_INFO_STRUCT*) */
int _ZN6AppEis7EisMainEP22EIS_RESULT_INFO_STRUCT(void);

/* Symbol: _ZN9Eis25Core14GetAffineCoef4Ev */
/* Demangled: Eis25Core::GetAffineCoef4() */
int _ZN9Eis25Core14GetAffineCoef4Ev(void);

/* Symbol: _ZN9Eis25Core15ScalingFallbackEv */
/* Demangled: Eis25Core::ScalingFallback() */
int _ZN9Eis25Core15ScalingFallbackEv(void);

/* Symbol: _ZN9Eis11CoreD0Ev */
/* Demangled: Eis11Core::~Eis11Core() */
int _ZN9Eis11CoreD0Ev(void);

/* Symbol: _Z12mfloat2mcoefPf5MCOEF */
/* Demangled: mfloat2mcoef(float*, MCOEF) */
int _Z12mfloat2mcoefPf5MCOEF(void);

/* Symbol: _ZN10MTKEisPlusD2Ev */
/* Demangled: MTKEisPlus::~MTKEisPlus() */
int _ZN10MTKEisPlusD2Ev(void);

/* Symbol: _ZN9Eis30Core12affine_finalEPKfS1_PfS2_iPiS2_S2_i */
/* Demangled: Eis30Core::affine_final(float const*, float const*, float*, float*, int, int*, float*, float*, int) */
int _ZN9Eis30Core12affine_finalEPKfS1_PfS2_iPiS2_S2_i(void);

/* Symbol: _ZN11EisPlusCore18EisPlusCoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT */
/* Demangled: EisPlusCore::EisPlusCoreSaveLog(EIS_PLUS_CORE_SAVE_LOG_STRUCT*) */
int _ZN11EisPlusCore18EisPlusCoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT(void);

/* Symbol: _ZN10MTKEisPlus18EisPlusFeatureCtrlEjPvS0_ */
/* Demangled: MTKEisPlus::EisPlusFeatureCtrl(unsigned int, void*, void*) */
int _ZN10MTKEisPlus18EisPlusFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN9Eis25Core10SimilarityEPfS0_PiS0_ */
/* Demangled: Eis25Core::Similarity(float*, float*, int*, float*) */
int _ZN9Eis25Core10SimilarityEPfS0_PiS0_(void);

/* Symbol: _ZN9Eis25Core13GetAffineCoefEv */
/* Demangled: Eis25Core::GetAffineCoef() */
int _ZN9Eis25Core13GetAffineCoefEv(void);

/* Symbol: _ZN9Eis30Core15ForegroundTraceEv */
/* Demangled: Eis30Core::ForegroundTrace() */
int _ZN9Eis30Core15ForegroundTraceEv(void);

/* Symbol: _ZN9Eis30Core11smoothCurveEfi */
/* Demangled: Eis30Core::smoothCurve(float, int) */
int _ZN9Eis30Core11smoothCurveEfi(void);

/* Symbol: _ZN11EisPlusCore9GisAffineEPKfS1_PfS2_iPiS2_ */
/* Demangled: EisPlusCore::GisAffine(float const*, float const*, float*, float*, int, int*, float*) */
int _ZN11EisPlusCore9GisAffineEPKfS1_PfS2_iPiS2_(void);

/* Symbol: _Z23new_affine_optimizationP4MVECiiiPi */
/* Demangled: new_affine_optimization(MVEC*, int, int, int, int*) */
int _Z23new_affine_optimizationP4MVECiiiPi(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: _ZN9Eis30Core12FIR13_filterEPf */
/* Demangled: Eis30Core::FIR13_filter(float*) */
int _ZN9Eis30Core12FIR13_filterEPf(void);

/* Symbol: _ZN9Eis25Core11getInstanceEv */
/* Demangled: Eis25Core::getInstance() */
int _ZN9Eis25Core11getInstanceEv(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _ZN9Eis30Core13Eis30CoreMainEv */
/* Demangled: Eis30Core::Eis30CoreMain() */
int _ZN9Eis30Core13Eis30CoreMainEv(void);

/* Symbol: _ZN11EisPlusCoreD1Ev */
/* Demangled: EisPlusCore::~EisPlusCore() */
int _ZN11EisPlusCoreD1Ev(void);

/* Symbol: _ZN9Eis30Core15GetGyroHomoCoefEii */
/* Demangled: Eis30Core::GetGyroHomoCoef(int, int) */
int _ZN9Eis30Core15GetGyroHomoCoefEii(void);

/* Symbol: _ZN9Eis11Core6runGMVEv */
/* Demangled: Eis11Core::runGMV() */
int _ZN9Eis11Core6runGMVEv(void);

/* Symbol: _ZN10AppEisPlus11getInstanceEv */
/* Demangled: AppEisPlus::getInstance() */
int _ZN10AppEisPlus11getInstanceEv(void);

/* Symbol: _ZN9Eis30Core15Homo2RegionGridEPfPA2_i */
/* Demangled: Eis30Core::Homo2RegionGrid(float*, int (*) [2]) */
int _ZN9Eis30Core15Homo2RegionGridEPfPA2_i(void);

/* Symbol: _ZN10AppEisPlusC2Ev */
/* Demangled: AppEisPlus::AppEisPlus() */
int _ZN10AppEisPlusC2Ev(void);

/* Symbol: _ZN6MTKEisD0Ev */
/* Demangled: MTKEis::~MTKEis() */
int _ZN6MTKEisD0Ev(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN9Eis25CoreD1Ev */
/* Demangled: Eis25Core::~Eis25Core() */
int _ZN9Eis25CoreD1Ev(void);

/* Symbol: _ZN9Eis30Core10FIR_filterEPf */
/* Demangled: Eis30Core::FIR_filter(float*) */
int _ZN9Eis30Core10FIR_filterEPf(void);

/* Symbol: _ZN6MTKEis14EisFeatureCtrlEjPvS0_ */
/* Demangled: MTKEis::EisFeatureCtrl(unsigned int, void*, void*) */
int _ZN6MTKEis14EisFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN9Eis25Core15destroyInstanceEPS_ */
/* Demangled: Eis25Core::destroyInstance(Eis25Core*) */
int _ZN9Eis25Core15destroyInstanceEPS_(void);

/* Symbol: _ZN9Eis30Core19EISinverseMatrix4x4EPKdPd */
/* Demangled: Eis30Core::EISinverseMatrix4x4(double const*, double*) */
int _ZN9Eis30Core19EISinverseMatrix4x4EPKdPd(void);

/* Symbol: _Z20normal_mv_separationP4MVECPA17632_iS0_iiii */
/* Demangled: normal_mv_separation(MVEC*, int (*) [17632], MVEC*, int, int, int, int) */
int _Z20normal_mv_separationP4MVECPA17632_iS0_iiii(void);

/* Symbol: _ZN9Eis30Core7GisHomoEPKfS1_PfS2_iiiiPiS2_ */
/* Demangled: Eis30Core::GisHomo(float const*, float const*, float*, float*, int, int, int, int, int*, float*) */
int _ZN9Eis30Core7GisHomoEPKfS1_PfS2_iiiiPiS2_(void);

/* Symbol: _ZN9Eis11Core15destroyInstanceEPS_ */
/* Demangled: Eis11Core::destroyInstance(Eis11Core*) */
int _ZN9Eis11Core15destroyInstanceEPS_(void);

/* Symbol: _Z6affinePKiS0_PiS1_i */
/* Demangled: affine(int const*, int const*, int*, int*, int) */
int _Z6affinePKiS0_PiS1_i(void);

/* Symbol: _ZN9Eis12Core14Eis12CoreResetEv */
/* Demangled: Eis12Core::Eis12CoreReset() */
int _ZN9Eis12Core14Eis12CoreResetEv(void);

/* Symbol: _ZN11EisPlusCore26EisPlusCoreGetProcInfoAddrEv */
/* Demangled: EisPlusCore::EisPlusCoreGetProcInfoAddr() */
int _ZN11EisPlusCore26EisPlusCoreGetProcInfoAddrEv(void);

/* Symbol: _ZTV6AppEis */
/* Demangled: vtable for AppEis */
extern void* _ZTV6AppEis;

/* Symbol: _Z21rgnmv_weighted_filterP7RGNMV_Sii */
/* Demangled: rgnmv_weighted_filter(RGNMV_S*, int, int) */
int _Z21rgnmv_weighted_filterP7RGNMV_Sii(void);

/* Symbol: _ZN9Eis30Core8FreqCalcEPfS0_ */
/* Demangled: Eis30Core::FreqCalc(float*, float*) */
int _ZN9Eis30Core8FreqCalcEPfS0_(void);

/* Symbol: _ZN11EisPlusCore14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCTh */
/* Demangled: EisPlusCore::GetCameraShake(EIS_PLUS_CORE_COEF_PARA_STRUCT*, unsigned char) */
int _ZN11EisPlusCore14GetCameraShakeEP30EIS_PLUS_CORE_COEF_PARA_STRUCTh(void);

/* Symbol: _ZN10AppEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT */
/* Demangled: AppEisPlus::EisPlusMain(EIS_PLUS_RESULT_INFO_STRUCT*) */
int _ZN10AppEisPlus11EisPlusMainEP27EIS_PLUS_RESULT_INFO_STRUCT(void);

/* Symbol: _ZN11EisPlusCore26EisPlusCoreGetGyroInfoAddrEv */
/* Demangled: EisPlusCore::EisPlusCoreGetGyroInfoAddr() */
int _ZN11EisPlusCore26EisPlusCoreGetGyroInfoAddrEv(void);

/* Symbol: _ZN11EisPlusCore16get_one_frame_mvEPhii */
/* Demangled: EisPlusCore::get_one_frame_mv(unsigned char*, int, int) */
int _ZN11EisPlusCore16get_one_frame_mvEPhii(void);

/* Symbol: _Z17eis1_time_displayiPKc */
/* Demangled: eis1_time_display(int, char const*) */
int _Z17eis1_time_displayiPKc(void);

/* Symbol: _ZN9Eis12Core13Eis12CoreMainEv */
/* Demangled: Eis12Core::Eis12CoreMain() */
int _ZN9Eis12Core13Eis12CoreMainEv(void);

/* Symbol: _ZN11EisPlusCore11smoothCurveEPff */
/* Demangled: EisPlusCore::smoothCurve(float*, float) */
int _ZN11EisPlusCore11smoothCurveEPff(void);

/* Symbol: _ZN9Eis30Core21Eis30CoreInitProcInfoEv */
/* Demangled: Eis30Core::Eis30CoreInitProcInfo() */
int _ZN9Eis30Core21Eis30CoreInitProcInfoEv(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: _ZN9Eis30Core7EISinvfEiiPKd */
/* Demangled: Eis30Core::EISinvf(int, int, double const*) */
int _ZN9Eis30Core7EISinvfEiiPKd(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN6AppEis7EisInitEPv */
/* Demangled: AppEis::EisInit(void*) */
int _ZN6AppEis7EisInitEPv(void);

/* Symbol: _ZN9Eis25Core16Eis25CoreSaveLogEP26EIS25_CORE_SAVE_LOG_STRUCT */
/* Demangled: Eis25Core::Eis25CoreSaveLog(EIS25_CORE_SAVE_LOG_STRUCT*) */
int _ZN9Eis25Core16Eis25CoreSaveLogEP26EIS25_CORE_SAVE_LOG_STRUCT(void);

/* Symbol: _ZN11EisPlusCore14GyroStillCheckEv */
/* Demangled: EisPlusCore::GyroStillCheck() */
int _ZN11EisPlusCore14GyroStillCheckEv(void);

/* Symbol: _ZN11EisPlusCore23EisPlusCoreInitProcInfoEv */
/* Demangled: EisPlusCore::EisPlusCoreInitProcInfo() */
int _ZN11EisPlusCore23EisPlusCoreInitProcInfoEv(void);

/* Symbol: _ZN9Eis11Core14Eis11CoreResetEv */
/* Demangled: Eis11Core::Eis11CoreReset() */
int _ZN9Eis11Core14Eis11CoreResetEv(void);

/* Symbol: _ZN6MTKEis8EisResetEv */
/* Demangled: MTKEis::EisReset() */
int _ZN6MTKEis8EisResetEv(void);

/* Symbol: _ZN9Eis12Core22Eis12CoreSetWorkingBufEPh */
/* Demangled: Eis12Core::Eis12CoreSetWorkingBuf(unsigned char*) */
int _ZN9Eis12Core22Eis12CoreSetWorkingBufEPh(void);

/* Symbol: _Z13SetWorkingBufPh */
/* Demangled: SetWorkingBuf(unsigned char*) */
int _Z13SetWorkingBufPh(void);

/* Symbol: _ZN9Eis30Core10PostDeSkewEP27EIS30_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis30Core::PostDeSkew(EIS30_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis30Core10PostDeSkewEP27EIS30_CORE_COEF_PARA_STRUCT(void);

/* Symbol: _ZN9Eis12Core15destroyInstanceEPS_ */
/* Demangled: Eis12Core::destroyInstance(Eis12Core*) */
int _ZN9Eis12Core15destroyInstanceEPS_(void);

/* Symbol: _ZN11EisPlusCoreD2Ev */
/* Demangled: EisPlusCore::~EisPlusCore() */
int _ZN11EisPlusCoreD2Ev(void);

/* Symbol: _ZN9Eis25Core17ShakeDeviceDetectEPfiS0_Pa */
/* Demangled: Eis25Core::ShakeDeviceDetect(float*, int, float*, signed char*) */
int _ZN9Eis25Core17ShakeDeviceDetectEPfiS0_Pa(void);

/* Symbol: _ZTV11EisPlusCore */
/* Demangled: vtable for EisPlusCore */
extern void* _ZTV11EisPlusCore;

/* Symbol: _ZN9Eis12Core6affineEPKiS1_PiS2_iS2_Pf */
/* Demangled: Eis12Core::affine(int const*, int const*, int*, int*, int, int*, float*) */
int _ZN9Eis12Core6affineEPKiS1_PiS2_iS2_Pf(void);

/* Symbol: _ZN9Eis30Core15GetMVtoHomoCoefEPfS0_ */
/* Demangled: Eis30Core::GetMVtoHomoCoef(float*, float*) */
int _ZN9Eis30Core15GetMVtoHomoCoefEPfS0_(void);

/* Symbol: _ZN11EisPlusCoreC1Ev */
/* Demangled: EisPlusCore::EisPlusCore() */
int _ZN11EisPlusCoreC1Ev(void);

/* Symbol: _ZN9Eis25Core11smoothCurveEPff */
/* Demangled: Eis25Core::smoothCurve(float*, float) */
int _ZN9Eis25Core11smoothCurveEPff(void);

/* Symbol: _ZN9Eis25Core16get_one_frame_mvEPhii */
/* Demangled: Eis25Core::get_one_frame_mv(unsigned char*, int, int) */
int _ZN9Eis25Core16get_one_frame_mvEPhii(void);

/* Symbol: _ZN9Eis30Core23BoundaryProtection_GridEPA2_ii */
/* Demangled: Eis30Core::BoundaryProtection_Grid(int (*) [2], int) */
int _ZN9Eis30Core23BoundaryProtection_GridEPA2_ii(void);

/* Symbol: _ZN9Eis11CoreD1Ev */
/* Demangled: Eis11Core::~Eis11Core() */
int _ZN9Eis11CoreD1Ev(void);

/* Symbol: _ZN11EisPlusCore13Calc_R_SquareEPA6_fS1_PiPfS3_ */
/* Demangled: EisPlusCore::Calc_R_Square(float (*) [6], float (*) [6], int*, float*, float*) */
int _ZN11EisPlusCore13Calc_R_SquareEPA6_fS1_PiPfS3_(void);

/* Symbol: _ZN9Eis30Core18GetMVtoOneHomoCoefEPfS0_ */
/* Demangled: Eis30Core::GetMVtoOneHomoCoef(float*, float*) */
int _ZN9Eis30Core18GetMVtoOneHomoCoefEPfS0_(void);

/* Symbol: _ZN10MTKEisPlus12EisPlusResetEv */
/* Demangled: MTKEisPlus::EisPlusReset() */
int _ZN10MTKEisPlus12EisPlusResetEv(void);

/* Symbol: _ZTV9Eis11Core */
/* Demangled: vtable for Eis11Core */
extern void* _ZTV9Eis11Core;

/* Symbol: _ZN9Eis11Core13Eis11CoreMainEP22EIS_RESULT_INFO_STRUCT */
/* Demangled: Eis11Core::Eis11CoreMain(EIS_RESULT_INFO_STRUCT*) */
int _ZN9Eis11Core13Eis11CoreMainEP22EIS_RESULT_INFO_STRUCT(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _Z14eis1_time_diffPi7timevalS0_ */
/* Demangled: eis1_time_diff(int*, timeval, timeval) */
int _Z14eis1_time_diffPi7timevalS0_(void);

/* Symbol: _Z18calculate_major_mvP4MVECPiiii */
/* Demangled: calculate_major_mv(MVEC*, int*, int, int, int) */
int _Z18calculate_major_mvP4MVECPiiii(void);

/* Symbol: _ZN9Eis25Core26Eis25CoreGetMultiScaleAddrEv */
/* Demangled: Eis25Core::Eis25CoreGetMultiScaleAddr() */
int _ZN9Eis25Core26Eis25CoreGetMultiScaleAddrEv(void);

/* Symbol: _Z34control_point_interpolation_bypassPiS_iiPA2_iiiiiiiii */
/* Demangled: control_point_interpolation_bypass(int*, int*, int, int, int (*) [2], int, int, int, int, int, int, int, int) */
int _Z34control_point_interpolation_bypassPiS_iiPA2_iiiiiiiii(void);

/* Symbol: _ZN9Eis25Core10FIR_filterEPf */
/* Demangled: Eis25Core::FIR_filter(float*) */
int _ZN9Eis25Core10FIR_filterEPf(void);

/* Symbol: _ZN9Eis30CoreD2Ev */
/* Demangled: Eis30Core::~Eis30Core() */
int _ZN9Eis30CoreD2Ev(void);

/* Symbol: _ZN9Eis25Core24Eis25CoreGetGyroInfoAddrEv */
/* Demangled: Eis25Core::Eis25CoreGetGyroInfoAddr() */
int _ZN9Eis25Core24Eis25CoreGetGyroInfoAddrEv(void);

/* Symbol: _ZN9Eis30Core15CalCompensationEPfS0_S0_ */
/* Demangled: Eis30Core::CalCompensation(float*, float*, float*) */
int _ZN9Eis30Core15CalCompensationEPfS0_S0_(void);

/* Symbol: _ZN10AppEisPlusD1Ev */
/* Demangled: AppEisPlus::~AppEisPlus() */
int _ZN10AppEisPlusD1Ev(void);

/* Symbol: _ZN11EisPlusCore17FeaturePointMatchEv */
/* Demangled: EisPlusCore::FeaturePointMatch() */
int _ZN11EisPlusCore17FeaturePointMatchEv(void);

/* Symbol: _ZN6AppEisD1Ev */
/* Demangled: AppEis::~AppEis() */
int _ZN6AppEisD1Ev(void);

/* Symbol: _ZN6MTKEisD2Ev */
/* Demangled: MTKEis::~MTKEis() */
int _ZN6MTKEisD2Ev(void);

/* Symbol: _ZN9Eis11Core9PanDetectEiiRiS0_ */
/* Demangled: Eis11Core::PanDetect(int, int, int&, int&) */
int _ZN9Eis11Core9PanDetectEiiRiS0_(void);

/* Symbol: _ZN9Eis12Core12affine_finalEPKiS1_PiS2_iS2_PfS3_ */
/* Demangled: Eis12Core::affine_final(int const*, int const*, int*, int*, int, int*, float*, float*) */
int _ZN9Eis12Core12affine_finalEPKiS1_PiS2_iS2_PfS3_(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN10AppEisPlus14EisPlusGetHWFEE20EIS25_FE_INFO_STRUCT */
/* Demangled: AppEisPlus::EisPlusGetHWFE(EIS25_FE_INFO_STRUCT) */
int _ZN10AppEisPlus14EisPlusGetHWFEE20EIS25_FE_INFO_STRUCT(void);

/* Symbol: _ZN9Eis30Core24Eis30CoreGetProcInfoAddrEv */
/* Demangled: Eis30Core::Eis30CoreGetProcInfoAddr() */
int _ZN9Eis30Core24Eis30CoreGetProcInfoAddrEv(void);

/* Symbol: _ZN9Eis12Core11getInstanceEv */
/* Demangled: Eis12Core::getInstance() */
int _ZN9Eis12Core11getInstanceEv(void);

/* Symbol: _ZN6MTKEis7EisInitEPv */
/* Demangled: MTKEis::EisInit(void*) */
int _ZN6MTKEis7EisInitEPv(void);

/* Symbol: _Z24EisCheckTuningParamRangeP22EIS_TUNING_PARA_STRUCT */
/* Demangled: EisCheckTuningParamRange(EIS_TUNING_PARA_STRUCT*) */
int _Z24EisCheckTuningParamRangeP22EIS_TUNING_PARA_STRUCT(void);

/* Symbol: _Z15rounding_divideii */
/* Demangled: rounding_divide(int, int) */
int _Z15rounding_divideii(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _Z21rsc_process_one_framePfPiS0_PA17632_iPA2_iiiiiiii */
/* Demangled: rsc_process_one_frame(float*, int*, int*, int (*) [17632], int (*) [2], int, int, int, int, int, int, int) */
int _Z21rsc_process_one_framePfPiS0_PA17632_iPA2_iiiiiiii(void);

/* Symbol: _ZN6MTKEis14createInstanceEv */
/* Demangled: MTKEis::createInstance() */
int _ZN6MTKEis14createInstanceEv(void);

/* Symbol: _ZN9Eis30Core15ScalingFallbackEv */
/* Demangled: Eis30Core::ScalingFallback() */
int _ZN9Eis30Core15ScalingFallbackEv(void);

/* Symbol: _ZN9Eis25Core14GetCameraShakeEP27EIS25_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis25Core::GetCameraShake(EIS25_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis25Core14GetCameraShakeEP27EIS25_CORE_COEF_PARA_STRUCT(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN9Eis30Core16get_one_frame_mvEPhii */
/* Demangled: Eis30Core::get_one_frame_mv(unsigned char*, int, int) */
int _ZN9Eis30Core16get_one_frame_mvEPhii(void);

/* Symbol: _Z16model_generationP4MVEC5MCOEFiiiii */
/* Demangled: model_generation(MVEC*, MCOEF, int, int, int, int, int) */
int _Z16model_generationP4MVEC5MCOEFiiiii(void);

/* Symbol: _ZN9Eis25CoreC2Ev */
/* Demangled: Eis25Core::Eis25Core() */
int _ZN9Eis25CoreC2Ev(void);

/* Symbol: _ZN9Eis25CoreD0Ev */
/* Demangled: Eis25Core::~Eis25Core() */
int _ZN9Eis25CoreD0Ev(void);

/* Symbol: _ZN11EisPlusCore11MemoryShiftEv */
/* Demangled: EisPlusCore::MemoryShift() */
int _ZN11EisPlusCore11MemoryShiftEv(void);

/* Symbol: _ZN9Eis25Core11MemoryShiftEv */
/* Demangled: Eis25Core::MemoryShift() */
int _ZN9Eis25Core11MemoryShiftEv(void);

/* Symbol: _ZN9Eis30Core26Eis30CoreGetMultiScaleAddrEv */
/* Demangled: Eis30Core::Eis30CoreGetMultiScaleAddr() */
int _ZN9Eis30Core26Eis30CoreGetMultiScaleAddrEv(void);

/* Symbol: _ZN9Eis30Core15AroundMotionDetEPfS0_S0_S0_i */
/* Demangled: Eis30Core::AroundMotionDet(float*, float*, float*, float*, int) */
int _ZN9Eis30Core15AroundMotionDetEPfS0_S0_S0_i(void);

/* Symbol: _ZN9Eis12Core16Eis12CoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT */
/* Demangled: Eis12Core::Eis12CoreSaveLog(EIS_PLUS_CORE_SAVE_LOG_STRUCT*) */
int _ZN9Eis12Core16Eis12CoreSaveLogEP29EIS_PLUS_CORE_SAVE_LOG_STRUCT(void);

/* Symbol: _ZN9Eis30Core15destroyInstanceEPS_ */
/* Demangled: Eis30Core::destroyInstance(Eis30Core*) */
int _ZN9Eis30Core15destroyInstanceEPS_(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: _Z26Eis25CheckTuningParamRangeP24EIS25_TUNING_PARA_STRUCT */
/* Demangled: Eis25CheckTuningParamRange(EIS25_TUNING_PARA_STRUCT*) */
int _Z26Eis25CheckTuningParamRangeP24EIS25_TUNING_PARA_STRUCT(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN9Eis25Core23BoundaryProtection_GridEP27EIS25_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis25Core::BoundaryProtection_Grid(EIS25_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis25Core23BoundaryProtection_GridEP27EIS25_CORE_COEF_PARA_STRUCT(void);

/* Symbol: _ZN9Eis11Core13Eis11CoreInitEP23EIS_SET_ENV_INFO_STRUCT */
/* Demangled: Eis11Core::Eis11CoreInit(EIS_SET_ENV_INFO_STRUCT*) */
int _ZN9Eis11Core13Eis11CoreInitEP23EIS_SET_ENV_INFO_STRUCT(void);

/* Symbol: _ZN9Eis30Core15GetAverageShakeEv */
/* Demangled: Eis30Core::GetAverageShake() */
int _ZN9Eis30Core15GetAverageShakeEv(void);

/* Symbol: _ZN9Eis25Core12FIR13_filterEPf */
/* Demangled: Eis25Core::FIR13_filter(float*) */
int _ZN9Eis25Core12FIR13_filterEPf(void);

/* Symbol: _Z28EisPlusCheckTuningParamRangeP27EIS_PLUS_TUNING_PARA_STRUCT */
/* Demangled: EisPlusCheckTuningParamRange(EIS_PLUS_TUNING_PARA_STRUCT*) */
int _Z28EisPlusCheckTuningParamRangeP27EIS_PLUS_TUNING_PARA_STRUCT(void);

/* Symbol: _ZN10AppEisPlus15SaveParamToFileEjPv */
/* Demangled: AppEisPlus::SaveParamToFile(unsigned int, void*) */
int _ZN10AppEisPlus15SaveParamToFileEjPv(void);

/* Symbol: _ZN9Eis25Core13Eis25CoreMainEv */
/* Demangled: Eis25Core::Eis25CoreMain() */
int _ZN9Eis25Core13Eis25CoreMainEv(void);

/* Symbol: _ZN9Eis25Core12RegionMotionEv */
/* Demangled: Eis25Core::RegionMotion() */
int _ZN9Eis25Core12RegionMotionEv(void);

/* Symbol: _ZN9Eis25Core15GetAverageShakeEv */
/* Demangled: Eis25Core::GetAverageShake() */
int _ZN9Eis25Core15GetAverageShakeEv(void);

/* Symbol: _ZN11EisPlusCore14CalcEisGmvConfEv */
/* Demangled: EisPlusCore::CalcEisGmvConf() */
int _ZN11EisPlusCore14CalcEisGmvConfEv(void);

/* Symbol: _Z27control_point_interpolationPiS_iiPA2_iiiiiiiii */
/* Demangled: control_point_interpolation(int*, int*, int, int, int (*) [2], int, int, int, int, int, int, int, int) */
int _Z27control_point_interpolationPiS_iiPA2_iiiiiiiii(void);

/* Symbol: _ZN9Eis12CoreD0Ev */
/* Demangled: Eis12Core::~Eis12Core() */
int _ZN9Eis12CoreD0Ev(void);

/* Symbol: _ZN11EisPlusCore13GetAffineCoefEv */
/* Demangled: EisPlusCore::GetAffineCoef() */
int _ZN11EisPlusCore13GetAffineCoefEv(void);

/* Symbol: _ZN11EisPlusCore24EisPlusCoreSetWorkingBufEPh */
/* Demangled: EisPlusCore::EisPlusCoreSetWorkingBuf(unsigned char*) */
int _ZN11EisPlusCore24EisPlusCoreSetWorkingBufEPh(void);

/* Symbol: _ZN9Eis25Core13affine_regionEPKfS1_PfS2_iPiS3_S2_ */
/* Demangled: Eis25Core::affine_region(float const*, float const*, float*, float*, int, int*, int*, float*) */
int _ZN9Eis25Core13affine_regionEPKfS1_PfS2_iPiS3_S2_(void);

/* Symbol: _ZN9Eis25CoreD2Ev */
/* Demangled: Eis25Core::~Eis25Core() */
int _ZN9Eis25CoreD2Ev(void);

/* Symbol: _ZN9Eis11Core10LMV_MINSADEv */
/* Demangled: Eis11Core::LMV_MINSAD() */
int _ZN9Eis11Core10LMV_MINSADEv(void);

/* Symbol: _ZN9Eis25Core12affine_finalEPKfS1_PfS2_iPiS2_S2_b */
/* Demangled: Eis25Core::affine_final(float const*, float const*, float*, float*, int, int*, float*, float*, bool) */
int _ZN9Eis25Core12affine_finalEPKfS1_PfS2_iPiS2_S2_b(void);

/* Symbol: _ZN11EisPlusCore30EisPlusCoreQueryWorkingBufSizeEv */
/* Demangled: EisPlusCore::EisPlusCoreQueryWorkingBufSize() */
int _ZN11EisPlusCore30EisPlusCoreQueryWorkingBufSizeEv(void);

/* Symbol: _ZN9Eis30Core26Eis30CoreGetFinalCoeffAddrEv */
/* Demangled: Eis30Core::Eis30CoreGetFinalCoeffAddr() */
int _ZN9Eis30Core26Eis30CoreGetFinalCoeffAddrEv(void);

/* Symbol: _ZTV9Eis25Core */
/* Demangled: vtable for Eis25Core */
extern void* _ZTV9Eis25Core;

/* Symbol: _ZTV9Eis30Core */
/* Demangled: vtable for Eis30Core */
extern void* _ZTV9Eis30Core;

/* Symbol: _ZN9Eis30Core26Eis30CoreGetTuningParaAddrEv */
/* Demangled: Eis30Core::Eis30CoreGetTuningParaAddr() */
int _ZN9Eis30Core26Eis30CoreGetTuningParaAddrEv(void);

/* Symbol: _ZN9Eis30Core14Eis30CoreResetEv */
/* Demangled: Eis30Core::Eis30CoreReset() */
int _ZN9Eis30Core14Eis30CoreResetEv(void);

/* Symbol: _ZN9Eis25Core12CalAffineAccEPfS0_S0_ */
/* Demangled: Eis25Core::CalAffineAcc(float*, float*, float*) */
int _ZN9Eis25Core12CalAffineAccEPfS0_S0_(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: _ZN9Eis30Core15ForegroundCheckEv */
/* Demangled: Eis30Core::ForegroundCheck() */
int _ZN9Eis30Core15ForegroundCheckEv(void);

/* Symbol: _ZN9Eis25Core8FreqCalcEPfS0_ */
/* Demangled: Eis25Core::FreqCalc(float*, float*) */
int _ZN9Eis25Core8FreqCalcEPfS0_(void);

/* Symbol: _ZN9Eis30Core22Eis30CoreGetLogBufAddrEv */
/* Demangled: Eis30Core::Eis30CoreGetLogBufAddr() */
int _ZN9Eis30Core22Eis30CoreGetLogBufAddrEv(void);

/* Symbol: _ZN11EisPlusCore12affine_finalEPKiS1_PiS2_iS2_PfS3_ */
/* Demangled: EisPlusCore::affine_final(int const*, int const*, int*, int*, int, int*, float*, float*) */
int _ZN11EisPlusCore12affine_finalEPKiS1_PiS2_iS2_PfS3_(void);

/* Symbol: _ZN9Eis25Core9FreqCalc1EPfS0_ */
/* Demangled: Eis25Core::FreqCalc1(float*, float*) */
int _ZN9Eis25Core9FreqCalc1EPfS0_(void);

/* Symbol: _ZN9Eis30Core20get_one_frame_mv_rscEPhS0_ii */
/* Demangled: Eis30Core::get_one_frame_mv_rsc(unsigned char*, unsigned char*, int, int) */
int _ZN9Eis30Core20get_one_frame_mv_rscEPhS0_ii(void);

/* Symbol: _ZN9Eis30Core24Eis30CoreGetGyroInfoAddrEv */
/* Demangled: Eis30Core::Eis30CoreGetGyroInfoAddr() */
int _ZN9Eis30Core24Eis30CoreGetGyroInfoAddrEv(void);

/* Symbol: _ZN9Eis25CoreC1Ev */
/* Demangled: Eis25Core::Eis25Core() */
int _ZN9Eis25CoreC1Ev(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: _ZN10AppEisPlus16EisPlusGetResultEP27EIS_PLUS_RESULT_INFO_STRUCT */
/* Demangled: AppEisPlus::EisPlusGetResult(EIS_PLUS_RESULT_INFO_STRUCT*) */
int _ZN10AppEisPlus16EisPlusGetResultEP27EIS_PLUS_RESULT_INFO_STRUCT(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN10AppEisPlus18EisPlusSetProcInfoEP29EIS_PLUS_SET_PROC_INFO_STRUCT */
/* Demangled: AppEisPlus::EisPlusSetProcInfo(EIS_PLUS_SET_PROC_INFO_STRUCT*) */
int _ZN10AppEisPlus18EisPlusSetProcInfoEP29EIS_PLUS_SET_PROC_INFO_STRUCT(void);

/* Symbol: _ZN9Eis12CoreC1Ev */
/* Demangled: Eis12Core::Eis12Core() */
int _ZN9Eis12CoreC1Ev(void);

/* Symbol: _ZN6MTKEis7EisMainEP22EIS_RESULT_INFO_STRUCT */
/* Demangled: MTKEis::EisMain(EIS_RESULT_INFO_STRUCT*) */
int _ZN6MTKEis7EisMainEP22EIS_RESULT_INFO_STRUCT(void);

/* Symbol: _ZN9Eis30Core16RotationFallbackEv */
/* Demangled: Eis30Core::RotationFallback() */
int _ZN9Eis30Core16RotationFallbackEv(void);

/* Symbol: _ZN6AppEisC2Ev */
/* Demangled: AppEis::AppEis() */
int _ZN6AppEisC2Ev(void);

/* Symbol: _ZN9Eis12Core28Eis12CoreQueryWorkingBufSizeEv */
/* Demangled: Eis12Core::Eis12CoreQueryWorkingBufSize() */
int _ZN9Eis12Core28Eis12CoreQueryWorkingBufSizeEv(void);

/* Symbol: _ZN9Eis30CoreD1Ev */
/* Demangled: Eis30Core::~Eis30Core() */
int _ZN9Eis30CoreD1Ev(void);

/* Symbol: _ZN9Eis12CoreD1Ev */
/* Demangled: Eis12Core::~Eis12Core() */
int _ZN9Eis12CoreD1Ev(void);

/* Symbol: _ZN6AppEis11getInstanceEv */
/* Demangled: AppEis::getInstance() */
int _ZN6AppEis11getInstanceEv(void);

/* Symbol: _ZN9Eis30Core11getInstanceEv */
/* Demangled: Eis30Core::getInstance() */
int _ZN9Eis30Core11getInstanceEv(void);

/* Symbol: _Z19QueryWorkingBufSizev */
/* Demangled: QueryWorkingBufSize() */
int _Z19QueryWorkingBufSizev(void);

/* Symbol: _ZTV9Eis12Core */
/* Demangled: vtable for Eis12Core */
extern void* _ZTV9Eis12Core;

/* Symbol: _ZN11EisPlusCore28EisPlusCoreGetTuningParaAddrEv */
/* Demangled: EisPlusCore::EisPlusCoreGetTuningParaAddr() */
int _ZN11EisPlusCore28EisPlusCoreGetTuningParaAddrEv(void);

/* Symbol: _ZN9Eis12Core11MemoryShiftEv */
/* Demangled: Eis12Core::MemoryShift() */
int _ZN9Eis12Core11MemoryShiftEv(void);

/* Symbol: _ZN9Eis30Core14Eis30CoreRSCMVEP29EIS30_CORE_RSC_MV_INFO_STRUCT */
/* Demangled: Eis30Core::Eis30CoreRSCMV(EIS30_CORE_RSC_MV_INFO_STRUCT*) */
int _ZN9Eis30Core14Eis30CoreRSCMVEP29EIS30_CORE_RSC_MV_INFO_STRUCT(void);

/* Symbol: _ZN9Eis25Core14Eis25CoreResetEv */
/* Demangled: Eis25Core::Eis25CoreReset() */
int _ZN9Eis25Core14Eis25CoreResetEv(void);

/* Symbol: _ZN9Eis25Core21Eis25CoreInitProcInfoEv */
/* Demangled: Eis25Core::Eis25CoreInitProcInfo() */
int _ZN9Eis25Core21Eis25CoreInitProcInfoEv(void);

/* Symbol: _ZN9Eis30CoreC1Ev */
/* Demangled: Eis30Core::Eis30Core() */
int _ZN9Eis30CoreC1Ev(void);

/* Symbol: _ZN9Eis12Core14CalcEisGmvConfEv */
/* Demangled: Eis12Core::CalcEisGmvConf() */
int _ZN9Eis12Core14CalcEisGmvConfEv(void);

/* Symbol: _ZN9Eis30Core27SkewBoundaryProtection_GridEP27EIS30_CORE_COEF_PARA_STRUCT */
/* Demangled: Eis30Core::SkewBoundaryProtection_Grid(EIS30_CORE_COEF_PARA_STRUCT*) */
int _ZN9Eis30Core27SkewBoundaryProtection_GridEP27EIS30_CORE_COEF_PARA_STRUCT(void);

/* Symbol: _ZN9Eis12Core18BoundaryProtectionEPf */
/* Demangled: Eis12Core::BoundaryProtection(float*) */
int _ZN9Eis12Core18BoundaryProtectionEPf(void);

/* Symbol: _ZN9Eis25Core6affineEPKfS1_PfS2_iPiS2_ */
/* Demangled: Eis25Core::affine(float const*, float const*, float*, float*, int, int*, float*) */
int _ZN9Eis25Core6affineEPKfS1_PfS2_iPiS2_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_EIS_H */
