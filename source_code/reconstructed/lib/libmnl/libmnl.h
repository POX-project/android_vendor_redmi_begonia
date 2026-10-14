/*
 * Reverse-Engineered ABI Specification for: libmnl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmnl.so
 */

#ifndef BEGONIA_RE_LIBMNL_H
#define BEGONIA_RE_LIBMNL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: mtk_agps_agent_xepo_file_exsit */
/* Demangled: mtk_agps_agent_xepo_file_exsit */
int mtk_agps_agent_xepo_file_exsit(void);

/* Symbol: mtk_agps_get_param */
/* Demangled: mtk_agps_get_param */
int mtk_agps_get_param(void);

/* Symbol: mtk_gnss_get_gps_time_infor */
/* Demangled: mtk_gnss_get_gps_time_infor */
int mtk_gnss_get_gps_time_infor(void);

/* Symbol: mtk_gps_tsx_xvt */
/* Demangled: mtk_gps_tsx_xvt */
int mtk_gps_tsx_xvt(void);

/* Symbol: mtk_gnss_get_navigation_event */
/* Demangled: mtk_gnss_get_navigation_event */
int mtk_gnss_get_navigation_event(void);

/* Symbol: mtk_gps_get_agps_response */
/* Demangled: mtk_gps_get_agps_response */
int mtk_gps_get_agps_response(void);

/* Symbol: mtk_gps_frame_sync_ftime_diff */
/* Demangled: mtk_gps_frame_sync_ftime_diff */
int mtk_gps_frame_sync_ftime_diff(void);

/* Symbol: mtk_gps_clear_almanac */
/* Demangled: mtk_gps_clear_almanac */
int mtk_gps_clear_almanac(void);

/* Symbol: mtk_gps_agps_msg_uninit */
/* Demangled: mtk_gps_agps_msg_uninit */
int mtk_gps_agps_msg_uninit(void);

/* Symbol: MTK_Bee_Receive_New_Eph_Host_Ready */
/* Demangled: MTK_Bee_Receive_New_Eph_Host_Ready */
int MTK_Bee_Receive_New_Eph_Host_Ready(void);

/* Symbol: mtk_gps_get_next_delta */
/* Demangled: mtk_gps_get_next_delta */
int mtk_gps_get_next_delta(void);

/* Symbol: mtk_agps_agent_fsm_idle_proc */
/* Demangled: mtk_agps_agent_fsm_idle_proc */
int mtk_agps_agent_fsm_idle_proc(void);

/* Symbol: mtk_gps_set_agps_data */
/* Demangled: mtk_gps_set_agps_data */
int mtk_gps_set_agps_data(void);

/* Symbol: mtk_agps_agent_qepo_file_verify */
/* Demangled: mtk_agps_agent_qepo_file_verify */
int mtk_agps_agent_qepo_file_verify(void);

/* Symbol: mtk_gps_AscToHex */
/* Demangled: mtk_gps_AscToHex */
int mtk_gps_AscToHex(void);

/* Symbol: mtk_gps_get_gps_signal_idx */
/* Demangled: mtk_gps_get_gps_signal_idx */
int mtk_gps_get_gps_signal_idx(void);

/* Symbol: mtk_gps_bin_check_queue_empty_l5 */
/* Demangled: mtk_gps_bin_check_queue_empty_l5 */
int mtk_gps_bin_check_queue_empty_l5(void);

/* Symbol: mtk_agps_agent_epo_period_end_gps_time */
/* Demangled: mtk_agps_agent_epo_period_end_gps_time */
int mtk_agps_agent_epo_period_end_gps_time(void);

/* Symbol: mtk_agps_agent_xepo_proc */
/* Demangled: mtk_agps_agent_xepo_proc */
int mtk_agps_agent_xepo_proc(void);

/* Symbol: mtk_gps_delete_nv_data */
/* Demangled: mtk_gps_delete_nv_data */
int mtk_gps_delete_nv_data(void);

/* Symbol: mtk_gps_get_rtc_offset */
/* Demangled: mtk_gps_get_rtc_offset */
int mtk_gps_get_rtc_offset(void);

/* Symbol: mtk_gps_get_reg */
/* Demangled: mtk_gps_get_reg */
int mtk_gps_get_reg(void);

/* Symbol: mtk_gps_set_gnss_positioning_mode */
/* Demangled: mtk_gps_set_gnss_positioning_mode */
int mtk_gps_set_gnss_positioning_mode(void);

/* Symbol: mtk_gps_clean_mvcd_recv_state_l5 */
/* Demangled: mtk_gps_clean_mvcd_recv_state_l5 */
int mtk_gps_clean_mvcd_recv_state_l5(void);

/* Symbol: mtk_gps_update_next_record */
/* Demangled: mtk_gps_update_next_record */
int mtk_gps_update_next_record(void);

/* Symbol: mtk_agps_agent_xepo_download_response */
/* Demangled: mtk_agps_agent_xepo_download_response */
int mtk_agps_agent_xepo_download_response(void);

/* Symbol: MTK_Bee_Receive_New_Eph_Ack */
/* Demangled: MTK_Bee_Receive_New_Eph_Ack */
int MTK_Bee_Receive_New_Eph_Ack(void);

/* Symbol: mtk_agps_agent_qepo_file_update */
/* Demangled: mtk_agps_agent_qepo_file_update */
int mtk_agps_agent_qepo_file_update(void);

/* Symbol: mtk_agps_agent_xepo_get_csm */
/* Demangled: mtk_agps_agent_xepo_get_csm */
int mtk_agps_agent_xepo_get_csm(void);

/* Symbol: mtk_agps_agent_xepo_state_get */
/* Demangled: mtk_agps_agent_xepo_state_get */
int mtk_agps_agent_xepo_state_get(void);

/* Symbol: mtk_agps_agent_qepo_ga_file_update */
/* Demangled: mtk_agps_agent_qepo_ga_file_update */
int mtk_agps_agent_qepo_ga_file_update(void);

/* Symbol: mtk_agps_agent_xepo_get_type */
/* Demangled: mtk_agps_agent_xepo_get_type */
int mtk_agps_agent_xepo_get_type(void);

