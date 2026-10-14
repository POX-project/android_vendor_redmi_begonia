/*
 * Reverse-Engineered ABI Specification for: libcamalgo.ispfeature.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.ispfeature.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_ISPFEATURE_H
#define BEGONIA_RE_LIBCAMALGO_ISPFEATURE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: g_Smooth_CCM_Ver */
/* Demangled: g_Smooth_CCM_Ver */
extern void* g_Smooth_CCM_Ver;

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _Z14GainProjectionRK10AWB_GAIN_TR26ISP_NVRAM_MULTI_CCM_STRUCTRS_PfiPi */
/* Demangled: GainProjection(AWB_GAIN_T const&, ISP_NVRAM_MULTI_CCM_STRUCT&, AWB_GAIN_T&, float*, int, int*) */
int _Z14GainProjectionRK10AWB_GAIN_TR26ISP_NVRAM_MULTI_CCM_STRUCTRS_PfiPi(void);

/* Symbol: _Z9SmoothCCMiiRN11NSIspTuning15ISP_NVRAM_CCM_TERtssR26ISP_NVRAM_MULTI_CCM_STRUCTS4_RK9ColorInfoPS0_Rj */
/* Demangled: SmoothCCM(int, int, NSIspTuning::ISP_NVRAM_CCM_T&, unsigned short&, short, short, ISP_NVRAM_MULTI_CCM_STRUCT&, ISP_NVRAM_MULTI_CCM_STRUCT&, ColorInfo const&, NSIspTuning::ISP_NVRAM_CCM_T*, unsigned int&) */
int _Z9SmoothCCMiiRN11NSIspTuning15ISP_NVRAM_CCM_TERtssR26ISP_NVRAM_MULTI_CCM_STRUCTS4_RK9ColorInfoPS0_Rj(void);

/* Symbol: _Z13InterpolationR10AWB_GAIN_TiiiR12ISP_CCM_T_2DR9ISP_CCM_TPfii */
/* Demangled: Interpolation(AWB_GAIN_T&, int, int, int, ISP_CCM_T_2D&, ISP_CCM_T&, float*, int, int) */
int _Z13InterpolationR10AWB_GAIN_TiiiR12ISP_CCM_T_2DR9ISP_CCM_TPfii(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Z8BlendCCMPfR12ISP_CCM_T_2DR9ISP_CCM_Tiii */
/* Demangled: BlendCCM(float*, ISP_CCM_T_2D&, ISP_CCM_T&, int, int, int) */
int _Z8BlendCCMPfR12ISP_CCM_T_2DR9ISP_CCM_Tiii(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_ISPFEATURE_H */
