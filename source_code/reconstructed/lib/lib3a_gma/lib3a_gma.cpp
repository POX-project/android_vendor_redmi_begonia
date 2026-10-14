/*
 * Reverse-Engineered Source for: lib3a.gma.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_gma"

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
#include "lib3a_gma.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: GmaCore::getHistInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore11getHistInfoEv(void) {
    ALOGD("_ZN7GmaCore11getHistInfoEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: GmaCore::~GmaCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCoreD0Ev(void) {
    ALOGD("_ZN7GmaCoreD0Ev() called");
    return 0;
}

/* Demangled: GmaCore::GMA_INTERPOLATE(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore15GMA_INTERPOLATEEiiiii(void) {
    ALOGD("_ZN7GmaCore15GMA_INTERPOLATEEiiiii() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: GmaCore::FixedGAMMA() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore10FixedGAMMAEv(void) {
    ALOGD("_ZN7GmaCore10FixedGAMMAEv() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: MTKGma::createInstance(eGMASensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKGma14createInstanceE15eGMASensorDev_T(void) {
    ALOGD("_ZN6MTKGma14createInstanceE15eGMASensorDev_T() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore14GmaCoreProcessEv(void) {
    ALOGD("_ZN7GmaCore14GmaCoreProcessEv() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: GmaCore::GmaFormatEncode(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore15GmaFormatEncodeEPiS0_(void) {
    ALOGD("_ZN7GmaCore15GmaFormatEncodeEPiS0_() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreGetEXIF(MTK_GMA_EXIF_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore14GmaCoreGetEXIFER24MTK_GMA_EXIF_INFO_STRUCT(void) {
    ALOGD("_ZN7GmaCore14GmaCoreGetEXIFER24MTK_GMA_EXIF_INFO_STRUCT() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreGetDualcamSyncInfo(MTK_GMA_DUALCAM_SYNC_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore25GmaCoreGetDualcamSyncInfoEP27MTK_GMA_DUALCAM_SYNC_INFO_T(void) {
    ALOGD("_ZN7GmaCore25GmaCoreGetDualcamSyncInfoEP27MTK_GMA_DUALCAM_SYNC_INFO_T() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreConfigMode(GMA_MODE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore17GmaCoreConfigModeE10GMA_MODE_T(void) {
    ALOGD("_ZN7GmaCore17GmaCoreConfigModeE10GMA_MODE_T() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: GmaCore::GmaCore(eGMASensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCoreC1E15eGMASensorDev_T(void) {
    ALOGD("_ZN7GmaCoreC1E15eGMASensorDev_T() called");
    return 0;
}

/* Demangled: GmaCore::HistogramRebuild(GMA_AE_INFO_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore16HistogramRebuildE13GMA_AE_INFO_T(void) {
    ALOGD("_ZN7GmaCore16HistogramRebuildE13GMA_AE_INFO_T() called");
    return 0;
}

/* Demangled: GmaCore::~GmaCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCoreD1Ev(void) {
    ALOGD("_ZN7GmaCoreD1Ev() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreExit() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore11GmaCoreExitEv(void) {
    ALOGD("_ZN7GmaCore11GmaCoreExitEv() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore12GmaCoreResetEv(void) {
    ALOGD("_ZN7GmaCore12GmaCoreResetEv() called");
    return 0;
}

/* Exported Object: GmaCore::m_i4GmaSection */
extern "C" __attribute__((visibility("default"))) void* _ZN7GmaCore14m_i4GmaSectionE = NULL;

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: GmaCore::backupGMAEXIF() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore13backupGMAEXIFEv(void) {
    ALOGD("_ZN7GmaCore13backupGMAEXIFEv() called");
    return 0;
}

