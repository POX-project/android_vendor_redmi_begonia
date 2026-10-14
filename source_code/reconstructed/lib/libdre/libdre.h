/*
 * Reverse-Engineered ABI Specification for: libdre.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdre.so
 */

#ifndef BEGONIA_RE_LIBDRE_H
#define BEGONIA_RE_LIBDRE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9DRE30Impl11getDRE30KeyEv */
/* Demangled: DRE30Impl::getDRE30Key() */
int _ZN9DRE30Impl11getDRE30KeyEv(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: createDRE30 */
/* Demangled: createDRE30 */
int createDRE30(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _ZTV9DRE30Impl */
/* Demangled: vtable for DRE30Impl */
extern void* _ZTV9DRE30Impl;

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _ZN9DRE30ImplC1Ev */
/* Demangled: DRE30Impl::DRE30Impl() */
int _ZN9DRE30ImplC1Ev(void);

/* Symbol: _ZN9DRE30ImplC2Ev */
/* Demangled: DRE30Impl::DRE30Impl() */
int _ZN9DRE30ImplC2Ev(void);

/* Symbol: _ZN9DRE30ImplD0Ev */
/* Demangled: DRE30Impl::~DRE30Impl() */
int _ZN9DRE30ImplD0Ev(void);

/* Symbol: _ZN9DRE30ImplD1Ev */
/* Demangled: DRE30Impl::~DRE30Impl() */
int _ZN9DRE30ImplD1Ev(void);

/* Symbol: _ZN9DRE30ImplD2Ev */
/* Demangled: DRE30Impl::~DRE30Impl() */
int _ZN9DRE30ImplD2Ev(void);

/* Symbol: destroyDRE30 */
/* Demangled: destroyDRE30 */
int destroyDRE30(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDRE_H */
