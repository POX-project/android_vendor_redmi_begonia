/*
 * Reverse-Engineered Source for: lib3a.awb.core.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_awb_core"

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
#include "lib3a_awb_core.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE8EE = NULL;

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: AwbAlgo::twoDimInterpolate(XY_COORDINATE_T, LIGHT_AREA_T, int, XY_COORDINATE_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo17twoDimInterpolateE15XY_COORDINATE_T12LIGHT_AREA_TiS0_i(void) {
    ALOGD("_ZN7AwbAlgo17twoDimInterpolateE15XY_COORDINATE_T12LIGHT_AREA_TiS0_i() called");
    return 0;
}

/* Demangled: AwbAlgo::getLightStat() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12getLightStatEv(void) {
    ALOGD("_ZN7AwbAlgo12getLightStatEv() called");
    return 0;
}

/* Demangled: AwbAlgo::calibrateAWBLightStat(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo21calibrateAWBLightStatEii(void) {
    ALOGD("_ZN7AwbAlgo21calibrateAWBLightStatEii() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateCurrGain(AWB_LIGHT_SRC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo17calculateCurrGainE15AWB_LIGHT_SRC_T(void) {
    ALOGD("_ZN7AwbAlgo17calculateCurrGainE15AWB_LIGHT_SRC_T() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_DaylightFluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo34predictAWBGain_DaylightFluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo34predictAWBGain_DaylightFluorescentEv() called");
    return 0;
}

/* Demangled: AwbAlgo::initAWB(AWB_INIT_INPUT_S&, AWB_OUTPUT_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo7initAWBER16AWB_INIT_INPUT_SR12AWB_OUTPUT_TR10AWB_GAIN_TS5_S5_(void) {
    ALOGD("_ZN7AwbAlgo7initAWBER16AWB_INIT_INPUT_SR12AWB_OUTPUT_TR10AWB_GAIN_TS5_S5_() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateStatisticLimitMode1(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo28calculateStatisticLimitMode1Ei(void) {
    ALOGD("_ZN7AwbAlgo28calculateStatisticLimitMode1Ei() called");
    return 0;
}

/* Demangled: AwbAlgo::~AwbAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgoD0Ev(void) {
    ALOGD("_ZN7AwbAlgoD0Ev() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_Shade() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo24predictAWBGainCust_ShadeEv(void) {
    ALOGD("_ZN7AwbAlgo24predictAWBGainCust_ShadeEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_Daylight() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo27predictAWBGainCust_DaylightEv(void) {
    ALOGD("_ZN7AwbAlgo27predictAWBGainCust_DaylightEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictPWBGain() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14predictPWBGainEv(void) {
    ALOGD("_ZN7AwbAlgo14predictPWBGainEv() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateEqvGain(AWB_LIGHT_SRC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo16calculateEqvGainE15AWB_LIGHT_SRC_T(void) {
    ALOGD("_ZN7AwbAlgo16calculateEqvGainE15AWB_LIGHT_SRC_T() called");
    return 0;
}

/* Demangled: AwbAlgo::getAwbState() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo11getAwbStateEv(void) {
    ALOGD("_ZN7AwbAlgo11getAwbStateEv() called");
    return 0;
}

/* Demangled: AwbAlgo::aaoConverter(void*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12aaoConverterEPvij(void) {
    ALOGD("_ZN7AwbAlgo12aaoConverterEPvij() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: AwbAlgo::getVersionInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14getVersionInfoEv(void) {
    ALOGD("_ZN7AwbAlgo14getVersionInfoEv() called");
    return 0;
}

/* Demangled: AwbAlgo::accumulateMixGain(int, AWB_GAIN_T, AWB_LIGHT_PROBABILITY_T&, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo17accumulateMixGainEi10AWB_GAIN_TR23AWB_LIGHT_PROBABILITY_TRS0_(void) {
    ALOGD("_ZN7AwbAlgo17accumulateMixGainEi10AWB_GAIN_TR23AWB_LIGHT_PROBABILITY_TRS0_() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_Strobe() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo25predictAWBGainCust_StrobeEv(void) {
    ALOGD("_ZN7AwbAlgo25predictAWBGainCust_StrobeEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_Shade() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo22predictAWBGainIP_ShadeEv(void) {
    ALOGD("_ZN7AwbAlgo22predictAWBGainIP_ShadeEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getLutIndex_ext(int, int&, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15getLutIndex_extEiRiS0_ii(void) {
    ALOGD("_ZN7AwbAlgo15getLutIndex_extEiRiS0_ii() called");
    return 0;
}

/* Exported Object: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Demangled: AwbAlgo::updateAWBCustGain(AWB_GAIN_T const&, AWB_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo17updateAWBCustGainERK10AWB_GAIN_TR12AWB_OUTPUT_T(void) {
    ALOGD("_ZN7AwbAlgo17updateAWBCustGainERK10AWB_GAIN_TR12AWB_OUTPUT_T() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_Daylight() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo25predictAWBGainIP_DaylightEv(void) {
    ALOGD("_ZN7AwbAlgo25predictAWBGainIP_DaylightEv() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: AwbAlgo::AWB() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo3AWBEv(void) {
    ALOGD("_ZN7AwbAlgo3AWBEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getLightProb0() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13getLightProb0Ev(void) {
    ALOGD("_ZN7AwbAlgo13getLightProb0Ev() called");
    return 0;
}

/* Demangled: AwbAlgo::predictPWBGain_ReferenceArea() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo28predictPWBGain_ReferenceAreaEv(void) {
    ALOGD("_ZN7AwbAlgo28predictPWBGain_ReferenceAreaEv() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: awb_lv_sort(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T) */
