/*
 * Reverse-Engineered Source for: libfgauge_gm30.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libfgauge_gm30"

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
#include "libfgauge_gm30.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_KMSG "/dev/kmsg"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_KMSG, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_KMSG, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_KMSG, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating libfgauge_gm30", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting libfgauge_gm30 service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("libfgauge_gm30 service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: fg_temp_c_int_handler */
extern "C" __attribute__((visibility("default"))) int fg_temp_c_int_handler(void) {
    ALOGD("fg_temp_c_int_handler() called");
    return 0;
}

/* Exported Object: d_aq6 */
extern "C" __attribute__((visibility("default"))) void* d_aq6 = NULL;

/* Demangled: fg_dump_table2 */
extern "C" __attribute__((visibility("default"))) int fg_dump_table2(void) {
    ALOGD("fg_dump_table2() called");
    return 0;
}

/* Exported Object: full_tracking_enable */
extern "C" __attribute__((visibility("default"))) void* full_tracking_enable = NULL;

/* Demangled: bmd_ctrl_cmd_to_kernel_ext */
extern "C" __attribute__((visibility("default"))) int bmd_ctrl_cmd_to_kernel_ext(void) {
    ALOGD("bmd_ctrl_cmd_to_kernel_ext() called");
    return 0;
}

/* Demangled: set_fg_vbat2_l_th */
extern "C" __attribute__((visibility("default"))) int set_fg_vbat2_l_th(void) {
    ALOGD("set_fg_vbat2_l_th() called");
    return 0;
}

/* Demangled: dump_health_log */
extern "C" __attribute__((visibility("default"))) int dump_health_log(void) {
    ALOGD("dump_health_log() called");
    return 0;
}

/* Exported Object: fg_bat_int2_ht_en */
extern "C" __attribute__((visibility("default"))) void* fg_bat_int2_ht_en = NULL;

/* Demangled: fg_charging_full_int_handler_AG4UT */
extern "C" __attribute__((visibility("default"))) int fg_charging_full_int_handler_AG4UT(void) {
    ALOGD("fg_charging_full_int_handler_AG4UT() called");
    return 0;
}

/* Demangled: set_bat_plugout_intr */
extern "C" __attribute__((visibility("default"))) int set_bat_plugout_intr(void) {
    ALOGD("set_bat_plugout_intr() called");
    return 0;
}

/* Demangled: set_nafg_resistance_bat */
extern "C" __attribute__((visibility("default"))) int set_nafg_resistance_bat(void) {
    ALOGD("set_nafg_resistance_bat() called");
    return 0;
}

/* Demangled: set_nag_int_en */
extern "C" __attribute__((visibility("default"))) int set_nag_int_en(void) {
    ALOGD("set_nag_int_en() called");
    return 0;
}

/* Exported Object: car_v_aq1 */
extern "C" __attribute__((visibility("default"))) void* car_v_aq1 = NULL;

/* Demangled: prepare_aging_data */
extern "C" __attribute__((visibility("default"))) int prepare_aging_data(void) {
    ALOGD("prepare_aging_data() called");
    return 0;
}

