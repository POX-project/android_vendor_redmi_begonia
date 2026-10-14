/*
 * Reverse-Engineered Source for: libthermalalgo.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libthermalalgo"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libthermalalgo.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: thermalalgo_daemon_ctrl */
extern "C" __attribute__((visibility("default"))) void* thermalalgo_daemon_ctrl = NULL;

/* Demangled: get_avg_sys_tput() */
extern "C" __attribute__((visibility("default"))) int _Z16get_avg_sys_tputv(void) {
    ALOGD("_Z16get_avg_sys_tputv() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: ta_catmplus_decide_ttj() */
extern "C" __attribute__((visibility("default"))) int _Z22ta_catmplus_decide_ttjv(void) {
    ALOGD("_Z22ta_catmplus_decide_ttjv() called");
    return 0;
}

/* Demangled: ta_print_inf0() */
extern "C" __attribute__((visibility("default"))) int _Z13ta_print_inf0v(void) {
    ALOGD("_Z13ta_print_inf0v() called");
    return 0;
}

/* Demangled: cl_wifi_init(spa_cooler*) */
extern "C" __attribute__((visibility("default"))) int _Z12cl_wifi_initP10spa_cooler(void) {
    ALOGD("_Z12cl_wifi_initP10spa_cooler() called");
    return 0;
}

/* Demangled: get_exit_target_tj() */
extern "C" __attribute__((visibility("default"))) int _Z18get_exit_target_tjv(void) {
    ALOGD("_Z18get_exit_target_tjv() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: ta_exit_socket(TAD_t*) */
extern "C" __attribute__((visibility("default"))) int _Z14ta_exit_socketP5TAD_t(void) {
    ALOGD("_Z14ta_exit_socketP5TAD_t() called");
    return 0;
}

/* Demangled: ta_send_nl_message(void*) */
extern "C" __attribute__((visibility("default"))) int _Z18ta_send_nl_messagePv(void) {
    ALOGD("_Z18ta_send_nl_messagePv() called");
    return 0;
}

/* Demangled: update_avg_opp_power() */
extern "C" __attribute__((visibility("default"))) int _Z20update_avg_opp_powerv(void) {
    ALOGD("_Z20update_avg_opp_powerv() called");
    return 0;
}

/* Demangled: get_steady_target_tj() */
extern "C" __attribute__((visibility("default"))) int _Z20get_steady_target_tjv(void) {
    ALOGD("_Z20get_steady_target_tjv() called");
    return 0;
}

/* Demangled: libthermal_algo_setup */
extern "C" __attribute__((visibility("default"))) int libthermal_algo_setup(void) {
    ALOGD("libthermal_algo_setup() called");
    return 0;
}

/* Demangled: tad_ctrl_cmd_to_kernel(TA_DAEMON_CTRL_CMD_TO_KERNEL, void*) */
extern "C" __attribute__((visibility("default"))) int _Z22tad_ctrl_cmd_to_kernel28TA_DAEMON_CTRL_CMD_TO_KERNELPv(void) {
    ALOGD("_Z22tad_ctrl_cmd_to_kernel28TA_DAEMON_CTRL_CMD_TO_KERNELPv() called");
    return 0;
}

/* Demangled: get_catminit_data_from_kernel(CATM_T*) */
extern "C" __attribute__((visibility("default"))) int _Z29get_catminit_data_from_kernelP6CATM_T(void) {
    ALOGD("_Z29get_catminit_data_from_kernelP6CATM_T() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: cl_ap_init(spa_cooler*) */
extern "C" __attribute__((visibility("default"))) int _Z10cl_ap_initP10spa_cooler(void) {
    ALOGD("_Z10cl_ap_initP10spa_cooler() called");
    return 0;
}

/* Demangled: get_thermal_info_from_kernel(SPA_T*) */
extern "C" __attribute__((visibility("default"))) int _Z28get_thermal_info_from_kernelP5SPA_T(void) {
    ALOGD("_Z28get_thermal_info_from_kernelP5SPA_T() called");
    return 0;
}

/* Exported Object: thermal_spa_t */
extern "C" __attribute__((visibility("default"))) void* thermal_spa_t = NULL;

/* Exported Object: thermal_atm_t */
extern "C" __attribute__((visibility("default"))) void* thermal_atm_t = NULL;

/* Demangled: get_fg_uid() */
extern "C" __attribute__((visibility("default"))) int _Z10get_fg_uidv(void) {
    ALOGD("_Z10get_fg_uidv() called");
    return 0;
}

/* Exported Object: ta_netlink_fd */
extern "C" __attribute__((visibility("default"))) void* ta_netlink_fd = NULL;

/* Demangled: spa_sys_info_check() */
extern "C" __attribute__((visibility("default"))) int _Z18spa_sys_info_checkv(void) {
    ALOGD("_Z18spa_sys_info_checkv() called");
    return 0;
}

/* Demangled: update_avg_fg_tput() */
extern "C" __attribute__((visibility("default"))) int _Z18update_avg_fg_tputv(void) {
    ALOGD("_Z18update_avg_fg_tputv() called");
    return 0;
}

/* Demangled: get_camera_on_num() */
extern "C" __attribute__((visibility("default"))) int _Z17get_camera_on_numv(void) {
    ALOGD("_Z17get_camera_on_numv() called");
    return 0;
}

/* Demangled: ta_start_nl_thread(TAD_t*) */
extern "C" __attribute__((visibility("default"))) int _Z18ta_start_nl_threadP5TAD_t(void) {
    ALOGD("_Z18ta_start_nl_threadP5TAD_t() called");
    return 0;
}

/* Demangled: get_tpcb_from_kernel(int*) */
extern "C" __attribute__((visibility("default"))) int _Z20get_tpcb_from_kernelPi(void) {
    ALOGD("_Z20get_tpcb_from_kernelPi() called");
    return 0;
}

/* Demangled: spa() */
extern "C" __attribute__((visibility("default"))) int _Z3spav(void) {
    ALOGD("_Z3spav() called");
    return 0;
}

/* Demangled: spa_print_info_spa() */
extern "C" __attribute__((visibility("default"))) int _Z18spa_print_info_spav(void) {
    ALOGD("_Z18spa_print_info_spav() called");
    return 0;
}

/* Demangled: get_sys_tput() */
extern "C" __attribute__((visibility("default"))) int _Z12get_sys_tputv(void) {
    ALOGD("_Z12get_sys_tputv() called");
    return 0;
}

/* Demangled: ta_daemon_init() */
extern "C" __attribute__((visibility("default"))) int _Z14ta_daemon_initv(void) {
    ALOGD("_Z14ta_daemon_initv() called");
    return 0;
}

/* Demangled: ta_init_socket(TAD_t*) */
extern "C" __attribute__((visibility("default"))) int _Z14ta_init_socketP5TAD_t(void) {
    ALOGD("_Z14ta_init_socketP5TAD_t() called");
    return 0;
}

/* Demangled: ta_wait_kernel_notify() */
extern "C" __attribute__((visibility("default"))) int _Z21ta_wait_kernel_notifyv(void) {
    ALOGD("_Z21ta_wait_kernel_notifyv() called");
    return 0;
}

/* Demangled: strshift(char*, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8strshiftPcS_j(void) {
    ALOGD("_Z8strshiftPcS_j() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: cl_fc_init(spa_cooler*) */
extern "C" __attribute__((visibility("default"))) int _Z10cl_fc_initP10spa_cooler(void) {
    ALOGD("_Z10cl_fc_initP10spa_cooler() called");
    return 0;
}

/* Demangled: read_from_proc_line(char*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z19read_from_proc_linePcS_i(void) {
    ALOGD("_Z19read_from_proc_linePcS_i() called");
    return 0;
}

/* Demangled: get_min_opp_power() */
extern "C" __attribute__((visibility("default"))) int _Z17get_min_opp_powerv(void) {
    ALOGD("_Z17get_min_opp_powerv() called");
    return 0;
}

/* Demangled: ta_receiving_nl_thread(void*, tad_nl_msg_t*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z22ta_receiving_nl_threadPvP12tad_nl_msg_tj(void) {
    ALOGD("_Z22ta_receiving_nl_threadPvP12tad_nl_msg_tj() called");
    return 0;
}

/* Demangled: spa_tok_nextint(char**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15spa_tok_nextintPPcPi(void) {
    ALOGD("_Z15spa_tok_nextintPPcPi() called");
    return 0;
}

/* Demangled: spa_init_0() */
extern "C" __attribute__((visibility("default"))) int _Z10spa_init_0v(void) {
    ALOGD("_Z10spa_init_0v() called");
    return 0;
}

/* Demangled: spa_processMsg(int) */
extern "C" __attribute__((visibility("default"))) int _Z14spa_processMsgi(void) {
    ALOGD("_Z14spa_processMsgi() called");
    return 0;
}

/* Exported Object: ta_poll_fd_cnt */
extern "C" __attribute__((visibility("default"))) void* ta_poll_fd_cnt = NULL;

/* Demangled: get_avg_opp_power() */
extern "C" __attribute__((visibility("default"))) int _Z17get_avg_opp_powerv(void) {
    ALOGD("_Z17get_avg_opp_powerv() called");
    return 0;
}

/* Demangled: spa_tok_nextbool(char**, char*) */
extern "C" __attribute__((visibility("default"))) int _Z16spa_tok_nextboolPPcS_(void) {
    ALOGD("_Z16spa_tok_nextboolPPcS_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: ta_spa_fd */
extern "C" __attribute__((visibility("default"))) void* ta_spa_fd = NULL;

/* Demangled: set_ttj_to_kernel(int) */
extern "C" __attribute__((visibility("default"))) int _Z17set_ttj_to_kerneli(void) {
    ALOGD("_Z17set_ttj_to_kerneli() called");
    return 0;
}

/* Demangled: is_spa_on() */
extern "C" __attribute__((visibility("default"))) int _Z9is_spa_onv(void) {
    ALOGD("_Z9is_spa_onv() called");
    return 0;
}

/* Demangled: update_avg_sys_tput() */
extern "C" __attribute__((visibility("default"))) int _Z19update_avg_sys_tputv(void) {
    ALOGD("_Z19update_avg_sys_tputv() called");
    return 0;
}

/* Demangled: spa_tok_nexthexint(char**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18spa_tok_nexthexintPPcPi(void) {
    ALOGD("_Z18spa_tok_nexthexintPPcPi() called");
    return 0;
}

/* Demangled: ta_catm_init_flow() */
extern "C" __attribute__((visibility("default"))) int _Z17ta_catm_init_flowv(void) {
    ALOGD("_Z17ta_catm_init_flowv() called");
    return 0;
}

/* Exported Object: spa_coolers */
extern "C" __attribute__((visibility("default"))) void* spa_coolers = NULL;

/* Demangled: write_to_proc_line(char*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z18write_to_proc_linePcS_(void) {
    ALOGD("_Z18write_to_proc_linePcS_() called");
    return 0;
}

/* Demangled: read_from_proc_buf(char*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18read_from_proc_bufPcS_i(void) {
    ALOGD("_Z18read_from_proc_bufPcS_i() called");
    return 0;
}

/* Exported Object: g_thermal_mutex */
extern "C" __attribute__((visibility("default"))) void* g_thermal_mutex = NULL;

/* Exported Object: gvariable */
extern "C" __attribute__((visibility("default"))) void* gvariable = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: g_MAX_TARGET_TJ */
extern "C" __attribute__((visibility("default"))) void* g_MAX_TARGET_TJ = NULL;

/* Exported Object: scenarios */
extern "C" __attribute__((visibility("default"))) void* scenarios = NULL;

/* Demangled: get_tj_from_tz() */
extern "C" __attribute__((visibility("default"))) int _Z14get_tj_from_tzv(void) {
    ALOGD("_Z14get_tj_from_tzv() called");
    return 0;
}

/* Demangled: get_tpcb_from_tz() */
extern "C" __attribute__((visibility("default"))) int _Z16get_tpcb_from_tzv(void) {
    ALOGD("_Z16get_tpcb_from_tzv() called");
    return 0;
}

/* Demangled: get_catm_init_val() */
extern "C" __attribute__((visibility("default"))) int _Z17get_catm_init_valv(void) {
    ALOGD("_Z17get_catm_init_valv() called");
    return 0;
}

/* Demangled: spa_init() */
extern "C" __attribute__((visibility("default"))) int _Z8spa_initv(void) {
    ALOGD("_Z8spa_initv() called");
    return 0;
}

/* Demangled: get_avg_fg_tput() */
extern "C" __attribute__((visibility("default"))) int _Z15get_avg_fg_tputv(void) {
    ALOGD("_Z15get_avg_fg_tputv() called");
    return 0;
}

/* Demangled: get_uid_tput(int) */
extern "C" __attribute__((visibility("default"))) int _Z12get_uid_tputi(void) {
    ALOGD("_Z12get_uid_tputi() called");
    return 0;
}

/* Demangled: spa_tok_nextstr(char**, char**) */
extern "C" __attribute__((visibility("default"))) int _Z15spa_tok_nextstrPPcS0_(void) {
    ALOGD("_Z15spa_tok_nextstrPPcS0_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: spa_socket_server() */
extern "C" __attribute__((visibility("default"))) int _Z17spa_socket_serverv(void) {
    ALOGD("_Z17spa_socket_serverv() called");
    return 0;
}

/* Exported Object: ta_poll_fds */
extern "C" __attribute__((visibility("default"))) void* ta_poll_fds = NULL;

/* Exported Object: thermal_spa_t_1 */
extern "C" __attribute__((visibility("default"))) void* thermal_spa_t_1 = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
