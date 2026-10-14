/*
 * Reverse-Engineered Source for: lib3a.af.core.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_af_core"

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
#include "lib3a_af_core.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NS3A::AfcAlgo::isMZFVStable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo12isMZFVStableEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo12isMZFVStableEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isSceneChangeCustom() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19isSceneChangeCustomEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19isSceneChangeCustomEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::updateAFtableBoundary(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo21updateAFtableBoundaryEiiPiS1_(void) {
    ALOGD("_ZN4NS3A7AfcAlgo21updateAFtableBoundaryEiiPiS1_() called");
    return 0;
}

/* Demangled: __aeabi_frsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_frsub(void) {
    ALOGD("__aeabi_frsub() called");
    return 0;
}

/* Demangled: __aeabi_cfrcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cfrcmple(void) {
    ALOGD("__aeabi_cfrcmple() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runMF() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo5runMFEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo5runMFEv() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Exported Object: vtable for AfAlgoDev<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AfAlgoDevILN11NSIspTuning12ESensorDev_TE16EE = NULL;

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: __floatundisf */
extern "C" __attribute__((visibility("default"))) int __floatundisf(void) {
    ALOGD("__floatundisf() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_updateSearchFrameInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo26exif_updateSearchFrameInfoEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo26exif_updateSearchFrameInfoEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo6cancelEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo6cancelEv() called");
    return 0;
}

/* Demangled: __eqsf2 */
extern "C" __attribute__((visibility("default"))) int __eqsf2(void) {
    ALOGD("__eqsf2() called");
    return 0;
}

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getFV_DC(NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo8getFV_DCENS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo8getFV_DCENS_9FV_MODE_TE() called");
    return 0;
}

/* Exported Object: vtable for AfAlgoDev<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AfAlgoDevILN11NSIspTuning12ESensorDev_TE8EE = NULL;

/* Demangled: __fixunssfdi */
extern "C" __attribute__((visibility("default"))) int __fixunssfdi(void) {
    ALOGD("__fixunssfdi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::upDateCafCount(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo14upDateCafCountEiiii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo14upDateCafCountEiiii() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::deallocateInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18deallocateInstanceEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18deallocateInstanceEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_addPerFrameTag(NS3A::AfcAlgo::AF_FRAME_EXIF_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19exif_addPerFrameTagEPNS0_20AF_FRAME_EXIF_DATA_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19exif_addPerFrameTagEPNS0_20AF_FRAME_EXIF_DATA_TE() called");
    return 0;
}

