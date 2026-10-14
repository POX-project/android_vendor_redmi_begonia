/*
 * Reverse-Engineered Source for: lib3a.lce.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_lce"

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
#include "lib3a_lce.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: LceCore::getAccuHist(unsigned int, unsigned int*, unsigned int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11getAccuHistEjPjjS0_j(void) {
    ALOGD("_ZN7LceCore11getAccuHistEjPjjS0_j() called");
    return 0;
}

/* Exported Object: vtable for LceCoreDev<(eLCESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10LceCoreDevIL15eLCESensorDev_T8EE = NULL;

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: LceCore::FindFlatScene() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore13FindFlatSceneEv(void) {
    ALOGD("_ZN7LceCore13FindFlatSceneEv() called");
    return 0;
}

/* Demangled: LceCore::checkInput() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore10checkInputEv(void) {
    ALOGD("_ZN7LceCore10checkInputEv() called");
    return 0;
}

/* Demangled: LceCore::LCE_Interp(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore10LCE_InterpEiiiii(void) {
    ALOGD("_ZN7LceCore10LCE_InterpEiiiii() called");
    return 0;
}

/* Exported Object: gmaIN */
extern "C" __attribute__((visibility("default"))) void* gmaIN = NULL;

/* Demangled: LceCore::SWDCE_v1p0() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore10SWDCE_v1p0Ev(void) {
    ALOGD("_ZN7LceCore10SWDCE_v1p0Ev() called");
    return 0;
}

/* Demangled: LceCore::calLCSWinHist(LCE_AE_INFO_T, LCE_LCS_INFO_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore13calLCSWinHistE13LCE_AE_INFO_T14LCE_LCS_INFO_T(void) {
    ALOGD("_ZN7LceCore13calLCSWinHistE13LCE_AE_INFO_T14LCE_LCS_INFO_T() called");
    return 0;
}

/* Demangled: LceCore::LceFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14LceFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN7LceCore14LceFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Exported Object: vtable for LceCoreDev<(eLCESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10LceCoreDevIL15eLCESensorDev_T4EE = NULL;

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Exported Object: LumLog2x1000 */
extern "C" __attribute__((visibility("default"))) void* LumLog2x1000 = NULL;

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Exported Object: gmaOUT2 */
extern "C" __attribute__((visibility("default"))) void* gmaOUT2 = NULL;

/* Demangled: LceCore::applyNormalDistri(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore17applyNormalDistriEiiii(void) {
    ALOGD("_ZN7LceCore17applyNormalDistriEiiii() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: LceCore::applyCurve2Point(unsigned int, int*, int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore16applyCurve2PointEjPiS0_j(void) {
    ALOGD("_ZN7LceCore16applyCurve2PointEjPiS0_j() called");
    return 0;
}

/* Demangled: MTKLce::LceExit() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKLce7LceExitEv(void) {
    ALOGD("_ZN6MTKLce7LceExitEv() called");
    return 0;
}

/* Demangled: LceCore::checkLCEMaxGain(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore15checkLCEMaxGainEPiS0_(void) {
    ALOGD("_ZN7LceCore15checkLCEMaxGainEPiS0_() called");
    return 0;
}

/* Demangled: LceCore::LceCoreConfigEnhanceFactor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore26LceCoreConfigEnhanceFactorEi(void) {
    ALOGD("_ZN7LceCore26LceCoreConfigEnhanceFactorEi() called");
    return 0;
}

/* Demangled: LceCore::~LceCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCoreD0Ev(void) {
    ALOGD("_ZN7LceCoreD0Ev() called");
    return 0;
}

/* Demangled: LceCore::getHistInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11getHistInfoEv(void) {
    ALOGD("_ZN7LceCore11getHistInfoEv() called");
    return 0;
}

/* Demangled: LceCore::applyCurve2Hist(unsigned int, int*, int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore15applyCurve2HistEjPiS0_Pj(void) {
    ALOGD("_ZN7LceCore15applyCurve2HistEjPiS0_Pj() called");
    return 0;
}

/* Demangled: LceCore::inversegamma(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore12inversegammaEi(void) {
    ALOGD("_ZN7LceCore12inversegammaEi() called");
    return 0;
}

/* Exported Object: m_u4Act30Hist */
extern "C" __attribute__((visibility("default"))) void* m_u4Act30Hist = NULL;

