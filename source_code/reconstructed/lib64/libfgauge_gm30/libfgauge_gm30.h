/*
 * Reverse-Engineered ABI Specification for: libfgauge_gm30.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Executable Service Daemon
 * Soname: libfgauge_gm30.so
 */

#ifndef BEGONIA_RE_LIBFGAUGE_GM30_H
#define BEGONIA_RE_LIBFGAUGE_GM30_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: fg_temp_c_int_handler */
/* Demangled: fg_temp_c_int_handler */
int fg_temp_c_int_handler(void);

/* Symbol: d_aq6 */
/* Demangled: d_aq6 */
extern void* d_aq6;

/* Symbol: fg_dump_table2 */
/* Demangled: fg_dump_table2 */
int fg_dump_table2(void);

/* Symbol: full_tracking_enable */
/* Demangled: full_tracking_enable */
extern void* full_tracking_enable;

/* Symbol: bmd_ctrl_cmd_to_kernel_ext */
/* Demangled: bmd_ctrl_cmd_to_kernel_ext */
int bmd_ctrl_cmd_to_kernel_ext(void);

/* Symbol: set_fg_vbat2_l_th */
/* Demangled: set_fg_vbat2_l_th */
int set_fg_vbat2_l_th(void);

/* Symbol: dump_health_log */
/* Demangled: dump_health_log */
int dump_health_log(void);

/* Symbol: fg_bat_int2_ht_en */
/* Demangled: fg_bat_int2_ht_en */
extern void* fg_bat_int2_ht_en;

/* Symbol: fg_charging_full_int_handler_AG4UT */
/* Demangled: fg_charging_full_int_handler_AG4UT */
int fg_charging_full_int_handler_AG4UT(void);

/* Symbol: set_bat_plugout_intr */
/* Demangled: set_bat_plugout_intr */
int set_bat_plugout_intr(void);

/* Symbol: set_nafg_resistance_bat */
/* Demangled: set_nafg_resistance_bat */
int set_nafg_resistance_bat(void);

/* Symbol: set_nag_int_en */
/* Demangled: set_nag_int_en */
int set_nag_int_en(void);

/* Symbol: car_v_aq1 */
/* Demangled: car_v_aq1 */
extern void* car_v_aq1;

/* Symbol: prepare_aging_data */
/* Demangled: prepare_aging_data */
int prepare_aging_data(void);

