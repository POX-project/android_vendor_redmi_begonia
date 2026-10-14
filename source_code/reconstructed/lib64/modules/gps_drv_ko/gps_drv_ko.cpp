/*
 * Reverse-Engineered Source for: gps_drv.ko
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "gps_drv_ko"

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
#include "gps_drv_ko.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: __crc_mtk_wcn_stpgps_drv_init */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stpgps_drv_init = NULL;

/* Exported Object: __crc_mtk_wcn_stpgps_drv_exit */
extern "C" __attribute__((visibility("default"))) void* __crc_mtk_wcn_stpgps_drv_exit = NULL;

/* Demangled: rtc_GPS_low_power_detected */
extern "C" __attribute__((visibility("default"))) int rtc_GPS_low_power_detected(void) {
    ALOGD("rtc_GPS_low_power_detected() called");
    return 0;
}

/* Demangled: GPS_write */
extern "C" __attribute__((visibility("default"))) int GPS_write(void) {
    ALOGD("GPS_write() called");
    return 0;
}

/* Demangled: GPS_read */
extern "C" __attribute__((visibility("default"))) int GPS_read(void) {
    ALOGD("GPS_read() called");
    return 0;
}

/* Demangled: GPS_get_local_clock_ms */
extern "C" __attribute__((visibility("default"))) int GPS_get_local_clock_ms(void) {
    ALOGD("GPS_get_local_clock_ms() called");
    return 0;
}

/* Demangled: GPS_fwlog_ctrl_inner */
extern "C" __attribute__((visibility("default"))) int GPS_fwlog_ctrl_inner(void) {
    ALOGD("GPS_fwlog_ctrl_inner() called");
    return 0;
}

/* Demangled: GPS_fwlog_ctrl */
extern "C" __attribute__((visibility("default"))) int GPS_fwlog_ctrl(void) {
    ALOGD("GPS_fwlog_ctrl() called");
    return 0;
}

/* Exported Object: fwctl_mtx */
extern "C" __attribute__((visibility("default"))) void* fwctl_mtx = NULL;

/* Exported Object: fgGps_fwctl_ready */
extern "C" __attribute__((visibility("default"))) void* fgGps_fwctl_ready = NULL;

/* Exported Object: fgGps_fwlog_on */
extern "C" __attribute__((visibility("default"))) void* fgGps_fwlog_on = NULL;

/* Demangled: GPS_unlocked_ioctl */
extern "C" __attribute__((visibility("default"))) int GPS_unlocked_ioctl(void) {
    ALOGD("GPS_unlocked_ioctl() called");
    return 0;
}

/* Exported Object: reference_count_bitmap */
extern "C" __attribute__((visibility("default"))) void* reference_count_bitmap = NULL;

/* Demangled: GPS_compat_ioctl */
extern "C" __attribute__((visibility("default"))) int GPS_compat_ioctl(void) {
    ALOGD("GPS_compat_ioctl() called");
    return 0;
}

/* Demangled: mtk_wcn_stpgps_drv_init */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stpgps_drv_init(void) {
    ALOGD("mtk_wcn_stpgps_drv_init() called");
    return 0;
}

/* Exported Object: GPS_fops */
extern "C" __attribute__((visibility("default"))) void* GPS_fops = NULL;

/* Exported Object: __this_module */
extern "C" __attribute__((visibility("default"))) void* __this_module = NULL;

/* Exported Object: stpgps_class */
extern "C" __attribute__((visibility("default"))) void* stpgps_class = NULL;

/* Exported Object: gps_wake_lock_name */
extern "C" __attribute__((visibility("default"))) void* gps_wake_lock_name = NULL;

/* Demangled: mtk_wcn_stpgps_drv_exit */
extern "C" __attribute__((visibility("default"))) int mtk_wcn_stpgps_drv_exit(void) {
    ALOGD("mtk_wcn_stpgps_drv_exit() called");
    return 0;
}

/* Demangled: init_module */
extern "C" __attribute__((visibility("default"))) int init_module(void) {
    ALOGD("init_module() called");
    return 0;
}

/* Demangled: mtk_gps_fw_log_init */
extern "C" __attribute__((visibility("default"))) int mtk_gps_fw_log_init(void) {
    ALOGD("mtk_gps_fw_log_init() called");
    return 0;
}

/* Demangled: cleanup_module */
extern "C" __attribute__((visibility("default"))) int cleanup_module(void) {
    ALOGD("cleanup_module() called");
    return 0;
}

/* Demangled: mtk_gps_fw_log_exit */
extern "C" __attribute__((visibility("default"))) int mtk_gps_fw_log_exit(void) {
    ALOGD("mtk_gps_fw_log_exit() called");
    return 0;
}

/* Demangled: GPS_reference_count */
extern "C" __attribute__((visibility("default"))) int GPS_reference_count(void) {
    ALOGD("GPS_reference_count() called");
    return 0;
}

/* Demangled: fw_log_gps_unlocked_ioctl */
extern "C" __attribute__((visibility("default"))) int fw_log_gps_unlocked_ioctl(void) {
    ALOGD("fw_log_gps_unlocked_ioctl() called");
    return 0;
}

/* Demangled: fw_log_gps_compat_ioctl */
extern "C" __attribute__((visibility("default"))) int fw_log_gps_compat_ioctl(void) {
    ALOGD("fw_log_gps_compat_ioctl() called");
    return 0;
}

/* Exported Object: logdevobj */
extern "C" __attribute__((visibility("default"))) void* logdevobj = NULL;

/* Exported Object: fgGps_fw_log_ON */
extern "C" __attribute__((visibility("default"))) void* fgGps_fw_log_ON = NULL;