/* Demangled: LceCore::adjustDarkAvgY(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14adjustDarkAvgYEi(void) {
    ALOGD("_ZN7LceCore14adjustDarkAvgYEi() called");
    return 0;
}

/* Demangled: LceCore::LceExit() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore7LceExitEv(void) {
    ALOGD("_ZN7LceCore7LceExitEv() called");
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

/* Demangled: LceCore::LceCoreGetDualcamSyncInfo(MTK_LCE_DUALCAM_SYNC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore25LceCoreGetDualcamSyncInfoEP27MTK_LCE_DUALCAM_SYNC_INFO_T(void) {
    ALOGD("_ZN7LceCore25LceCoreGetDualcamSyncInfoEP27MTK_LCE_DUALCAM_SYNC_INFO_T() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: LceCore::Dualsync_ApplyGamma2Curve(int*, int*, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore25Dualsync_ApplyGamma2CurveEPiS0_iS0_i(void) {
    ALOGD("_ZN7LceCore25Dualsync_ApplyGamma2CurveEPiS0_iS0_i() called");
    return 0;
}

/* Demangled: LceCore::setSkyConstraint(int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore16setSkyConstraintEijii(void) {
    ALOGD("_ZN7LceCore16setSkyConstraintEijii() called");
    return 0;
}

/* Demangled: LceCore::isTouchValidBefore(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore18isTouchValidBeforeEiiii(void) {
    ALOGD("_ZN7LceCore18isTouchValidBeforeEiiii() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: LceCore::LceCoreExit() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11LceCoreExitEv(void) {
    ALOGD("_ZN7LceCore11LceCoreExitEv() called");
    return 0;
}

/* Demangled: LceCore::LceCore(eLCESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCoreC2E15eLCESensorDev_T(void) {
    ALOGD("_ZN7LceCoreC2E15eLCESensorDev_T() called");
    return 0;
}

/* Demangled: MTKLce::LceMain() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKLce7LceMainEv(void) {
    ALOGD("_ZN6MTKLce7LceMainEv() called");
    return 0;
}

/* Demangled: LceCore::LCE_InterpArray4(int (*) [2], int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore16LCE_InterpArray4EPA2_iiiiiii(void) {
    ALOGD("_ZN7LceCore16LCE_InterpArray4EPA2_iiiiiii() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Exported Object: Log128Bound */
extern "C" __attribute__((visibility("default"))) void* Log128Bound = NULL;

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: LceCore::LceMain() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore7LceMainEv(void) {
    ALOGD("_ZN7LceCore7LceMainEv() called");
    return 0;
}

/* Demangled: LceCore::backupLCEEXIF() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore13backupLCEEXIFEv(void) {
    ALOGD("_ZN7LceCore13backupLCEEXIFEv() called");
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

/* Demangled: LceCore::~LceCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCoreD1Ev(void) {
    ALOGD("_ZN7LceCoreD1Ev() called");
    return 0;
}

/* Exported Object: normal_distri */
extern "C" __attribute__((visibility("default"))) void* normal_distri = NULL;

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: LceCore::LceCoreProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14LceCoreProcessEv(void) {
    ALOGD("_ZN7LceCore14LceCoreProcessEv() called");
    return 0;
}

/* Exported Object: vtable for LceCoreDev<(eLCESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10LceCoreDevIL15eLCESensorDev_T16EE = NULL;

/* Demangled: LceCore::smoothLCE(LCE_AE_INFO_T, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore9smoothLCEE13LCE_AE_INFO_TPiS1_(void) {
    ALOGD("_ZN7LceCore9smoothLCEE13LCE_AE_INFO_TPiS1_() called");
    return 0;
}

/* Exported Object: vtable for LceCoreDev<(eLCESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10LceCoreDevIL15eLCESensorDev_T1EE = NULL;

/* Demangled: MTKLce::createInstance(eLCESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKLce14createInstanceE15eLCESensorDev_T(void) {
    ALOGD("_ZN6MTKLce14createInstanceE15eLCESensorDev_T() called");
    return 0;
}

/* Demangled: LceCore::LceCoreGetEXIF(MTK_LCE_EXIF_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14LceCoreGetEXIFER24MTK_LCE_EXIF_INFO_STRUCT(void) {
    ALOGD("_ZN7LceCore14LceCoreGetEXIFER24MTK_LCE_EXIF_INFO_STRUCT() called");
    return 0;
}

/* Demangled: LceCore::FaceEnhance() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11FaceEnhanceEv(void) {
    ALOGD("_ZN7LceCore11FaceEnhanceEv() called");
    return 0;
}

/* Exported Object: u4AccuReverseLCSLumaHist */
extern "C" __attribute__((visibility("default"))) void* u4AccuReverseLCSLumaHist = NULL;

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

/* Exported Object: u4AccuLCSLumaHistGma */
extern "C" __attribute__((visibility("default"))) void* u4AccuLCSLumaHistGma = NULL;