extern "C" __attribute__((visibility("default"))) int _Z11awb_lv_sort24AWB_TEMPORAL_BUFF_INFO_TS_(void) {
    ALOGD("_Z11awb_lv_sort24AWB_TEMPORAL_BUFF_INFO_TS_() called");
    return 0;
}

/* Demangled: AwbAlgo::gain_rgb_to_rwb(AWB_GAIN_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15gain_rgb_to_rwbE10AWB_GAIN_TRS0_(void) {
    ALOGD("_ZN7AwbAlgo15gain_rgb_to_rwbE10AWB_GAIN_TRS0_() called");
    return 0;
}

/* Demangled: AwbAlgo::gain_rwb_to_rgb(AWB_GAIN_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15gain_rwb_to_rgbE10AWB_GAIN_TRS0_(void) {
    ALOGD("_ZN7AwbAlgo15gain_rwb_to_rgbE10AWB_GAIN_TRS0_() called");
    return 0;
}

/* Demangled: AwbAlgo::getAWBParentStat(AWB_PARENT_BLK_STAT_T*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo16getAWBParentStatEP21AWB_PARENT_BLK_STAT_TPiS2_(void) {
    ALOGD("_ZN7AwbAlgo16getAWBParentStatEP21AWB_PARENT_BLK_STAT_TPiS2_() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_Shade() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo20predictAWBGain_ShadeEv(void) {
    ALOGD("_ZN7AwbAlgo20predictAWBGain_ShadeEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_WarmFluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo34predictAWBGainCust_WarmFluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo34predictAWBGainCust_WarmFluorescentEv() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: AwbAlgo::getLutIndexEx(int, int&, int&, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13getLutIndexExEiRiS0_Pii(void) {
    ALOGD("_ZN7AwbAlgo13getLutIndexExEiRiS0_Pii() called");
    return 0;
}

/* Demangled: AwbAlgo::setAWBMode(LIB3A_AWB_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo10setAWBModeE16LIB3A_AWB_MODE_T(void) {
    ALOGD("_ZN7AwbAlgo10setAWBModeE16LIB3A_AWB_MODE_T() called");
    return 0;
}

/* Demangled: AwbAlgo::InvCompensatedGainRGB(int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo21InvCompensatedGainRGBEiiiiiii(void) {
    ALOGD("_ZN7AwbAlgo21InvCompensatedGainRGBEiiiiiii() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateLightRotatedXY() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23calculateLightRotatedXYEv(void) {
    ALOGD("_ZN7AwbAlgo23calculateLightRotatedXYEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getFDAWBWindowInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo18getFDAWBWindowInfoEv(void) {
    ALOGD("_ZN7AwbAlgo18getFDAWBWindowInfoEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_CWF() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo20predictAWBGainIP_CWFEv(void) {
    ALOGD("_ZN7AwbAlgo20predictAWBGainIP_CWFEv() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: std::__1::__list_iterator<AWB_TEMPORAL_BUFF_INFO_T, void*> std::__1::list<AWB_TEMPORAL_BUFF_INFO_T, std::__1::allocator<AWB_TEMPORAL_BUFF_INFO_T> >::__sort<int (*)(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T)>(std::__1::__list_iterator<AWB_TEMPORAL_BUFF_INFO_T, void*>, std::__1::__list_iterator<AWB_TEMPORAL_BUFF_INFO_T, void*>, unsigned int, int (*&)(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listI24AWB_TEMPORAL_BUFF_INFO_TNS_9allocatorIS1_EEE6__sortIPFiS1_S1_EEENS_15__list_iteratorIS1_PvEESA_SA_jRT_(void) {
    ALOGD("_ZNSt3__14listI24AWB_TEMPORAL_BUFF_INFO_TNS_9allocatorIS1_EEE6__sortIPFiS1_S1_EEENS_15__list_iteratorIS1_PvEESA_SA_jRT_() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_Tungsten() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23predictAWBGain_TungstenEv(void) {
    ALOGD("_ZN7AwbAlgo23predictAWBGain_TungstenEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_Fluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo30predictAWBGainCust_FluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo30predictAWBGainCust_FluorescentEv() called");
    return 0;
}

/* Demangled: AwbAlgo::awb_spatial_temporal_xy_predictor(XY_COORDINATE_T&, XY_COORDINATE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo33awb_spatial_temporal_xy_predictorER15XY_COORDINATE_TS1_(void) {
    ALOGD("_ZN7AwbAlgo33awb_spatial_temporal_xy_predictorER15XY_COORDINATE_TS1_() called");
    return 0;
}

/* Exported Object: vtable for NS3A::IAwbAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A8IAwbAlgoE = NULL;

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: AwbAlgo::getParentBlkStat() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo16getParentBlkStatEv(void) {
    ALOGD("_ZN7AwbAlgo16getParentBlkStatEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getAwbProcessCycle(AWB_INPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo18getAwbProcessCycleER11AWB_INPUT_T(void) {
    ALOGD("_ZN7AwbAlgo18getAwbProcessCycleER11AWB_INPUT_T() called");
    return 0;
}

/* Demangled: AwbAlgo::gainLimit(AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo9gainLimitER10AWB_GAIN_T(void) {
    ALOGD("_ZN7AwbAlgo9gainLimitER10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: AwbAlgo::SaveAwbCoreInfo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15SaveAwbCoreInfoEPKc(void) {
    ALOGD("_ZN7AwbAlgo15SaveAwbCoreInfoEPKc() called");
    return 0;
}

/* Demangled: AwbAlgo::shadeProcessingMode1(AWB_LIGHT_SRC_T, XY_COORDINATE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo20shadeProcessingMode1E15AWB_LIGHT_SRC_T15XY_COORDINATE_T(void) {
    ALOGD("_ZN7AwbAlgo20shadeProcessingMode1E15AWB_LIGHT_SRC_T15XY_COORDINATE_T() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: AwbAlgo::getLutValue_ext(int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15getLutValue_extEiPiii(void) {
    ALOGD("_ZN7AwbAlgo15getLutValue_extEiPiii() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateDaylightLocusOffset(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo28calculateDaylightLocusOffsetEi(void) {
    ALOGD("_ZN7AwbAlgo28calculateDaylightLocusOffsetEi() called");
    return 0;
}

/* Demangled: AwbAlgo::~AwbAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgoD1Ev(void) {
    ALOGD("_ZN7AwbAlgoD1Ev() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateExtraColor() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo19calculateExtraColorEv(void) {
    ALOGD("_ZN7AwbAlgo19calculateExtraColorEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_DaylightFluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo36predictAWBGainIP_DaylightFluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo36predictAWBGainIP_DaylightFluorescentEv() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_Strobe() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo21predictAWBGain_StrobeEv(void) {
    ALOGD("_ZN7AwbAlgo21predictAWBGain_StrobeEv() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: AwbAlgo::resetCoreState() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14resetCoreStateEv(void) {
    ALOGD("_ZN7AwbAlgo14resetCoreStateEv() called");
    return 0;
}

/* Demangled: AwbAlgo::shadeProcessingMode0(XY_COORDINATE_T, XY_COORDINATE_T, XY_COORDINATE_T, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo20shadeProcessingMode0E15XY_COORDINATE_TS0_S0_ii(void) {
    ALOGD("_ZN7AwbAlgo20shadeProcessingMode0E15XY_COORDINATE_TS0_S0_ii() called");
    return 0;
}

/* Demangled: AwbAlgo::awb_temporal_xy_predictor(AWB_TEMPORAL_BUFF_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo25awb_temporal_xy_predictorER24AWB_TEMPORAL_BUFF_INFO_T(void) {
    ALOGD("_ZN7AwbAlgo25awb_temporal_xy_predictorER24AWB_TEMPORAL_BUFF_INFO_T() called");
    return 0;
}

/* Demangled: AwbAlgo::doDebugProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14doDebugProcessEv(void) {
    ALOGD("_ZN7AwbAlgo14doDebugProcessEv() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateFeatureProcess(AWB_LIGHT_SRC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23calculateFeatureProcessE15AWB_LIGHT_SRC_T(void) {
    ALOGD("_ZN7AwbAlgo23calculateFeatureProcessE15AWB_LIGHT_SRC_T() called");
    return 0;
}

/* Demangled: AwbAlgo::enqueue_awb_temporal_buffer(AWB_GAIN_T, AWB_GAIN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo27enqueue_awb_temporal_bufferE10AWB_GAIN_TS0_(void) {
    ALOGD("_ZN7AwbAlgo27enqueue_awb_temporal_bufferE10AWB_GAIN_TS0_() called");
    return 0;
}

/* Demangled: AwbAlgo::setAWBHdrMode(AWB_HDR_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13setAWBHdrModeE14AWB_HDR_MODE_T(void) {
    ALOGD("_ZN7AwbAlgo13setAWBHdrModeE14AWB_HDR_MODE_T() called");
    return 0;
}

/* Demangled: AwbAlgo::backupDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15backupDebugInfoEv(void) {
    ALOGD("_ZN7AwbAlgo15backupDebugInfoEv() called");
    return 0;
}

/* Demangled: AwbAlgo::reformatAWBGain(LIB3A_AWB_MODE_T, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15reformatAWBGainE16LIB3A_AWB_MODE_TR10AWB_GAIN_TS2_S2_S2_S2_S2_(void) {
    ALOGD("_ZN7AwbAlgo15reformatAWBGainE16LIB3A_AWB_MODE_TR10AWB_GAIN_TS2_S2_S2_S2_S2_() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: AwbAlgo::gainNormalize(AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13gainNormalizeER10AWB_GAIN_T(void) {
    ALOGD("_ZN7AwbAlgo13gainNormalizeER10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_Strobe() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23predictAWBGainIP_StrobeEv(void) {
    ALOGD("_ZN7AwbAlgo23predictAWBGainIP_StrobeEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getCCT() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo6getCCTEv(void) {
    ALOGD("_ZN7AwbAlgo6getCCTEv() called");
    return 0;
}

/* Demangled: AwbAlgo::handleCustGain(AWB_GAIN_T&, AWB_GAIN_T&, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14handleCustGainER10AWB_GAIN_TS1_S1_(void) {
    ALOGD("_ZN7AwbAlgo14handleCustGainER10AWB_GAIN_TS1_S1_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_Fluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo28predictAWBGainIP_FluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo28predictAWBGainIP_FluorescentEv() called");
    return 0;
}

/* Demangled: AwbAlgo::AwbAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgoC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN7AwbAlgoC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_WarmFluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo30predictAWBGain_WarmFluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo30predictAWBGain_WarmFluorescentEv() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateEqvDaylightLocusProb(AWB_LIGHT_SRC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo29calculateEqvDaylightLocusProbE15AWB_LIGHT_SRC_T(void) {
    ALOGD("_ZN7AwbAlgo29calculateEqvDaylightLocusProbE15AWB_LIGHT_SRC_T() called");
    return 0;
}

/* Demangled: AwbAlgo::getLightProb1() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13getLightProb1Ev(void) {
    ALOGD("_ZN7AwbAlgo13getLightProb1Ev() called");
    return 0;
}

/* Demangled: AwbAlgo::updateAWBParam(AWB_INIT_INPUT_S&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14updateAWBParamER16AWB_INIT_INPUT_S(void) {
    ALOGD("_ZN7AwbAlgo14updateAWBParamER16AWB_INIT_INPUT_S() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: AwbAlgo::estimateCCT() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo11estimateCCTEv(void) {
    ALOGD("_ZN7AwbAlgo11estimateCCTEv() called");
    return 0;
}

/* Demangled: AwbAlgo::gainDivide_ext(AWB_GAIN_T&, AWB_GAIN_T, AWB_GAIN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14gainDivide_extER10AWB_GAIN_TS0_S0_(void) {
    ALOGD("_ZN7AwbAlgo14gainDivide_extER10AWB_GAIN_TS0_S0_() called");
    return 0;
}

/* Demangled: AwbAlgo::updatePreGain1Param() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo19updatePreGain1ParamEv(void) {
    ALOGD("_ZN7AwbAlgo19updatePreGain1ParamEv() called");
    return 0;
}

/* Demangled: AwbAlgo::handleAWB(AWB_INPUT_T&, AWB_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo9handleAWBER11AWB_INPUT_TR12AWB_OUTPUT_T(void) {
    ALOGD("_ZN7AwbAlgo9handleAWBER11AWB_INPUT_TR12AWB_OUTPUT_T() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: awb_neutral_sort(AWB_TEMPORAL_BUFF_INFO_T, AWB_TEMPORAL_BUFF_INFO_T) */
