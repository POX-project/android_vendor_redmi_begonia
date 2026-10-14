/*
 * Reverse-Engineered Source for: libgf_hal.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgf_hal"

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
#include "libgf_hal.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_GOODIX_FP "/dev/goodix_fp"
#define DEV_DEV_UINPUT "/dev/uinput"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_GOODIX_FP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GOODIX_FP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GOODIX_FP, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_UINPUT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_UINPUT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_UINPUT, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: gf_hal_get_fw_info */
extern "C" __attribute__((visibility("default"))) int gf_hal_get_fw_info(void) {
    ALOGD("gf_hal_get_fw_info() called");
    return 0;
}

/* Demangled: gf_hal_device_disable */
extern "C" __attribute__((visibility("default"))) int gf_hal_device_disable(void) {
    ALOGD("gf_hal_device_disable() called");
    return 0;
}

/* Demangled: gf_hal_handle_frr_database */
extern "C" __attribute__((visibility("default"))) int gf_hal_handle_frr_database(void) {
    ALOGD("gf_hal_handle_frr_database() called");
    return 0;
}

/* Demangled: gf_hal_nav_assert_config_interval */
extern "C" __attribute__((visibility("default"))) int gf_hal_nav_assert_config_interval(void) {
    ALOGD("gf_hal_nav_assert_config_interval() called");
    return 0;
}

/* Demangled: gf_dump_memmgr_pool */
extern "C" __attribute__((visibility("default"))) int gf_dump_memmgr_pool(void) {
    ALOGD("gf_dump_memmgr_pool() called");
    return 0;
}

/* Demangled: gf_hal_notify_test_remove_succeeded */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_test_remove_succeeded(void) {
    ALOGD("gf_hal_notify_test_remove_succeeded() called");
    return 0;
}

/* Demangled: gf_disable_dump */
extern "C" __attribute__((visibility("default"))) int gf_disable_dump(void) {
    ALOGD("gf_disable_dump() called");
    return 0;
}

/* Demangled: gf_hal_screen_on */
extern "C" __attribute__((visibility("default"))) int gf_hal_screen_on(void) {
    ALOGD("gf_hal_screen_on() called");
    return 0;
}

/* Demangled: gf_hal_common_cancel */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_cancel(void) {
    ALOGD("gf_hal_common_cancel() called");
    return 0;
}

/* Demangled: gf_hal_notify_authentication_succeeded */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_authentication_succeeded(void) {
    ALOGD("gf_hal_notify_authentication_succeeded() called");
    return 0;
}

/* Demangled: gf_get_dump_version */
extern "C" __attribute__((visibility("default"))) int gf_get_dump_version(void) {
    ALOGD("gf_get_dump_version() called");
    return 0;
}

/* Demangled: gf_get_sensor_width */
extern "C" __attribute__((visibility("default"))) int gf_get_sensor_width(void) {
    ALOGD("gf_get_sensor_width() called");
    return 0;
}

/* Demangled: gf_hal_enable_fingerprint_module */
extern "C" __attribute__((visibility("default"))) int gf_hal_enable_fingerprint_module(void) {
    ALOGD("gf_hal_enable_fingerprint_module() called");
    return 0;
}

/* Demangled: gf_hal_common_post_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_post_enroll(void) {
    ALOGD("gf_hal_common_post_enroll() called");
    return 0;
}

/* Exported Object: ic_product_time_month */
extern "C" __attribute__((visibility("default"))) void* ic_product_time_month = NULL;

/* Exported Object: chip_table */
extern "C" __attribute__((visibility("default"))) void* chip_table = NULL;

/* Demangled: hal_notify_test_pixel_open */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_pixel_open(void) {
    ALOGD("hal_notify_test_pixel_open() called");
    return 0;
}

/* Demangled: mkdirs */
extern "C" __attribute__((visibility("default"))) int mkdirs(void) {
    ALOGD("mkdirs() called");
    return 0;
}

/* Demangled: gf_get_chip_type */
extern "C" __attribute__((visibility("default"))) int gf_get_chip_type(void) {
    ALOGD("gf_get_chip_type() called");
    return 0;
}

/* Demangled: gf_dump_init */
extern "C" __attribute__((visibility("default"))) int gf_dump_init(void) {
    ALOGD("gf_dump_init() called");
    return 0;
}

/* Demangled: gf_hal_common_authenticate_success */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_authenticate_success(void) {
    ALOGD("gf_hal_common_authenticate_success() called");
    return 0;
}

/* Demangled: gf_hal_common_lockout */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_lockout(void) {
    ALOGD("gf_hal_common_lockout() called");
    return 0;
}

/* Demangled: gf_hal_dump_performance */
extern "C" __attribute__((visibility("default"))) int gf_hal_dump_performance(void) {
    ALOGD("gf_hal_dump_performance() called");
    return 0;
}

/* Demangled: gf_set_dump_path */
extern "C" __attribute__((visibility("default"))) int gf_set_dump_path(void) {
    ALOGD("gf_set_dump_path() called");
    return 0;
}

/* Demangled: hal_milan_a_series_irq_test */
extern "C" __attribute__((visibility("default"))) int hal_milan_a_series_irq_test(void) {
    ALOGD("hal_milan_a_series_irq_test() called");
    return 0;
}

/* Exported Object: ic_product_factory */
extern "C" __attribute__((visibility("default"))) void* ic_product_factory = NULL;

/* Demangled: gf_hal_reset_chip */
extern "C" __attribute__((visibility("default"))) int gf_hal_reset_chip(void) {
    ALOGD("gf_hal_reset_chip() called");
    return 0;
}

/* Exported Object: g_enroll_invalid_template_num */
extern "C" __attribute__((visibility("default"))) void* g_enroll_invalid_template_num = NULL;

/* Demangled: hal_test_encode_int16 */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_int16(void) {
    ALOGD("hal_test_encode_int16() called");
    return 0;
}

/* Demangled: gf_hal_milan_dump_chip_operation_data */
extern "C" __attribute__((visibility("default"))) int gf_hal_milan_dump_chip_operation_data(void) {
    ALOGD("gf_hal_milan_dump_chip_operation_data() called");
    return 0;
}

/* Exported Object: ic_product_time_year */
extern "C" __attribute__((visibility("default"))) void* ic_product_time_year = NULL;

/* Exported Object: g_nav_click_status */
extern "C" __attribute__((visibility("default"))) void* g_nav_click_status = NULL;

/* Demangled: gf_hal_common_navigate */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_navigate(void) {
    ALOGD("gf_hal_common_navigate() called");
    return 0;
}

/* Exported Object: gSnrRawDataBase */
extern "C" __attribute__((visibility("default"))) void* gSnrRawDataBase = NULL;

/* Demangled: hal_test_enroll */
extern "C" __attribute__((visibility("default"))) int hal_test_enroll(void) {
    ALOGD("hal_test_enroll() called");
    return 0;
}

/* Demangled: gf_bigdata_dump_template_info */
extern "C" __attribute__((visibility("default"))) int gf_bigdata_dump_template_info(void) {
    ALOGD("gf_bigdata_dump_template_info() called");
    return 0;
}

/* Demangled: gf_strtestcmd */
extern "C" __attribute__((visibility("default"))) int gf_strtestcmd(void) {
    ALOGD("gf_strtestcmd() called");
    return 0;
}

/* Demangled: gf_hal_common_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_enroll(void) {
    ALOGD("gf_hal_common_enroll() called");
    return 0;
}

/* Demangled: SNR_Cal */
extern "C" __attribute__((visibility("default"))) int SNR_Cal(void) {
    ALOGD("SNR_Cal() called");
    return 0;
}

/* Demangled: gf_enable_dump */
extern "C" __attribute__((visibility("default"))) int gf_enable_dump(void) {
    ALOGD("gf_enable_dump() called");
    return 0;
}

/* Demangled: gf_init_dump_config */
extern "C" __attribute__((visibility("default"))) int gf_init_dump_config(void) {
    ALOGD("gf_init_dump_config() called");
    return 0;
}

/* Exported Object: g_work_state */
extern "C" __attribute__((visibility("default"))) void* g_work_state = NULL;

/* Demangled: gf_hal_common_irq_finger_long_press */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_irq_finger_long_press(void) {
    ALOGD("gf_hal_common_irq_finger_long_press() called");
    return 0;
}