/* Demangled: LceCore::LceCoreSetEnvInfo(MTK_LCE_ENV_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore17LceCoreSetEnvInfoER23MTK_LCE_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN7LceCore17LceCoreSetEnvInfoER23MTK_LCE_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: LceCore::calcLCSActHist(LCE_LCS_INFO_T&, MTK_AUTO_LCE_TUNING_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14calcLCSActHistER14LCE_LCS_INFO_TR21MTK_AUTO_LCE_TUNING_T(void) {
    ALOGD("_ZN7LceCore14calcLCSActHistER14LCE_LCS_INFO_TR21MTK_AUTO_LCE_TUNING_T() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: LceCore::LceCore(eLCESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCoreC1E15eLCESensorDev_T(void) {
    ALOGD("_ZN7LceCoreC1E15eLCESensorDev_T() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: LceCore::LceCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore12LceCoreResetEv(void) {
    ALOGD("_ZN7LceCore12LceCoreResetEv() called");
    return 0;
}

/* Demangled: MTKLce::LceReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKLce8LceResetEv(void) {
    ALOGD("_ZN6MTKLce8LceResetEv() called");
    return 0;
}

/* Demangled: LceCore::LCE_FindPosition(unsigned int*, int, int, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore16LCE_FindPositionEPjiiiiRi(void) {
    ALOGD("_ZN7LceCore16LCE_FindPositionEPjiiiiRi() called");
    return 0;
}

/* Demangled: LceCore::rebuildAEHist(LCE_AE_INFO_T&, MTK_AUTO_LCE_TUNING_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore13rebuildAEHistER13LCE_AE_INFO_TR21MTK_AUTO_LCE_TUNING_T(void) {
    ALOGD("_ZN7LceCore13rebuildAEHistER13LCE_AE_INFO_TR21MTK_AUTO_LCE_TUNING_T() called");
    return 0;
}

/* Demangled: LceCore::calDCEToneCurve(MTK_AUTO_DCE_TUNING_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore15calDCEToneCurveEP21MTK_AUTO_DCE_TUNING_T(void) {
    ALOGD("_ZN7LceCore15calDCEToneCurveEP21MTK_AUTO_DCE_TUNING_T() called");
    return 0;
}

/* Exported Object: dualcamGmaIn */
extern "C" __attribute__((visibility("default"))) void* dualcamGmaIn = NULL;

/* Demangled: LceCore::applyDCEWt(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore10applyDCEWtEii(void) {
    ALOGD("_ZN7LceCore10applyDCEWtEii() called");
    return 0;
}

/* Demangled: LceCore::~LceCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCoreD2Ev(void) {
    ALOGD("_ZN7LceCoreD2Ev() called");
    return 0;
}

/* Demangled: LceCore::isTouchValidAfter(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore17isTouchValidAfterEiiii(void) {
    ALOGD("_ZN7LceCore17isTouchValidAfterEiiii() called");
    return 0;
}

/* Exported Object: m_u4AccuFlatHist */
extern "C" __attribute__((visibility("default"))) void* m_u4AccuFlatHist = NULL;