/* Exported Object: vtable for AfAlgoDev<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AfAlgoDevILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: __nedf2 */
extern "C" __attribute__((visibility("default"))) int __nedf2(void) {
    ALOGD("__nedf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::~AfcAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgoD2Ev(void) {
    ALOGD("_ZN4NS3A7AfcAlgoD2Ev() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::initAF_param_sd() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15initAF_param_sdEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15initAF_param_sdEv() called");
    return 0;
}

/* Demangled: __aeabi_ddiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_ddiv(void) {
    ALOGD("__aeabi_ddiv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::updateMiddleAFPos(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17updateMiddleAFPosEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17updateMiddleAFPosEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_clearPerFrameInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22exif_clearPerFrameInfoEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22exif_clearPerFrameInfoEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isSceneCus1Stable() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17isSceneCus1StableEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17isSceneCus1StableEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_DafPreRun() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo21runVideoAFC_DafPreRunEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo21runVideoAFC_DafPreRunEv() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::findMZMaxMin(int, NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo12findMZMaxMinEiNS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo12findMZMaxMinEiNS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: __aeabi_f2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2ulz(void) {
    ALOGD("__aeabi_f2ulz() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::updateSceneChangeParam() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22updateSceneChangeParamEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22updateSceneChangeParamEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_move(int, int, NS3A::AfAlgo::HYBRID_SOURCE_CFG_T, NS3A::AfAlgo::HYBRID_TARGET_T&, long long, long long, NS3A::AfAlgo::HYBRID_STATUS_T&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo7hb_moveEiiNS_6AfAlgo19HYBRID_SOURCE_CFG_TERNS1_15HYBRID_TARGET_TExxRNS1_15HYBRID_STATUS_TERi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo7hb_moveEiiNS_6AfAlgo19HYBRID_SOURCE_CFG_TERNS1_15HYBRID_TARGET_TExxRNS1_15HYBRID_STATUS_TERi() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_fineSearch(int, int, int, NS3A::AfAlgo::HYBRID_TARGET_T&, int, long long, long long, long long, int&, NS3A::AfAlgo::HYBRID_STATUS_T&, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13hb_fineSearchEiiiRNS_6AfAlgo15HYBRID_TARGET_TEixxxRiRNS1_15HYBRID_STATUS_TExxxx(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13hb_fineSearchEiiiRNS_6AfAlgo15HYBRID_TARGET_TEixxxRiRNS1_15HYBRID_STATUS_TExxxx() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::pl_resetStats() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13pl_resetStatsEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13pl_resetStatsEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::initAF_param_pd() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15initAF_param_pdEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15initAF_param_pdEv() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Demangled: __aeabi_cfcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cfcmple(void) {
    ALOGD("__aeabi_cfcmple() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_addNvramTag() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16exif_addNvramTagEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16exif_addNvramTagEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::updateAFOTPInfo(AF_OTPInfo_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15updateAFOTPInfoEP12AF_OTPInfo_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15updateAFOTPInfoEP12AF_OTPInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_updateFdafInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19exif_updateFdafInfoEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19exif_updateFdafInfoEv() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: __aeabi_dcmpge */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpge(void) {
    ALOGD("__aeabi_dcmpge() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runMultiZoneAFC() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15runMultiZoneAFCEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15runMultiZoneAFCEv() called");
    return 0;
}

/* Demangled: __aeabi_ul2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2f(void) {
    ALOGD("__aeabi_ul2f() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runAFFullScan() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13runAFFullScanEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13runAFFullScanEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::initAF_param_fdaf() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17initAF_param_fdafEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17initAF_param_fdafEv() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getFvConfidence() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15getFvConfidenceEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15getFvConfidenceEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_inputSourceHandle(AF_INPUT_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo20hb_inputSourceHandleERK10AF_INPUT_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo20hb_inputSourceHandleERK10AF_INPUT_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getTwoHat(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9getTwoHatEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9getTwoHatEii() called");
    return 0;
}

/* Demangled: __nesf2 */
extern "C" __attribute__((visibility("default"))) int __nesf2(void) {
    ALOGD("__nesf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getSeekDirCus(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13getSeekDirCusEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13getSeekDirCusEii() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runAFCalibration() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16runAFCalibrationEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16runAFCalibrationEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::get1DInterpolation(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18get1DInterpolationEiiiii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18get1DInterpolationEiiiii() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isVluChangeQuery(NS3A::AfAlgo::AF_SCENECHANGE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16isVluChangeQueryERNS_6AfAlgo16AF_SCENECHANGE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16isVluChangeQueryERNS_6AfAlgo16AF_SCENECHANGE_TE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NS3A::AfcAlgo::get1DInterpolation(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N4NS3A7AfcAlgo18get1DInterpolationEiiiii(void) {
    ALOGD("_ZThn8_N4NS3A7AfcAlgo18get1DInterpolationEiiiii() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::doAFFlash(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9doAFFlashEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9doAFFlashEii() called");
    return 0;
}

/* Exported Object: vtable for AfAlgoDev<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AfAlgoDevILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Demangled: NS3A::AfcAlgo::regenAfTable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo12regenAfTableEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo12regenAfTableEi() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getInterpolation(NS3A::AF_INTERP0LATE) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16getInterpolationENS_14AF_INTERP0LATEE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16getInterpolationENS_14AF_INTERP0LATEE() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_checkNeighbor(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16hb_checkNeighborEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16hb_checkNeighborEii() called");
    return 0;
}

/* Demangled: __aeabi_dcmpgt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpgt(void) {
    ALOGD("__aeabi_dcmpgt() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: __fixdfdi */
extern "C" __attribute__((visibility("default"))) int __fixdfdi(void) {
    ALOGD("__fixdfdi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::parseSceneParas(NS3A::AfAlgo::AF_SCENEPARAMETERS_T&, SCENE_MONITOR_T, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15parseSceneParasERNS_6AfAlgo20AF_SCENEPARAMETERS_TE15SCENE_MONITOR_Ti(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15parseSceneParasERNS_6AfAlgo20AF_SCENEPARAMETERS_TE15SCENE_MONITOR_Ti() called");
    return 0;
}

/* Demangled: __aeabi_fadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_fadd(void) {
    ALOGD("__aeabi_fadd() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_DynamicMergedSelect(NS3A::AfAlgo::HB_MULTI_WIN_T, NS3A::AfAlgo::AF_STATUS_T, int, NS3A::AfAlgo::HB_MULTI_WIN_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22hb_DynamicMergedSelectENS_6AfAlgo14HB_MULTI_WIN_TENS1_11AF_STATUS_TEiRS2_(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22hb_DynamicMergedSelectENS_6AfAlgo14HB_MULTI_WIN_TENS1_11AF_STATUS_TEiRS2_() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::AfcAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgoC1EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgoC1EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_checkSceneChange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19hb_checkSceneChangeEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19hb_checkSceneChangeEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::CalibAFPos(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10CalibAFPosER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10CalibAFPosER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: __gtdf2 */
extern "C" __attribute__((visibility("default"))) int __gtdf2(void) {
    ALOGD("__gtdf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_DafTouchAssit() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo25runVideoAFC_DafTouchAssitEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo25runVideoAFC_DafTouchAssitEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::BackJump(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo8BackJumpEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo8BackJumpEii() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::lock() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo4lockEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo4lockEv() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_clearSearchFrameInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo25exif_clearSearchFrameInfoEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo25exif_clearSearchFrameInfoEv() called");
    return 0;
}

/* Demangled: __ltdf2 */
extern "C" __attribute__((visibility("default"))) int __ltdf2(void) {
    ALOGD("__ltdf2() called");
    return 0;
}

/* Demangled: __fixunsdfsi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfsi(void) {
    ALOGD("__fixunsdfsi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getDebugInfo(AF_DEBUG_INFO_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo12getDebugInfoER15AF_DEBUG_INFO_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo12getDebugInfoER15AF_DEBUG_INFO_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_DafTracking() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo23runVideoAFC_DafTrackingEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo23runVideoAFC_DafTrackingEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: __aeabi_cfcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_cfcmpeq(void) {
    ALOGD("__aeabi_cfcmpeq() called");
    return 0;
}

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_isUpdateCurFrame(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19hb_isUpdateCurFrameERi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19hb_isUpdateCurFrameERi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_getCurHybridModeCfg(int, NS3A::AfAlgo::HYBRID_SOURCE_CFG_T&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22hb_getCurHybridModeCfgEiRNS_6AfAlgo19HYBRID_SOURCE_CFG_TEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22hb_getCurHybridModeCfgEiRNS_6AfAlgo19HYBRID_SOURCE_CFG_TEi() called");
    return 0;
}

/* Demangled: __aeabi_d2uiz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2uiz(void) {
    ALOGD("__aeabi_d2uiz() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_tracking(int, int, NS3A::AfAlgo::HYBRID_SOURCE_CFG_T, NS3A::AfAlgo::HYBRID_TARGET_T&, NS3A::AfAlgo::HYBRID_STATUS_T&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11hb_trackingEiiNS_6AfAlgo19HYBRID_SOURCE_CFG_TERNS1_15HYBRID_TARGET_TERNS1_15HYBRID_STATUS_TERi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11hb_trackingEiiNS_6AfAlgo19HYBRID_SOURCE_CFG_TERNS1_15HYBRID_TARGET_TERNS1_15HYBRID_STATUS_TERi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_isSceneChange(int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16hb_isSceneChangeERiS1_(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16hb_isSceneChangeERiS1_() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_updatePerFrameInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo23exif_updatePerFrameInfoEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo23exif_updatePerFrameInfoEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: __aeabi_fcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_fcmple(void) {
    ALOGD("__aeabi_fcmple() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isFaceStb(AREA_t const&, AREA_t const (&) [30], int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9isFaceStbERK6AREA_tRA30_S2_iiii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9isFaceStbERK6AREA_tRA30_S2_iiii() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo6unlockEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo6unlockEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isSceneChange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13isSceneChangeEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13isSceneChangeEi() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isVluStableQuery(NS3A::AfAlgo::AF_SCENESTABLE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16isVluStableQueryERNS_6AfAlgo16AF_SCENESTABLE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16isVluStableQueryERNS_6AfAlgo16AF_SCENESTABLE_TE() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: __gtsf2 */
extern "C" __attribute__((visibility("default"))) int __gtsf2(void) {
    ALOGD("__gtsf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::GetSyncInfo(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11GetSyncInfoER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11GetSyncInfoER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::pl_findPeak(int, long long const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11pl_findPeakEiPKx(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11pl_findPeakEiPKx() called");
    return 0;
}

/* Demangled: __aeabi_fcmplt */
extern "C" __attribute__((visibility("default"))) int __aeabi_fcmplt(void) {
    ALOGD("__aeabi_fcmplt() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::dumpFdafData(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo12dumpFdafDataEj(void) {
    ALOGD("_ZN4NS3A7AfcAlgo12dumpFdafDataEj() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::trigger() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo7triggerEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo7triggerEv() called");
    return 0;
}

/* Demangled: __ltsf2 */
extern "C" __attribute__((visibility("default"))) int __ltsf2(void) {
    ALOGD("__ltsf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getCaliData(int, long long*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11getCaliDataEiPxii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11getCaliDataEiPxii() called");
    return 0;
}

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_PreRun() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18runVideoAFC_PreRunEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18runVideoAFC_PreRunEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::initAF(AF_INPUT_T, AF_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo6initAFE10AF_INPUT_TR11AF_OUTPUT_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo6initAFE10AF_INPUT_TR11AF_OUTPUT_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_checkSceneStable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19hb_checkSceneStableEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19hb_checkSceneStableEi() called");
    return 0;
}

/* Demangled: NS3A::IAfAlgo* NS3A::IAfAlgo::createInstance<(NS3A::EAAAOpt_T)0>(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7IAfAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i(void) {
    ALOGD("_ZN4NS3A7IAfAlgo14createInstanceILNS_9EAAAOpt_TE0EEEPS0_i() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getRWValue(NS3A::RW_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10getRWValueENS_9RW_MODE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10getRWValueENS_9RW_MODE_TE() called");
    return 0;
}

/* Demangled: __aeabi_d2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2lz(void) {
    ALOGD("__aeabi_d2lz() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isVluStable(int, int, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11isVluStableEiixxxx(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11isVluStableEiixxxx() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::extendFDtoPDWin(AREA_t&, AF_AREA_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15extendFDtoPDWinER6AREA_t9AF_AREA_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15extendFDtoPDWinER6AREA_t9AF_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::SaveAfCoreInfo(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo14SaveAfCoreInfoEPKc(void) {
    ALOGD("_ZN4NS3A7AfcAlgo14SaveAfCoreInfoEPKc() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getFocusWindows(AFPD_BLOCK_ROI_t*, int, int, AFPD_BLOCK_ROI_t*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15getFocusWindowsEP16AFPD_BLOCK_ROI_tiiS2_Pi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15getFocusWindowsEP16AFPD_BLOCK_ROI_tiiS2_Pi() called");
    return 0;
}

/* Demangled: __aeabi_f2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2d(void) {
    ALOGD("__aeabi_f2d() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_lowConfidenceCheck(int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo21hb_lowConfidenceCheckEiiRi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo21hb_lowConfidenceCheckEiiRi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isPDChange(int, int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10isPDChangeEiiiRiS1_(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10isPDChangeEiiiRiS1_() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Exported Object: vtable for AfAlgoDev<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AfAlgoDevILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: __divdf3 */
extern "C" __attribute__((visibility("default"))) int __divdf3(void) {
    ALOGD("__divdf3() called");
    return 0;
}

/* Demangled: __aeabi_fcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_fcmpeq(void) {
    ALOGD("__aeabi_fcmpeq() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::checkFDWin() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10checkFDWinEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10checkFDWinEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::prepareSearchTable(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18prepareSearchTableERi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18prepareSearchTableERi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_DafTafPrepare() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo25runVideoAFC_DafTafPrepareEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo25runVideoAFC_DafTafPrepareEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isFDChange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10isFDChangeEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10isFDChangeEi() called");
    return 0;
}

/* Exported Object: vtable for NS3A::IAfAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A7IAfAlgoE = NULL;

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: __muldf3 */
extern "C" __attribute__((visibility("default"))) int __muldf3(void) {
    ALOGD("__muldf3() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setGyroSensorInfo(int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17setGyroSensorInfoEPij(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17setGyroSensorInfoEPij() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isFaceChg(AREA_t const&, AREA_t const (&) [30], int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9isFaceChgERK6AREA_tRA30_S2_iiii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9isFaceChgERK6AREA_tRA30_S2_iiii() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::pl_getBestPos() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13pl_getBestPosEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13pl_getBestPosEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::ZE_CheckROICompCondition() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo24ZE_CheckROICompConditionEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo24ZE_CheckROICompConditionEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setAFParam(AF_PARAM_T, AF_CONFIG_T, AF_NVRAM_T, DUALCAM_NVRAM_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10setAFParamE10AF_PARAM_T11AF_CONFIG_T10AF_NVRAM_T15DUALCAM_NVRAM_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10setAFParamE10AF_PARAM_T11AF_CONFIG_T10AF_NVRAM_T15DUALCAM_NVRAM_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::clearAfDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16clearAfDebugInfoEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16clearAfDebugInfoEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::targetAssistMove() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16targetAssistMoveEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16targetAssistMoveEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::GetMain2CalibPos(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16GetMain2CalibPosER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16GetMain2CalibPosER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::resetVluChangeQuery(NS3A::AfAlgo::AF_SCENECHANGE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19resetVluChangeQueryERNS_6AfAlgo16AF_SCENECHANGE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19resetVluChangeQueryERNS_6AfAlgo16AF_SCENECHANGE_TE() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::initAF_param_ld() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15initAF_param_ldEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15initAF_param_ldEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_inputModeHandle(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18hb_inputModeHandleEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18hb_inputModeHandleEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::pl_printLog(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11pl_printLogEj(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11pl_printLogEj() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_Prepare() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19runVideoAFC_PrepareEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19runVideoAFC_PrepareEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_midConfidenceCheck(int, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo21hb_midConfidenceCheckEiiiRi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo21hb_midConfidenceCheckEiiiRi() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getStartIdx(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11getStartIdxEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11getStartIdxEii() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Demangled: __aeabi_cdcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmple(void) {
    ALOGD("__aeabi_cdcmple() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isMZFVChg() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9isMZFVChgEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9isMZFVChgEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::resetVluStableQuery(NS3A::AfAlgo::AF_SCENESTABLE_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19resetVluStableQueryERNS_6AfAlgo16AF_SCENESTABLE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19resetVluStableQueryERNS_6AfAlgo16AF_SCENESTABLE_TE() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::SetSyncMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11SetSyncModeEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11SetSyncModeEi() called");
    return 0;
}

/* Exported Object: vtable for NS3A::AfcAlgo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A7AfcAlgoE = NULL;

/* Demangled: NS3A::AfcAlgo::exif_addHbSearchTag(int, int, int, int, NS3A::AfAlgo::HYBRID_TARGET_T, int, long long, long long, long long, long long, long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19exif_addHbSearchTagEiiiiNS_6AfAlgo15HYBRID_TARGET_TEixxxxxxx(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19exif_addHbSearchTagEiiiiNS_6AfAlgo15HYBRID_TARGET_TEixxxxxxx() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_predictFsDirection(int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo21hb_predictFsDirectionEiiRi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo21hb_predictFsDirectionEiiRi() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_getCurConvergeThr(int, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo20hb_getCurConvergeThrEiiiRi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo20hb_getCurConvergeThrEiiiRi() called");
    return 0;
}

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getPosRecBuf() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo12getPosRecBufEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo12getPosRecBufEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_sourceHisotry(NS3A::AfAlgo::HB_HISTORY_T, NS3A::AfAlgo::HYBRID_TARGET_T, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16hb_sourceHisotryENS_6AfAlgo12HB_HISTORY_TENS1_15HYBRID_TARGET_TEiiRi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16hb_sourceHisotryENS_6AfAlgo12HB_HISTORY_TENS1_15HYBRID_TARGET_TEiiRi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_snapshotPerFrameInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo25exif_snapshotPerFrameInfoEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo25exif_snapshotPerFrameInfoEv() called");
    return 0;
}

/* Demangled: __gedf2 */
extern "C" __attribute__((visibility("default"))) int __gedf2(void) {
    ALOGD("__gedf2() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isMZRGBSumStable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16isMZRGBSumStableEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16isMZRGBSumStableEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::extendFDWin(AF_AREA_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11extendFDWinER9AF_AREA_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11extendFDWinER9AF_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getStartIdxCus(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo14getStartIdxCusEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo14getStartIdxCusEii() called");
    return 0;
}

/* Demangled: __ledf2 */
extern "C" __attribute__((visibility("default"))) int __ledf2(void) {
    ALOGD("__ledf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setOTPInfo(int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10setOTPInfoEPii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10setOTPInfoEPii() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getMaxNumFocusAreas() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19getMaxNumFocusAreasEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19getMaxNumFocusAreasEv() called");
    return 0;
}

/* Demangled: __floatunsisf */
extern "C" __attribute__((visibility("default"))) int __floatunsisf(void) {
    ALOGD("__floatunsisf() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::calAFtable(int, int, NVRAM_AF_COEF&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10calAFtableEiiR13NVRAM_AF_COEF(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10calAFtableEiiR13NVRAM_AF_COEF() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NS3A::AfcAlgo::setAEBlockInfo(unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo14setAEBlockInfoEPhh(void) {
    ALOGD("_ZN4NS3A7AfcAlgo14setAEBlockInfoEPhh() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_updateFrameInfo(NS3A::AfcAlgo::AF_FRAME_EXIF_DATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo20exif_updateFrameInfoEPNS0_20AF_FRAME_EXIF_DATA_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo20exif_updateFrameInfoEPNS0_20AF_FRAME_EXIF_DATA_TE() called");
    return 0;
}

/* Demangled: __cmpdf2 */
extern "C" __attribute__((visibility("default"))) int __cmpdf2(void) {
    ALOGD("__cmpdf2() called");
    return 0;
}

/* Demangled: __addsf3 */
extern "C" __attribute__((visibility("default"))) int __addsf3(void) {
    ALOGD("__addsf3() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_Init() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16runVideoAFC_InitEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16runVideoAFC_InitEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getSeekDir(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10getSeekDirEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10getSeekDirEii() called");
    return 0;
}

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isMZRGBSumChg() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13isMZRGBSumChgEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13isMZRGBSumChgEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::UpdateMultizoneROI() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18UpdateMultizoneROIEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18UpdateMultizoneROIEv() called");
    return 0;
}

/* Demangled: __aeabi_fcmpge */
extern "C" __attribute__((visibility("default"))) int __aeabi_fcmpge(void) {
    ALOGD("__aeabi_fcmpge() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::initAF_param_hb() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15initAF_param_hbEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15initAF_param_hbEv() called");
    return 0;
}

/* Demangled: __aeabi_f2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2lz(void) {
    ALOGD("__aeabi_f2lz() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: NS3A::AfcAlgo::exif_addVersionTag() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18exif_addVersionTagEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18exif_addVersionTagEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::adbSetParam(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11adbSetParamEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11adbSetParamEi() called");
    return 0;
}

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: __gesf2 */
extern "C" __attribute__((visibility("default"))) int __gesf2(void) {
    ALOGD("__gesf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_checkHWConfigUpdate(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22hb_checkHWConfigUpdateEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22hb_checkHWConfigUpdateEii() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::handleAF(AF_INPUT_T const&, AF_OUTPUT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo8handleAFERK10AF_INPUT_TR11AF_OUTPUT_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo8handleAFERK10AF_INPUT_TR11AF_OUTPUT_T() called");
    return 0;
}

/* Demangled: __aeabi_ui2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2f(void) {
    ALOGD("__aeabi_ui2f() called");
    return 0;
}

/* Demangled: __subdf3 */
extern "C" __attribute__((visibility("default"))) int __subdf3(void) {
    ALOGD("__subdf3() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11runVideoAFCEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11runVideoAFCEv() called");
    return 0;
}

/* Demangled: __aeabi_cdcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmpeq(void) {
    ALOGD("__aeabi_cdcmpeq() called");
    return 0;
}

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: __lesf2 */
extern "C" __attribute__((visibility("default"))) int __lesf2(void) {
    ALOGD("__lesf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_Wait1() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17runVideoAFC_Wait1Ev(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17runVideoAFC_Wait1Ev() called");
    return 0;
}

/* Demangled: __aeabi_fcmpgt */
extern "C" __attribute__((visibility("default"))) int __aeabi_fcmpgt(void) {
    ALOGD("__aeabi_fcmpgt() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isLDChange(int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10isLDChangeEiRiS1_(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10isLDChangeEiRiS1_() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_Seek() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16runVideoAFC_SeekEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16runVideoAFC_SeekEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::updateScenceChangeReference() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo27updateScenceChangeReferenceEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo27updateScenceChangeReferenceEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_movingSpeedConfig(int, NS3A::AfAlgo::HYBRID_TARGET_T&, int, NS3A::AfAlgo::HYBRID_SOURCE_CFG_T, int, int, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo20hb_movingSpeedConfigEiRNS_6AfAlgo15HYBRID_TARGET_TEiNS1_19HYBRID_SOURCE_CFG_TEiiRiS5_S5_S5_(void) {
    ALOGD("_ZN4NS3A7AfcAlgo20hb_movingSpeedConfigEiRNS_6AfAlgo15HYBRID_TARGET_TEiNS1_19HYBRID_SOURCE_CFG_TEiiRiS5_S5_S5_() called");
    return 0;
}

/* Demangled: __floatunsidf */
extern "C" __attribute__((visibility("default"))) int __floatunsidf(void) {
    ALOGD("__floatunsidf() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::~AfcAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgoD0Ev(void) {
    ALOGD("_ZN4NS3A7AfcAlgoD0Ev() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: __aeabi_dcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmple(void) {
    ALOGD("__aeabi_dcmple() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isFocused() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9isFocusedEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9isFocusedEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_getCurAFTableSize(int, int&, int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo20hb_getCurAFTableSizeEiRiS1_i(void) {
    ALOGD("_ZN4NS3A7AfcAlgo20hb_getCurAFTableSizeEiRiS1_i() called");
    return 0;
}

/* Demangled: __cmpsf2 */
extern "C" __attribute__((visibility("default"))) int __cmpsf2(void) {
    ALOGD("__cmpsf2() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_DafFS() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17runVideoAFC_DafFSEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17runVideoAFC_DafFSEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::AfcAlgo(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgoC2EN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgoC2EN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::updatePosturedPos(int&, int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17updatePosturedPosERiPij(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17updatePosturedPosERiPij() called");
    return 0;
}

/* Demangled: __aeabi_dmul */
extern "C" __attribute__((visibility("default"))) int __aeabi_dmul(void) {
    ALOGD("__aeabi_dmul() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_getISOStep(int, NS3A::CONFIG_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13hb_getISOStepEiNS_11CONFIG_TYPEE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13hb_getISOStepEiNS_11CONFIG_TYPEE() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setAcceSensorInfo(int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo17setAcceSensorInfoEPij(void) {
    ALOGD("_ZN4NS3A7AfcAlgo17setAcceSensorInfoEPij() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::exif_addSearchStartTag(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22exif_addSearchStartTagEj(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22exif_addSearchStartTagEj() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runMiniAFC() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10runMiniAFCEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10runMiniAFCEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_getCurFineSearchStep(int, int, int&, int&, int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo23hb_getCurFineSearchStepEiiRiS1_S1_i(void) {
    ALOGD("_ZN4NS3A7AfcAlgo23hb_getCurFineSearchStepEiiRiS1_S1_i() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isFlatSky() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9isFlatSkyEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9isFlatSkyEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: __aeabi_dcmplt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmplt(void) {
    ALOGD("__aeabi_dcmplt() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::MotorRange(AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10MotorRangeER13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10MotorRangeER13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::isSDChange(int, unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10isSDChangeEijRi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10isSDChangeEijRi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setFocusAreas(AF_AREA_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13setFocusAreasE9AF_AREA_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13setFocusAreasE9AF_AREA_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setMFPos(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo8setMFPosEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo8setMFPosEi() called");
    return 0;
}

/* Demangled: __subsf3 */
extern "C" __attribute__((visibility("default"))) int __subsf3(void) {
    ALOGD("__subsf3() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::findMaxMin() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo10findMaxMinEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo10findMaxMinEv() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: __fixsfdi */
extern "C" __attribute__((visibility("default"))) int __fixsfdi(void) {
    ALOGD("__fixsfdi() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __floatsisf */
extern "C" __attribute__((visibility("default"))) int __floatsisf(void) {
    ALOGD("__floatsisf() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setAFMode(LIB3A_AF_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9setAFModeE15LIB3A_AF_MODE_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9setAFModeE15LIB3A_AF_MODE_T() called");
    return 0;
}

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_dafPrepare() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo13hb_dafPrepareEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo13hb_dafPrepareEv() called");
    return 0;
}

/* Demangled: __aeabi_i2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2f(void) {
    ALOGD("__aeabi_i2f() called");
    return 0;
}

/* Demangled: __aeabi_fsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_fsub(void) {
    ALOGD("__aeabi_fsub() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getCaliDataSize(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo15getCaliDataSizeEiPiS1_(void) {
    ALOGD("_ZN4NS3A7AfcAlgo15getCaliDataSizeEiPiS1_() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_Monitor(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo19runVideoAFC_MonitorEii(void) {
    ALOGD("_ZN4NS3A7AfcAlgo19runVideoAFC_MonitorEii() called");
    return 0;
}

/* Demangled: void NS3A::IAfAlgo::destroyInstance<(NS3A::EAAAOpt_T)0>(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7IAfAlgo15destroyInstanceILNS_9EAAAOpt_TE0EEEvi(void) {
    ALOGD("_ZN4NS3A7IAfAlgo15destroyInstanceILNS_9EAAAOpt_TE0EEEvi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::SetSyncInfo(int, AF_SyncInfo_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo11SetSyncInfoEiR13AF_SyncInfo_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo11SetSyncInfoEiR13AF_SyncInfo_T() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_DafMov() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18runVideoAFC_DafMovEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18runVideoAFC_DafMovEv() called");
    return 0;
}

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::hb_highConfidenceCheck(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22hb_highConfidenceCheckEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22hb_highConfidenceCheckEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::~AfcAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgoD1Ev(void) {
    ALOGD("_ZN4NS3A7AfcAlgoD1Ev() called");
    return 0;
}

/* Demangled: __eqdf2 */
extern "C" __attribute__((visibility("default"))) int __eqdf2(void) {
    ALOGD("__eqdf2() called");
    return 0;
}

/* Demangled: __aeabi_cdrcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdrcmple(void) {
    ALOGD("__aeabi_cdrcmple() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runAFSEEK() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9runAFSEEKEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9runAFSEEKEv() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::setFDWin(AF_AREA_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo8setFDWinE9AF_AREA_T(void) {
    ALOGD("_ZN4NS3A7AfcAlgo8setFDWinE9AF_AREA_T() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_MoveToBest() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo22runVideoAFC_MoveToBestEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo22runVideoAFC_MoveToBestEv() called");
    return 0;
}

/* Demangled: __aeabi_dcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpeq(void) {
    ALOGD("__aeabi_dcmpeq() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::runVideoAFC_DirChg() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo18runVideoAFC_DirChgEv(void) {
    ALOGD("_ZN4NS3A7AfcAlgo18runVideoAFC_DirChgEv() called");
    return 0;
}

/* Demangled: __aeabi_dadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_dadd(void) {
    ALOGD("__aeabi_dadd() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::allocateInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo16allocateInstanceEi(void) {
    ALOGD("_ZN4NS3A7AfcAlgo16allocateInstanceEi() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::findPeak(NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo8findPeakENS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo8findPeakENS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: NS3A::AfcAlgo::getMIN_TH(NS3A::FV_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A7AfcAlgo9getMIN_THENS_9FV_MODE_TE(void) {
    ALOGD("_ZN4NS3A7AfcAlgo9getMIN_THENS_9FV_MODE_TE() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}
