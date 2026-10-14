/*
 * Reverse-Engineered ABI Specification for: libthermalalgo.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libthermalalgo.so
 */

#ifndef BEGONIA_RE_LIBTHERMALALGO_H
#define BEGONIA_RE_LIBTHERMALALGO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: thermalalgo_daemon_ctrl */
/* Demangled: thermalalgo_daemon_ctrl */
extern void* thermalalgo_daemon_ctrl;

/* Symbol: _Z16get_avg_sys_tputv */
/* Demangled: get_avg_sys_tput() */
int _Z16get_avg_sys_tputv(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _Z22ta_catmplus_decide_ttjv */
/* Demangled: ta_catmplus_decide_ttj() */
int _Z22ta_catmplus_decide_ttjv(void);

/* Symbol: _Z13ta_print_inf0v */
/* Demangled: ta_print_inf0() */
int _Z13ta_print_inf0v(void);

/* Symbol: _Z12cl_wifi_initP10spa_cooler */
/* Demangled: cl_wifi_init(spa_cooler*) */
int _Z12cl_wifi_initP10spa_cooler(void);

/* Symbol: _Z18get_exit_target_tjv */
/* Demangled: get_exit_target_tj() */
int _Z18get_exit_target_tjv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z14ta_exit_socketP5TAD_t */
/* Demangled: ta_exit_socket(TAD_t*) */
int _Z14ta_exit_socketP5TAD_t(void);

/* Symbol: _Z18ta_send_nl_messagePv */
/* Demangled: ta_send_nl_message(void*) */
int _Z18ta_send_nl_messagePv(void);

/* Symbol: _Z20update_avg_opp_powerv */
/* Demangled: update_avg_opp_power() */
int _Z20update_avg_opp_powerv(void);

/* Symbol: _Z20get_steady_target_tjv */
/* Demangled: get_steady_target_tj() */
int _Z20get_steady_target_tjv(void);

/* Symbol: libthermal_algo_setup */
/* Demangled: libthermal_algo_setup */
int libthermal_algo_setup(void);

/* Symbol: _Z22tad_ctrl_cmd_to_kernel28TA_DAEMON_CTRL_CMD_TO_KERNELPv */
/* Demangled: tad_ctrl_cmd_to_kernel(TA_DAEMON_CTRL_CMD_TO_KERNEL, void*) */
int _Z22tad_ctrl_cmd_to_kernel28TA_DAEMON_CTRL_CMD_TO_KERNELPv(void);

/* Symbol: _Z29get_catminit_data_from_kernelP6CATM_T */
/* Demangled: get_catminit_data_from_kernel(CATM_T*) */
int _Z29get_catminit_data_from_kernelP6CATM_T(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _Z10cl_ap_initP10spa_cooler */
/* Demangled: cl_ap_init(spa_cooler*) */
int _Z10cl_ap_initP10spa_cooler(void);

/* Symbol: _Z28get_thermal_info_from_kernelP5SPA_T */
/* Demangled: get_thermal_info_from_kernel(SPA_T*) */
int _Z28get_thermal_info_from_kernelP5SPA_T(void);

/* Symbol: thermal_spa_t */
/* Demangled: thermal_spa_t */
extern void* thermal_spa_t;

/* Symbol: thermal_atm_t */
/* Demangled: thermal_atm_t */
extern void* thermal_atm_t;

/* Symbol: _Z10get_fg_uidv */
/* Demangled: get_fg_uid() */
int _Z10get_fg_uidv(void);

/* Symbol: ta_netlink_fd */
/* Demangled: ta_netlink_fd */
extern void* ta_netlink_fd;

/* Symbol: _Z18spa_sys_info_checkv */
/* Demangled: spa_sys_info_check() */
int _Z18spa_sys_info_checkv(void);

/* Symbol: _Z18update_avg_fg_tputv */
/* Demangled: update_avg_fg_tput() */
int _Z18update_avg_fg_tputv(void);

/* Symbol: _Z17get_camera_on_numv */
/* Demangled: get_camera_on_num() */
int _Z17get_camera_on_numv(void);

/* Symbol: _Z18ta_start_nl_threadP5TAD_t */
/* Demangled: ta_start_nl_thread(TAD_t*) */
int _Z18ta_start_nl_threadP5TAD_t(void);

/* Symbol: _Z20get_tpcb_from_kernelPi */
/* Demangled: get_tpcb_from_kernel(int*) */
int _Z20get_tpcb_from_kernelPi(void);

/* Symbol: _Z3spav */
/* Demangled: spa() */
int _Z3spav(void);

/* Symbol: _Z18spa_print_info_spav */
/* Demangled: spa_print_info_spa() */
int _Z18spa_print_info_spav(void);

/* Symbol: _Z12get_sys_tputv */
/* Demangled: get_sys_tput() */
int _Z12get_sys_tputv(void);

/* Symbol: _Z14ta_daemon_initv */
/* Demangled: ta_daemon_init() */
int _Z14ta_daemon_initv(void);

/* Symbol: _Z14ta_init_socketP5TAD_t */
/* Demangled: ta_init_socket(TAD_t*) */
int _Z14ta_init_socketP5TAD_t(void);

/* Symbol: _Z21ta_wait_kernel_notifyv */
/* Demangled: ta_wait_kernel_notify() */
int _Z21ta_wait_kernel_notifyv(void);

/* Symbol: _Z8strshiftPcS_j */
/* Demangled: strshift(char*, char*, unsigned int) */
int _Z8strshiftPcS_j(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _Z10cl_fc_initP10spa_cooler */
/* Demangled: cl_fc_init(spa_cooler*) */
int _Z10cl_fc_initP10spa_cooler(void);

/* Symbol: _Z19read_from_proc_linePcS_i */
/* Demangled: read_from_proc_line(char*, char*, int) */
int _Z19read_from_proc_linePcS_i(void);

/* Symbol: _Z17get_min_opp_powerv */
/* Demangled: get_min_opp_power() */
int _Z17get_min_opp_powerv(void);

/* Symbol: _Z22ta_receiving_nl_threadPvP12tad_nl_msg_tj */
/* Demangled: ta_receiving_nl_thread(void*, tad_nl_msg_t*, unsigned int) */
int _Z22ta_receiving_nl_threadPvP12tad_nl_msg_tj(void);

/* Symbol: _Z15spa_tok_nextintPPcPi */
/* Demangled: spa_tok_nextint(char**, int*) */
int _Z15spa_tok_nextintPPcPi(void);

/* Symbol: _Z10spa_init_0v */
/* Demangled: spa_init_0() */
int _Z10spa_init_0v(void);

/* Symbol: _Z14spa_processMsgi */
/* Demangled: spa_processMsg(int) */
int _Z14spa_processMsgi(void);

/* Symbol: ta_poll_fd_cnt */
/* Demangled: ta_poll_fd_cnt */
extern void* ta_poll_fd_cnt;

/* Symbol: _Z17get_avg_opp_powerv */
/* Demangled: get_avg_opp_power() */
int _Z17get_avg_opp_powerv(void);

/* Symbol: _Z16spa_tok_nextboolPPcS_ */
/* Demangled: spa_tok_nextbool(char**, char*) */
int _Z16spa_tok_nextboolPPcS_(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: ta_spa_fd */
/* Demangled: ta_spa_fd */
extern void* ta_spa_fd;

/* Symbol: _Z17set_ttj_to_kerneli */
/* Demangled: set_ttj_to_kernel(int) */
int _Z17set_ttj_to_kerneli(void);

/* Symbol: _Z9is_spa_onv */
/* Demangled: is_spa_on() */
int _Z9is_spa_onv(void);

/* Symbol: _Z19update_avg_sys_tputv */
/* Demangled: update_avg_sys_tput() */
int _Z19update_avg_sys_tputv(void);

/* Symbol: _Z18spa_tok_nexthexintPPcPi */
/* Demangled: spa_tok_nexthexint(char**, int*) */
int _Z18spa_tok_nexthexintPPcPi(void);

/* Symbol: _Z17ta_catm_init_flowv */
/* Demangled: ta_catm_init_flow() */
int _Z17ta_catm_init_flowv(void);

/* Symbol: spa_coolers */
/* Demangled: spa_coolers */
extern void* spa_coolers;

/* Symbol: _Z18write_to_proc_linePcS_ */
/* Demangled: write_to_proc_line(char*, char*) */
int _Z18write_to_proc_linePcS_(void);

/* Symbol: _Z18read_from_proc_bufPcS_i */
/* Demangled: read_from_proc_buf(char*, char*, int) */
int _Z18read_from_proc_bufPcS_i(void);

/* Symbol: g_thermal_mutex */
/* Demangled: g_thermal_mutex */
extern void* g_thermal_mutex;

/* Symbol: gvariable */
/* Demangled: gvariable */
extern void* gvariable;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: g_MAX_TARGET_TJ */
/* Demangled: g_MAX_TARGET_TJ */
extern void* g_MAX_TARGET_TJ;

/* Symbol: scenarios */
/* Demangled: scenarios */
extern void* scenarios;

/* Symbol: _Z14get_tj_from_tzv */
/* Demangled: get_tj_from_tz() */
int _Z14get_tj_from_tzv(void);

/* Symbol: _Z16get_tpcb_from_tzv */
/* Demangled: get_tpcb_from_tz() */
int _Z16get_tpcb_from_tzv(void);

/* Symbol: _Z17get_catm_init_valv */
/* Demangled: get_catm_init_val() */
int _Z17get_catm_init_valv(void);

/* Symbol: _Z8spa_initv */
/* Demangled: spa_init() */
int _Z8spa_initv(void);

/* Symbol: _Z15get_avg_fg_tputv */
/* Demangled: get_avg_fg_tput() */
int _Z15get_avg_fg_tputv(void);

/* Symbol: _Z12get_uid_tputi */
/* Demangled: get_uid_tput(int) */
int _Z12get_uid_tputi(void);

/* Symbol: _Z15spa_tok_nextstrPPcS0_ */
/* Demangled: spa_tok_nextstr(char**, char**) */
int _Z15spa_tok_nextstrPPcS0_(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _Z17spa_socket_serverv */
/* Demangled: spa_socket_server() */
int _Z17spa_socket_serverv(void);

/* Symbol: ta_poll_fds */
/* Demangled: ta_poll_fds */
extern void* ta_poll_fds;

/* Symbol: thermal_spa_t_1 */
/* Demangled: thermal_spa_t_1 */
extern void* thermal_spa_t_1;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBTHERMALALGO_H */
