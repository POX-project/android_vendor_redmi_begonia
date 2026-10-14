/*
 * Reverse-Engineered ABI Specification for: lib3a.awb.core.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.awb.core.so
 */

#ifndef BEGONIA_RE_LIB3A_AWB_CORE_H
#define BEGONIA_RE_LIB3A_AWB_CORE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE8EE */
/* Demangled: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE8EE;

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: _ZN7AwbAlgo17twoDimInterpolateE15XY_COORDINATE_T12LIGHT_AREA_TiS0_i */
/* Demangled: AwbAlgo::twoDimInterpolate(XY_COORDINATE_T, LIGHT_AREA_T, int, XY_COORDINATE_T, int) */
int _ZN7AwbAlgo17twoDimInterpolateE15XY_COORDINATE_T12LIGHT_AREA_TiS0_i(void);

/* Symbol: _ZN7AwbAlgo12getLightStatEv */
/* Demangled: AwbAlgo::getLightStat() */
int _ZN7AwbAlgo12getLightStatEv(void);

/* Symbol: _ZN7AwbAlgo21calibrateAWBLightStatEii */
/* Demangled: AwbAlgo::calibrateAWBLightStat(int, int) */
int _ZN7AwbAlgo21calibrateAWBLightStatEii(void);

/* Symbol: _ZN7AwbAlgo17calculateCurrGainE15AWB_LIGHT_SRC_T */
/* Demangled: AwbAlgo::calculateCurrGain(AWB_LIGHT_SRC_T) */
int _ZN7AwbAlgo17calculateCurrGainE15AWB_LIGHT_SRC_T(void);

/* Symbol: _ZN7AwbAlgo34predictAWBGain_DaylightFluorescentEv */
/* Demangled: AwbAlgo::predictAWBGain_DaylightFluorescent() */
int _ZN7AwbAlgo34predictAWBGain_DaylightFluorescentEv(void);

/* Symbol: _ZN7AwbAlgo7initAWBER16AWB_INIT_INPUT_SR12AWB_OUTPUT_TR10AWB_GAIN_TS5_S5_ */
/* Demangled: AwbAlgo::initAWB(AWB_INIT_INPUT_S&, AWB_OUTPUT_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&) */
int _ZN7AwbAlgo7initAWBER16AWB_INIT_INPUT_SR12AWB_OUTPUT_TR10AWB_GAIN_TS5_S5_(void);

/* Symbol: _ZN7AwbAlgo28calculateStatisticLimitMode1Ei */
/* Demangled: AwbAlgo::calculateStatisticLimitMode1(int) */
int _ZN7AwbAlgo28calculateStatisticLimitMode1Ei(void);