/* Symbol: mtk_agps_agent_xepo_request */
/* Demangled: mtk_agps_agent_xepo_request */
int mtk_agps_agent_xepo_request(void);

/* Symbol: mtk_gps_get_navigation_mode */
/* Demangled: mtk_gps_get_navigation_mode */
int mtk_gps_get_navigation_mode(void);

/* Symbol: mtk_agps_agent_buffer_free */
/* Demangled: mtk_agps_agent_buffer_free */
int mtk_agps_agent_buffer_free(void);

/* Symbol: mtk_gps_get_gleo_sat_accurate_snr */
/* Demangled: mtk_gps_get_gleo_sat_accurate_snr */
int mtk_gps_get_gleo_sat_accurate_snr(void);

/* Symbol: mtk_gps_clean_next_record_all */
/* Demangled: mtk_gps_clean_next_record_all */
int mtk_gps_clean_next_record_all(void);

/* Symbol: mtk_gps_get_position */
/* Demangled: mtk_gps_get_position */
int mtk_gps_get_position(void);

/* Symbol: mtk_gps_set_agps_data_from_agent */
/* Demangled: mtk_gps_set_agps_data_from_agent */
int mtk_gps_set_agps_data_from_agent(void);

/* Symbol: mtk_agps_set_param */
/* Demangled: mtk_agps_set_param */
int mtk_agps_set_param(void);

/* Symbol: mtk_gps_msg_uninit */
/* Demangled: mtk_gps_msg_uninit */
int mtk_gps_msg_uninit(void);

/* Symbol: mtk_agps_set_param_with_payload_len */
/* Demangled: mtk_agps_set_param_with_payload_len */
int mtk_agps_set_param_with_payload_len(void);

/* Symbol: mtk_gps_get_position_accuracy */
/* Demangled: mtk_gps_get_position_accuracy */
int mtk_gps_get_position_accuracy(void);

/* Symbol: MTK_Bee_Set_BRDC */
/* Demangled: MTK_Bee_Set_BRDC */
int MTK_Bee_Set_BRDC(void);

/* Symbol: mtk_gps_get_gnss_operation_mode */
/* Demangled: mtk_gps_get_gnss_operation_mode */
int mtk_gps_get_gnss_operation_mode(void);

/* Symbol: mtk_agps_agent_qepo_ga_file_expire_check */
/* Demangled: mtk_agps_agent_qepo_ga_file_expire_check */
int mtk_agps_agent_qepo_ga_file_expire_check(void);

/* Symbol: mtk_agps_agent_epo_read_gps_time */
/* Demangled: mtk_agps_agent_epo_read_gps_time */
int mtk_agps_agent_epo_read_gps_time(void);

/* Symbol: mtk_gnss_get_measurement */
/* Demangled: mtk_gnss_get_measurement */
int mtk_gnss_get_measurement(void);

/* Symbol: mtk_gps_get_nic_sat_accurate_snr */
/* Demangled: mtk_gps_get_nic_sat_accurate_snr */
int mtk_gps_get_nic_sat_accurate_snr(void);

/* Symbol: mtk_gps_agps_proc */
/* Demangled: mtk_gps_agps_proc */
int mtk_gps_agps_proc(void);

/* Symbol: mtk_gps_frame_sync_meas_resp */
/* Demangled: mtk_gps_frame_sync_meas_resp */
int mtk_gps_frame_sync_meas_resp(void);

/* Symbol: mtk_gps_module_string */
/* Demangled: mtk_gps_module_string */
extern void* mtk_gps_module_string;

/* Symbol: mtk_agps_agent_qepo_state_change */
/* Demangled: mtk_agps_agent_qepo_state_change */
int mtk_agps_agent_qepo_state_change(void);

/* Symbol: mtk_gps_get_cn0_test */
/* Demangled: mtk_gps_get_cn0_test */
int mtk_gps_get_cn0_test(void);

/* Symbol: mtk_agps_agent_qepo_state_change_by_type */
/* Demangled: mtk_agps_agent_qepo_state_change_by_type */
int mtk_agps_agent_qepo_state_change_by_type(void);

/* Symbol: mtk_gps_sys_nmea_output_to_app_print */
/* Demangled: mtk_gps_sys_nmea_output_to_app_print */
int mtk_gps_sys_nmea_output_to_app_print(void);

/* Symbol: mtk_gps_clk_extention_set */
/* Demangled: mtk_gps_clk_extention_set */
int mtk_gps_clk_extention_set(void);

/* Symbol: mtk_gps_set_ephemeris */
/* Demangled: mtk_gps_set_ephemeris */
int mtk_gps_set_ephemeris(void);

/* Symbol: mtk_gps_get_agps_lppe_3Dstatus_response */
/* Demangled: mtk_gps_get_agps_lppe_3Dstatus_response */
int mtk_gps_get_agps_lppe_3Dstatus_response(void);

/* Symbol: mtk_gps_bin_check_queue_empty */
/* Demangled: mtk_gps_bin_check_queue_empty */
int mtk_gps_bin_check_queue_empty(void);

/* Symbol: mtk_agps_agent_qepo_bd_init */
/* Demangled: mtk_agps_agent_qepo_bd_init */
int mtk_agps_agent_qepo_bd_init(void);

/* Symbol: mtk_gps_get_phase_test */
/* Demangled: mtk_gps_get_phase_test */
int mtk_gps_get_phase_test(void);

/* Symbol: mtk_gps_set_debug_file */
/* Demangled: mtk_gps_set_debug_file */
int mtk_gps_set_debug_file(void);

/* Symbol: mtk_gps_get_sat_accurate_snr */
/* Demangled: mtk_gps_get_sat_accurate_snr */
int mtk_gps_get_sat_accurate_snr(void);

/* Symbol: mtk_gps_mt3332_config */
/* Demangled: mtk_gps_mt3332_config */
int mtk_gps_mt3332_config(void);

/* Symbol: mtk_agps_agent_epo_extract_data */
/* Demangled: mtk_agps_agent_epo_extract_data */
int mtk_agps_agent_epo_extract_data(void);

/* Symbol: mtk_agps_agent_qepo_ga_uninit */
/* Demangled: mtk_agps_agent_qepo_ga_uninit */
int mtk_agps_agent_qepo_ga_uninit(void);

