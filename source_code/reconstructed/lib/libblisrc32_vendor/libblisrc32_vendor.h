/*
 * Reverse-Engineered ABI Specification for: libblisrc32_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libblisrc32_vendor.so
 */

#ifndef BEGONIA_RE_LIBBLISRC32_VENDOR_H
#define BEGONIA_RE_LIBBLISRC32_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: SRCTable1 */
/* Demangled: SRCTable1 */
extern void* SRCTable1;

/* Symbol: fastBliSrc */
/* Demangled: fastBliSrc */
int fastBliSrc(void);

/* Symbol: Blisrc_SetSamplingRate */
/* Demangled: Blisrc_SetSamplingRate */
int Blisrc_SetSamplingRate(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: CopyBliSrc */
/* Demangled: CopyBliSrc */
int CopyBliSrc(void);

/* Symbol: CopyBliSrc_32bit */
/* Demangled: CopyBliSrc_32bit */
int CopyBliSrc_32bit(void);

/* Symbol: SRCTable2 */
/* Demangled: SRCTable2 */
extern void* SRCTable2;

/* Symbol: arbBliReset_32BIT */
/* Demangled: arbBliReset_32BIT */
int arbBliReset_32BIT(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: SRCTable3 */
/* Demangled: SRCTable3 */
extern void* SRCTable3;

/* Symbol: AdjustGain */
/* Demangled: AdjustGain */
extern void* AdjustGain;

/* Symbol: fastBliReset_32BIT */
/* Demangled: fastBliReset_32BIT */
int fastBliReset_32BIT(void);

/* Symbol: Blisrc_SetZeroPending */
/* Demangled: Blisrc_SetZeroPending */
int Blisrc_SetZeroPending(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: Blisrc_MultiChannel_Process */
/* Demangled: Blisrc_MultiChannel_Process */
int Blisrc_MultiChannel_Process(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: fastBliConvert */
/* Demangled: fastBliConvert */
int fastBliConvert(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: fastBliSrc_32BIT */
/* Demangled: fastBliSrc_32BIT */
int fastBliSrc_32BIT(void);

/* Symbol: Blisrc_Open */
/* Demangled: Blisrc_Open */
int Blisrc_Open(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: arbBliSrc_32bit */
/* Demangled: arbBliSrc_32bit */
int arbBliSrc_32bit(void);

/* Symbol: Blisrc_GetVersion */
/* Demangled: Blisrc_GetVersion */
int Blisrc_GetVersion(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: fastBliInit_32BIT */
/* Demangled: fastBliInit_32BIT */
int fastBliInit_32BIT(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: arbBliSrc */
/* Demangled: arbBliSrc */
int arbBliSrc(void);

/* Symbol: Blisrc_MultiChannel_GetBufferSize */
/* Demangled: Blisrc_MultiChannel_GetBufferSize */
int Blisrc_MultiChannel_GetBufferSize(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: arbBliInit_32BIT */
/* Demangled: arbBliInit_32BIT */
int arbBliInit_32BIT(void);

/* Symbol: Blisrc_GetBufferSize */
/* Demangled: Blisrc_GetBufferSize */
int Blisrc_GetBufferSize(void);

/* Symbol: Blisrc_MultiChannel_SetZeroPending */
/* Demangled: Blisrc_MultiChannel_SetZeroPending */
int Blisrc_MultiChannel_SetZeroPending(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: arbBliReInit_32BIT */
/* Demangled: arbBliReInit_32BIT */
int arbBliReInit_32BIT(void);

/* Symbol: interpBliSrc_32bit */
/* Demangled: interpBliSrc_32bit */
int interpBliSrc_32bit(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: Blisrc_MultiChannel_Open */
/* Demangled: Blisrc_MultiChannel_Open */
int Blisrc_MultiChannel_Open(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: Blisrc_MultiChannel_SetSamplingRate */
/* Demangled: Blisrc_MultiChannel_SetSamplingRate */
int Blisrc_MultiChannel_SetSamplingRate(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: Blisrc_Reset */
/* Demangled: Blisrc_Reset */
int Blisrc_Reset(void);

/* Symbol: Blisrc_MultiChannel_Reset */
/* Demangled: Blisrc_MultiChannel_Reset */
int Blisrc_MultiChannel_Reset(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: fastBliConvert_32bit */
/* Demangled: fastBliConvert_32bit */
int fastBliConvert_32bit(void);

/* Symbol: Blisrc_Process */
/* Demangled: Blisrc_Process */
int Blisrc_Process(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: fastBliReInit_32BIT */
/* Demangled: fastBliReInit_32BIT */
int fastBliReInit_32BIT(void);

/* Symbol: CheckTableRelation */
/* Demangled: CheckTableRelation */
int CheckTableRelation(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: interpBliSrc */
/* Demangled: interpBliSrc */
int interpBliSrc(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBBLISRC32_VENDOR_H */
