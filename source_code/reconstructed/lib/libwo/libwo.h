/*
 * Reverse-Engineered ABI Specification for: libwo.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwo.so
 */

#ifndef BEGONIA_RE_LIBWO_H
#define BEGONIA_RE_LIBWO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: c_vector_init */
/* Demangled: c_vector_init */
int c_vector_init(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int fn___aeabi_unwind_cpp_pr1(void) __asm__("__aeabi_unwind_cpp_pr1");

/* Symbol: c_vector_destroy */
/* Demangled: c_vector_destroy */
int c_vector_destroy(void);

/* Symbol: c_vector_capacity */
/* Demangled: c_vector_capacity */
int c_vector_capacity(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int fn___aeabi_unwind_cpp_pr0(void) __asm__("__aeabi_unwind_cpp_pr0");

/* Symbol: c_vector_length */
/* Demangled: c_vector_length */
int c_vector_length(void);

/* Symbol: c_vector_clear */
/* Demangled: c_vector_clear */
int c_vector_clear(void);

/* Symbol: c_vector_at */
/* Demangled: c_vector_at */
int c_vector_at(void);

/* Symbol: c_vector_resize */
/* Demangled: c_vector_resize */
int c_vector_resize(void);

/* Symbol: c_vector_push_back */
/* Demangled: c_vector_push_back */
int c_vector_push_back(void);

/* Symbol: c_vector_pop_back */
/* Demangled: c_vector_pop_back */
int c_vector_pop_back(void);

/* Symbol: c_vector_insert */
/* Demangled: c_vector_insert */
int c_vector_insert(void);

/* Symbol: c_vector_erase */
/* Demangled: c_vector_erase */
int c_vector_erase(void);

/* Symbol: c_vector_iterator_init */
/* Demangled: c_vector_iterator_init */
int c_vector_iterator_init(void);

/* Symbol: c_vector_iterator_destroy */
/* Demangled: c_vector_iterator_destroy */
int c_vector_iterator_destroy(void);

/* Symbol: c_vector_iterator_next */
/* Demangled: c_vector_iterator_next */
int c_vector_iterator_next(void);

/* Symbol: list_create */
/* Demangled: list_create */
int list_create(void);

/* Symbol: list_insert_first */
/* Demangled: list_insert_first */
int list_insert_first(void);

/* Symbol: list_insert_last */
/* Demangled: list_insert_last */
int list_insert_last(void);

/* Symbol: list_insert_before */
/* Demangled: list_insert_before */
int list_insert_before(void);

/* Symbol: list_insert_after */
/* Demangled: list_insert_after */
int list_insert_after(void);

/* Symbol: list_remove_first */
/* Demangled: list_remove_first */
int list_remove_first(void);

/* Symbol: list_remove_last */
/* Demangled: list_remove_last */
int list_remove_last(void);

/* Symbol: list_remove */
/* Demangled: list_remove */
int list_remove(void);

/* Symbol: list_remove_at */
/* Demangled: list_remove_at */
int list_remove_at(void);

/* Symbol: list_find_first */
/* Demangled: list_find_first */
int list_find_first(void);

/* Symbol: list_destroy */
/* Demangled: list_destroy */
int list_destroy(void);

/* Symbol: list_clear */
/* Demangled: list_clear */
int list_clear(void);

/* Symbol: list_clear_remove_all */
/* Demangled: list_clear_remove_all */
int list_clear_remove_all(void);

/* Symbol: list_clear_destroy */
/* Demangled: list_clear_destroy */
int list_clear_destroy(void);

/* Symbol: list_iterator_create */
/* Demangled: list_iterator_create */
int list_iterator_create(void);

/* Symbol: list_iterator_destroy */
/* Demangled: list_iterator_destroy */
int list_iterator_destroy(void);

/* Symbol: list_iterator_iterate */
/* Demangled: list_iterator_iterate */
int list_iterator_iterate(void);

/* Symbol: list_iterator_reset */
/* Demangled: list_iterator_reset */
int list_iterator_reset(void);

/* Symbol: list_fd_insert_last */
/* Demangled: list_fd_insert_last */
int list_fd_insert_last(void);

/* Symbol: list_fd_remove_first */
/* Demangled: list_fd_remove_first */
int list_fd_remove_first(void);

/* Symbol: list_fd_remove */
/* Demangled: list_fd_remove */
int list_fd_remove(void);

/* Symbol: list_fd_find_first */
/* Demangled: list_fd_find_first */
int list_fd_find_first(void);

/* Symbol: list_fd_iterator_iterate */
/* Demangled: list_fd_iterator_iterate */
int list_fd_iterator_iterate(void);

/* Symbol: wo_ccci_open */
/* Demangled: wo_ccci_open */
int wo_ccci_open(void);

/* Symbol: wo_print_lv */
/* Demangled: wo_print_lv */
extern void* wo_print_lv;

/* Symbol: wo_ccci_read */
/* Demangled: wo_ccci_read */
int wo_ccci_read(void);

/* Symbol: wo_ccci_write */
/* Demangled: wo_ccci_write */
int wo_ccci_write(void);

/* Symbol: is_ap_load_type */
/* Demangled: is_ap_load_type */
int is_ap_load_type(void);

/* Symbol: thrd_current */
/* Demangled: thrd_current */
int thrd_current(void);

/* Symbol: mtx_lock */
/* Demangled: mtx_lock */
int mtx_lock(void);

/* Symbol: mtx_unlock */
/* Demangled: mtx_unlock */
int mtx_unlock(void);

/* Symbol: wo_log_disable */
/* Demangled: wo_log_disable */
int wo_log_disable(void);

/* Symbol: wo_log_enable */
/* Demangled: wo_log_enable */
int wo_log_enable(void);

/* Symbol: wo_log_switch_lv */
/* Demangled: wo_log_switch_lv */
int wo_log_switch_lv(void);

/* Symbol: wo_log_init */
/* Demangled: wo_log_init */
int wo_log_init(void);

/* Symbol: mtx_init */
/* Demangled: mtx_init */
int mtx_init(void);

/* Symbol: wo_log_register_id */
/* Demangled: wo_log_register_id */
int wo_log_register_id(void);

/* Symbol: wo_log_unregister_id */
/* Demangled: wo_log_unregister_id */
int wo_log_unregister_id(void);

/* Symbol: g_log_level */
/* Demangled: g_log_level */
extern void* g_log_level;

/* Symbol: wo_msg_create */
/* Demangled: wo_msg_create */
int wo_msg_create(void);

/* Symbol: wo_msg_free */
/* Demangled: wo_msg_free */
int wo_msg_free(void);

/* Symbol: wo_msg_parse */
/* Demangled: wo_msg_parse */
int wo_msg_parse(void);

/* Symbol: wo_str_get_next_uint32 */
/* Demangled: wo_str_get_next_uint32 */
int wo_str_get_next_uint32(void);

/* Symbol: wo_str_get_next_strptr */
/* Demangled: wo_str_get_next_strptr */
int wo_str_get_next_strptr(void);

/* Symbol: wo_str_get_next_int32 */
/* Demangled: wo_str_get_next_int32 */
int wo_str_get_next_int32(void);

/* Symbol: wo_str_get_next_uint16 */
/* Demangled: wo_str_get_next_uint16 */
int wo_str_get_next_uint16(void);

/* Symbol: wo_str_get_next_bool */
/* Demangled: wo_str_get_next_bool */
int wo_str_get_next_bool(void);

/* Symbol: wo_msg_build */
/* Demangled: wo_msg_build */
int wo_msg_build(void);

/* Symbol: wo_msg_sensitive_print */
/* Demangled: wo_msg_sensitive_print */
int wo_msg_sensitive_print(void);

/* Symbol: wo_msg_int_nextepdg_create */
/* Demangled: wo_msg_int_nextepdg_create */
int wo_msg_int_nextepdg_create(void);

/* Symbol: wo_msg_int_attachto_create */
/* Demangled: wo_msg_int_attachto_create */
int wo_msg_int_attachto_create(void);

/* Symbol: wo_msg_int_detachto_create */
/* Demangled: wo_msg_int_detachto_create */
int wo_msg_int_detachto_create(void);

/* Symbol: wo_msg_int_unlock_create */
/* Demangled: wo_msg_int_unlock_create */
int wo_msg_int_unlock_create(void);

/* Symbol: wo_msg_int_pdn_detach_create */
/* Demangled: wo_msg_int_pdn_detach_create */
int wo_msg_int_pdn_detach_create(void);

/* Symbol: wo_msg_int_wifi_natt_create */
/* Demangled: wo_msg_int_wifi_natt_create */
int wo_msg_int_wifi_natt_create(void);

/* Symbol: wo_msg_int_retry_timer_set_create */
/* Demangled: wo_msg_int_retry_timer_set_create */
int wo_msg_int_retry_timer_set_create(void);

/* Symbol: wo_msg_int_blacklist_to_create */
/* Demangled: wo_msg_int_blacklist_to_create */
int wo_msg_int_blacklist_to_create(void);

/* Symbol: wo_msg_int_wifi_ip_ready_create */
/* Demangled: wo_msg_int_wifi_ip_ready_create */
int wo_msg_int_wifi_ip_ready_create(void);

/* Symbol: wo_sock_server_create */
/* Demangled: wo_sock_server_create */
int wo_sock_server_create(void);

/* Symbol: wo_sock_client_connect */
/* Demangled: wo_sock_client_connect */
int wo_sock_client_connect(void);

/* Symbol: wo_sock_send */
/* Demangled: wo_sock_send */
int wo_sock_send(void);

/* Symbol: wo_sock_recv */
/* Demangled: wo_sock_recv */
int wo_sock_recv(void);

/* Symbol: wo_sock_recv_buf_clear */
/* Demangled: wo_sock_recv_buf_clear */
int wo_sock_recv_buf_clear(void);

/* Symbol: mtx_destroy */
/* Demangled: mtx_destroy */
int mtx_destroy(void);

/* Symbol: mtx_timedlock */
/* Demangled: mtx_timedlock */
int mtx_timedlock(void);

/* Symbol: mtx_trylock */
/* Demangled: mtx_trylock */
int mtx_trylock(void);

/* Symbol: cnd_init */
/* Demangled: cnd_init */
int cnd_init(void);

/* Symbol: cnd_destroy */
/* Demangled: cnd_destroy */
int cnd_destroy(void);

/* Symbol: cnd_signal */
/* Demangled: cnd_signal */
int cnd_signal(void);

/* Symbol: cnd_broadcast */
/* Demangled: cnd_broadcast */
int cnd_broadcast(void);

/* Symbol: cnd_wait */
/* Demangled: cnd_wait */
int cnd_wait(void);

/* Symbol: cnd_timedwait */
/* Demangled: cnd_timedwait */
int cnd_timedwait(void);

/* Symbol: thrd_create */
/* Demangled: thrd_create */
int thrd_create(void);

/* Symbol: thrd_detach */
/* Demangled: thrd_detach */
int thrd_detach(void);

/* Symbol: thrd_equal */
/* Demangled: thrd_equal */
int thrd_equal(void);

/* Symbol: thrd_exit */
/* Demangled: thrd_exit */
int thrd_exit(void);

/* Symbol: thrd_join */
/* Demangled: thrd_join */
int thrd_join(void);

/* Symbol: thrd_sleep */
/* Demangled: thrd_sleep */
int thrd_sleep(void);

/* Symbol: thrd_yield */
/* Demangled: thrd_yield */
int thrd_yield(void);

/* Symbol: tss_create */
/* Demangled: tss_create */
int tss_create(void);

/* Symbol: tss_delete */
/* Demangled: tss_delete */
int tss_delete(void);

/* Symbol: tss_get */
/* Demangled: tss_get */
int tss_get(void);

/* Symbol: tss_set */
/* Demangled: tss_set */
int tss_set(void);

/* Symbol: wo_timer_create */
/* Demangled: wo_timer_create */
int wo_timer_create(void);

/* Symbol: wo_timer_start */
/* Demangled: wo_timer_start */
int wo_timer_start(void);

/* Symbol: wo_timer_stop */
/* Demangled: wo_timer_stop */
int wo_timer_stop(void);

/* Symbol: wo_timer_gettime */
/* Demangled: wo_timer_gettime */
int wo_timer_gettime(void);

/* Symbol: wo_timer_destroy */
/* Demangled: wo_timer_destroy */
int wo_timer_destroy(void);

/* Symbol: wo_timer_get_realtime_clock */
/* Demangled: wo_timer_get_realtime_clock */
int wo_timer_get_realtime_clock(void);

/* Symbol: strcicmp */
/* Demangled: strcicmp */
int strcicmp(void);

/* Symbol: lskip */
/* Demangled: lskip */
int lskip(void);

/* Symbol: rstrip */
/* Demangled: rstrip */
int rstrip(void);

/* Symbol: rasprintf */
/* Demangled: rasprintf */
int rasprintf(void);

/* Symbol: wo_fork_exec_fmt */
/* Demangled: wo_fork_exec_fmt */
int wo_fork_exec_fmt(void);

/* Symbol: wo_fork_exec */
/* Demangled: wo_fork_exec */
int wo_fork_exec(void);

/* Symbol: wo_fork_exec_fmt_non_blk */
/* Demangled: wo_fork_exec_fmt_non_blk */
int wo_fork_exec_fmt_non_blk(void);

/* Symbol: wo_fork_execvp_ext */
/* Demangled: wo_fork_execvp_ext */
int wo_fork_execvp_ext(void);

/* Symbol: atomic_add */
/* Demangled: atomic_add */
int atomic_add(void);

/* Symbol: is_ip_str */
/* Demangled: is_ip_str */
int is_ip_str(void);

/* Symbol: ip_str_to_bin */
/* Demangled: ip_str_to_bin */
int ip_str_to_bin(void);

/* Symbol: wo_time_get_current_time */
/* Demangled: wo_time_get_current_time */
int wo_time_get_current_time(void);

/* Symbol: wo_property_get */
/* Demangled: wo_property_get */
int wo_property_get(void);

/* Symbol: wo_property_get_bool */
/* Demangled: wo_property_get_bool */
int wo_property_get_bool(void);

/* Symbol: wo_property_get_int32 */
/* Demangled: wo_property_get_int32 */
int wo_property_get_int32(void);

/* Symbol: wo_property_set */
/* Demangled: wo_property_set */
int wo_property_set(void);

/* Symbol: inttobin */
/* Demangled: inttobin */
int inttobin(void);

/* Symbol: wo_pow */
/* Demangled: wo_pow */
int wo_pow(void);

/* Symbol: is_md_load_type */
/* Demangled: is_md_load_type */
int is_md_load_type(void);

/* Symbol: wo_is_ipv6_prefix_eq_str */
/* Demangled: wo_is_ipv6_prefix_eq_str */
int wo_is_ipv6_prefix_eq_str(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int fn___aeabi_unwind_cpp_pr2(void) __asm__("__aeabi_unwind_cpp_pr2");

/* Symbol: __gnu_Unwind_Restore_VFP_D */
/* Demangled: __gnu_Unwind_Restore_VFP_D */
int fn___gnu_Unwind_Restore_VFP_D(void) __asm__("__gnu_Unwind_Restore_VFP_D");

/* Symbol: __gnu_Unwind_Restore_VFP */
/* Demangled: __gnu_Unwind_Restore_VFP */
int fn___gnu_Unwind_Restore_VFP(void) __asm__("__gnu_Unwind_Restore_VFP");

/* Symbol: __gnu_Unwind_Restore_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Restore_VFP_D_16_to_31 */
int fn___gnu_Unwind_Restore_VFP_D_16_to_31(void) __asm__("__gnu_Unwind_Restore_VFP_D_16_to_31");

/* Symbol: __gnu_Unwind_Restore_WMMXD */
/* Demangled: __gnu_Unwind_Restore_WMMXD */
int fn___gnu_Unwind_Restore_WMMXD(void) __asm__("__gnu_Unwind_Restore_WMMXD");

/* Symbol: __gnu_Unwind_Restore_WMMXC */
/* Demangled: __gnu_Unwind_Restore_WMMXC */
int fn___gnu_Unwind_Restore_WMMXC(void) __asm__("__gnu_Unwind_Restore_WMMXC");

/* Symbol: restore_core_regs */
/* Demangled: restore_core_regs */
int restore_core_regs(void);

/* Symbol: _Unwind_GetCFA */
/* Demangled: _Unwind_GetCFA */
int _Unwind_GetCFA(void);

/* Symbol: __gnu_Unwind_RaiseException */
/* Demangled: __gnu_Unwind_RaiseException */
int fn___gnu_Unwind_RaiseException(void) __asm__("__gnu_Unwind_RaiseException");

/* Symbol: __gnu_Unwind_ForcedUnwind */
/* Demangled: __gnu_Unwind_ForcedUnwind */
int fn___gnu_Unwind_ForcedUnwind(void) __asm__("__gnu_Unwind_ForcedUnwind");

/* Symbol: __gnu_Unwind_Resume */
/* Demangled: __gnu_Unwind_Resume */
int fn___gnu_Unwind_Resume(void) __asm__("__gnu_Unwind_Resume");

/* Symbol: __gnu_Unwind_Resume_or_Rethrow */
/* Demangled: __gnu_Unwind_Resume_or_Rethrow */
int fn___gnu_Unwind_Resume_or_Rethrow(void) __asm__("__gnu_Unwind_Resume_or_Rethrow");

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
int fn___gnu_Unwind_Backtrace(void) __asm__("__gnu_Unwind_Backtrace");

/* Symbol: __gnu_unwind_execute */
/* Demangled: __gnu_unwind_execute */
int fn___gnu_unwind_execute(void) __asm__("__gnu_unwind_execute");

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __gnu_Unwind_Save_VFP_D */
/* Demangled: __gnu_Unwind_Save_VFP_D */
int fn___gnu_Unwind_Save_VFP_D(void) __asm__("__gnu_Unwind_Save_VFP_D");

/* Symbol: __gnu_Unwind_Save_VFP */
/* Demangled: __gnu_Unwind_Save_VFP */
int fn___gnu_Unwind_Save_VFP(void) __asm__("__gnu_Unwind_Save_VFP");

/* Symbol: __gnu_Unwind_Save_VFP_D_16_to_31 */
/* Demangled: __gnu_Unwind_Save_VFP_D_16_to_31 */
int fn___gnu_Unwind_Save_VFP_D_16_to_31(void) __asm__("__gnu_Unwind_Save_VFP_D_16_to_31");

/* Symbol: __gnu_Unwind_Save_WMMXD */
/* Demangled: __gnu_Unwind_Save_WMMXD */
int fn___gnu_Unwind_Save_WMMXD(void) __asm__("__gnu_Unwind_Save_WMMXD");

/* Symbol: __gnu_Unwind_Save_WMMXC */
/* Demangled: __gnu_Unwind_Save_WMMXC */
int fn___gnu_Unwind_Save_WMMXC(void) __asm__("__gnu_Unwind_Save_WMMXC");

/* Symbol: __restore_core_regs */
/* Demangled: __restore_core_regs */
int fn___restore_core_regs(void) __asm__("__restore_core_regs");

/* Symbol: ___Unwind_RaiseException */
/* Demangled: ___Unwind_RaiseException */
int fn____Unwind_RaiseException(void) __asm__("___Unwind_RaiseException");

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: ___Unwind_Resume */
/* Demangled: ___Unwind_Resume */
int fn____Unwind_Resume(void) __asm__("___Unwind_Resume");

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: ___Unwind_Resume_or_Rethrow */
/* Demangled: ___Unwind_Resume_or_Rethrow */
int fn____Unwind_Resume_or_Rethrow(void) __asm__("___Unwind_Resume_or_Rethrow");

/* Symbol: _Unwind_Resume_or_Rethrow */
/* Demangled: _Unwind_Resume_or_Rethrow */
int _Unwind_Resume_or_Rethrow(void);

/* Symbol: ___Unwind_ForcedUnwind */
/* Demangled: ___Unwind_ForcedUnwind */
int fn____Unwind_ForcedUnwind(void) __asm__("___Unwind_ForcedUnwind");

/* Symbol: _Unwind_ForcedUnwind */
/* Demangled: _Unwind_ForcedUnwind */
int _Unwind_ForcedUnwind(void);

/* Symbol: ___Unwind_Backtrace */
/* Demangled: ___Unwind_Backtrace */
int fn____Unwind_Backtrace(void) __asm__("___Unwind_Backtrace");

/* Symbol: _Unwind_Backtrace */
/* Demangled: _Unwind_Backtrace */
int _Unwind_Backtrace(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int fn___gnu_unwind_frame(void) __asm__("__gnu_unwind_frame");

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
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBWO_H */
