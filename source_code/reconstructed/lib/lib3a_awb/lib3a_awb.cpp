/*
 * Reverse-Engineered Source for: lib3a.awb.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_awb"

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
#include "lib3a_awb.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: AwbAlgoIp::xryr_to_rgb(XY_COORDINATE_T, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11xryr_to_rgbE15XY_COORDINATE_TRiS1_S1_(void) {
    ALOGD("_ZN9AwbAlgoIp11xryr_to_rgbE15XY_COORDINATE_TRiS1_S1_() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstTargetXY(XY_COORDINATE_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18getFaceAstTargetXYE15XY_COORDINATE_Ti(void) {
    ALOGD("_ZN9AwbAlgoIp18getFaceAstTargetXYE15XY_COORDINATE_Ti() called");
    return 0;
}

/* Demangled: AwbAlgoIp::calcFaceAstProb(int, XY_COORDINATE_T, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp15calcFaceAstProbEi15XY_COORDINATE_TiPi(void) {
    ALOGD("_ZN9AwbAlgoIp15calcFaceAstProbEi15XY_COORDINATE_TiPi() called");
    return 0;
}

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: AwbAlgoIp::xryr_to_gain(XY_COORDINATE_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp12xryr_to_gainE15XY_COORDINATE_TR10AWB_GAIN_T(void) {
    ALOGD("_ZN9AwbAlgoIp12xryr_to_gainE15XY_COORDINATE_TR10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: AwbAlgoIp::faceAstStableCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18faceAstStableCheckEv(void) {
    ALOGD("_ZN9AwbAlgoIp18faceAstStableCheckEv() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Exported Object: AwbAlgoIp::m_i4AWBLogLUT1 */
extern "C" __attribute__((visibility("default"))) void* _ZN9AwbAlgoIp14m_i4AWBLogLUT1E = NULL;

