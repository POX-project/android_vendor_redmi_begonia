/*
 * Reverse-Engineered Source for: libmnl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmnl"

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
#include "libmnl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: mtk_agps_agent_xepo_file_exsit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_file_exsit(void) {
    ALOGD("mtk_agps_agent_xepo_file_exsit() called");
    return 0;
}

/* Demangled: mtk_agps_get_param */
extern "C" __attribute__((visibility("default"))) int mtk_agps_get_param(void) {
    ALOGD("mtk_agps_get_param() called");
    return 0;
}

/* Demangled: mtk_gnss_get_gps_time_infor */
extern "C" __attribute__((visibility("default"))) int mtk_gnss_get_gps_time_infor(void) {
    ALOGD("mtk_gnss_get_gps_time_infor() called");
    return 0;
}

/* Demangled: mtk_gps_tsx_xvt */
extern "C" __attribute__((visibility("default"))) int mtk_gps_tsx_xvt(void) {
    ALOGD("mtk_gps_tsx_xvt() called");
    return 0;
}

/* Demangled: mtk_gnss_get_navigation_event */
extern "C" __attribute__((visibility("default"))) int mtk_gnss_get_navigation_event(void) {
    ALOGD("mtk_gnss_get_navigation_event() called");
    return 0;
}

/* Demangled: mtk_gps_get_agps_response */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_agps_response(void) {
    ALOGD("mtk_gps_get_agps_response() called");
    return 0;
}

/* Demangled: mtk_gps_frame_sync_ftime_diff */
extern "C" __attribute__((visibility("default"))) int mtk_gps_frame_sync_ftime_diff(void) {
    ALOGD("mtk_gps_frame_sync_ftime_diff() called");
    return 0;
}

/* Demangled: mtk_gps_clear_almanac */
extern "C" __attribute__((visibility("default"))) int mtk_gps_clear_almanac(void) {
    ALOGD("mtk_gps_clear_almanac() called");
    return 0;
}

/* Demangled: mtk_gps_agps_msg_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_gps_agps_msg_uninit(void) {
    ALOGD("mtk_gps_agps_msg_uninit() called");
    return 0;
}

/* Demangled: MTK_Bee_Receive_New_Eph_Host_Ready */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Receive_New_Eph_Host_Ready(void) {
    ALOGD("MTK_Bee_Receive_New_Eph_Host_Ready() called");
    return 0;
}

/* Demangled: mtk_gps_get_next_delta */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_next_delta(void) {
    ALOGD("mtk_gps_get_next_delta() called");
    return 0;
}

