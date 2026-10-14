/*
 * Reverse-Engineered ABI Specification for: libmtk_drvb.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtk_drvb.so
 */

#ifndef BEGONIA_RE_LIBMTK_DRVB_H
#define BEGONIA_RE_LIBMTK_DRVB_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: get_dev_info_data */
/* Demangled: get_dev_info_data */
int get_dev_info_data(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: sample_sp */
/* Demangled: sample_sp */
int sample_sp(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: platform_type */
/* Demangled: platform_type */
extern void* platform_type;

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

/* Symbol: mtk_drvb_respond_prepare */
/* Demangled: mtk_drvb_respond_prepare */
int mtk_drvb_respond_prepare(void);

/* Symbol: advchk_array */
/* Demangled: advchk_array */
extern void* advchk_array;

/* Symbol: mtk_drvb_prepare */
/* Demangled: mtk_drvb_prepare */
int mtk_drvb_prepare(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: external_hw_code */
/* Demangled: external_hw_code */
extern void* external_hw_code;

/* Symbol: platform_init */
/* Demangled: platform_init */
int platform_init(void);

/* Symbol: ext_hw_code_mut */
/* Demangled: ext_hw_code_mut */
extern void* ext_hw_code_mut;

/* Symbol: dump_babyp */
/* Demangled: dump_babyp */
int dump_babyp(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: advchk_mask */
/* Demangled: advchk_mask */
extern void* advchk_mask;

/* Symbol: drvb_ok */
/* Demangled: drvb_ok */
extern void* drvb_ok;

/* Symbol: sample_tb */
/* Demangled: sample_tb */
int sample_tb(void);

/* Symbol: mtk_drvb_respond */
/* Demangled: mtk_drvb_respond */
int mtk_drvb_respond(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: ptpod_freq_set */
/* Demangled: ptpod_freq_set */
int ptpod_freq_set(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: num_advchk_callback */
/* Demangled: num_advchk_callback */
extern void* num_advchk_callback;

/* Symbol: mtk_drvb_basechk */
/* Demangled: mtk_drvb_basechk */
int mtk_drvb_basechk(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: sec_drv_base_check */
/* Demangled: sec_drv_base_check */
int sec_drv_base_check(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: platform_advchk */
/* Demangled: platform_advchk */
int platform_advchk(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: drvb_ext_input */
/* Demangled: drvb_ext_input */
int drvb_ext_input(void);

/* Symbol: get_hw_code */
/* Demangled: get_hw_code */
int get_hw_code(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

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

/* Symbol: platform_extchk */
/* Demangled: platform_extchk */
int platform_extchk(void);

/* Symbol: sec_drv_info_update */
/* Demangled: sec_drv_info_update */
int sec_drv_info_update(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: check_platform */
/* Demangled: check_platform */
int check_platform(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTK_DRVB_H */