/* Demangled: AwbAlgoIp::getFdConfidence() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp15getFdConfidenceEv(void) {
    ALOGD("_ZN9AwbAlgoIp15getFdConfidenceEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18getFaceAstStrengthEii(void) {
    ALOGD("_ZN9AwbAlgoIp18getFaceAstStrengthEii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstConfProb4() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19getFaceAstConfProb4Ev(void) {
    ALOGD("_ZN9AwbAlgoIp19getFaceAstConfProb4Ev() called");
    return 0;
}

/* Demangled: AwbAlgoIp::AwbAlgoIp() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIpC1Ev(void) {
    ALOGD("_ZN9AwbAlgoIpC1Ev() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstConfidence() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp20getFaceAstConfidenceEv(void) {
    ALOGD("_ZN9AwbAlgoIp20getFaceAstConfidenceEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::resetFaceAstBuffQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21resetFaceAstBuffQueueEv(void) {
    ALOGD("_ZN9AwbAlgoIp21resetFaceAstBuffQueueEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::faceAWBTemporalSmooth(AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21faceAWBTemporalSmoothER10AWB_GAIN_T(void) {
    ALOGD("_ZN9AwbAlgoIp21faceAWBTemporalSmoothER10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: AwbAlgoIp::calIllumInvCompensated(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp22calIllumInvCompensatedEiii(void) {
    ALOGD("_ZN9AwbAlgoIp22calIllumInvCompensatedEiii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::gainDivide(AWB_GAIN_T&, AWB_GAIN_T, AWB_GAIN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp10gainDivideER10AWB_GAIN_TS0_S0_(void) {
    ALOGD("_ZN9AwbAlgoIp10gainDivideER10AWB_GAIN_TS0_S0_() called");
    return 0;
}

/* Demangled: AwbAlgoIp::isFaceAWBSceneChange(AWB_GAIN_T&, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp20isFaceAWBSceneChangeER10AWB_GAIN_TS1_(void) {
    ALOGD("_ZN9AwbAlgoIp20isFaceAWBSceneChangeER10AWB_GAIN_TS1_() called");
    return 0;
}

/* Demangled: AwbAlgoIp::INTERPOLATE(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11INTERPOLATEEiiiiii(void) {
    ALOGD("_ZN9AwbAlgoIp11INTERPOLATEEiiiiii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstConfProb0() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19getFaceAstConfProb0Ev(void) {
    ALOGD("_ZN9AwbAlgoIp19getFaceAstConfProb0Ev() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getCTProb() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp9getCTProbEv(void) {
    ALOGD("_ZN9AwbAlgoIp9getCTProbEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getAntiLog2(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11getAntiLog2Ei(void) {
    ALOGD("_ZN9AwbAlgoIp11getAntiLog2Ei() called");
    return 0;
}

/* Demangled: AwbAlgoIp::faceAstFaceGonePreProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp25faceAstFaceGonePreProcessEv(void) {
    ALOGD("_ZN9AwbAlgoIp25faceAstFaceGonePreProcessEv() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: AwbAlgoIp::rgb_to_gain(int, int, int, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11rgb_to_gainEiiiR10AWB_GAIN_T(void) {
    ALOGD("_ZN9AwbAlgoIp11rgb_to_gainEiiiR10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getPanelProb0() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp13getPanelProb0Ev(void) {
    ALOGD("_ZN9AwbAlgoIp13getPanelProb0Ev() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getGenderInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp13getGenderInfoEv(void) {
    ALOGD("_ZN9AwbAlgoIp13getGenderInfoEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAWBRefTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19getFaceAWBRefTargetEv(void) {
    ALOGD("_ZN9AwbAlgoIp19getFaceAWBRefTargetEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::enqueueFaceAstBuff() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18enqueueFaceAstBuffEv(void) {
    ALOGD("_ZN9AwbAlgoIp18enqueueFaceAstBuffEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: AwbAlgoIp::getParentBlkWeight(int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18getParentBlkWeightEiiRiS0_(void) {
    ALOGD("_ZN9AwbAlgoIp18getParentBlkWeightEiiRiS0_() called");
    return 0;
}

/* Demangled: AwbAlgoIp::faceAstEnqueueCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19faceAstEnqueueCheckEv(void) {
    ALOGD("_ZN9AwbAlgoIp19faceAstEnqueueCheckEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstConfProb1(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19getFaceAstConfProb1Ei(void) {
    ALOGD("_ZN9AwbAlgoIp19getFaceAstConfProb1Ei() called");
    return 0;
}

/* Demangled: AwbAlgoIp::aaoConverterMultiCal(void*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp20aaoConverterMultiCalEPvij(void) {
    ALOGD("_ZN9AwbAlgoIp20aaoConverterMultiCalEPvij() called");
    return 0;
}

/* Demangled: AwbAlgoIp::LOG10(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp5LOG10Ei(void) {
    ALOGD("_ZN9AwbAlgoIp5LOG10Ei() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAWBPrefGain() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18getFaceAWBPrefGainEv(void) {
    ALOGD("_ZN9AwbAlgoIp18getFaceAWBPrefGainEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::softwareStatisticOpt() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp20softwareStatisticOptEv(void) {
    ALOGD("_ZN9AwbAlgoIp20softwareStatisticOptEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getSquareRoot(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp13getSquareRootEi(void) {
    ALOGD("_ZN9AwbAlgoIp13getSquareRootEi() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: AwbAlgoIp::AwbAlgoIp() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIpC2Ev(void) {
    ALOGD("_ZN9AwbAlgoIpC2Ev() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: AwbAlgoIp::rgb_to_xryr(int, int, int, XY_COORDINATE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11rgb_to_xryrEiiiR15XY_COORDINATE_T(void) {
    ALOGD("_ZN9AwbAlgoIp11rgb_to_xryrEiiiR15XY_COORDINATE_T() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAWBGainRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19getFaceAWBGainRatioEv(void) {
    ALOGD("_ZN9AwbAlgoIp19getFaceAWBGainRatioEv() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getAWBStatistic(AWB_INPUT_T&, int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp15getAWBStatisticER11AWB_INPUT_TiiPv(void) {
    ALOGD("_ZN9AwbAlgoIp15getAWBStatisticER11AWB_INPUT_TiiPv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::TargetConvergeCtrl() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18TargetConvergeCtrlEv(void) {
    ALOGD("_ZN9AwbAlgoIp18TargetConvergeCtrlEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: AwbAlgoIp::faceAWBTemporalSmooth(AWB_GAIN_T, AWB_GAIN_T, AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21faceAWBTemporalSmoothE10AWB_GAIN_TS0_RS0_(void) {
    ALOGD("_ZN9AwbAlgoIp21faceAWBTemporalSmoothE10AWB_GAIN_TS0_RS0_() called");
    return 0;
}

/* Demangled: AwbAlgoIp::restoreFaceAstTempInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp22restoreFaceAstTempInfoEv(void) {
    ALOGD("_ZN9AwbAlgoIp22restoreFaceAstTempInfoEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getOversatProb() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp14getOversatProbEv(void) {
    ALOGD("_ZN9AwbAlgoIp14getOversatProbEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::awb_face_spatial_gain_comp() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp26awb_face_spatial_gain_compEv(void) {
    ALOGD("_ZN9AwbAlgoIp26awb_face_spatial_gain_compEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::calIllumDumpBuffer(unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp18calIllumDumpBufferEPhii(void) {
    ALOGD("_ZN9AwbAlgoIp18calIllumDumpBufferEPhii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::rgb_to_hsb(int, int, int, AWB_HSB_STAT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp10rgb_to_hsbEiiiR14AWB_HSB_STAT_T(void) {
    ALOGD("_ZN9AwbAlgoIp10rgb_to_hsbEiiiR14AWB_HSB_STAT_T() called");
    return 0;
}

/* Exported Object: AwbAlgoIp::m_i4AWBLogLUT2 */
extern "C" __attribute__((visibility("default"))) void* _ZN9AwbAlgoIp14m_i4AWBLogLUT2E = NULL;

