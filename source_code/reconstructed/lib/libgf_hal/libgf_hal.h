/*
 * Reverse-Engineered ABI Specification for: libgf_hal.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgf_hal.so
 */

#ifndef BEGONIA_RE_LIBGF_HAL_H
#define BEGONIA_RE_LIBGF_HAL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: gf_hal_get_fw_info */
/* Demangled: gf_hal_get_fw_info */
int gf_hal_get_fw_info(void);

/* Symbol: gf_hal_device_disable */
/* Demangled: gf_hal_device_disable */
int gf_hal_device_disable(void);

/* Symbol: gf_hal_handle_frr_database */
/* Demangled: gf_hal_handle_frr_database */
int gf_hal_handle_frr_database(void);

/* Symbol: gf_hal_nav_assert_config_interval */
/* Demangled: gf_hal_nav_assert_config_interval */
int gf_hal_nav_assert_config_interval(void);

/* Symbol: gf_dump_memmgr_pool */
/* Demangled: gf_dump_memmgr_pool */
int gf_dump_memmgr_pool(void);

/* Symbol: gf_hal_notify_test_remove_succeeded */
/* Demangled: gf_hal_notify_test_remove_succeeded */
int gf_hal_notify_test_remove_succeeded(void);

/* Symbol: gf_disable_dump */
/* Demangled: gf_disable_dump */
int gf_disable_dump(void);

/* Symbol: gf_hal_screen_on */
/* Demangled: gf_hal_screen_on */
int gf_hal_screen_on(void);

/* Symbol: gf_hal_common_cancel */
/* Demangled: gf_hal_common_cancel */
int gf_hal_common_cancel(void);

/* Symbol: gf_hal_notify_authentication_succeeded */
/* Demangled: gf_hal_notify_authentication_succeeded */
int gf_hal_notify_authentication_succeeded(void);

/* Symbol: gf_get_dump_version */
/* Demangled: gf_get_dump_version */
int gf_get_dump_version(void);

/* Symbol: gf_get_sensor_width */
/* Demangled: gf_get_sensor_width */
int gf_get_sensor_width(void);

/* Symbol: gf_hal_enable_fingerprint_module */
/* Demangled: gf_hal_enable_fingerprint_module */
int gf_hal_enable_fingerprint_module(void);

/* Symbol: gf_hal_common_post_enroll */
/* Demangled: gf_hal_common_post_enroll */
int gf_hal_common_post_enroll(void);

/* Symbol: ic_product_time_month */
/* Demangled: ic_product_time_month */
extern void* ic_product_time_month;

/* Symbol: chip_table */
/* Demangled: chip_table */
extern void* chip_table;

/* Symbol: hal_notify_test_pixel_open */
/* Demangled: hal_notify_test_pixel_open */
int hal_notify_test_pixel_open(void);

/* Symbol: mkdirs */
/* Demangled: mkdirs */
int mkdirs(void);

/* Symbol: gf_get_chip_type */
/* Demangled: gf_get_chip_type */
int gf_get_chip_type(void);

/* Symbol: gf_dump_init */
/* Demangled: gf_dump_init */
int gf_dump_init(void);

/* Symbol: gf_hal_common_authenticate_success */
/* Demangled: gf_hal_common_authenticate_success */
int gf_hal_common_authenticate_success(void);

/* Symbol: gf_hal_common_lockout */
/* Demangled: gf_hal_common_lockout */
int gf_hal_common_lockout(void);

/* Symbol: gf_hal_dump_performance */
/* Demangled: gf_hal_dump_performance */
int gf_hal_dump_performance(void);

/* Symbol: gf_set_dump_path */
/* Demangled: gf_set_dump_path */
int gf_set_dump_path(void);

/* Symbol: hal_milan_a_series_irq_test */
/* Demangled: hal_milan_a_series_irq_test */
int hal_milan_a_series_irq_test(void);

/* Symbol: ic_product_factory */
/* Demangled: ic_product_factory */
extern void* ic_product_factory;

/* Symbol: gf_hal_reset_chip */
/* Demangled: gf_hal_reset_chip */
int gf_hal_reset_chip(void);

/* Symbol: g_enroll_invalid_template_num */
/* Demangled: g_enroll_invalid_template_num */
extern void* g_enroll_invalid_template_num;

/* Symbol: hal_test_encode_int16 */
/* Demangled: hal_test_encode_int16 */
int hal_test_encode_int16(void);

/* Symbol: gf_hal_milan_dump_chip_operation_data */
/* Demangled: gf_hal_milan_dump_chip_operation_data */
int gf_hal_milan_dump_chip_operation_data(void);

/* Symbol: ic_product_time_year */
/* Demangled: ic_product_time_year */
extern void* ic_product_time_year;

/* Symbol: g_nav_click_status */
/* Demangled: g_nav_click_status */
extern void* g_nav_click_status;

/* Symbol: gf_hal_common_navigate */
/* Demangled: gf_hal_common_navigate */
int gf_hal_common_navigate(void);

/* Symbol: gSnrRawDataBase */
/* Demangled: gSnrRawDataBase */
extern void* gSnrRawDataBase;

/* Symbol: hal_test_enroll */
/* Demangled: hal_test_enroll */
int hal_test_enroll(void);

/* Symbol: gf_bigdata_dump_template_info */
/* Demangled: gf_bigdata_dump_template_info */
int gf_bigdata_dump_template_info(void);

/* Symbol: gf_strtestcmd */
/* Demangled: gf_strtestcmd */
int gf_strtestcmd(void);

/* Symbol: gf_hal_common_enroll */
/* Demangled: gf_hal_common_enroll */
int gf_hal_common_enroll(void);

/* Symbol: SNR_Cal */
/* Demangled: SNR_Cal */
int SNR_Cal(void);

/* Symbol: gf_enable_dump */
/* Demangled: gf_enable_dump */
int gf_enable_dump(void);

/* Symbol: gf_init_dump_config */
/* Demangled: gf_init_dump_config */
int gf_init_dump_config(void);

/* Symbol: g_work_state */
/* Demangled: g_work_state */
extern void* g_work_state;

/* Symbol: gf_hal_common_irq_finger_long_press */
/* Demangled: gf_hal_common_irq_finger_long_press */
int gf_hal_common_irq_finger_long_press(void);