/* Demangled: mtk_agps_agent_fsm_idle_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_fsm_idle_proc(void) {
    ALOGD("mtk_agps_agent_fsm_idle_proc() called");
    return 0;
}

/* Demangled: mtk_gps_set_agps_data */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_agps_data(void) {
    ALOGD("mtk_gps_set_agps_data() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_file_verify */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_file_verify(void) {
    ALOGD("mtk_agps_agent_qepo_file_verify() called");
    return 0;
}

/* Demangled: mtk_gps_AscToHex */
extern "C" __attribute__((visibility("default"))) int mtk_gps_AscToHex(void) {
    ALOGD("mtk_gps_AscToHex() called");
    return 0;
}

/* Demangled: mtk_gps_get_gps_signal_idx */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_gps_signal_idx(void) {
    ALOGD("mtk_gps_get_gps_signal_idx() called");
    return 0;
}

/* Demangled: mtk_gps_bin_check_queue_empty_l5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bin_check_queue_empty_l5(void) {
    ALOGD("mtk_gps_bin_check_queue_empty_l5() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_period_end_gps_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_period_end_gps_time(void) {
    ALOGD("mtk_agps_agent_epo_period_end_gps_time() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_proc(void) {
    ALOGD("mtk_agps_agent_xepo_proc() called");
    return 0;
}

/* Demangled: mtk_gps_delete_nv_data */
extern "C" __attribute__((visibility("default"))) int mtk_gps_delete_nv_data(void) {
    ALOGD("mtk_gps_delete_nv_data() called");
    return 0;
}

/* Demangled: mtk_gps_get_rtc_offset */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_rtc_offset(void) {
    ALOGD("mtk_gps_get_rtc_offset() called");
    return 0;
}

/* Demangled: mtk_gps_get_reg */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_reg(void) {
    ALOGD("mtk_gps_get_reg() called");
    return 0;
}

/* Demangled: mtk_gps_set_gnss_positioning_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_gnss_positioning_mode(void) {
    ALOGD("mtk_gps_set_gnss_positioning_mode() called");
    return 0;
}

/* Demangled: mtk_gps_clean_mvcd_recv_state_l5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_clean_mvcd_recv_state_l5(void) {
    ALOGD("mtk_gps_clean_mvcd_recv_state_l5() called");
    return 0;
}

/* Demangled: mtk_gps_update_next_record */
extern "C" __attribute__((visibility("default"))) int mtk_gps_update_next_record(void) {
    ALOGD("mtk_gps_update_next_record() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_download_response */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_download_response(void) {
    ALOGD("mtk_agps_agent_xepo_download_response() called");
    return 0;
}

/* Demangled: MTK_Bee_Receive_New_Eph_Ack */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Receive_New_Eph_Ack(void) {
    ALOGD("MTK_Bee_Receive_New_Eph_Ack() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_file_update */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_file_update(void) {
    ALOGD("mtk_agps_agent_qepo_file_update() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_get_csm */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_get_csm(void) {
    ALOGD("mtk_agps_agent_xepo_get_csm() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_state_get */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_state_get(void) {
    ALOGD("mtk_agps_agent_xepo_state_get() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_ga_file_update */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_ga_file_update(void) {
    ALOGD("mtk_agps_agent_qepo_ga_file_update() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_get_type */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_get_type(void) {
    ALOGD("mtk_agps_agent_xepo_get_type() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_request */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_request(void) {
    ALOGD("mtk_agps_agent_xepo_request() called");
    return 0;
}

/* Demangled: mtk_gps_get_navigation_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_navigation_mode(void) {
    ALOGD("mtk_gps_get_navigation_mode() called");
    return 0;
}

/* Demangled: mtk_agps_agent_buffer_free */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_buffer_free(void) {
    ALOGD("mtk_agps_agent_buffer_free() called");
    return 0;
}

/* Demangled: mtk_gps_get_gleo_sat_accurate_snr */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_gleo_sat_accurate_snr(void) {
    ALOGD("mtk_gps_get_gleo_sat_accurate_snr() called");
    return 0;
}

/* Demangled: mtk_gps_clean_next_record_all */
extern "C" __attribute__((visibility("default"))) int mtk_gps_clean_next_record_all(void) {
    ALOGD("mtk_gps_clean_next_record_all() called");
    return 0;
}

/* Demangled: mtk_gps_get_position */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_position(void) {
    ALOGD("mtk_gps_get_position() called");
    return 0;
}

/* Demangled: mtk_gps_set_agps_data_from_agent */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_agps_data_from_agent(void) {
    ALOGD("mtk_gps_set_agps_data_from_agent() called");
    return 0;
}

/* Demangled: mtk_agps_set_param */
extern "C" __attribute__((visibility("default"))) int mtk_agps_set_param(void) {
    ALOGD("mtk_agps_set_param() called");
    return 0;
}

/* Demangled: mtk_gps_msg_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_gps_msg_uninit(void) {
    ALOGD("mtk_gps_msg_uninit() called");
    return 0;
}

/* Demangled: mtk_agps_set_param_with_payload_len */
extern "C" __attribute__((visibility("default"))) int mtk_agps_set_param_with_payload_len(void) {
    ALOGD("mtk_agps_set_param_with_payload_len() called");
    return 0;
}

/* Demangled: mtk_gps_get_position_accuracy */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_position_accuracy(void) {
    ALOGD("mtk_gps_get_position_accuracy() called");
    return 0;
}

/* Demangled: MTK_Bee_Set_BRDC */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Set_BRDC(void) {
    ALOGD("MTK_Bee_Set_BRDC() called");
    return 0;
}

/* Demangled: mtk_gps_get_gnss_operation_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_gnss_operation_mode(void) {
    ALOGD("mtk_gps_get_gnss_operation_mode() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_ga_file_expire_check */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_ga_file_expire_check(void) {
    ALOGD("mtk_agps_agent_qepo_ga_file_expire_check() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_read_gps_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_read_gps_time(void) {
    ALOGD("mtk_agps_agent_epo_read_gps_time() called");
    return 0;
}

/* Demangled: mtk_gnss_get_measurement */
extern "C" __attribute__((visibility("default"))) int mtk_gnss_get_measurement(void) {
    ALOGD("mtk_gnss_get_measurement() called");
    return 0;
}

/* Demangled: mtk_gps_get_nic_sat_accurate_snr */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_nic_sat_accurate_snr(void) {
    ALOGD("mtk_gps_get_nic_sat_accurate_snr() called");
    return 0;
}

/* Demangled: mtk_gps_agps_proc */
extern "C" __attribute__((visibility("default"))) int mtk_gps_agps_proc(void) {
    ALOGD("mtk_gps_agps_proc() called");
    return 0;
}

/* Demangled: mtk_gps_frame_sync_meas_resp */
extern "C" __attribute__((visibility("default"))) int mtk_gps_frame_sync_meas_resp(void) {
    ALOGD("mtk_gps_frame_sync_meas_resp() called");
    return 0;
}

/* Exported Object: mtk_gps_module_string */
extern "C" __attribute__((visibility("default"))) void* mtk_gps_module_string = NULL;

/* Demangled: mtk_agps_agent_qepo_state_change */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_state_change(void) {
    ALOGD("mtk_agps_agent_qepo_state_change() called");
    return 0;
}

/* Demangled: mtk_gps_get_cn0_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_cn0_test(void) {
    ALOGD("mtk_gps_get_cn0_test() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_state_change_by_type */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_state_change_by_type(void) {
    ALOGD("mtk_agps_agent_qepo_state_change_by_type() called");
    return 0;
}

/* Demangled: mtk_gps_sys_nmea_output_to_app_print */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_nmea_output_to_app_print(void) {
    ALOGD("mtk_gps_sys_nmea_output_to_app_print() called");
    return 0;
}

/* Demangled: mtk_gps_clk_extention_set */
extern "C" __attribute__((visibility("default"))) int mtk_gps_clk_extention_set(void) {
    ALOGD("mtk_gps_clk_extention_set() called");
    return 0;
}

/* Demangled: mtk_gps_set_ephemeris */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_ephemeris(void) {
    ALOGD("mtk_gps_set_ephemeris() called");
    return 0;
}

/* Demangled: mtk_gps_get_agps_lppe_3Dstatus_response */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_agps_lppe_3Dstatus_response(void) {
    ALOGD("mtk_gps_get_agps_lppe_3Dstatus_response() called");
    return 0;
}

/* Demangled: mtk_gps_bin_check_queue_empty */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bin_check_queue_empty(void) {
    ALOGD("mtk_gps_bin_check_queue_empty() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_bd_init */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_bd_init(void) {
    ALOGD("mtk_agps_agent_qepo_bd_init() called");
    return 0;
}

/* Demangled: mtk_gps_get_phase_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_phase_test(void) {
    ALOGD("mtk_gps_get_phase_test() called");
    return 0;
}

/* Demangled: mtk_gps_set_debug_file */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_debug_file(void) {
    ALOGD("mtk_gps_set_debug_file() called");
    return 0;
}

/* Demangled: mtk_gps_get_sat_accurate_snr */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_sat_accurate_snr(void) {
    ALOGD("mtk_gps_get_sat_accurate_snr() called");
    return 0;
}

/* Demangled: mtk_gps_mt3332_config */
extern "C" __attribute__((visibility("default"))) int mtk_gps_mt3332_config(void) {
    ALOGD("mtk_gps_mt3332_config() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_extract_data */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_extract_data(void) {
    ALOGD("mtk_agps_agent_epo_extract_data() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_ga_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_ga_uninit(void) {
    ALOGD("mtk_agps_agent_qepo_ga_uninit() called");
    return 0;
}

/* Demangled: mtk_gps_set_per_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_per_test(void) {
    ALOGD("mtk_gps_set_per_test() called");
    return 0;
}

/* Demangled: mtk_gps_get_glonass_chn_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_glonass_chn_test(void) {
    ALOGD("mtk_gps_get_glonass_chn_test() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_extract_data */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_extract_data(void) {
    ALOGD("mtk_agps_agent_qepo_extract_data() called");
    return 0;
}

/* Demangled: mtk_gps_ofl_mode_update */
extern "C" __attribute__((visibility("default"))) int mtk_gps_ofl_mode_update(void) {
    ALOGD("mtk_gps_ofl_mode_update() called");
    return 0;
}

/* Demangled: mtk_gps_sys_event_create */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_event_create(void) {
    ALOGD("mtk_gps_sys_event_create() called");
    return 0;
}

/* Demangled: mtk_agps_select */
extern "C" __attribute__((visibility("default"))) int mtk_agps_select(void) {
    ALOGD("mtk_agps_select() called");
    return 0;
}

/* Demangled: mtk_gps_mnl_mpe_callback_reg */
extern "C" __attribute__((visibility("default"))) int mtk_gps_mnl_mpe_callback_reg(void) {
    ALOGD("mtk_gps_mnl_mpe_callback_reg() called");
    return 0;
}

/* Demangled: mtk_gps_bin_check_next_fine_l5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bin_check_next_fine_l5(void) {
    ALOGD("mtk_gps_bin_check_next_fine_l5() called");
    return 0;
}

/* Demangled: mtk_gps_mnl_mpe_run_callback */
extern "C" __attribute__((visibility("default"))) int mtk_gps_mnl_mpe_run_callback(void) {
    ALOGD("mtk_gps_mnl_mpe_run_callback() called");
    return 0;
}

/* Demangled: MTK_Bee_Age */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Age(void) {
    ALOGD("MTK_Bee_Age() called");
    return 0;
}

/* Demangled: mtk_gps_get_bd_sat_accurate_snr */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_bd_sat_accurate_snr(void) {
    ALOGD("mtk_gps_get_bd_sat_accurate_snr() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_request */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_request(void) {
    ALOGD("mtk_agps_agent_qepo_request() called");
    return 0;
}

/* Demangled: mtk_gps_ofl_rst_stpgps_begin_ntf */
extern "C" __attribute__((visibility("default"))) int mtk_gps_ofl_rst_stpgps_begin_ntf(void) {
    ALOGD("mtk_gps_ofl_rst_stpgps_begin_ntf() called");
    return 0;
}

/* Demangled: mtk_gps_set_jammer_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_jammer_test(void) {
    ALOGD("mtk_gps_set_jammer_test() called");
    return 0;
}

/* Demangled: mtk_gps_sync_rtc */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sync_rtc(void) {
    ALOGD("mtk_gps_sync_rtc() called");
    return 0;
}

/* Demangled: MTK_Bee_Req_Info */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Req_Info(void) {
    ALOGD("MTK_Bee_Req_Info() called");
    return 0;
}

/* Demangled: mtk_agps_req_mode_get */
extern "C" __attribute__((visibility("default"))) int mtk_agps_req_mode_get(void) {
    ALOGD("mtk_agps_req_mode_get() called");
    return 0;
}

/* Demangled: mtk_gnss_get_clock */
extern "C" __attribute__((visibility("default"))) int mtk_gnss_get_clock(void) {
    ALOGD("mtk_gnss_get_clock() called");
    return 0;
}

/* Demangled: mtk_gps_get_time */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_time(void) {
    ALOGD("mtk_gps_get_time() called");
    return 0;
}

/* Demangled: mtk_gps_agent_run */
extern "C" __attribute__((visibility("default"))) int mtk_gps_agent_run(void) {
    ALOGD("mtk_gps_agent_run() called");
    return 0;
}

/* Demangled: mtk_gps_get_prediction_type */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_prediction_type(void) {
    ALOGD("mtk_gps_get_prediction_type() called");
    return 0;
}

/* Demangled: mtk_gps_set_time */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_time(void) {
    ALOGD("mtk_gps_set_time() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_file_exsit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_file_exsit(void) {
    ALOGD("mtk_agps_agent_qepo_file_exsit() called");
    return 0;
}

/* Demangled: mtk_gps_clear_ephemeris */
extern "C" __attribute__((visibility("default"))) int mtk_gps_clear_ephemeris(void) {
    ALOGD("mtk_gps_clear_ephemeris() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_init */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_init(void) {
    ALOGD("mtk_agps_agent_xepo_init() called");
    return 0;
}

/* Demangled: mtk_gps_hotstill_run */
extern "C" __attribute__((visibility("default"))) int mtk_gps_hotstill_run(void) {
    ALOGD("mtk_gps_hotstill_run() called");
    return 0;
}

/* Demangled: mtk_agps_agent_update_state_and_mode */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_update_state_and_mode(void) {
    ALOGD("mtk_agps_agent_update_state_and_mode() called");
    return 0;
}

/* Demangled: mtk_gps_process_pmtk */
extern "C" __attribute__((visibility("default"))) int mtk_gps_process_pmtk(void) {
    ALOGD("mtk_gps_process_pmtk() called");
    return 0;
}

/* Demangled: mtk_gps_dsp2_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_dsp2_init(void) {
    ALOGD("mtk_gps_dsp2_init() called");
    return 0;
}

/* Demangled: mtk_gps_dsp2_init_notify */
extern "C" __attribute__((visibility("default"))) int mtk_gps_dsp2_init_notify(void) {
    ALOGD("mtk_gps_dsp2_init_notify() called");
    return 0;
}

/* Demangled: MTK_Bee_Receive_Host_Info */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Receive_Host_Info(void) {
    ALOGD("MTK_Bee_Receive_Host_Info() called");
    return 0;
}

/* Demangled: mtk_gps_get_mnl_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_mnl_info(void) {
    ALOGD("mtk_gps_get_mnl_info() called");
    return 0;
}

/* Demangled: mtk_gps_enter_mp_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_enter_mp_test(void) {
    ALOGD("mtk_gps_enter_mp_test() called");
    return 0;
}

/* Demangled: mtk_gps_get_pmtk_response */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_pmtk_response(void) {
    ALOGD("mtk_gps_get_pmtk_response() called");
    return 0;
}

/* Demangled: mtk_gps_get_assist_bitmap */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_assist_bitmap(void) {
    ALOGD("mtk_gps_get_assist_bitmap() called");
    return 0;
}

/* Demangled: mtk_gps_set_chn_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_chn_test(void) {
    ALOGD("mtk_gps_set_chn_test() called");
    return 0;
}

/* Demangled: mtk_gps_get_gleo_sat_accurate_snr_L5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_gleo_sat_accurate_snr_L5(void) {
    ALOGD("mtk_gps_get_gleo_sat_accurate_snr_L5() called");
    return 0;
}

/* Demangled: mtk_gps_bin_check_mnl_want_data */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bin_check_mnl_want_data(void) {
    ALOGD("mtk_gps_bin_check_mnl_want_data() called");
    return 0;
}

/* Demangled: mtk_gps_bin_check_mnl_want_data_l5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bin_check_mnl_want_data_l5(void) {
    ALOGD("mtk_gps_bin_check_mnl_want_data_l5() called");
    return 0;
}

/* Demangled: mtk_gps_ofl_set_user */
extern "C" __attribute__((visibility("default"))) int mtk_gps_ofl_set_user(void) {
    ALOGD("mtk_gps_ofl_set_user() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_bd_read_gps_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_bd_read_gps_time(void) {
    ALOGD("mtk_agps_agent_qepo_bd_read_gps_time() called");
    return 0;
}

/* Demangled: mtk_gps_get_sv_list */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_sv_list(void) {
    ALOGD("mtk_gps_get_sv_list() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_download_response */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_download_response(void) {
    ALOGD("mtk_agps_agent_qepo_download_response() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_get_rqst_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_get_rqst_time(void) {
    ALOGD("mtk_agps_agent_qepo_get_rqst_time() called");
    return 0;
}

/* Demangled: mtk_gps_leave_mp_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_leave_mp_test(void) {
    ALOGD("mtk_gps_leave_mp_test() called");
    return 0;
}

/* Demangled: mtk_gps_sys_event_delete */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_event_delete(void) {
    ALOGD("mtk_gps_sys_event_delete() called");
    return 0;
}

/* Demangled: mtk_gps_set_navigation_speed_threshold */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_navigation_speed_threshold(void) {
    ALOGD("mtk_gps_set_navigation_speed_threshold() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_period_start_gps_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_period_start_gps_time(void) {
    ALOGD("mtk_agps_agent_epo_period_start_gps_time() called");
    return 0;
}

/* Demangled: MTK_Bee_Set_BEE */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Set_BEE(void) {
    ALOGD("MTK_Bee_Set_BEE() called");
    return 0;
}

/* Demangled: mtk_gps_mnl_create_dbg_port */
extern "C" __attribute__((visibility("default"))) int mtk_gps_mnl_create_dbg_port(void) {
    ALOGD("mtk_gps_mnl_create_dbg_port() called");
    return 0;
}

/* Demangled: mtk_gps_set_navigation_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_navigation_mode(void) {
    ALOGD("mtk_gps_set_navigation_mode() called");
    return 0;
}

/* Demangled: mtk_agps_agent_debug_set */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_debug_set(void) {
    ALOGD("mtk_agps_agent_debug_set() called");
    return 0;
}

/* Demangled: mtk_gps_data_input2 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_data_input2(void) {
    ALOGD("mtk_gps_data_input2() called");
    return 0;
}

/* Demangled: mtk_gps_get_sbas_msg_amount */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_sbas_msg_amount(void) {
    ALOGD("mtk_gps_get_sbas_msg_amount() called");
    return 0;
}

/* Demangled: mtk_gps_set_almanac */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_almanac(void) {
    ALOGD("mtk_gps_set_almanac() called");
    return 0;
}

/* Demangled: MTK_Bee_Receive_Bee_Data */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Receive_Bee_Data(void) {
    ALOGD("MTK_Bee_Receive_Bee_Data() called");
    return 0;
}

/* Demangled: mtk_gps_set_static_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_static_mode(void) {
    ALOGD("mtk_gps_set_static_mode() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_bd_file_expire_check */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_bd_file_expire_check(void) {
    ALOGD("mtk_agps_agent_qepo_bd_file_expire_check() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_ga_file_exsit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_ga_file_exsit(void) {
    ALOGD("mtk_agps_agent_qepo_ga_file_exsit() called");
    return 0;
}

/* Demangled: mtk_gps_get_gleo_sv_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_gleo_sv_info(void) {
    ALOGD("mtk_gps_get_gleo_sv_info() called");
    return 0;
}

/* Demangled: mtk_gps_get_debug_type */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_debug_type(void) {
    ALOGD("mtk_gps_get_debug_type() called");
    return 0;
}

/* Demangled: mtk_agps_agent_fsm_working_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_fsm_working_proc(void) {
    ALOGD("mtk_agps_agent_fsm_working_proc() called");
    return 0;
}

/* Demangled: mtk_gps_time_change_notify */
extern "C" __attribute__((visibility("default"))) int mtk_gps_time_change_notify(void) {
    ALOGD("mtk_gps_time_change_notify() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_uninit(void) {
    ALOGD("mtk_agps_agent_epo_uninit() called");
    return 0;
}

/* Demangled: mtk_gps_agps_msg_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_agps_msg_init(void) {
    ALOGD("mtk_gps_agps_msg_init() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_uninit(void) {
    ALOGD("mtk_agps_agent_qepo_uninit() called");
    return 0;
}

/* Demangled: mtk_gps_get_reg_value */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_reg_value(void) {
    ALOGD("mtk_gps_get_reg_value() called");
    return 0;
}

/* Demangled: mtk_gps_rtcm_input */
extern "C" __attribute__((visibility("default"))) int mtk_gps_rtcm_input(void) {
    ALOGD("mtk_gps_rtcm_input() called");
    return 0;
}

/* Demangled: mtk_gps_dump_gsv_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_dump_gsv_info(void) {
    ALOGD("mtk_gps_dump_gsv_info() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_bd_file_update */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_bd_file_update(void) {
    ALOGD("mtk_agps_agent_qepo_bd_file_update() called");
    return 0;
}

/* Demangled: mtk_gps_set_mpe_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_mpe_info(void) {
    ALOGD("mtk_gps_set_mpe_info() called");
    return 0;
}

/* Demangled: mtk_gps_get_sv_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_sv_info(void) {
    ALOGD("mtk_gps_get_sv_info() called");
    return 0;
}

/* Demangled: mtk_gps_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_gps_uninit(void) {
    ALOGD("mtk_gps_uninit() called");
    return 0;
}

/* Demangled: mtk_gps_get_chip_id */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_chip_id(void) {
    ALOGD("mtk_gps_get_chip_id() called");
    return 0;
}

/* Demangled: mtk_gps_ofl_user_is_in_nmea_group */
extern "C" __attribute__((visibility("default"))) int mtk_gps_ofl_user_is_in_nmea_group(void) {
    ALOGD("mtk_gps_ofl_user_is_in_nmea_group() called");
    return 0;
}

/* Demangled: mtk_gps_get_agps_lppe_meas_response */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_agps_lppe_meas_response(void) {
    ALOGD("mtk_gps_get_agps_lppe_meas_response() called");
    return 0;
}

/* Demangled: mtk_gps_get_ephemeris */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_ephemeris(void) {
    ALOGD("mtk_gps_get_ephemeris() called");
    return 0;
}

/* Demangled: mtk_agps_agent_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_proc(void) {
    ALOGD("mtk_agps_agent_proc() called");
    return 0;
}

/* Demangled: mtk_agps_mnl_bee_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_mnl_bee_proc(void) {
    ALOGD("mtk_agps_mnl_bee_proc() called");
    return 0;
}

/* Demangled: mtk_gps_set_AIC_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_AIC_mode(void) {
    ALOGD("mtk_gps_set_AIC_mode() called");
    return 0;
}

/* Demangled: mtk_gps_sys_debug_config */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_debug_config(void) {
    ALOGD("mtk_gps_sys_debug_config() called");
    return 0;
}

/* Demangled: mtk_gps_get_glon_sat_accurate_snr */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_glon_sat_accurate_snr(void) {
    ALOGD("mtk_gps_get_glon_sat_accurate_snr() called");
    return 0;
}

/* Demangled: mtk_gps_set_assist_bitmap */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_assist_bitmap(void) {
    ALOGD("mtk_gps_set_assist_bitmap() called");
    return 0;
}

/* Demangled: mtk_agps_mnl_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_mnl_proc(void) {
    ALOGD("mtk_agps_mnl_proc() called");
    return 0;
}

/* Demangled: mtk_gps_frame_sync_ftime_diff_by_network */
extern "C" __attribute__((visibility("default"))) int mtk_gps_frame_sync_ftime_diff_by_network(void) {
    ALOGD("mtk_gps_frame_sync_ftime_diff_by_network() called");
    return 0;
}

/* Demangled: mtk_gps_get_Custom_AIC_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_Custom_AIC_mode(void) {
    ALOGD("mtk_gps_get_Custom_AIC_mode() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_ga_read_gps_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_ga_read_gps_time(void) {
    ALOGD("mtk_agps_agent_qepo_ga_read_gps_time() called");
    return 0;
}

/* Demangled: mtk_gps_get_jammer_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_jammer_test(void) {
    ALOGD("mtk_gps_get_jammer_test() called");
    return 0;
}

/* Demangled: mtk_agps_agent_supl_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_supl_proc(void) {
    ALOGD("mtk_agps_agent_supl_proc() called");
    return 0;
}

/* Demangled: mtk_gps_get_navigation_speed_threshold */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_navigation_speed_threshold(void) {
    ALOGD("mtk_gps_get_navigation_speed_threshold() called");
    return 0;
}

/* Demangled: mtk_gps_ofl_set_option */
extern "C" __attribute__((visibility("default"))) int mtk_gps_ofl_set_option(void) {
    ALOGD("mtk_gps_ofl_set_option() called");
    return 0;
}

/* Demangled: MTK_Bee_Get_New_Eph_Data */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Get_New_Eph_Data(void) {
    ALOGD("MTK_Bee_Get_New_Eph_Data() called");
    return 0;
}

/* Demangled: MTK_Bee_Feed_Eph */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Feed_Eph(void) {
    ALOGD("MTK_Bee_Feed_Eph() called");
    return 0;
}

/* Demangled: mtk_gps_agps_input_lppe_data */
extern "C" __attribute__((visibility("default"))) int mtk_gps_agps_input_lppe_data(void) {
    ALOGD("mtk_gps_agps_input_lppe_data() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_ga_init */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_ga_init(void) {
    ALOGD("mtk_agps_agent_qepo_ga_init() called");
    return 0;
}

/* Demangled: mtk_gps_sys_event_wait_timeout */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_event_wait_timeout(void) {
    ALOGD("mtk_gps_sys_event_wait_timeout() called");
    return 0;
}

/* Demangled: mtk_gps_inject_ntp_time */
extern "C" __attribute__((visibility("default"))) int mtk_gps_inject_ntp_time(void) {
    ALOGD("mtk_gps_inject_ntp_time() called");
    return 0;
}

/* Demangled: mtk_gps_set_prediction_type */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_prediction_type(void) {
    ALOGD("mtk_gps_set_prediction_type() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_file_with_header_verify */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_file_with_header_verify(void) {
    ALOGD("mtk_agps_agent_qepo_file_with_header_verify() called");
    return 0;
}

/* Demangled: mtk_gps_get_agps_req_mod */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_agps_req_mod(void) {
    ALOGD("mtk_gps_get_agps_req_mod() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_data_1SV */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_data_1SV(void) {
    ALOGD("mtk_agps_agent_epo_data_1SV() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_get_len */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_get_len(void) {
    ALOGD("mtk_agps_agent_xepo_get_len() called");
    return 0;
}

/* Demangled: mtk_gps_bee_gen */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bee_gen(void) {
    ALOGD("mtk_gps_bee_gen() called");
    return 0;
}

/* Demangled: mtk_gps_get_ir_signal_idx */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_ir_signal_idx(void) {
    ALOGD("mtk_gps_get_ir_signal_idx() called");
    return 0;
}

/* Demangled: mtk_gps_bin_check_next_fine */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bin_check_next_fine(void) {
    ALOGD("mtk_gps_bin_check_next_fine() called");
    return 0;
}

/* Demangled: mtk_gps_ofl_rst_stpgps_end_ntf */
extern "C" __attribute__((visibility("default"))) int mtk_gps_ofl_rst_stpgps_end_ntf(void) {
    ALOGD("mtk_gps_ofl_rst_stpgps_end_ntf() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_file_verify */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_file_verify(void) {
    ALOGD("mtk_agps_agent_epo_file_verify() called");
    return 0;
}

/* Demangled: mtk_gps_set_nmea_format */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_nmea_format(void) {
    ALOGD("mtk_gps_set_nmea_format() called");
    return 0;
}

/* Demangled: mtk_gps_flp_get_location */
extern "C" __attribute__((visibility("default"))) int mtk_gps_flp_get_location(void) {
    ALOGD("mtk_gps_flp_get_location() called");
    return 0;
}

/* Demangled: mtk_gps_get_MNL_Config_XML_param */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_MNL_Config_XML_param(void) {
    ALOGD("mtk_gps_get_MNL_Config_XML_param() called");
    return 0;
}

/* Demangled: mtk_gps_sys_function_register */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_function_register(void) {
    ALOGD("mtk_gps_sys_function_register() called");
    return 0;
}

/* Demangled: mtk_agps_agent_bee_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_bee_proc(void) {
    ALOGD("mtk_agps_agent_bee_proc() called");
    return 0;
}

/* Demangled: mtk_gps_bee_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bee_uninit(void) {
    ALOGD("mtk_gps_bee_uninit() called");
    return 0;
}

/* Demangled: mtk_gps_set_position */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_position(void) {
    ALOGD("mtk_gps_set_position() called");
    return 0;
}

/* Demangled: mtk_gps_get_ga_signal_idx */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_ga_signal_idx(void) {
    ALOGD("mtk_gps_get_ga_signal_idx() called");
    return 0;
}

/* Demangled: mtk_gps_set_phase_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_phase_test(void) {
    ALOGD("mtk_gps_set_phase_test() called");
    return 0;
}

/* Demangled: mtk_gps_msg_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_msg_init(void) {
    ALOGD("mtk_gps_msg_init() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_file_expire_check */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_file_expire_check(void) {
    ALOGD("mtk_agps_agent_qepo_file_expire_check() called");
    return 0;
}

/* Demangled: MTK_Bee_Query_BRDC_Status */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Query_BRDC_Status(void) {
    ALOGD("MTK_Bee_Query_BRDC_Status() called");
    return 0;
}

/* Demangled: mtk_gps_update_gps_data */
extern "C" __attribute__((visibility("default"))) int mtk_gps_update_gps_data(void) {
    ALOGD("mtk_gps_update_gps_data() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_proc(void) {
    ALOGD("mtk_agps_agent_epo_proc() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_bd_file_exsit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_bd_file_exsit(void) {
    ALOGD("mtk_agps_agent_qepo_bd_file_exsit() called");
    return 0;
}

/* Demangled: mtk_agps_mnl_epo_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_mnl_epo_proc(void) {
    ALOGD("mtk_agps_mnl_epo_proc() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_file_update */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_file_update(void) {
    ALOGD("mtk_agps_agent_epo_file_update() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_1sv_checksum_check */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_1sv_checksum_check(void) {
    ALOGD("mtk_agps_agent_epo_1sv_checksum_check() called");
    return 0;
}

/* Demangled: mtk_gps_update_cur_next */
extern "C" __attribute__((visibility("default"))) int mtk_gps_update_cur_next(void) {
    ALOGD("mtk_gps_update_cur_next() called");
    return 0;
}

/* Demangled: mtk_gps_nmea_input */
extern "C" __attribute__((visibility("default"))) int mtk_gps_nmea_input(void) {
    ALOGD("mtk_gps_nmea_input() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_state_change */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_state_change(void) {
    ALOGD("mtk_agps_agent_xepo_state_change() called");
    return 0;
}

/* Demangled: mtk_gps_mnl_get_sensor_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_mnl_get_sensor_info(void) {
    ALOGD("mtk_gps_mnl_get_sensor_info() called");
    return 0;
}

/* Demangled: mtk_gps_set_reg */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_reg(void) {
    ALOGD("mtk_gps_set_reg() called");
    return 0;
}

/* Demangled: mtk_gps_main_flow */
extern "C" __attribute__((visibility("default"))) int mtk_gps_main_flow(void) {
    ALOGD("mtk_gps_main_flow() called");
    return 0;
}

/* Demangled: mtk_gps_get_param */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_param(void) {
    ALOGD("mtk_gps_get_param() called");
    return 0;
}

/* Demangled: MTK_Bee_Enable_BEE */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Enable_BEE(void) {
    ALOGD("MTK_Bee_Enable_BEE() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_checksum_check */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_checksum_check(void) {
    ALOGD("mtk_agps_agent_xepo_checksum_check() called");
    return 0;
}

/* Demangled: mtk_gps_get_static_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_static_mode(void) {
    ALOGD("mtk_gps_get_static_mode() called");
    return 0;
}

/* Demangled: mtk_gps_set_Custom_AIC_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_Custom_AIC_mode(void) {
    ALOGD("mtk_gps_set_Custom_AIC_mode() called");
    return 0;
}

/* Demangled: mtk_gps_get_sbas_msg */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_sbas_msg(void) {
    ALOGD("mtk_gps_get_sbas_msg() called");
    return 0;
}

/* Demangled: mtk_gps_get_gnss_positioning_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_gnss_positioning_mode(void) {
    ALOGD("mtk_gps_get_gnss_positioning_mode() called");
    return 0;
}

/* Demangled: mtk_gps_get_sat_accurate_snr_L5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_sat_accurate_snr_L5(void) {
    ALOGD("mtk_gps_get_sat_accurate_snr_L5() called");
    return 0;
}

/* Demangled: mtk_gps_debug_wrapper */
extern "C" __attribute__((visibility("default"))) int mtk_gps_debug_wrapper(void) {
    ALOGD("mtk_gps_debug_wrapper() called");
    return 0;
}

/* Demangled: mtk_gps_D2_Set_Enable */
extern "C" __attribute__((visibility("default"))) int mtk_gps_D2_Set_Enable(void) {
    ALOGD("mtk_gps_D2_Set_Enable() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_proc */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_proc(void) {
    ALOGD("mtk_agps_agent_qepo_proc() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_read_gps_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_read_gps_time(void) {
    ALOGD("mtk_agps_agent_qepo_read_gps_time() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_bd_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_bd_uninit(void) {
    ALOGD("mtk_agps_agent_qepo_bd_uninit() called");
    return 0;
}

/* Demangled: mtk_gps_run */
extern "C" __attribute__((visibility("default"))) int mtk_gps_run(void) {
    ALOGD("mtk_gps_run() called");
    return 0;
}

/* Demangled: mtk_agps_agent_xepo_uninit */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_xepo_uninit(void) {
    ALOGD("mtk_agps_agent_xepo_uninit() called");
    return 0;
}

/* Demangled: mtk_gps_mnl_run */
extern "C" __attribute__((visibility("default"))) int mtk_gps_mnl_run(void) {
    ALOGD("mtk_gps_mnl_run() called");
    return 0;
}

/* Demangled: mtk_gps_set_gnss_operation_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_gnss_operation_mode(void) {
    ALOGD("mtk_gps_set_gnss_operation_mode() called");
    return 0;
}

/* Demangled: MTK_Bee_Disable_BRDC */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Disable_BRDC(void) {
    ALOGD("MTK_Bee_Disable_BRDC() called");
    return 0;
}

/* Demangled: mtk_gps_ofl_send_flp_data */
extern "C" __attribute__((visibility("default"))) int mtk_gps_ofl_send_flp_data(void) {
    ALOGD("mtk_gps_ofl_send_flp_data() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_ga_extract_data */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_ga_extract_data(void) {
    ALOGD("mtk_agps_agent_qepo_ga_extract_data() called");
    return 0;
}

/* Demangled: mtk_agps_agent_init */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_init(void) {
    ALOGD("mtk_agps_agent_init() called");
    return 0;
}

/* Demangled: mtk_gps_get_bd_sat_accurate_snr_L5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_bd_sat_accurate_snr_L5(void) {
    ALOGD("mtk_gps_get_bd_sat_accurate_snr_L5() called");
    return 0;
}

/* Demangled: mtk_gps_sys_alps_gps_dbg2file_encrypt_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_alps_gps_dbg2file_encrypt_init(void) {
    ALOGD("mtk_gps_sys_alps_gps_dbg2file_encrypt_init() called");
    return 0;
}

/* Demangled: mtk_gps_get_navigation_event */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_navigation_event(void) {
    ALOGD("mtk_gps_get_navigation_event() called");
    return 0;
}

/* Demangled: mtk_gps_get_beidou_chn_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_beidou_chn_test(void) {
    ALOGD("mtk_gps_get_beidou_chn_test() called");
    return 0;
}

/* Demangled: mtk_gps_bee_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_bee_init(void) {
    ALOGD("mtk_gps_bee_init() called");
    return 0;
}

/* Demangled: mtk_gps_inject_nlp_location */
extern "C" __attribute__((visibility("default"))) int mtk_gps_inject_nlp_location(void) {
    ALOGD("mtk_gps_inject_nlp_location() called");
    return 0;
}

/* Demangled: mtk_gps_time_update_notify */
extern "C" __attribute__((visibility("default"))) int mtk_gps_time_update_notify(void) {
    ALOGD("mtk_gps_time_update_notify() called");
    return 0;
}

/* Demangled: MTK_Bee_Enable_BRDC */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Enable_BRDC(void) {
    ALOGD("MTK_Bee_Enable_BRDC() called");
    return 0;
}

/* Demangled: mtk_gps_get_chn_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_chn_test(void) {
    ALOGD("mtk_gps_get_chn_test() called");
    return 0;
}

/* Demangled: mtk_gps_data_input */
extern "C" __attribute__((visibility("default"))) int mtk_gps_data_input(void) {
    ALOGD("mtk_gps_data_input() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_read_utc_time */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_read_utc_time(void) {
    ALOGD("mtk_agps_agent_epo_read_utc_time() called");
    return 0;
}

/* Demangled: mtk_gps_sys_event_wait */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_event_wait(void) {
    ALOGD("mtk_gps_sys_event_wait() called");
    return 0;
}

/* Demangled: mtk_gps_mnl_stop */
extern "C" __attribute__((visibility("default"))) int mtk_gps_mnl_stop(void) {
    ALOGD("mtk_gps_mnl_stop() called");
    return 0;
}

/* Demangled: mtk_gps_set_param */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_param(void) {
    ALOGD("mtk_gps_set_param() called");
    return 0;
}

/* Demangled: mtk_gps_get_rtc_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_rtc_info(void) {
    ALOGD("mtk_gps_get_rtc_info() called");
    return 0;
}

/* Demangled: mtk_gps_get_gnss_mode_config */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_gnss_mode_config(void) {
    ALOGD("mtk_gps_get_gnss_mode_config() called");
    return 0;
}

/* Demangled: MTK_Bee_Request_Data */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Request_Data(void) {
    ALOGD("MTK_Bee_Request_Data() called");
    return 0;
}

/* Demangled: mtk_gps_get_almanac */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_almanac(void) {
    ALOGD("mtk_gps_get_almanac() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_state_get */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_state_get(void) {
    ALOGD("mtk_agps_agent_qepo_state_get() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_get_file_size */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_get_file_size(void) {
    ALOGD("mtk_agps_agent_epo_get_file_size() called");
    return 0;
}

/* Demangled: mtk_gps_sys_alps_gps_dbg2file_encrypt_output */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_alps_gps_dbg2file_encrypt_output(void) {
    ALOGD("mtk_gps_sys_alps_gps_dbg2file_encrypt_output() called");
    return 0;
}

/* Demangled: mtk_gps_set_gnss_jammer_test */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_gnss_jammer_test(void) {
    ALOGD("mtk_gps_set_gnss_jammer_test() called");
    return 0;
}

/* Demangled: MTK_Bee_Send_New_Eph */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Send_New_Eph(void) {
    ALOGD("MTK_Bee_Send_New_Eph() called");
    return 0;
}

/* Demangled: mtk_gps_dsp_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_dsp_init(void) {
    ALOGD("mtk_gps_dsp_init() called");
    return 0;
}

/* Demangled: mtk_agps_agent_mtknav_file_update */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_mtknav_file_update(void) {
    ALOGD("mtk_agps_agent_mtknav_file_update() called");
    return 0;
}

/* Demangled: MTK_Bee_Receive_End_Data */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Receive_End_Data(void) {
    ALOGD("MTK_Bee_Receive_End_Data() called");
    return 0;
}

/* Demangled: mtk_gps_log_line_enc_inplace */
extern "C" __attribute__((visibility("default"))) int mtk_gps_log_line_enc_inplace(void) {
    ALOGD("mtk_gps_log_line_enc_inplace() called");
    return 0;
}

/* Demangled: mtk_gps_get_measurement */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_measurement(void) {
    ALOGD("mtk_gps_get_measurement() called");
    return 0;
}

/* Demangled: mtk_gps_set_agps_machine */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_agps_machine(void) {
    ALOGD("mtk_gps_set_agps_machine() called");
    return 0;
}

/* Demangled: mtk_gps_clean_next_record */
extern "C" __attribute__((visibility("default"))) int mtk_gps_clean_next_record(void) {
    ALOGD("mtk_gps_clean_next_record() called");
    return 0;
}

/* Demangled: mtk_gps_get_word_parity */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_word_parity(void) {
    ALOGD("mtk_gps_get_word_parity() called");
    return 0;
}

/* Demangled: mtk_gps_set_tcxo_mode */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_tcxo_mode(void) {
    ALOGD("mtk_gps_set_tcxo_mode() called");
    return 0;
}

/* Demangled: mtk_gps_get_bd_signal_idx */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_bd_signal_idx(void) {
    ALOGD("mtk_gps_get_bd_signal_idx() called");
    return 0;
}

/* Demangled: mtk_gps_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_init(void) {
    ALOGD("mtk_gps_init() called");
    return 0;
}

/* Demangled: mtk_gps_agps_lppe_check */
extern "C" __attribute__((visibility("default"))) int mtk_gps_agps_lppe_check(void) {
    ALOGD("mtk_gps_agps_lppe_check() called");
    return 0;
}

/* Demangled: mtk_gps_get_glon_sv_info */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_glon_sv_info(void) {
    ALOGD("mtk_gps_get_glon_sv_info() called");
    return 0;
}

/* Demangled: MTK_Bee_Get_New_Eph_Info */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Get_New_Eph_Info(void) {
    ALOGD("MTK_Bee_Get_New_Eph_Info() called");
    return 0;
}

/* Demangled: mtk_gps_system_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_system_init(void) {
    ALOGD("mtk_gps_system_init() called");
    return 0;
}

/* Demangled: mtk_gps_agps_input */
extern "C" __attribute__((visibility("default"))) int mtk_gps_agps_input(void) {
    ALOGD("mtk_gps_agps_input() called");
    return 0;
}

/* Demangled: mtk_agps_agent_check_recv_eph */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_check_recv_eph(void) {
    ALOGD("mtk_agps_agent_check_recv_eph() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_with_header_get_sv_cnt */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_with_header_get_sv_cnt(void) {
    ALOGD("mtk_agps_agent_qepo_with_header_get_sv_cnt() called");
    return 0;
}

/* Demangled: mtk_gps_set_MNL_Config_XML_param */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_MNL_Config_XML_param(void) {
    ALOGD("mtk_gps_set_MNL_Config_XML_param() called");
    return 0;
}

/* Demangled: MTK_Bee_Disable_BEE */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Disable_BEE(void) {
    ALOGD("MTK_Bee_Disable_BEE() called");
    return 0;
}

/* Demangled: mtk_agps_agent_epo_init */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_epo_init(void) {
    ALOGD("mtk_agps_agent_epo_init() called");
    return 0;
}

/* Demangled: mtk_gps_get_clock */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_clock(void) {
    ALOGD("mtk_gps_get_clock() called");
    return 0;
}

/* Demangled: mtk_gps_set_debug_type */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_debug_type(void) {
    ALOGD("mtk_gps_set_debug_type() called");
    return 0;
}

/* Demangled: mtk_gps_set_reg_L5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_reg_L5(void) {
    ALOGD("mtk_gps_set_reg_L5() called");
    return 0;
}

/* Demangled: MTK_Bee_Get_Eph_Info */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Get_Eph_Info(void) {
    ALOGD("MTK_Bee_Get_Eph_Info() called");
    return 0;
}

/* Demangled: mtk_gps_sys_nmea_output */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_nmea_output(void) {
    ALOGD("mtk_gps_sys_nmea_output() called");
    return 0;
}

/* Demangled: mtk_gps_set_pmtk_data */
extern "C" __attribute__((visibility("default"))) int mtk_gps_set_pmtk_data(void) {
    ALOGD("mtk_gps_set_pmtk_data() called");
    return 0;
}

/* Demangled: MTK_Bee_Query_BEE_Status */
extern "C" __attribute__((visibility("default"))) int MTK_Bee_Query_BEE_Status(void) {
    ALOGD("MTK_Bee_Query_BEE_Status() called");
    return 0;
}

/* Demangled: mtk_gps_clean_mvcd_recv_state */
extern "C" __attribute__((visibility("default"))) int mtk_gps_clean_mvcd_recv_state(void) {
    ALOGD("mtk_gps_clean_mvcd_recv_state() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_bd_extract_data */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_bd_extract_data(void) {
    ALOGD("mtk_agps_agent_qepo_bd_extract_data() called");
    return 0;
}

/* Demangled: mtk_gps_sys_event_set */
extern "C" __attribute__((visibility("default"))) int mtk_gps_sys_event_set(void) {
    ALOGD("mtk_gps_sys_event_set() called");
    return 0;
}

/* Demangled: mtk_gps_get_qz_signal_idx */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_qz_signal_idx(void) {
    ALOGD("mtk_gps_get_qz_signal_idx() called");
    return 0;
}

/* Demangled: mtk_agps_agent_qepo_init */
extern "C" __attribute__((visibility("default"))) int mtk_agps_agent_qepo_init(void) {
    ALOGD("mtk_agps_agent_qepo_init() called");
    return 0;
}

/* Demangled: mtk_gps_get_chip_capability */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_chip_capability(void) {
    ALOGD("mtk_gps_get_chip_capability() called");
    return 0;
}

/* Demangled: mtk_gps_get_reg_L5 */
extern "C" __attribute__((visibility("default"))) int mtk_gps_get_reg_L5(void) {
    ALOGD("mtk_gps_get_reg_L5() called");
    return 0;
}