/* Exported Object: vtable for LceCoreDev<(eLCESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10LceCoreDevIL15eLCESensorDev_T2EE = NULL;

/* Demangled: LceCore::applygamma(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore10applygammaEi(void) {
    ALOGD("_ZN7LceCore10applygammaEi() called");
    return 0;
}

/* Demangled: LceCore::LceCoreGetResult(MTK_LCE_RESULT_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore16LceCoreGetResultER26MTK_LCE_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN7LceCore16LceCoreGetResultER26MTK_LCE_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: m_u4ActFlatHist */
extern "C" __attribute__((visibility("default"))) void* m_u4ActFlatHist = NULL;

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: LceCore::LceCoreConfigFlare(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore18LceCoreConfigFlareEi(void) {
    ALOGD("_ZN7LceCore18LceCoreConfigFlareEi() called");
    return 0;
}

/* Demangled: LceCore::LceReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore8LceResetEv(void) {
    ALOGD("_ZN7LceCore8LceResetEv() called");
    return 0;
}

/* Demangled: LceCore::calSkyRatio(int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11calSkyRatioEiPjj(void) {
    ALOGD("_ZN7LceCore11calSkyRatioEiPjj() called");
    return 0;
}

/* Exported Object: vtable for LceCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV7LceCore = NULL;

/* Demangled: LceCore::generateLTC() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11generateLTCEv(void) {
    ALOGD("_ZN7LceCore11generateLTCEv() called");
    return 0;
}

/* Demangled: LceCore::setHWLCEReg() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11setHWLCERegEv(void) {
    ALOGD("_ZN7LceCore11setHWLCERegEv() called");
    return 0;
}

/* Exported Object: m_u4LCSLumaHist */
extern "C" __attribute__((visibility("default"))) void* m_u4LCSLumaHist = NULL;

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: LceCore::getInstance(eLCESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11getInstanceE15eLCESensorDev_T(void) {
    ALOGD("_ZN7LceCore11getInstanceE15eLCESensorDev_T() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Exported Object: m_u4LCSLumaHistGma */
extern "C" __attribute__((visibility("default"))) void* m_u4LCSLumaHistGma = NULL;

/* Demangled: LceCore::calFaceCurrGain(unsigned int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore15calFaceCurrGainEjRiS0_(void) {
    ALOGD("_ZN7LceCore15calFaceCurrGainEjRiS0_() called");
    return 0;
}

/* Demangled: LceCore::DCE_findLCSMinMax(unsigned int*, unsigned int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore17DCE_findLCSMinMaxEPjjRiS1_(void) {
    ALOGD("_ZN7LceCore17DCE_findLCSMinMaxEPjjRiS1_() called");
    return 0;
}

/* Demangled: LceCore::invCurve(int, int*, int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore8invCurveEiPiS0_PjS1_(void) {
    ALOGD("_ZN7LceCore8invCurveEiPiS0_PjS1_() called");
    return 0;
}

/* Demangled: LceCore::interpolateLCE(int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14interpolateLCEEiiiPi(void) {
    ALOGD("_ZN7LceCore14interpolateLCEEiiiPi() called");
    return 0;
}

/* Demangled: LceCore::SWLCE_v3p0() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore10SWLCE_v3p0Ev(void) {
    ALOGD("_ZN7LceCore10SWLCE_v3p0Ev() called");
    return 0;
}

/* Demangled: LceCore::LceCoreConfigSmooth(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore19LceCoreConfigSmoothEi(void) {
    ALOGD("_ZN7LceCore19LceCoreConfigSmoothEi() called");
    return 0;
}

/* Demangled: LceCore::Dualsync_InverseGamma2Curve(int*, int*, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore27Dualsync_InverseGamma2CurveEPiS0_iS0_i(void) {
    ALOGD("_ZN7LceCore27Dualsync_InverseGamma2CurveEPiS0_iS0_i() called");
    return 0;
}

/* Demangled: LceCore::setSlopeConstraint(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore18setSlopeConstraintEf(void) {
    ALOGD("_ZN7LceCore18setSlopeConstraintEf() called");
    return 0;
}

/* Demangled: LceCore::LceInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore7LceInitEPvS0_(void) {
    ALOGD("_ZN7LceCore7LceInitEPvS0_() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: LceCore::smoothDCE(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore9smoothDCEEi(void) {
    ALOGD("_ZN7LceCore9smoothDCEEi() called");
    return 0;
}

/* Demangled: LceCore::midSepHist_LA(unsigned int*, unsigned int*, unsigned int*, unsigned int, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore13midSepHist_LAEPjS0_S0_jRiS1_S1_S1_(void) {
    ALOGD("_ZN7LceCore13midSepHist_LAEPjS0_S0_jRiS1_S1_S1_() called");
    return 0;
}

/* Demangled: LceCore::LCETCConstraint(int*, int*, MTK_AUTO_LCE_TUNING_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore15LCETCConstraintEPiS0_P21MTK_AUTO_LCE_TUNING_T(void) {
    ALOGD("_ZN7LceCore15LCETCConstraintEPiS0_P21MTK_AUTO_LCE_TUNING_T() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Exported Object: gmaOUT */
extern "C" __attribute__((visibility("default"))) void* gmaOUT = NULL;

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: LceCore::LceCoreSetProcInfo(MTK_LCE_PROC_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore18LceCoreSetProcInfoER24MTK_LCE_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN7LceCore18LceCoreSetProcInfoER24MTK_LCE_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: LceCore::SyncDualcamInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore15SyncDualcamInfoEv(void) {
    ALOGD("_ZN7LceCore15SyncDualcamInfoEv() called");
    return 0;
}

/* Exported Object: u4AccuLCSLumaHist */
extern "C" __attribute__((visibility("default"))) void* u4AccuLCSLumaHist = NULL;

/* Demangled: LceCore::getLCELockInfo(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14getLCELockInfoERi(void) {
    ALOGD("_ZN7LceCore14getLCELockInfoERi() called");
    return 0;
}

/* Demangled: LceCore::calDoubleHE(unsigned int*, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore11calDoubleHEEPjS0_j(void) {
    ALOGD("_ZN7LceCore11calDoubleHEEPjS0_j() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: MTKLce::LceFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKLce14LceFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6MTKLce14LceFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: LceCore::modifyLCECurve(LCE_AE_INFO_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7LceCore14modifyLCECurveE13LCE_AE_INFO_T(void) {
    ALOGD("_ZN7LceCore14modifyLCECurveE13LCE_AE_INFO_T() called");
    return 0;
}

/* Demangled: MTKLce::LceInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKLce7LceInitEPvS0_(void) {
    ALOGD("_ZN6MTKLce7LceInitEPvS0_() called");
    return 0;
}
