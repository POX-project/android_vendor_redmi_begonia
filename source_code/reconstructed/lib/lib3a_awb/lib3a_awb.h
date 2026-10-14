/*
 * Reverse-Engineered ABI Specification for: lib3a.awb.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.awb.so
 */

#ifndef BEGONIA_RE_LIB3A_AWB_H
#define BEGONIA_RE_LIB3A_AWB_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9AwbAlgoIp11xryr_to_rgbE15XY_COORDINATE_TRiS1_S1_ */
/* Demangled: AwbAlgoIp::xryr_to_rgb(XY_COORDINATE_T, int&, int&, int&) */
int _ZN9AwbAlgoIp11xryr_to_rgbE15XY_COORDINATE_TRiS1_S1_(void);

/* Symbol: _ZN9AwbAlgoIp18getFaceAstTargetXYE15XY_COORDINATE_Ti */
/* Demangled: AwbAlgoIp::getFaceAstTargetXY(XY_COORDINATE_T, int) */
int _ZN9AwbAlgoIp18getFaceAstTargetXYE15XY_COORDINATE_Ti(void);

/* Symbol: _ZN9AwbAlgoIp15calcFaceAstProbEi15XY_COORDINATE_TiPi */
/* Demangled: AwbAlgoIp::calcFaceAstProb(int, XY_COORDINATE_T, int, int*) */
int _ZN9AwbAlgoIp15calcFaceAstProbEi15XY_COORDINATE_TiPi(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _ZN9AwbAlgoIp12xryr_to_gainE15XY_COORDINATE_TR10AWB_GAIN_T */
/* Demangled: AwbAlgoIp::xryr_to_gain(XY_COORDINATE_T, AWB_GAIN_T&) */
int _ZN9AwbAlgoIp12xryr_to_gainE15XY_COORDINATE_TR10AWB_GAIN_T(void);

/* Symbol: _ZN9AwbAlgoIp18faceAstStableCheckEv */
/* Demangled: AwbAlgoIp::faceAstStableCheck() */
int _ZN9AwbAlgoIp18faceAstStableCheckEv(void);

/* Symbol: __ashldi3 */
/* Demangled: __ashldi3 */
int __ashldi3(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _ZN9AwbAlgoIp14m_i4AWBLogLUT1E */
/* Demangled: AwbAlgoIp::m_i4AWBLogLUT1 */
extern void* _ZN9AwbAlgoIp14m_i4AWBLogLUT1E;

/* Symbol: _ZN9AwbAlgoIp15getFdConfidenceEv */
/* Demangled: AwbAlgoIp::getFdConfidence() */
int _ZN9AwbAlgoIp15getFdConfidenceEv(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: _ZN9AwbAlgoIp18getFaceAstStrengthEii */
/* Demangled: AwbAlgoIp::getFaceAstStrength(int, int) */
int _ZN9AwbAlgoIp18getFaceAstStrengthEii(void);

/* Symbol: _ZN9AwbAlgoIp19getFaceAstConfProb4Ev */
/* Demangled: AwbAlgoIp::getFaceAstConfProb4() */
int _ZN9AwbAlgoIp19getFaceAstConfProb4Ev(void);

/* Symbol: _ZN9AwbAlgoIpC1Ev */
/* Demangled: AwbAlgoIp::AwbAlgoIp() */
int _ZN9AwbAlgoIpC1Ev(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _ZN9AwbAlgoIp20getFaceAstConfidenceEv */
/* Demangled: AwbAlgoIp::getFaceAstConfidence() */
int _ZN9AwbAlgoIp20getFaceAstConfidenceEv(void);

/* Symbol: _ZN9AwbAlgoIp21resetFaceAstBuffQueueEv */
/* Demangled: AwbAlgoIp::resetFaceAstBuffQueue() */
int _ZN9AwbAlgoIp21resetFaceAstBuffQueueEv(void);

/* Symbol: _ZN9AwbAlgoIp21faceAWBTemporalSmoothER10AWB_GAIN_T */
/* Demangled: AwbAlgoIp::faceAWBTemporalSmooth(AWB_GAIN_T&) */
int _ZN9AwbAlgoIp21faceAWBTemporalSmoothER10AWB_GAIN_T(void);

/* Symbol: _ZN9AwbAlgoIp22calIllumInvCompensatedEiii */
/* Demangled: AwbAlgoIp::calIllumInvCompensated(int, int, int) */
int _ZN9AwbAlgoIp22calIllumInvCompensatedEiii(void);

/* Symbol: _ZN9AwbAlgoIp10gainDivideER10AWB_GAIN_TS0_S0_ */
/* Demangled: AwbAlgoIp::gainDivide(AWB_GAIN_T&, AWB_GAIN_T, AWB_GAIN_T) */
int _ZN9AwbAlgoIp10gainDivideER10AWB_GAIN_TS0_S0_(void);

/* Symbol: _ZN9AwbAlgoIp20isFaceAWBSceneChangeER10AWB_GAIN_TS1_ */
/* Demangled: AwbAlgoIp::isFaceAWBSceneChange(AWB_GAIN_T&, AWB_GAIN_T&) */
int _ZN9AwbAlgoIp20isFaceAWBSceneChangeER10AWB_GAIN_TS1_(void);

/* Symbol: _ZN9AwbAlgoIp11INTERPOLATEEiiiiii */
/* Demangled: AwbAlgoIp::INTERPOLATE(int, int, int, int, int, int) */
int _ZN9AwbAlgoIp11INTERPOLATEEiiiiii(void);

/* Symbol: _ZN9AwbAlgoIp19getFaceAstConfProb0Ev */
/* Demangled: AwbAlgoIp::getFaceAstConfProb0() */
int _ZN9AwbAlgoIp19getFaceAstConfProb0Ev(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _ZN9AwbAlgoIp9getCTProbEv */
/* Demangled: AwbAlgoIp::getCTProb() */
int _ZN9AwbAlgoIp9getCTProbEv(void);

/* Symbol: _ZN9AwbAlgoIp11getAntiLog2Ei */
/* Demangled: AwbAlgoIp::getAntiLog2(int) */
int _ZN9AwbAlgoIp11getAntiLog2Ei(void);

/* Symbol: _ZN9AwbAlgoIp25faceAstFaceGonePreProcessEv */
/* Demangled: AwbAlgoIp::faceAstFaceGonePreProcess() */
int _ZN9AwbAlgoIp25faceAstFaceGonePreProcessEv(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _ZN9AwbAlgoIp11rgb_to_gainEiiiR10AWB_GAIN_T */
/* Demangled: AwbAlgoIp::rgb_to_gain(int, int, int, AWB_GAIN_T&) */
int _ZN9AwbAlgoIp11rgb_to_gainEiiiR10AWB_GAIN_T(void);

/* Symbol: _ZN9AwbAlgoIp13getPanelProb0Ev */
/* Demangled: AwbAlgoIp::getPanelProb0() */
int _ZN9AwbAlgoIp13getPanelProb0Ev(void);

/* Symbol: _ZN9AwbAlgoIp13getGenderInfoEv */
/* Demangled: AwbAlgoIp::getGenderInfo() */
int _ZN9AwbAlgoIp13getGenderInfoEv(void);

/* Symbol: _ZN9AwbAlgoIp19getFaceAWBRefTargetEv */
/* Demangled: AwbAlgoIp::getFaceAWBRefTarget() */
int _ZN9AwbAlgoIp19getFaceAWBRefTargetEv(void);

/* Symbol: _ZN9AwbAlgoIp18enqueueFaceAstBuffEv */
/* Demangled: AwbAlgoIp::enqueueFaceAstBuff() */
int _ZN9AwbAlgoIp18enqueueFaceAstBuffEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN9AwbAlgoIp18getParentBlkWeightEiiRiS0_ */
/* Demangled: AwbAlgoIp::getParentBlkWeight(int, int, int&, int&) */
int _ZN9AwbAlgoIp18getParentBlkWeightEiiRiS0_(void);

/* Symbol: _ZN9AwbAlgoIp19faceAstEnqueueCheckEv */
/* Demangled: AwbAlgoIp::faceAstEnqueueCheck() */
int _ZN9AwbAlgoIp19faceAstEnqueueCheckEv(void);

/* Symbol: _ZN9AwbAlgoIp19getFaceAstConfProb1Ei */
/* Demangled: AwbAlgoIp::getFaceAstConfProb1(int) */
int _ZN9AwbAlgoIp19getFaceAstConfProb1Ei(void);

/* Symbol: _ZN9AwbAlgoIp20aaoConverterMultiCalEPvij */
/* Demangled: AwbAlgoIp::aaoConverterMultiCal(void*, int, unsigned int) */
int _ZN9AwbAlgoIp20aaoConverterMultiCalEPvij(void);

/* Symbol: _ZN9AwbAlgoIp5LOG10Ei */
/* Demangled: AwbAlgoIp::LOG10(int) */
int _ZN9AwbAlgoIp5LOG10Ei(void);

/* Symbol: _ZN9AwbAlgoIp18getFaceAWBPrefGainEv */
/* Demangled: AwbAlgoIp::getFaceAWBPrefGain() */
int _ZN9AwbAlgoIp18getFaceAWBPrefGainEv(void);

/* Symbol: _ZN9AwbAlgoIp20softwareStatisticOptEv */
/* Demangled: AwbAlgoIp::softwareStatisticOpt() */
int _ZN9AwbAlgoIp20softwareStatisticOptEv(void);

/* Symbol: _ZN9AwbAlgoIp13getSquareRootEi */
/* Demangled: AwbAlgoIp::getSquareRoot(int) */
int _ZN9AwbAlgoIp13getSquareRootEi(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN9AwbAlgoIpC2Ev */
/* Demangled: AwbAlgoIp::AwbAlgoIp() */
int _ZN9AwbAlgoIpC2Ev(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: __gnu_ldivmod_helper */
/* Demangled: __gnu_ldivmod_helper */
int __gnu_ldivmod_helper(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _ZN9AwbAlgoIp11rgb_to_xryrEiiiR15XY_COORDINATE_T */
/* Demangled: AwbAlgoIp::rgb_to_xryr(int, int, int, XY_COORDINATE_T&) */
int _ZN9AwbAlgoIp11rgb_to_xryrEiiiR15XY_COORDINATE_T(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: __lshrdi3 */
/* Demangled: __lshrdi3 */
int __lshrdi3(void);

/* Symbol: _ZN9AwbAlgoIp19getFaceAWBGainRatioEv */
/* Demangled: AwbAlgoIp::getFaceAWBGainRatio() */
int _ZN9AwbAlgoIp19getFaceAWBGainRatioEv(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: _ZN9AwbAlgoIp15getAWBStatisticER11AWB_INPUT_TiiPv */
/* Demangled: AwbAlgoIp::getAWBStatistic(AWB_INPUT_T&, int, int, void*) */
int _ZN9AwbAlgoIp15getAWBStatisticER11AWB_INPUT_TiiPv(void);

/* Symbol: _ZN9AwbAlgoIp18TargetConvergeCtrlEv */
/* Demangled: AwbAlgoIp::TargetConvergeCtrl() */
int _ZN9AwbAlgoIp18TargetConvergeCtrlEv(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _ZN9AwbAlgoIp21faceAWBTemporalSmoothE10AWB_GAIN_TS0_RS0_ */
/* Demangled: AwbAlgoIp::faceAWBTemporalSmooth(AWB_GAIN_T, AWB_GAIN_T, AWB_GAIN_T&) */
int _ZN9AwbAlgoIp21faceAWBTemporalSmoothE10AWB_GAIN_TS0_RS0_(void);

/* Symbol: _ZN9AwbAlgoIp22restoreFaceAstTempInfoEv */
/* Demangled: AwbAlgoIp::restoreFaceAstTempInfo() */
int _ZN9AwbAlgoIp22restoreFaceAstTempInfoEv(void);

/* Symbol: _ZN9AwbAlgoIp14getOversatProbEv */
/* Demangled: AwbAlgoIp::getOversatProb() */
int _ZN9AwbAlgoIp14getOversatProbEv(void);

/* Symbol: _ZN9AwbAlgoIp26awb_face_spatial_gain_compEv */
/* Demangled: AwbAlgoIp::awb_face_spatial_gain_comp() */
int _ZN9AwbAlgoIp26awb_face_spatial_gain_compEv(void);

/* Symbol: _ZN9AwbAlgoIp18calIllumDumpBufferEPhii */
/* Demangled: AwbAlgoIp::calIllumDumpBuffer(unsigned char*, int, int) */
int _ZN9AwbAlgoIp18calIllumDumpBufferEPhii(void);

/* Symbol: _ZN9AwbAlgoIp10rgb_to_hsbEiiiR14AWB_HSB_STAT_T */
/* Demangled: AwbAlgoIp::rgb_to_hsb(int, int, int, AWB_HSB_STAT_T&) */
int _ZN9AwbAlgoIp10rgb_to_hsbEiiiR14AWB_HSB_STAT_T(void);

/* Symbol: _ZN9AwbAlgoIp14m_i4AWBLogLUT2E */
/* Demangled: AwbAlgoIp::m_i4AWBLogLUT2 */
extern void* _ZN9AwbAlgoIp14m_i4AWBLogLUT2E;

/* Symbol: _ZN9AwbAlgoIp16calcPortraitInfoEv */
/* Demangled: AwbAlgoIp::calcPortraitInfo() */
int _ZN9AwbAlgoIp16calcPortraitInfoEv(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _ZN9AwbAlgoIp19PreventPanelDampingER10AWB_GAIN_Tiiiii */
/* Demangled: AwbAlgoIp::PreventPanelDamping(AWB_GAIN_T&, int, int, int, int, int) */
int _ZN9AwbAlgoIp19PreventPanelDampingER10AWB_GAIN_Tiiiii(void);

/* Symbol: _ZN9AwbAlgoIp13getPanelProb1Ev */
/* Demangled: AwbAlgoIp::getPanelProb1() */
int _ZN9AwbAlgoIp13getPanelProb1Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN9AwbAlgoIp29calIllumInvCompensatedGainRGBEi */
/* Demangled: AwbAlgoIp::calIllumInvCompensatedGainRGB(int) */
int _ZN9AwbAlgoIp29calIllumInvCompensatedGainRGBEi(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: _ZN9AwbAlgoIp17rgb_to_lightindexEiiiP12LIGHT_AREA_T */
/* Demangled: AwbAlgoIp::rgb_to_lightindex(int, int, int, LIGHT_AREA_T*) */
int _ZN9AwbAlgoIp17rgb_to_lightindexEiiiP12LIGHT_AREA_T(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _ZN9AwbAlgoIp12getPanelProbEv */
/* Demangled: AwbAlgoIp::getPanelProb() */
int _ZN9AwbAlgoIp12getPanelProbEv(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN9AwbAlgoIp20isFaceAWBSceneChangeEii */
/* Demangled: AwbAlgoIp::isFaceAWBSceneChange(int, int) */
int _ZN9AwbAlgoIp20isFaceAWBSceneChangeEii(void);

/* Symbol: _ZN9AwbAlgoIp15calcFaceAstGainEv */
/* Demangled: AwbAlgoIp::calcFaceAstGain() */
int _ZN9AwbAlgoIp15calcFaceAstGainEv(void);

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

/* Symbol: _ZN9AwbAlgoIp14getFaceAWBProbEv */
/* Demangled: AwbAlgoIp::getFaceAWBProb() */
int _ZN9AwbAlgoIp14getFaceAWBProbEv(void);

/* Symbol: _ZN9AwbAlgoIpD1Ev */
/* Demangled: AwbAlgoIp::~AwbAlgoIp() */
int _ZN9AwbAlgoIpD1Ev(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: __udivdi3 */
/* Demangled: __udivdi3 */
int __udivdi3(void);

/* Symbol: _ZN9AwbAlgoIp12gain_to_xryrE10AWB_GAIN_TR15XY_COORDINATE_T */
/* Demangled: AwbAlgoIp::gain_to_xryr(AWB_GAIN_T, XY_COORDINATE_T&) */
int _ZN9AwbAlgoIp12gain_to_xryrE10AWB_GAIN_TR15XY_COORDINATE_T(void);

/* Symbol: _ZN9AwbAlgoIp13PortraitDelayERi */
/* Demangled: AwbAlgoIp::PortraitDelay(int&) */
int _ZN9AwbAlgoIp13PortraitDelayERi(void);

/* Symbol: _ZN9AwbAlgoIp19getFaceAstConfProb2Ev */
/* Demangled: AwbAlgoIp::getFaceAstConfProb2() */
int _ZN9AwbAlgoIp19getFaceAstConfProb2Ev(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: _ZN9AwbAlgoIp16getFaceSizeRatioEi */
/* Demangled: AwbAlgoIp::getFaceSizeRatio(int) */
int _ZN9AwbAlgoIp16getFaceSizeRatioEi(void);

/* Symbol: _ZN9AwbAlgoIp10getAntiLogEi */
/* Demangled: AwbAlgoIp::getAntiLog(int) */
int _ZN9AwbAlgoIp10getAntiLogEi(void);

/* Symbol: _ZN9AwbAlgoIp11INTERPOLATEEiiiii */
/* Demangled: AwbAlgoIp::INTERPOLATE(int, int, int, int, int) */
int _ZN9AwbAlgoIp11INTERPOLATEEiiiii(void);

/* Symbol: _ZN9AwbAlgoIp21faceAstPredictProcessE15XY_COORDINATE_T */
/* Demangled: AwbAlgoIp::faceAstPredictProcess(XY_COORDINATE_T) */
int _ZN9AwbAlgoIp21faceAstPredictProcessE15XY_COORDINATE_T(void);

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int __gnu_uldivmod_helper(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: _ZN9AwbAlgoIp11getLutValueEiPiii */
/* Demangled: AwbAlgoIp::getLutValue(int, int*, int, int) */
int _ZN9AwbAlgoIp11getLutValueEiPiii(void);

/* Symbol: _ZN9AwbAlgoIp21getFaceAstShiftWeightE15XY_COORDINATE_Ti */
/* Demangled: AwbAlgoIp::getFaceAstShiftWeight(XY_COORDINATE_T, int) */
int _ZN9AwbAlgoIp21getFaceAstShiftWeightE15XY_COORDINATE_Ti(void);

/* Symbol: __aeabi_llsl */
/* Demangled: __aeabi_llsl */
int __aeabi_llsl(void);

/* Symbol: _ZN9AwbAlgoIp15FaceGoneProcessER10AWB_GAIN_T */
/* Demangled: AwbAlgoIp::FaceGoneProcess(AWB_GAIN_T&) */
int _ZN9AwbAlgoIp15FaceGoneProcessER10AWB_GAIN_T(void);

/* Symbol: _ZN9AwbAlgoIpD2Ev */
/* Demangled: AwbAlgoIp::~AwbAlgoIp() */
int _ZN9AwbAlgoIpD2Ev(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _ZN9AwbAlgoIp22calIllumGetDebugConfigEv */
/* Demangled: AwbAlgoIp::calIllumGetDebugConfig() */
int _ZN9AwbAlgoIp22calIllumGetDebugConfigEv(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: __aeabi_llsr */
/* Demangled: __aeabi_llsr */
int __aeabi_llsr(void);

/* Symbol: _ZN9AwbAlgoIp21getParentBlkLightStatE15XY_COORDINATE_TPiS1_RiS1_S2_ */
/* Demangled: AwbAlgoIp::getParentBlkLightStat(XY_COORDINATE_T, int*, int*, int&, int*, int&) */
int _ZN9AwbAlgoIp21getParentBlkLightStatE15XY_COORDINATE_TPiS1_RiS1_S2_(void);

/* Symbol: _ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode0E15XY_COORDINATE_TPS0_Pi */
/* Demangled: AwbAlgoIp::getFaceAstRefTargetWeightMode0(XY_COORDINATE_T, XY_COORDINATE_T*, int*) */
int _ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode0E15XY_COORDINATE_TPS0_Pi(void);

/* Symbol: _ZN9AwbAlgoIp19getFaceAstConfProb3Ev */
/* Demangled: AwbAlgoIp::getFaceAstConfProb3() */
int _ZN9AwbAlgoIp19getFaceAstConfProb3Ev(void);

/* Symbol: _ZN9AwbAlgoIp21aaoConverterSingleCalEPvij */
/* Demangled: AwbAlgoIp::aaoConverterSingleCal(void*, int, unsigned int) */
int _ZN9AwbAlgoIp21aaoConverterSingleCalEPvij(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: _ZN9AwbAlgoIp11getLutIndexEiRiS0_ii */
/* Demangled: AwbAlgoIp::getLutIndex(int, int&, int&, int, int) */
int _ZN9AwbAlgoIp11getLutIndexEiRiS0_ii(void);

/* Symbol: _ZN9AwbAlgoIp13awb_face_compER10AWB_GAIN_TS1_R16AWB_SPEED_MODE_T */
/* Demangled: AwbAlgoIp::awb_face_comp(AWB_GAIN_T&, AWB_GAIN_T&, AWB_SPEED_MODE_T&) */
int _ZN9AwbAlgoIp13awb_face_compER10AWB_GAIN_TS1_R16AWB_SPEED_MODE_T(void);

/* Symbol: _ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode1E15XY_COORDINATE_TPS0_Pi */
/* Demangled: AwbAlgoIp::getFaceAstRefTargetWeightMode1(XY_COORDINATE_T, XY_COORDINATE_T*, int*) */
int _ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode1E15XY_COORDINATE_TPS0_Pi(void);

/* Symbol: _ZN9AwbAlgoIp27initParentBlkLightStatParamEv */
/* Demangled: AwbAlgoIp::initParentBlkLightStatParam() */
int _ZN9AwbAlgoIp27initParentBlkLightStatParamEv(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _ZN9AwbAlgoIp27getFaceAWBRestrictGainRatioER16AWB_RG_BG_STAT_T */
/* Demangled: AwbAlgoIp::getFaceAWBRestrictGainRatio(AWB_RG_BG_STAT_T&) */
int _ZN9AwbAlgoIp27getFaceAWBRestrictGainRatioER16AWB_RG_BG_STAT_T(void);

/* Symbol: _ZN9AwbAlgoIp21recordFaceAstTempInfoEv */
/* Demangled: AwbAlgoIp::recordFaceAstTempInfo() */
int _ZN9AwbAlgoIp21recordFaceAstTempInfoEv(void);

/* Symbol: _ZN9AwbAlgoIp25handleFaceAWBTemporalDataEv */
/* Demangled: AwbAlgoIp::handleFaceAWBTemporalData() */
int _ZN9AwbAlgoIp25handleFaceAWBTemporalDataEv(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _ZN9AwbAlgoIp14voteLightIndexEii */
/* Demangled: AwbAlgoIp::voteLightIndex(int, int) */
int _ZN9AwbAlgoIp14voteLightIndexEii(void);

/* Symbol: _ZN9AwbAlgoIp19faceAstPerFrameInitEv */
/* Demangled: AwbAlgoIp::faceAstPerFrameInit() */
int _ZN9AwbAlgoIp19faceAstPerFrameInitEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_AWB_H */