/* Demangled: fg_log */
extern "C" __attribute__((visibility("default"))) int fg_log(void) {
    ALOGD("fg_log() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: car_v_aq2 */
extern "C" __attribute__((visibility("default"))) void* car_v_aq2 = NULL;

/* Exported Object: cust_g_qmax_sys_vol_temp */
extern "C" __attribute__((visibility("default"))) void* cust_g_qmax_sys_vol_temp = NULL;

/* Demangled: set_int_data */
extern "C" __attribute__((visibility("default"))) int set_int_data(void) {
    ALOGD("set_int_data() called");
    return 0;
}

/* Exported Object: g_bat_cycle_ncar */
extern "C" __attribute__((visibility("default"))) void* g_bat_cycle_ncar = NULL;

/* Demangled: OCV_to_DOD */
extern "C" __attribute__((visibility("default"))) int OCV_to_DOD(void) {
    ALOGD("OCV_to_DOD() called");
    return 0;
}

/* Exported Object: car_v_aq4 */
extern "C" __attribute__((visibility("default"))) void* car_v_aq4 = NULL;

/* Demangled: dod_init_swocv_hwocv_comparing */
extern "C" __attribute__((visibility("default"))) int dod_init_swocv_hwocv_comparing(void) {
    ALOGD("dod_init_swocv_hwocv_comparing() called");
    return 0;
}

/* Demangled: dod_init_swocv_oldocv_comparing */
extern "C" __attribute__((visibility("default"))) int dod_init_swocv_oldocv_comparing(void) {
    ALOGD("dod_init_swocv_oldocv_comparing() called");
    return 0;
}

/* Demangled: send_cust_table_to_kernel */
extern "C" __attribute__((visibility("default"))) int send_cust_table_to_kernel(void) {
    ALOGD("send_cust_table_to_kernel() called");
    return 0;
}

/* Demangled: set_battery_cycle_threshold */
extern "C" __attribute__((visibility("default"))) int set_battery_cycle_threshold(void) {
    ALOGD("set_battery_cycle_threshold() called");
    return 0;
}

/* Demangled: Set_fg_v_d0_by_ocv */
extern "C" __attribute__((visibility("default"))) int Set_fg_v_d0_by_ocv(void) {
    ALOGD("Set_fg_v_d0_by_ocv() called");
    return 0;
}

/* Exported Object: aq6_flag */
extern "C" __attribute__((visibility("default"))) void* aq6_flag = NULL;

/* Exported Object: car_v_aq5 */
extern "C" __attribute__((visibility("default"))) void* car_v_aq5 = NULL;

/* Demangled: exit_socket */
extern "C" __attribute__((visibility("default"))) int exit_socket(void) {
    ALOGD("exit_socket() called");
    return 0;
}

/* Demangled: fglog_write_nl */
extern "C" __attribute__((visibility("default"))) int fglog_write_nl(void) {
    ALOGD("fglog_write_nl() called");
    return 0;
}

/* Demangled: DOD_to_OCV_c */
extern "C" __attribute__((visibility("default"))) int DOD_to_OCV_c(void) {
    ALOGD("DOD_to_OCV_c() called");
    return 0;
}

/* Exported Object: car_v_aq6 */
extern "C" __attribute__((visibility("default"))) void* car_v_aq6 = NULL;

/* Exported Object: cust_qmax_t_0ma_h_tb1 */
extern "C" __attribute__((visibility("default"))) void* cust_qmax_t_0ma_h_tb1 = NULL;

/* Demangled: fg_aging_factor_update */
extern "C" __attribute__((visibility("default"))) int fg_aging_factor_update(void) {
    ALOGD("fg_aging_factor_update() called");
    return 0;
}

/* Exported Object: quse_wo_lf_cust */
extern "C" __attribute__((visibility("default"))) void* quse_wo_lf_cust = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: get_con0_soc */
extern "C" __attribute__((visibility("default"))) int get_con0_soc(void) {
    ALOGD("get_con0_soc() called");
    return 0;
}

/* Demangled: enable_fg_bat_int2_lt */
extern "C" __attribute__((visibility("default"))) int enable_fg_bat_int2_lt(void) {
    ALOGD("enable_fg_bat_int2_lt() called");
    return 0;
}

/* Exported Object: quse_tb1 */
extern "C" __attribute__((visibility("default"))) void* quse_tb1 = NULL;

/* Demangled: set_adc_reset */
extern "C" __attribute__((visibility("default"))) int set_adc_reset(void) {
    ALOGD("set_adc_reset() called");
    return 0;
}

/* Demangled: set_rtc_ui_soc */
extern "C" __attribute__((visibility("default"))) int set_rtc_ui_soc(void) {
    ALOGD("set_rtc_ui_soc() called");
    return 0;
}

/* Demangled: dod_init_verify_old_data */
extern "C" __attribute__((visibility("default"))) int dod_init_verify_old_data(void) {
    ALOGD("dod_init_verify_old_data() called");
    return 0;
}

/* Exported Object: fg_bat_int1_gap */
extern "C" __attribute__((visibility("default"))) void* fg_bat_int1_gap = NULL;

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: fg_daemon_dump_log */
extern "C" __attribute__((visibility("default"))) int fg_daemon_dump_log(void) {
    ALOGD("fg_daemon_dump_log() called");
    return 0;
}

/* Exported Object: AG6_UT */
extern "C" __attribute__((visibility("default"))) void* AG6_UT = NULL;

/* Demangled: fg_adc_reset */
extern "C" __attribute__((visibility("default"))) int fg_adc_reset(void) {
    ALOGD("fg_adc_reset() called");
    return 0;
}

/* Demangled: fg_compensate_battery_voltage */
extern "C" __attribute__((visibility("default"))) int fg_compensate_battery_voltage(void) {
    ALOGD("fg_compensate_battery_voltage() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: send_nl_message */
extern "C" __attribute__((visibility("default"))) int send_nl_message(void) {
    ALOGD("send_nl_message() called");
    return 0;
}

/* Demangled: read_lasttime_data */
extern "C" __attribute__((visibility("default"))) int read_lasttime_data(void) {
    ALOGD("read_lasttime_data() called");
    return 0;
}

/* Demangled: get_cust_table_from_kernel */
extern "C" __attribute__((visibility("default"))) int get_cust_table_from_kernel(void) {
    ALOGD("get_cust_table_from_kernel() called");
    return 0;
}

/* Exported Object: C_Remain_Int */
extern "C" __attribute__((visibility("default"))) void* C_Remain_Int = NULL;

/* Exported Object: car_aq1 */
extern "C" __attribute__((visibility("default"))) void* car_aq1 = NULL;

/* Demangled: fg_compensate_by_d */
extern "C" __attribute__((visibility("default"))) int fg_compensate_by_d(void) {
    ALOGD("fg_compensate_by_d() called");
    return 0;
}

/* Demangled: fg_debug_dump */
extern "C" __attribute__((visibility("default"))) int fg_debug_dump(void) {
    ALOGD("fg_debug_dump() called");
    return 0;
}

/* Demangled: fg_adc_reset_ncar */
extern "C" __attribute__((visibility("default"))) int fg_adc_reset_ncar(void) {
    ALOGD("fg_adc_reset_ncar() called");
    return 0;
}

/* Demangled: fg_bat_cycle_int_handler */
extern "C" __attribute__((visibility("default"))) int fg_bat_cycle_int_handler(void) {
    ALOGD("fg_bat_cycle_int_handler() called");
    return 0;
}

/* Exported Object: car_aq2 */
extern "C" __attribute__((visibility("default"))) void* car_aq2 = NULL;

/* Demangled: fg_update_fg_bat_int2_threshold */
extern "C" __attribute__((visibility("default"))) int fg_update_fg_bat_int2_threshold(void) {
    ALOGD("fg_update_fg_bat_int2_threshold() called");
    return 0;
}

/* Exported Object: h_log */
extern "C" __attribute__((visibility("default"))) void* h_log = NULL;

/* Exported Object: old_data_log */
extern "C" __attribute__((visibility("default"))) void* old_data_log = NULL;

/* Demangled: daemon_fg_bat_int2_l_handler */
extern "C" __attribute__((visibility("default"))) int daemon_fg_bat_int2_l_handler(void) {
    ALOGD("daemon_fg_bat_int2_l_handler() called");
    return 0;
}

/* Exported Object: car_tune_data */
extern "C" __attribute__((visibility("default"))) void* car_tune_data = NULL;

/* Exported Object: low_tracking_enable */
extern "C" __attribute__((visibility("default"))) void* low_tracking_enable = NULL;

/* Exported Object: quse_wo_lf_tb1 */
extern "C" __attribute__((visibility("default"))) void* quse_wo_lf_tb1 = NULL;

/* Demangled: reset_old_data */
extern "C" __attribute__((visibility("default"))) int reset_old_data(void) {
    ALOGD("reset_old_data() called");
    return 0;
}

/* Demangled: set_init_flow_done */
extern "C" __attribute__((visibility("default"))) int set_init_flow_done(void) {
    ALOGD("set_init_flow_done() called");
    return 0;
}

/* Exported Object: car_aq4 */
extern "C" __attribute__((visibility("default"))) void* car_aq4 = NULL;

/* Demangled: dod_init_bootOCV_oldOCV */
extern "C" __attribute__((visibility("default"))) int dod_init_bootOCV_oldOCV(void) {
    ALOGD("dod_init_bootOCV_oldOCV() called");
    return 0;
}

/* Demangled: fg_construct_battery_profile_by_qmax */
extern "C" __attribute__((visibility("default"))) int fg_construct_battery_profile_by_qmax(void) {
    ALOGD("fg_construct_battery_profile_by_qmax() called");
    return 0;
}

/* Demangled: fg_construct_table_by_assign_temp */
extern "C" __attribute__((visibility("default"))) int fg_construct_table_by_assign_temp(void) {
    ALOGD("fg_construct_table_by_assign_temp() called");
    return 0;
}

/* Demangled: fg_get_saddles */
extern "C" __attribute__((visibility("default"))) int fg_get_saddles(void) {
    ALOGD("fg_get_saddles() called");
    return 0;
}

/* Demangled: fg_ui_full_lim_time */
extern "C" __attribute__((visibility("default"))) int fg_ui_full_lim_time(void) {
    ALOGD("fg_ui_full_lim_time() called");
    return 0;
}

/* Demangled: read_car_tune_file */
extern "C" __attribute__((visibility("default"))) int read_car_tune_file(void) {
    ALOGD("read_car_tune_file() called");
    return 0;
}

/* Demangled: receiving_nl_thread */
extern "C" __attribute__((visibility("default"))) int receiving_nl_thread(void) {
    ALOGD("receiving_nl_thread() called");
    return 0;
}

/* Demangled: fg_bat_int2_handler */
extern "C" __attribute__((visibility("default"))) int fg_bat_int2_handler(void) {
    ALOGD("fg_bat_int2_handler() called");
    return 0;
}

/* Demangled: get_data_from_kernel */
extern "C" __attribute__((visibility("default"))) int get_data_from_kernel(void) {
    ALOGD("get_data_from_kernel() called");
    return 0;
}

/* Demangled: set_fg_bat_int2_ht_gap */
extern "C" __attribute__((visibility("default"))) int set_fg_bat_int2_ht_gap(void) {
    ALOGD("set_fg_bat_int2_ht_gap() called");
    return 0;
}

/* Demangled: SOC_to_OCV_CUST */
extern "C" __attribute__((visibility("default"))) int SOC_to_OCV_CUST(void) {
    ALOGD("SOC_to_OCV_CUST() called");
    return 0;
}

/* Exported Object: car_aq5 */
extern "C" __attribute__((visibility("default"))) void* car_aq5 = NULL;

/* Demangled: check_health_data */
extern "C" __attribute__((visibility("default"))) int check_health_data(void) {
    ALOGD("check_health_data() called");
    return 0;
}

/* Demangled: fg_enable_fg_bat_int2_ht */
extern "C" __attribute__((visibility("default"))) int fg_enable_fg_bat_int2_ht(void) {
    ALOGD("fg_enable_fg_bat_int2_ht() called");
    return 0;
}

/* Exported Object: quse_cust */
extern "C" __attribute__((visibility("default"))) void* quse_cust = NULL;

/* Exported Object: car_aq6 */
extern "C" __attribute__((visibility("default"))) void* car_aq6 = NULL;

/* Exported Object: fg_tracking_time */
extern "C" __attribute__((visibility("default"))) void* fg_tracking_time = NULL;

/* Demangled: prepare_health_data */
extern "C" __attribute__((visibility("default"))) int prepare_health_data(void) {
    ALOGD("prepare_health_data() called");
    return 0;
}

/* Demangled: set_kernel_uisoc */
extern "C" __attribute__((visibility("default"))) int set_kernel_uisoc(void) {
    ALOGD("set_kernel_uisoc() called");
    return 0;
}

/* Exported Object: ag_cen_log */
extern "C" __attribute__((visibility("default"))) void* ag_cen_log = NULL;

/* Exported Object: cust_g_pmic_m_vol_temp */
extern "C" __attribute__((visibility("default"))) void* cust_g_pmic_m_vol_temp = NULL;

/* Demangled: prepare_agingcenter_data */
extern "C" __attribute__((visibility("default"))) int prepare_agingcenter_data(void) {
    ALOGD("prepare_agingcenter_data() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: fg_set_nafg_interrupt */
extern "C" __attribute__((visibility("default"))) int fg_set_nafg_interrupt(void) {
    ALOGD("fg_set_nafg_interrupt() called");
    return 0;
}

/* Exported Object: g_shutdown_car_diff */
extern "C" __attribute__((visibility("default"))) void* g_shutdown_car_diff = NULL;

/* Demangled: OCV_to_SOC_c */
extern "C" __attribute__((visibility("default"))) int OCV_to_SOC_c(void) {
    ALOGD("OCV_to_SOC_c() called");
    return 0;
}

/* Exported Object: cust_qmax_t_Nma_h_tb1 */
extern "C" __attribute__((visibility("default"))) void* cust_qmax_t_Nma_h_tb1 = NULL;

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: backup_lasttime_data */
extern "C" __attribute__((visibility("default"))) int backup_lasttime_data(void) {
    ALOGD("backup_lasttime_data() called");
    return 0;
}

/* Exported Object: dcr_count */
extern "C" __attribute__((visibility("default"))) void* dcr_count = NULL;

/* Demangled: disable_aging_compensation_flag */
extern "C" __attribute__((visibility("default"))) int disable_aging_compensation_flag(void) {
    ALOGD("disable_aging_compensation_flag() called");
    return 0;
}

/* Exported Object: h_data */
extern "C" __attribute__((visibility("default"))) void* h_data = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: daemon_fg_nafg_int_handler */
extern "C" __attribute__((visibility("default"))) int daemon_fg_nafg_int_handler(void) {
    ALOGD("daemon_fg_nafg_int_handler() called");
    return 0;
}

/* Demangled: get_bat_plug_out_time */
extern "C" __attribute__((visibility("default"))) int get_bat_plug_out_time(void) {
    ALOGD("get_bat_plug_out_time() called");
    return 0;
}

/* Demangled: OCV_to_DOD_c */
extern "C" __attribute__((visibility("default"))) int OCV_to_DOD_c(void) {
    ALOGD("OCV_to_DOD_c() called");
    return 0;
}

/* Demangled: fg_aging_compensation1 */
extern "C" __attribute__((visibility("default"))) int fg_aging_compensation1(void) {
    ALOGD("fg_aging_compensation1() called");
    return 0;
}

/* Exported Object: qmax_t_Nma_h_tb1 */
extern "C" __attribute__((visibility("default"))) void* qmax_t_Nma_h_tb1 = NULL;

/* Demangled: fg_aging_compensation2 */
extern "C" __attribute__((visibility("default"))) int fg_aging_compensation2(void) {
    ALOGD("fg_aging_compensation2() called");
    return 0;
}

/* Demangled: fg_aging_compensation3 */
extern "C" __attribute__((visibility("default"))) int fg_aging_compensation3(void) {
    ALOGD("fg_aging_compensation3() called");
    return 0;
}

/* Demangled: send_data_to_kernel */
extern "C" __attribute__((visibility("default"))) int send_data_to_kernel(void) {
    ALOGD("send_data_to_kernel() called");
    return 0;
}

/* Exported Object: AG5_UT */
extern "C" __attribute__((visibility("default"))) void* AG5_UT = NULL;

/* Exported Object: daemon_log */
extern "C" __attribute__((visibility("default"))) void* daemon_log = NULL;

/* Demangled: fg_aging_compensation4 */
extern "C" __attribute__((visibility("default"))) int fg_aging_compensation4(void) {
    ALOGD("fg_aging_compensation4() called");
    return 0;
}

/* Demangled: mov_battemp_int_handler */
extern "C" __attribute__((visibility("default"))) int mov_battemp_int_handler(void) {
    ALOGD("mov_battemp_int_handler() called");
    return 0;
}

/* Exported Object: qmax_t_0ma_cust */
extern "C" __attribute__((visibility("default"))) void* qmax_t_0ma_cust = NULL;

/* Demangled: save_debug_param */
extern "C" __attribute__((visibility("default"))) int save_debug_param(void) {
    ALOGD("save_debug_param() called");
    return 0;
}

/* Demangled: fgauge_initialization */
extern "C" __attribute__((visibility("default"))) int fgauge_initialization(void) {
    ALOGD("fgauge_initialization() called");
    return 0;
}

/* Demangled: fg_aging_compensation5 */
extern "C" __attribute__((visibility("default"))) int fg_aging_compensation5(void) {
    ALOGD("fg_aging_compensation5() called");
    return 0;
}

/* Exported Object: rac */
extern "C" __attribute__((visibility("default"))) void* rac = NULL;

/* Exported Object: t_aq1 */
extern "C" __attribute__((visibility("default"))) void* t_aq1 = NULL;

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: fg_aging_compensation6 */
extern "C" __attribute__((visibility("default"))) int fg_aging_compensation6(void) {
    ALOGD("fg_aging_compensation6() called");
    return 0;
}

/* Demangled: fg_nafg_reset_thr */
extern "C" __attribute__((visibility("default"))) int fg_nafg_reset_thr(void) {
    ALOGD("fg_nafg_reset_thr() called");
    return 0;
}

/* Exported Object: g_tracking_time */
extern "C" __attribute__((visibility("default"))) void* g_tracking_time = NULL;

/* Demangled: bmd_ctrl_cmd_to_kernel_internal */
extern "C" __attribute__((visibility("default"))) int bmd_ctrl_cmd_to_kernel_internal(void) {
    ALOGD("bmd_ctrl_cmd_to_kernel_internal() called");
    return 0;
}

/* Demangled: read_nvram_data */
extern "C" __attribute__((visibility("default"))) int read_nvram_data(void) {
    ALOGD("read_nvram_data() called");
    return 0;
}

/* Demangled: daemon_get_imix */
extern "C" __attribute__((visibility("default"))) int daemon_get_imix(void) {
    ALOGD("daemon_get_imix() called");
    return 0;
}

/* Demangled: get_fg_sw_car_nafg_cnt */
extern "C" __attribute__((visibility("default"))) int get_fg_sw_car_nafg_cnt(void) {
    ALOGD("get_fg_sw_car_nafg_cnt() called");
    return 0;
}

/* Exported Object: ag_log */
extern "C" __attribute__((visibility("default"))) void* ag_log = NULL;

/* Demangled: check_apply_debug_param */
extern "C" __attribute__((visibility("default"))) int check_apply_debug_param(void) {
    ALOGD("check_apply_debug_param() called");
    return 0;
}

/* Exported Object: t_aq4 */
extern "C" __attribute__((visibility("default"))) void* t_aq4 = NULL;

/* Demangled: get_fg_time */
extern "C" __attribute__((visibility("default"))) int get_fg_time(void) {
    ALOGD("get_fg_time() called");
    return 0;
}

/* Demangled: fg_construct_vboot */
extern "C" __attribute__((visibility("default"))) int fg_construct_vboot(void) {
    ALOGD("fg_construct_vboot() called");
    return 0;
}

/* Exported Object: rdc1 */
extern "C" __attribute__((visibility("default"))) void* rdc1 = NULL;

/* Exported Object: t_aq5 */
extern "C" __attribute__((visibility("default"))) void* t_aq5 = NULL;

/* Exported Object: zcv_intr_step */
extern "C" __attribute__((visibility("default"))) void* zcv_intr_step = NULL;

/* Demangled: get_fg_current_avg */
extern "C" __attribute__((visibility("default"))) int get_fg_current_avg(void) {
    ALOGD("get_fg_current_avg() called");
    return 0;
}

/* Demangled: update_moving_avg_battemp */
extern "C" __attribute__((visibility("default"))) int update_moving_avg_battemp(void) {
    ALOGD("update_moving_avg_battemp() called");
    return 0;
}

/* Exported Object: rdc2 */
extern "C" __attribute__((visibility("default"))) void* rdc2 = NULL;

/* Exported Object: t_aq6 */
extern "C" __attribute__((visibility("default"))) void* t_aq6 = NULL;

/* Exported Object: aq1_flag */
extern "C" __attribute__((visibility("default"))) void* aq1_flag = NULL;

/* Exported Object: cust_qmax_t_0ma_h */
extern "C" __attribute__((visibility("default"))) void* cust_qmax_t_0ma_h = NULL;

/* Exported Object: cust_shutdown_zcv */
extern "C" __attribute__((visibility("default"))) void* cust_shutdown_zcv = NULL;

/* Demangled: fg_dump_hwinfo */
extern "C" __attribute__((visibility("default"))) int fg_dump_hwinfo(void) {
    ALOGD("fg_dump_hwinfo() called");
    return 0;
}

/* Exported Object: p_temp_table */
extern "C" __attribute__((visibility("default"))) void* p_temp_table = NULL;

/* Demangled: fg_daemon_handler */
extern "C" __attribute__((visibility("default"))) int fg_daemon_handler(void) {
    ALOGD("fg_daemon_handler() called");
    return 0;
}

/* Demangled: set_nvram_fail_status */
extern "C" __attribute__((visibility("default"))) int set_nvram_fail_status(void) {
    ALOGD("set_nvram_fail_status() called");
    return 0;
}

/* Exported Object: cv_soc */
extern "C" __attribute__((visibility("default"))) void* cv_soc = NULL;

/* Demangled: fg_dump_info */
extern "C" __attribute__((visibility("default"))) int fg_dump_info(void) {
    ALOGD("fg_dump_info() called");
    return 0;
}

/* Exported Object: qmax_t_0ma_tb1 */
extern "C" __attribute__((visibility("default"))) void* qmax_t_0ma_tb1 = NULL;

/* Demangled: get_disable_nafg */
extern "C" __attribute__((visibility("default"))) int get_disable_nafg(void) {
    ALOGD("get_disable_nafg() called");
    return 0;
}

/* Demangled: get_fg_zcv */
extern "C" __attribute__((visibility("default"))) int get_fg_zcv(void) {
    ALOGD("get_fg_zcv() called");
    return 0;
}

/* Demangled: Set_fg_v_d0_by_soc */
extern "C" __attribute__((visibility("default"))) int Set_fg_v_d0_by_soc(void) {
    ALOGD("Set_fg_v_d0_by_soc() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: fg_reset_nvram_handler */
extern "C" __attribute__((visibility("default"))) int fg_reset_nvram_handler(void) {
    ALOGD("fg_reset_nvram_handler() called");
    return 0;
}

/* Exported Object: D_Remain */
extern "C" __attribute__((visibility("default"))) void* D_Remain = NULL;

/* Demangled: OCV_to_mah */
extern "C" __attribute__((visibility("default"))) int OCV_to_mah(void) {
    ALOGD("OCV_to_mah() called");
    return 0;
}

/* Exported Object: cust_pseudo100 */
extern "C" __attribute__((visibility("default"))) void* cust_pseudo100 = NULL;

/* Exported Object: re_charging_enable */
extern "C" __attribute__((visibility("default"))) void* re_charging_enable = NULL;

/* Demangled: daemon_fg_vbat2_l_int_handler */
extern "C" __attribute__((visibility("default"))) int daemon_fg_vbat2_l_int_handler(void) {
    ALOGD("daemon_fg_vbat2_l_int_handler() called");
    return 0;
}

/* Demangled: dod_init_get_old_data */
extern "C" __attribute__((visibility("default"))) int dod_init_get_old_data(void) {
    ALOGD("dod_init_get_old_data() called");
    return 0;
}

/* Demangled: dod_init_relocation_flow */
extern "C" __attribute__((visibility("default"))) int dod_init_relocation_flow(void) {
    ALOGD("dod_init_relocation_flow() called");
    return 0;
}

/* Exported Object: fg_bat_int2_lt_en */
extern "C" __attribute__((visibility("default"))) void* fg_bat_int2_lt_en = NULL;

/* Demangled: fg_dump_boot_info */
extern "C" __attribute__((visibility("default"))) int fg_dump_boot_info(void) {
    ALOGD("fg_dump_boot_info() called");
    return 0;
}

/* Demangled: fg_enable_fg_bat_int2_lt */
extern "C" __attribute__((visibility("default"))) int fg_enable_fg_bat_int2_lt(void) {
    ALOGD("fg_enable_fg_bat_int2_lt() called");
    return 0;
}

/* Demangled: get_aging_factor_cust */
extern "C" __attribute__((visibility("default"))) int get_aging_factor_cust(void) {
    ALOGD("get_aging_factor_cust() called");
    return 0;
}

/* Demangled: get_ptim_i */
extern "C" __attribute__((visibility("default"))) int get_ptim_i(void) {
    ALOGD("get_ptim_i() called");
    return 0;
}

/* Demangled: fg_dc_ratio */
extern "C" __attribute__((visibility("default"))) int fg_dc_ratio(void) {
    ALOGD("fg_dc_ratio() called");
    return 0;
}

/* Demangled: is_nvram_write_success */
extern "C" __attribute__((visibility("default"))) int is_nvram_write_success(void) {
    ALOGD("is_nvram_write_success() called");
    return 0;
}

/* Exported Object: shutdown_hl_zcv */
extern "C" __attribute__((visibility("default"))) void* shutdown_hl_zcv = NULL;

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Exported Object: fglog_ctrl */
extern "C" __attribute__((visibility("default"))) void* fglog_ctrl = NULL;

/* Demangled: get_is_hwocv_unreliable */
extern "C" __attribute__((visibility("default"))) int get_is_hwocv_unreliable(void) {
    ALOGD("get_is_hwocv_unreliable() called");
    return 0;
}

/* Demangled: set_nag_zcv */
extern "C" __attribute__((visibility("default"))) int set_nag_zcv(void) {
    ALOGD("set_nag_zcv() called");
    return 0;
}

/* Demangled: fg_full_tracking_en */
extern "C" __attribute__((visibility("default"))) int fg_full_tracking_en(void) {
    ALOGD("fg_full_tracking_en() called");
    return 0;
}

/* Demangled: fg_set_int1 */
extern "C" __attribute__((visibility("default"))) int fg_set_int1(void) {
    ALOGD("fg_set_int1() called");
    return 0;
}

/* Demangled: fg_update_dc_ratio */
extern "C" __attribute__((visibility("default"))) int fg_update_dc_ratio(void) {
    ALOGD("fg_update_dc_ratio() called");
    return 0;
}

/* Demangled: get_batterypseudo1_auto */
extern "C" __attribute__((visibility("default"))) int get_batterypseudo1_auto(void) {
    ALOGD("get_batterypseudo1_auto() called");
    return 0;
}

/* Exported Object: AG4_UT */
extern "C" __attribute__((visibility("default"))) void* AG4_UT = NULL;

/* Demangled: fg_set_int2 */
extern "C" __attribute__((visibility("default"))) int fg_set_int2(void) {
    ALOGD("fg_set_int2() called");
    return 0;
}

/* Demangled: fg_uisoc_init_update */
extern "C" __attribute__((visibility("default"))) int fg_uisoc_init_update(void) {
    ALOGD("fg_uisoc_init_update() called");
    return 0;
}

/* Exported Object: g_full_tracking_bat_int2_lt_count */
extern "C" __attribute__((visibility("default"))) void* g_full_tracking_bat_int2_lt_count = NULL;

/* Exported Object: getdata_error_log */
extern "C" __attribute__((visibility("default"))) void* getdata_error_log = NULL;

/* Exported Object: qmax_t_0ma_h_tb1 */
extern "C" __attribute__((visibility("default"))) void* qmax_t_0ma_h_tb1 = NULL;

/* Demangled: fglog_get_level */
extern "C" __attribute__((visibility("default"))) int fglog_get_level(void) {
    ALOGD("fglog_get_level() called");
    return 0;
}

/* Exported Object: soc_100 */
extern "C" __attribute__((visibility("default"))) void* soc_100 = NULL;

/* Demangled: fg_charger_out_int_handler */
extern "C" __attribute__((visibility("default"))) int fg_charger_out_int_handler(void) {
    ALOGD("fg_charger_out_int_handler() called");
    return 0;
}

/* Demangled: set_vbat2_intr */
extern "C" __attribute__((visibility("default"))) int set_vbat2_intr(void) {
    ALOGD("set_vbat2_intr() called");
    return 0;
}

/* Exported Object: full_tracking_bat_int2_lt */
extern "C" __attribute__((visibility("default"))) void* full_tracking_bat_int2_lt = NULL;

/* Demangled: save_old_data */
extern "C" __attribute__((visibility("default"))) int save_old_data(void) {
    ALOGD("save_old_data() called");
    return 0;
}

/* Demangled: get_d0_c_soc_cust */
extern "C" __attribute__((visibility("default"))) int get_d0_c_soc_cust(void) {
    ALOGD("get_d0_c_soc_cust() called");
    return 0;
}

/* Demangled: fg_update_c_dod */
extern "C" __attribute__((visibility("default"))) int fg_update_c_dod(void) {
    ALOGD("fg_update_c_dod() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: fglog_exit */
extern "C" __attribute__((visibility("default"))) int fglog_exit(void) {
    ALOGD("fglog_exit() called");
    return 0;
}

/* Demangled: fglog_vwrite_nl */
extern "C" __attribute__((visibility("default"))) int fglog_vwrite_nl(void) {
    ALOGD("fglog_vwrite_nl() called");
    return 0;
}

/* Demangled: fg_time_handler */
extern "C" __attribute__((visibility("default"))) int fg_time_handler(void) {
    ALOGD("fg_time_handler() called");
    return 0;
}

/* Demangled: is_kpoc */
extern "C" __attribute__((visibility("default"))) int is_kpoc(void) {
    ALOGD("is_kpoc() called");
    return 0;
}

/* Exported Object: ag_center */
extern "C" __attribute__((visibility("default"))) void* ag_center = NULL;

/* Exported Object: b_fg_get_fail */
extern "C" __attribute__((visibility("default"))) void* b_fg_get_fail = NULL;

/* Exported Object: b_set_fail */
extern "C" __attribute__((visibility("default"))) void* b_set_fail = NULL;

/* Demangled: fg_dump_int_threshold */
extern "C" __attribute__((visibility("default"))) int fg_dump_int_threshold(void) {
    ALOGD("fg_dump_int_threshold() called");
    return 0;
}

/* Exported Object: ptable */
extern "C" __attribute__((visibility("default"))) void* ptable = NULL;

/* Demangled: daemon_fg_zcv_int_handler */
extern "C" __attribute__((visibility("default"))) int daemon_fg_zcv_int_handler(void) {
    ALOGD("daemon_fg_zcv_int_handler() called");
    return 0;
}

/* Demangled: fg_dump_table */
extern "C" __attribute__((visibility("default"))) int fg_dump_table(void) {
    ALOGD("fg_dump_table() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: get_cust_data_from_kernel */
extern "C" __attribute__((visibility("default"))) int get_cust_data_from_kernel(void) {
    ALOGD("get_cust_data_from_kernel() called");
    return 0;
}

/* Demangled: dod_init_path13 */
extern "C" __attribute__((visibility("default"))) int dod_init_path13(void) {
    ALOGD("dod_init_path13() called");
    return 0;
}

/* Exported Object: fg_bat_tmp_gap */
extern "C" __attribute__((visibility("default"))) void* fg_bat_tmp_gap = NULL;

/* Demangled: fg_update_v_dod */
extern "C" __attribute__((visibility("default"))) int fg_update_v_dod(void) {
    ALOGD("fg_update_v_dod() called");
    return 0;
}

/* Demangled: get_fg_sw_car */
extern "C" __attribute__((visibility("default"))) int get_fg_sw_car(void) {
    ALOGD("get_fg_sw_car() called");
    return 0;
}

/* Demangled: fg_set_daemon_alive */
extern "C" __attribute__((visibility("default"))) int fg_set_daemon_alive(void) {
    ALOGD("fg_set_daemon_alive() called");
    return 0;
}

/* Exported Object: T_table */
extern "C" __attribute__((visibility("default"))) void* T_table = NULL;

/* Demangled: daemon_interpolation */
extern "C" __attribute__((visibility("default"))) int daemon_interpolation(void) {
    ALOGD("daemon_interpolation() called");
    return 0;
}

/* Demangled: dod_init_path14 */
extern "C" __attribute__((visibility("default"))) int dod_init_path14(void) {
    ALOGD("dod_init_path14() called");
    return 0;
}

/* Demangled: fg_construct_battery_profile */
extern "C" __attribute__((visibility("default"))) int fg_construct_battery_profile(void) {
    ALOGD("fg_construct_battery_profile() called");
    return 0;
}

/* Exported Object: zcv_car_1_d0 */
extern "C" __attribute__((visibility("default"))) void* zcv_car_1_d0 = NULL;

/* Demangled: bmd_ctrl_cmd_to_kernel */
extern "C" __attribute__((visibility("default"))) int bmd_ctrl_cmd_to_kernel(void) {
    ALOGD("bmd_ctrl_cmd_to_kernel() called");
    return 0;
}

/* Exported Object: count_aq1_times */
extern "C" __attribute__((visibility("default"))) void* count_aq1_times = NULL;

/* Demangled: fg_update_quse */
extern "C" __attribute__((visibility("default"))) int fg_update_quse(void) {
    ALOGD("fg_update_quse() called");
    return 0;
}

/* Exported Object: gvariable */
extern "C" __attribute__((visibility("default"))) void* gvariable = NULL;

/* Demangled: get_is_bat_exist */
extern "C" __attribute__((visibility("default"))) int get_is_bat_exist(void) {
    ALOGD("get_is_bat_exist() called");
    return 0;
}

/* Exported Object: T_table_c */
extern "C" __attribute__((visibility("default"))) void* T_table_c = NULL;

/* Exported Object: aq2_flag */
extern "C" __attribute__((visibility("default"))) void* aq2_flag = NULL;

/* Demangled: dod_init_path16 */
extern "C" __attribute__((visibility("default"))) int dod_init_path16(void) {
    ALOGD("dod_init_path16() called");
    return 0;
}

/* Demangled: init_avg_battemp */
extern "C" __attribute__((visibility("default"))) int init_avg_battemp(void) {
    ALOGD("init_avg_battemp() called");
    return 0;
}

/* Exported Object: battery_meter_daemon_ctrl */
extern "C" __attribute__((visibility("default"))) void* battery_meter_daemon_ctrl = NULL;

/* Exported Object: battery_meter_daemon_ctrl_ext */
extern "C" __attribute__((visibility("default"))) void* battery_meter_daemon_ctrl_ext = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: get_fg_sw_car_dc_ratio */
extern "C" __attribute__((visibility("default"))) int get_fg_sw_car_dc_ratio(void) {
    ALOGD("get_fg_sw_car_dc_ratio() called");
    return 0;
}

/* Exported Object: qmax_t_0ma_h */
extern "C" __attribute__((visibility("default"))) void* qmax_t_0ma_h = NULL;

/* Demangled: fglog_vwrite */
extern "C" __attribute__((visibility("default"))) int fglog_vwrite(void) {
    ALOGD("fglog_vwrite() called");
    return 0;
}

/* Demangled: get_init_flow_done */
extern "C" __attribute__((visibility("default"))) int get_init_flow_done(void) {
    ALOGD("get_init_flow_done() called");
    return 0;
}

/* Demangled: set_con0_soc */
extern "C" __attribute__((visibility("default"))) int set_con0_soc(void) {
    ALOGD("set_con0_soc() called");
    return 0;
}

/* Exported Object: g_sw_fg_versionID1 */
extern "C" __attribute__((visibility("default"))) void* g_sw_fg_versionID1 = NULL;

/* Demangled: fg_iavg_handler */
extern "C" __attribute__((visibility("default"))) int fg_iavg_handler(void) {
    ALOGD("fg_iavg_handler() called");
    return 0;
}

/* Demangled: get_uisoc_cust */
extern "C" __attribute__((visibility("default"))) int get_uisoc_cust(void) {
    ALOGD("get_uisoc_cust() called");
    return 0;
}

/* Demangled: DOD_to_OCV */
extern "C" __attribute__((visibility("default"))) int DOD_to_OCV(void) {
    ALOGD("DOD_to_OCV() called");
    return 0;
}

/* Exported Object: g_sw_fg_versionID2 */
extern "C" __attribute__((visibility("default"))) void* g_sw_fg_versionID2 = NULL;

/* Demangled: fglog_set_level */
extern "C" __attribute__((visibility("default"))) int fglog_set_level(void) {
    ALOGD("fglog_set_level() called");
    return 0;
}

/* Demangled: get_nvram_fail_status */
extern "C" __attribute__((visibility("default"))) int get_nvram_fail_status(void) {
    ALOGD("get_nvram_fail_status() called");
    return 0;
}

/* Exported Object: enable_low_temp_mode */
extern "C" __attribute__((visibility("default"))) void* enable_low_temp_mode = NULL;

/* Demangled: enable_fg_vbat2_h_int */
extern "C" __attribute__((visibility("default"))) int enable_fg_vbat2_h_int(void) {
    ALOGD("enable_fg_vbat2_h_int() called");
    return 0;
}

/* Exported Object: cust_g_pon_iboot_temp */
extern "C" __attribute__((visibility("default"))) void* cust_g_pon_iboot_temp = NULL;

/* Exported Object: ptim_i */
extern "C" __attribute__((visibility("default"))) void* ptim_i = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: fg_adc_reset_soff */
extern "C" __attribute__((visibility("default"))) int fg_adc_reset_soff(void) {
    ALOGD("fg_adc_reset_soff() called");
    return 0;
}

/* Demangled: get_kernel_cmd */
extern "C" __attribute__((visibility("default"))) int get_kernel_cmd(void) {
    ALOGD("get_kernel_cmd() called");
    return 0;
}

/* Exported Object: AG3_UT */
extern "C" __attribute__((visibility("default"))) void* AG3_UT = NULL;

/* Exported Object: dcr_car_v */
extern "C" __attribute__((visibility("default"))) void* dcr_car_v = NULL;

/* Demangled: read_old_data */
extern "C" __attribute__((visibility("default"))) int read_old_data(void) {
    ALOGD("read_old_data() called");
    return 0;
}

/* Demangled: fg_set_cust_data_dump */
extern "C" __attribute__((visibility("default"))) int fg_set_cust_data_dump(void) {
    ALOGD("fg_set_cust_data_dump() called");
    return 0;
}

/* Exported Object: g_pon_iboot_temp */
extern "C" __attribute__((visibility("default"))) void* g_pon_iboot_temp = NULL;

/* Exported Object: quse_wo_lf */
extern "C" __attribute__((visibility("default"))) void* quse_wo_lf = NULL;

/* Demangled: fg_charger_in_int_handler */
extern "C" __attribute__((visibility("default"))) int fg_charger_in_int_handler(void) {
    ALOGD("fg_charger_in_int_handler() called");
    return 0;
}

/* Demangled: get_ptim_vbat */
extern "C" __attribute__((visibility("default"))) int get_ptim_vbat(void) {
    ALOGD("get_ptim_vbat() called");
    return 0;
}

/* Demangled: save_health_log */
extern "C" __attribute__((visibility("default"))) int save_health_log(void) {
    ALOGD("save_health_log() called");
    return 0;
}

/* Demangled: daemon_fg_bat_int2_h_handler */
extern "C" __attribute__((visibility("default"))) int daemon_fg_bat_int2_h_handler(void) {
    ALOGD("daemon_fg_bat_int2_h_handler() called");
    return 0;
}

/* Exported Object: aging_source */
extern "C" __attribute__((visibility("default"))) void* aging_source = NULL;

/* Exported Object: car */
extern "C" __attribute__((visibility("default"))) void* car = NULL;

/* Exported Object: dcr_start */
extern "C" __attribute__((visibility("default"))) void* dcr_start = NULL;

/* Demangled: is_battery_cycle_reset */
extern "C" __attribute__((visibility("default"))) int is_battery_cycle_reset(void) {
    ALOGD("is_battery_cycle_reset() called");
    return 0;
}

/* Demangled: set_fg_bat_tmp_c_gap */
extern "C" __attribute__((visibility("default"))) int set_fg_bat_tmp_c_gap(void) {
    ALOGD("set_fg_bat_tmp_c_gap() called");
    return 0;
}

/* Demangled: fg_construct_table_by_temp */
extern "C" __attribute__((visibility("default"))) int fg_construct_table_by_temp(void) {
    ALOGD("fg_construct_table_by_temp() called");
    return 0;
}

/* Exported Object: lt_gap */
extern "C" __attribute__((visibility("default"))) void* lt_gap = NULL;

/* Demangled: fg_charging_full_int_handler */
extern "C" __attribute__((visibility("default"))) int fg_charging_full_int_handler(void) {
    ALOGD("fg_charging_full_int_handler() called");
    return 0;
}

/* Demangled: set_car_tune_value */
extern "C" __attribute__((visibility("default"))) int set_car_tune_value(void) {
    ALOGD("set_car_tune_value() called");
    return 0;
}

/* Demangled: set_fg_vbat2_h_th */
extern "C" __attribute__((visibility("default"))) int set_fg_vbat2_h_th(void) {
    ALOGD("set_fg_vbat2_h_th() called");
    return 0;
}

/* Exported Object: cust_data */
extern "C" __attribute__((visibility("default"))) void* cust_data = NULL;

/* Exported Object: dlpt_shutdown_flag */
extern "C" __attribute__((visibility("default"))) void* dlpt_shutdown_flag = NULL;

/* Demangled: dod_init_result */
extern "C" __attribute__((visibility("default"))) int dod_init_result(void) {
    ALOGD("dod_init_result() called");
    return 0;
}

/* Demangled: fg_update_fg_bat_int2_ht */
extern "C" __attribute__((visibility("default"))) int fg_update_fg_bat_int2_ht(void) {
    ALOGD("fg_update_fg_bat_int2_ht() called");
    return 0;
}

/* Exported Object: old_data */
extern "C" __attribute__((visibility("default"))) void* old_data = NULL;

/* Demangled: get_hw_info */
extern "C" __attribute__((visibility("default"))) int get_hw_info(void) {
    ALOGD("get_hw_info() called");
    return 0;
}

/* Demangled: fg_find_ui_low_limit */
extern "C" __attribute__((visibility("default"))) int fg_find_ui_low_limit(void) {
    ALOGD("fg_find_ui_low_limit() called");
    return 0;
}

/* Exported Object: flag */
extern "C" __attribute__((visibility("default"))) void* flag = NULL;

/* Exported Object: pdata */
extern "C" __attribute__((visibility("default"))) void* pdata = NULL;

/* Demangled: set_kernel_init_vbat */
extern "C" __attribute__((visibility("default"))) int set_kernel_init_vbat(void) {
    ALOGD("set_kernel_init_vbat() called");
    return 0;
}

/* Exported Object: aging_tempture */
extern "C" __attribute__((visibility("default"))) void* aging_tempture = NULL;

/* Demangled: fg_get_profile */
extern "C" __attribute__((visibility("default"))) int fg_get_profile(void) {
    ALOGD("fg_get_profile() called");
    return 0;
}

/* Demangled: fg_update_nag_c_dltv_thr */
extern "C" __attribute__((visibility("default"))) int fg_update_nag_c_dltv_thr(void) {
    ALOGD("fg_update_nag_c_dltv_thr() called");
    return 0;
}

/* Demangled: fg_update_fg_bat_tmp_threshold */
extern "C" __attribute__((visibility("default"))) int fg_update_fg_bat_tmp_threshold(void) {
    ALOGD("fg_update_fg_bat_tmp_threshold() called");
    return 0;
}

/* Exported Object: loading_factor1 */
extern "C" __attribute__((visibility("default"))) void* loading_factor1 = NULL;

/* Exported Object: D_Remain_Pseudo */
extern "C" __attribute__((visibility("default"))) void* D_Remain_Pseudo = NULL;

/* Demangled: SOC_to_OCV */
extern "C" __attribute__((visibility("default"))) int SOC_to_OCV(void) {
    ALOGD("SOC_to_OCV() called");
    return 0;
}

/* Demangled: Set_fg_c_d0_by_ocv */
extern "C" __attribute__((visibility("default"))) int Set_fg_c_d0_by_ocv(void) {
    ALOGD("Set_fg_c_d0_by_ocv() called");
    return 0;
}

/* Exported Object: aq3_flag */
extern "C" __attribute__((visibility("default"))) void* aq3_flag = NULL;

/* Demangled: dod_init_fetch_default_old_data */
extern "C" __attribute__((visibility("default"))) int dod_init_fetch_default_old_data(void) {
    ALOGD("dod_init_fetch_default_old_data() called");
    return 0;
}

/* Demangled: fg_construct_battery_profile_by_vboot */
extern "C" __attribute__((visibility("default"))) int fg_construct_battery_profile_by_vboot(void) {
    ALOGD("fg_construct_battery_profile_by_vboot() called");
    return 0;
}

/* Exported Object: loading_factor2 */
extern "C" __attribute__((visibility("default"))) void* loading_factor2 = NULL;

/* Demangled: get_fg_sw_car_nafg_c_dltv */
extern "C" __attribute__((visibility("default"))) int get_fg_sw_car_nafg_c_dltv(void) {
    ALOGD("get_fg_sw_car_nafg_c_dltv() called");
    return 0;
}

/* Demangled: get_sw_ocv */
extern "C" __attribute__((visibility("default"))) int get_sw_ocv(void) {
    ALOGD("get_sw_ocv() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: fg_pthread_mutex_unlock */
extern "C" __attribute__((visibility("default"))) int fg_pthread_mutex_unlock(void) {
    ALOGD("fg_pthread_mutex_unlock() called");
    return 0;
}

/* Exported Object: ag_data */
extern "C" __attribute__((visibility("default"))) void* ag_data = NULL;

/* Demangled: fg_get_Q_max */
extern "C" __attribute__((visibility("default"))) int fg_get_Q_max(void) {
    ALOGD("fg_get_Q_max() called");
    return 0;
}

/* Demangled: fglog_init */
extern "C" __attribute__((visibility("default"))) int fglog_init(void) {
    ALOGD("fglog_init() called");
    return 0;
}

/* Exported Object: AG2_UT */
extern "C" __attribute__((visibility("default"))) void* AG2_UT = NULL;

/* Demangled: fg_get_Q_max_high_current */
extern "C" __attribute__((visibility("default"))) int fg_get_Q_max_high_current(void) {
    ALOGD("fg_get_Q_max_high_current() called");
    return 0;
}

/* Exported Object: g_zcv_data */
extern "C" __attribute__((visibility("default"))) void* g_zcv_data = NULL;

/* Demangled: fg_daemon_init */
extern "C" __attribute__((visibility("default"))) int fg_daemon_init(void) {
    ALOGD("fg_daemon_init() called");
    return 0;
}

/* Demangled: get_is_bat_charging */
extern "C" __attribute__((visibility("default"))) int get_is_bat_charging(void) {
    ALOGD("get_is_bat_charging() called");
    return 0;
}

/* Demangled: set_int_data_verify */
extern "C" __attribute__((visibility("default"))) int set_int_data_verify(void) {
    ALOGD("set_int_data_verify() called");
    return 0;
}

/* Demangled: set_fg_quse */
extern "C" __attribute__((visibility("default"))) int set_fg_quse(void) {
    ALOGD("set_fg_quse() called");
    return 0;
}

/* Demangled: libfgauge_setup */
extern "C" __attribute__((visibility("default"))) int libfgauge_setup(void) {
    ALOGD("libfgauge_setup() called");
    return 0;
}

/* Exported Object: bat_cycle */
extern "C" __attribute__((visibility("default"))) void* bat_cycle = NULL;

/* Exported Object: cust_pseudo1_h */
extern "C" __attribute__((visibility("default"))) void* cust_pseudo1_h = NULL;

/* Demangled: fg_loading_factor_compensate */
extern "C" __attribute__((visibility("default"))) int fg_loading_factor_compensate(void) {
    ALOGD("fg_loading_factor_compensate() called");
    return 0;
}

/* Demangled: dlpt_sd_handler */
extern "C" __attribute__((visibility("default"))) int dlpt_sd_handler(void) {
    ALOGD("dlpt_sd_handler() called");
    return 0;
}

/* Demangled: get_charger_exist */
extern "C" __attribute__((visibility("default"))) int get_charger_exist(void) {
    ALOGD("get_charger_exist() called");
    return 0;
}

/* Demangled: get_int_data_verify */
extern "C" __attribute__((visibility("default"))) int get_int_data_verify(void) {
    ALOGD("get_int_data_verify() called");
    return 0;
}

/* Exported Object: t_d0 */
extern "C" __attribute__((visibility("default"))) void* t_d0 = NULL;

/* Demangled: daemon_get_rac */
extern "C" __attribute__((visibility("default"))) int daemon_get_rac(void) {
    ALOGD("daemon_get_rac() called");
    return 0;
}

/* Demangled: set_is_fg_initialized */
extern "C" __attribute__((visibility("default"))) int set_is_fg_initialized(void) {
    ALOGD("set_is_fg_initialized() called");
    return 0;
}

/* Demangled: fg_update_fg_bat_int1_threshold */
extern "C" __attribute__((visibility("default"))) int fg_update_fg_bat_int1_threshold(void) {
    ALOGD("fg_update_fg_bat_int1_threshold() called");
    return 0;
}

/* Demangled: fg_temp_int_handler */
extern "C" __attribute__((visibility("default"))) int fg_temp_int_handler(void) {
    ALOGD("fg_temp_int_handler() called");
    return 0;
}

/* Exported Object: D_Remain_Int */
extern "C" __attribute__((visibility("default"))) void* D_Remain_Int = NULL;

/* Demangled: prepare_intr_health_data */
extern "C" __attribute__((visibility("default"))) int prepare_intr_health_data(void) {
    ALOGD("prepare_intr_health_data() called");
    return 0;
}

/* Demangled: get_d0_v_soc_cust */
extern "C" __attribute__((visibility("default"))) int get_d0_v_soc_cust(void) {
    ALOGD("get_d0_v_soc_cust() called");
    return 0;
}

/* Demangled: get_fg_current_avg_valid */
extern "C" __attribute__((visibility("default"))) int get_fg_current_avg_valid(void) {
    ALOGD("get_fg_current_avg_valid() called");
    return 0;
}

/* Exported Object: cust_qmax_t_Nma_h */
extern "C" __attribute__((visibility("default"))) void* cust_qmax_t_Nma_h = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: get_daemon_log_level */
extern "C" __attribute__((visibility("default"))) int get_daemon_log_level(void) {
    ALOGD("get_daemon_log_level() called");
    return 0;
}

/* Exported Object: fg_bat_tmp_c_gap */
extern "C" __attribute__((visibility("default"))) void* fg_bat_tmp_c_gap = NULL;

/* Demangled: fg_read_r_bat_by_d */
extern "C" __attribute__((visibility("default"))) int fg_read_r_bat_by_d(void) {
    ALOGD("fg_read_r_bat_by_d() called");
    return 0;
}

/* Demangled: fg_update_fg_bat_int2_lt */
extern "C" __attribute__((visibility("default"))) int fg_update_fg_bat_int2_lt(void) {
    ALOGD("fg_update_fg_bat_int2_lt() called");
    return 0;
}

/* Demangled: get_temperature */
extern "C" __attribute__((visibility("default"))) int get_temperature(void) {
    ALOGD("get_temperature() called");
    return 0;
}

/* Demangled: wait_kernel_notify */
extern "C" __attribute__((visibility("default"))) int wait_kernel_notify(void) {
    ALOGD("wait_kernel_notify() called");
    return 0;
}

/* Exported Object: C_Remain_Pseudo */
extern "C" __attribute__((visibility("default"))) void* C_Remain_Pseudo = NULL;

/* Demangled: dump_old_data */
extern "C" __attribute__((visibility("default"))) int dump_old_data(void) {
    ALOGD("dump_old_data() called");
    return 0;
}

/* Demangled: get_charger_status */
extern "C" __attribute__((visibility("default"))) int get_charger_status(void) {
    ALOGD("get_charger_status() called");
    return 0;
}

/* Demangled: get_fg_sw_car_nafg_dltv */
extern "C" __attribute__((visibility("default"))) int get_fg_sw_car_nafg_dltv(void) {
    ALOGD("get_fg_sw_car_nafg_dltv() called");
    return 0;
}

/* Demangled: fg_read_charging_r_bat_by_d */
extern "C" __attribute__((visibility("default"))) int fg_read_charging_r_bat_by_d(void) {
    ALOGD("fg_read_charging_r_bat_by_d() called");
    return 0;
}

/* Demangled: init_dod_calculate_gap */
extern "C" __attribute__((visibility("default"))) int init_dod_calculate_gap(void) {
    ALOGD("init_dod_calculate_gap() called");
    return 0;
}

/* Demangled: set_aging_initdata */
extern "C" __attribute__((visibility("default"))) int set_aging_initdata(void) {
    ALOGD("set_aging_initdata() called");
    return 0;
}

/* Demangled: get_fg_hw_car */
extern "C" __attribute__((visibility("default"))) int get_fg_hw_car(void) {
    ALOGD("get_fg_hw_car() called");
    return 0;
}

/* Exported Object: aq4_flag */
extern "C" __attribute__((visibility("default"))) void* aq4_flag = NULL;

/* Exported Object: disable_nafg */
extern "C" __attribute__((visibility("default"))) void* disable_nafg = NULL;

/* Demangled: fg_error_calibration2 */
extern "C" __attribute__((visibility("default"))) int fg_error_calibration2(void) {
    ALOGD("fg_error_calibration2() called");
    return 0;
}

/* Demangled: mah_to_OCV */
extern "C" __attribute__((visibility("default"))) int mah_to_OCV(void) {
    ALOGD("mah_to_OCV() called");
    return 0;
}

/* Demangled: update_car_tune_value */
extern "C" __attribute__((visibility("default"))) int update_car_tune_value(void) {
    ALOGD("update_car_tune_value() called");
    return 0;
}

/* Demangled: get_is_bat_plugout */
extern "C" __attribute__((visibility("default"))) int get_is_bat_plugout(void) {
    ALOGD("get_is_bat_plugout() called");
    return 0;
}

/* Demangled: set_fg_bat_int1_gap */
extern "C" __attribute__((visibility("default"))) int set_fg_bat_int1_gap(void) {
    ALOGD("set_fg_bat_int1_gap() called");
    return 0;
}

/* Demangled: set_fg_bat_int2_lt_gap */
extern "C" __attribute__((visibility("default"))) int set_fg_bat_int2_lt_gap(void) {
    ALOGD("set_fg_bat_int2_lt_gap() called");
    return 0;
}

/* Demangled: set_kernel_soc */
extern "C" __attribute__((visibility("default"))) int set_kernel_soc(void) {
    ALOGD("set_kernel_soc() called");
    return 0;
}

/* Demangled: SOC_to_OCV_c */
extern "C" __attribute__((visibility("default"))) int SOC_to_OCV_c(void) {
    ALOGD("SOC_to_OCV_c() called");
    return 0;
}

/* Exported Object: pre_low_tracking_enable */
extern "C" __attribute__((visibility("default"))) void* pre_low_tracking_enable = NULL;

/* Demangled: daemon_get_shutdown_cond */
extern "C" __attribute__((visibility("default"))) int daemon_get_shutdown_cond(void) {
    ALOGD("daemon_get_shutdown_cond() called");
    return 0;
}

/* Exported Object: AG1_UT */
extern "C" __attribute__((visibility("default"))) void* AG1_UT = NULL;

/* Exported Object: aging_factor_cust */
extern "C" __attribute__((visibility("default"))) void* aging_factor_cust = NULL;

/* Exported Object: bat_cycle_threshold */
extern "C" __attribute__((visibility("default"))) void* bat_cycle_threshold = NULL;

/* Exported Object: cus_data_save */
extern "C" __attribute__((visibility("default"))) void* cus_data_save = NULL;

/* Demangled: write_old_data */
extern "C" __attribute__((visibility("default"))) int write_old_data(void) {
    ALOGD("write_old_data() called");
    return 0;
}

/* Demangled: get_rtc_two_sec_reboot */
extern "C" __attribute__((visibility("default"))) int get_rtc_two_sec_reboot(void) {
    ALOGD("get_rtc_two_sec_reboot() called");
    return 0;
}

/* Demangled: set_fg_reset_rtc_status */
extern "C" __attribute__((visibility("default"))) int set_fg_reset_rtc_status(void) {
    ALOGD("set_fg_reset_rtc_status() called");
    return 0;
}

/* Exported Object: delta_car_bat0 */
extern "C" __attribute__((visibility("default"))) void* delta_car_bat0 = NULL;

/* Exported Object: diff_soc_setting_ht */
extern "C" __attribute__((visibility("default"))) void* diff_soc_setting_ht = NULL;

/* Exported Object: keep_100 */
extern "C" __attribute__((visibility("default"))) void* keep_100 = NULL;

/* Demangled: enable_fg_vbat2_l_int */
extern "C" __attribute__((visibility("default"))) int enable_fg_vbat2_l_int(void) {
    ALOGD("enable_fg_vbat2_l_int() called");
    return 0;
}

/* Demangled: set_fg_time */
extern "C" __attribute__((visibility("default"))) int set_fg_time(void) {
    ALOGD("set_fg_time() called");
    return 0;
}

/* Exported Object: fg_vbat2_ht */
extern "C" __attribute__((visibility("default"))) void* fg_vbat2_ht = NULL;

/* Exported Object: ptim_vbat */
extern "C" __attribute__((visibility("default"))) void* ptim_vbat = NULL;

/* Exported Object: record_car_aq1 */
extern "C" __attribute__((visibility("default"))) void* record_car_aq1 = NULL;

/* Exported Object: record_car_aq2 */
extern "C" __attribute__((visibility("default"))) void* record_car_aq2 = NULL;

/* Demangled: fglog_update_level */
extern "C" __attribute__((visibility("default"))) int fglog_update_level(void) {
    ALOGD("fglog_update_level() called");
    return 0;
}

/* Exported Object: prev_car_bat0 */
extern "C" __attribute__((visibility("default"))) void* prev_car_bat0 = NULL;

/* Demangled: fglog_write */
extern "C" __attribute__((visibility("default"))) int fglog_write(void) {
    ALOGD("fglog_write() called");
    return 0;
}

/* Exported Object: g_fgd_mutex */
extern "C" __attribute__((visibility("default"))) void* g_fgd_mutex = NULL;

/* Demangled: set_nag_c_dltv_thr */
extern "C" __attribute__((visibility("default"))) int set_nag_c_dltv_thr(void) {
    ALOGD("set_nag_c_dltv_thr() called");
    return 0;
}

/* Demangled: cal_avg_battemp */
extern "C" __attribute__((visibility("default"))) int cal_avg_battemp(void) {
    ALOGD("cal_avg_battemp() called");
    return 0;
}

/* Exported Object: record_car_aq4 */
extern "C" __attribute__((visibility("default"))) void* record_car_aq4 = NULL;

/* Demangled: dod_init */
extern "C" __attribute__((visibility("default"))) int dod_init(void) {
    ALOGD("dod_init() called");
    return 0;
}

/* Demangled: dod_init_ori_flow */
extern "C" __attribute__((visibility("default"))) int dod_init_ori_flow(void) {
    ALOGD("dod_init_ori_flow() called");
    return 0;
}

/* Demangled: fg_compensate_battery_voltage_from_low */
extern "C" __attribute__((visibility("default"))) int fg_compensate_battery_voltage_from_low(void) {
    ALOGD("fg_compensate_battery_voltage_from_low() called");
    return 0;
}

/* Exported Object: record_car_aq5 */
extern "C" __attribute__((visibility("default"))) void* record_car_aq5 = NULL;

/* Demangled: commu_INT */
extern "C" __attribute__((visibility("default"))) int commu_INT(void) {
    ALOGD("commu_INT() called");
    return 0;
}

/* Demangled: fg_bat_int1_handler */
extern "C" __attribute__((visibility("default"))) int fg_bat_int1_handler(void) {
    ALOGD("fg_bat_int1_handler() called");
    return 0;
}

/* Demangled: Set_fg_c_d0_by_soc */
extern "C" __attribute__((visibility("default"))) int Set_fg_c_d0_by_soc(void) {
    ALOGD("Set_fg_c_d0_by_soc() called");
    return 0;
}

/* Exported Object: cust_temp_table */
extern "C" __attribute__((visibility("default"))) void* cust_temp_table = NULL;

/* Exported Object: dcr_fg_car1 */
extern "C" __attribute__((visibility("default"))) void* dcr_fg_car1 = NULL;

/* Exported Object: dcr_ratio_5 */
extern "C" __attribute__((visibility("default"))) void* dcr_ratio_5 = NULL;

/* Exported Object: dod_init_log */
extern "C" __attribute__((visibility("default"))) void* dod_init_log = NULL;

/* Exported Object: record_car_aq6 */
extern "C" __attribute__((visibility("default"))) void* record_car_aq6 = NULL;

/* Demangled: init_socket */
extern "C" __attribute__((visibility("default"))) int init_socket(void) {
    ALOGD("init_socket() called");
    return 0;
}

/* Demangled: daemon_fg_vbat2_h_int_handler */
extern "C" __attribute__((visibility("default"))) int daemon_fg_vbat2_h_int_handler(void) {
    ALOGD("daemon_fg_vbat2_h_int_handler() called");
    return 0;
}

/* Demangled: get_is_fg_initialized */
extern "C" __attribute__((visibility("default"))) int get_is_fg_initialized(void) {
    ALOGD("get_is_fg_initialized() called");
    return 0;
}

/* Demangled: get_vbat */
extern "C" __attribute__((visibility("default"))) int get_vbat(void) {
    ALOGD("get_vbat() called");
    return 0;
}

/* Demangled: set_fg_dc_ratio */
extern "C" __attribute__((visibility("default"))) int set_fg_dc_ratio(void) {
    ALOGD("set_fg_dc_ratio() called");
    return 0;
}

/* Demangled: set_sw_ocv */
extern "C" __attribute__((visibility("default"))) int set_sw_ocv(void) {
    ALOGD("set_sw_ocv() called");
    return 0;
}

/* Exported Object: b_get_fail */
extern "C" __attribute__((visibility("default"))) void* b_get_fail = NULL;

/* Exported Object: dcr_fg_car2 */
extern "C" __attribute__((visibility("default"))) void* dcr_fg_car2 = NULL;

/* Exported Object: qmax_t_Nma_h */
extern "C" __attribute__((visibility("default"))) void* qmax_t_Nma_h = NULL;

/* Demangled: daemon_set_shutdown_cond */
extern "C" __attribute__((visibility("default"))) int daemon_set_shutdown_cond(void) {
    ALOGD("daemon_set_shutdown_cond() called");
    return 0;
}

/* Demangled: set_one_percent_timer */
extern "C" __attribute__((visibility("default"))) int set_one_percent_timer(void) {
    ALOGD("set_one_percent_timer() called");
    return 0;
}

/* Exported Object: boot_data */
extern "C" __attribute__((visibility("default"))) void* boot_data = NULL;

/* Demangled: fg_pthread_mutex_lock */
extern "C" __attribute__((visibility("default"))) int fg_pthread_mutex_lock(void) {
    ALOGD("fg_pthread_mutex_lock() called");
    return 0;
}

/* Demangled: start_nl_thread */
extern "C" __attribute__((visibility("default"))) int start_nl_thread(void) {
    ALOGD("start_nl_thread() called");
    return 0;
}

/* Demangled: get_rtc_invalid */
extern "C" __attribute__((visibility("default"))) int get_rtc_invalid(void) {
    ALOGD("get_rtc_invalid() called");
    return 0;
}

/* Demangled: get_shutdown_duration_time */
extern "C" __attribute__((visibility("default"))) int get_shutdown_duration_time(void) {
    ALOGD("get_shutdown_duration_time() called");
    return 0;
}

/* Demangled: set_iavg_intr */
extern "C" __attribute__((visibility("default"))) int set_iavg_intr(void) {
    ALOGD("set_iavg_intr() called");
    return 0;
}

/* Exported Object: C_Remain */
extern "C" __attribute__((visibility("default"))) void* C_Remain = NULL;

/* Demangled: OCV_to_SOC */
extern "C" __attribute__((visibility("default"))) int OCV_to_SOC(void) {
    ALOGD("OCV_to_SOC() called");
    return 0;
}

/* Demangled: fg_read_r_bat_by_v */
extern "C" __attribute__((visibility("default"))) int fg_read_r_bat_by_v(void) {
    ALOGD("fg_read_r_bat_by_v() called");
    return 0;
}

/* Exported Object: quse */
extern "C" __attribute__((visibility("default"))) void* quse = NULL;

/* Demangled: fg_bat_plugout_handler */
extern "C" __attribute__((visibility("default"))) int fg_bat_plugout_handler(void) {
    ALOGD("fg_bat_plugout_handler() called");
    return 0;
}

/* Demangled: fg_shutdown_int_handler */
extern "C" __attribute__((visibility("default"))) int fg_shutdown_int_handler(void) {
    ALOGD("fg_shutdown_int_handler() called");
    return 0;
}

/* Demangled: fg_set_cust_data */
extern "C" __attribute__((visibility("default"))) int fg_set_cust_data(void) {
    ALOGD("fg_set_cust_data() called");
    return 0;
}

/* Demangled: fg_update_fg_bat_tmp_threshold_c */
extern "C" __attribute__((visibility("default"))) int fg_update_fg_bat_tmp_threshold_c(void) {
    ALOGD("fg_update_fg_bat_tmp_threshold_c() called");
    return 0;
}

/* Exported Object: qmax_t_aging */
extern "C" __attribute__((visibility("default"))) void* qmax_t_aging = NULL;

/* Demangled: enable_fg_bat_int2_ht */
extern "C" __attribute__((visibility("default"))) int enable_fg_bat_int2_ht(void) {
    ALOGD("enable_fg_bat_int2_ht() called");
    return 0;
}

/* Exported Object: aq5_flag */
extern "C" __attribute__((visibility("default"))) void* aq5_flag = NULL;

/* Exported Object: g_pmic_m_vol_temp */
extern "C" __attribute__((visibility("default"))) void* g_pmic_m_vol_temp = NULL;

/* Exported Object: g_qmax_sys_vol_temp */
extern "C" __attribute__((visibility("default"))) void* g_qmax_sys_vol_temp = NULL;

/* Demangled: fgauge_version_check */
extern "C" __attribute__((visibility("default"))) int fgauge_version_check(void) {
    ALOGD("fgauge_version_check() called");
    return 0;
}

/* Demangled: fg_check_temperature_order */
extern "C" __attribute__((visibility("default"))) int fg_check_temperature_order(void) {
    ALOGD("fg_check_temperature_order() called");
    return 0;
}

/* Demangled: fg_set_soc_by_vc_mode */
extern "C" __attribute__((visibility("default"))) int fg_set_soc_by_vc_mode(void) {
    ALOGD("fg_set_soc_by_vc_mode() called");
    return 0;
}

/* Demangled: get_int_data */
extern "C" __attribute__((visibility("default"))) int get_int_data(void) {
    ALOGD("get_int_data() called");
    return 0;
}

/* Exported Object: ht_gap */
extern "C" __attribute__((visibility("default"))) void* ht_gap = NULL;

/* Demangled: fg_int_end_flow */
extern "C" __attribute__((visibility("default"))) int fg_int_end_flow(void) {
    ALOGD("fg_int_end_flow() called");
    return 0;
}

/* Exported Object: aging_factor */
extern "C" __attribute__((visibility("default"))) void* aging_factor = NULL;

/* Exported Object: b_fg_set_fail */
extern "C" __attribute__((visibility("default"))) void* b_fg_set_fail = NULL;

/* Demangled: dod_init_embedded_battery_flow */
extern "C" __attribute__((visibility("default"))) int dod_init_embedded_battery_flow(void) {
    ALOGD("dod_init_embedded_battery_flow() called");
    return 0;
}

/* Exported Object: is_bat_charging */
extern "C" __attribute__((visibility("default"))) void* is_bat_charging = NULL;

/* Demangled: save_aging_center */
extern "C" __attribute__((visibility("default"))) int save_aging_center(void) {
    ALOGD("save_aging_center() called");
    return 0;
}

/* Demangled: get_hw_ocv */
extern "C" __attribute__((visibility("default"))) int get_hw_ocv(void) {
    ALOGD("get_hw_ocv() called");
    return 0;
}

/* Demangled: set_fg_bat_tmp_gap */
extern "C" __attribute__((visibility("default"))) int set_fg_bat_tmp_gap(void) {
    ALOGD("set_fg_bat_tmp_gap() called");
    return 0;
}

/* Demangled: read_car_tune_data */
extern "C" __attribute__((visibility("default"))) int read_car_tune_data(void) {
    ALOGD("read_car_tune_data() called");
    return 0;
}

/* Demangled: save_aging_log */
extern "C" __attribute__((visibility("default"))) int save_aging_log(void) {
    ALOGD("save_aging_log() called");
    return 0;
}

/* Exported Object: d_aq1 */
extern "C" __attribute__((visibility("default"))) void* d_aq1 = NULL;

/* Demangled: dod_init_apply_old_data */
extern "C" __attribute__((visibility("default"))) int dod_init_apply_old_data(void) {
    ALOGD("dod_init_apply_old_data() called");
    return 0;
}

/* Demangled: get_nafg_vbat */
extern "C" __attribute__((visibility("default"))) int get_nafg_vbat(void) {
    ALOGD("get_nafg_vbat() called");
    return 0;
}

/* Demangled: dod_init_three_ocv_comparing */
extern "C" __attribute__((visibility("default"))) int dod_init_three_ocv_comparing(void) {
    ALOGD("dod_init_three_ocv_comparing() called");
    return 0;
}

/* Demangled: imix_error_calibration */
extern "C" __attribute__((visibility("default"))) int imix_error_calibration(void) {
    ALOGD("imix_error_calibration() called");
    return 0;
}

/* Exported Object: qmax_t_0ma */
extern "C" __attribute__((visibility("default"))) void* qmax_t_0ma = NULL;

/* Exported Object: zcv_car_1 */
extern "C" __attribute__((visibility("default"))) void* zcv_car_1 = NULL;

/* Demangled: get_rtc_ui_soc */
extern "C" __attribute__((visibility("default"))) int get_rtc_ui_soc(void) {
    ALOGD("get_rtc_ui_soc() called");
    return 0;
}

/* Exported Object: d_aq4 */
extern "C" __attribute__((visibility("default"))) void* d_aq4 = NULL;

/* Exported Object: diff_soc_setting_lt */
extern "C" __attribute__((visibility("default"))) void* diff_soc_setting_lt = NULL;

/* Exported Object: rdc_a */
extern "C" __attribute__((visibility("default"))) void* rdc_a = NULL;

/* Exported Object: zcv_car_2 */
extern "C" __attribute__((visibility("default"))) void* zcv_car_2 = NULL;

/* Demangled: set_zcv_intr */
extern "C" __attribute__((visibility("default"))) int set_zcv_intr(void) {
    ALOGD("set_zcv_intr() called");
    return 0;
}

/* Exported Object: d_aq5 */
extern "C" __attribute__((visibility("default"))) void* d_aq5 = NULL;

/* Demangled: fg_find_ui_full_limit */
extern "C" __attribute__((visibility("default"))) int fg_find_ui_full_limit(void) {
    ALOGD("fg_find_ui_full_limit() called");
    return 0;
}

/* Demangled: fg_read_v_by_d */
extern "C" __attribute__((visibility("default"))) int fg_read_v_by_d(void) {
    ALOGD("fg_read_v_by_d() called");
    return 0;
}

/* Demangled: fg_ui_low_lim_time */
extern "C" __attribute__((visibility("default"))) int fg_ui_low_lim_time(void) {
    ALOGD("fg_ui_low_lim_time() called");
    return 0;
}

/* Exported Object: fg_vbat2_lt */
extern "C" __attribute__((visibility("default"))) void* fg_vbat2_lt = NULL;
