/*
 * Reverse-Engineered ABI Specification for: libvolte_xdmc_shr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvolte_xdmc_shr.so
 */

#ifndef BEGONIA_RE_LIBVOLTE_XDMC_SHR_H
#define BEGONIA_RE_LIBVOLTE_XDMC_SHR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ez_malloc2 */
/* Demangled: ez_malloc2 */
int ez_malloc2(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: ez_free2 */
/* Demangled: ez_free2 */
int ez_free2(void);

/* Symbol: ez_dump */
/* Demangled: ez_dump */
int ez_dump(void);

/* Symbol: ezxml_child */
/* Demangled: ezxml_child */
int ezxml_child(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: ezxml_idx */
/* Demangled: ezxml_idx */
int ezxml_idx(void);

/* Symbol: ezxml_attr */
/* Demangled: ezxml_attr */
int ezxml_attr(void);

/* Symbol: ezxml_vget */
/* Demangled: ezxml_vget */
int ezxml_vget(void);

/* Symbol: ezxml_get */
/* Demangled: ezxml_get */
int ezxml_get(void);

/* Symbol: ezxml_pi */
/* Demangled: ezxml_pi */
int ezxml_pi(void);

/* Symbol: EZXML_NIL */
/* Demangled: EZXML_NIL */
extern void* EZXML_NIL;

/* Symbol: ezxml_err */
/* Demangled: ezxml_err */
int ezxml_err(void);

/* Symbol: ezxml_decode */
/* Demangled: ezxml_decode */
int ezxml_decode(void);

/* Symbol: ezxml_open_tag */
/* Demangled: ezxml_open_tag */
int ezxml_open_tag(void);

/* Symbol: ezxml_insert */
/* Demangled: ezxml_insert */
int ezxml_insert(void);

/* Symbol: ezxml_add_child */
/* Demangled: ezxml_add_child */
int ezxml_add_child(void);

/* Symbol: ezxml_char_content */
/* Demangled: ezxml_char_content */
int ezxml_char_content(void);

/* Symbol: ezxml_set_flag */
/* Demangled: ezxml_set_flag */
int ezxml_set_flag(void);

/* Symbol: ezxml_close_tag */
/* Demangled: ezxml_close_tag */
int ezxml_close_tag(void);

/* Symbol: ezxml_ent_ok */
/* Demangled: ezxml_ent_ok */
int ezxml_ent_ok(void);

/* Symbol: ezxml_proc_inst */
/* Demangled: ezxml_proc_inst */
int ezxml_proc_inst(void);

/* Symbol: ezxml_internal_dtd */
/* Demangled: ezxml_internal_dtd */
int ezxml_internal_dtd(void);

/* Symbol: ezxml_str2utf8 */
/* Demangled: ezxml_str2utf8 */
int ezxml_str2utf8(void);

/* Symbol: ezxml_free_attr */
/* Demangled: ezxml_free_attr */
int ezxml_free_attr(void);

/* Symbol: ezxml_parse_str */
/* Demangled: ezxml_parse_str */
int ezxml_parse_str(void);

/* Symbol: ezxml_new */
/* Demangled: ezxml_new */
int ezxml_new(void);

/* Symbol: ezxml_parse_fp */
/* Demangled: ezxml_parse_fp */
int ezxml_parse_fp(void);

/* Symbol: ezxml_parse_fd */
/* Demangled: ezxml_parse_fd */
int ezxml_parse_fd(void);

/* Symbol: ezxml_parse_file */
/* Demangled: ezxml_parse_file */
int ezxml_parse_file(void);

/* Symbol: ezxml_ampencode */
/* Demangled: ezxml_ampencode */
int ezxml_ampencode(void);

/* Symbol: ezxml_toxml_r */
/* Demangled: ezxml_toxml_r */
int ezxml_toxml_r(void);

/* Symbol: ezxml_toxml */
/* Demangled: ezxml_toxml */
int ezxml_toxml(void);

/* Symbol: ezxml_toxml_free */
/* Demangled: ezxml_toxml_free */
int ezxml_toxml_free(void);

/* Symbol: ezxml_free */
/* Demangled: ezxml_free */
int ezxml_free(void);

/* Symbol: ezxml_error */
/* Demangled: ezxml_error */
int ezxml_error(void);

/* Symbol: ezxml_add_sibling */
/* Demangled: ezxml_add_sibling */
int ezxml_add_sibling(void);

/* Symbol: ezxml_set_txt */
/* Demangled: ezxml_set_txt */
int ezxml_set_txt(void);

/* Symbol: ezxml_set_attr */
/* Demangled: ezxml_set_attr */
int ezxml_set_attr(void);

/* Symbol: ezxml_cut */
/* Demangled: ezxml_cut */
int ezxml_cut(void);

/* Symbol: xdmc_obj_free */
/* Demangled: xdmc_obj_free */
int xdmc_obj_free(void);

/* Symbol: xdmc_url2obj */
/* Demangled: xdmc_url2obj */
int xdmc_url2obj(void);

/* Symbol: xdmc_xml2obj */
/* Demangled: xdmc_xml2obj */
int xdmc_xml2obj(void);

/* Symbol: xdmc_obj_root */
/* Demangled: xdmc_obj_root */
int xdmc_obj_root(void);

/* Symbol: xdmc_obj_next */
/* Demangled: xdmc_obj_next */
int xdmc_obj_next(void);

/* Symbol: xdmc_obj_child */
/* Demangled: xdmc_obj_child */
int xdmc_obj_child(void);

/* Symbol: xdmc_obj_child_all */
/* Demangled: xdmc_obj_child_all */
int xdmc_obj_child_all(void);

/* Symbol: xdmc_obj_attr */
/* Demangled: xdmc_obj_attr */
int xdmc_obj_attr(void);

/* Symbol: xdmc_obj_text */
/* Demangled: xdmc_obj_text */
int xdmc_obj_text(void);

/* Symbol: xdmc_obj_set_attribute */
/* Demangled: xdmc_obj_set_attribute */
int xdmc_obj_set_attribute(void);

/* Symbol: xdmc_obj_set_txt */
/* Demangled: xdmc_obj_set_txt */
int xdmc_obj_set_txt(void);

/* Symbol: xdmc_obj2xml */
/* Demangled: xdmc_obj2xml */
int xdmc_obj2xml(void);

/* Symbol: xdmc_obj_add_child */
/* Demangled: xdmc_obj_add_child */
int xdmc_obj_add_child(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: __gnu_Unwind_Restore_VFP_D */
/* Demangled: __gnu_Unwind_Restore_VFP_D */
int __gnu_Unwind_Restore_VFP_D(void);

/* Symbol: __gnu_Unwind_Restore_VFP */
/* Demangled: __gnu_Unwind_Restore_VFP */
int __gnu_Unwind_Restore_VFP(void);

/* Symbol: __gnu_Unwind_Restore_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Restore_VFP_D_16_to_31 */
int __gnu_Unwind_Restore_VFP_D_16_to_31(void);

/* Symbol: __gnu_Unwind_Restore_WMMXD */
/* Demangled: __gnu_Unwind_Restore_WMMXD */
int __gnu_Unwind_Restore_WMMXD(void);

/* Symbol: __gnu_Unwind_Restore_WMMXC */
/* Demangled: __gnu_Unwind_Restore_WMMXC */
int __gnu_Unwind_Restore_WMMXC(void);

/* Symbol: restore_core_regs */
/* Demangled: restore_core_regs */
int restore_core_regs(void);

/* Symbol: _Unwind_GetCFA */
/* Demangled: _Unwind_GetCFA */
int _Unwind_GetCFA(void);

/* Symbol: __gnu_Unwind_RaiseException */
/* Demangled: __gnu_Unwind_RaiseException */
int __gnu_Unwind_RaiseException(void);

/* Symbol: __gnu_Unwind_ForcedUnwind */
/* Demangled: __gnu_Unwind_ForcedUnwind */
int __gnu_Unwind_ForcedUnwind(void);

/* Symbol: __gnu_Unwind_Resume */
/* Demangled: __gnu_Unwind_Resume */
int __gnu_Unwind_Resume(void);

/* Symbol: __gnu_Unwind_Resume_or_Rethrow */
/* Demangled: __gnu_Unwind_Resume_or_Rethrow */
int __gnu_Unwind_Resume_or_Rethrow(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: __gnu_Unwind_Backtrace */
/* Demangled: __gnu_Unwind_Backtrace */
int __gnu_Unwind_Backtrace(void);

/* Symbol: __gnu_unwind_execute */
/* Demangled: __gnu_unwind_execute */
int __gnu_unwind_execute(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __gnu_Unwind_Save_VFP_D */
/* Demangled: __gnu_Unwind_Save_VFP_D */
int __gnu_Unwind_Save_VFP_D(void);

/* Symbol: __gnu_Unwind_Save_VFP */
/* Demangled: __gnu_Unwind_Save_VFP */
int __gnu_Unwind_Save_VFP(void);

/* Symbol: __gnu_Unwind_Save_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Save_VFP_D_16_to_31 */
int __gnu_Unwind_Save_VFP_D_16_to_31(void);

/* Symbol: __gnu_Unwind_Save_WMMXD */
/* Demangled: __gnu_Unwind_Save_WMMXD */
int __gnu_Unwind_Save_WMMXD(void);

/* Symbol: __gnu_Unwind_Save_WMMXC */
/* Demangled: __gnu_Unwind_Save_WMMXC */
int __gnu_Unwind_Save_WMMXC(void);

/* Symbol: __restore_core_regs */
/* Demangled: __restore_core_regs */
int __restore_core_regs(void);

/* Symbol: ___Unwind_RaiseException */
/* Demangled: ___Unwind_RaiseException */
int ___Unwind_RaiseException(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: ___Unwind_Resume */
/* Demangled: ___Unwind_Resume */
int ___Unwind_Resume(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: ___Unwind_Resume_or_Rethrow */
/* Demangled: ___Unwind_Resume_or_Rethrow */
int ___Unwind_Resume_or_Rethrow(void);

/* Symbol: _Unwind_Resume_or_Rethrow */
/* Demangled: _Unwind_Resume_or_Rethrow */
int _Unwind_Resume_or_Rethrow(void);

/* Symbol: ___Unwind_ForcedUnwind */
/* Demangled: ___Unwind_ForcedUnwind */
int ___Unwind_ForcedUnwind(void);

/* Symbol: _Unwind_ForcedUnwind */
/* Demangled: _Unwind_ForcedUnwind */
int _Unwind_ForcedUnwind(void);

/* Symbol: ___Unwind_Backtrace */
/* Demangled: ___Unwind_Backtrace */
int ___Unwind_Backtrace(void);

/* Symbol: _Unwind_Backtrace */
/* Demangled: _Unwind_Backtrace */
int _Unwind_Backtrace(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _Unwind_GetDataRelBase */
/* Demangled: _Unwind_GetDataRelBase */
int _Unwind_GetDataRelBase(void);

/* Symbol: _Unwind_GetTextRelBase */
/* Demangled: _Unwind_GetTextRelBase */
int _Unwind_GetTextRelBase(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBVOLTE_XDMC_SHR_H */