/* Demangled: hal_notify_test_frr_far_record_authenticate */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_frr_far_record_authenticate(void) {
    ALOGD("hal_notify_test_frr_far_record_authenticate() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Exported Object: g_enroll_timer_sec */
extern "C" __attribute__((visibility("default"))) void* g_enroll_timer_sec = NULL;

/* Demangled: gf_hal_common_screen_on */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_screen_on(void) {
    ALOGD("gf_hal_common_screen_on() called");
    return 0;
}

/* Demangled: gf_dump_raw_data */
extern "C" __attribute__((visibility("default"))) int gf_dump_raw_data(void) {
    ALOGD("gf_dump_raw_data() called");
    return 0;
}

/* Exported Object: g_irq_time_milan */
extern "C" __attribute__((visibility("default"))) void* g_irq_time_milan = NULL;

/* Demangled: gf_hal_common_reset_lockout */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_reset_lockout(void) {
    ALOGD("gf_hal_common_reset_lockout() called");
    return 0;
}

/* Demangled: gf_hal_uinput_device_open */
extern "C" __attribute__((visibility("default"))) int gf_hal_uinput_device_open(void) {
    ALOGD("gf_hal_uinput_device_open() called");
    return 0;
}

/* Demangled: gf_hal_milan_irq_test */
extern "C" __attribute__((visibility("default"))) int gf_hal_milan_irq_test(void) {
    ALOGD("gf_hal_milan_irq_test() called");
    return 0;
}

/* Demangled: gf_hal_pre_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_pre_enroll(void) {
    ALOGD("gf_hal_pre_enroll() called");
    return 0;
}

/* Demangled: gf_hal_common_camera_capture */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_camera_capture(void) {
    ALOGD("gf_hal_common_camera_capture() called");
    return 0;
}

/* Demangled: gf_hal_create_and_set_esd_timer */
extern "C" __attribute__((visibility("default"))) int gf_hal_create_and_set_esd_timer(void) {
    ALOGD("gf_hal_create_and_set_esd_timer() called");
    return 0;
}

/* Demangled: gf_dump_prepare_for_test_cmd */
extern "C" __attribute__((visibility("default"))) int gf_dump_prepare_for_test_cmd(void) {
    ALOGD("gf_dump_prepare_for_test_cmd() called");
    return 0;
}

/* Demangled: gf_get_nav_height */
extern "C" __attribute__((visibility("default"))) int gf_get_nav_height(void) {
    ALOGD("gf_get_nav_height() called");
    return 0;
}

/* Exported Object: g_irq_time */
extern "C" __attribute__((visibility("default"))) void* g_irq_time = NULL;

/* Exported Object: android::IPowerManager::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13IPowerManager10descriptorE = NULL;

/* Exported Object: VTT for android::IPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android13IPowerManagerE = NULL;

/* Exported Object: g_hal_mutex */
extern "C" __attribute__((visibility("default"))) void* g_hal_mutex = NULL;

/* Demangled: gf_hal_notify_authentication_fido_failed */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_authentication_fido_failed(void) {
    ALOGD("gf_hal_notify_authentication_fido_failed() called");
    return 0;
}

/* Demangled: gf_hal_send_uinput_nav_event */
extern "C" __attribute__((visibility("default"))) int gf_hal_send_uinput_nav_event(void) {
    ALOGD("gf_hal_send_uinput_nav_event() called");
    return 0;
}

/* Demangled: gf_queue_clear_unused_irq */
extern "C" __attribute__((visibility("default"))) int gf_queue_clear_unused_irq(void) {
    ALOGD("gf_queue_clear_unused_irq() called");
    return 0;
}

/* Demangled: gf_hal_notify_test_enrollment_progress */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_test_enrollment_progress(void) {
    ALOGD("gf_hal_notify_test_enrollment_progress() called");
    return 0;
}

/* Demangled: gf_get_boot_time_str */
extern "C" __attribute__((visibility("default"))) int gf_get_boot_time_str(void) {
    ALOGD("gf_get_boot_time_str() called");
    return 0;
}

/* Demangled: gf_hal_milan_dump_chip_init_data */
extern "C" __attribute__((visibility("default"))) int gf_hal_milan_dump_chip_init_data(void) {
    ALOGD("gf_hal_milan_dump_chip_init_data() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-android::IPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android13IPowerManagerE0_NS_10IInterfaceE = NULL;

/* Demangled: gf_hal_enable_power */
extern "C" __attribute__((visibility("default"))) int gf_hal_enable_power(void) {
    ALOGD("gf_hal_enable_power() called");
    return 0;
}

/* Demangled: gf_hal_common_save_otp_info_into_sdcard */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_save_otp_info_into_sdcard(void) {
    ALOGD("gf_hal_common_save_otp_info_into_sdcard() called");
    return 0;
}

/* Demangled: gf_hal_dump_template */
extern "C" __attribute__((visibility("default"))) int gf_hal_dump_template(void) {
    ALOGD("gf_hal_dump_template() called");
    return 0;
}

/* Exported Object: g_esd_timer_id */
extern "C" __attribute__((visibility("default"))) void* g_esd_timer_id = NULL;

/* Exported Object: key_table */
extern "C" __attribute__((visibility("default"))) void* key_table = NULL;

/* Exported Object: VTT for android::BpPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android14BpPowerManagerE = NULL;

/* Exported Object: g_down_irq_time */
extern "C" __attribute__((visibility("default"))) void* g_down_irq_time = NULL;

/* Demangled: gf_hal_common_get_id_list */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_get_id_list(void) {
    ALOGD("gf_hal_common_get_id_list() called");
    return 0;
}

/* Demangled: gf_hal_nav_reset */
extern "C" __attribute__((visibility("default"))) int gf_hal_nav_reset(void) {
    ALOGD("gf_hal_nav_reset() called");
    return 0;
}

/* Demangled: gf_hal_free_snr_memmory */
extern "C" __attribute__((visibility("default"))) int gf_hal_free_snr_memmory(void) {
    ALOGD("gf_hal_free_snr_memmory() called");
    return 0;
}

/* Demangled: hal_notify_test_spi_transfer */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_spi_transfer(void) {
    ALOGD("hal_notify_test_spi_transfer() called");
    return 0;
}

/* Demangled: gf_dump_template */
extern "C" __attribute__((visibility("default"))) int gf_dump_template(void) {
    ALOGD("gf_dump_template() called");
    return 0;
}

/* Demangled: gf_is_operation_data_dump_allowed */
extern "C" __attribute__((visibility("default"))) int gf_is_operation_data_dump_allowed(void) {
    ALOGD("gf_is_operation_data_dump_allowed() called");
    return 0;
}

/* Exported Object: ic_product_time_day */
extern "C" __attribute__((visibility("default"))) void* ic_product_time_day = NULL;

/* Exported Object: g_failed_attempts */
extern "C" __attribute__((visibility("default"))) void* g_failed_attempts = NULL;

/* Demangled: gf_hal_common_resume_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_resume_enroll(void) {
    ALOGD("gf_hal_common_resume_enroll() called");
    return 0;
}

/* Exported Object: authen_fd */
extern "C" __attribute__((visibility("default"))) void* authen_fd = NULL;

/* Demangled: gf_queue_exit */
extern "C" __attribute__((visibility("default"))) int gf_queue_exit(void) {
    ALOGD("gf_queue_exit() called");
    return 0;
}

/* Demangled: hal_notify_test_frr_far_record_calibration */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_frr_far_record_calibration(void) {
    ALOGD("hal_notify_test_frr_far_record_calibration() called");
    return 0;
}

/* Demangled: hal_test_encode_float */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_float(void) {
    ALOGD("hal_test_encode_float() called");
    return 0;
}

/* Demangled: gf_get_dump_op_by_irq_op */
extern "C" __attribute__((visibility("default"))) int gf_get_dump_op_by_irq_op(void) {
    ALOGD("gf_get_dump_op_by_irq_op() called");
    return 0;
}

/* Demangled: gf_is_dump_device_info_allowed */
extern "C" __attribute__((visibility("default"))) int gf_is_dump_device_info_allowed(void) {
    ALOGD("gf_is_dump_device_info_allowed() called");
    return 0;
}

/* Demangled: gf_hal_enable_ff_feature */
extern "C" __attribute__((visibility("default"))) int gf_hal_enable_ff_feature(void) {
    ALOGD("gf_hal_enable_ff_feature() called");
    return 0;
}

/* Demangled: gf_strerror */
extern "C" __attribute__((visibility("default"))) int gf_strerror(void) {
    ALOGD("gf_strerror() called");
    return 0;
}

/* Exported Object: g_nav_click_status_mutex */
extern "C" __attribute__((visibility("default"))) void* g_nav_click_status_mutex = NULL;

/* Exported Object: g_sensor_row */
extern "C" __attribute__((visibility("default"))) void* g_sensor_row = NULL;

/* Demangled: gf_hal_screen_off */
extern "C" __attribute__((visibility("default"))) int gf_hal_screen_off(void) {
    ALOGD("gf_hal_screen_off() called");
    return 0;
}

/* Exported Object: g_enroll_timer_id */
extern "C" __attribute__((visibility("default"))) void* g_enroll_timer_id = NULL;

/* Demangled: hal_notify_test_sensor_validity */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_sensor_validity(void) {
    ALOGD("hal_notify_test_sensor_validity() called");
    return 0;
}

/* Exported Object: operation_table */
extern "C" __attribute__((visibility("default"))) void* operation_table = NULL;

/* Demangled: gf_hal_reset_lockout */
extern "C" __attribute__((visibility("default"))) int gf_hal_reset_lockout(void) {
    ALOGD("gf_hal_reset_lockout() called");
    return 0;
}

/* Demangled: gf_get_dump_encryptor_version */
extern "C" __attribute__((visibility("default"))) int gf_get_dump_encryptor_version(void) {
    ALOGD("gf_get_dump_encryptor_version() called");
    return 0;
}

/* Demangled: gf_hal_authenticate_fido */
extern "C" __attribute__((visibility("default"))) int gf_hal_authenticate_fido(void) {
    ALOGD("gf_hal_authenticate_fido() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: gf_hal_control_spi_clock */
extern "C" __attribute__((visibility("default"))) int gf_hal_control_spi_clock(void) {
    ALOGD("gf_hal_control_spi_clock() called");
    return 0;
}

/* Demangled: gf_hal_start_hbd */
extern "C" __attribute__((visibility("default"))) int gf_hal_start_hbd(void) {
    ALOGD("gf_hal_start_hbd() called");
    return 0;
}

/* Exported Object: head */
extern "C" __attribute__((visibility("default"))) void* head = NULL;

/* Demangled: hal_notify_test_sensor_fine */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_sensor_fine(void) {
    ALOGD("hal_notify_test_sensor_fine() called");
    return 0;
}

/* Demangled: gf_dump_encoder_fopen */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_fopen(void) {
    ALOGD("gf_dump_encoder_fopen() called");
    return 0;
}

/* Exported Object: g_sensor_nav_row */
extern "C" __attribute__((visibility("default"))) void* g_sensor_nav_row = NULL;

/* Demangled: gf_hal_update_stitch */
extern "C" __attribute__((visibility("default"))) int gf_hal_update_stitch(void) {
    ALOGD("gf_hal_update_stitch() called");
    return 0;
}

/* Demangled: hal_notify_test_fpc_detected */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_fpc_detected(void) {
    ALOGD("hal_notify_test_fpc_detected() called");
    return 0;
}

/* Demangled: gf_dump_data_by_operation */
extern "C" __attribute__((visibility("default"))) int gf_dump_data_by_operation(void) {
    ALOGD("gf_dump_data_by_operation() called");
    return 0;
}

/* Demangled: hal_milan_an_series_irq_test */
extern "C" __attribute__((visibility("default"))) int hal_milan_an_series_irq_test(void) {
    ALOGD("hal_milan_an_series_irq_test() called");
    return 0;
}

/* Demangled: android::IPowerManager::asInterface(android::sp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13IPowerManager11asInterfaceERKNS_2spINS_7IBinderEEE(void) {
    ALOGD("_ZN7android13IPowerManager11asInterfaceERKNS_2spINS_7IBinderEEE() called");
    return 0;
}

/* Demangled: gf_hal_close */
extern "C" __attribute__((visibility("default"))) int gf_hal_close(void) {
    ALOGD("gf_hal_close() called");
    return 0;
}

/* Exported Object: g_sensor_mutex */
extern "C" __attribute__((visibility("default"))) void* g_sensor_mutex = NULL;

/* Demangled: gf_hal_common_pre_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_pre_enroll(void) {
    ALOGD("gf_hal_common_pre_enroll() called");
    return 0;
}

/* Demangled: Quick_Sort */
extern "C" __attribute__((visibility("default"))) int Quick_Sort(void) {
    ALOGD("Quick_Sort() called");
    return 0;
}

/* Demangled: android::IPowerManager::getDefaultImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13IPowerManager14getDefaultImplEv(void) {
    ALOGD("_ZN7android13IPowerManager14getDefaultImplEv() called");
    return 0;
}

/* Demangled: JudgeValidByEuDistance */
extern "C" __attribute__((visibility("default"))) int JudgeValidByEuDistance(void) {
    ALOGD("JudgeValidByEuDistance() called");
    return 0;
}

/* Demangled: gf_hal_enumerate */
extern "C" __attribute__((visibility("default"))) int gf_hal_enumerate(void) {
    ALOGD("gf_hal_enumerate() called");
    return 0;
}

/* Demangled: gf_hal_destroy_timer */
extern "C" __attribute__((visibility("default"))) int gf_hal_destroy_timer(void) {
    ALOGD("gf_hal_destroy_timer() called");
    return 0;
}

/* Demangled: gf_hal_nav_listener */
extern "C" __attribute__((visibility("default"))) int gf_hal_nav_listener(void) {
    ALOGD("gf_hal_nav_listener() called");
    return 0;
}

/* Demangled: gf_hal_notify_enrollment_progress */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_enrollment_progress(void) {
    ALOGD("gf_hal_notify_enrollment_progress() called");
    return 0;
}

/* Demangled: gf_hal_save_auth_ratio_record */
extern "C" __attribute__((visibility("default"))) int gf_hal_save_auth_ratio_record(void) {
    ALOGD("gf_hal_save_auth_ratio_record() called");
    return 0;
}

/* Demangled: gf_hal_netlink_recv */
extern "C" __attribute__((visibility("default"))) int gf_hal_netlink_recv(void) {
    ALOGD("gf_hal_netlink_recv() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: dump_chip_operation_data_stub */
extern "C" __attribute__((visibility("default"))) int dump_chip_operation_data_stub(void) {
    ALOGD("dump_chip_operation_data_stub() called");
    return 0;
}

/* Exported Object: g_operation */
extern "C" __attribute__((visibility("default"))) void* g_operation = NULL;

/* Demangled: gf_hal_download_cfg */
extern "C" __attribute__((visibility("default"))) int gf_hal_download_cfg(void) {
    ALOGD("gf_hal_download_cfg() called");
    return 0;
}

/* Exported Object: GF_SNR_TEST_TIME_OUT_THRESHOLD */
extern "C" __attribute__((visibility("default"))) void* GF_SNR_TEST_TIME_OUT_THRESHOLD = NULL;

/* Demangled: gf_get_err_table_len */
extern "C" __attribute__((visibility("default"))) int gf_get_err_table_len(void) {
    ALOGD("gf_get_err_table_len() called");
    return 0;
}

/* Demangled: gf_hal_is_id_valid */
extern "C" __attribute__((visibility("default"))) int gf_hal_is_id_valid(void) {
    ALOGD("gf_hal_is_id_valid() called");
    return 0;
}

/* Exported Object: g_screen_status */
extern "C" __attribute__((visibility("default"))) void* g_screen_status = NULL;

/* Demangled: gf_handle_dump_buf */
extern "C" __attribute__((visibility("default"))) int gf_handle_dump_buf(void) {
    ALOGD("gf_handle_dump_buf() called");
    return 0;
}

/* Exported Object: g_spi_speed */
extern "C" __attribute__((visibility("default"))) void* g_spi_speed = NULL;

/* Demangled: gf_dequeue */
extern "C" __attribute__((visibility("default"))) int gf_dequeue(void) {
    ALOGD("gf_dequeue() called");
    return 0;
}

/* Demangled: gf_hal_enable_irq */
extern "C" __attribute__((visibility("default"))) int gf_hal_enable_irq(void) {
    ALOGD("gf_hal_enable_irq() called");
    return 0;
}

/* Demangled: gf_hal_notify_test_error_info */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_test_error_info(void) {
    ALOGD("gf_hal_notify_test_error_info() called");
    return 0;
}

/* Exported Object: g_is_only_dump_broken_check */
extern "C" __attribute__((visibility("default"))) void* g_is_only_dump_broken_check = NULL;

/* Demangled: gf_hal_common_set_safe_class */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_set_safe_class(void) {
    ALOGD("gf_hal_common_set_safe_class() called");
    return 0;
}

/* Demangled: gf_hal_nav_code_convert */
extern "C" __attribute__((visibility("default"))) int gf_hal_nav_code_convert(void) {
    ALOGD("gf_hal_nav_code_convert() called");
    return 0;
}

/* Demangled: gf_hal_common_screen_off */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_screen_off(void) {
    ALOGD("gf_hal_common_screen_off() called");
    return 0;
}

/* Demangled: android::IPowerManager::~IPowerManager() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13IPowerManagerD0Ev(void) {
    ALOGD("_ZN7android13IPowerManagerD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: hal_notify_test_memory_check */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_memory_check(void) {
    ALOGD("hal_notify_test_memory_check() called");
    return 0;
}

/* Demangled: gf_dump_encoder_fwrite */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_fwrite(void) {
    ALOGD("gf_dump_encoder_fwrite() called");
    return 0;
}

/* Exported Object: g_hal_function */
extern "C" __attribute__((visibility("default"))) void* g_hal_function = NULL;

/* Demangled: gf_dump_encoder_destroy */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_destroy(void) {
    ALOGD("gf_dump_encoder_destroy() called");
    return 0;
}

/* Demangled: gf_hal_init_finished */
extern "C" __attribute__((visibility("default"))) int gf_hal_init_finished(void) {
    ALOGD("gf_hal_init_finished() called");
    return 0;
}

/* Demangled: gf_hal_nav_long_press_timer_thread */
extern "C" __attribute__((visibility("default"))) int gf_hal_nav_long_press_timer_thread(void) {
    ALOGD("gf_hal_nav_long_press_timer_thread() called");
    return 0;
}

/* Demangled: gf_hal_get_tag_data_pos */
extern "C" __attribute__((visibility("default"))) int gf_hal_get_tag_data_pos(void) {
    ALOGD("gf_hal_get_tag_data_pos() called");
    return 0;
}

/* Exported Object: gSnrRawDataTouch */
extern "C" __attribute__((visibility("default"))) void* gSnrRawDataTouch = NULL;

/* Demangled: gf_hal_notify_test_authentication_failed */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_test_authentication_failed(void) {
    ALOGD("gf_hal_notify_test_authentication_failed() called");
    return 0;
}

/* Demangled: hal_notify_test_bad_point */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_bad_point(void) {
    ALOGD("hal_notify_test_bad_point() called");
    return 0;
}

/* Exported Object: cmd_id_table */
extern "C" __attribute__((visibility("default"))) void* cmd_id_table = NULL;

/* Demangled: gf_hal_resume_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_resume_enroll(void) {
    ALOGD("gf_hal_resume_enroll() called");
    return 0;
}

/* Demangled: dump_chip_init_data_stub */
extern "C" __attribute__((visibility("default"))) int dump_chip_init_data_stub(void) {
    ALOGD("dump_chip_init_data_stub() called");
    return 0;
}

/* Demangled: gf_hal_common_close */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_close(void) {
    ALOGD("gf_hal_common_close() called");
    return 0;
}

/* Demangled: gf_hal_set_timer */
extern "C" __attribute__((visibility("default"))) int gf_hal_set_timer(void) {
    ALOGD("gf_hal_set_timer() called");
    return 0;
}

/* Demangled: gf_get_operation_result_str */
extern "C" __attribute__((visibility("default"))) int gf_get_operation_result_str(void) {
    ALOGD("gf_get_operation_result_str() called");
    return 0;
}

/* Demangled: hal_oswego_irq_test */
extern "C" __attribute__((visibility("default"))) int hal_oswego_irq_test(void) {
    ALOGD("hal_oswego_irq_test() called");
    return 0;
}

/* Exported Object: g_sensor_col */
extern "C" __attribute__((visibility("default"))) void* g_sensor_col = NULL;

/* Demangled: gf_is_dump_encrypt_enabled */
extern "C" __attribute__((visibility("default"))) int gf_is_dump_encrypt_enabled(void) {
    ALOGD("gf_is_dump_encrypt_enabled() called");
    return 0;
}

/* Demangled: gf_hal_cancel */
extern "C" __attribute__((visibility("default"))) int gf_hal_cancel(void) {
    ALOGD("gf_hal_cancel() called");
    return 0;
}

/* Demangled: gf_hal_common_authenticate_fido_success */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_authenticate_fido_success(void) {
    ALOGD("gf_hal_common_authenticate_fido_success() called");
    return 0;
}

/* Demangled: gf_hal_uinpt_reportkey */
extern "C" __attribute__((visibility("default"))) int gf_hal_uinpt_reportkey(void) {
    ALOGD("gf_hal_uinpt_reportkey() called");
    return 0;
}

/* Demangled: gf_hal_test_snr_get_touch_data */
extern "C" __attribute__((visibility("default"))) int gf_hal_test_snr_get_touch_data(void) {
    ALOGD("gf_hal_test_snr_get_touch_data() called");
    return 0;
}

/* Demangled: gf_hal_authenticate */
extern "C" __attribute__((visibility("default"))) int gf_hal_authenticate(void) {
    ALOGD("gf_hal_authenticate() called");
    return 0;
}

/* Demangled: gf_hal_common_remove_for_sync_list */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_remove_for_sync_list(void) {
    ALOGD("gf_hal_common_remove_for_sync_list() called");
    return 0;
}

/* Demangled: gf_hal_lockout */
extern "C" __attribute__((visibility("default"))) int gf_hal_lockout(void) {
    ALOGD("gf_hal_lockout() called");
    return 0;
}

/* Demangled: gf_hal_save */
extern "C" __attribute__((visibility("default"))) int gf_hal_save(void) {
    ALOGD("gf_hal_save() called");
    return 0;
}

/* Demangled: gf_hal_chip_info */
extern "C" __attribute__((visibility("default"))) int gf_hal_chip_info(void) {
    ALOGD("gf_hal_chip_info() called");
    return 0;
}

/* Demangled: gf_dump_encoder_reset */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_reset(void) {
    ALOGD("gf_dump_encoder_reset() called");
    return 0;
}

/* Demangled: gf_decode_and_write_file */
extern "C" __attribute__((visibility("default"))) int gf_decode_and_write_file(void) {
    ALOGD("gf_decode_and_write_file() called");
    return 0;
}

/* Demangled: android::sp<android::IPowerManager>::operator=(android::IPowerManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_13IPowerManagerEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_13IPowerManagerEEaSEPS1_() called");
    return 0;
}

/* Demangled: gf_hal_camera_capture */
extern "C" __attribute__((visibility("default"))) int gf_hal_camera_capture(void) {
    ALOGD("gf_hal_camera_capture() called");
    return 0;
}

/* Demangled: gf_hal_disable_power */
extern "C" __attribute__((visibility("default"))) int gf_hal_disable_power(void) {
    ALOGD("gf_hal_disable_power() called");
    return 0;
}

/* Demangled: gf_hal_common_remove */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_remove(void) {
    ALOGD("gf_hal_common_remove() called");
    return 0;
}

/* Demangled: gf_hal_milan_an_series_function_customize */
extern "C" __attribute__((visibility("default"))) int gf_hal_milan_an_series_function_customize(void) {
    ALOGD("gf_hal_milan_an_series_function_customize() called");
    return 0;
}

/* Demangled: gf_get_time_stamp */
extern "C" __attribute__((visibility("default"))) int gf_get_time_stamp(void) {
    ALOGD("gf_get_time_stamp() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpRefBase-in-android::BpPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14BpPowerManagerE4_NS_9BpRefBaseE = NULL;

/* Demangled: gf_hal_post_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_post_enroll(void) {
    ALOGD("gf_hal_post_enroll() called");
    return 0;
}

/* Demangled: gf_hal_common_authenticate_not_match */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_authenticate_not_match(void) {
    ALOGD("gf_hal_common_authenticate_not_match() called");
    return 0;
}

/* Demangled: gf_hal_common_get_auth_id */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_get_auth_id(void) {
    ALOGD("gf_hal_common_get_auth_id() called");
    return 0;
}

/* Demangled: gf_hal_test_cancel */
extern "C" __attribute__((visibility("default"))) int gf_hal_test_cancel(void) {
    ALOGD("gf_hal_test_cancel() called");
    return 0;
}

/* Demangled: hal_notify_test_rawdata_saturated */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_rawdata_saturated(void) {
    ALOGD("hal_notify_test_rawdata_saturated() called");
    return 0;
}

/* Demangled: hal_test_decode_uint32 */
extern "C" __attribute__((visibility("default"))) int hal_test_decode_uint32(void) {
    ALOGD("hal_test_decode_uint32() called");
    return 0;
}

/* Demangled: gf_sec_ptrace_self */
extern "C" __attribute__((visibility("default"))) int gf_sec_ptrace_self(void) {
    ALOGD("gf_sec_ptrace_self() called");
    return 0;
}

/* Demangled: gf_hal_notify_authentication_failed */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_authentication_failed(void) {
    ALOGD("gf_hal_notify_authentication_failed() called");
    return 0;
}

/* Exported Object: g_sensor_nav_col */
extern "C" __attribute__((visibility("default"))) void* g_sensor_nav_col = NULL;

/* Demangled: gf_is_dump_enabled */
extern "C" __attribute__((visibility("default"))) int gf_is_dump_enabled(void) {
    ALOGD("gf_is_dump_enabled() called");
    return 0;
}

/* Demangled: hal_notify_test_performance */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_performance(void) {
    ALOGD("hal_notify_test_performance() called");
    return 0;
}

/* Demangled: android::IPowerManager::~IPowerManager() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13IPowerManagerD1Ev(void) {
    ALOGD("_ZN7android13IPowerManagerD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::IPowerManager::~IPowerManager() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android13IPowerManagerD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android13IPowerManagerD0Ev() called");
    return 0;
}

/* Demangled: gf_hal_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_enroll(void) {
    ALOGD("gf_hal_enroll() called");
    return 0;
}

/* Exported Object: g_nav_long_press_timer_id */
extern "C" __attribute__((visibility("default"))) void* g_nav_long_press_timer_id = NULL;

/* Demangled: gf_hal_common_enumerate */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_enumerate(void) {
    ALOGD("gf_hal_common_enumerate() called");
    return 0;
}

/* Demangled: gf_hal_download_fw */
extern "C" __attribute__((visibility("default"))) int gf_hal_download_fw(void) {
    ALOGD("gf_hal_download_fw() called");
    return 0;
}

/* Demangled: gf_hal_judge_delete_frr_database */
extern "C" __attribute__((visibility("default"))) int gf_hal_judge_delete_frr_database(void) {
    ALOGD("gf_hal_judge_delete_frr_database() called");
    return 0;
}

/* Demangled: Middle_Surface_Fliter */
extern "C" __attribute__((visibility("default"))) int Middle_Surface_Fliter(void) {
    ALOGD("Middle_Surface_Fliter() called");
    return 0;
}

/* Demangled: Partition */
extern "C" __attribute__((visibility("default"))) int Partition(void) {
    ALOGD("Partition() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-android::BpPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14BpPowerManagerE0_NS_10IInterfaceE = NULL;

/* Demangled: hal_test_encode_double */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_double(void) {
    ALOGD("hal_test_encode_double() called");
    return 0;
}

/* Demangled: gf_strcmd */
extern "C" __attribute__((visibility("default"))) int gf_strcmd(void) {
    ALOGD("gf_strcmd() called");
    return 0;
}

/* Exported Object: android::IPowerManager::default_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13IPowerManager12default_implE = NULL;

/* Demangled: android::IPowerManager::setDefaultImpl(std::__1::unique_ptr<android::IPowerManager, std::__1::default_delete<android::IPowerManager> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13IPowerManager14setDefaultImplENSt3__110unique_ptrIS0_NS1_14default_deleteIS0_EEEE(void) {
    ALOGD("_ZN7android13IPowerManager14setDefaultImplENSt3__110unique_ptrIS0_NS1_14default_deleteIS0_EEEE() called");
    return 0;
}

/* Demangled: gf_hal_common_irq_key */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_irq_key(void) {
    ALOGD("gf_hal_common_irq_key() called");
    return 0;
}

/* Demangled: gf_hal_invoke_command */
extern "C" __attribute__((visibility("default"))) int gf_hal_invoke_command(void) {
    ALOGD("gf_hal_invoke_command() called");
    return 0;
}

/* Demangled: gf_hal_get_tag_data */
extern "C" __attribute__((visibility("default"))) int gf_hal_get_tag_data(void) {
    ALOGD("gf_hal_get_tag_data() called");
    return 0;
}

/* Demangled: hal_notify_test_real_time_data */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_real_time_data(void) {
    ALOGD("hal_notify_test_real_time_data() called");
    return 0;
}

/* Demangled: gfIsScreenInteractive */
extern "C" __attribute__((visibility("default"))) int gfIsScreenInteractive(void) {
    ALOGD("gfIsScreenInteractive() called");
    return 0;
}

/* Exported Object: g_set_active_group_done */
extern "C" __attribute__((visibility("default"))) void* g_set_active_group_done = NULL;

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Exported Object: g_nav_times */
extern "C" __attribute__((visibility("default"))) void* g_nav_times = NULL;

/* Exported Object: g_test_sensor_fine_count */
extern "C" __attribute__((visibility("default"))) void* g_test_sensor_fine_count = NULL;

/* Demangled: gf_hal_test_prior_cancel */
extern "C" __attribute__((visibility("default"))) int gf_hal_test_prior_cancel(void) {
    ALOGD("gf_hal_test_prior_cancel() called");
    return 0;
}

/* Demangled: hal_notify_test_reset_pin */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_reset_pin(void) {
    ALOGD("hal_notify_test_reset_pin() called");
    return 0;
}

/* Demangled: gf_hal_function_init */
extern "C" __attribute__((visibility("default"))) int gf_hal_function_init(void) {
    ALOGD("gf_hal_function_init() called");
    return 0;
}

/* Demangled: gf_hal_common_authenticate */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_authenticate(void) {
    ALOGD("gf_hal_common_authenticate() called");
    return 0;
}

/* Demangled: gf_get_sensor_height */
extern "C" __attribute__((visibility("default"))) int gf_get_sensor_height(void) {
    ALOGD("gf_get_sensor_height() called");
    return 0;
}

/* Demangled: gf_hal_aes_decrypt */
extern "C" __attribute__((visibility("default"))) int gf_hal_aes_decrypt(void) {
    ALOGD("gf_hal_aes_decrypt() called");
    return 0;
}

/* Demangled: gf_get_dump_root_dir */
extern "C" __attribute__((visibility("default"))) int gf_get_dump_root_dir(void) {
    ALOGD("gf_get_dump_root_dir() called");
    return 0;
}

/* Demangled: gf_hal_device_open */
extern "C" __attribute__((visibility("default"))) int gf_hal_device_open(void) {
    ALOGD("gf_hal_device_open() called");
    return 0;
}

/* Demangled: gf_hal_enumerate_with_callback */
extern "C" __attribute__((visibility("default"))) int gf_hal_enumerate_with_callback(void) {
    ALOGD("gf_hal_enumerate_with_callback() called");
    return 0;
}

/* Demangled: gf_hal_navigate */
extern "C" __attribute__((visibility("default"))) int gf_hal_navigate(void) {
    ALOGD("gf_hal_navigate() called");
    return 0;
}

/* Exported Object: g_test_interrupt_pin_flag */
extern "C" __attribute__((visibility("default"))) void* g_test_interrupt_pin_flag = NULL;

/* Demangled: GetSNRVersion */
extern "C" __attribute__((visibility("default"))) int GetSNRVersion(void) {
    ALOGD("GetSNRVersion() called");
    return 0;
}

/* Exported Object: navmode_table */
extern "C" __attribute__((visibility("default"))) void* navmode_table = NULL;

/* Exported Object: g_fpc_config_had_downloaded */
extern "C" __attribute__((visibility("default"))) void* g_fpc_config_had_downloaded = NULL;

/* Demangled: hal_test_sensor_fine */
extern "C" __attribute__((visibility("default"))) int hal_test_sensor_fine(void) {
    ALOGD("hal_test_sensor_fine() called");
    return 0;
}

/* Demangled: write_image_to_bmp_file */
extern "C" __attribute__((visibility("default"))) int write_image_to_bmp_file(void) {
    ALOGD("write_image_to_bmp_file() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Exported Object: vtable for android::BpPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14BpPowerManagerE = NULL;

/* Exported Object: g_enable_fingerprint_module */
extern "C" __attribute__((visibility("default"))) void* g_enable_fingerprint_module = NULL;

/* Demangled: gf_hal_notify_acquired_info */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_acquired_info(void) {
    ALOGD("gf_hal_notify_acquired_info() called");
    return 0;
}

/* Demangled: gf_handle_thread */
extern "C" __attribute__((visibility("default"))) int gf_handle_thread(void) {
    ALOGD("gf_handle_thread() called");
    return 0;
}

/* Demangled: gf_bigdata_dump_device_info */
extern "C" __attribute__((visibility("default"))) int gf_bigdata_dump_device_info(void) {
    ALOGD("gf_bigdata_dump_device_info() called");
    return 0;
}

/* Demangled: hal_notify_test_data_noise */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_data_noise(void) {
    ALOGD("hal_notify_test_data_noise() called");
    return 0;
}

/* Demangled: hal_notify_test_spi_performance */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_spi_performance(void) {
    ALOGD("hal_notify_test_spi_performance() called");
    return 0;
}

/* Demangled: android::IPowerManager::~IPowerManager() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13IPowerManagerD2Ev(void) {
    ALOGD("_ZN7android13IPowerManagerD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IPowerManager-in-android::BpPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14BpPowerManagerE0_NS_13IPowerManagerE = NULL;

/* Demangled: virtual thunk to android::IPowerManager::~IPowerManager() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android13IPowerManagerD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android13IPowerManagerD1Ev() called");
    return 0;
}

/* Demangled: gf_hal_get_id_list */
extern "C" __attribute__((visibility("default"))) int gf_hal_get_id_list(void) {
    ALOGD("gf_hal_get_id_list() called");
    return 0;
}

/* Demangled: gf_hal_nav_complete */
extern "C" __attribute__((visibility("default"))) int gf_hal_nav_complete(void) {
    ALOGD("gf_hal_nav_complete() called");
    return 0;
}

/* Demangled: gf_hal_oswego_m_function_customize */
extern "C" __attribute__((visibility("default"))) int gf_hal_oswego_m_function_customize(void) {
    ALOGD("gf_hal_oswego_m_function_customize() called");
    return 0;
}

/* Demangled: SNR_Cal_F_Series */
extern "C" __attribute__((visibility("default"))) int SNR_Cal_F_Series(void) {
    ALOGD("SNR_Cal_F_Series() called");
    return 0;
}

/* Exported Object: g_key_long_pressed_timer_id */
extern "C" __attribute__((visibility("default"))) void* g_key_long_pressed_timer_id = NULL;

/* Demangled: gf_hal_notify_test_authentication_succeeded */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_test_authentication_succeeded(void) {
    ALOGD("gf_hal_notify_test_authentication_succeeded() called");
    return 0;
}

/* Demangled: hal_notify_test_bio_hbd_calibration */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_bio_hbd_calibration(void) {
    ALOGD("hal_notify_test_bio_hbd_calibration() called");
    return 0;
}

/* Demangled: gf_hal_common_enroll_success */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_enroll_success(void) {
    ALOGD("gf_hal_common_enroll_success() called");
    return 0;
}

/* Demangled: gf_bigdata_dump_image_data */
extern "C" __attribute__((visibility("default"))) int gf_bigdata_dump_image_data(void) {
    ALOGD("gf_bigdata_dump_image_data() called");
    return 0;
}

/* Demangled: gf_hal_enable_bio_assay_feature */
extern "C" __attribute__((visibility("default"))) int gf_hal_enable_bio_assay_feature(void) {
    ALOGD("gf_hal_enable_bio_assay_feature() called");
    return 0;
}

/* Demangled: hal_notify_test_error */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_error(void) {
    ALOGD("hal_notify_test_error() called");
    return 0;
}

/* Demangled: gf_is_dump_template_allowed */
extern "C" __attribute__((visibility("default"))) int gf_is_dump_template_allowed(void) {
    ALOGD("gf_is_dump_template_allowed() called");
    return 0;
}

/* Demangled: gf_strchiptype */
extern "C" __attribute__((visibility("default"))) int gf_strchiptype(void) {
    ALOGD("gf_strchiptype() called");
    return 0;
}

/* Demangled: gf_strnavmode */
extern "C" __attribute__((visibility("default"))) int gf_strnavmode(void) {
    ALOGD("gf_strnavmode() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: hal_test_authenticate */
extern "C" __attribute__((visibility("default"))) int hal_test_authenticate(void) {
    ALOGD("hal_test_authenticate() called");
    return 0;
}

/* Demangled: gf_set_dump_config */
extern "C" __attribute__((visibility("default"))) int gf_set_dump_config(void) {
    ALOGD("gf_set_dump_config() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: vtable for android::IPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13IPowerManagerE = NULL;

/* Demangled: gf_hal_get_auth_ratio_record */
extern "C" __attribute__((visibility("default"))) int gf_hal_get_auth_ratio_record(void) {
    ALOGD("gf_hal_get_auth_ratio_record() called");
    return 0;
}

/* Demangled: gf_empty_queue */
extern "C" __attribute__((visibility("default"))) int gf_empty_queue(void) {
    ALOGD("gf_empty_queue() called");
    return 0;
}

/* Demangled: hal_test_encode_array */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_array(void) {
    ALOGD("hal_test_encode_array() called");
    return 0;
}

/* Exported Object: g_aes_key */
extern "C" __attribute__((visibility("default"))) void* g_aes_key = NULL;

/* Demangled: gf_hal_milan_function_customize */
extern "C" __attribute__((visibility("default"))) int gf_hal_milan_function_customize(void) {
    ALOGD("gf_hal_milan_function_customize() called");
    return 0;
}

/* Demangled: gf_get_time_string */
extern "C" __attribute__((visibility("default"))) int gf_get_time_string(void) {
    ALOGD("gf_get_time_string() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpInterface<android::IPowerManager>-in-android::BpPowerManager */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android14BpPowerManagerE0_NS_11BpInterfaceINS_13IPowerManagerEEE = NULL;

/* Demangled: gf_get_dump_bigdata_version */
extern "C" __attribute__((visibility("default"))) int gf_get_dump_bigdata_version(void) {
    ALOGD("gf_get_dump_bigdata_version() called");
    return 0;
}

/* Demangled: gf_hal_open */
extern "C" __attribute__((visibility("default"))) int gf_hal_open(void) {
    ALOGD("gf_hal_open() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: gf_is_dump_bigdata_enabled */
extern "C" __attribute__((visibility("default"))) int gf_is_dump_bigdata_enabled(void) {
    ALOGD("gf_is_dump_bigdata_enabled() called");
    return 0;
}

/* Exported Object: g_fingerprint_device */
extern "C" __attribute__((visibility("default"))) void* g_fingerprint_device = NULL;

/* Demangled: gf_hal_reinit */
extern "C" __attribute__((visibility("default"))) int gf_hal_reinit(void) {
    ALOGD("gf_hal_reinit() called");
    return 0;
}

/* Demangled: gf_hal_invoke_command_ex */
extern "C" __attribute__((visibility("default"))) int gf_hal_invoke_command_ex(void) {
    ALOGD("gf_hal_invoke_command_ex() called");
    return 0;
}

/* Exported Object: err_table */
extern "C" __attribute__((visibility("default"))) void* err_table = NULL;

/* Demangled: gf_hal_pause_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_pause_enroll(void) {
    ALOGD("gf_hal_pause_enroll() called");
    return 0;
}

/* Demangled: gf_hal_send_nav_event */
extern "C" __attribute__((visibility("default"))) int gf_hal_send_nav_event(void) {
    ALOGD("gf_hal_send_nav_event() called");
    return 0;
}

/* Demangled: gf_hal_test_invoke_command_ex */
extern "C" __attribute__((visibility("default"))) int gf_hal_test_invoke_command_ex(void) {
    ALOGD("gf_hal_test_invoke_command_ex() called");
    return 0;
}

/* Demangled: gf_get_nav_width */
extern "C" __attribute__((visibility("default"))) int gf_get_nav_width(void) {
    ALOGD("gf_get_nav_width() called");
    return 0;
}

/* Demangled: gf_hal_milan_a_series_function_customize */
extern "C" __attribute__((visibility("default"))) int gf_hal_milan_a_series_function_customize(void) {
    ALOGD("gf_hal_milan_a_series_function_customize() called");
    return 0;
}

/* Demangled: hal_test_encode_int32 */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_int32(void) {
    ALOGD("hal_test_encode_int32() called");
    return 0;
}

/* Demangled: gf_stroperation */
extern "C" __attribute__((visibility("default"))) int gf_stroperation(void) {
    ALOGD("gf_stroperation() called");
    return 0;
}

/* Demangled: gf_hal_common_enable_ff_feature */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_enable_ff_feature(void) {
    ALOGD("gf_hal_common_enable_ff_feature() called");
    return 0;
}

/* Demangled: gf_hal_common_enable_fingerprint_module */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_enable_fingerprint_module(void) {
    ALOGD("gf_hal_common_enable_fingerprint_module() called");
    return 0;
}

/* Demangled: mkdirs_relative */
extern "C" __attribute__((visibility("default"))) int mkdirs_relative(void) {
    ALOGD("mkdirs_relative() called");
    return 0;
}

/* Demangled: gf_hal_sync_finger_list */
extern "C" __attribute__((visibility("default"))) int gf_hal_sync_finger_list(void) {
    ALOGD("gf_hal_sync_finger_list() called");
    return 0;
}

/* Demangled: gf_enqueue */
extern "C" __attribute__((visibility("default"))) int gf_enqueue(void) {
    ALOGD("gf_enqueue() called");
    return 0;
}

/* Demangled: gf_hal_enter_sleep_mode */
extern "C" __attribute__((visibility("default"))) int gf_hal_enter_sleep_mode(void) {
    ALOGD("gf_hal_enter_sleep_mode() called");
    return 0;
}

/* Exported Object: g_test_interrupt_pin_mutex */
extern "C" __attribute__((visibility("default"))) void* g_test_interrupt_pin_mutex = NULL;

/* Demangled: gf_get_dump_config */
extern "C" __attribute__((visibility("default"))) int gf_get_dump_config(void) {
    ALOGD("gf_get_dump_config() called");
    return 0;
}

/* Exported Object: g_key_down_flag */
extern "C" __attribute__((visibility("default"))) void* g_key_down_flag = NULL;

/* Demangled: gf_hal_common_remove_without_callback */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_remove_without_callback(void) {
    ALOGD("gf_hal_common_remove_without_callback() called");
    return 0;
}

/* Demangled: gf_hal_device_remove */
extern "C" __attribute__((visibility("default"))) int gf_hal_device_remove(void) {
    ALOGD("gf_hal_device_remove() called");
    return 0;
}

/* Demangled: hal_notify_test_bmp_data */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_bmp_data(void) {
    ALOGD("hal_notify_test_bmp_data() called");
    return 0;
}

/* Demangled: hal_test_encode_float32 */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_float32(void) {
    ALOGD("hal_test_encode_float32() called");
    return 0;
}

/* Demangled: hal_test_encode_int64 */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_int64(void) {
    ALOGD("hal_test_encode_int64() called");
    return 0;
}

/* Demangled: Noise_Cal */
extern "C" __attribute__((visibility("default"))) int Noise_Cal(void) {
    ALOGD("Noise_Cal() called");
    return 0;
}

/* Demangled: gf_hal_common_authenticate_fido */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_authenticate_fido(void) {
    ALOGD("gf_hal_common_authenticate_fido() called");
    return 0;
}

/* Demangled: gf_strmode */
extern "C" __attribute__((visibility("default"))) int gf_strmode(void) {
    ALOGD("gf_strmode() called");
    return 0;
}

/* Demangled: gf_hal_set_active_group */
extern "C" __attribute__((visibility("default"))) int gf_hal_set_active_group(void) {
    ALOGD("gf_hal_set_active_group() called");
    return 0;
}

/* Demangled: gf_hal_set_safe_class */
extern "C" __attribute__((visibility("default"))) int gf_hal_set_safe_class(void) {
    ALOGD("gf_hal_set_safe_class() called");
    return 0;
}

/* Demangled: android::IPowerManager::getInterfaceDescriptor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13IPowerManager22getInterfaceDescriptorEv(void) {
    ALOGD("_ZNK7android13IPowerManager22getInterfaceDescriptorEv() called");
    return 0;
}

/* Demangled: gf_hal_user_invoke_command */
extern "C" __attribute__((visibility("default"))) int gf_hal_user_invoke_command(void) {
    ALOGD("gf_hal_user_invoke_command() called");
    return 0;
}

/* Demangled: check_offset */
extern "C" __attribute__((visibility("default"))) int check_offset(void) {
    ALOGD("check_offset() called");
    return 0;
}

/* Demangled: gf_bigdata_dump_basic_json_data */
extern "C" __attribute__((visibility("default"))) int gf_bigdata_dump_basic_json_data(void) {
    ALOGD("gf_bigdata_dump_basic_json_data() called");
    return 0;
}

/* Demangled: gf_hal_device_close */
extern "C" __attribute__((visibility("default"))) int gf_hal_device_close(void) {
    ALOGD("gf_hal_device_close() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: gf_hal_irq */
extern "C" __attribute__((visibility("default"))) int gf_hal_irq(void) {
    ALOGD("gf_hal_irq() called");
    return 0;
}

/* Exported Object: g_image_irq_time */
extern "C" __attribute__((visibility("default"))) void* g_image_irq_time = NULL;

/* Demangled: gf_hal_long_pressed_timer_thread */
extern "C" __attribute__((visibility("default"))) int gf_hal_long_pressed_timer_thread(void) {
    ALOGD("gf_hal_long_pressed_timer_thread() called");
    return 0;
}

/* Demangled: gf_hal_device_enable */
extern "C" __attribute__((visibility("default"))) int gf_hal_device_enable(void) {
    ALOGD("gf_hal_device_enable() called");
    return 0;
}

/* Demangled: gf_dump_encoder_fclose */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_fclose(void) {
    ALOGD("gf_dump_encoder_fclose() called");
    return 0;
}

/* Exported Object: mode_table */
extern "C" __attribute__((visibility("default"))) void* mode_table = NULL;

/* Demangled: gf_dump_encoder_add_path */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_add_path(void) {
    ALOGD("gf_dump_encoder_add_path() called");
    return 0;
}

/* Demangled: gf_dump_encoder_fprintf */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_fprintf(void) {
    ALOGD("gf_dump_encoder_fprintf() called");
    return 0;
}

/* Exported Object: g_nav_double_click_timer_id */
extern "C" __attribute__((visibility("default"))) void* g_nav_double_click_timer_id = NULL;

/* Demangled: gf_hal_common_user_invoke_command */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_user_invoke_command(void) {
    ALOGD("gf_hal_common_user_invoke_command() called");
    return 0;
}

/* Demangled: check_buf_size */
extern "C" __attribute__((visibility("default"))) int check_buf_size(void) {
    ALOGD("check_buf_size() called");
    return 0;
}

/* Exported Object: g_long_pressed_timer_id */
extern "C" __attribute__((visibility("default"))) void* g_long_pressed_timer_id = NULL;

/* Exported Object: g_mode */
extern "C" __attribute__((visibility("default"))) void* g_mode = NULL;

/* Demangled: gf_hal_common_is_id_valid */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_is_id_valid(void) {
    ALOGD("gf_hal_common_is_id_valid() called");
    return 0;
}

/* Demangled: gf_hal_get_screen_state */
extern "C" __attribute__((visibility("default"))) int gf_hal_get_screen_state(void) {
    ALOGD("gf_hal_get_screen_state() called");
    return 0;
}

/* Demangled: gf_hal_common_dump_invoke_command */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_dump_invoke_command(void) {
    ALOGD("gf_hal_common_dump_invoke_command() called");
    return 0;
}

/* Demangled: gf_get_chip_series */
extern "C" __attribute__((visibility("default"))) int gf_get_chip_series(void) {
    ALOGD("gf_get_chip_series() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: gf_hal_remove */
extern "C" __attribute__((visibility("default"))) int gf_hal_remove(void) {
    ALOGD("gf_hal_remove() called");
    return 0;
}

/* Exported Object: g_esd_check_flag */
extern "C" __attribute__((visibility("default"))) void* g_esd_check_flag = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: gf_bigdata_dump_nav_data */
extern "C" __attribute__((visibility("default"))) int gf_bigdata_dump_nav_data(void) {
    ALOGD("gf_bigdata_dump_nav_data() called");
    return 0;
}

/* Exported Object: g_irq_time_milan_a */
extern "C" __attribute__((visibility("default"))) void* g_irq_time_milan_a = NULL;

/* Demangled: gf_hal_test_cmd */
extern "C" __attribute__((visibility("default"))) int gf_hal_test_cmd(void) {
    ALOGD("gf_hal_test_cmd() called");
    return 0;
}

/* Demangled: hal_irq_timer_thread */
extern "C" __attribute__((visibility("default"))) int hal_irq_timer_thread(void) {
    ALOGD("hal_irq_timer_thread() called");
    return 0;
}

/* Demangled: gf_hal_common_sync_finger_list */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_sync_finger_list(void) {
    ALOGD("gf_hal_common_sync_finger_list() called");
    return 0;
}

/* Demangled: hal_test_spi_transfer_timer_thread */
extern "C" __attribute__((visibility("default"))) int hal_test_spi_transfer_timer_thread(void) {
    ALOGD("hal_test_spi_transfer_timer_thread() called");
    return 0;
}

/* Demangled: gf_hal_get_auth_id */
extern "C" __attribute__((visibility("default"))) int gf_hal_get_auth_id(void) {
    ALOGD("gf_hal_get_auth_id() called");
    return 0;
}

/* Demangled: gf_hal_remove_for_sync_list */
extern "C" __attribute__((visibility("default"))) int gf_hal_remove_for_sync_list(void) {
    ALOGD("gf_hal_remove_for_sync_list() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: Singal_Cal */
extern "C" __attribute__((visibility("default"))) int Singal_Cal(void) {
    ALOGD("Singal_Cal() called");
    return 0;
}

/* Exported Object: testcmd_table */
extern "C" __attribute__((visibility("default"))) void* testcmd_table = NULL;

/* Exported Object: g_nav_frame_index */
extern "C" __attribute__((visibility("default"))) void* g_nav_frame_index = NULL;

/* Demangled: gf_strnav */
extern "C" __attribute__((visibility("default"))) int gf_strnav(void) {
    ALOGD("gf_strnav() called");
    return 0;
}

/* Exported Object: nav_table */
extern "C" __attribute__((visibility("default"))) void* nav_table = NULL;

/* Demangled: gf_hal_common_set_active_group */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_set_active_group(void) {
    ALOGD("gf_hal_common_set_active_group() called");
    return 0;
}

/* Demangled: gf_hal_common_enumerate_with_callback */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_enumerate_with_callback(void) {
    ALOGD("gf_hal_common_enumerate_with_callback() called");
    return 0;
}

/* Demangled: android::IPowerManager::IPowerManager() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13IPowerManagerC2Ev(void) {
    ALOGD("_ZN7android13IPowerManagerC2Ev() called");
    return 0;
}

/* Demangled: gf_queue_init */
extern "C" __attribute__((visibility("default"))) int gf_queue_init(void) {
    ALOGD("gf_queue_init() called");
    return 0;
}

/* Demangled: gf_hal_common_pause_enroll */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_pause_enroll(void) {
    ALOGD("gf_hal_common_pause_enroll() called");
    return 0;
}

/* Demangled: gf_hal_send_key_event */
extern "C" __attribute__((visibility("default"))) int gf_hal_send_key_event(void) {
    ALOGD("gf_hal_send_key_event() called");
    return 0;
}

/* Demangled: gf_get_dump_path */
extern "C" __attribute__((visibility("default"))) int gf_get_dump_path(void) {
    ALOGD("gf_get_dump_path() called");
    return 0;
}

/* Demangled: gf_dump_encoder_fdelete */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_fdelete(void) {
    ALOGD("gf_dump_encoder_fdelete() called");
    return 0;
}

/* Demangled: gf_hal_create_timer */
extern "C" __attribute__((visibility("default"))) int gf_hal_create_timer(void) {
    ALOGD("gf_hal_create_timer() called");
    return 0;
}

/* Demangled: gf_hal_notify_remove_succeeded */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_remove_succeeded(void) {
    ALOGD("gf_hal_notify_remove_succeeded() called");
    return 0;
}

/* Demangled: hal_notify_test_calibration_para_retest */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_calibration_para_retest(void) {
    ALOGD("hal_notify_test_calibration_para_retest() called");
    return 0;
}

/* Demangled: hal_notify_test_frr_far_record_enroll */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_frr_far_record_enroll(void) {
    ALOGD("hal_notify_test_frr_far_record_enroll() called");
    return 0;
}

/* Demangled: gf_dump_encoder_create */
extern "C" __attribute__((visibility("default"))) int gf_dump_encoder_create(void) {
    ALOGD("gf_dump_encoder_create() called");
    return 0;
}

/* Demangled: gf_is_operation_result_dump_allowed */
extern "C" __attribute__((visibility("default"))) int gf_is_operation_result_dump_allowed(void) {
    ALOGD("gf_is_operation_result_dump_allowed() called");
    return 0;
}

/* Demangled: gf_strkey */
extern "C" __attribute__((visibility("default"))) int gf_strkey(void) {
    ALOGD("gf_strkey() called");
    return 0;
}

/* Exported Object: g_hal_inited */
extern "C" __attribute__((visibility("default"))) void* g_hal_inited = NULL;

/* Demangled: gf_hal_dump_data_by_operation */
extern "C" __attribute__((visibility("default"))) int gf_hal_dump_data_by_operation(void) {
    ALOGD("gf_hal_dump_data_by_operation() called");
    return 0;
}

/* Demangled: gf_hal_dump_cmd */
extern "C" __attribute__((visibility("default"))) int gf_hal_dump_cmd(void) {
    ALOGD("gf_hal_dump_cmd() called");
    return 0;
}

/* Demangled: gf_hal_aes_encrypt */
extern "C" __attribute__((visibility("default"))) int gf_hal_aes_encrypt(void) {
    ALOGD("gf_hal_aes_encrypt() called");
    return 0;
}

/* Demangled: android::sp<android::IPowerManager>& android::sp<android::IPowerManager>::operator=<android::BpPowerManager>(android::BpPowerManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_13IPowerManagerEEaSINS_14BpPowerManagerEEERS2_PT_(void) {
    ALOGD("_ZN7android2spINS_13IPowerManagerEEaSINS_14BpPowerManagerEEERS2_PT_() called");
    return 0;
}

/* Demangled: gf_hal_common_load_otp_info_from_sdcard */
extern "C" __attribute__((visibility("default"))) int gf_hal_common_load_otp_info_from_sdcard(void) {
    ALOGD("gf_hal_common_load_otp_info_from_sdcard() called");
    return 0;
}

/* Exported Object: g_test_spi_transfer_times */
extern "C" __attribute__((visibility("default"))) void* g_test_spi_transfer_times = NULL;

/* Demangled: gf_hal_notify_test_acquired_info */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_test_acquired_info(void) {
    ALOGD("gf_hal_notify_test_acquired_info() called");
    return 0;
}

/* Demangled: hal_notify_test_interrupt_pin */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_interrupt_pin(void) {
    ALOGD("hal_notify_test_interrupt_pin() called");
    return 0;
}

/* Demangled: hal_test_resume_enroll */
extern "C" __attribute__((visibility("default"))) int hal_test_resume_enroll(void) {
    ALOGD("hal_test_resume_enroll() called");
    return 0;
}

/* Demangled: gf_hal_current_time_microsecond */
extern "C" __attribute__((visibility("default"))) int gf_hal_current_time_microsecond(void) {
    ALOGD("gf_hal_current_time_microsecond() called");
    return 0;
}

/* Demangled: gf_hal_notify_error_info */
extern "C" __attribute__((visibility("default"))) int gf_hal_notify_error_info(void) {
    ALOGD("gf_hal_notify_error_info() called");
    return 0;
}

/* Demangled: gf_hal_test_invoke_command */
extern "C" __attribute__((visibility("default"))) int gf_hal_test_invoke_command(void) {
    ALOGD("gf_hal_test_invoke_command() called");
    return 0;
}

/* Demangled: gf_hal_test_snr_get_snr_result */
extern "C" __attribute__((visibility("default"))) int gf_hal_test_snr_get_snr_result(void) {
    ALOGD("gf_hal_test_snr_get_snr_result() called");
    return 0;
}

/* Demangled: hal_notify_test_finger_event */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_finger_event(void) {
    ALOGD("hal_notify_test_finger_event() called");
    return 0;
}

/* Demangled: FreeMemory */
extern "C" __attribute__((visibility("default"))) int FreeMemory(void) {
    ALOGD("FreeMemory() called");
    return 0;
}

/* Exported Object: g_irq_timer_id */
extern "C" __attribute__((visibility("default"))) void* g_irq_timer_id = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: hal_enroll_timer_thread */
extern "C" __attribute__((visibility("default"))) int hal_enroll_timer_thread(void) {
    ALOGD("hal_enroll_timer_thread() called");
    return 0;
}

/* Demangled: gf_hal_disable_irq */
extern "C" __attribute__((visibility("default"))) int gf_hal_disable_irq(void) {
    ALOGD("gf_hal_disable_irq() called");
    return 0;
}

/* Demangled: hal_test_encode_int8 */
extern "C" __attribute__((visibility("default"))) int hal_test_encode_int8(void) {
    ALOGD("hal_test_encode_int8() called");
    return 0;
}

/* Demangled: gf_strirq */
extern "C" __attribute__((visibility("default"))) int gf_strirq(void) {
    ALOGD("gf_strirq() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: gf_hal_is_inited */
extern "C" __attribute__((visibility("default"))) int gf_hal_is_inited(void) {
    ALOGD("gf_hal_is_inited() called");
    return 0;
}

/* Demangled: hal_milan_an_series_irq */
extern "C" __attribute__((visibility("default"))) int hal_milan_an_series_irq(void) {
    ALOGD("hal_milan_an_series_irq() called");
    return 0;
}

/* Demangled: hal_notify_test_fpc_reset_fwcfg */
extern "C" __attribute__((visibility("default"))) int hal_notify_test_fpc_reset_fwcfg(void) {
    ALOGD("hal_notify_test_fpc_reset_fwcfg() called");
    return 0;
}

/* Demangled: hal_test_pause_enroll */
extern "C" __attribute__((visibility("default"))) int hal_test_pause_enroll(void) {
    ALOGD("hal_test_pause_enroll() called");
    return 0;
}

/* Demangled: hal_milan_an_dump_chip_operation_data */
extern "C" __attribute__((visibility("default"))) int hal_milan_an_dump_chip_operation_data(void) {
    ALOGD("hal_milan_an_dump_chip_operation_data() called");
    return 0;
}

/* Demangled: gf_hal_nav_double_click_timer_thread */
extern "C" __attribute__((visibility("default"))) int gf_hal_nav_double_click_timer_thread(void) {
    ALOGD("gf_hal_nav_double_click_timer_thread() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: g_hal_config */
extern "C" __attribute__((visibility("default"))) void* g_hal_config = NULL;

/* Exported Object: g_irq_time_milan_an */
extern "C" __attribute__((visibility("default"))) void* g_irq_time_milan_an = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
