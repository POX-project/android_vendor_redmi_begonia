/*
 * Reverse-Engineered Source for: lib3a.ae.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_ae"

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
#include "lib3a_ae.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NS3A::AeAlgoIp::calMotionRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calMotionRatioEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calMotionRatioEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::facePrioritySorting(FACE_PRIOR_ENUM, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp19facePrioritySortingE15FACE_PRIOR_ENUMiPi(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp19facePrioritySortingE15FACE_PRIOR_ENUMiPi() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getHdrConvergeThd() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp17getHdrConvergeThdEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp17getHdrConvergeThdEv() called");
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

/* Demangled: NS3A::AeAlgoIp::DrawAAOWithRect() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp15DrawAAOWithRectEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp15DrawAAOWithRectEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calDCPNInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11calDCPNInfoEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11calDCPNInfoEv() called");
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

/* Demangled: NS3A::AeAlgoIp::getHistgramInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp15getHistgramInfoEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp15getHistgramInfoEv() called");
    return 0;
}

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::parserHdrAEInput(strAEInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16parserHdrAEInputEP10strAEInput(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16parserHdrAEInputEP10strAEInput() called");
    return 0;
}

/* Demangled: std::__1::vector<double, std::__1::allocator<double> >::__append(unsigned int, double const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEjRKd(void) {
    ALOGD("_ZNSt3__16vectorIdNS_9allocatorIdEEE8__appendEjRKd() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrHistProb() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calHdrHistProbEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calHdrHistProbEv() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: __aeabi_cdcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmpeq(void) {
    ALOGD("__aeabi_cdcmpeq() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calCPNInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp10calCPNInfoEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp10calCPNInfoEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getDeltaIndex_v2p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp18getDeltaIndex_v2p0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp18getDeltaIndex_v2p0Ev() called");
    return 0;
}

/* Exported Object: modify1_50 */
extern "C" __attribute__((visibility("default"))) void* modify1_50 = NULL;

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::isStable() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp8isStableEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp8isStableEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrFlickerBase(int (&) [2], unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp17calHdrFlickerBaseERA2_iRj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp17calHdrFlickerBaseERA2_iRj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getFaceAdbProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp18getFaceAdbPropertyEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp18getFaceAdbPropertyEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getxy4096(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp9getxy4096Ejjj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp9getxy4096Ejjj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::setAESatisticBufferAddrIp(void*, AWB_GAIN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp25setAESatisticBufferAddrIpEPv10AWB_GAIN_T(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp25setAESatisticBufferAddrIpEPv10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getMVHDRTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14getMVHDRTargetEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14getMVHDRTargetEv() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getHdrAEStatisticData_v2p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp26getHdrAEStatisticData_v2p0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp26getHdrAEStatisticData_v2p0Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::checkMVHDRHistogramStretch(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp26checkMVHDRHistogramStretchERj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp26checkMVHDRHistogramStretchERj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp12calHdrSmoothEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp12calHdrSmoothEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getMovingRatioTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp17getMovingRatioTblEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp17getMovingRatioTblEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getAppMode() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp10getAppModeEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp10getAppModeEv() called");
    return 0;
}

/* Exported Object: power_2_lshift20_positive */
extern "C" __attribute__((visibility("default"))) void* power_2_lshift20_positive = NULL;

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

/* Demangled: __ledf2 */
extern "C" __attribute__((visibility("default"))) int __ledf2(void) {
    ALOGD("__ledf2() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::TgEscUnderExpSpeedup(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp20TgEscUnderExpSpeedupEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp20TgEscUnderExpSpeedupEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrFloorExp(int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calHdrFloorExpERij(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calHdrFloorExpERij() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::checkMVHDRStable(unsigned int&, eMVHDR_STATE&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16checkMVHDRStableERjR12eMVHDR_STATE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16checkMVHDRStableERjR12eMVHDR_STATE() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: __aeabi_cdcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmple(void) {
    ALOGD("__aeabi_cdcmple() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::isHistConverge() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14isHistConvergeEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14isHistConvergeEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrToneInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calHdrToneInfoEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calHdrToneInfoEv() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrDetector() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calHdrDetectorEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calHdrDetectorEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::CalculateHWFlareValue(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp21CalculateHWFlareValueEij(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp21CalculateHWFlareValueEij() called");
    return 0;
}

/* Exported Object: modify4_46 */
extern "C" __attribute__((visibility("default"))) void* modify4_46 = NULL;

/* Demangled: NS3A::AeAlgoIp::getIHDRTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp13getIHDRTargetEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp13getIHDRTargetEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::faceSortingIdxArray(int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp19faceSortingIdxArrayEiPiS1_S1_(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp19faceSortingIdxArrayEiPiS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getMHDRTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp13getMHDRTargetEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp13getMHDRTargetEv() called");
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

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: __aeabi_dmul */
extern "C" __attribute__((visibility("default"))) int __aeabi_dmul(void) {
    ALOGD("__aeabi_dmul() called");
    return 0;
}

/* Demangled: __aeabi_d2uiz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2uiz(void) {
    ALOGD("__aeabi_d2uiz() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::~AeAlgoIp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIpD0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIpD0Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getMVHDRHSTarget(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16getMVHDRHSTargetERjS1_(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16getMVHDRHSTargetERjS1_() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getMVHDRRatio(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp13getMVHDRRatioEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp13getMVHDRRatioEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getFlareStrengthRatio(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp21getFlareStrengthRatioEj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp21getFlareStrengthRatioEj() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::isReachBoundary() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp15isReachBoundaryEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp15isReachBoundaryEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::TgGetDeltaIndexUnderExp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp23TgGetDeltaIndexUnderExpEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp23TgGetDeltaIndexUnderExpEv() called");
    return 0;
}

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getMeanWExp(int*, int*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11getMeanWExpEPiS1_jjjjjjjjjj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11getMeanWExpEPiS1_jjjjjjjjjj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::AeAlgoIp(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIpC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIpC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrTarget(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp12calHdrTargetERj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp12calHdrTargetERj() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calPSODeltaLimit() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16calPSODeltaLimitEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16calPSODeltaLimitEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getHDRAESmoothIdx(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp17getHDRAESmoothIdxEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp17getHDRAESmoothIdxEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::setmVHDRAESatisticBufferAddrIp(void*, AE_3EXPO_PROC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp30setmVHDRAESatisticBufferAddrIpEPvP20AE_3EXPO_PROC_INFO_T(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp30setmVHDRAESatisticBufferAddrIpEPvP20AE_3EXPO_PROC_INFO_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::~AeAlgoIp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIpD2Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIpD2Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getHdrEqvGain(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp13getHdrEqvGainERj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp13getHdrEqvGainERj() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHistSts(NS3A::AE_HIST_SPEC&, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp10calHistStsERNS_12AE_HIST_SPECEPjji(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp10calHistStsERNS_12AE_HIST_SPECEPjji() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::setAESatisticBufferAddrIp_v4p0(void*, void*, AAO_PROC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp30setAESatisticBufferAddrIp_v4p0EPvS1_P15AAO_PROC_INFO_T(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp30setAESatisticBufferAddrIp_v4p0EPvS1_P15AAO_PROC_INFO_T() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getLimitorRange(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp15getLimitorRangeERi(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp15getLimitorRangeERi() called");
    return 0;
}

/* Exported Object: modify4_50 */
extern "C" __attribute__((visibility("default"))) void* modify4_50 = NULL;

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: NS3A::AeAlgoIp::calcHDRInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11calcHDRInfoEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11calcHDRInfoEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getFlareAlgo(LIB3A_AECAM_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp12getFlareAlgoE18LIB3A_AECAM_MODE_T(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp12getFlareAlgoE18LIB3A_AECAM_MODE_T() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::TgEscOverExpSpeedup(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp19TgEscOverExpSpeedupEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp19TgEscOverExpSpeedupEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Exported Object: modify2_46 */
extern "C" __attribute__((visibility("default"))) void* modify2_46 = NULL;

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getHSAdaptiveProbThd(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp20getHSAdaptiveProbThdERi(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp20getHSAdaptiveProbThdERi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getLinearAEBlockInfo(AAO_PROC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp20getLinearAEBlockInfoEP15AAO_PROC_INFO_T(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp20getLinearAEBlockInfoEP15AAO_PROC_INFO_T() called");
    return 0;
}

/* Demangled: __aeabi_dcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpeq(void) {
    ALOGD("__aeabi_dcmpeq() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: __fixdfdi */
extern "C" __attribute__((visibility("default"))) int __fixdfdi(void) {
    ALOGD("__fixdfdi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrFinalProb() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp15calHdrFinalProbEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp15calHdrFinalProbEv() called");
    return 0;
}

/* Demangled: __fixunsdfsi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfsi(void) {
    ALOGD("__fixunsdfsi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::TgGetDeltaIndexOverExp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp22TgGetDeltaIndexOverExpEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp22TgGetDeltaIndexOverExpEv() called");
    return 0;
}

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getAccBVRatio(unsigned int, NS3A::AeAlgoIp::AE_CONV_COND) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp13getAccBVRatioEjNS0_12AE_CONV_CONDE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp13getAccBVRatioEjNS0_12AE_CONV_CONDE() called");
    return 0;
}

/* Exported Object: start */
extern "C" __attribute__((visibility("default"))) void* start = NULL;

/* Demangled: NS3A::AeAlgoIp::calHdrRatioSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp17calHdrRatioSmoothEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp17calHdrRatioSmoothEv() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrGeometryProb() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp18calHdrGeometryProbEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp18calHdrGeometryProbEv() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::checkCNNStablize() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16checkCNNStablizeEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16checkCNNStablizeEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::isConverged_v2p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16isConverged_v2p0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16isConverged_v2p0Ev() called");
    return 0;
}

/* Demangled: __ltdf2 */
extern "C" __attribute__((visibility("default"))) int __ltdf2(void) {
    ALOGD("__ltdf2() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getHdrAeHistgramInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp20getHdrAeHistgramInfoEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp20getHdrAeHistgramInfoEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calAutoEnhanceInfo(strEvSetting) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp18calAutoEnhanceInfoE12strEvSetting(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp18calAutoEnhanceInfoE12strEvSetting() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::mergeCustomAEBlock(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp18mergeCustomAEBlockEii(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp18mergeCustomAEBlockEii() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: __aeabi_dcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmple(void) {
    ALOGD("__aeabi_dcmple() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::setInterAESatisticBufferAddr(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp28setInterAESatisticBufferAddrEPv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp28setInterAESatisticBufferAddrEPv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Exported Object: modify2_50 */
extern "C" __attribute__((visibility("default"))) void* modify2_50 = NULL;

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::TgAdjustEvRatioBySTDUnderExp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp28TgAdjustEvRatioBySTDUnderExpEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp28TgAdjustEvRatioBySTDUnderExpEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calTargetProbs() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calTargetProbsEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calTargetProbsEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::isHdrConverged_v2p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp19isHdrConverged_v2p0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp19isHdrConverged_v2p0Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getAESmoothIdx(strAEInput*, strAEOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14getAESmoothIdxEP10strAEInputP11strAEOutput(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14getAESmoothIdxEP10strAEInputP11strAEOutput() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getTargetProbs(int, NS3A::AeAlgoIp::AE_TARGET) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14getTargetProbsEiNS0_9AE_TARGETE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14getTargetProbsEiNS0_9AE_TARGETE() called");
    return 0;
}

/* Demangled: __muldf3 */
extern "C" __attribute__((visibility("default"))) int __muldf3(void) {
    ALOGD("__muldf3() called");
    return 0;
}

/* Demangled: __aeabi_ddiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_ddiv(void) {
    ALOGD("__aeabi_ddiv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getAEStatisticData_v2p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp23getAEStatisticData_v2p0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp23getAEStatisticData_v2p0Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getConvergeThd() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14getConvergeThdEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14getConvergeThdEv() called");
    return 0;
}

/* Demangled: __divdf3 */
extern "C" __attribute__((visibility("default"))) int __divdf3(void) {
    ALOGD("__divdf3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getSceneSts(unsigned int**, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11getSceneStsEPPjjj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11getSceneStsEPPjjj() called");
    return 0;
}

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrRoundExp(int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calHdrRoundExpERij(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calHdrRoundExpERij() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrInfo(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp10calHdrInfoERj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp10calHdrInfoERj() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getEVFinerGrad(strAEOutput*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14getEVFinerGradEP11strAEOutputj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14getEVFinerGradEP11strAEOutputj() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: __aeabi_dcmplt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmplt(void) {
    ALOGD("__aeabi_dcmplt() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::faceLandMarkTemporalSmooth(int, NS3A::AeAlgoIp::FACE_SMOOTH_INFO*, NS3A::AeAlgoIp::FACE_SMOOTH_INFO*, signed char*, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp26faceLandMarkTemporalSmoothEiPNS0_16FACE_SMOOTH_INFOES2_Paiiiiii(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp26faceLandMarkTemporalSmoothEiPNS0_16FACE_SMOOTH_INFOES2_Paiiiiii() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getHdrDeltaIndex_v2p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp21getHdrDeltaIndex_v2p0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp21getHdrDeltaIndex_v2p0Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getMVHDRBlendingTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp22getMVHDRBlendingTargetEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp22getMVHDRBlendingTargetEv() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrRoundAFEGain(int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp18calHdrRoundAFEGainERij(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp18calHdrRoundAFEGainERij() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getEvRatio(int, NS3A::AeAlgoIp::AE_CONV_COND) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp10getEvRatioEiNS0_12AE_CONV_CONDE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp10getEvRatioEiNS0_12AE_CONV_CONDE() called");
    return 0;
}

/* Demangled: checkAaoProcInfoValid(AAO_PROC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _Z21checkAaoProcInfoValidP15AAO_PROC_INFO_T(void) {
    ALOGD("_Z21checkAaoProcInfoValidP15AAO_PROC_INFO_T() called");
    return 0;
}

/* Exported Object: modify5_46 */
extern "C" __attribute__((visibility("default"))) void* modify5_46 = NULL;

/* Demangled: __gedf2 */
extern "C" __attribute__((visibility("default"))) int __gedf2(void) {
    ALOGD("__gedf2() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getProbByBV(int, NS3A::AeAlgoIp::AE_FEATURE_TARGET) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11getProbByBVEiNS0_17AE_FEATURE_TARGETE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11getProbByBVEiNS0_17AE_FEATURE_TARGETE() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::TgGetInterFrmDeltaEVLutOverExp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp30TgGetInterFrmDeltaEVLutOverExpEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp30TgGetInterFrmDeltaEVLutOverExpEv() called");
    return 0;
}

/* Demangled: __aeabi_cdrcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdrcmple(void) {
    ALOGD("__aeabi_cdrcmple() called");
    return 0;
}

/* Demangled: __aeabi_d2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2lz(void) {
    ALOGD("__aeabi_d2lz() called");
    return 0;
}

/* Demangled: __aeabi_dcmpge */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpge(void) {
    ALOGD("__aeabi_dcmpge() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getDynamicFlareValueHW(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp22getDynamicFlareValueHWEj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp22getDynamicFlareValueHWEj() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Exported Object: power_2_lshift20_negative */
extern "C" __attribute__((visibility("default"))) void* power_2_lshift20_negative = NULL;

/* Demangled: NS3A::AeAlgoIp::getTblInterpolation(int, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp19getTblInterpolationEiiiiPi(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp19getTblInterpolationEiiiiPi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calEquivalentTranslation(int, strEvSetting*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp24calEquivalentTranslationEiP12strEvSetting(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp24calEquivalentTranslationEiP12strEvSetting() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrEquivalentTranslation(int, strEvSetting*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp27calHdrEquivalentTranslationEiP12strEvSetting(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp27calHdrEquivalentTranslationEiP12strEvSetting() called");
    return 0;
}

/* Exported Object: diff */
extern "C" __attribute__((visibility("default"))) void* diff = NULL;

/* Demangled: NS3A::AeAlgoIp::getAccRatio(unsigned int, NS3A::AeAlgoIp::AE_CONV_COND) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11getAccRatioEjNS0_12AE_CONV_CONDE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11getAccRatioEjNS0_12AE_CONV_CONDE() called");
    return 0;
}

/* Demangled: __aeabi_dcmpgt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpgt(void) {
    ALOGD("__aeabi_dcmpgt() called");
    return 0;
}

/* Demangled: NSegIntp(int*, int*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8NSegIntpPiS_ij(void) {
    ALOGD("_Z8NSegIntpPiS_ij() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::isAEBlueSkyDet() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14isAEBlueSkyDetEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14isAEBlueSkyDetEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHardwareHist() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp15calHardwareHistEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp15calHardwareHistEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrFaceProb(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14calHdrFaceProbERj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14calHdrFaceProbERj() called");
    return 0;
}

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getAERealBV(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11getAERealBVEj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11getAERealBVEj() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Exported Object: modify5_50 */
extern "C" __attribute__((visibility("default"))) void* modify5_50 = NULL;

/* Demangled: NS3A::AeAlgoIp::parserAEInput(strAEInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp13parserAEInputEP10strAEInput(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp13parserAEInputEP10strAEInput() called");
    return 0;
}

/* Exported Object: vtable for NS3A::AeAlgoIp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A8AeAlgoIpE = NULL;

/* Demangled: NS3A::AeAlgoIp::~AeAlgoIp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIpD1Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIpD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Exported Object: modify3_46 */
extern "C" __attribute__((visibility("default"))) void* modify3_46 = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: __cmpdf2 */
extern "C" __attribute__((visibility("default"))) int __cmpdf2(void) {
    ALOGD("__cmpdf2() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: NS3A::AeAlgoIp::calRatio2AEInfo(strEvSetting) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp15calRatio2AEInfoE12strEvSetting(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp15calRatio2AEInfoE12strEvSetting() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::TgAdjustEvRatioBySTDOverExp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp27TgAdjustEvRatioBySTDOverExpEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp27TgAdjustEvRatioBySTDOverExpEv() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NS3A::AeAlgoIp::AeLimitCaptureEv(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16AeLimitCaptureEvEiii(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16AeLimitCaptureEvEiii() called");
    return 0;
}

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

/* Demangled: NS3A::AeAlgoIp::TgGetInterFrmDeltaEVLutUnderExp() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp31TgGetInterFrmDeltaEVLutUnderExpEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp31TgGetInterFrmDeltaEVLutUnderExpEv() called");
    return 0;
}

/* Demangled: OneSegIntp(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z10OneSegIntpiiiii(void) {
    ALOGD("_Z10OneSegIntpiiiii() called");
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

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Demangled: __eqdf2 */
extern "C" __attribute__((visibility("default"))) int __eqdf2(void) {
    ALOGD("__eqdf2() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::AeAlgoIp(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIpC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A8AeAlgoIpC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrTargetBlending(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp20calHdrTargetBlendingERi(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp20calHdrTargetBlendingERi() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getmVHDRCustomAEBlock(unsigned int*, unsigned int*, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp21getmVHDRCustomAEBlockEPjS1_iij(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp21getmVHDRCustomAEBlockEPjS1_iij() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrLVProb() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp12calHdrLVProbEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp12calHdrLVProbEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::setmVHDRRatioSmooth(strEvSetting, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp19setmVHDRRatioSmoothE12strEvSettingj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp19setmVHDRRatioSmoothE12strEvSettingj() called");
    return 0;
}

/* Exported Object: modify3_50 */
extern "C" __attribute__((visibility("default"))) void* modify3_50 = NULL;

/* Demangled: NS3A::AeAlgoIp::calHdrOnOffSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp17calHdrOnOffSmoothEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp17calHdrOnOffSmoothEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calHdrMotionSmooth() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp18calHdrMotionSmoothEv(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp18calHdrMotionSmoothEv() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::my_property_get_int32(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp21my_property_get_int32EPKci(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp21my_property_get_int32EPKci() called");
    return 0;
}

/* Exported Object: modify1_46 */
extern "C" __attribute__((visibility("default"))) void* modify1_46 = NULL;

/* Demangled: __gtdf2 */
extern "C" __attribute__((visibility("default"))) int __gtdf2(void) {
    ALOGD("__gtdf2() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::calFDY_v4p0() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp11calFDY_v4p0Ev(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp11calFDY_v4p0Ev() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getAEBlockInfo(AWB_GAIN_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp14getAEBlockInfoE10AWB_GAIN_T(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp14getAEBlockInfoE10AWB_GAIN_T() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: __nedf2 */
extern "C" __attribute__((visibility("default"))) int __nedf2(void) {
    ALOGD("__nedf2() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getDataInterpolation(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp20getDataInterpolationEiiiii(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp20getDataInterpolationEiiiii() called");
    return 0;
}

/* Demangled: NS3A::AeAlgoIp::getmVHdrAERealBV(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8AeAlgoIp16getmVHdrAERealBVEj(void) {
    ALOGD("_ZN4NS3A8AeAlgoIp16getmVHdrAERealBVEj() called");
    return 0;
}