/* Symbol: mtk_gps_set_per_test */
/* Demangled: mtk_gps_set_per_test */
int mtk_gps_set_per_test(void);

/* Symbol: mtk_gps_get_glonass_chn_test */
/* Demangled: mtk_gps_get_glonass_chn_test */
int mtk_gps_get_glonass_chn_test(void);

/* Symbol: mtk_agps_agent_qepo_extract_data */
/* Demangled: mtk_agps_agent_qepo_extract_data */
int mtk_agps_agent_qepo_extract_data(void);

/* Symbol: mtk_gps_ofl_mode_update */
/* Demangled: mtk_gps_ofl_mode_update */
int mtk_gps_ofl_mode_update(void);

/* Symbol: mtk_gps_sys_event_create */
/* Demangled: mtk_gps_sys_event_create */
int mtk_gps_sys_event_create(void);

/* Symbol: mtk_agps_select */
/* Demangled: mtk_agps_select */
int mtk_agps_select(void);

/* Symbol: mtk_gps_mnl_mpe_callback_reg */
/* Demangled: mtk_gps_mnl_mpe_callback_reg */
int mtk_gps_mnl_mpe_callback_reg(void);

/* Symbol: mtk_gps_bin_check_next_fine_l5 */
/* Demangled: mtk_gps_bin_check_next_fine_l5 */
int mtk_gps_bin_check_next_fine_l5(void);

/* Symbol: mtk_gps_mnl_mpe_run_callback */
/* Demangled: mtk_gps_mnl_mpe_run_callback */
int mtk_gps_mnl_mpe_run_callback(void);

/* Symbol: MTK_Bee_Age */
/* Demangled: MTK_Bee_Age */
int MTK_Bee_Age(void);

/* Symbol: mtk_gps_get_bd_sat_accurate_snr */
/* Demangled: mtk_gps_get_bd_sat_accurate_snr */
int mtk_gps_get_bd_sat_accurate_snr(void);

/* Symbol: mtk_agps_agent_qepo_request */
/* Demangled: mtk_agps_agent_qepo_request */
int mtk_agps_agent_qepo_request(void);

/* Symbol: mtk_gps_ofl_rst_stpgps_begin_ntf */
/* Demangled: mtk_gps_ofl_rst_stpgps_begin_ntf */
int mtk_gps_ofl_rst_stpgps_begin_ntf(void);

/* Symbol: mtk_gps_set_jammer_test */
/* Demangled: mtk_gps_set_jammer_test */
int mtk_gps_set_jammer_test(void);

/* Symbol: mtk_gps_sync_rtc */
/* Demangled: mtk_gps_sync_rtc */
int mtk_gps_sync_rtc(void);

/* Symbol: MTK_Bee_Req_Info */
/* Demangled: MTK_Bee_Req_Info */
int MTK_Bee_Req_Info(void);

/* Symbol: mtk_agps_req_mode_get */
/* Demangled: mtk_agps_req_mode_get */
int mtk_agps_req_mode_get(void);

/* Symbol: mtk_gnss_get_clock */
/* Demangled: mtk_gnss_get_clock */
int mtk_gnss_get_clock(void);

/* Symbol: mtk_gps_get_time */
/* Demangled: mtk_gps_get_time */
int mtk_gps_get_time(void);

/* Symbol: mtk_gps_agent_run */
/* Demangled: mtk_gps_agent_run */
int mtk_gps_agent_run(void);

/* Symbol: mtk_gps_get_prediction_type */
/* Demangled: mtk_gps_get_prediction_type */
int mtk_gps_get_prediction_type(void);

/* Symbol: mtk_gps_set_time */
/* Demangled: mtk_gps_set_time */
int mtk_gps_set_time(void);

/* Symbol: mtk_agps_agent_qepo_file_exsit */
/* Demangled: mtk_agps_agent_qepo_file_exsit */
int mtk_agps_agent_qepo_file_exsit(void);

/* Symbol: mtk_gps_clear_ephemeris */
/* Demangled: mtk_gps_clear_ephemeris */
int mtk_gps_clear_ephemeris(void);

/* Symbol: mtk_agps_agent_xepo_init */
/* Demangled: mtk_agps_agent_xepo_init */
int mtk_agps_agent_xepo_init(void);

/* Symbol: mtk_gps_hotstill_run */
/* Demangled: mtk_gps_hotstill_run */
int mtk_gps_hotstill_run(void);

/* Symbol: mtk_agps_agent_update_state_and_mode */
/* Demangled: mtk_agps_agent_update_state_and_mode */
int mtk_agps_agent_update_state_and_mode(void);

/* Symbol: mtk_gps_process_pmtk */
/* Demangled: mtk_gps_process_pmtk */
int mtk_gps_process_pmtk(void);

/* Symbol: mtk_gps_dsp2_init */
/* Demangled: mtk_gps_dsp2_init */
int mtk_gps_dsp2_init(void);

/* Symbol: mtk_gps_dsp2_init_notify */
/* Demangled: mtk_gps_dsp2_init_notify */
int mtk_gps_dsp2_init_notify(void);

/* Symbol: MTK_Bee_Receive_Host_Info */
/* Demangled: MTK_Bee_Receive_Host_Info */
int MTK_Bee_Receive_Host_Info(void);

/* Symbol: mtk_gps_get_mnl_info */
/* Demangled: mtk_gps_get_mnl_info */
int mtk_gps_get_mnl_info(void);

/* Symbol: mtk_gps_enter_mp_test */
/* Demangled: mtk_gps_enter_mp_test */
int mtk_gps_enter_mp_test(void);

/* Symbol: mtk_gps_get_pmtk_response */
/* Demangled: mtk_gps_get_pmtk_response */
int mtk_gps_get_pmtk_response(void);

/* Symbol: mtk_gps_get_assist_bitmap */
/* Demangled: mtk_gps_get_assist_bitmap */
int mtk_gps_get_assist_bitmap(void);

/* Symbol: mtk_gps_set_chn_test */
/* Demangled: mtk_gps_set_chn_test */
int mtk_gps_set_chn_test(void);