extern "C" __attribute__((visibility("default"))) int _Z16awb_neutral_sort24AWB_TEMPORAL_BUFF_INFO_TS_(void) {
    ALOGD("_Z16awb_neutral_sort24AWB_TEMPORAL_BUFF_INFO_TS_() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_DaylightFluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo38predictAWBGainCust_DaylightFluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo38predictAWBGainCust_DaylightFluorescentEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getAWBInfo(AWB_CUST_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo10getAWBInfoER15AWB_CUST_INFO_T(void) {
    ALOGD("_ZN7AwbAlgo10getAWBInfoER15AWB_CUST_INFO_T() called");
    return 0;
}

/* Demangled: AwbAlgo::getSquareRoot_ext(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo17getSquareRoot_extEi(void) {
    ALOGD("_ZN7AwbAlgo17getSquareRoot_extEi() called");
    return 0;
}

/* Demangled: AwbAlgo::getStrobeAwbRevesion() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo20getStrobeAwbRevesionEv(void) {
    ALOGD("_ZN7AwbAlgo20getStrobeAwbRevesionEv() called");
    return 0;
}

/* Demangled: AwbAlgo::Flash_Awb_calResultGain(FLASH_AWB_CAL_GAIN_INPUT_T&, FLASH_AWB_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23Flash_Awb_calResultGainER26FLASH_AWB_CAL_GAIN_INPUT_TR18FLASH_AWB_OUTPUT_T(void) {
    ALOGD("_ZN7AwbAlgo23Flash_Awb_calResultGainER26FLASH_AWB_CAL_GAIN_INPUT_TR18FLASH_AWB_OUTPUT_T() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: AwbAlgo::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo11getInstanceEi(void) {
    ALOGD("_ZN7AwbAlgo11getInstanceEi() called");
    return 0;
}

/* Demangled: AwbAlgo::convergenceSpeedControl() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23convergenceSpeedControlEv(void) {
    ALOGD("_ZN7AwbAlgo23convergenceSpeedControlEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateDaylightLocusOffset_ext(AWB_ALGO_DATA_T*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo32calculateDaylightLocusOffset_extEP15AWB_ALGO_DATA_Tiii(void) {
    ALOGD("_ZN7AwbAlgo32calculateDaylightLocusOffset_extEP15AWB_ALGO_DATA_Tiii() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: AwbAlgo::PWB() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo3PWBEv(void) {
    ALOGD("_ZN7AwbAlgo3PWBEv() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_Daylight() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23predictAWBGain_DaylightEv(void) {
    ALOGD("_ZN7AwbAlgo23predictAWBGain_DaylightEv() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateSubwindowProcess(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo25calculateSubwindowProcessEi(void) {
    ALOGD("_ZN7AwbAlgo25calculateSubwindowProcessEi() called");
    return 0;
}

/* Demangled: AwbAlgo::~AwbAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgoD2Ev(void) {
    ALOGD("_ZN7AwbAlgoD2Ev() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateSpatGain(AWB_LIGHT_SRC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo17calculateSpatGainE15AWB_LIGHT_SRC_T(void) {
    ALOGD("_ZN7AwbAlgo17calculateSpatGainE15AWB_LIGHT_SRC_T() called");
    return 0;
}

/* Demangled: AwbAlgo::saveASDInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo11saveASDInfoEv(void) {
    ALOGD("_ZN7AwbAlgo11saveASDInfoEv() called");
    return 0;
}

/* Demangled: AwbAlgo::featureDetection(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo16featureDetectionEii(void) {
    ALOGD("_ZN7AwbAlgo16featureDetectionEii() called");
    return 0;
}

/* Demangled: AwbAlgo::sunsetCompensation(XY_COORDINATE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo18sunsetCompensationER15XY_COORDINATE_T(void) {
    ALOGD("_ZN7AwbAlgo18sunsetCompensationER15XY_COORDINATE_T() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCustSampleCode(AWB_LIGHT_SRC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo28predictAWBGainCustSampleCodeE15AWB_LIGHT_SRC_T(void) {
    ALOGD("_ZN7AwbAlgo28predictAWBGainCustSampleCodeE15AWB_LIGHT_SRC_T() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo14predictAWBGainEv(void) {
    ALOGD("_ZN7AwbAlgo14predictAWBGainEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_Tungsten() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo27predictAWBGainCust_TungstenEv(void) {
    ALOGD("_ZN7AwbAlgo27predictAWBGainCust_TungstenEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: AwbAlgo::getASDInfo(AWB_ASD_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo10getASDInfoER14AWB_ASD_INFO_T(void) {
    ALOGD("_ZN7AwbAlgo10getASDInfoER14AWB_ASD_INFO_T() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainCust_CWF() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo22predictAWBGainCust_CWFEv(void) {
    ALOGD("_ZN7AwbAlgo22predictAWBGainCust_CWFEv() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: AwbAlgo::resetMemory(AWB_CORE_STATE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo11resetMemoryE19AWB_CORE_STATE_ENUM(void) {
    ALOGD("_ZN7AwbAlgo11resetMemoryE19AWB_CORE_STATE_ENUM() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_Fluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo26predictAWBGain_FluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo26predictAWBGain_FluorescentEv() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: AwbAlgo::estimateLight() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13estimateLightEv(void) {
    ALOGD("_ZN7AwbAlgo13estimateLightEv() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGain_CWF() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo18predictAWBGain_CWFEv(void) {
    ALOGD("_ZN7AwbAlgo18predictAWBGain_CWFEv() called");
    return 0;
}

/* Demangled: AwbAlgo::updateFrameBasedThreshold(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo25updateFrameBasedThresholdEi(void) {
    ALOGD("_ZN7AwbAlgo25updateFrameBasedThresholdEi() called");
    return 0;
}

/* Exported Object: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: AwbAlgo::getAWBOutInfo(AWB_CUST_INFO_OUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13getAWBOutInfoER19AWB_CUST_INFO_OUT_T(void) {
    ALOGD("_ZN7AwbAlgo13getAWBOutInfoER19AWB_CUST_INFO_OUT_T() called");
    return 0;
}

/* Demangled: AwbAlgo::rgb_to_gain_ext(int, int, int, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15rgb_to_gain_extEiiiR10AWB_GAIN_T(void) {
    ALOGD("_ZN7AwbAlgo15rgb_to_gain_extEiiiR10AWB_GAIN_T() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: AwbAlgo::setAWBStatConfig(AWB_STAT_CONFIG_T const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo16setAWBStatConfigERK17AWB_STAT_CONFIG_Tii(void) {
    ALOGD("_ZN7AwbAlgo16setAWBStatConfigERK17AWB_STAT_CONFIG_Tii() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_Tungsten() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo25predictAWBGainIP_TungstenEv(void) {
    ALOGD("_ZN7AwbAlgo25predictAWBGainIP_TungstenEv() called");
    return 0;
}

/* Demangled: NS3A::IAwbAlgo* NS3A::IAwbAlgo::createInstance<(NS3A::EAAAOpt_T)0>(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8IAwbAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i(void) {
    ALOGD("_ZN4NS3A8IAwbAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i() called");
    return 0;
}

/* Demangled: AwbAlgo::getLightProb2() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo13getLightProb2Ev(void) {
    ALOGD("_ZN7AwbAlgo13getLightProb2Ev() called");
    return 0;
}

/* Demangled: AwbAlgo::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15destroyInstanceEv(void) {
    ALOGD("_ZN7AwbAlgo15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getFDAWBWindowContentInfo(AWB_WINDOW_T*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo25getFDAWBWindowContentInfoEP12AWB_WINDOW_Ti(void) {
    ALOGD("_ZN7AwbAlgo25getFDAWBWindowContentInfoEP12AWB_WINDOW_Ti() called");
    return 0;
}

/* Demangled: AwbAlgo::getSceneLV() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo10getSceneLVEv(void) {
    ALOGD("_ZN7AwbAlgo10getSceneLVEv() called");
    return 0;
}

/* Demangled: AwbAlgo::debugAwbGain(int, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12debugAwbGainEiR10AWB_GAIN_T(void) {
    ALOGD("_ZN7AwbAlgo12debugAwbGainEiR10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: AwbAlgo::enqueue_awb_info(AWB_GAIN_T, AWB_GAIN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo16enqueue_awb_infoE10AWB_GAIN_TS0_(void) {
    ALOGD("_ZN7AwbAlgo16enqueue_awb_infoE10AWB_GAIN_TS0_() called");
    return 0;
}

/* Exported Object: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: AwbAlgo::getLightProb(AWB_LIGHT_PROBABILITY_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12getLightProbER23AWB_LIGHT_PROBABILITY_T(void) {
    ALOGD("_ZN7AwbAlgo12getLightProbER23AWB_LIGHT_PROBABILITY_T() called");
    return 0;
}

/* Demangled: AwbAlgo::INTERPOLATE_ext(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15INTERPOLATE_extEiiiii(void) {
    ALOGD("_ZN7AwbAlgo15INTERPOLATE_extEiiiii() called");
    return 0;
}

/* Demangled: AwbAlgo::predictAWBGainIP_WarmFluorescent() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo32predictAWBGainIP_WarmFluorescentEv(void) {
    ALOGD("_ZN7AwbAlgo32predictAWBGainIP_WarmFluorescentEv() called");
    return 0;
}

/* Demangled: AwbAlgo::getAWBStat(AWB_INPUT_T&, int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo10getAWBStatER11AWB_INPUT_TiiPv(void) {
    ALOGD("_ZN7AwbAlgo10getAWBStatER11AWB_INPUT_TiiPv() called");
    return 0;
}

/* Exported Object: vtable for AwbAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTV7AwbAlgo = NULL;

/* Demangled: AwbAlgo::getDebugInfo(AWB_DEBUG_INFO_T&, AWB_DEBUG_DATA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12getDebugInfoER16AWB_DEBUG_INFO_TR16AWB_DEBUG_DATA_T(void) {
    ALOGD("_ZN7AwbAlgo12getDebugInfoER16AWB_DEBUG_INFO_TR16AWB_DEBUG_DATA_T() called");
    return 0;
}

/* Demangled: AwbAlgo::getAWBFrameInfo(AWB_CUST_INFO_FRAME_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15getAWBFrameInfoER21AWB_CUST_INFO_FRAME_T(void) {
    ALOGD("_ZN7AwbAlgo15getAWBFrameInfoER21AWB_CUST_INFO_FRAME_T() called");
    return 0;
}

/* Exported Object: vtable for AwbAlgoDev<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AwbAlgoDevILN11NSIspTuning12ESensorDev_TE16EE = NULL;

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: AwbAlgo::get2LutValue(int, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12get2LutValueEiPiS0_i(void) {
    ALOGD("_ZN7AwbAlgo12get2LutValueEiPiS0_i() called");
    return 0;
}

/* Demangled: AwbAlgo::getMWBLightArea(int, LIGHT_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo15getMWBLightAreaEiR12LIGHT_AREA_T(void) {
    ALOGD("_ZN7AwbAlgo15getMWBLightAreaEiR12LIGHT_AREA_T() called");
    return 0;
}

/* Demangled: AwbAlgo::getDefaultPWBGain() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo17getDefaultPWBGainEv(void) {
    ALOGD("_ZN7AwbAlgo17getDefaultPWBGainEv() called");
    return 0;
}

/* Demangled: AwbAlgo::setAWBFDArea(AWB_FD_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12setAWBFDAreaEP13AWB_FD_INFO_T(void) {
    ALOGD("_ZN7AwbAlgo12setAWBFDAreaEP13AWB_FD_INFO_T() called");
    return 0;
}

/* Demangled: AwbAlgo::calculateStatisticLimitMode2(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo28calculateStatisticLimitMode2Eiiiii(void) {
    ALOGD("_ZN7AwbAlgo28calculateStatisticLimitMode2Eiiiii() called");
    return 0;
}

/* Demangled: AwbAlgo::setAWBInput(AWB_INPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo11setAWBInputER11AWB_INPUT_T(void) {
    ALOGD("_ZN7AwbAlgo11setAWBInputER11AWB_INPUT_T() called");
    return 0;
}

/* Demangled: AwbAlgo::awb_spatial_xy_predictor(int, int, int, int, int, XY_COORDINATE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo24awb_spatial_xy_predictorEiiiiiR15XY_COORDINATE_T(void) {
    ALOGD("_ZN7AwbAlgo24awb_spatial_xy_predictorEiiiiiR15XY_COORDINATE_T() called");
    return 0;
}

/* Demangled: AwbAlgo::calculatePreferencColor(AWB_LIGHT_SRC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo23calculatePreferencColorE15AWB_LIGHT_SRC_T(void) {
    ALOGD("_ZN7AwbAlgo23calculatePreferencColorE15AWB_LIGHT_SRC_T() called");
    return 0;
}

/* Demangled: AwbAlgo::getLightProb() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo12getLightProbEv(void) {
    ALOGD("_ZN7AwbAlgo12getLightProbEv() called");
    return 0;
}

/* Demangled: AwbAlgo::AwbAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgoC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN7AwbAlgoC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: AwbAlgo::disableAWBMultiFrmUpdate() */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo24disableAWBMultiFrmUpdateEv(void) {
    ALOGD("_ZN7AwbAlgo24disableAWBMultiFrmUpdateEv() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: AwbAlgo::getPostLightProb(int, AWB_LIGHT_PROBABILITY_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo16getPostLightProbEiR23AWB_LIGHT_PROBABILITY_T(void) {
    ALOGD("_ZN7AwbAlgo16getPostLightProbEiR23AWB_LIGHT_PROBABILITY_T() called");
    return 0;
}

/* Demangled: AwbAlgo::calculatePreferencColor_ext(int, AWB_ALGO_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AwbAlgo27calculatePreferencColor_extEiP15AWB_ALGO_DATA_T(void) {
    ALOGD("_ZN7AwbAlgo27calculatePreferencColor_extEiP15AWB_ALGO_DATA_T() called");
    return 0;
}