/* Exported Object: vtable for GmaCoreDev<(eGMASensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10GmaCoreDevIL15eGMASensorDev_T4EE = NULL;

/* Exported Object: vtable for GmaCoreDev<(eGMASensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10GmaCoreDevIL15eGMASensorDev_T8EE = NULL;

/* Demangled: GmaCore::GmaCoreSetEnvInfo(MTK_GMA_ENV_INFO_STRUCT) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore17GmaCoreSetEnvInfoE23MTK_GMA_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN7GmaCore17GmaCoreSetEnvInfoE23MTK_GMA_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreGetResult(MTK_GMA_RESULT_INFO_STRUCT&) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore16GmaCoreGetResultER26MTK_GMA_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN7GmaCore16GmaCoreGetResultER26MTK_GMA_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: MTKGma::GmaFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKGma14GmaFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6MTKGma14GmaFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: GmaCore::GmaMain() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore7GmaMainEv(void) {
    ALOGD("_ZN7GmaCore7GmaMainEv() called");
    return 0;
}

/* Demangled: GmaCore::getInstance(eGMASensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore11getInstanceE15eGMASensorDev_T(void) {
    ALOGD("_ZN7GmaCore11getInstanceE15eGMASensorDev_T() called");
    return 0;
}

/* Exported Object: vtable for GmaCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV7GmaCore = NULL;

/* Demangled: MTKGma::GmaExit() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKGma7GmaExitEv(void) {
    ALOGD("_ZN6MTKGma7GmaExitEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: MTKGma::GmaMain() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKGma7GmaMainEv(void) {
    ALOGD("_ZN6MTKGma7GmaMainEv() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: GmaCore::~GmaCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCoreD2Ev(void) {
    ALOGD("_ZN7GmaCoreD2Ev() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Exported Object: vtable for GmaCoreDev<(eGMASensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10GmaCoreDevIL15eGMASensorDev_T16EE = NULL;

/* Demangled: GmaCore::GmaCoreConfigFlare(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore18GmaCoreConfigFlareEi(void) {
    ALOGD("_ZN7GmaCore18GmaCoreConfigFlareEi() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreSetProcInfo(MTK_GMA_PROC_INFO_STRUCT) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore18GmaCoreSetProcInfoE24MTK_GMA_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN7GmaCore18GmaCoreSetProcInfoE24MTK_GMA_PROC_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for GmaCoreDev<(eGMASensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10GmaCoreDevIL15eGMASensorDev_T1EE = NULL;

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: GmaCore::DynamicGAMMA() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore12DynamicGAMMAEv(void) {
    ALOGD("_ZN7GmaCore12DynamicGAMMAEv() called");
    return 0;
}

/* Demangled: GmaCore::GmaFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore14GmaFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN7GmaCore14GmaFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: MTKGma::GmaInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKGma7GmaInitEPvS0_(void) {
    ALOGD("_ZN6MTKGma7GmaInitEPvS0_() called");
    return 0;
}

/* Demangled: GmaCore::SmoothGAMMA(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore11SmoothGAMMAEPiS0_i(void) {
    ALOGD("_ZN7GmaCore11SmoothGAMMAEPiS0_i() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: GmaCore::GmaInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore7GmaInitEPvS0_(void) {
    ALOGD("_ZN7GmaCore7GmaInitEPvS0_() called");
    return 0;
}

/* Demangled: GmaCore::GmaReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore8GmaResetEv(void) {
    ALOGD("_ZN7GmaCore8GmaResetEv() called");
    return 0;
}

/* Demangled: GmaCore::GmaCoreConfigEnhanceFactor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore26GmaCoreConfigEnhanceFactorEi(void) {
    ALOGD("_ZN7GmaCore26GmaCoreConfigEnhanceFactorEi() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: GmaCore::GmaCoreConfigSmooth(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore19GmaCoreConfigSmoothEi(void) {
    ALOGD("_ZN7GmaCore19GmaCoreConfigSmoothEi() called");
    return 0;
}

/* Demangled: GmaCore::AdaptiveGAMMA() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore13AdaptiveGAMMAEv(void) {
    ALOGD("_ZN7GmaCore13AdaptiveGAMMAEv() called");
    return 0;
}

/* Demangled: GmaCore::GmaCore(eGMASensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCoreC2E15eGMASensorDev_T(void) {
    ALOGD("_ZN7GmaCoreC2E15eGMASensorDev_T() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: MTKGma::GmaReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKGma8GmaResetEv(void) {
    ALOGD("_ZN6MTKGma8GmaResetEv() called");
    return 0;
}

/* Demangled: GmaCore::GmaCurveSynthesis() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore17GmaCurveSynthesisEv(void) {
    ALOGD("_ZN7GmaCore17GmaCurveSynthesisEv() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Exported Object: vtable for GmaCoreDev<(eGMASensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10GmaCoreDevIL15eGMASensorDev_T2EE = NULL;

/* Exported Object: GmaCore::m_i4DefGmaBase0 */
extern "C" __attribute__((visibility("default"))) void* _ZN7GmaCore15m_i4DefGmaBase0E = NULL;

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: GmaCore::GmaFormatDecode(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore15GmaFormatDecodeEPiS0_(void) {
    ALOGD("_ZN7GmaCore15GmaFormatDecodeEPiS0_() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: GmaCore::GmaExit() */
extern "C" __attribute__((visibility("default"))) int _ZN7GmaCore7GmaExitEv(void) {
    ALOGD("_ZN7GmaCore7GmaExitEv() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}