/* Symbol: mtk_gps_get_gleo_sat_accurate_snr_L5 */
/* Demangled: mtk_gps_get_gleo_sat_accurate_snr_L5 */
int mtk_gps_get_gleo_sat_accurate_snr_L5(void);

/* Symbol: mtk_gps_bin_check_mnl_want_data */
/* Demangled: mtk_gps_bin_check_mnl_want_data */
int mtk_gps_bin_check_mnl_want_data(void);

/* Symbol: mtk_gps_bin_check_mnl_want_data_l5 */
/* Demangled: mtk_gps_bin_check_mnl_want_data_l5 */
int mtk_gps_bin_check_mnl_want_data_l5(void);

/* Symbol: mtk_gps_ofl_set_user */
/* Demangled: mtk_gps_ofl_set_user */
int mtk_gps_ofl_set_user(void);

/* Symbol: mtk_agps_agent_qepo_bd_read_gps_time */
/* Demangled: mtk_agps_agent_qepo_bd_read_gps_time */
int mtk_agps_agent_qepo_bd_read_gps_time(void);

/* Symbol: mtk_gps_get_sv_list */
/* Demangled: mtk_gps_get_sv_list */
int mtk_gps_get_sv_list(void);

/* Symbol: mtk_agps_agent_qepo_download_response */
/* Demangled: mtk_agps_agent_qepo_download_response */
int mtk_agps_agent_qepo_download_response(void);

/* Symbol: mtk_agps_agent_qepo_get_rqst_time */
/* Demangled: mtk_agps_agent_qepo_get_rqst_time */
int mtk_agps_agent_qepo_get_rqst_time(void);

/* Symbol: mtk_gps_leave_mp_test */
/* Demangled: mtk_gps_leave_mp_test */
int mtk_gps_leave_mp_test(void);

/* Symbol: mtk_gps_sys_event_delete */
/* Demangled: mtk_gps_sys_event_delete */
int mtk_gps_sys_event_delete(void);

/* Symbol: mtk_gps_set_navigation_speed_threshold */
/* Demangled: mtk_gps_set_navigation_speed_threshold */
int mtk_gps_set_navigation_speed_threshold(void);

/* Symbol: mtk_agps_agent_epo_period_start_gps_time */
/* Demangled: mtk_agps_agent_epo_period_start_gps_time */
int mtk_agps_agent_epo_period_start_gps_time(void);

/* Symbol: MTK_Bee_Set_BEE */
/* Demangled: MTK_Bee_Set_BEE */
int MTK_Bee_Set_BEE(void);

/* Symbol: mtk_gps_mnl_create_dbg_port */
/* Demangled: mtk_gps_mnl_create_dbg_port */
int mtk_gps_mnl_create_dbg_port(void);

/* Symbol: mtk_gps_set_navigation_mode */
/* Demangled: mtk_gps_set_navigation_mode */
int mtk_gps_set_navigation_mode(void);

/* Symbol: mtk_agps_agent_debug_set */
/* Demangled: mtk_agps_agent_debug_set */
int mtk_agps_agent_debug_set(void);

/* Symbol: mtk_gps_data_input2 */
/* Demangled: mtk_gps_data_input2 */
int mtk_gps_data_input2(void);

/* Symbol: mtk_gps_get_sbas_msg_amount */
/* Demangled: mtk_gps_get_sbas_msg_amount */
int mtk_gps_get_sbas_msg_amount(void);

/* Symbol: mtk_gps_set_almanac */
/* Demangled: mtk_gps_set_almanac */
int mtk_gps_set_almanac(void);

/* Symbol: MTK_Bee_Receive_Bee_Data */
/* Demangled: MTK_Bee_Receive_Bee_Data */
int MTK_Bee_Receive_Bee_Data(void);

/* Symbol: mtk_gps_set_static_mode */
/* Demangled: mtk_gps_set_static_mode */
int mtk_gps_set_static_mode(void);

/* Symbol: mtk_agps_agent_qepo_bd_file_expire_check */
/* Demangled: mtk_agps_agent_qepo_bd_file_expire_check */
int mtk_agps_agent_qepo_bd_file_expire_check(void);

/* Symbol: mtk_agps_agent_qepo_ga_file_exsit */
/* Demangled: mtk_agps_agent_qepo_ga_file_exsit */
int mtk_agps_agent_qepo_ga_file_exsit(void);

/* Symbol: mtk_gps_get_gleo_sv_info */
/* Demangled: mtk_gps_get_gleo_sv_info */
int mtk_gps_get_gleo_sv_info(void);

/* Symbol: mtk_gps_get_debug_type */
/* Demangled: mtk_gps_get_debug_type */
int mtk_gps_get_debug_type(void);

/* Symbol: mtk_agps_agent_fsm_working_proc */
/* Demangled: mtk_agps_agent_fsm_working_proc */
int mtk_agps_agent_fsm_working_proc(void);

/* Symbol: mtk_gps_time_change_notify */
/* Demangled: mtk_gps_time_change_notify */
int mtk_gps_time_change_notify(void);

/* Symbol: mtk_agps_agent_epo_uninit */
/* Demangled: mtk_agps_agent_epo_uninit */
int mtk_agps_agent_epo_uninit(void);

/* Symbol: mtk_gps_agps_msg_init */
/* Demangled: mtk_gps_agps_msg_init */
int mtk_gps_agps_msg_init(void);

/* Symbol: mtk_agps_agent_qepo_uninit */
/* Demangled: mtk_agps_agent_qepo_uninit */
int mtk_agps_agent_qepo_uninit(void);

/* Symbol: mtk_gps_get_reg_value */
/* Demangled: mtk_gps_get_reg_value */
int mtk_gps_get_reg_value(void);

/* Symbol: mtk_gps_rtcm_input */
/* Demangled: mtk_gps_rtcm_input */
int mtk_gps_rtcm_input(void);

/* Symbol: mtk_gps_dump_gsv_info */
/* Demangled: mtk_gps_dump_gsv_info */
int mtk_gps_dump_gsv_info(void);

/* Symbol: mtk_agps_agent_qepo_bd_file_update */
/* Demangled: mtk_agps_agent_qepo_bd_file_update */
int mtk_agps_agent_qepo_bd_file_update(void);

