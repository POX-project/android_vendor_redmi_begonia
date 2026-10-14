/*
 * Reverse-Engineered ABI Specification for: libmsbc_mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmsbc_mtk.so
 */

#ifndef BEGONIA_RE_LIBMSBC_MTK_H
#define BEGONIA_RE_LIBMSBC_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MSBC_ENC_Init */
/* Demangled: MSBC_ENC_Init */
int MSBC_ENC_Init(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: sbc_pack_frame */
/* Demangled: sbc_pack_frame */
int sbc_pack_frame(void);

/* Symbol: MSBC_DEC_GetBufferSize */
/* Demangled: MSBC_DEC_GetBufferSize */
int MSBC_DEC_GetBufferSize(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: MSBC_ENC_Process */
/* Demangled: MSBC_ENC_Process */
int MSBC_ENC_Process(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: sbc_crc8 */
/* Demangled: sbc_crc8 */
int sbc_crc8(void);

/* Symbol: sbc_unpack_frame */
/* Demangled: sbc_unpack_frame */
int sbc_unpack_frame(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: sbc_calculate_bits */
/* Demangled: sbc_calculate_bits */
int sbc_calculate_bits(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: MSBC_DEC_Process */
/* Demangled: MSBC_DEC_Process */
int MSBC_DEC_Process(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: MSBC_ENC_GetBufferSize */
/* Demangled: MSBC_ENC_GetBufferSize */
int MSBC_ENC_GetBufferSize(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: sbc_proto_8_80_fixpoint_wcn */
/* Demangled: sbc_proto_8_80_fixpoint_wcn */
extern void* sbc_proto_8_80_fixpoint_wcn;

/* Symbol: sbc_synthesize_audio */
/* Demangled: sbc_synthesize_audio */
int sbc_synthesize_audio(void);

/* Symbol: sbc_analyze_audio */
/* Demangled: sbc_analyze_audio */
int sbc_analyze_audio(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: MSBC_DEC_Init */
/* Demangled: MSBC_DEC_Init */
int MSBC_DEC_Init(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMSBC_MTK_H */