/* Symbol: hal_notify_test_frr_far_record_authenticate */
/* Demangled: hal_notify_test_frr_far_record_authenticate */
int hal_notify_test_frr_far_record_authenticate(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: g_enroll_timer_sec */
/* Demangled: g_enroll_timer_sec */
extern void* g_enroll_timer_sec;

/* Symbol: gf_hal_common_screen_on */
/* Demangled: gf_hal_common_screen_on */
int gf_hal_common_screen_on(void);

/* Symbol: gf_dump_raw_data */
/* Demangled: gf_dump_raw_data */
int gf_dump_raw_data(void);

/* Symbol: g_irq_time_milan */
/* Demangled: g_irq_time_milan */
extern void* g_irq_time_milan;

/* Symbol: gf_hal_common_reset_lockout */
/* Demangled: gf_hal_common_reset_lockout */
int gf_hal_common_reset_lockout(void);

/* Symbol: gf_hal_uinput_device_open */
/* Demangled: gf_hal_uinput_device_open */
int gf_hal_uinput_device_open(void);

/* Symbol: gf_hal_milan_irq_test */
/* Demangled: gf_hal_milan_irq_test */
int gf_hal_milan_irq_test(void);

/* Symbol: gf_hal_pre_enroll */
/* Demangled: gf_hal_pre_enroll */
int gf_hal_pre_enroll(void);

/* Symbol: gf_hal_common_camera_capture */
/* Demangled: gf_hal_common_camera_capture */
int gf_hal_common_camera_capture(void);

/* Symbol: gf_hal_create_and_set_esd_timer */
/* Demangled: gf_hal_create_and_set_esd_timer */
int gf_hal_create_and_set_esd_timer(void);

/* Symbol: gf_dump_prepare_for_test_cmd */
/* Demangled: gf_dump_prepare_for_test_cmd */
int gf_dump_prepare_for_test_cmd(void);

/* Symbol: gf_get_nav_height */
/* Demangled: gf_get_nav_height */
int gf_get_nav_height(void);

/* Symbol: g_irq_time */
/* Demangled: g_irq_time */
extern void* g_irq_time;

/* Symbol: _ZN7android13IPowerManager10descriptorE */
/* Demangled: android::IPowerManager::descriptor */
extern void* _ZN7android13IPowerManager10descriptorE;

/* Symbol: _ZTTN7android13IPowerManagerE */
/* Demangled: VTT for android::IPowerManager */
extern void* _ZTTN7android13IPowerManagerE;

/* Symbol: g_hal_mutex */
/* Demangled: g_hal_mutex */
extern void* g_hal_mutex;

/* Symbol: gf_hal_notify_authentication_fido_failed */
/* Demangled: gf_hal_notify_authentication_fido_failed */
int gf_hal_notify_authentication_fido_failed(void);

/* Symbol: gf_hal_send_uinput_nav_event */
/* Demangled: gf_hal_send_uinput_nav_event */
int gf_hal_send_uinput_nav_event(void);

/* Symbol: gf_queue_clear_unused_irq */
/* Demangled: gf_queue_clear_unused_irq */
int gf_queue_clear_unused_irq(void);

/* Symbol: gf_hal_notify_test_enrollment_progress */
/* Demangled: gf_hal_notify_test_enrollment_progress */
int gf_hal_notify_test_enrollment_progress(void);

/* Symbol: gf_get_boot_time_str */
/* Demangled: gf_get_boot_time_str */
int gf_get_boot_time_str(void);

/* Symbol: gf_hal_milan_dump_chip_init_data */
/* Demangled: gf_hal_milan_dump_chip_init_data */
int gf_hal_milan_dump_chip_init_data(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZTCN7android13IPowerManagerE0_NS_10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-android::IPowerManager */
extern void* _ZTCN7android13IPowerManagerE0_NS_10IInterfaceE;

/* Symbol: gf_hal_enable_power */
/* Demangled: gf_hal_enable_power */
int gf_hal_enable_power(void);

/* Symbol: gf_hal_common_save_otp_info_into_sdcard */
/* Demangled: gf_hal_common_save_otp_info_into_sdcard */
int gf_hal_common_save_otp_info_into_sdcard(void);

/* Symbol: gf_hal_dump_template */
/* Demangled: gf_hal_dump_template */
int gf_hal_dump_template(void);

/* Symbol: g_esd_timer_id */
/* Demangled: g_esd_timer_id */
extern void* g_esd_timer_id;

/* Symbol: key_table */
/* Demangled: key_table */
extern void* key_table;

/* Symbol: _ZTTN7android14BpPowerManagerE */
/* Demangled: VTT for android::BpPowerManager */
extern void* _ZTTN7android14BpPowerManagerE;

/* Symbol: g_down_irq_time */
/* Demangled: g_down_irq_time */
extern void* g_down_irq_time;

/* Symbol: gf_hal_common_get_id_list */
/* Demangled: gf_hal_common_get_id_list */
int gf_hal_common_get_id_list(void);

/* Symbol: gf_hal_nav_reset */
/* Demangled: gf_hal_nav_reset */
int gf_hal_nav_reset(void);

/* Symbol: gf_hal_free_snr_memmory */
/* Demangled: gf_hal_free_snr_memmory */
int gf_hal_free_snr_memmory(void);

/* Symbol: hal_notify_test_spi_transfer */
/* Demangled: hal_notify_test_spi_transfer */
int hal_notify_test_spi_transfer(void);

/* Symbol: gf_dump_template */
/* Demangled: gf_dump_template */
int gf_dump_template(void);

/* Symbol: gf_is_operation_data_dump_allowed */
/* Demangled: gf_is_operation_data_dump_allowed */
int gf_is_operation_data_dump_allowed(void);

/* Symbol: ic_product_time_day */
/* Demangled: ic_product_time_day */
extern void* ic_product_time_day;

/* Symbol: g_failed_attempts */
/* Demangled: g_failed_attempts */
extern void* g_failed_attempts;

/* Symbol: gf_hal_common_resume_enroll */
/* Demangled: gf_hal_common_resume_enroll */
int gf_hal_common_resume_enroll(void);

/* Symbol: authen_fd */
/* Demangled: authen_fd */
extern void* authen_fd;

/* Symbol: gf_queue_exit */
/* Demangled: gf_queue_exit */
int gf_queue_exit(void);

/* Symbol: hal_notify_test_frr_far_record_calibration */
/* Demangled: hal_notify_test_frr_far_record_calibration */
int hal_notify_test_frr_far_record_calibration(void);

/* Symbol: hal_test_encode_float */
/* Demangled: hal_test_encode_float */
int hal_test_encode_float(void);

/* Symbol: gf_get_dump_op_by_irq_op */
/* Demangled: gf_get_dump_op_by_irq_op */
int gf_get_dump_op_by_irq_op(void);

/* Symbol: gf_is_dump_device_info_allowed */
/* Demangled: gf_is_dump_device_info_allowed */
int gf_is_dump_device_info_allowed(void);

/* Symbol: gf_hal_enable_ff_feature */
/* Demangled: gf_hal_enable_ff_feature */
int gf_hal_enable_ff_feature(void);

/* Symbol: gf_strerror */
/* Demangled: gf_strerror */
int gf_strerror(void);

/* Symbol: g_nav_click_status_mutex */
/* Demangled: g_nav_click_status_mutex */
extern void* g_nav_click_status_mutex;

/* Symbol: g_sensor_row */
/* Demangled: g_sensor_row */
extern void* g_sensor_row;

/* Symbol: gf_hal_screen_off */
/* Demangled: gf_hal_screen_off */
int gf_hal_screen_off(void);

/* Symbol: g_enroll_timer_id */
/* Demangled: g_enroll_timer_id */
extern void* g_enroll_timer_id;

/* Symbol: hal_notify_test_sensor_validity */
/* Demangled: hal_notify_test_sensor_validity */
int hal_notify_test_sensor_validity(void);

/* Symbol: operation_table */
/* Demangled: operation_table */
extern void* operation_table;

/* Symbol: gf_hal_reset_lockout */
/* Demangled: gf_hal_reset_lockout */
int gf_hal_reset_lockout(void);

/* Symbol: gf_get_dump_encryptor_version */
/* Demangled: gf_get_dump_encryptor_version */
int gf_get_dump_encryptor_version(void);

/* Symbol: gf_hal_authenticate_fido */
/* Demangled: gf_hal_authenticate_fido */
int gf_hal_authenticate_fido(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: gf_hal_control_spi_clock */
/* Demangled: gf_hal_control_spi_clock */
int gf_hal_control_spi_clock(void);

/* Symbol: gf_hal_start_hbd */
/* Demangled: gf_hal_start_hbd */
int gf_hal_start_hbd(void);

/* Symbol: head */
/* Demangled: head */
extern void* head;

/* Symbol: hal_notify_test_sensor_fine */
/* Demangled: hal_notify_test_sensor_fine */
int hal_notify_test_sensor_fine(void);

/* Symbol: gf_dump_encoder_fopen */
/* Demangled: gf_dump_encoder_fopen */
int gf_dump_encoder_fopen(void);

/* Symbol: g_sensor_nav_row */
/* Demangled: g_sensor_nav_row */
extern void* g_sensor_nav_row;

/* Symbol: gf_hal_update_stitch */
/* Demangled: gf_hal_update_stitch */
int gf_hal_update_stitch(void);

/* Symbol: hal_notify_test_fpc_detected */
/* Demangled: hal_notify_test_fpc_detected */
int hal_notify_test_fpc_detected(void);

/* Symbol: gf_dump_data_by_operation */
/* Demangled: gf_dump_data_by_operation */
int gf_dump_data_by_operation(void);

/* Symbol: hal_milan_an_series_irq_test */
/* Demangled: hal_milan_an_series_irq_test */
int hal_milan_an_series_irq_test(void);

/* Symbol: _ZN7android13IPowerManager11asInterfaceERKNS_2spINS_7IBinderEEE */
/* Demangled: android::IPowerManager::asInterface(android::sp<android::IBinder> const&) */
int _ZN7android13IPowerManager11asInterfaceERKNS_2spINS_7IBinderEEE(void);

/* Symbol: gf_hal_close */
/* Demangled: gf_hal_close */
int gf_hal_close(void);

/* Symbol: g_sensor_mutex */
/* Demangled: g_sensor_mutex */
extern void* g_sensor_mutex;

/* Symbol: gf_hal_common_pre_enroll */
/* Demangled: gf_hal_common_pre_enroll */
int gf_hal_common_pre_enroll(void);

/* Symbol: Quick_Sort */
/* Demangled: Quick_Sort */
int Quick_Sort(void);

/* Symbol: _ZN7android13IPowerManager14getDefaultImplEv */
/* Demangled: android::IPowerManager::getDefaultImpl() */
int _ZN7android13IPowerManager14getDefaultImplEv(void);

/* Symbol: JudgeValidByEuDistance */
/* Demangled: JudgeValidByEuDistance */
int JudgeValidByEuDistance(void);

/* Symbol: gf_hal_enumerate */
/* Demangled: gf_hal_enumerate */
int gf_hal_enumerate(void);

/* Symbol: gf_hal_destroy_timer */
/* Demangled: gf_hal_destroy_timer */
int gf_hal_destroy_timer(void);

/* Symbol: gf_hal_nav_listener */
/* Demangled: gf_hal_nav_listener */
int gf_hal_nav_listener(void);

/* Symbol: gf_hal_notify_enrollment_progress */
/* Demangled: gf_hal_notify_enrollment_progress */
int gf_hal_notify_enrollment_progress(void);

/* Symbol: gf_hal_save_auth_ratio_record */
/* Demangled: gf_hal_save_auth_ratio_record */
int gf_hal_save_auth_ratio_record(void);

/* Symbol: gf_hal_netlink_recv */
/* Demangled: gf_hal_netlink_recv */
int gf_hal_netlink_recv(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: dump_chip_operation_data_stub */
/* Demangled: dump_chip_operation_data_stub */
int dump_chip_operation_data_stub(void);

/* Symbol: g_operation */
/* Demangled: g_operation */
extern void* g_operation;

/* Symbol: gf_hal_download_cfg */
/* Demangled: gf_hal_download_cfg */
int gf_hal_download_cfg(void);

/* Symbol: GF_SNR_TEST_TIME_OUT_THRESHOLD */
/* Demangled: GF_SNR_TEST_TIME_OUT_THRESHOLD */
extern void* GF_SNR_TEST_TIME_OUT_THRESHOLD;

/* Symbol: gf_get_err_table_len */
/* Demangled: gf_get_err_table_len */
int gf_get_err_table_len(void);

/* Symbol: gf_hal_is_id_valid */
/* Demangled: gf_hal_is_id_valid */
int gf_hal_is_id_valid(void);

/* Symbol: g_screen_status */
/* Demangled: g_screen_status */
extern void* g_screen_status;

/* Symbol: gf_handle_dump_buf */
/* Demangled: gf_handle_dump_buf */
int gf_handle_dump_buf(void);

/* Symbol: g_spi_speed */
/* Demangled: g_spi_speed */
extern void* g_spi_speed;

/* Symbol: gf_dequeue */
/* Demangled: gf_dequeue */
int gf_dequeue(void);

/* Symbol: gf_hal_enable_irq */
/* Demangled: gf_hal_enable_irq */
int gf_hal_enable_irq(void);

/* Symbol: gf_hal_notify_test_error_info */
/* Demangled: gf_hal_notify_test_error_info */
int gf_hal_notify_test_error_info(void);

/* Symbol: g_is_only_dump_broken_check */
/* Demangled: g_is_only_dump_broken_check */
extern void* g_is_only_dump_broken_check;

/* Symbol: gf_hal_common_set_safe_class */
/* Demangled: gf_hal_common_set_safe_class */
int gf_hal_common_set_safe_class(void);

/* Symbol: gf_hal_nav_code_convert */
/* Demangled: gf_hal_nav_code_convert */
int gf_hal_nav_code_convert(void);

/* Symbol: gf_hal_common_screen_off */
/* Demangled: gf_hal_common_screen_off */
int gf_hal_common_screen_off(void);

/* Symbol: _ZN7android13IPowerManagerD0Ev */
/* Demangled: android::IPowerManager::~IPowerManager() */
int _ZN7android13IPowerManagerD0Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: hal_notify_test_memory_check */
/* Demangled: hal_notify_test_memory_check */
int hal_notify_test_memory_check(void);

/* Symbol: gf_dump_encoder_fwrite */
/* Demangled: gf_dump_encoder_fwrite */
int gf_dump_encoder_fwrite(void);

/* Symbol: g_hal_function */
/* Demangled: g_hal_function */
extern void* g_hal_function;

/* Symbol: gf_dump_encoder_destroy */
/* Demangled: gf_dump_encoder_destroy */
int gf_dump_encoder_destroy(void);

/* Symbol: gf_hal_init_finished */
/* Demangled: gf_hal_init_finished */
int gf_hal_init_finished(void);

/* Symbol: gf_hal_nav_long_press_timer_thread */
/* Demangled: gf_hal_nav_long_press_timer_thread */
int gf_hal_nav_long_press_timer_thread(void);

/* Symbol: gf_hal_get_tag_data_pos */
/* Demangled: gf_hal_get_tag_data_pos */
int gf_hal_get_tag_data_pos(void);

/* Symbol: gSnrRawDataTouch */
/* Demangled: gSnrRawDataTouch */
extern void* gSnrRawDataTouch;

/* Symbol: gf_hal_notify_test_authentication_failed */
/* Demangled: gf_hal_notify_test_authentication_failed */
int gf_hal_notify_test_authentication_failed(void);

/* Symbol: hal_notify_test_bad_point */
/* Demangled: hal_notify_test_bad_point */
int hal_notify_test_bad_point(void);

/* Symbol: cmd_id_table */
/* Demangled: cmd_id_table */
extern void* cmd_id_table;

/* Symbol: gf_hal_resume_enroll */
/* Demangled: gf_hal_resume_enroll */
int gf_hal_resume_enroll(void);

/* Symbol: dump_chip_init_data_stub */
/* Demangled: dump_chip_init_data_stub */
int dump_chip_init_data_stub(void);

/* Symbol: gf_hal_common_close */
/* Demangled: gf_hal_common_close */
int gf_hal_common_close(void);

/* Symbol: gf_hal_set_timer */
/* Demangled: gf_hal_set_timer */
int gf_hal_set_timer(void);

/* Symbol: gf_get_operation_result_str */
/* Demangled: gf_get_operation_result_str */
int gf_get_operation_result_str(void);

/* Symbol: hal_oswego_irq_test */
/* Demangled: hal_oswego_irq_test */
int hal_oswego_irq_test(void);

/* Symbol: g_sensor_col */
/* Demangled: g_sensor_col */
extern void* g_sensor_col;

/* Symbol: gf_is_dump_encrypt_enabled */
/* Demangled: gf_is_dump_encrypt_enabled */
int gf_is_dump_encrypt_enabled(void);

/* Symbol: gf_hal_cancel */
/* Demangled: gf_hal_cancel */
int gf_hal_cancel(void);

/* Symbol: gf_hal_common_authenticate_fido_success */
/* Demangled: gf_hal_common_authenticate_fido_success */
int gf_hal_common_authenticate_fido_success(void);

/* Symbol: gf_hal_uinpt_reportkey */
/* Demangled: gf_hal_uinpt_reportkey */
int gf_hal_uinpt_reportkey(void);

/* Symbol: gf_hal_test_snr_get_touch_data */
/* Demangled: gf_hal_test_snr_get_touch_data */
int gf_hal_test_snr_get_touch_data(void);

/* Symbol: gf_hal_authenticate */
/* Demangled: gf_hal_authenticate */
int gf_hal_authenticate(void);

/* Symbol: gf_hal_common_remove_for_sync_list */
/* Demangled: gf_hal_common_remove_for_sync_list */
int gf_hal_common_remove_for_sync_list(void);

/* Symbol: gf_hal_lockout */
/* Demangled: gf_hal_lockout */
int gf_hal_lockout(void);

/* Symbol: gf_hal_save */
/* Demangled: gf_hal_save */
int gf_hal_save(void);

/* Symbol: gf_hal_chip_info */
/* Demangled: gf_hal_chip_info */
int gf_hal_chip_info(void);

/* Symbol: gf_dump_encoder_reset */
/* Demangled: gf_dump_encoder_reset */
int gf_dump_encoder_reset(void);

/* Symbol: gf_decode_and_write_file */
/* Demangled: gf_decode_and_write_file */
int gf_decode_and_write_file(void);

/* Symbol: _ZN7android2spINS_13IPowerManagerEEaSEPS1_ */
/* Demangled: android::sp<android::IPowerManager>::operator=(android::IPowerManager*) */
int _ZN7android2spINS_13IPowerManagerEEaSEPS1_(void);

/* Symbol: gf_hal_camera_capture */
/* Demangled: gf_hal_camera_capture */
int gf_hal_camera_capture(void);

/* Symbol: gf_hal_disable_power */
/* Demangled: gf_hal_disable_power */
int gf_hal_disable_power(void);

/* Symbol: gf_hal_common_remove */
/* Demangled: gf_hal_common_remove */
int gf_hal_common_remove(void);

/* Symbol: gf_hal_milan_an_series_function_customize */
/* Demangled: gf_hal_milan_an_series_function_customize */
int gf_hal_milan_an_series_function_customize(void);

/* Symbol: gf_get_time_stamp */
/* Demangled: gf_get_time_stamp */
int gf_get_time_stamp(void);

/* Symbol: _ZTCN7android14BpPowerManagerE4_NS_9BpRefBaseE */
/* Demangled: construction vtable for android::BpRefBase-in-android::BpPowerManager */
extern void* _ZTCN7android14BpPowerManagerE4_NS_9BpRefBaseE;

/* Symbol: gf_hal_post_enroll */
/* Demangled: gf_hal_post_enroll */
int gf_hal_post_enroll(void);

/* Symbol: gf_hal_common_authenticate_not_match */
/* Demangled: gf_hal_common_authenticate_not_match */
int gf_hal_common_authenticate_not_match(void);

/* Symbol: gf_hal_common_get_auth_id */
/* Demangled: gf_hal_common_get_auth_id */
int gf_hal_common_get_auth_id(void);

/* Symbol: gf_hal_test_cancel */
/* Demangled: gf_hal_test_cancel */
int gf_hal_test_cancel(void);

/* Symbol: hal_notify_test_rawdata_saturated */
/* Demangled: hal_notify_test_rawdata_saturated */
int hal_notify_test_rawdata_saturated(void);

/* Symbol: hal_test_decode_uint32 */
/* Demangled: hal_test_decode_uint32 */
int hal_test_decode_uint32(void);

/* Symbol: gf_sec_ptrace_self */
/* Demangled: gf_sec_ptrace_self */
int gf_sec_ptrace_self(void);

/* Symbol: gf_hal_notify_authentication_failed */
/* Demangled: gf_hal_notify_authentication_failed */
int gf_hal_notify_authentication_failed(void);

/* Symbol: g_sensor_nav_col */
/* Demangled: g_sensor_nav_col */
extern void* g_sensor_nav_col;

/* Symbol: gf_is_dump_enabled */
/* Demangled: gf_is_dump_enabled */
int gf_is_dump_enabled(void);

/* Symbol: hal_notify_test_performance */
/* Demangled: hal_notify_test_performance */
int hal_notify_test_performance(void);

/* Symbol: _ZN7android13IPowerManagerD1Ev */
/* Demangled: android::IPowerManager::~IPowerManager() */
int _ZN7android13IPowerManagerD1Ev(void);

/* Symbol: _ZTv0_n12_N7android13IPowerManagerD0Ev */
/* Demangled: virtual thunk to android::IPowerManager::~IPowerManager() */
int _ZTv0_n12_N7android13IPowerManagerD0Ev(void);

/* Symbol: gf_hal_enroll */
/* Demangled: gf_hal_enroll */
int gf_hal_enroll(void);

/* Symbol: g_nav_long_press_timer_id */
/* Demangled: g_nav_long_press_timer_id */
extern void* g_nav_long_press_timer_id;

/* Symbol: gf_hal_common_enumerate */
/* Demangled: gf_hal_common_enumerate */
int gf_hal_common_enumerate(void);

/* Symbol: gf_hal_download_fw */
/* Demangled: gf_hal_download_fw */
int gf_hal_download_fw(void);

/* Symbol: gf_hal_judge_delete_frr_database */
/* Demangled: gf_hal_judge_delete_frr_database */
int gf_hal_judge_delete_frr_database(void);

/* Symbol: Middle_Surface_Fliter */
/* Demangled: Middle_Surface_Fliter */
int Middle_Surface_Fliter(void);

/* Symbol: Partition */
/* Demangled: Partition */
int Partition(void);

/* Symbol: _ZTCN7android14BpPowerManagerE0_NS_10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-android::BpPowerManager */
extern void* _ZTCN7android14BpPowerManagerE0_NS_10IInterfaceE;

/* Symbol: hal_test_encode_double */
/* Demangled: hal_test_encode_double */
int hal_test_encode_double(void);

/* Symbol: gf_strcmd */
/* Demangled: gf_strcmd */
int gf_strcmd(void);

/* Symbol: _ZN7android13IPowerManager12default_implE */
/* Demangled: android::IPowerManager::default_impl */
extern void* _ZN7android13IPowerManager12default_implE;

/* Symbol: _ZN7android13IPowerManager14setDefaultImplENSt3__110unique_ptrIS0_NS1_14default_deleteIS0_EEEE */
/* Demangled: android::IPowerManager::setDefaultImpl(std::__1::unique_ptr<android::IPowerManager, std::__1::default_delete<android::IPowerManager> >) */
int _ZN7android13IPowerManager14setDefaultImplENSt3__110unique_ptrIS0_NS1_14default_deleteIS0_EEEE(void);

/* Symbol: gf_hal_common_irq_key */
/* Demangled: gf_hal_common_irq_key */
int gf_hal_common_irq_key(void);

/* Symbol: gf_hal_invoke_command */
/* Demangled: gf_hal_invoke_command */
int gf_hal_invoke_command(void);

/* Symbol: gf_hal_get_tag_data */
/* Demangled: gf_hal_get_tag_data */
int gf_hal_get_tag_data(void);

/* Symbol: hal_notify_test_real_time_data */
/* Demangled: hal_notify_test_real_time_data */
int hal_notify_test_real_time_data(void);

/* Symbol: gfIsScreenInteractive */
/* Demangled: gfIsScreenInteractive */
int gfIsScreenInteractive(void);

/* Symbol: g_set_active_group_done */
/* Demangled: g_set_active_group_done */
extern void* g_set_active_group_done;

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: g_nav_times */
/* Demangled: g_nav_times */
extern void* g_nav_times;

/* Symbol: g_test_sensor_fine_count */
/* Demangled: g_test_sensor_fine_count */
extern void* g_test_sensor_fine_count;

/* Symbol: gf_hal_test_prior_cancel */
/* Demangled: gf_hal_test_prior_cancel */
int gf_hal_test_prior_cancel(void);

/* Symbol: hal_notify_test_reset_pin */
/* Demangled: hal_notify_test_reset_pin */
int hal_notify_test_reset_pin(void);

/* Symbol: gf_hal_function_init */
/* Demangled: gf_hal_function_init */
int gf_hal_function_init(void);

/* Symbol: gf_hal_common_authenticate */
/* Demangled: gf_hal_common_authenticate */
int gf_hal_common_authenticate(void);

/* Symbol: gf_get_sensor_height */
/* Demangled: gf_get_sensor_height */
int gf_get_sensor_height(void);

/* Symbol: gf_hal_aes_decrypt */
/* Demangled: gf_hal_aes_decrypt */
int gf_hal_aes_decrypt(void);

/* Symbol: gf_get_dump_root_dir */
/* Demangled: gf_get_dump_root_dir */
int gf_get_dump_root_dir(void);

/* Symbol: gf_hal_device_open */
/* Demangled: gf_hal_device_open */
int gf_hal_device_open(void);

/* Symbol: gf_hal_enumerate_with_callback */
/* Demangled: gf_hal_enumerate_with_callback */
int gf_hal_enumerate_with_callback(void);

/* Symbol: gf_hal_navigate */
/* Demangled: gf_hal_navigate */
int gf_hal_navigate(void);

/* Symbol: g_test_interrupt_pin_flag */
/* Demangled: g_test_interrupt_pin_flag */
extern void* g_test_interrupt_pin_flag;

/* Symbol: GetSNRVersion */
/* Demangled: GetSNRVersion */
int GetSNRVersion(void);

/* Symbol: navmode_table */
/* Demangled: navmode_table */
extern void* navmode_table;

/* Symbol: g_fpc_config_had_downloaded */
/* Demangled: g_fpc_config_had_downloaded */
extern void* g_fpc_config_had_downloaded;

/* Symbol: hal_test_sensor_fine */
/* Demangled: hal_test_sensor_fine */
int hal_test_sensor_fine(void);

/* Symbol: write_image_to_bmp_file */
/* Demangled: write_image_to_bmp_file */
int write_image_to_bmp_file(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZTVN7android14BpPowerManagerE */
/* Demangled: vtable for android::BpPowerManager */
extern void* _ZTVN7android14BpPowerManagerE;

/* Symbol: g_enable_fingerprint_module */
/* Demangled: g_enable_fingerprint_module */
extern void* g_enable_fingerprint_module;

/* Symbol: gf_hal_notify_acquired_info */
/* Demangled: gf_hal_notify_acquired_info */
int gf_hal_notify_acquired_info(void);

/* Symbol: gf_handle_thread */
/* Demangled: gf_handle_thread */
int gf_handle_thread(void);

/* Symbol: gf_bigdata_dump_device_info */
/* Demangled: gf_bigdata_dump_device_info */
int gf_bigdata_dump_device_info(void);

/* Symbol: hal_notify_test_data_noise */
/* Demangled: hal_notify_test_data_noise */
int hal_notify_test_data_noise(void);

/* Symbol: hal_notify_test_spi_performance */
/* Demangled: hal_notify_test_spi_performance */
int hal_notify_test_spi_performance(void);

/* Symbol: _ZN7android13IPowerManagerD2Ev */
/* Demangled: android::IPowerManager::~IPowerManager() */
int _ZN7android13IPowerManagerD2Ev(void);

/* Symbol: _ZTCN7android14BpPowerManagerE0_NS_13IPowerManagerE */
/* Demangled: construction vtable for android::IPowerManager-in-android::BpPowerManager */
extern void* _ZTCN7android14BpPowerManagerE0_NS_13IPowerManagerE;

/* Symbol: _ZTv0_n12_N7android13IPowerManagerD1Ev */
/* Demangled: virtual thunk to android::IPowerManager::~IPowerManager() */
int _ZTv0_n12_N7android13IPowerManagerD1Ev(void);

/* Symbol: gf_hal_get_id_list */
/* Demangled: gf_hal_get_id_list */
int gf_hal_get_id_list(void);

/* Symbol: gf_hal_nav_complete */
/* Demangled: gf_hal_nav_complete */
int gf_hal_nav_complete(void);

/* Symbol: gf_hal_oswego_m_function_customize */
/* Demangled: gf_hal_oswego_m_function_customize */
int gf_hal_oswego_m_function_customize(void);

/* Symbol: SNR_Cal_F_Series */
/* Demangled: SNR_Cal_F_Series */
int SNR_Cal_F_Series(void);

/* Symbol: g_key_long_pressed_timer_id */
/* Demangled: g_key_long_pressed_timer_id */
extern void* g_key_long_pressed_timer_id;

/* Symbol: gf_hal_notify_test_authentication_succeeded */
/* Demangled: gf_hal_notify_test_authentication_succeeded */
int gf_hal_notify_test_authentication_succeeded(void);

/* Symbol: hal_notify_test_bio_hbd_calibration */
/* Demangled: hal_notify_test_bio_hbd_calibration */
int hal_notify_test_bio_hbd_calibration(void);

/* Symbol: gf_hal_common_enroll_success */
/* Demangled: gf_hal_common_enroll_success */
int gf_hal_common_enroll_success(void);

/* Symbol: gf_bigdata_dump_image_data */
/* Demangled: gf_bigdata_dump_image_data */
int gf_bigdata_dump_image_data(void);

/* Symbol: gf_hal_enable_bio_assay_feature */
/* Demangled: gf_hal_enable_bio_assay_feature */
int gf_hal_enable_bio_assay_feature(void);

/* Symbol: hal_notify_test_error */
/* Demangled: hal_notify_test_error */
int hal_notify_test_error(void);

/* Symbol: gf_is_dump_template_allowed */
/* Demangled: gf_is_dump_template_allowed */
int gf_is_dump_template_allowed(void);

/* Symbol: gf_strchiptype */
/* Demangled: gf_strchiptype */
int gf_strchiptype(void);

/* Symbol: gf_strnavmode */
/* Demangled: gf_strnavmode */
int gf_strnavmode(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: hal_test_authenticate */
/* Demangled: hal_test_authenticate */
int hal_test_authenticate(void);

/* Symbol: gf_set_dump_config */
/* Demangled: gf_set_dump_config */
int gf_set_dump_config(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZTVN7android13IPowerManagerE */
/* Demangled: vtable for android::IPowerManager */
extern void* _ZTVN7android13IPowerManagerE;

/* Symbol: gf_hal_get_auth_ratio_record */
/* Demangled: gf_hal_get_auth_ratio_record */
int gf_hal_get_auth_ratio_record(void);

/* Symbol: gf_empty_queue */
/* Demangled: gf_empty_queue */
int gf_empty_queue(void);

/* Symbol: hal_test_encode_array */
/* Demangled: hal_test_encode_array */
int hal_test_encode_array(void);

/* Symbol: g_aes_key */
/* Demangled: g_aes_key */
extern void* g_aes_key;

/* Symbol: gf_hal_milan_function_customize */
/* Demangled: gf_hal_milan_function_customize */
int gf_hal_milan_function_customize(void);

/* Symbol: gf_get_time_string */
/* Demangled: gf_get_time_string */
int gf_get_time_string(void);

/* Symbol: _ZTCN7android14BpPowerManagerE0_NS_11BpInterfaceINS_13IPowerManagerEEE */
/* Demangled: construction vtable for android::BpInterface<android::IPowerManager>-in-android::BpPowerManager */
extern void* _ZTCN7android14BpPowerManagerE0_NS_11BpInterfaceINS_13IPowerManagerEEE;

/* Symbol: gf_get_dump_bigdata_version */
/* Demangled: gf_get_dump_bigdata_version */
int gf_get_dump_bigdata_version(void);

/* Symbol: gf_hal_open */
/* Demangled: gf_hal_open */
int gf_hal_open(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: gf_is_dump_bigdata_enabled */
/* Demangled: gf_is_dump_bigdata_enabled */
int gf_is_dump_bigdata_enabled(void);

/* Symbol: g_fingerprint_device */
/* Demangled: g_fingerprint_device */
extern void* g_fingerprint_device;

/* Symbol: gf_hal_reinit */
/* Demangled: gf_hal_reinit */
int gf_hal_reinit(void);

/* Symbol: gf_hal_invoke_command_ex */
/* Demangled: gf_hal_invoke_command_ex */
int gf_hal_invoke_command_ex(void);

/* Symbol: err_table */
/* Demangled: err_table */
extern void* err_table;

/* Symbol: gf_hal_pause_enroll */
/* Demangled: gf_hal_pause_enroll */
int gf_hal_pause_enroll(void);

/* Symbol: gf_hal_send_nav_event */
/* Demangled: gf_hal_send_nav_event */
int gf_hal_send_nav_event(void);

/* Symbol: gf_hal_test_invoke_command_ex */
/* Demangled: gf_hal_test_invoke_command_ex */
int gf_hal_test_invoke_command_ex(void);

/* Symbol: gf_get_nav_width */
/* Demangled: gf_get_nav_width */
int gf_get_nav_width(void);

/* Symbol: gf_hal_milan_a_series_function_customize */
/* Demangled: gf_hal_milan_a_series_function_customize */
int gf_hal_milan_a_series_function_customize(void);

/* Symbol: hal_test_encode_int32 */
/* Demangled: hal_test_encode_int32 */
int hal_test_encode_int32(void);

/* Symbol: gf_stroperation */
/* Demangled: gf_stroperation */
int gf_stroperation(void);

/* Symbol: gf_hal_common_enable_ff_feature */
/* Demangled: gf_hal_common_enable_ff_feature */
int gf_hal_common_enable_ff_feature(void);

/* Symbol: gf_hal_common_enable_fingerprint_module */
/* Demangled: gf_hal_common_enable_fingerprint_module */
int gf_hal_common_enable_fingerprint_module(void);

/* Symbol: mkdirs_relative */
/* Demangled: mkdirs_relative */
int mkdirs_relative(void);

/* Symbol: gf_hal_sync_finger_list */
/* Demangled: gf_hal_sync_finger_list */
int gf_hal_sync_finger_list(void);

/* Symbol: gf_enqueue */
/* Demangled: gf_enqueue */
int gf_enqueue(void);

/* Symbol: gf_hal_enter_sleep_mode */
/* Demangled: gf_hal_enter_sleep_mode */
int gf_hal_enter_sleep_mode(void);

/* Symbol: g_test_interrupt_pin_mutex */
/* Demangled: g_test_interrupt_pin_mutex */
extern void* g_test_interrupt_pin_mutex;

/* Symbol: gf_get_dump_config */
/* Demangled: gf_get_dump_config */
int gf_get_dump_config(void);

/* Symbol: g_key_down_flag */
/* Demangled: g_key_down_flag */
extern void* g_key_down_flag;

/* Symbol: gf_hal_common_remove_without_callback */
/* Demangled: gf_hal_common_remove_without_callback */
int gf_hal_common_remove_without_callback(void);

/* Symbol: gf_hal_device_remove */
/* Demangled: gf_hal_device_remove */
int gf_hal_device_remove(void);

/* Symbol: hal_notify_test_bmp_data */
/* Demangled: hal_notify_test_bmp_data */
int hal_notify_test_bmp_data(void);

/* Symbol: hal_test_encode_float32 */
/* Demangled: hal_test_encode_float32 */
int hal_test_encode_float32(void);

/* Symbol: hal_test_encode_int64 */
/* Demangled: hal_test_encode_int64 */
int hal_test_encode_int64(void);

/* Symbol: Noise_Cal */
/* Demangled: Noise_Cal */
int Noise_Cal(void);

/* Symbol: gf_hal_common_authenticate_fido */
/* Demangled: gf_hal_common_authenticate_fido */
int gf_hal_common_authenticate_fido(void);

/* Symbol: gf_strmode */
/* Demangled: gf_strmode */
int gf_strmode(void);

/* Symbol: gf_hal_set_active_group */
/* Demangled: gf_hal_set_active_group */
int gf_hal_set_active_group(void);

/* Symbol: gf_hal_set_safe_class */
/* Demangled: gf_hal_set_safe_class */
int gf_hal_set_safe_class(void);

/* Symbol: _ZNK7android13IPowerManager22getInterfaceDescriptorEv */
/* Demangled: android::IPowerManager::getInterfaceDescriptor() const */
int _ZNK7android13IPowerManager22getInterfaceDescriptorEv(void);

/* Symbol: gf_hal_user_invoke_command */
/* Demangled: gf_hal_user_invoke_command */
int gf_hal_user_invoke_command(void);

/* Symbol: check_offset */
/* Demangled: check_offset */
int check_offset(void);

/* Symbol: gf_bigdata_dump_basic_json_data */
/* Demangled: gf_bigdata_dump_basic_json_data */
int gf_bigdata_dump_basic_json_data(void);

/* Symbol: gf_hal_device_close */
/* Demangled: gf_hal_device_close */
int gf_hal_device_close(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: gf_hal_irq */
/* Demangled: gf_hal_irq */
int gf_hal_irq(void);

/* Symbol: g_image_irq_time */
/* Demangled: g_image_irq_time */
extern void* g_image_irq_time;

/* Symbol: gf_hal_long_pressed_timer_thread */
/* Demangled: gf_hal_long_pressed_timer_thread */
int gf_hal_long_pressed_timer_thread(void);

/* Symbol: gf_hal_device_enable */
/* Demangled: gf_hal_device_enable */
int gf_hal_device_enable(void);

/* Symbol: gf_dump_encoder_fclose */
/* Demangled: gf_dump_encoder_fclose */
int gf_dump_encoder_fclose(void);

/* Symbol: mode_table */
/* Demangled: mode_table */
extern void* mode_table;

/* Symbol: gf_dump_encoder_add_path */
/* Demangled: gf_dump_encoder_add_path */
int gf_dump_encoder_add_path(void);

/* Symbol: gf_dump_encoder_fprintf */
/* Demangled: gf_dump_encoder_fprintf */
int gf_dump_encoder_fprintf(void);

/* Symbol: g_nav_double_click_timer_id */
/* Demangled: g_nav_double_click_timer_id */
extern void* g_nav_double_click_timer_id;

/* Symbol: gf_hal_common_user_invoke_command */
/* Demangled: gf_hal_common_user_invoke_command */
int gf_hal_common_user_invoke_command(void);

/* Symbol: check_buf_size */
/* Demangled: check_buf_size */
int check_buf_size(void);

/* Symbol: g_long_pressed_timer_id */
/* Demangled: g_long_pressed_timer_id */
extern void* g_long_pressed_timer_id;

/* Symbol: g_mode */
/* Demangled: g_mode */
extern void* g_mode;

/* Symbol: gf_hal_common_is_id_valid */
/* Demangled: gf_hal_common_is_id_valid */
int gf_hal_common_is_id_valid(void);

/* Symbol: gf_hal_get_screen_state */
/* Demangled: gf_hal_get_screen_state */
int gf_hal_get_screen_state(void);

/* Symbol: gf_hal_common_dump_invoke_command */
/* Demangled: gf_hal_common_dump_invoke_command */
int gf_hal_common_dump_invoke_command(void);

/* Symbol: gf_get_chip_series */
/* Demangled: gf_get_chip_series */
int gf_get_chip_series(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: gf_hal_remove */
/* Demangled: gf_hal_remove */
int gf_hal_remove(void);

/* Symbol: g_esd_check_flag */
/* Demangled: g_esd_check_flag */
extern void* g_esd_check_flag;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: gf_bigdata_dump_nav_data */
/* Demangled: gf_bigdata_dump_nav_data */
int gf_bigdata_dump_nav_data(void);

/* Symbol: g_irq_time_milan_a */
/* Demangled: g_irq_time_milan_a */
extern void* g_irq_time_milan_a;

/* Symbol: gf_hal_test_cmd */
/* Demangled: gf_hal_test_cmd */
int gf_hal_test_cmd(void);

/* Symbol: hal_irq_timer_thread */
/* Demangled: hal_irq_timer_thread */
int hal_irq_timer_thread(void);

/* Symbol: gf_hal_common_sync_finger_list */
/* Demangled: gf_hal_common_sync_finger_list */
int gf_hal_common_sync_finger_list(void);

/* Symbol: hal_test_spi_transfer_timer_thread */
/* Demangled: hal_test_spi_transfer_timer_thread */
int hal_test_spi_transfer_timer_thread(void);

/* Symbol: gf_hal_get_auth_id */
/* Demangled: gf_hal_get_auth_id */
int gf_hal_get_auth_id(void);

/* Symbol: gf_hal_remove_for_sync_list */
/* Demangled: gf_hal_remove_for_sync_list */
int gf_hal_remove_for_sync_list(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: Singal_Cal */
/* Demangled: Singal_Cal */
int Singal_Cal(void);

/* Symbol: testcmd_table */
/* Demangled: testcmd_table */
extern void* testcmd_table;

/* Symbol: g_nav_frame_index */
/* Demangled: g_nav_frame_index */
extern void* g_nav_frame_index;

/* Symbol: gf_strnav */
/* Demangled: gf_strnav */
int gf_strnav(void);

/* Symbol: nav_table */
/* Demangled: nav_table */
extern void* nav_table;

/* Symbol: gf_hal_common_set_active_group */
/* Demangled: gf_hal_common_set_active_group */
int gf_hal_common_set_active_group(void);

/* Symbol: gf_hal_common_enumerate_with_callback */
/* Demangled: gf_hal_common_enumerate_with_callback */
int gf_hal_common_enumerate_with_callback(void);

/* Symbol: _ZN7android13IPowerManagerC2Ev */
/* Demangled: android::IPowerManager::IPowerManager() */
int _ZN7android13IPowerManagerC2Ev(void);

/* Symbol: gf_queue_init */
/* Demangled: gf_queue_init */
int gf_queue_init(void);

/* Symbol: gf_hal_common_pause_enroll */
/* Demangled: gf_hal_common_pause_enroll */
int gf_hal_common_pause_enroll(void);

/* Symbol: gf_hal_send_key_event */
/* Demangled: gf_hal_send_key_event */
int gf_hal_send_key_event(void);

/* Symbol: gf_get_dump_path */
/* Demangled: gf_get_dump_path */
int gf_get_dump_path(void);

/* Symbol: gf_dump_encoder_fdelete */
/* Demangled: gf_dump_encoder_fdelete */
int gf_dump_encoder_fdelete(void);

/* Symbol: gf_hal_create_timer */
/* Demangled: gf_hal_create_timer */
int gf_hal_create_timer(void);

/* Symbol: gf_hal_notify_remove_succeeded */
/* Demangled: gf_hal_notify_remove_succeeded */
int gf_hal_notify_remove_succeeded(void);

/* Symbol: hal_notify_test_calibration_para_retest */
/* Demangled: hal_notify_test_calibration_para_retest */
int hal_notify_test_calibration_para_retest(void);

/* Symbol: hal_notify_test_frr_far_record_enroll */
/* Demangled: hal_notify_test_frr_far_record_enroll */
int hal_notify_test_frr_far_record_enroll(void);

/* Symbol: gf_dump_encoder_create */
/* Demangled: gf_dump_encoder_create */
int gf_dump_encoder_create(void);

/* Symbol: gf_is_operation_result_dump_allowed */
/* Demangled: gf_is_operation_result_dump_allowed */
int gf_is_operation_result_dump_allowed(void);

/* Symbol: gf_strkey */
/* Demangled: gf_strkey */
int gf_strkey(void);

/* Symbol: g_hal_inited */
/* Demangled: g_hal_inited */
extern void* g_hal_inited;

/* Symbol: gf_hal_dump_data_by_operation */
/* Demangled: gf_hal_dump_data_by_operation */
int gf_hal_dump_data_by_operation(void);

/* Symbol: gf_hal_dump_cmd */
/* Demangled: gf_hal_dump_cmd */
int gf_hal_dump_cmd(void);

/* Symbol: gf_hal_aes_encrypt */
/* Demangled: gf_hal_aes_encrypt */
int gf_hal_aes_encrypt(void);

/* Symbol: _ZN7android2spINS_13IPowerManagerEEaSINS_14BpPowerManagerEEERS2_PT_ */
/* Demangled: android::sp<android::IPowerManager>& android::sp<android::IPowerManager>::operator=<android::BpPowerManager>(android::BpPowerManager*) */
int _ZN7android2spINS_13IPowerManagerEEaSINS_14BpPowerManagerEEERS2_PT_(void);

/* Symbol: gf_hal_common_load_otp_info_from_sdcard */
/* Demangled: gf_hal_common_load_otp_info_from_sdcard */
int gf_hal_common_load_otp_info_from_sdcard(void);

/* Symbol: g_test_spi_transfer_times */
/* Demangled: g_test_spi_transfer_times */
extern void* g_test_spi_transfer_times;

/* Symbol: gf_hal_notify_test_acquired_info */
/* Demangled: gf_hal_notify_test_acquired_info */
int gf_hal_notify_test_acquired_info(void);

/* Symbol: hal_notify_test_interrupt_pin */
/* Demangled: hal_notify_test_interrupt_pin */
int hal_notify_test_interrupt_pin(void);

/* Symbol: hal_test_resume_enroll */
/* Demangled: hal_test_resume_enroll */
int hal_test_resume_enroll(void);

/* Symbol: gf_hal_current_time_microsecond */
/* Demangled: gf_hal_current_time_microsecond */
int gf_hal_current_time_microsecond(void);

/* Symbol: gf_hal_notify_error_info */
/* Demangled: gf_hal_notify_error_info */
int gf_hal_notify_error_info(void);

/* Symbol: gf_hal_test_invoke_command */
/* Demangled: gf_hal_test_invoke_command */
int gf_hal_test_invoke_command(void);

/* Symbol: gf_hal_test_snr_get_snr_result */
/* Demangled: gf_hal_test_snr_get_snr_result */
int gf_hal_test_snr_get_snr_result(void);

/* Symbol: hal_notify_test_finger_event */
/* Demangled: hal_notify_test_finger_event */
int hal_notify_test_finger_event(void);

/* Symbol: FreeMemory */
/* Demangled: FreeMemory */
int FreeMemory(void);

/* Symbol: g_irq_timer_id */
/* Demangled: g_irq_timer_id */
extern void* g_irq_timer_id;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: hal_enroll_timer_thread */
/* Demangled: hal_enroll_timer_thread */
int hal_enroll_timer_thread(void);

/* Symbol: gf_hal_disable_irq */
/* Demangled: gf_hal_disable_irq */
int gf_hal_disable_irq(void);

/* Symbol: hal_test_encode_int8 */
/* Demangled: hal_test_encode_int8 */
int hal_test_encode_int8(void);

/* Symbol: gf_strirq */
/* Demangled: gf_strirq */
int gf_strirq(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: gf_hal_is_inited */
/* Demangled: gf_hal_is_inited */
int gf_hal_is_inited(void);

/* Symbol: hal_milan_an_series_irq */
/* Demangled: hal_milan_an_series_irq */
int hal_milan_an_series_irq(void);

/* Symbol: hal_notify_test_fpc_reset_fwcfg */
/* Demangled: hal_notify_test_fpc_reset_fwcfg */
int hal_notify_test_fpc_reset_fwcfg(void);

/* Symbol: hal_test_pause_enroll */
/* Demangled: hal_test_pause_enroll */
int hal_test_pause_enroll(void);

/* Symbol: hal_milan_an_dump_chip_operation_data */
/* Demangled: hal_milan_an_dump_chip_operation_data */
int hal_milan_an_dump_chip_operation_data(void);

/* Symbol: gf_hal_nav_double_click_timer_thread */
/* Demangled: gf_hal_nav_double_click_timer_thread */
int gf_hal_nav_double_click_timer_thread(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: g_hal_config */
/* Demangled: g_hal_config */
extern void* g_hal_config;

/* Symbol: g_irq_time_milan_an */
/* Demangled: g_irq_time_milan_an */
extern void* g_irq_time_milan_an;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGF_HAL_H */