/* Symbol: _ZN7AwbAlgoD0Ev */
/* Demangled: AwbAlgo::~AwbAlgo() */
int _ZN7AwbAlgoD0Ev(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _ZN7AwbAlgo24predictAWBGainCust_ShadeEv */
/* Demangled: AwbAlgo::predictAWBGainCust_Shade() */
int _ZN7AwbAlgo24predictAWBGainCust_ShadeEv(void);

/* Symbol: _ZN7AwbAlgo27predictAWBGainCust_DaylightEv */
/* Demangled: AwbAlgo::predictAWBGainCust_Daylight() */
int _ZN7AwbAlgo27predictAWBGainCust_DaylightEv(void);

/* Symbol: _ZN7AwbAlgo14predictPWBGainEv */
/* Demangled: AwbAlgo::predictPWBGain() */
int _ZN7AwbAlgo14predictPWBGainEv(void);

/* Symbol: _ZN7AwbAlgo16calculateEqvGainE15AWB_LIGHT_SRC_T */
/* Demangled: AwbAlgo::calculateEqvGain(AWB_LIGHT_SRC_T) */
int _ZN7AwbAlgo16calculateEqvGainE15AWB_LIGHT_SRC_T(void);

/* Symbol: _ZN7AwbAlgo11getAwbStateEv */
/* Demangled: AwbAlgo::getAwbState() */
int _ZN7AwbAlgo11getAwbStateEv(void);

/* Symbol: _ZN7AwbAlgo12aaoConverterEPvij */
/* Demangled: AwbAlgo::aaoConverter(void*, int, unsigned int) */
int _ZN7AwbAlgo12aaoConverterEPvij(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _ZN7AwbAlgo14getVersionInfoEv */
/* Demangled: AwbAlgo::getVersionInfo() */
int _ZN7AwbAlgo14getVersionInfoEv(void);

/* Symbol: _ZN7AwbAlgo17accumulateMixGainEi10AWB_GAIN_TR23AWB_LIGHT_PROBABILITY_TRS0_ */
/* Demangled: AwbAlgo::accumulateMixGain(int, AWB_GAIN_T, AWB_LIGHT_PROBABILITY_T&, AWB_GAIN_T&) */
int _ZN7AwbAlgo17accumulateMixGainEi10AWB_GAIN_TR23AWB_LIGHT_PROBABILITY_TRS0_(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _ZN7AwbAlgo25predictAWBGainCust_StrobeEv */
/* Demangled: AwbAlgo::predictAWBGainCust_Strobe() */
int _ZN7AwbAlgo25predictAWBGainCust_StrobeEv(void);

/* Symbol: _ZN7AwbAlgo22predictAWBGainIP_ShadeEv */
/* Demangled: AwbAlgo::predictAWBGainIP_Shade() */
int _ZN7AwbAlgo22predictAWBGainIP_ShadeEv(void);

/* Symbol: _ZN7AwbAlgo15getLutIndex_extEiRiS0_ii */
/* Demangled: AwbAlgo::getLutIndex_ext(int, int&, int&, int, int) */
int _ZN7AwbAlgo15getLutIndex_extEiRiS0_ii(void);

/* Symbol: _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE2EE */
/* Demangled: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE2EE;

/* Symbol: _ZN7AwbAlgo17updateAWBCustGainERK10AWB_GAIN_TR12AWB_OUTPUT_T */
/* Demangled: AwbAlgo::updateAWBCustGain(AWB_GAIN_T const&, AWB_OUTPUT_T&) */
int _ZN7AwbAlgo17updateAWBCustGainERK10AWB_GAIN_TR12AWB_OUTPUT_T(void);

/* Symbol: _ZN7AwbAlgo25predictAWBGainIP_DaylightEv */
/* Demangled: AwbAlgo::predictAWBGainIP_Daylight() */
int _ZN7AwbAlgo25predictAWBGainIP_DaylightEv(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: _ZN7AwbAlgo3AWBEv */
/* Demangled: AwbAlgo::AWB() */
int _ZN7AwbAlgo3AWBEv(void);

/* Symbol: _ZN7AwbAlgo13getLightProb0Ev */
/* Demangled: AwbAlgo::getLightProb0() */
int _ZN7AwbAlgo13getLightProb0Ev(void);

/* Symbol: _ZN7AwbAlgo28predictPWBGain_ReferenceAreaEv */
/* Demangled: AwbAlgo::predictPWBGain_ReferenceArea() */
int _ZN7AwbAlgo28predictPWBGain_ReferenceAreaEv(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: _Z11awb_lv_sort24AWB_TEMPORAL_BUFF_INFO_TS_ */
/* Demangled: awb_lv_sort(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T) */
int _Z11awb_lv_sort24AWB_TEMPORAL_BUFF_INFO_TS_(void);

/* Symbol: _ZN7AwbAlgo15gain_rgb_to_rwbE10AWB_GAIN_TRS0_ */
/* Demangled: AwbAlgo::gain_rgb_to_rwb(AWB_GAIN_T, AWB_GAIN_T&) */
int _ZN7AwbAlgo15gain_rgb_to_rwbE10AWB_GAIN_TRS0_(void);

/* Symbol: _ZN7AwbAlgo15gain_rwb_to_rgbE10AWB_GAIN_TRS0_ */
/* Demangled: AwbAlgo::gain_rwb_to_rgb(AWB_GAIN_T, AWB_GAIN_T&) */
int _ZN7AwbAlgo15gain_rwb_to_rgbE10AWB_GAIN_TRS0_(void);

/* Symbol: _ZN7AwbAlgo16getAWBParentStatEP21AWB_PARENT_BLK_STAT_TPiS2_ */
/* Demangled: AwbAlgo::getAWBParentStat(AWB_PARENT_BLK_STAT_T*, int*, int*) */
int _ZN7AwbAlgo16getAWBParentStatEP21AWB_PARENT_BLK_STAT_TPiS2_(void);

/* Symbol: _ZN7AwbAlgo20predictAWBGain_ShadeEv */
/* Demangled: AwbAlgo::predictAWBGain_Shade() */
int _ZN7AwbAlgo20predictAWBGain_ShadeEv(void);

/* Symbol: _ZN7AwbAlgo34predictAWBGainCust_WarmFluorescentEv */
/* Demangled: AwbAlgo::predictAWBGainCust_WarmFluorescent() */
int _ZN7AwbAlgo34predictAWBGainCust_WarmFluorescentEv(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _ZN7AwbAlgo13getLutIndexExEiRiS0_Pii */
/* Demangled: AwbAlgo::getLutIndexEx(int, int&, int&, int*, int) */
int _ZN7AwbAlgo13getLutIndexExEiRiS0_Pii(void);

/* Symbol: _ZN7AwbAlgo10setAWBModeE16LIB3A_AWB_MODE_T */
/* Demangled: AwbAlgo::setAWBMode(LIB3A_AWB_MODE_T) */
int _ZN7AwbAlgo10setAWBModeE16LIB3A_AWB_MODE_T(void);

/* Symbol: _ZN7AwbAlgo21InvCompensatedGainRGBEiiiiiii */
/* Demangled: AwbAlgo::InvCompensatedGainRGB(int, int, int, int, int, int, int) */
int _ZN7AwbAlgo21InvCompensatedGainRGBEiiiiiii(void);

/* Symbol: _ZN7AwbAlgo23calculateLightRotatedXYEv */
/* Demangled: AwbAlgo::calculateLightRotatedXY() */
int _ZN7AwbAlgo23calculateLightRotatedXYEv(void);

/* Symbol: _ZN7AwbAlgo18getFDAWBWindowInfoEv */
/* Demangled: AwbAlgo::getFDAWBWindowInfo() */
int _ZN7AwbAlgo18getFDAWBWindowInfoEv(void);

/* Symbol: _ZN7AwbAlgo20predictAWBGainIP_CWFEv */
/* Demangled: AwbAlgo::predictAWBGainIP_CWF() */
int _ZN7AwbAlgo20predictAWBGainIP_CWFEv(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _ZNSt3__14listI24AWB_TEMPORAL_BUFF_INFO_TNS_9allocatorIS1_EEE6__sortIPFiS1_S1_EEENS_15__list_iteratorIS1_PvEESA_SA_jRT_ */
/* Demangled: std::__1::__list_iterator<AWB_TEMPORAL_BUFF_INFO_T, void*> std::__1::list<AWB_TEMPORAL_BUFF_INFO_T, std::__1::allocator<AWB_TEMPORAL_BUFF_INFO_T> >::__sort<int (*)(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T)>(std::__1::__list_iterator<AWB_TEMPORAL_BUFF_INFO_T, void*>, std::__1::__list_iterator<AWB_TEMPORAL_BUFF_INFO_T, void*>, unsigned int, int (*&)(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T)) */
int _ZNSt3__14listI24AWB_TEMPORAL_BUFF_INFO_TNS_9allocatorIS1_EEE6__sortIPFiS1_S1_EEENS_15__list_iteratorIS1_PvEESA_SA_jRT_(void);

/* Symbol: _ZN7AwbAlgo23predictAWBGain_TungstenEv */
/* Demangled: AwbAlgo::predictAWBGain_Tungsten() */
int _ZN7AwbAlgo23predictAWBGain_TungstenEv(void);

/* Symbol: _ZN7AwbAlgo30predictAWBGainCust_FluorescentEv */
/* Demangled: AwbAlgo::predictAWBGainCust_Fluorescent() */
int _ZN7AwbAlgo30predictAWBGainCust_FluorescentEv(void);

/* Symbol: _ZN7AwbAlgo33awb_spatial_temporal_xy_predictorER15XY_COORDINATE_TS1_ */
/* Demangled: AwbAlgo::awb_spatial_temporal_xy_predictor(XY_COORDINATE_T&, XY_COORDINATE_T&) */
int _ZN7AwbAlgo33awb_spatial_temporal_xy_predictorER15XY_COORDINATE_TS1_(void);

/* Symbol: _ZTVN4NS3A8IAwbAlgoE */
/* Demangled: vtable for NS3A::IAwbAlgo */
extern void* _ZTVN4NS3A8IAwbAlgoE;

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _ZN7AwbAlgo16getParentBlkStatEv */
/* Demangled: AwbAlgo::getParentBlkStat() */
int _ZN7AwbAlgo16getParentBlkStatEv(void);

/* Symbol: _ZN7AwbAlgo18getAwbProcessCycleER11AWB_INPUT_T */
/* Demangled: AwbAlgo::getAwbProcessCycle(AWB_INPUT_T&) */
int _ZN7AwbAlgo18getAwbProcessCycleER11AWB_INPUT_T(void);

/* Symbol: _ZN7AwbAlgo9gainLimitER10AWB_GAIN_T */
/* Demangled: AwbAlgo::gainLimit(AWB_GAIN_T&) */
int _ZN7AwbAlgo9gainLimitER10AWB_GAIN_T(void);

/* Symbol: _ZN7AwbAlgo15SaveAwbCoreInfoEPKc */
/* Demangled: AwbAlgo::SaveAwbCoreInfo(char const*) */
int _ZN7AwbAlgo15SaveAwbCoreInfoEPKc(void);

/* Symbol: _ZN7AwbAlgo20shadeProcessingMode1E15AWB_LIGHT_SRC_T15XY_COORDINATE_T */
/* Demangled: AwbAlgo::shadeProcessingMode1(AWB_LIGHT_SRC_T, XY_COORDINATE_T) */
int _ZN7AwbAlgo20shadeProcessingMode1E15AWB_LIGHT_SRC_T15XY_COORDINATE_T(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: _ZN7AwbAlgo15getLutValue_extEiPiii */
/* Demangled: AwbAlgo::getLutValue_ext(int, int*, int, int) */
int _ZN7AwbAlgo15getLutValue_extEiPiii(void);

/* Symbol: _ZN7AwbAlgo28calculateDaylightLocusOffsetEi */
/* Demangled: AwbAlgo::calculateDaylightLocusOffset(int) */
int _ZN7AwbAlgo28calculateDaylightLocusOffsetEi(void);

/* Symbol: _ZN7AwbAlgoD1Ev */
/* Demangled: AwbAlgo::~AwbAlgo() */
int _ZN7AwbAlgoD1Ev(void);

/* Symbol: _ZN7AwbAlgo19calculateExtraColorEv */
/* Demangled: AwbAlgo::calculateExtraColor() */
int _ZN7AwbAlgo19calculateExtraColorEv(void);

/* Symbol: _ZN7AwbAlgo36predictAWBGainIP_DaylightFluorescentEv */
/* Demangled: AwbAlgo::predictAWBGainIP_DaylightFluorescent() */
int _ZN7AwbAlgo36predictAWBGainIP_DaylightFluorescentEv(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _ZN7AwbAlgo21predictAWBGain_StrobeEv */
/* Demangled: AwbAlgo::predictAWBGain_Strobe() */
int _ZN7AwbAlgo21predictAWBGain_StrobeEv(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _ZN7AwbAlgo14resetCoreStateEv */
/* Demangled: AwbAlgo::resetCoreState() */
int _ZN7AwbAlgo14resetCoreStateEv(void);

/* Symbol: _ZN7AwbAlgo20shadeProcessingMode0E15XY_COORDINATE_TS0_S0_ii */
/* Demangled: AwbAlgo::shadeProcessingMode0(XY_COORDINATE_T, XY_COORDINATE_T, XY_COORDINATE_T, int, int) */
int _ZN7AwbAlgo20shadeProcessingMode0E15XY_COORDINATE_TS0_S0_ii(void);

/* Symbol: _ZN7AwbAlgo25awb_temporal_xy_predictorER24AWB_TEMPORAL_BUFF_INFO_T */
/* Demangled: AwbAlgo::awb_temporal_xy_predictor(AWB_TEMPORAL_BUFF_INFO_T&) */
int _ZN7AwbAlgo25awb_temporal_xy_predictorER24AWB_TEMPORAL_BUFF_INFO_T(void);

/* Symbol: _ZN7AwbAlgo14doDebugProcessEv */
/* Demangled: AwbAlgo::doDebugProcess() */
int _ZN7AwbAlgo14doDebugProcessEv(void);

/* Symbol: _ZN7AwbAlgo23calculateFeatureProcessE15AWB_LIGHT_SRC_T */
/* Demangled: AwbAlgo::calculateFeatureProcess(AWB_LIGHT_SRC_T) */
int _ZN7AwbAlgo23calculateFeatureProcessE15AWB_LIGHT_SRC_T(void);

/* Symbol: _ZN7AwbAlgo27enqueue_awb_temporal_bufferE10AWB_GAIN_TS0_ */
/* Demangled: AwbAlgo::enqueue_awb_temporal_buffer(AWB_GAIN_T, AWB_GAIN_T) */
int _ZN7AwbAlgo27enqueue_awb_temporal_bufferE10AWB_GAIN_TS0_(void);

/* Symbol: _ZN7AwbAlgo13setAWBHdrModeE14AWB_HDR_MODE_T */
/* Demangled: AwbAlgo::setAWBHdrMode(AWB_HDR_MODE_T) */
int _ZN7AwbAlgo13setAWBHdrModeE14AWB_HDR_MODE_T(void);

/* Symbol: _ZN7AwbAlgo15backupDebugInfoEv */
/* Demangled: AwbAlgo::backupDebugInfo() */
int _ZN7AwbAlgo15backupDebugInfoEv(void);

/* Symbol: _ZN7AwbAlgo15reformatAWBGainE16LIB3A_AWB_MODE_TR10AWB_GAIN_TS2_S2_S2_S2_S2_ */
/* Demangled: AwbAlgo::reformatAWBGain(LIB3A_AWB_MODE_T, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&) */
int _ZN7AwbAlgo15reformatAWBGainE16LIB3A_AWB_MODE_TR10AWB_GAIN_TS2_S2_S2_S2_S2_(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _ZN7AwbAlgo13gainNormalizeER10AWB_GAIN_T */
/* Demangled: AwbAlgo::gainNormalize(AWB_GAIN_T&) */
int _ZN7AwbAlgo13gainNormalizeER10AWB_GAIN_T(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _ZN7AwbAlgo23predictAWBGainIP_StrobeEv */
/* Demangled: AwbAlgo::predictAWBGainIP_Strobe() */
int _ZN7AwbAlgo23predictAWBGainIP_StrobeEv(void);

/* Symbol: _ZN7AwbAlgo6getCCTEv */
/* Demangled: AwbAlgo::getCCT() */
int _ZN7AwbAlgo6getCCTEv(void);

/* Symbol: _ZN7AwbAlgo14handleCustGainER10AWB_GAIN_TS1_S1_ */
/* Demangled: AwbAlgo::handleCustGain(AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&) */
int _ZN7AwbAlgo14handleCustGainER10AWB_GAIN_TS1_S1_(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _ZN7AwbAlgo28predictAWBGainIP_FluorescentEv */
/* Demangled: AwbAlgo::predictAWBGainIP_Fluorescent() */
int _ZN7AwbAlgo28predictAWBGainIP_FluorescentEv(void);

/* Symbol: _ZN7AwbAlgoC1EN11NSIspTuning12ESensorDev_TE */
/* Demangled: AwbAlgo::AwbAlgo(NSIspTuning::ESensorDev_T) */
int _ZN7AwbAlgoC1EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7AwbAlgo30predictAWBGain_WarmFluorescentEv */
/* Demangled: AwbAlgo::predictAWBGain_WarmFluorescent() */
int _ZN7AwbAlgo30predictAWBGain_WarmFluorescentEv(void);

/* Symbol: _ZN7AwbAlgo29calculateEqvDaylightLocusProbE15AWB_LIGHT_SRC_T */
/* Demangled: AwbAlgo::calculateEqvDaylightLocusProb(AWB_LIGHT_SRC_T) */
int _ZN7AwbAlgo29calculateEqvDaylightLocusProbE15AWB_LIGHT_SRC_T(void);

/* Symbol: _ZN7AwbAlgo13getLightProb1Ev */
/* Demangled: AwbAlgo::getLightProb1() */
int _ZN7AwbAlgo13getLightProb1Ev(void);

/* Symbol: _ZN7AwbAlgo14updateAWBParamER16AWB_INIT_INPUT_S */
/* Demangled: AwbAlgo::updateAWBParam(AWB_INIT_INPUT_S&) */
int _ZN7AwbAlgo14updateAWBParamER16AWB_INIT_INPUT_S(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN7AwbAlgo11estimateCCTEv */
/* Demangled: AwbAlgo::estimateCCT() */
int _ZN7AwbAlgo11estimateCCTEv(void);

/* Symbol: _ZN7AwbAlgo14gainDivide_extER10AWB_GAIN_TS0_S0_ */
/* Demangled: AwbAlgo::gainDivide_ext(AWB_GAIN_T&, AWB_GAIN_T, AWB_GAIN_T) */
int _ZN7AwbAlgo14gainDivide_extER10AWB_GAIN_TS0_S0_(void);

/* Symbol: _ZN7AwbAlgo19updatePreGain1ParamEv */
/* Demangled: AwbAlgo::updatePreGain1Param() */
int _ZN7AwbAlgo19updatePreGain1ParamEv(void);

/* Symbol: _ZN7AwbAlgo9handleAWBER11AWB_INPUT_TR12AWB_OUTPUT_T */
/* Demangled: AwbAlgo::handleAWB(AWB_INPUT_T&, AWB_OUTPUT_T&) */
int _ZN7AwbAlgo9handleAWBER11AWB_INPUT_TR12AWB_OUTPUT_T(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: _Z16awb_neutral_sort24AWB_TEMPORAL_BUFF_INFO_TS_ */
/* Demangled: awb_neutral_sort(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T) */
int _Z16awb_neutral_sort24AWB_TEMPORAL_BUFF_INFO_TS_(void);

/* Symbol: _ZN7AwbAlgo38predictAWBGainCust_DaylightFluorescentEv */
/* Demangled: AwbAlgo::predictAWBGainCust_DaylightFluorescent() */
int _ZN7AwbAlgo38predictAWBGainCust_DaylightFluorescentEv(void);

/* Symbol: _ZN7AwbAlgo10getAWBInfoER15AWB_CUST_INFO_T */
/* Demangled: AwbAlgo::getAWBInfo(AWB_CUST_INFO_T&) */
int _ZN7AwbAlgo10getAWBInfoER15AWB_CUST_INFO_T(void);

/* Symbol: _ZN7AwbAlgo17getSquareRoot_extEi */
/* Demangled: AwbAlgo::getSquareRoot_ext(int) */
int _ZN7AwbAlgo17getSquareRoot_extEi(void);

/* Symbol: _ZN7AwbAlgo20getStrobeAwbRevesionEv */
/* Demangled: AwbAlgo::getStrobeAwbRevesion() */
int _ZN7AwbAlgo20getStrobeAwbRevesionEv(void);

/* Symbol: _ZN7AwbAlgo23Flash_Awb_calResultGainER26FLASH_AWB_CAL_GAIN_INPUT_TR18FLASH_AWB_OUTPUT_T */
/* Demangled: AwbAlgo::Flash_Awb_calResultGain(FLASH_AWB_CAL_GAIN_INPUT_T&, FLASH_AWB_OUTPUT_T&) */
int _ZN7AwbAlgo23Flash_Awb_calResultGainER26FLASH_AWB_CAL_GAIN_INPUT_TR18FLASH_AWB_OUTPUT_T(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _ZN7AwbAlgo11getInstanceEi */
/* Demangled: AwbAlgo::getInstance(int) */
int _ZN7AwbAlgo11getInstanceEi(void);

/* Symbol: _ZN7AwbAlgo23convergenceSpeedControlEv */
/* Demangled: AwbAlgo::convergenceSpeedControl() */
int _ZN7AwbAlgo23convergenceSpeedControlEv(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: _ZN7AwbAlgo32calculateDaylightLocusOffset_extEP15AWB_ALGO_DATA_Tiii */
/* Demangled: AwbAlgo::calculateDaylightLocusOffset_ext(AWB_ALGO_DATA_T*, int, int, int) */
int _ZN7AwbAlgo32calculateDaylightLocusOffset_extEP15AWB_ALGO_DATA_Tiii(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _ZN7AwbAlgo3PWBEv */
/* Demangled: AwbAlgo::PWB() */
int _ZN7AwbAlgo3PWBEv(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _ZN7AwbAlgo23predictAWBGain_DaylightEv */
/* Demangled: AwbAlgo::predictAWBGain_Daylight() */
int _ZN7AwbAlgo23predictAWBGain_DaylightEv(void);

/* Symbol: _ZN7AwbAlgo25calculateSubwindowProcessEi */
/* Demangled: AwbAlgo::calculateSubwindowProcess(int) */
int _ZN7AwbAlgo25calculateSubwindowProcessEi(void);

/* Symbol: _ZN7AwbAlgoD2Ev */
/* Demangled: AwbAlgo::~AwbAlgo() */
int _ZN7AwbAlgoD2Ev(void);

/* Symbol: _ZN7AwbAlgo17calculateSpatGainE15AWB_LIGHT_SRC_T */
/* Demangled: AwbAlgo::calculateSpatGain(AWB_LIGHT_SRC_T) */
int _ZN7AwbAlgo17calculateSpatGainE15AWB_LIGHT_SRC_T(void);

/* Symbol: _ZN7AwbAlgo11saveASDInfoEv */
/* Demangled: AwbAlgo::saveASDInfo() */
int _ZN7AwbAlgo11saveASDInfoEv(void);

/* Symbol: _ZN7AwbAlgo16featureDetectionEii */
/* Demangled: AwbAlgo::featureDetection(int, int) */
int _ZN7AwbAlgo16featureDetectionEii(void);

/* Symbol: _ZN7AwbAlgo18sunsetCompensationER15XY_COORDINATE_T */
/* Demangled: AwbAlgo::sunsetCompensation(XY_COORDINATE_T&) */
int _ZN7AwbAlgo18sunsetCompensationER15XY_COORDINATE_T(void);

/* Symbol: _ZN7AwbAlgo28predictAWBGainCustSampleCodeE15AWB_LIGHT_SRC_T */
/* Demangled: AwbAlgo::predictAWBGainCustSampleCode(AWB_LIGHT_SRC_T) */
int _ZN7AwbAlgo28predictAWBGainCustSampleCodeE15AWB_LIGHT_SRC_T(void);

/* Symbol: _ZN7AwbAlgo14predictAWBGainEv */
/* Demangled: AwbAlgo::predictAWBGain() */
int _ZN7AwbAlgo14predictAWBGainEv(void);

/* Symbol: _ZN7AwbAlgo27predictAWBGainCust_TungstenEv */
/* Demangled: AwbAlgo::predictAWBGainCust_Tungsten() */
int _ZN7AwbAlgo27predictAWBGainCust_TungstenEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _ZN7AwbAlgo10getASDInfoER14AWB_ASD_INFO_T */
/* Demangled: AwbAlgo::getASDInfo(AWB_ASD_INFO_T&) */
int _ZN7AwbAlgo10getASDInfoER14AWB_ASD_INFO_T(void);

/* Symbol: _ZN7AwbAlgo22predictAWBGainCust_CWFEv */
/* Demangled: AwbAlgo::predictAWBGainCust_CWF() */
int _ZN7AwbAlgo22predictAWBGainCust_CWFEv(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: _ZN7AwbAlgo11resetMemoryE19AWB_CORE_STATE_ENUM */
/* Demangled: AwbAlgo::resetMemory(AWB_CORE_STATE_ENUM) */
int _ZN7AwbAlgo11resetMemoryE19AWB_CORE_STATE_ENUM(void);

/* Symbol: _ZN7AwbAlgo26predictAWBGain_FluorescentEv */
/* Demangled: AwbAlgo::predictAWBGain_Fluorescent() */
int _ZN7AwbAlgo26predictAWBGain_FluorescentEv(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: _ZN7AwbAlgo13estimateLightEv */
/* Demangled: AwbAlgo::estimateLight() */
int _ZN7AwbAlgo13estimateLightEv(void);

/* Symbol: _ZN7AwbAlgo18predictAWBGain_CWFEv */
/* Demangled: AwbAlgo::predictAWBGain_CWF() */
int _ZN7AwbAlgo18predictAWBGain_CWFEv(void);

/* Symbol: _ZN7AwbAlgo25updateFrameBasedThresholdEi */
/* Demangled: AwbAlgo::updateFrameBasedThreshold(int) */
int _ZN7AwbAlgo25updateFrameBasedThresholdEi(void);

/* Symbol: _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE4EE */
/* Demangled: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE4EE;

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: _ZN7AwbAlgo13getAWBOutInfoER19AWB_CUST_INFO_OUT_T */
/* Demangled: AwbAlgo::getAWBOutInfo(AWB_CUST_INFO_OUT_T&) */
int _ZN7AwbAlgo13getAWBOutInfoER19AWB_CUST_INFO_OUT_T(void);

/* Symbol: _ZN7AwbAlgo15rgb_to_gain_extEiiiR10AWB_GAIN_T */
/* Demangled: AwbAlgo::rgb_to_gain_ext(int, int, int, AWB_GAIN_T&) */
int _ZN7AwbAlgo15rgb_to_gain_extEiiiR10AWB_GAIN_T(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN7AwbAlgo16setAWBStatConfigERK17AWB_STAT_CONFIG_Tii */
/* Demangled: AwbAlgo::setAWBStatConfig(AWB_STAT_CONFIG_T const&, int, int) */
int _ZN7AwbAlgo16setAWBStatConfigERK17AWB_STAT_CONFIG_Tii(void);

/* Symbol: _ZN7AwbAlgo25predictAWBGainIP_TungstenEv */
/* Demangled: AwbAlgo::predictAWBGainIP_Tungsten() */
int _ZN7AwbAlgo25predictAWBGainIP_TungstenEv(void);

/* Symbol: _ZN4NS3A8IAwbAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i */
/* Demangled: NS3A::IAwbAlgo* NS3A::IAwbAlgo::createInstance<(NS3A::EAAAOpt_T)0>(int) */
int _ZN4NS3A8IAwbAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i(void);

/* Symbol: _ZN7AwbAlgo13getLightProb2Ev */
/* Demangled: AwbAlgo::getLightProb2() */
int _ZN7AwbAlgo13getLightProb2Ev(void);

/* Symbol: _ZN7AwbAlgo15destroyInstanceEv */
/* Demangled: AwbAlgo::destroyInstance() */
int _ZN7AwbAlgo15destroyInstanceEv(void);

/* Symbol: _ZN7AwbAlgo25getFDAWBWindowContentInfoEP12AWB_WINDOW_Ti */
/* Demangled: AwbAlgo::getFDAWBWindowContentInfo(AWB_WINDOW_T*, int) */
int _ZN7AwbAlgo25getFDAWBWindowContentInfoEP12AWB_WINDOW_Ti(void);

/* Symbol: _ZN7AwbAlgo10getSceneLVEv */
/* Demangled: AwbAlgo::getSceneLV() */
int _ZN7AwbAlgo10getSceneLVEv(void);

/* Symbol: _ZN7AwbAlgo12debugAwbGainEiR10AWB_GAIN_T */
/* Demangled: AwbAlgo::debugAwbGain(int, AWB_GAIN_T&) */
int _ZN7AwbAlgo12debugAwbGainEiR10AWB_GAIN_T(void);

/* Symbol: _ZN7AwbAlgo16enqueue_awb_infoE10AWB_GAIN_TS0_ */
/* Demangled: AwbAlgo::enqueue_awb_info(AWB_GAIN_T, AWB_GAIN_T) */
int _ZN7AwbAlgo16enqueue_awb_infoE10AWB_GAIN_TS0_(void);

/* Symbol: _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE1EE */
/* Demangled: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE1EE;

/* Symbol: _ZN7AwbAlgo12getLightProbER23AWB_LIGHT_PROBABILITY_T */
/* Demangled: AwbAlgo::getLightProb(AWB_LIGHT_PROBABILITY_T&) */
int _ZN7AwbAlgo12getLightProbER23AWB_LIGHT_PROBABILITY_T(void);

/* Symbol: _ZN7AwbAlgo15INTERPOLATE_extEiiiii */
/* Demangled: AwbAlgo::INTERPOLATE_ext(int, int, int, int, int) */
int _ZN7AwbAlgo15INTERPOLATE_extEiiiii(void);

/* Symbol: _ZN7AwbAlgo32predictAWBGainIP_WarmFluorescentEv */
/* Demangled: AwbAlgo::predictAWBGainIP_WarmFluorescent() */
int _ZN7AwbAlgo32predictAWBGainIP_WarmFluorescentEv(void);

/* Symbol: _ZN7AwbAlgo10getAWBStatER11AWB_INPUT_TiiPv */
/* Demangled: AwbAlgo::getAWBStat(AWB_INPUT_T&, int, int, void*) */
int _ZN7AwbAlgo10getAWBStatER11AWB_INPUT_TiiPv(void);

/* Symbol: _ZTV7AwbAlgo */
/* Demangled: vtable for AwbAlgo */
extern void* _ZTV7AwbAlgo;

/* Symbol: _ZN7AwbAlgo12getDebugInfoER16AWB_DEBUG_INFO_TR16AWB_DEBUG_DATA_T */
/* Demangled: AwbAlgo::getDebugInfo(AWB_DEBUG_INFO_T&, AWB_DEBUG_DATA_T&) */
int _ZN7AwbAlgo12getDebugInfoER16AWB_DEBUG_INFO_TR16AWB_DEBUG_DATA_T(void);

/* Symbol: _ZN7AwbAlgo15getAWBFrameInfoER21AWB_CUST_INFO_FRAME_T */
/* Demangled: AwbAlgo::getAWBFrameInfo(AWB_CUST_INFO_FRAME_T&) */
int _ZN7AwbAlgo15getAWBFrameInfoER21AWB_CUST_INFO_FRAME_T(void);

/* Symbol: _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE16EE */
/* Demangled: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE16EE;

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _ZN7AwbAlgo12get2LutValueEiPiS0_i */
/* Demangled: AwbAlgo::get2LutValue(int, int*, int*, int) */
int _ZN7AwbAlgo12get2LutValueEiPiS0_i(void);

/* Symbol: _ZN7AwbAlgo15getMWBLightAreaEiR12LIGHT_AREA_T */
/* Demangled: AwbAlgo::getMWBLightArea(int, LIGHT_AREA_T&) */
int _ZN7AwbAlgo15getMWBLightAreaEiR12LIGHT_AREA_T(void);

/* Symbol: _ZN7AwbAlgo17getDefaultPWBGainEv */
/* Demangled: AwbAlgo::getDefaultPWBGain() */
int _ZN7AwbAlgo17getDefaultPWBGainEv(void);

/* Symbol: _ZN7AwbAlgo12setAWBFDAreaEP13AWB_FD_INFO_T */
/* Demangled: AwbAlgo::setAWBFDArea(AWB_FD_INFO_T*) */
int _ZN7AwbAlgo12setAWBFDAreaEP13AWB_FD_INFO_T(void);

/* Symbol: _ZN7AwbAlgo28calculateStatisticLimitMode2Eiiiii */
/* Demangled: AwbAlgo::calculateStatisticLimitMode2(int, int, int, int, int) */
int _ZN7AwbAlgo28calculateStatisticLimitMode2Eiiiii(void);

/* Symbol: _ZN7AwbAlgo11setAWBInputER11AWB_INPUT_T */
/* Demangled: AwbAlgo::setAWBInput(AWB_INPUT_T&) */
int _ZN7AwbAlgo11setAWBInputER11AWB_INPUT_T(void);

/* Symbol: _ZN7AwbAlgo24awb_spatial_xy_predictorEiiiiiR15XY_COORDINATE_T */
/* Demangled: AwbAlgo::awb_spatial_xy_predictor(int, int, int, int, int, XY_COORDINATE_T&) */
int _ZN7AwbAlgo24awb_spatial_xy_predictorEiiiiiR15XY_COORDINATE_T(void);

/* Symbol: _ZN7AwbAlgo23calculatePreferencColorE15AWB_LIGHT_SRC_T */
/* Demangled: AwbAlgo::calculatePreferencColor(AWB_LIGHT_SRC_T) */
int _ZN7AwbAlgo23calculatePreferencColorE15AWB_LIGHT_SRC_T(void);

/* Symbol: _ZN7AwbAlgo12getLightProbEv */
/* Demangled: AwbAlgo::getLightProb() */
int _ZN7AwbAlgo12getLightProbEv(void);

/* Symbol: _ZN7AwbAlgoC2EN11NSIspTuning12ESensorDev_TE */
/* Demangled: AwbAlgo::AwbAlgo(NSIspTuning::ESensorDev_T) */
int _ZN7AwbAlgoC2EN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN7AwbAlgo24disableAWBMultiFrmUpdateEv */
/* Demangled: AwbAlgo::disableAWBMultiFrmUpdate() */
int _ZN7AwbAlgo24disableAWBMultiFrmUpdateEv(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: _ZN7AwbAlgo16getPostLightProbEiR23AWB_LIGHT_PROBABILITY_T */
/* Demangled: AwbAlgo::getPostLightProb(int, AWB_LIGHT_PROBABILITY_T&) */
int _ZN7AwbAlgo16getPostLightProbEiR23AWB_LIGHT_PROBABILITY_T(void);

/* Symbol: _ZN7AwbAlgo27calculatePreferencColor_extEiP15AWB_ALGO_DATA_T */
/* Demangled: AwbAlgo::calculatePreferencColor_ext(int, AWB_ALGO_DATA_T*) */
int _ZN7AwbAlgo27calculatePreferencColor_extEiP15AWB_ALGO_DATA_T(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_AWB_CORE_H */