/* Symbol: mtk_gps_set_mpe_info */
/* Demangled: mtk_gps_set_mpe_info */
int mtk_gps_set_mpe_info(void);

/* Symbol: mtk_gps_get_sv_info */
/* Demangled: mtk_gps_get_sv_info */
int mtk_gps_get_sv_info(void);

/* Symbol: mtk_gps_uninit */
/* Demangled: mtk_gps_uninit */
int mtk_gps_uninit(void);

/* Symbol: mtk_gps_get_chip_id */
/* Demangled: mtk_gps_get_chip_id */
int mtk_gps_get_chip_id(void);

/* Symbol: mtk_gps_ofl_user_is_in_nmea_group */
/* Demangled: mtk_gps_ofl_user_is_in_nmea_group */
int mtk_gps_ofl_user_is_in_nmea_group(void);

/* Symbol: mtk_gps_get_agps_lppe_meas_response */
/* Demangled: mtk_gps_get_agps_lppe_meas_response */
int mtk_gps_get_agps_lppe_meas_response(void);

/* Symbol: mtk_gps_get_ephemeris */
/* Demangled: mtk_gps_get_ephemeris */
int mtk_gps_get_ephemeris(void);

/* Symbol: mtk_agps_agent_proc */
/* Demangled: mtk_agps_agent_proc */
int mtk_agps_agent_proc(void);

/* Symbol: mtk_agps_mnl_bee_proc */
/* Demangled: mtk_agps_mnl_bee_proc */
int mtk_agps_mnl_bee_proc(void);

/* Symbol: mtk_gps_set_AIC_mode */
/* Demangled: mtk_gps_set_AIC_mode */
int mtk_gps_set_AIC_mode(void);

/* Symbol: mtk_gps_sys_debug_config */
/* Demangled: mtk_gps_sys_debug_config */
int mtk_gps_sys_debug_config(void);

/* Symbol: mtk_gps_get_glon_sat_accurate_snr */
/* Demangled: mtk_gps_get_glon_sat_accurate_snr */
int mtk_gps_get_glon_sat_accurate_snr(void);

/* Symbol: mtk_gps_set_assist_bitmap */
/* Demangled: mtk_gps_set_assist_bitmap */
int mtk_gps_set_assist_bitmap(void);

/* Symbol: mtk_agps_mnl_proc */
/* Demangled: mtk_agps_mnl_proc */
int mtk_agps_mnl_proc(void);

/* Symbol: mtk_gps_frame_sync_ftime_diff_by_network */
/* Demangled: mtk_gps_frame_sync_ftime_diff_by_network */
int mtk_gps_frame_sync_ftime_diff_by_network(void);

/* Symbol: mtk_gps_get_Custom_AIC_mode */
/* Demangled: mtk_gps_get_Custom_AIC_mode */
int mtk_gps_get_Custom_AIC_mode(void);

/* Symbol: mtk_agps_agent_qepo_ga_read_gps_time */
/* Demangled: mtk_agps_agent_qepo_ga_read_gps_time */
int mtk_agps_agent_qepo_ga_read_gps_time(void);

/* Symbol: mtk_gps_get_jammer_test */
/* Demangled: mtk_gps_get_jammer_test */
int mtk_gps_get_jammer_test(void);

/* Symbol: mtk_agps_agent_supl_proc */
/* Demangled: mtk_agps_agent_supl_proc */
int mtk_agps_agent_supl_proc(void);

/* Symbol: mtk_gps_get_navigation_speed_threshold */
/* Demangled: mtk_gps_get_navigation_speed_threshold */
int mtk_gps_get_navigation_speed_threshold(void);

/* Symbol: mtk_gps_ofl_set_option */
/* Demangled: mtk_gps_ofl_set_option */
int mtk_gps_ofl_set_option(void);

/* Symbol: MTK_Bee_Get_New_Eph_Data */
/* Demangled: MTK_Bee_Get_New_Eph_Data */
int MTK_Bee_Get_New_Eph_Data(void);

/* Symbol: MTK_Bee_Feed_Eph */
/* Demangled: MTK_Bee_Feed_Eph */
int MTK_Bee_Feed_Eph(void);

/* Symbol: mtk_gps_agps_input_lppe_data */
/* Demangled: mtk_gps_agps_input_lppe_data */
int mtk_gps_agps_input_lppe_data(void);

/* Symbol: mtk_agps_agent_qepo_ga_init */
/* Demangled: mtk_agps_agent_qepo_ga_init */
int mtk_agps_agent_qepo_ga_init(void);

/* Symbol: mtk_gps_sys_event_wait_timeout */
/* Demangled: mtk_gps_sys_event_wait_timeout */
int mtk_gps_sys_event_wait_timeout(void);

/* Symbol: mtk_gps_inject_ntp_time */
/* Demangled: mtk_gps_inject_ntp_time */
int mtk_gps_inject_ntp_time(void);

/* Symbol: mtk_gps_set_prediction_type */
/* Demangled: mtk_gps_set_prediction_type */
int mtk_gps_set_prediction_type(void);

/* Symbol: mtk_agps_agent_qepo_file_with_header_verify */
/* Demangled: mtk_agps_agent_qepo_file_with_header_verify */
int mtk_agps_agent_qepo_file_with_header_verify(void);

/* Symbol: mtk_gps_get_agps_req_mod */
/* Demangled: mtk_gps_get_agps_req_mod */
int mtk_gps_get_agps_req_mod(void);

/* Symbol: mtk_agps_agent_epo_data_1SV */
/* Demangled: mtk_agps_agent_epo_data_1SV */
int mtk_agps_agent_epo_data_1SV(void);

/* Symbol: mtk_agps_agent_xepo_get_len */
/* Demangled: mtk_agps_agent_xepo_get_len */
int mtk_agps_agent_xepo_get_len(void);

/* Symbol: mtk_gps_bee_gen */
/* Demangled: mtk_gps_bee_gen */
int mtk_gps_bee_gen(void);

/* Symbol: mtk_gps_get_ir_signal_idx */
/* Demangled: mtk_gps_get_ir_signal_idx */
int mtk_gps_get_ir_signal_idx(void);