/* Demangled: AwbAlgoIp::calcPortraitInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp16calcPortraitInfoEv(void) {
    ALOGD("_ZN9AwbAlgoIp16calcPortraitInfoEv() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: AwbAlgoIp::PreventPanelDamping(AWB_GAIN_T&, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19PreventPanelDampingER10AWB_GAIN_Tiiiii(void) {
    ALOGD("_ZN9AwbAlgoIp19PreventPanelDampingER10AWB_GAIN_Tiiiii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getPanelProb1() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp13getPanelProb1Ev(void) {
    ALOGD("_ZN9AwbAlgoIp13getPanelProb1Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: AwbAlgoIp::calIllumInvCompensatedGainRGB(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp29calIllumInvCompensatedGainRGBEi(void) {
    ALOGD("_ZN9AwbAlgoIp29calIllumInvCompensatedGainRGBEi() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: AwbAlgoIp::rgb_to_lightindex(int, int, int, LIGHT_AREA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp17rgb_to_lightindexEiiiP12LIGHT_AREA_T(void) {
    ALOGD("_ZN9AwbAlgoIp17rgb_to_lightindexEiiiP12LIGHT_AREA_T() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getPanelProb() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp12getPanelProbEv(void) {
    ALOGD("_ZN9AwbAlgoIp12getPanelProbEv() called");
    return 0;
}

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: AwbAlgoIp::isFaceAWBSceneChange(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp20isFaceAWBSceneChangeEii(void) {
    ALOGD("_ZN9AwbAlgoIp20isFaceAWBSceneChangeEii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::calcFaceAstGain() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp15calcFaceAstGainEv(void) {
    ALOGD("_ZN9AwbAlgoIp15calcFaceAstGainEv() called");
    return 0;
}

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAWBProb() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp14getFaceAWBProbEv(void) {
    ALOGD("_ZN9AwbAlgoIp14getFaceAWBProbEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::~AwbAlgoIp() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIpD1Ev(void) {
    ALOGD("_ZN9AwbAlgoIpD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: AwbAlgoIp::gain_to_xryr(AWB_GAIN_T, XY_COORDINATE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp12gain_to_xryrE10AWB_GAIN_TR15XY_COORDINATE_T(void) {
    ALOGD("_ZN9AwbAlgoIp12gain_to_xryrE10AWB_GAIN_TR15XY_COORDINATE_T() called");
    return 0;
}

/* Demangled: AwbAlgoIp::PortraitDelay(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp13PortraitDelayERi(void) {
    ALOGD("_ZN9AwbAlgoIp13PortraitDelayERi() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstConfProb2() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19getFaceAstConfProb2Ev(void) {
    ALOGD("_ZN9AwbAlgoIp19getFaceAstConfProb2Ev() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceSizeRatio(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp16getFaceSizeRatioEi(void) {
    ALOGD("_ZN9AwbAlgoIp16getFaceSizeRatioEi() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getAntiLog(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp10getAntiLogEi(void) {
    ALOGD("_ZN9AwbAlgoIp10getAntiLogEi() called");
    return 0;
}

/* Demangled: AwbAlgoIp::INTERPOLATE(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11INTERPOLATEEiiiii(void) {
    ALOGD("_ZN9AwbAlgoIp11INTERPOLATEEiiiii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::faceAstPredictProcess(XY_COORDINATE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21faceAstPredictProcessE15XY_COORDINATE_T(void) {
    ALOGD("_ZN9AwbAlgoIp21faceAstPredictProcessE15XY_COORDINATE_T() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getLutValue(int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11getLutValueEiPiii(void) {
    ALOGD("_ZN9AwbAlgoIp11getLutValueEiPiii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstShiftWeight(XY_COORDINATE_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21getFaceAstShiftWeightE15XY_COORDINATE_Ti(void) {
    ALOGD("_ZN9AwbAlgoIp21getFaceAstShiftWeightE15XY_COORDINATE_Ti() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: AwbAlgoIp::FaceGoneProcess(AWB_GAIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp15FaceGoneProcessER10AWB_GAIN_T(void) {
    ALOGD("_ZN9AwbAlgoIp15FaceGoneProcessER10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: AwbAlgoIp::~AwbAlgoIp() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIpD2Ev(void) {
    ALOGD("_ZN9AwbAlgoIpD2Ev() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: AwbAlgoIp::calIllumGetDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp22calIllumGetDebugConfigEv(void) {
    ALOGD("_ZN9AwbAlgoIp22calIllumGetDebugConfigEv() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getParentBlkLightStat(XY_COORDINATE_T, int*, int*, int&, int*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21getParentBlkLightStatE15XY_COORDINATE_TPiS1_RiS1_S2_(void) {
    ALOGD("_ZN9AwbAlgoIp21getParentBlkLightStatE15XY_COORDINATE_TPiS1_RiS1_S2_() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstRefTargetWeightMode0(XY_COORDINATE_T, XY_COORDINATE_T*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode0E15XY_COORDINATE_TPS0_Pi(void) {
    ALOGD("_ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode0E15XY_COORDINATE_TPS0_Pi() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstConfProb3() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19getFaceAstConfProb3Ev(void) {
    ALOGD("_ZN9AwbAlgoIp19getFaceAstConfProb3Ev() called");
    return 0;
}

/* Demangled: AwbAlgoIp::aaoConverterSingleCal(void*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21aaoConverterSingleCalEPvij(void) {
    ALOGD("_ZN9AwbAlgoIp21aaoConverterSingleCalEPvij() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getLutIndex(int, int&, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp11getLutIndexEiRiS0_ii(void) {
    ALOGD("_ZN9AwbAlgoIp11getLutIndexEiRiS0_ii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::awb_face_comp(AWB_GAIN_T&, AWB_GAIN_T&, AWB_SPEED_MODE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp13awb_face_compER10AWB_GAIN_TS1_R16AWB_SPEED_MODE_T(void) {
    ALOGD("_ZN9AwbAlgoIp13awb_face_compER10AWB_GAIN_TS1_R16AWB_SPEED_MODE_T() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAstRefTargetWeightMode1(XY_COORDINATE_T, XY_COORDINATE_T*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode1E15XY_COORDINATE_TPS0_Pi(void) {
    ALOGD("_ZN9AwbAlgoIp30getFaceAstRefTargetWeightMode1E15XY_COORDINATE_TPS0_Pi() called");
    return 0;
}

/* Demangled: AwbAlgoIp::initParentBlkLightStatParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp27initParentBlkLightStatParamEv(void) {
    ALOGD("_ZN9AwbAlgoIp27initParentBlkLightStatParamEv() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: AwbAlgoIp::getFaceAWBRestrictGainRatio(AWB_RG_BG_STAT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp27getFaceAWBRestrictGainRatioER16AWB_RG_BG_STAT_T(void) {
    ALOGD("_ZN9AwbAlgoIp27getFaceAWBRestrictGainRatioER16AWB_RG_BG_STAT_T() called");
    return 0;
}

/* Demangled: AwbAlgoIp::recordFaceAstTempInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp21recordFaceAstTempInfoEv(void) {
    ALOGD("_ZN9AwbAlgoIp21recordFaceAstTempInfoEv() called");
    return 0;
}

/* Demangled: AwbAlgoIp::handleFaceAWBTemporalData() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp25handleFaceAWBTemporalDataEv(void) {
    ALOGD("_ZN9AwbAlgoIp25handleFaceAWBTemporalDataEv() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: AwbAlgoIp::voteLightIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp14voteLightIndexEii(void) {
    ALOGD("_ZN9AwbAlgoIp14voteLightIndexEii() called");
    return 0;
}

/* Demangled: AwbAlgoIp::faceAstPerFrameInit() */
extern "C" __attribute__((visibility("default"))) int _ZN9AwbAlgoIp19faceAstPerFrameInitEv(void) {
    ALOGD("_ZN9AwbAlgoIp19faceAstPerFrameInitEv() called");
    return 0;
}
