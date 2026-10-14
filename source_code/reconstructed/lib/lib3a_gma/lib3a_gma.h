/*
 * Reverse-Engineered ABI Specification for: lib3a.gma.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.gma.so
 */

#ifndef BEGONIA_RE_LIB3A_GMA_H
#define BEGONIA_RE_LIB3A_GMA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7GmaCore11getHistInfoEv */
/* Demangled: GmaCore::getHistInfo() */
int _ZN7GmaCore11getHistInfoEv(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: _ZN7GmaCoreD0Ev */
/* Demangled: GmaCore::~GmaCore() */
int _ZN7GmaCoreD0Ev(void);

/* Symbol: _ZN7GmaCore15GMA_INTERPOLATEEiiiii */
/* Demangled: GmaCore::GMA_INTERPOLATE(int, int, int, int, int) */
int _ZN7GmaCore15GMA_INTERPOLATEEiiiii(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _ZN7GmaCore10FixedGAMMAEv */
/* Demangled: GmaCore::FixedGAMMA() */
int _ZN7GmaCore10FixedGAMMAEv(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: _ZN6MTKGma14createInstanceE15eGMASensorDev_T */
/* Demangled: MTKGma::createInstance(eGMASensorDev_T) */
int _ZN6MTKGma14createInstanceE15eGMASensorDev_T(void);

/* Symbol: _ZN7GmaCore14GmaCoreProcessEv */
/* Demangled: GmaCore::GmaCoreProcess() */
int _ZN7GmaCore14GmaCoreProcessEv(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: _ZN7GmaCore15GmaFormatEncodeEPiS0_ */
/* Demangled: GmaCore::GmaFormatEncode(int*, int*) */
int _ZN7GmaCore15GmaFormatEncodeEPiS0_(void);

/* Symbol: _ZN7GmaCore14GmaCoreGetEXIFER24MTK_GMA_EXIF_INFO_STRUCT */
/* Demangled: GmaCore::GmaCoreGetEXIF(MTK_GMA_EXIF_INFO_STRUCT&) */
int _ZN7GmaCore14GmaCoreGetEXIFER24MTK_GMA_EXIF_INFO_STRUCT(void);

/* Symbol: _ZN7GmaCore25GmaCoreGetDualcamSyncInfoEP27MTK_GMA_DUALCAM_SYNC_INFO_T */
/* Demangled: GmaCore::GmaCoreGetDualcamSyncInfo(MTK_GMA_DUALCAM_SYNC_INFO_T*) */
int _ZN7GmaCore25GmaCoreGetDualcamSyncInfoEP27MTK_GMA_DUALCAM_SYNC_INFO_T(void);

/* Symbol: _ZN7GmaCore17GmaCoreConfigModeE10GMA_MODE_T */
/* Demangled: GmaCore::GmaCoreConfigMode(GMA_MODE_T) */
int _ZN7GmaCore17GmaCoreConfigModeE10GMA_MODE_T(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _ZN7GmaCoreC1E15eGMASensorDev_T */
/* Demangled: GmaCore::GmaCore(eGMASensorDev_T) */
int _ZN7GmaCoreC1E15eGMASensorDev_T(void);

/* Symbol: _ZN7GmaCore16HistogramRebuildE13GMA_AE_INFO_T */
/* Demangled: GmaCore::HistogramRebuild(GMA_AE_INFO_T) */
int _ZN7GmaCore16HistogramRebuildE13GMA_AE_INFO_T(void);

/* Symbol: _ZN7GmaCoreD1Ev */
/* Demangled: GmaCore::~GmaCore() */
int _ZN7GmaCoreD1Ev(void);

/* Symbol: _ZN7GmaCore11GmaCoreExitEv */
/* Demangled: GmaCore::GmaCoreExit() */
int _ZN7GmaCore11GmaCoreExitEv(void);

/* Symbol: _ZN7GmaCore12GmaCoreResetEv */
/* Demangled: GmaCore::GmaCoreReset() */
int _ZN7GmaCore12GmaCoreResetEv(void);

/* Symbol: _ZN7GmaCore14m_i4GmaSectionE */
/* Demangled: GmaCore::m_i4GmaSection */
extern void* _ZN7GmaCore14m_i4GmaSectionE;

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _ZN7GmaCore13backupGMAEXIFEv */
/* Demangled: GmaCore::backupGMAEXIF() */
int _ZN7GmaCore13backupGMAEXIFEv(void);

/* Symbol: _ZTV10GmaCoreDevIL15eGMASensorDev_T4EE */
/* Demangled: vtable for GmaCoreDev<(eGMASensorDev_T)4> */
extern void* _ZTV10GmaCoreDevIL15eGMASensorDev_T4EE;

/* Symbol: _ZTV10GmaCoreDevIL15eGMASensorDev_T8EE */
/* Demangled: vtable for GmaCoreDev<(eGMASensorDev_T)8> */
extern void* _ZTV10GmaCoreDevIL15eGMASensorDev_T8EE;

/* Symbol: _ZN7GmaCore17GmaCoreSetEnvInfoE23MTK_GMA_ENV_INFO_STRUCT */
/* Demangled: GmaCore::GmaCoreSetEnvInfo(MTK_GMA_ENV_INFO_STRUCT) */
int _ZN7GmaCore17GmaCoreSetEnvInfoE23MTK_GMA_ENV_INFO_STRUCT(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _ZN7GmaCore16GmaCoreGetResultER26MTK_GMA_RESULT_INFO_STRUCT */
/* Demangled: GmaCore::GmaCoreGetResult(MTK_GMA_RESULT_INFO_STRUCT&) */
int _ZN7GmaCore16GmaCoreGetResultER26MTK_GMA_RESULT_INFO_STRUCT(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: _ZN6MTKGma14GmaFeatureCtrlEjPvS0_ */
/* Demangled: MTKGma::GmaFeatureCtrl(unsigned int, void*, void*) */
int _ZN6MTKGma14GmaFeatureCtrlEjPvS0_(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: _ZN7GmaCore7GmaMainEv */
/* Demangled: GmaCore::GmaMain() */
int _ZN7GmaCore7GmaMainEv(void);

/* Symbol: _ZN7GmaCore11getInstanceE15eGMASensorDev_T */
/* Demangled: GmaCore::getInstance(eGMASensorDev_T) */
int _ZN7GmaCore11getInstanceE15eGMASensorDev_T(void);

/* Symbol: _ZTV7GmaCore */
/* Demangled: vtable for GmaCore */
extern void* _ZTV7GmaCore;

/* Symbol: _ZN6MTKGma7GmaExitEv */
/* Demangled: MTKGma::GmaExit() */
int _ZN6MTKGma7GmaExitEv(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _ZN6MTKGma7GmaMainEv */
/* Demangled: MTKGma::GmaMain() */
int _ZN6MTKGma7GmaMainEv(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: _ZN7GmaCoreD2Ev */
/* Demangled: GmaCore::~GmaCore() */
int _ZN7GmaCoreD2Ev(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _ZTV10GmaCoreDevIL15eGMASensorDev_T16EE */
/* Demangled: vtable for GmaCoreDev<(eGMASensorDev_T)16> */
extern void* _ZTV10GmaCoreDevIL15eGMASensorDev_T16EE;

/* Symbol: _ZN7GmaCore18GmaCoreConfigFlareEi */
/* Demangled: GmaCore::GmaCoreConfigFlare(int) */
int _ZN7GmaCore18GmaCoreConfigFlareEi(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _ZN7GmaCore18GmaCoreSetProcInfoE24MTK_GMA_PROC_INFO_STRUCT */
/* Demangled: GmaCore::GmaCoreSetProcInfo(MTK_GMA_PROC_INFO_STRUCT) */
int _ZN7GmaCore18GmaCoreSetProcInfoE24MTK_GMA_PROC_INFO_STRUCT(void);

/* Symbol: _ZTV10GmaCoreDevIL15eGMASensorDev_T1EE */
/* Demangled: vtable for GmaCoreDev<(eGMASensorDev_T)1> */
extern void* _ZTV10GmaCoreDevIL15eGMASensorDev_T1EE;

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _ZN7GmaCore12DynamicGAMMAEv */
/* Demangled: GmaCore::DynamicGAMMA() */
int _ZN7GmaCore12DynamicGAMMAEv(void);

/* Symbol: _ZN7GmaCore14GmaFeatureCtrlEjPvS0_ */
/* Demangled: GmaCore::GmaFeatureCtrl(unsigned int, void*, void*) */
int _ZN7GmaCore14GmaFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN6MTKGma7GmaInitEPvS0_ */
/* Demangled: MTKGma::GmaInit(void*, void*) */
int _ZN6MTKGma7GmaInitEPvS0_(void);

/* Symbol: _ZN7GmaCore11SmoothGAMMAEPiS0_i */
/* Demangled: GmaCore::SmoothGAMMA(int*, int*, int) */
int _ZN7GmaCore11SmoothGAMMAEPiS0_i(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _ZN7GmaCore7GmaInitEPvS0_ */
/* Demangled: GmaCore::GmaInit(void*, void*) */
int _ZN7GmaCore7GmaInitEPvS0_(void);

/* Symbol: _ZN7GmaCore8GmaResetEv */
/* Demangled: GmaCore::GmaReset() */
int _ZN7GmaCore8GmaResetEv(void);

/* Symbol: _ZN7GmaCore26GmaCoreConfigEnhanceFactorEi */
/* Demangled: GmaCore::GmaCoreConfigEnhanceFactor(int) */
int _ZN7GmaCore26GmaCoreConfigEnhanceFactorEi(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN7GmaCore19GmaCoreConfigSmoothEi */
/* Demangled: GmaCore::GmaCoreConfigSmooth(int) */
int _ZN7GmaCore19GmaCoreConfigSmoothEi(void);

/* Symbol: _ZN7GmaCore13AdaptiveGAMMAEv */
/* Demangled: GmaCore::AdaptiveGAMMA() */
int _ZN7GmaCore13AdaptiveGAMMAEv(void);

/* Symbol: _ZN7GmaCoreC2E15eGMASensorDev_T */
/* Demangled: GmaCore::GmaCore(eGMASensorDev_T) */
int _ZN7GmaCoreC2E15eGMASensorDev_T(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN6MTKGma8GmaResetEv */
/* Demangled: MTKGma::GmaReset() */
int _ZN6MTKGma8GmaResetEv(void);

/* Symbol: _ZN7GmaCore17GmaCurveSynthesisEv */
/* Demangled: GmaCore::GmaCurveSynthesis() */
int _ZN7GmaCore17GmaCurveSynthesisEv(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _ZTV10GmaCoreDevIL15eGMASensorDev_T2EE */
/* Demangled: vtable for GmaCoreDev<(eGMASensorDev_T)2> */
extern void* _ZTV10GmaCoreDevIL15eGMASensorDev_T2EE;

/* Symbol: _ZN7GmaCore15m_i4DefGmaBase0E */
/* Demangled: GmaCore::m_i4DefGmaBase0 */
extern void* _ZN7GmaCore15m_i4DefGmaBase0E;

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _ZN7GmaCore15GmaFormatDecodeEPiS0_ */
/* Demangled: GmaCore::GmaFormatDecode(int*, int*) */
int _ZN7GmaCore15GmaFormatDecodeEPiS0_(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: _ZN7GmaCore7GmaExitEv */
/* Demangled: GmaCore::GmaExit() */
int _ZN7GmaCore7GmaExitEv(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_GMA_H */