/* Symbol: mtk_gps_bin_check_next_fine */
/* Demangled: mtk_gps_bin_check_next_fine */
int mtk_gps_bin_check_next_fine(void);

/* Symbol: mtk_gps_ofl_rst_stpgps_end_ntf */
/* Demangled: mtk_gps_ofl_rst_stpgps_end_ntf */
int mtk_gps_ofl_rst_stpgps_end_ntf(void);

/* Symbol: mtk_agps_agent_epo_file_verify */
/* Demangled: mtk_agps_agent_epo_file_verify */
int mtk_agps_agent_epo_file_verify(void);

/* Symbol: mtk_gps_set_nmea_format */
/* Demangled: mtk_gps_set_nmea_format */
int mtk_gps_set_nmea_format(void);

/* Symbol: mtk_gps_flp_get_location */
/* Demangled: mtk_gps_flp_get_location */
int mtk_gps_flp_get_location(void);

/* Symbol: mtk_gps_get_MNL_Config_XML_param */
/* Demangled: mtk_gps_get_MNL_Config_XML_param */
int mtk_gps_get_MNL_Config_XML_param(void);

/* Symbol: mtk_gps_sys_function_register */
/* Demangled: mtk_gps_sys_function_register */
int mtk_gps_sys_function_register(void);

/* Symbol: mtk_agps_agent_bee_proc */
/* Demangled: mtk_agps_agent_bee_proc */
int mtk_agps_agent_bee_proc(void);

/* Symbol: mtk_gps_bee_uninit */
/* Demangled: mtk_gps_bee_uninit */
int mtk_gps_bee_uninit(void);

/* Symbol: mtk_gps_set_position */
/* Demangled: mtk_gps_set_position */
int mtk_gps_set_position(void);

/* Symbol: mtk_gps_get_ga_signal_idx */
/* Demangled: mtk_gps_get_ga_signal_idx */
int mtk_gps_get_ga_signal_idx(void);

/* Symbol: mtk_gps_set_phase_test */
/* Demangled: mtk_gps_set_phase_test */
int mtk_gps_set_phase_test(void);

/* Symbol: mtk_gps_msg_init */
/* Demangled: mtk_gps_msg_init */
int mtk_gps_msg_init(void);

/* Symbol: mtk_agps_agent_qepo_file_expire_check */
/* Demangled: mtk_agps_agent_qepo_file_expire_check */
int mtk_agps_agent_qepo_file_expire_check(void);

/* Symbol: MTK_Bee_Query_BRDC_Status */
/* Demangled: MTK_Bee_Query_BRDC_Status */
int MTK_Bee_Query_BRDC_Status(void);

/* Symbol: mtk_gps_update_gps_data */
/* Demangled: mtk_gps_update_gps_data */
int mtk_gps_update_gps_data(void);

/* Symbol: mtk_agps_agent_epo_proc */
/* Demangled: mtk_agps_agent_epo_proc */
int mtk_agps_agent_epo_proc(void);

/* Symbol: mtk_agps_agent_qepo_bd_file_exsit */
/* Demangled: mtk_agps_agent_qepo_bd_file_exsit */
int mtk_agps_agent_qepo_bd_file_exsit(void);

/* Symbol: mtk_agps_mnl_epo_proc */
/* Demangled: mtk_agps_mnl_epo_proc */
int mtk_agps_mnl_epo_proc(void);

/* Symbol: mtk_agps_agent_epo_file_update */
/* Demangled: mtk_agps_agent_epo_file_update */
int mtk_agps_agent_epo_file_update(void);

/* Symbol: mtk_agps_agent_epo_1sv_checksum_check */
/* Demangled: mtk_agps_agent_epo_1sv_checksum_check */
int mtk_agps_agent_epo_1sv_checksum_check(void);

/* Symbol: mtk_gps_update_cur_next */
/* Demangled: mtk_gps_update_cur_next */
int mtk_gps_update_cur_next(void);

/* Symbol: mtk_gps_nmea_input */
/* Demangled: mtk_gps_nmea_input */
int mtk_gps_nmea_input(void);

/* Symbol: mtk_agps_agent_xepo_state_change */
/* Demangled: mtk_agps_agent_xepo_state_change */
int mtk_agps_agent_xepo_state_change(void);

/* Symbol: mtk_gps_mnl_get_sensor_info */
/* Demangled: mtk_gps_mnl_get_sensor_info */
int mtk_gps_mnl_get_sensor_info(void);

/* Symbol: mtk_gps_set_reg */
/* Demangled: mtk_gps_set_reg */
int mtk_gps_set_reg(void);

/* Symbol: mtk_gps_main_flow */
/* Demangled: mtk_gps_main_flow */
int mtk_gps_main_flow(void);

/* Symbol: mtk_gps_get_param */
/* Demangled: mtk_gps_get_param */
int mtk_gps_get_param(void);

/* Symbol: MTK_Bee_Enable_BEE */
/* Demangled: MTK_Bee_Enable_BEE */
int MTK_Bee_Enable_BEE(void);

/* Symbol: mtk_agps_agent_xepo_checksum_check */
/* Demangled: mtk_agps_agent_xepo_checksum_check */
int mtk_agps_agent_xepo_checksum_check(void);

/* Symbol: mtk_gps_get_static_mode */
/* Demangled: mtk_gps_get_static_mode */
int mtk_gps_get_static_mode(void);

/* Symbol: mtk_gps_set_Custom_AIC_mode */
/* Demangled: mtk_gps_set_Custom_AIC_mode */
int mtk_gps_set_Custom_AIC_mode(void);

/* Symbol: mtk_gps_get_sbas_msg */
/* Demangled: mtk_gps_get_sbas_msg */
int mtk_gps_get_sbas_msg(void);

/* Symbol: mtk_gps_get_gnss_positioning_mode */
/* Demangled: mtk_gps_get_gnss_positioning_mode */
int mtk_gps_get_gnss_positioning_mode(void);

/* Symbol: mtk_gps_get_sat_accurate_snr_L5 */
/* Demangled: mtk_gps_get_sat_accurate_snr_L5 */
int mtk_gps_get_sat_accurate_snr_L5(void);