/* Symbol: fg_log */
/* Demangled: fg_log */
int fg_log(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: car_v_aq2 */
/* Demangled: car_v_aq2 */
extern void* car_v_aq2;

/* Symbol: cust_g_qmax_sys_vol_temp */
/* Demangled: cust_g_qmax_sys_vol_temp */
extern void* cust_g_qmax_sys_vol_temp;

/* Symbol: set_int_data */
/* Demangled: set_int_data */
int set_int_data(void);

/* Symbol: g_bat_cycle_ncar */
/* Demangled: g_bat_cycle_ncar */
extern void* g_bat_cycle_ncar;

/* Symbol: OCV_to_DOD */
/* Demangled: OCV_to_DOD */
int OCV_to_DOD(void);

/* Symbol: car_v_aq4 */
/* Demangled: car_v_aq4 */
extern void* car_v_aq4;

/* Symbol: dod_init_swocv_hwocv_comparing */
/* Demangled: dod_init_swocv_hwocv_comparing */
int dod_init_swocv_hwocv_comparing(void);

/* Symbol: dod_init_swocv_oldocv_comparing */
/* Demangled: dod_init_swocv_oldocv_comparing */
int dod_init_swocv_oldocv_comparing(void);

/* Symbol: send_cust_table_to_kernel */
/* Demangled: send_cust_table_to_kernel */
int send_cust_table_to_kernel(void);

/* Symbol: set_battery_cycle_threshold */
/* Demangled: set_battery_cycle_threshold */
int set_battery_cycle_threshold(void);

/* Symbol: Set_fg_v_d0_by_ocv */
/* Demangled: Set_fg_v_d0_by_ocv */
int Set_fg_v_d0_by_ocv(void);

/* Symbol: aq6_flag */
/* Demangled: aq6_flag */
extern void* aq6_flag;

/* Symbol: car_v_aq5 */
/* Demangled: car_v_aq5 */
extern void* car_v_aq5;

/* Symbol: exit_socket */
/* Demangled: exit_socket */
int exit_socket(void);

/* Symbol: fglog_write_nl */
/* Demangled: fglog_write_nl */
int fglog_write_nl(void);

/* Symbol: DOD_to_OCV_c */
/* Demangled: DOD_to_OCV_c */
int DOD_to_OCV_c(void);

/* Symbol: car_v_aq6 */
/* Demangled: car_v_aq6 */
extern void* car_v_aq6;

/* Symbol: cust_qmax_t_0ma_h_tb1 */
/* Demangled: cust_qmax_t_0ma_h_tb1 */
extern void* cust_qmax_t_0ma_h_tb1;

/* Symbol: fg_aging_factor_update */
/* Demangled: fg_aging_factor_update */
int fg_aging_factor_update(void);

/* Symbol: quse_wo_lf_cust */
/* Demangled: quse_wo_lf_cust */
extern void* quse_wo_lf_cust;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: get_con0_soc */
/* Demangled: get_con0_soc */
int get_con0_soc(void);

/* Symbol: enable_fg_bat_int2_lt */
/* Demangled: enable_fg_bat_int2_lt */
int enable_fg_bat_int2_lt(void);

/* Symbol: quse_tb1 */
/* Demangled: quse_tb1 */
extern void* quse_tb1;

/* Symbol: set_adc_reset */
/* Demangled: set_adc_reset */
int set_adc_reset(void);

/* Symbol: set_rtc_ui_soc */
/* Demangled: set_rtc_ui_soc */
int set_rtc_ui_soc(void);

/* Symbol: dod_init_verify_old_data */
/* Demangled: dod_init_verify_old_data */
int dod_init_verify_old_data(void);

/* Symbol: fg_bat_int1_gap */
/* Demangled: fg_bat_int1_gap */
extern void* fg_bat_int1_gap;

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: fg_daemon_dump_log */
/* Demangled: fg_daemon_dump_log */
int fg_daemon_dump_log(void);

/* Symbol: AG6_UT */
/* Demangled: AG6_UT */
extern void* AG6_UT;

/* Symbol: fg_adc_reset */
/* Demangled: fg_adc_reset */
int fg_adc_reset(void);

/* Symbol: fg_compensate_battery_voltage */
/* Demangled: fg_compensate_battery_voltage */
int fg_compensate_battery_voltage(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: send_nl_message */
/* Demangled: send_nl_message */
int send_nl_message(void);

/* Symbol: read_lasttime_data */
/* Demangled: read_lasttime_data */
int read_lasttime_data(void);

/* Symbol: get_cust_table_from_kernel */
/* Demangled: get_cust_table_from_kernel */
int get_cust_table_from_kernel(void);

/* Symbol: C_Remain_Int */
/* Demangled: C_Remain_Int */
extern void* C_Remain_Int;

/* Symbol: car_aq1 */
/* Demangled: car_aq1 */
extern void* car_aq1;

/* Symbol: fg_compensate_by_d */
/* Demangled: fg_compensate_by_d */
int fg_compensate_by_d(void);

/* Symbol: fg_debug_dump */
/* Demangled: fg_debug_dump */
int fg_debug_dump(void);

/* Symbol: fg_adc_reset_ncar */
/* Demangled: fg_adc_reset_ncar */
int fg_adc_reset_ncar(void);

/* Symbol: fg_bat_cycle_int_handler */
/* Demangled: fg_bat_cycle_int_handler */
int fg_bat_cycle_int_handler(void);

/* Symbol: car_aq2 */
/* Demangled: car_aq2 */
extern void* car_aq2;

/* Symbol: fg_update_fg_bat_int2_threshold */
/* Demangled: fg_update_fg_bat_int2_threshold */
int fg_update_fg_bat_int2_threshold(void);

/* Symbol: h_log */
/* Demangled: h_log */
extern void* h_log;

/* Symbol: old_data_log */
/* Demangled: old_data_log */
extern void* old_data_log;

/* Symbol: daemon_fg_bat_int2_l_handler */
/* Demangled: daemon_fg_bat_int2_l_handler */
int daemon_fg_bat_int2_l_handler(void);

/* Symbol: car_tune_data */
/* Demangled: car_tune_data */
extern void* car_tune_data;

/* Symbol: low_tracking_enable */
/* Demangled: low_tracking_enable */
extern void* low_tracking_enable;

/* Symbol: quse_wo_lf_tb1 */
/* Demangled: quse_wo_lf_tb1 */
extern void* quse_wo_lf_tb1;

/* Symbol: reset_old_data */
/* Demangled: reset_old_data */
int reset_old_data(void);

/* Symbol: set_init_flow_done */
/* Demangled: set_init_flow_done */
int set_init_flow_done(void);

/* Symbol: car_aq4 */
/* Demangled: car_aq4 */
extern void* car_aq4;

/* Symbol: dod_init_bootOCV_oldOCV */
/* Demangled: dod_init_bootOCV_oldOCV */
int dod_init_bootOCV_oldOCV(void);

/* Symbol: fg_construct_battery_profile_by_qmax */
/* Demangled: fg_construct_battery_profile_by_qmax */
int fg_construct_battery_profile_by_qmax(void);

/* Symbol: fg_construct_table_by_assign_temp */
/* Demangled: fg_construct_table_by_assign_temp */
int fg_construct_table_by_assign_temp(void);

/* Symbol: fg_get_saddles */
/* Demangled: fg_get_saddles */
int fg_get_saddles(void);

/* Symbol: fg_ui_full_lim_time */
/* Demangled: fg_ui_full_lim_time */
int fg_ui_full_lim_time(void);

/* Symbol: read_car_tune_file */
/* Demangled: read_car_tune_file */
int read_car_tune_file(void);

/* Symbol: receiving_nl_thread */
/* Demangled: receiving_nl_thread */
int receiving_nl_thread(void);

/* Symbol: fg_bat_int2_handler */
/* Demangled: fg_bat_int2_handler */
int fg_bat_int2_handler(void);

/* Symbol: get_data_from_kernel */
/* Demangled: get_data_from_kernel */
int get_data_from_kernel(void);

/* Symbol: set_fg_bat_int2_ht_gap */
/* Demangled: set_fg_bat_int2_ht_gap */
int set_fg_bat_int2_ht_gap(void);

/* Symbol: SOC_to_OCV_CUST */
/* Demangled: SOC_to_OCV_CUST */
int SOC_to_OCV_CUST(void);

/* Symbol: car_aq5 */
/* Demangled: car_aq5 */
extern void* car_aq5;

/* Symbol: check_health_data */
/* Demangled: check_health_data */
int check_health_data(void);

/* Symbol: fg_enable_fg_bat_int2_ht */
/* Demangled: fg_enable_fg_bat_int2_ht */
int fg_enable_fg_bat_int2_ht(void);

/* Symbol: quse_cust */
/* Demangled: quse_cust */
extern void* quse_cust;

/* Symbol: car_aq6 */
/* Demangled: car_aq6 */
extern void* car_aq6;

/* Symbol: fg_tracking_time */
/* Demangled: fg_tracking_time */
extern void* fg_tracking_time;

/* Symbol: prepare_health_data */
/* Demangled: prepare_health_data */
int prepare_health_data(void);

/* Symbol: set_kernel_uisoc */
/* Demangled: set_kernel_uisoc */
int set_kernel_uisoc(void);

/* Symbol: ag_cen_log */
/* Demangled: ag_cen_log */
extern void* ag_cen_log;

/* Symbol: cust_g_pmic_m_vol_temp */
/* Demangled: cust_g_pmic_m_vol_temp */
extern void* cust_g_pmic_m_vol_temp;

/* Symbol: prepare_agingcenter_data */
/* Demangled: prepare_agingcenter_data */
int prepare_agingcenter_data(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: fg_set_nafg_interrupt */
/* Demangled: fg_set_nafg_interrupt */
int fg_set_nafg_interrupt(void);

/* Symbol: g_shutdown_car_diff */
/* Demangled: g_shutdown_car_diff */
extern void* g_shutdown_car_diff;

/* Symbol: OCV_to_SOC_c */
/* Demangled: OCV_to_SOC_c */
int OCV_to_SOC_c(void);

/* Symbol: cust_qmax_t_Nma_h_tb1 */
/* Demangled: cust_qmax_t_Nma_h_tb1 */
extern void* cust_qmax_t_Nma_h_tb1;

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: backup_lasttime_data */
/* Demangled: backup_lasttime_data */
int backup_lasttime_data(void);

/* Symbol: dcr_count */
/* Demangled: dcr_count */
extern void* dcr_count;

/* Symbol: disable_aging_compensation_flag */
/* Demangled: disable_aging_compensation_flag */
int disable_aging_compensation_flag(void);

/* Symbol: h_data */
/* Demangled: h_data */
extern void* h_data;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: daemon_fg_nafg_int_handler */
/* Demangled: daemon_fg_nafg_int_handler */
int daemon_fg_nafg_int_handler(void);

/* Symbol: get_bat_plug_out_time */
/* Demangled: get_bat_plug_out_time */
int get_bat_plug_out_time(void);

/* Symbol: OCV_to_DOD_c */
/* Demangled: OCV_to_DOD_c */
int OCV_to_DOD_c(void);

/* Symbol: fg_aging_compensation1 */
/* Demangled: fg_aging_compensation1 */
int fg_aging_compensation1(void);

/* Symbol: qmax_t_Nma_h_tb1 */
/* Demangled: qmax_t_Nma_h_tb1 */
extern void* qmax_t_Nma_h_tb1;

/* Symbol: fg_aging_compensation2 */
/* Demangled: fg_aging_compensation2 */
int fg_aging_compensation2(void);

/* Symbol: fg_aging_compensation3 */
/* Demangled: fg_aging_compensation3 */
int fg_aging_compensation3(void);

/* Symbol: send_data_to_kernel */
/* Demangled: send_data_to_kernel */
int send_data_to_kernel(void);

/* Symbol: AG5_UT */
/* Demangled: AG5_UT */
extern void* AG5_UT;

/* Symbol: daemon_log */
/* Demangled: daemon_log */
extern void* daemon_log;

/* Symbol: fg_aging_compensation4 */
/* Demangled: fg_aging_compensation4 */
int fg_aging_compensation4(void);

/* Symbol: mov_battemp_int_handler */
/* Demangled: mov_battemp_int_handler */
int mov_battemp_int_handler(void);

/* Symbol: qmax_t_0ma_cust */
/* Demangled: qmax_t_0ma_cust */
extern void* qmax_t_0ma_cust;

/* Symbol: save_debug_param */
/* Demangled: save_debug_param */
int save_debug_param(void);

/* Symbol: fgauge_initialization */
/* Demangled: fgauge_initialization */
int fgauge_initialization(void);

/* Symbol: fg_aging_compensation5 */
/* Demangled: fg_aging_compensation5 */
int fg_aging_compensation5(void);

/* Symbol: rac */
/* Demangled: rac */
extern void* rac;

/* Symbol: t_aq1 */
/* Demangled: t_aq1 */
extern void* t_aq1;

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: fg_aging_compensation6 */
/* Demangled: fg_aging_compensation6 */
int fg_aging_compensation6(void);

/* Symbol: fg_nafg_reset_thr */
/* Demangled: fg_nafg_reset_thr */
int fg_nafg_reset_thr(void);

/* Symbol: g_tracking_time */
/* Demangled: g_tracking_time */
extern void* g_tracking_time;

/* Symbol: bmd_ctrl_cmd_to_kernel_internal */
/* Demangled: bmd_ctrl_cmd_to_kernel_internal */
int bmd_ctrl_cmd_to_kernel_internal(void);

/* Symbol: read_nvram_data */
/* Demangled: read_nvram_data */
int read_nvram_data(void);

/* Symbol: daemon_get_imix */
/* Demangled: daemon_get_imix */
int daemon_get_imix(void);

/* Symbol: get_fg_sw_car_nafg_cnt */
/* Demangled: get_fg_sw_car_nafg_cnt */
int get_fg_sw_car_nafg_cnt(void);

/* Symbol: ag_log */
/* Demangled: ag_log */
extern void* ag_log;

/* Symbol: check_apply_debug_param */
/* Demangled: check_apply_debug_param */
int check_apply_debug_param(void);

/* Symbol: t_aq4 */
/* Demangled: t_aq4 */
extern void* t_aq4;

/* Symbol: get_fg_time */
/* Demangled: get_fg_time */
int get_fg_time(void);

/* Symbol: fg_construct_vboot */
/* Demangled: fg_construct_vboot */
int fg_construct_vboot(void);

/* Symbol: rdc1 */
/* Demangled: rdc1 */
extern void* rdc1;

/* Symbol: t_aq5 */
/* Demangled: t_aq5 */
extern void* t_aq5;

/* Symbol: zcv_intr_step */
/* Demangled: zcv_intr_step */
extern void* zcv_intr_step;

/* Symbol: get_fg_current_avg */
/* Demangled: get_fg_current_avg */
int get_fg_current_avg(void);

/* Symbol: update_moving_avg_battemp */
/* Demangled: update_moving_avg_battemp */
int update_moving_avg_battemp(void);

/* Symbol: rdc2 */
/* Demangled: rdc2 */
extern void* rdc2;

/* Symbol: t_aq6 */
/* Demangled: t_aq6 */
extern void* t_aq6;

/* Symbol: aq1_flag */
/* Demangled: aq1_flag */
extern void* aq1_flag;

/* Symbol: cust_qmax_t_0ma_h */
/* Demangled: cust_qmax_t_0ma_h */
extern void* cust_qmax_t_0ma_h;

/* Symbol: cust_shutdown_zcv */
/* Demangled: cust_shutdown_zcv */
extern void* cust_shutdown_zcv;

/* Symbol: fg_dump_hwinfo */
/* Demangled: fg_dump_hwinfo */
int fg_dump_hwinfo(void);

/* Symbol: p_temp_table */
/* Demangled: p_temp_table */
extern void* p_temp_table;

/* Symbol: fg_daemon_handler */
/* Demangled: fg_daemon_handler */
int fg_daemon_handler(void);

/* Symbol: set_nvram_fail_status */
/* Demangled: set_nvram_fail_status */
int set_nvram_fail_status(void);

/* Symbol: cv_soc */
/* Demangled: cv_soc */
extern void* cv_soc;

/* Symbol: fg_dump_info */
/* Demangled: fg_dump_info */
int fg_dump_info(void);

/* Symbol: qmax_t_0ma_tb1 */
/* Demangled: qmax_t_0ma_tb1 */
extern void* qmax_t_0ma_tb1;

/* Symbol: get_disable_nafg */
/* Demangled: get_disable_nafg */
int get_disable_nafg(void);

/* Symbol: get_fg_zcv */
/* Demangled: get_fg_zcv */
int get_fg_zcv(void);

/* Symbol: Set_fg_v_d0_by_soc */
/* Demangled: Set_fg_v_d0_by_soc */
int Set_fg_v_d0_by_soc(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: fg_reset_nvram_handler */
/* Demangled: fg_reset_nvram_handler */
int fg_reset_nvram_handler(void);

/* Symbol: D_Remain */
/* Demangled: D_Remain */
extern void* D_Remain;

/* Symbol: OCV_to_mah */
/* Demangled: OCV_to_mah */
int OCV_to_mah(void);

/* Symbol: cust_pseudo100 */
/* Demangled: cust_pseudo100 */
extern void* cust_pseudo100;

/* Symbol: re_charging_enable */
/* Demangled: re_charging_enable */
extern void* re_charging_enable;

/* Symbol: daemon_fg_vbat2_l_int_handler */
/* Demangled: daemon_fg_vbat2_l_int_handler */
int daemon_fg_vbat2_l_int_handler(void);

/* Symbol: dod_init_get_old_data */
/* Demangled: dod_init_get_old_data */
int dod_init_get_old_data(void);

/* Symbol: dod_init_relocation_flow */
/* Demangled: dod_init_relocation_flow */
int dod_init_relocation_flow(void);

/* Symbol: fg_bat_int2_lt_en */
/* Demangled: fg_bat_int2_lt_en */
extern void* fg_bat_int2_lt_en;

/* Symbol: fg_dump_boot_info */
/* Demangled: fg_dump_boot_info */
int fg_dump_boot_info(void);

/* Symbol: fg_enable_fg_bat_int2_lt */
/* Demangled: fg_enable_fg_bat_int2_lt */
int fg_enable_fg_bat_int2_lt(void);

/* Symbol: get_aging_factor_cust */
/* Demangled: get_aging_factor_cust */
int get_aging_factor_cust(void);

/* Symbol: get_ptim_i */
/* Demangled: get_ptim_i */
int get_ptim_i(void);

/* Symbol: fg_dc_ratio */
/* Demangled: fg_dc_ratio */
int fg_dc_ratio(void);

/* Symbol: is_nvram_write_success */
/* Demangled: is_nvram_write_success */
int is_nvram_write_success(void);

/* Symbol: shutdown_hl_zcv */
/* Demangled: shutdown_hl_zcv */
extern void* shutdown_hl_zcv;

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: fglog_ctrl */
/* Demangled: fglog_ctrl */
extern void* fglog_ctrl;

/* Symbol: get_is_hwocv_unreliable */
/* Demangled: get_is_hwocv_unreliable */
int get_is_hwocv_unreliable(void);

/* Symbol: set_nag_zcv */
/* Demangled: set_nag_zcv */
int set_nag_zcv(void);

/* Symbol: fg_full_tracking_en */
/* Demangled: fg_full_tracking_en */
int fg_full_tracking_en(void);

/* Symbol: fg_set_int1 */
/* Demangled: fg_set_int1 */
int fg_set_int1(void);

/* Symbol: fg_update_dc_ratio */
/* Demangled: fg_update_dc_ratio */
int fg_update_dc_ratio(void);

/* Symbol: get_batterypseudo1_auto */
/* Demangled: get_batterypseudo1_auto */
int get_batterypseudo1_auto(void);

/* Symbol: AG4_UT */
/* Demangled: AG4_UT */
extern void* AG4_UT;

/* Symbol: fg_set_int2 */
/* Demangled: fg_set_int2 */
int fg_set_int2(void);

/* Symbol: fg_uisoc_init_update */
/* Demangled: fg_uisoc_init_update */
int fg_uisoc_init_update(void);

/* Symbol: g_full_tracking_bat_int2_lt_count */
/* Demangled: g_full_tracking_bat_int2_lt_count */
extern void* g_full_tracking_bat_int2_lt_count;

/* Symbol: getdata_error_log */
/* Demangled: getdata_error_log */
extern void* getdata_error_log;

/* Symbol: qmax_t_0ma_h_tb1 */
/* Demangled: qmax_t_0ma_h_tb1 */
extern void* qmax_t_0ma_h_tb1;

/* Symbol: fglog_get_level */
/* Demangled: fglog_get_level */
int fglog_get_level(void);

/* Symbol: soc_100 */
/* Demangled: soc_100 */
extern void* soc_100;

/* Symbol: fg_charger_out_int_handler */
/* Demangled: fg_charger_out_int_handler */
int fg_charger_out_int_handler(void);

/* Symbol: set_vbat2_intr */
/* Demangled: set_vbat2_intr */
int set_vbat2_intr(void);

/* Symbol: full_tracking_bat_int2_lt */
/* Demangled: full_tracking_bat_int2_lt */
extern void* full_tracking_bat_int2_lt;

/* Symbol: save_old_data */
/* Demangled: save_old_data */
int save_old_data(void);

/* Symbol: get_d0_c_soc_cust */
/* Demangled: get_d0_c_soc_cust */
int get_d0_c_soc_cust(void);

/* Symbol: fg_update_c_dod */
/* Demangled: fg_update_c_dod */
int fg_update_c_dod(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: fglog_exit */
/* Demangled: fglog_exit */
int fglog_exit(void);

/* Symbol: fglog_vwrite_nl */
/* Demangled: fglog_vwrite_nl */
int fglog_vwrite_nl(void);

/* Symbol: fg_time_handler */
/* Demangled: fg_time_handler */
int fg_time_handler(void);

/* Symbol: is_kpoc */
/* Demangled: is_kpoc */
int is_kpoc(void);

/* Symbol: ag_center */
/* Demangled: ag_center */
extern void* ag_center;

/* Symbol: b_fg_get_fail */
/* Demangled: b_fg_get_fail */
extern void* b_fg_get_fail;

/* Symbol: b_set_fail */
/* Demangled: b_set_fail */
extern void* b_set_fail;

/* Symbol: fg_dump_int_threshold */
/* Demangled: fg_dump_int_threshold */
int fg_dump_int_threshold(void);

/* Symbol: ptable */
/* Demangled: ptable */
extern void* ptable;

/* Symbol: daemon_fg_zcv_int_handler */
/* Demangled: daemon_fg_zcv_int_handler */
int daemon_fg_zcv_int_handler(void);

/* Symbol: fg_dump_table */
/* Demangled: fg_dump_table */
int fg_dump_table(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: get_cust_data_from_kernel */
/* Demangled: get_cust_data_from_kernel */
int get_cust_data_from_kernel(void);

/* Symbol: dod_init_path13 */
/* Demangled: dod_init_path13 */
int dod_init_path13(void);

/* Symbol: fg_bat_tmp_gap */
/* Demangled: fg_bat_tmp_gap */
extern void* fg_bat_tmp_gap;

/* Symbol: fg_update_v_dod */
/* Demangled: fg_update_v_dod */
int fg_update_v_dod(void);

/* Symbol: get_fg_sw_car */
/* Demangled: get_fg_sw_car */
int get_fg_sw_car(void);

/* Symbol: fg_set_daemon_alive */
/* Demangled: fg_set_daemon_alive */
int fg_set_daemon_alive(void);

/* Symbol: T_table */
/* Demangled: T_table */
extern void* T_table;

/* Symbol: daemon_interpolation */
/* Demangled: daemon_interpolation */
int daemon_interpolation(void);

/* Symbol: dod_init_path14 */
/* Demangled: dod_init_path14 */
int dod_init_path14(void);

/* Symbol: fg_construct_battery_profile */
/* Demangled: fg_construct_battery_profile */
int fg_construct_battery_profile(void);

/* Symbol: zcv_car_1_d0 */
/* Demangled: zcv_car_1_d0 */
extern void* zcv_car_1_d0;

/* Symbol: bmd_ctrl_cmd_to_kernel */
/* Demangled: bmd_ctrl_cmd_to_kernel */
int bmd_ctrl_cmd_to_kernel(void);

/* Symbol: count_aq1_times */
/* Demangled: count_aq1_times */
extern void* count_aq1_times;

/* Symbol: fg_update_quse */
/* Demangled: fg_update_quse */
int fg_update_quse(void);

/* Symbol: gvariable */
/* Demangled: gvariable */
extern void* gvariable;

/* Symbol: get_is_bat_exist */
/* Demangled: get_is_bat_exist */
int get_is_bat_exist(void);

/* Symbol: T_table_c */
/* Demangled: T_table_c */
extern void* T_table_c;

/* Symbol: aq2_flag */
/* Demangled: aq2_flag */
extern void* aq2_flag;

/* Symbol: dod_init_path16 */
/* Demangled: dod_init_path16 */
int dod_init_path16(void);

/* Symbol: init_avg_battemp */
/* Demangled: init_avg_battemp */
int init_avg_battemp(void);

/* Symbol: battery_meter_daemon_ctrl */
/* Demangled: battery_meter_daemon_ctrl */
extern void* battery_meter_daemon_ctrl;

/* Symbol: battery_meter_daemon_ctrl_ext */
/* Demangled: battery_meter_daemon_ctrl_ext */
extern void* battery_meter_daemon_ctrl_ext;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: get_fg_sw_car_dc_ratio */
/* Demangled: get_fg_sw_car_dc_ratio */
int get_fg_sw_car_dc_ratio(void);

/* Symbol: qmax_t_0ma_h */
/* Demangled: qmax_t_0ma_h */
extern void* qmax_t_0ma_h;

/* Symbol: fglog_vwrite */
/* Demangled: fglog_vwrite */
int fglog_vwrite(void);

/* Symbol: get_init_flow_done */
/* Demangled: get_init_flow_done */
int get_init_flow_done(void);

/* Symbol: set_con0_soc */
/* Demangled: set_con0_soc */
int set_con0_soc(void);

/* Symbol: g_sw_fg_versionID1 */
/* Demangled: g_sw_fg_versionID1 */
extern void* g_sw_fg_versionID1;

/* Symbol: fg_iavg_handler */
/* Demangled: fg_iavg_handler */
int fg_iavg_handler(void);

/* Symbol: get_uisoc_cust */
/* Demangled: get_uisoc_cust */
int get_uisoc_cust(void);

/* Symbol: DOD_to_OCV */
/* Demangled: DOD_to_OCV */
int DOD_to_OCV(void);

/* Symbol: g_sw_fg_versionID2 */
/* Demangled: g_sw_fg_versionID2 */
extern void* g_sw_fg_versionID2;

/* Symbol: fglog_set_level */
/* Demangled: fglog_set_level */
int fglog_set_level(void);

/* Symbol: get_nvram_fail_status */
/* Demangled: get_nvram_fail_status */
int get_nvram_fail_status(void);

/* Symbol: enable_low_temp_mode */
/* Demangled: enable_low_temp_mode */
extern void* enable_low_temp_mode;

/* Symbol: enable_fg_vbat2_h_int */
/* Demangled: enable_fg_vbat2_h_int */
int enable_fg_vbat2_h_int(void);

/* Symbol: cust_g_pon_iboot_temp */
/* Demangled: cust_g_pon_iboot_temp */
extern void* cust_g_pon_iboot_temp;

/* Symbol: ptim_i */
/* Demangled: ptim_i */
extern void* ptim_i;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: fg_adc_reset_soff */
/* Demangled: fg_adc_reset_soff */
int fg_adc_reset_soff(void);

/* Symbol: get_kernel_cmd */
/* Demangled: get_kernel_cmd */
int get_kernel_cmd(void);

/* Symbol: AG3_UT */
/* Demangled: AG3_UT */
extern void* AG3_UT;

/* Symbol: dcr_car_v */
/* Demangled: dcr_car_v */
extern void* dcr_car_v;

/* Symbol: read_old_data */
/* Demangled: read_old_data */
int read_old_data(void);

/* Symbol: fg_set_cust_data_dump */
/* Demangled: fg_set_cust_data_dump */
int fg_set_cust_data_dump(void);

/* Symbol: g_pon_iboot_temp */
/* Demangled: g_pon_iboot_temp */
extern void* g_pon_iboot_temp;

/* Symbol: quse_wo_lf */
/* Demangled: quse_wo_lf */
extern void* quse_wo_lf;

/* Symbol: fg_charger_in_int_handler */
/* Demangled: fg_charger_in_int_handler */
int fg_charger_in_int_handler(void);

/* Symbol: get_ptim_vbat */
/* Demangled: get_ptim_vbat */
int get_ptim_vbat(void);

/* Symbol: save_health_log */
/* Demangled: save_health_log */
int save_health_log(void);

/* Symbol: daemon_fg_bat_int2_h_handler */
/* Demangled: daemon_fg_bat_int2_h_handler */
int daemon_fg_bat_int2_h_handler(void);

/* Symbol: aging_source */
/* Demangled: aging_source */
extern void* aging_source;

/* Symbol: car */
/* Demangled: car */
extern void* car;

/* Symbol: dcr_start */
/* Demangled: dcr_start */
extern void* dcr_start;

/* Symbol: is_battery_cycle_reset */
/* Demangled: is_battery_cycle_reset */
int is_battery_cycle_reset(void);

/* Symbol: set_fg_bat_tmp_c_gap */
/* Demangled: set_fg_bat_tmp_c_gap */
int set_fg_bat_tmp_c_gap(void);

/* Symbol: fg_construct_table_by_temp */
/* Demangled: fg_construct_table_by_temp */
int fg_construct_table_by_temp(void);

/* Symbol: lt_gap */
/* Demangled: lt_gap */
extern void* lt_gap;

/* Symbol: fg_charging_full_int_handler */
/* Demangled: fg_charging_full_int_handler */
int fg_charging_full_int_handler(void);

/* Symbol: set_car_tune_value */
/* Demangled: set_car_tune_value */
int set_car_tune_value(void);

/* Symbol: set_fg_vbat2_h_th */
/* Demangled: set_fg_vbat2_h_th */
int set_fg_vbat2_h_th(void);

/* Symbol: cust_data */
/* Demangled: cust_data */
extern void* cust_data;

/* Symbol: dlpt_shutdown_flag */
/* Demangled: dlpt_shutdown_flag */
extern void* dlpt_shutdown_flag;

/* Symbol: dod_init_result */
/* Demangled: dod_init_result */
int dod_init_result(void);

/* Symbol: fg_update_fg_bat_int2_ht */
/* Demangled: fg_update_fg_bat_int2_ht */
int fg_update_fg_bat_int2_ht(void);

/* Symbol: old_data */
/* Demangled: old_data */
extern void* old_data;

/* Symbol: get_hw_info */
/* Demangled: get_hw_info */
int get_hw_info(void);

/* Symbol: fg_find_ui_low_limit */
/* Demangled: fg_find_ui_low_limit */
int fg_find_ui_low_limit(void);

/* Symbol: flag */
/* Demangled: flag */
extern void* flag;

/* Symbol: pdata */
/* Demangled: pdata */
extern void* pdata;

/* Symbol: set_kernel_init_vbat */
/* Demangled: set_kernel_init_vbat */
int set_kernel_init_vbat(void);

/* Symbol: aging_tempture */
/* Demangled: aging_tempture */
extern void* aging_tempture;

/* Symbol: fg_get_profile */
/* Demangled: fg_get_profile */
int fg_get_profile(void);

/* Symbol: fg_update_nag_c_dltv_thr */
/* Demangled: fg_update_nag_c_dltv_thr */
int fg_update_nag_c_dltv_thr(void);

/* Symbol: fg_update_fg_bat_tmp_threshold */
/* Demangled: fg_update_fg_bat_tmp_threshold */
int fg_update_fg_bat_tmp_threshold(void);

/* Symbol: loading_factor1 */
/* Demangled: loading_factor1 */
extern void* loading_factor1;

/* Symbol: D_Remain_Pseudo */
/* Demangled: D_Remain_Pseudo */
extern void* D_Remain_Pseudo;

/* Symbol: SOC_to_OCV */
/* Demangled: SOC_to_OCV */
int SOC_to_OCV(void);

/* Symbol: Set_fg_c_d0_by_ocv */
/* Demangled: Set_fg_c_d0_by_ocv */
int Set_fg_c_d0_by_ocv(void);

/* Symbol: aq3_flag */
/* Demangled: aq3_flag */
extern void* aq3_flag;

/* Symbol: dod_init_fetch_default_old_data */
/* Demangled: dod_init_fetch_default_old_data */
int dod_init_fetch_default_old_data(void);

/* Symbol: fg_construct_battery_profile_by_vboot */
/* Demangled: fg_construct_battery_profile_by_vboot */
int fg_construct_battery_profile_by_vboot(void);

/* Symbol: loading_factor2 */
/* Demangled: loading_factor2 */
extern void* loading_factor2;

/* Symbol: get_fg_sw_car_nafg_c_dltv */
/* Demangled: get_fg_sw_car_nafg_c_dltv */
int get_fg_sw_car_nafg_c_dltv(void);

/* Symbol: get_sw_ocv */
/* Demangled: get_sw_ocv */
int get_sw_ocv(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: fg_pthread_mutex_unlock */
/* Demangled: fg_pthread_mutex_unlock */
int fg_pthread_mutex_unlock(void);

/* Symbol: ag_data */
/* Demangled: ag_data */
extern void* ag_data;

/* Symbol: fg_get_Q_max */
/* Demangled: fg_get_Q_max */
int fg_get_Q_max(void);

/* Symbol: fglog_init */
/* Demangled: fglog_init */
int fglog_init(void);

/* Symbol: AG2_UT */
/* Demangled: AG2_UT */
extern void* AG2_UT;

/* Symbol: fg_get_Q_max_high_current */
/* Demangled: fg_get_Q_max_high_current */
int fg_get_Q_max_high_current(void);

/* Symbol: g_zcv_data */
/* Demangled: g_zcv_data */
extern void* g_zcv_data;

/* Symbol: fg_daemon_init */
/* Demangled: fg_daemon_init */
int fg_daemon_init(void);

/* Symbol: get_is_bat_charging */
/* Demangled: get_is_bat_charging */
int get_is_bat_charging(void);

/* Symbol: set_int_data_verify */
/* Demangled: set_int_data_verify */
int set_int_data_verify(void);

/* Symbol: set_fg_quse */
/* Demangled: set_fg_quse */
int set_fg_quse(void);

/* Symbol: libfgauge_setup */
/* Demangled: libfgauge_setup */
int libfgauge_setup(void);

/* Symbol: bat_cycle */
/* Demangled: bat_cycle */
extern void* bat_cycle;

/* Symbol: cust_pseudo1_h */
/* Demangled: cust_pseudo1_h */
extern void* cust_pseudo1_h;

/* Symbol: fg_loading_factor_compensate */
/* Demangled: fg_loading_factor_compensate */
int fg_loading_factor_compensate(void);

/* Symbol: dlpt_sd_handler */
/* Demangled: dlpt_sd_handler */
int dlpt_sd_handler(void);

/* Symbol: get_charger_exist */
/* Demangled: get_charger_exist */
int get_charger_exist(void);

/* Symbol: get_int_data_verify */
/* Demangled: get_int_data_verify */
int get_int_data_verify(void);

/* Symbol: t_d0 */
/* Demangled: t_d0 */
extern void* t_d0;

/* Symbol: daemon_get_rac */
/* Demangled: daemon_get_rac */
int daemon_get_rac(void);

/* Symbol: set_is_fg_initialized */
/* Demangled: set_is_fg_initialized */
int set_is_fg_initialized(void);

/* Symbol: fg_update_fg_bat_int1_threshold */
/* Demangled: fg_update_fg_bat_int1_threshold */
int fg_update_fg_bat_int1_threshold(void);

/* Symbol: fg_temp_int_handler */
/* Demangled: fg_temp_int_handler */
int fg_temp_int_handler(void);

/* Symbol: D_Remain_Int */
/* Demangled: D_Remain_Int */
extern void* D_Remain_Int;

/* Symbol: prepare_intr_health_data */
/* Demangled: prepare_intr_health_data */
int prepare_intr_health_data(void);

/* Symbol: get_d0_v_soc_cust */
/* Demangled: get_d0_v_soc_cust */
int get_d0_v_soc_cust(void);

/* Symbol: get_fg_current_avg_valid */
/* Demangled: get_fg_current_avg_valid */
int get_fg_current_avg_valid(void);

/* Symbol: cust_qmax_t_Nma_h */
/* Demangled: cust_qmax_t_Nma_h */
extern void* cust_qmax_t_Nma_h;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: get_daemon_log_level */
/* Demangled: get_daemon_log_level */
int get_daemon_log_level(void);

/* Symbol: fg_bat_tmp_c_gap */
/* Demangled: fg_bat_tmp_c_gap */
extern void* fg_bat_tmp_c_gap;

/* Symbol: fg_read_r_bat_by_d */
/* Demangled: fg_read_r_bat_by_d */
int fg_read_r_bat_by_d(void);

/* Symbol: fg_update_fg_bat_int2_lt */
/* Demangled: fg_update_fg_bat_int2_lt */
int fg_update_fg_bat_int2_lt(void);

/* Symbol: get_temperature */
/* Demangled: get_temperature */
int get_temperature(void);

/* Symbol: wait_kernel_notify */
/* Demangled: wait_kernel_notify */
int wait_kernel_notify(void);

/* Symbol: C_Remain_Pseudo */
/* Demangled: C_Remain_Pseudo */
extern void* C_Remain_Pseudo;

/* Symbol: dump_old_data */
/* Demangled: dump_old_data */
int dump_old_data(void);

/* Symbol: get_charger_status */
/* Demangled: get_charger_status */
int get_charger_status(void);

/* Symbol: get_fg_sw_car_nafg_dltv */
/* Demangled: get_fg_sw_car_nafg_dltv */
int get_fg_sw_car_nafg_dltv(void);

/* Symbol: fg_read_charging_r_bat_by_d */
/* Demangled: fg_read_charging_r_bat_by_d */
int fg_read_charging_r_bat_by_d(void);

/* Symbol: init_dod_calculate_gap */
/* Demangled: init_dod_calculate_gap */
int init_dod_calculate_gap(void);

/* Symbol: set_aging_initdata */
/* Demangled: set_aging_initdata */
int set_aging_initdata(void);

/* Symbol: get_fg_hw_car */
/* Demangled: get_fg_hw_car */
int get_fg_hw_car(void);

/* Symbol: aq4_flag */
/* Demangled: aq4_flag */
extern void* aq4_flag;

/* Symbol: disable_nafg */
/* Demangled: disable_nafg */
extern void* disable_nafg;

/* Symbol: fg_error_calibration2 */
/* Demangled: fg_error_calibration2 */
int fg_error_calibration2(void);

/* Symbol: mah_to_OCV */
/* Demangled: mah_to_OCV */
int mah_to_OCV(void);

/* Symbol: update_car_tune_value */
/* Demangled: update_car_tune_value */
int update_car_tune_value(void);

/* Symbol: get_is_bat_plugout */
/* Demangled: get_is_bat_plugout */
int get_is_bat_plugout(void);

/* Symbol: set_fg_bat_int1_gap */
/* Demangled: set_fg_bat_int1_gap */
int set_fg_bat_int1_gap(void);

/* Symbol: set_fg_bat_int2_lt_gap */
/* Demangled: set_fg_bat_int2_lt_gap */
int set_fg_bat_int2_lt_gap(void);

/* Symbol: set_kernel_soc */
/* Demangled: set_kernel_soc */
int set_kernel_soc(void);

/* Symbol: SOC_to_OCV_c */
/* Demangled: SOC_to_OCV_c */
int SOC_to_OCV_c(void);

/* Symbol: pre_low_tracking_enable */
/* Demangled: pre_low_tracking_enable */
extern void* pre_low_tracking_enable;

/* Symbol: daemon_get_shutdown_cond */
/* Demangled: daemon_get_shutdown_cond */
int daemon_get_shutdown_cond(void);

/* Symbol: AG1_UT */
/* Demangled: AG1_UT */
extern void* AG1_UT;

/* Symbol: aging_factor_cust */
/* Demangled: aging_factor_cust */
extern void* aging_factor_cust;

/* Symbol: bat_cycle_threshold */
/* Demangled: bat_cycle_threshold */
extern void* bat_cycle_threshold;

/* Symbol: cus_data_save */
/* Demangled: cus_data_save */
extern void* cus_data_save;

/* Symbol: write_old_data */
/* Demangled: write_old_data */
int write_old_data(void);

/* Symbol: get_rtc_two_sec_reboot */
/* Demangled: get_rtc_two_sec_reboot */
int get_rtc_two_sec_reboot(void);

/* Symbol: set_fg_reset_rtc_status */
/* Demangled: set_fg_reset_rtc_status */
int set_fg_reset_rtc_status(void);

/* Symbol: delta_car_bat0 */
/* Demangled: delta_car_bat0 */
extern void* delta_car_bat0;

/* Symbol: diff_soc_setting_ht */
/* Demangled: diff_soc_setting_ht */
extern void* diff_soc_setting_ht;

/* Symbol: keep_100 */
/* Demangled: keep_100 */
extern void* keep_100;

/* Symbol: enable_fg_vbat2_l_int */
/* Demangled: enable_fg_vbat2_l_int */
int enable_fg_vbat2_l_int(void);

/* Symbol: set_fg_time */
/* Demangled: set_fg_time */
int set_fg_time(void);

/* Symbol: fg_vbat2_ht */
/* Demangled: fg_vbat2_ht */
extern void* fg_vbat2_ht;

/* Symbol: ptim_vbat */
/* Demangled: ptim_vbat */
extern void* ptim_vbat;

/* Symbol: record_car_aq1 */
/* Demangled: record_car_aq1 */
extern void* record_car_aq1;

/* Symbol: record_car_aq2 */
/* Demangled: record_car_aq2 */
extern void* record_car_aq2;

/* Symbol: fglog_update_level */
/* Demangled: fglog_update_level */
int fglog_update_level(void);

/* Symbol: prev_car_bat0 */
/* Demangled: prev_car_bat0 */
extern void* prev_car_bat0;

/* Symbol: fglog_write */
/* Demangled: fglog_write */
int fglog_write(void);

/* Symbol: g_fgd_mutex */
/* Demangled: g_fgd_mutex */
extern void* g_fgd_mutex;

/* Symbol: set_nag_c_dltv_thr */
/* Demangled: set_nag_c_dltv_thr */
int set_nag_c_dltv_thr(void);

/* Symbol: cal_avg_battemp */
/* Demangled: cal_avg_battemp */
int cal_avg_battemp(void);

/* Symbol: record_car_aq4 */
/* Demangled: record_car_aq4 */
extern void* record_car_aq4;

/* Symbol: dod_init */
/* Demangled: dod_init */
int dod_init(void);

/* Symbol: dod_init_ori_flow */
/* Demangled: dod_init_ori_flow */
int dod_init_ori_flow(void);

/* Symbol: fg_compensate_battery_voltage_from_low */
/* Demangled: fg_compensate_battery_voltage_from_low */
int fg_compensate_battery_voltage_from_low(void);

/* Symbol: record_car_aq5 */
/* Demangled: record_car_aq5 */
extern void* record_car_aq5;

/* Symbol: commu_INT */
/* Demangled: commu_INT */
int commu_INT(void);

/* Symbol: fg_bat_int1_handler */
/* Demangled: fg_bat_int1_handler */
int fg_bat_int1_handler(void);

/* Symbol: Set_fg_c_d0_by_soc */
/* Demangled: Set_fg_c_d0_by_soc */
int Set_fg_c_d0_by_soc(void);

/* Symbol: cust_temp_table */
/* Demangled: cust_temp_table */
extern void* cust_temp_table;

/* Symbol: dcr_fg_car1 */
/* Demangled: dcr_fg_car1 */
extern void* dcr_fg_car1;

/* Symbol: dcr_ratio_5 */
/* Demangled: dcr_ratio_5 */
extern void* dcr_ratio_5;

/* Symbol: dod_init_log */
/* Demangled: dod_init_log */
extern void* dod_init_log;

/* Symbol: record_car_aq6 */
/* Demangled: record_car_aq6 */
extern void* record_car_aq6;

/* Symbol: init_socket */
/* Demangled: init_socket */
int init_socket(void);

/* Symbol: daemon_fg_vbat2_h_int_handler */
/* Demangled: daemon_fg_vbat2_h_int_handler */
int daemon_fg_vbat2_h_int_handler(void);

/* Symbol: get_is_fg_initialized */
/* Demangled: get_is_fg_initialized */
int get_is_fg_initialized(void);

/* Symbol: get_vbat */
/* Demangled: get_vbat */
int get_vbat(void);

/* Symbol: set_fg_dc_ratio */
/* Demangled: set_fg_dc_ratio */
int set_fg_dc_ratio(void);

/* Symbol: set_sw_ocv */
/* Demangled: set_sw_ocv */
int set_sw_ocv(void);

/* Symbol: b_get_fail */
/* Demangled: b_get_fail */
extern void* b_get_fail;

/* Symbol: dcr_fg_car2 */
/* Demangled: dcr_fg_car2 */
extern void* dcr_fg_car2;

/* Symbol: qmax_t_Nma_h */
/* Demangled: qmax_t_Nma_h */
extern void* qmax_t_Nma_h;

/* Symbol: daemon_set_shutdown_cond */
/* Demangled: daemon_set_shutdown_cond */
int daemon_set_shutdown_cond(void);

/* Symbol: set_one_percent_timer */
/* Demangled: set_one_percent_timer */
int set_one_percent_timer(void);

/* Symbol: boot_data */
/* Demangled: boot_data */
extern void* boot_data;

/* Symbol: fg_pthread_mutex_lock */
/* Demangled: fg_pthread_mutex_lock */
int fg_pthread_mutex_lock(void);

/* Symbol: start_nl_thread */
/* Demangled: start_nl_thread */
int start_nl_thread(void);

/* Symbol: get_rtc_invalid */
/* Demangled: get_rtc_invalid */
int get_rtc_invalid(void);

/* Symbol: get_shutdown_duration_time */
/* Demangled: get_shutdown_duration_time */
int get_shutdown_duration_time(void);

/* Symbol: set_iavg_intr */
/* Demangled: set_iavg_intr */
int set_iavg_intr(void);

/* Symbol: C_Remain */
/* Demangled: C_Remain */
extern void* C_Remain;

/* Symbol: OCV_to_SOC */
/* Demangled: OCV_to_SOC */
int OCV_to_SOC(void);

/* Symbol: fg_read_r_bat_by_v */
/* Demangled: fg_read_r_bat_by_v */
int fg_read_r_bat_by_v(void);

/* Symbol: quse */
/* Demangled: quse */
extern void* quse;

/* Symbol: fg_bat_plugout_handler */
/* Demangled: fg_bat_plugout_handler */
int fg_bat_plugout_handler(void);

/* Symbol: fg_shutdown_int_handler */
/* Demangled: fg_shutdown_int_handler */
int fg_shutdown_int_handler(void);

/* Symbol: fg_set_cust_data */
/* Demangled: fg_set_cust_data */
int fg_set_cust_data(void);

/* Symbol: fg_update_fg_bat_tmp_threshold_c */
/* Demangled: fg_update_fg_bat_tmp_threshold_c */
int fg_update_fg_bat_tmp_threshold_c(void);

/* Symbol: qmax_t_aging */
/* Demangled: qmax_t_aging */
extern void* qmax_t_aging;

/* Symbol: enable_fg_bat_int2_ht */
/* Demangled: enable_fg_bat_int2_ht */
int enable_fg_bat_int2_ht(void);

/* Symbol: aq5_flag */
/* Demangled: aq5_flag */
extern void* aq5_flag;

/* Symbol: g_pmic_m_vol_temp */
/* Demangled: g_pmic_m_vol_temp */
extern void* g_pmic_m_vol_temp;

/* Symbol: g_qmax_sys_vol_temp */
/* Demangled: g_qmax_sys_vol_temp */
extern void* g_qmax_sys_vol_temp;

/* Symbol: fgauge_version_check */
/* Demangled: fgauge_version_check */
int fgauge_version_check(void);

/* Symbol: fg_check_temperature_order */
/* Demangled: fg_check_temperature_order */
int fg_check_temperature_order(void);

/* Symbol: fg_set_soc_by_vc_mode */
/* Demangled: fg_set_soc_by_vc_mode */
int fg_set_soc_by_vc_mode(void);

/* Symbol: get_int_data */
/* Demangled: get_int_data */
int get_int_data(void);

/* Symbol: ht_gap */
/* Demangled: ht_gap */
extern void* ht_gap;

/* Symbol: fg_int_end_flow */
/* Demangled: fg_int_end_flow */
int fg_int_end_flow(void);

/* Symbol: aging_factor */
/* Demangled: aging_factor */
extern void* aging_factor;

/* Symbol: b_fg_set_fail */
/* Demangled: b_fg_set_fail */
extern void* b_fg_set_fail;

/* Symbol: dod_init_embedded_battery_flow */
/* Demangled: dod_init_embedded_battery_flow */
int dod_init_embedded_battery_flow(void);

/* Symbol: is_bat_charging */
/* Demangled: is_bat_charging */
extern void* is_bat_charging;

/* Symbol: save_aging_center */
/* Demangled: save_aging_center */
int save_aging_center(void);

/* Symbol: get_hw_ocv */
/* Demangled: get_hw_ocv */
int get_hw_ocv(void);

/* Symbol: set_fg_bat_tmp_gap */
/* Demangled: set_fg_bat_tmp_gap */
int set_fg_bat_tmp_gap(void);

/* Symbol: read_car_tune_data */
/* Demangled: read_car_tune_data */
int read_car_tune_data(void);

/* Symbol: save_aging_log */
/* Demangled: save_aging_log */
int save_aging_log(void);

/* Symbol: d_aq1 */
/* Demangled: d_aq1 */
extern void* d_aq1;

/* Symbol: dod_init_apply_old_data */
/* Demangled: dod_init_apply_old_data */
int dod_init_apply_old_data(void);

/* Symbol: get_nafg_vbat */
/* Demangled: get_nafg_vbat */
int get_nafg_vbat(void);

/* Symbol: dod_init_three_ocv_comparing */
/* Demangled: dod_init_three_ocv_comparing */
int dod_init_three_ocv_comparing(void);

/* Symbol: imix_error_calibration */
/* Demangled: imix_error_calibration */
int imix_error_calibration(void);

/* Symbol: qmax_t_0ma */
/* Demangled: qmax_t_0ma */
extern void* qmax_t_0ma;

/* Symbol: zcv_car_1 */
/* Demangled: zcv_car_1 */
extern void* zcv_car_1;

/* Symbol: get_rtc_ui_soc */
/* Demangled: get_rtc_ui_soc */
int get_rtc_ui_soc(void);

/* Symbol: d_aq4 */
/* Demangled: d_aq4 */
extern void* d_aq4;

/* Symbol: diff_soc_setting_lt */
/* Demangled: diff_soc_setting_lt */
extern void* diff_soc_setting_lt;

/* Symbol: rdc_a */
/* Demangled: rdc_a */
extern void* rdc_a;

/* Symbol: zcv_car_2 */
/* Demangled: zcv_car_2 */
extern void* zcv_car_2;

/* Symbol: set_zcv_intr */
/* Demangled: set_zcv_intr */
int set_zcv_intr(void);

/* Symbol: d_aq5 */
/* Demangled: d_aq5 */
extern void* d_aq5;

/* Symbol: fg_find_ui_full_limit */
/* Demangled: fg_find_ui_full_limit */
int fg_find_ui_full_limit(void);

/* Symbol: fg_read_v_by_d */
/* Demangled: fg_read_v_by_d */
int fg_read_v_by_d(void);

/* Symbol: fg_ui_low_lim_time */
/* Demangled: fg_ui_low_lim_time */
int fg_ui_low_lim_time(void);

/* Symbol: fg_vbat2_lt */
/* Demangled: fg_vbat2_lt */
extern void* fg_vbat2_lt;

__END_DECLS

#endif /* BEGONIA_RE_LIBFGAUGE_GM30_H */
