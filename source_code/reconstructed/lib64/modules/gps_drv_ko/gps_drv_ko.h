/*
 * Reverse-Engineered ABI Specification for: gps_drv.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: gps_drv.ko
 */

#ifndef BEGONIA_RE_GPS_DRV_KO_H
#define BEGONIA_RE_GPS_DRV_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __crc_mtk_wcn_stpgps_drv_init */
/* Demangled: __crc_mtk_wcn_stpgps_drv_init */
extern void* __crc_mtk_wcn_stpgps_drv_init;

/* Symbol: __crc_mtk_wcn_stpgps_drv_exit */
/* Demangled: __crc_mtk_wcn_stpgps_drv_exit */
extern void* __crc_mtk_wcn_stpgps_drv_exit;

/* Symbol: rtc_GPS_low_power_detected */
/* Demangled: rtc_GPS_low_power_detected */
int rtc_GPS_low_power_detected(void);

/* Symbol: GPS_write */
/* Demangled: GPS_write */
int GPS_write(void);

/* Symbol: GPS_read */
/* Demangled: GPS_read */
int GPS_read(void);

/* Symbol: GPS_get_local_clock_ms */
/* Demangled: GPS_get_local_clock_ms */
int GPS_get_local_clock_ms(void);

/* Symbol: GPS_fwlog_ctrl_inner */
/* Demangled: GPS_fwlog_ctrl_inner */
int GPS_fwlog_ctrl_inner(void);

/* Symbol: GPS_fwlog_ctrl */
/* Demangled: GPS_fwlog_ctrl */
int GPS_fwlog_ctrl(void);

/* Symbol: fwctl_mtx */
/* Demangled: fwctl_mtx */
extern void* fwctl_mtx;

/* Symbol: fgGps_fwctl_ready */
/* Demangled: fgGps_fwctl_ready */
extern void* fgGps_fwctl_ready;

/* Symbol: fgGps_fwlog_on */
/* Demangled: fgGps_fwlog_on */
extern void* fgGps_fwlog_on;

/* Symbol: GPS_unlocked_ioctl */
/* Demangled: GPS_unlocked_ioctl */
int GPS_unlocked_ioctl(void);

/* Symbol: reference_count_bitmap */
/* Demangled: reference_count_bitmap */
extern void* reference_count_bitmap;

/* Symbol: GPS_compat_ioctl */
/* Demangled: GPS_compat_ioctl */
int GPS_compat_ioctl(void);

/* Symbol: mtk_wcn_stpgps_drv_init */
/* Demangled: mtk_wcn_stpgps_drv_init */
int mtk_wcn_stpgps_drv_init(void);

/* Symbol: GPS_fops */
/* Demangled: GPS_fops */
extern void* GPS_fops;

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

/* Symbol: stpgps_class */
/* Demangled: stpgps_class */
extern void* stpgps_class;

/* Symbol: gps_wake_lock_name */
/* Demangled: gps_wake_lock_name */
extern void* gps_wake_lock_name;

/* Symbol: mtk_wcn_stpgps_drv_exit */
/* Demangled: mtk_wcn_stpgps_drv_exit */
int mtk_wcn_stpgps_drv_exit(void);

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: mtk_gps_fw_log_init */
/* Demangled: mtk_gps_fw_log_init */
int mtk_gps_fw_log_init(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: mtk_gps_fw_log_exit */
/* Demangled: mtk_gps_fw_log_exit */
int mtk_gps_fw_log_exit(void);

/* Symbol: GPS_reference_count */
/* Demangled: GPS_reference_count */
int GPS_reference_count(void);

/* Symbol: fw_log_gps_unlocked_ioctl */
/* Demangled: fw_log_gps_unlocked_ioctl */
int fw_log_gps_unlocked_ioctl(void);

/* Symbol: fw_log_gps_compat_ioctl */
/* Demangled: fw_log_gps_compat_ioctl */
int fw_log_gps_compat_ioctl(void);

/* Symbol: logdevobj */
/* Demangled: logdevobj */
extern void* logdevobj;

/* Symbol: fgGps_fw_log_ON */
/* Demangled: fgGps_fw_log_ON */
extern void* fgGps_fw_log_ON;

__END_DECLS

#endif /* BEGONIA_RE_GPS_DRV_KO_H */