/* Symbol: mtk_gps_debug_wrapper */
/* Demangled: mtk_gps_debug_wrapper */
int mtk_gps_debug_wrapper(void);

/* Symbol: mtk_gps_D2_Set_Enable */
/* Demangled: mtk_gps_D2_Set_Enable */
int mtk_gps_D2_Set_Enable(void);

/* Symbol: mtk_agps_agent_qepo_proc */
/* Demangled: mtk_agps_agent_qepo_proc */
int mtk_agps_agent_qepo_proc(void);

/* Symbol: mtk_agps_agent_qepo_read_gps_time */
/* Demangled: mtk_agps_agent_qepo_read_gps_time */
int mtk_agps_agent_qepo_read_gps_time(void);

/* Symbol: mtk_agps_agent_qepo_bd_uninit */
/* Demangled: mtk_agps_agent_qepo_bd_uninit */
int mtk_agps_agent_qepo_bd_uninit(void);

/* Symbol: mtk_gps_run */
/* Demangled: mtk_gps_run */
int mtk_gps_run(void);

/* Symbol: mtk_agps_agent_xepo_uninit */
/* Demangled: mtk_agps_agent_xepo_uninit */
int mtk_agps_agent_xepo_uninit(void);

/* Symbol: mtk_gps_mnl_run */
/* Demangled: mtk_gps_mnl_run */
int mtk_gps_mnl_run(void);

/* Symbol: mtk_gps_set_gnss_operation_mode */
/* Demangled: mtk_gps_set_gnss_operation_mode */
int mtk_gps_set_gnss_operation_mode(void);

/* Symbol: MTK_Bee_Disable_BRDC */
/* Demangled: MTK_Bee_Disable_BRDC */
int MTK_Bee_Disable_BRDC(void);

/* Symbol: mtk_gps_ofl_send_flp_data */
/* Demangled: mtk_gps_ofl_send_flp_data */
int mtk_gps_ofl_send_flp_data(void);

/* Symbol: mtk_agps_agent_qepo_ga_extract_data */
/* Demangled: mtk_agps_agent_qepo_ga_extract_data */
int mtk_agps_agent_qepo_ga_extract_data(void);

/* Symbol: mtk_agps_agent_init */
/* Demangled: mtk_agps_agent_init */
int mtk_agps_agent_init(void);

/* Symbol: mtk_gps_get_bd_sat_accurate_snr_L5 */
/* Demangled: mtk_gps_get_bd_sat_accurate_snr_L5 */
int mtk_gps_get_bd_sat_accurate_snr_L5(void);

/* Symbol: mtk_gps_sys_alps_gps_dbg2file_encrypt_init */
/* Demangled: mtk_gps_sys_alps_gps_dbg2file_encrypt_init */
int mtk_gps_sys_alps_gps_dbg2file_encrypt_init(void);

/* Symbol: mtk_gps_get_navigation_event */
/* Demangled: mtk_gps_get_navigation_event */
int mtk_gps_get_navigation_event(void);

/* Symbol: mtk_gps_get_beidou_chn_test */
/* Demangled: mtk_gps_get_beidou_chn_test */
int mtk_gps_get_beidou_chn_test(void);

/* Symbol: mtk_gps_bee_init */
/* Demangled: mtk_gps_bee_init */
int mtk_gps_bee_init(void);

/* Symbol: mtk_gps_inject_nlp_location */
/* Demangled: mtk_gps_inject_nlp_location */
int mtk_gps_inject_nlp_location(void);

/* Symbol: mtk_gps_time_update_notify */
/* Demangled: mtk_gps_time_update_notify */
int mtk_gps_time_update_notify(void);

/* Symbol: MTK_Bee_Enable_BRDC */
/* Demangled: MTK_Bee_Enable_BRDC */
int MTK_Bee_Enable_BRDC(void);

/* Symbol: mtk_gps_get_chn_test */
/* Demangled: mtk_gps_get_chn_test */
int mtk_gps_get_chn_test(void);

/* Symbol: mtk_gps_data_input */
/* Demangled: mtk_gps_data_input */
int mtk_gps_data_input(void);

/* Symbol: mtk_agps_agent_epo_read_utc_time */
/* Demangled: mtk_agps_agent_epo_read_utc_time */
int mtk_agps_agent_epo_read_utc_time(void);

/* Symbol: mtk_gps_sys_event_wait */
/* Demangled: mtk_gps_sys_event_wait */
int mtk_gps_sys_event_wait(void);

/* Symbol: mtk_gps_mnl_stop */
/* Demangled: mtk_gps_mnl_stop */
int mtk_gps_mnl_stop(void);

/* Symbol: mtk_gps_set_param */
/* Demangled: mtk_gps_set_param */
int mtk_gps_set_param(void);

/* Symbol: mtk_gps_get_rtc_info */
/* Demangled: mtk_gps_get_rtc_info */
int mtk_gps_get_rtc_info(void);

/* Symbol: mtk_gps_get_gnss_mode_config */
/* Demangled: mtk_gps_get_gnss_mode_config */
int mtk_gps_get_gnss_mode_config(void);

/* Symbol: MTK_Bee_Request_Data */
/* Demangled: MTK_Bee_Request_Data */
int MTK_Bee_Request_Data(void);

/* Symbol: mtk_gps_get_almanac */
/* Demangled: mtk_gps_get_almanac */
int mtk_gps_get_almanac(void);

/* Symbol: mtk_agps_agent_qepo_state_get */
/* Demangled: mtk_agps_agent_qepo_state_get */
int mtk_agps_agent_qepo_state_get(void);

/* Symbol: mtk_agps_agent_epo_get_file_size */
/* Demangled: mtk_agps_agent_epo_get_file_size */
int mtk_agps_agent_epo_get_file_size(void);

/* Symbol: mtk_gps_sys_alps_gps_dbg2file_encrypt_output */
/* Demangled: mtk_gps_sys_alps_gps_dbg2file_encrypt_output */
int mtk_gps_sys_alps_gps_dbg2file_encrypt_output(void);

/* Symbol: mtk_gps_set_gnss_jammer_test */
/* Demangled: mtk_gps_set_gnss_jammer_test */
int mtk_gps_set_gnss_jammer_test(void);

