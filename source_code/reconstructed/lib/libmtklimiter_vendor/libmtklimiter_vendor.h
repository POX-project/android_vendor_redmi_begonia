/*
 * Reverse-Engineered ABI Specification for: libmtklimiter_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtklimiter_vendor.so
 */

#ifndef BEGONIA_RE_LIBMTKLIMITER_VENDOR_H
#define BEGONIA_RE_LIBMTKLIMITER_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: apply_ramp_gain_for_float32 */
/* Demangled: apply_ramp_gain_for_float32 */
int apply_ramp_gain_for_float32(void);

/* Symbol: copy_q5p27_to_q33p31 */
/* Demangled: copy_q5p27_to_q33p31 */
int copy_q5p27_to_q33p31(void);

/* Symbol: clipping_limiter */
/* Demangled: clipping_limiter */
int clipping_limiter(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: Limiter_Process */
/* Demangled: Limiter_Process */
int Limiter_Process(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: apply_ramp_gain_for_q5p27 */
/* Demangled: apply_ramp_gain_for_q5p27 */
int apply_ramp_gain_for_q5p27(void);

/* Symbol: move_from_q33p31_to_q1p31 */
/* Demangled: move_from_q33p31_to_q1p31 */
int move_from_q33p31_to_q1p31(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: limiter_check_pcm_format */
/* Demangled: limiter_check_pcm_format */
int limiter_check_pcm_format(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: convert_from_q33p31_to_q5p27 */
/* Demangled: convert_from_q33p31_to_q5p27 */
int convert_from_q33p31_to_q5p27(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: Limiter_SetParameters */
/* Demangled: Limiter_SetParameters */
int Limiter_SetParameters(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: apply_step_gain_without_saturation */
/* Demangled: apply_step_gain_without_saturation */
int apply_step_gain_without_saturation(void);

/* Symbol: apply_targ_gain */
/* Demangled: apply_targ_gain */
int apply_targ_gain(void);

/* Symbol: derive_gain */
/* Demangled: derive_gain */
int derive_gain(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __fixdfdi */
/* Demangled: __fixdfdi */
int __fixdfdi(void);

/* Symbol: calculate_block_min_gain */
/* Demangled: calculate_block_min_gain */
int calculate_block_min_gain(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: __fixunsdfdi */
/* Demangled: __fixunsdfdi */
int __fixunsdfdi(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: Limiter_GetBufferSize */
/* Demangled: Limiter_GetBufferSize */
int Limiter_GetBufferSize(void);

/* Symbol: Limiter_Reset */
/* Demangled: Limiter_Reset */
int Limiter_Reset(void);

/* Symbol: limiter_all_format */
/* Demangled: limiter_all_format */
int limiter_all_format(void);

/* Symbol: convert_from_q33p31_to_float32 */
/* Demangled: convert_from_q33p31_to_float32 */
int convert_from_q33p31_to_float32(void);

/* Symbol: copy_q1p31_to_q5p27 */
/* Demangled: copy_q1p31_to_q5p27 */
int copy_q1p31_to_q5p27(void);

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: LMTR_RAMP_TABLE */
/* Demangled: LMTR_RAMP_TABLE */
extern void* LMTR_RAMP_TABLE;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: apply_ramp_gain_for_q33p31 */
/* Demangled: apply_ramp_gain_for_q33p31 */
int apply_ramp_gain_for_q33p31(void);

/* Symbol: copy_float32_to_q33p31 */
/* Demangled: copy_float32_to_q33p31 */
int copy_float32_to_q33p31(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: convert_from_q5p27_to_float32 */
/* Demangled: convert_from_q5p27_to_float32 */
int convert_from_q5p27_to_float32(void);

/* Symbol: convert_from_q5p27_to_q33p31 */
/* Demangled: convert_from_q5p27_to_q33p31 */
int convert_from_q5p27_to_q33p31(void);

/* Symbol: copy_q1p31_to_float32 */
/* Demangled: copy_q1p31_to_float32 */
int copy_q1p31_to_float32(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: Limiter_GetStatus */
/* Demangled: Limiter_GetStatus */
int Limiter_GetStatus(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: __aeabi_d2lz */
/* Demangled: __aeabi_d2lz */
int __aeabi_d2lz(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: apply_fix_gain */
/* Demangled: apply_fix_gain */
int apply_fix_gain(void);

/* Symbol: apply_makeup_gain */
/* Demangled: apply_makeup_gain */
int apply_makeup_gain(void);

/* Symbol: convert_from_float32_to_q33p31 */
/* Demangled: convert_from_float32_to_q33p31 */
int convert_from_float32_to_q33p31(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: Limiter_GetVersion */
/* Demangled: Limiter_GetVersion */
int Limiter_GetVersion(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: no_limiter */
/* Demangled: no_limiter */
int no_limiter(void);

/* Symbol: clip_from_q33p31_to_q1p31 */
/* Demangled: clip_from_q33p31_to_q1p31 */
int clip_from_q33p31_to_q1p31(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: Limiter_Open */
/* Demangled: Limiter_Open */
int Limiter_Open(void);

/* Symbol: limiter_check_state */
/* Demangled: limiter_check_state */
int limiter_check_state(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: convert_from_float32_to_q5p27 */
/* Demangled: convert_from_float32_to_q5p27 */
int convert_from_float32_to_q5p27(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKLIMITER_VENDOR_H */