/* Symbol: MTK_Bee_Send_New_Eph */
/* Demangled: MTK_Bee_Send_New_Eph */
int MTK_Bee_Send_New_Eph(void);

/* Symbol: mtk_gps_dsp_init */
/* Demangled: mtk_gps_dsp_init */
int mtk_gps_dsp_init(void);

/* Symbol: mtk_agps_agent_mtknav_file_update */
/* Demangled: mtk_agps_agent_mtknav_file_update */
int mtk_agps_agent_mtknav_file_update(void);

/* Symbol: MTK_Bee_Receive_End_Data */
/* Demangled: MTK_Bee_Receive_End_Data */
int MTK_Bee_Receive_End_Data(void);

/* Symbol: mtk_gps_log_line_enc_inplace */
/* Demangled: mtk_gps_log_line_enc_inplace */
int mtk_gps_log_line_enc_inplace(void);

/* Symbol: mtk_gps_get_measurement */
/* Demangled: mtk_gps_get_measurement */
int mtk_gps_get_measurement(void);

/* Symbol: mtk_gps_set_agps_machine */
/* Demangled: mtk_gps_set_agps_machine */
int mtk_gps_set_agps_machine(void);

/* Symbol: mtk_gps_clean_next_record */
/* Demangled: mtk_gps_clean_next_record */
int mtk_gps_clean_next_record(void);

/* Symbol: mtk_gps_get_word_parity */
/* Demangled: mtk_gps_get_word_parity */
int mtk_gps_get_word_parity(void);

/* Symbol: mtk_gps_set_tcxo_mode */
/* Demangled: mtk_gps_set_tcxo_mode */
int mtk_gps_set_tcxo_mode(void);

/* Symbol: mtk_gps_get_bd_signal_idx */
/* Demangled: mtk_gps_get_bd_signal_idx */
int mtk_gps_get_bd_signal_idx(void);

/* Symbol: mtk_gps_init */
/* Demangled: mtk_gps_init */
int mtk_gps_init(void);

/* Symbol: mtk_gps_agps_lppe_check */
/* Demangled: mtk_gps_agps_lppe_check */
int mtk_gps_agps_lppe_check(void);

/* Symbol: mtk_gps_get_glon_sv_info */
/* Demangled: mtk_gps_get_glon_sv_info */
int mtk_gps_get_glon_sv_info(void);

/* Symbol: MTK_Bee_Get_New_Eph_Info */
/* Demangled: MTK_Bee_Get_New_Eph_Info */
int MTK_Bee_Get_New_Eph_Info(void);

/* Symbol: mtk_gps_system_init */
/* Demangled: mtk_gps_system_init */
int mtk_gps_system_init(void);

/* Symbol: mtk_gps_agps_input */
/* Demangled: mtk_gps_agps_input */
int mtk_gps_agps_input(void);

/* Symbol: mtk_agps_agent_check_recv_eph */
/* Demangled: mtk_agps_agent_check_recv_eph */
int mtk_agps_agent_check_recv_eph(void);

/* Symbol: mtk_agps_agent_qepo_with_header_get_sv_cnt */
/* Demangled: mtk_agps_agent_qepo_with_header_get_sv_cnt */
int mtk_agps_agent_qepo_with_header_get_sv_cnt(void);

/* Symbol: mtk_gps_set_MNL_Config_XML_param */
/* Demangled: mtk_gps_set_MNL_Config_XML_param */
int mtk_gps_set_MNL_Config_XML_param(void);

/* Symbol: MTK_Bee_Disable_BEE */
/* Demangled: MTK_Bee_Disable_BEE */
int MTK_Bee_Disable_BEE(void);

/* Symbol: mtk_agps_agent_epo_init */
/* Demangled: mtk_agps_agent_epo_init */
int mtk_agps_agent_epo_init(void);

/* Symbol: mtk_gps_get_clock */
/* Demangled: mtk_gps_get_clock */
int mtk_gps_get_clock(void);

/* Symbol: mtk_gps_set_debug_type */
/* Demangled: mtk_gps_set_debug_type */
int mtk_gps_set_debug_type(void);

/* Symbol: mtk_gps_set_reg_L5 */
/* Demangled: mtk_gps_set_reg_L5 */
int mtk_gps_set_reg_L5(void);

/* Symbol: MTK_Bee_Get_Eph_Info */
/* Demangled: MTK_Bee_Get_Eph_Info */
int MTK_Bee_Get_Eph_Info(void);

/* Symbol: mtk_gps_sys_nmea_output */
/* Demangled: mtk_gps_sys_nmea_output */
int mtk_gps_sys_nmea_output(void);

/* Symbol: mtk_gps_set_pmtk_data */
/* Demangled: mtk_gps_set_pmtk_data */
int mtk_gps_set_pmtk_data(void);

/* Symbol: MTK_Bee_Query_BEE_Status */
/* Demangled: MTK_Bee_Query_BEE_Status */
int MTK_Bee_Query_BEE_Status(void);

/* Symbol: mtk_gps_clean_mvcd_recv_state */
/* Demangled: mtk_gps_clean_mvcd_recv_state */
int mtk_gps_clean_mvcd_recv_state(void);

/* Symbol: mtk_agps_agent_qepo_bd_extract_data */
/* Demangled: mtk_agps_agent_qepo_bd_extract_data */
int mtk_agps_agent_qepo_bd_extract_data(void);

/* Symbol: mtk_gps_sys_event_set */
/* Demangled: mtk_gps_sys_event_set */
int mtk_gps_sys_event_set(void);

/* Symbol: mtk_gps_get_qz_signal_idx */
/* Demangled: mtk_gps_get_qz_signal_idx */
int mtk_gps_get_qz_signal_idx(void);

/* Symbol: mtk_agps_agent_qepo_init */
/* Demangled: mtk_agps_agent_qepo_init */
int mtk_agps_agent_qepo_init(void);

/* Symbol: mtk_gps_get_chip_capability */
/* Demangled: mtk_gps_get_chip_capability */
int mtk_gps_get_chip_capability(void);

/* Symbol: mtk_gps_get_reg_L5 */
/* Demangled: mtk_gps_get_reg_L5 */
int mtk_gps_get_reg_L5(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMNL_H */
