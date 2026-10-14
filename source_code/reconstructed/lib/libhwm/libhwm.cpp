/*
 * Reverse-Engineered Source for: libhwm.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libhwm"

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
#include "libhwm.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_ALS_PS "/dev/als_ps"
#define DEV_DEV_GSENSOR "/dev/gsensor"
#define DEV_DEV_GYROSCOPE "/dev/gyroscope"
#define DEV_DEV_MSENSOR "/dev/msensor"
#define DEV_DEV_SAR "/dev/sar"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_ALS_PS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ALS_PS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ALS_PS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_GSENSOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GSENSOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GSENSOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_GYROSCOPE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GYROSCOPE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GYROSCOPE, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MSENSOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MSENSOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MSENSOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_SAR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SAR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SAR, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: als_get_static_calibration */
extern "C" __attribute__((visibility("default"))) int als_get_static_calibration(void) {
    ALOGD("als_get_static_calibration() called");
    return 0;
}

/* Demangled: als_set_backlight_bias */
extern "C" __attribute__((visibility("default"))) int als_set_backlight_bias(void) {
    ALOGD("als_set_backlight_bias() called");
    return 0;
}

/* Demangled: alsps_read_nvram */
extern "C" __attribute__((visibility("default"))) int alsps_read_nvram(void) {
    ALOGD("alsps_read_nvram() called");
    return 0;
}

/* Demangled: sar_init */
extern "C" __attribute__((visibility("default"))) int sar_init(void) {
    ALOGD("sar_init() called");
    return 0;
}

/* Demangled: calculate_psensor_max_value */
extern "C" __attribute__((visibility("default"))) int calculate_psensor_max_value(void) {
    ALOGD("calculate_psensor_max_value() called");
    return 0;
}

/* Demangled: calculate_psensor_unit_value */
extern "C" __attribute__((visibility("default"))) int calculate_psensor_unit_value(void) {
    ALOGD("calculate_psensor_unit_value() called");
    return 0;
}

/* Demangled: gyroscope_open */
extern "C" __attribute__((visibility("default"))) int gyroscope_open(void) {
    ALOGD("gyroscope_open() called");
    return 0;
}

/* Demangled: sar_enable_cali */
extern "C" __attribute__((visibility("default"))) int sar_enable_cali(void) {
    ALOGD("sar_enable_cali() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: XM_get_psensor_threshold */
extern "C" __attribute__((visibility("default"))) int XM_get_psensor_threshold(void) {
    ALOGD("XM_get_psensor_threshold() called");
    return 0;
}

/* Demangled: sar_get_cali */
extern "C" __attribute__((visibility("default"))) int sar_get_cali(void) {
    ALOGD("sar_get_cali() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: do_calibration */
extern "C" __attribute__((visibility("default"))) int do_calibration(void) {
    ALOGD("do_calibration() called");
    return 0;
}

/* Demangled: get_psensor_data */
extern "C" __attribute__((visibility("default"))) int get_psensor_data(void) {
    ALOGD("get_psensor_data() called");
    return 0;
}

/* Demangled: gyroscope_get_static_calibration */
extern "C" __attribute__((visibility("default"))) int gyroscope_get_static_calibration(void) {
    ALOGD("gyroscope_get_static_calibration() called");
    return 0;
}

/* Demangled: sar_get_data */
extern "C" __attribute__((visibility("default"))) int sar_get_data(void) {
    ALOGD("sar_get_data() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: gyroscope_enable_cali */
extern "C" __attribute__((visibility("default"))) int gyroscope_enable_cali(void) {
    ALOGD("gyroscope_enable_cali() called");
    return 0;
}

/* Demangled: alsps_close */
extern "C" __attribute__((visibility("default"))) int alsps_close(void) {
    ALOGD("alsps_close() called");
    return 0;
}

/* Demangled: gsensor_get_static_calibration */
extern "C" __attribute__((visibility("default"))) int gsensor_get_static_calibration(void) {
    ALOGD("gsensor_get_static_calibration() called");
    return 0;
}

/* Demangled: gyroscope_close */
extern "C" __attribute__((visibility("default"))) int gyroscope_close(void) {
    ALOGD("gyroscope_close() called");
    return 0;
}

/* Demangled: msensor_close */
extern "C" __attribute__((visibility("default"))) int msensor_close(void) {
    ALOGD("msensor_close() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: als_set_static_calibration */
extern "C" __attribute__((visibility("default"))) int als_set_static_calibration(void) {
    ALOGD("als_set_static_calibration() called");
    return 0;
}

/* Demangled: gsensor_enable_cali */
extern "C" __attribute__((visibility("default"))) int gsensor_enable_cali(void) {
    ALOGD("gsensor_enable_cali() called");
    return 0;
}

/* Demangled: alsps_read */
extern "C" __attribute__((visibility("default"))) int alsps_read(void) {
    ALOGD("alsps_read() called");
    return 0;
}

/* Demangled: do_gyroscope_calibration */
extern "C" __attribute__((visibility("default"))) int do_gyroscope_calibration(void) {
    ALOGD("do_gyroscope_calibration() called");
    return 0;
}

/* Demangled: gyroscope_do_selftest */
extern "C" __attribute__((visibility("default"))) int gyroscope_do_selftest(void) {
    ALOGD("gyroscope_do_selftest() called");
    return 0;
}

/* Demangled: checkGyroscopeData */
extern "C" __attribute__((visibility("default"))) int checkGyroscopeData(void) {
    ALOGD("checkGyroscopeData() called");
    return 0;
}

/* Demangled: gsensor_self_test */
extern "C" __attribute__((visibility("default"))) int gsensor_self_test(void) {
    ALOGD("gsensor_self_test() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: gsensor_do_selftest */
extern "C" __attribute__((visibility("default"))) int gsensor_do_selftest(void) {
    ALOGD("gsensor_do_selftest() called");
    return 0;
}

/* Demangled: msensor_do_selftest */
extern "C" __attribute__((visibility("default"))) int msensor_do_selftest(void) {
    ALOGD("msensor_do_selftest() called");
    return 0;
}

/* Demangled: clear_psensor_calibration */
extern "C" __attribute__((visibility("default"))) int clear_psensor_calibration(void) {
    ALOGD("clear_psensor_calibration() called");
    return 0;
}

/* Demangled: alsps_calibration */
extern "C" __attribute__((visibility("default"))) int alsps_calibration(void) {
    ALOGD("alsps_calibration() called");
    return 0;
}

/* Demangled: alsps_get_cali */
extern "C" __attribute__((visibility("default"))) int alsps_get_cali(void) {
    ALOGD("alsps_get_cali() called");
    return 0;
}

/* Demangled: gsensor_calibration */
extern "C" __attribute__((visibility("default"))) int gsensor_calibration(void) {
    ALOGD("gsensor_calibration() called");
    return 0;
}

/* Demangled: gsensor_close */
extern "C" __attribute__((visibility("default"))) int gsensor_close(void) {
    ALOGD("gsensor_close() called");
    return 0;
}

/* Demangled: gsensor_set_static_calibration */
extern "C" __attribute__((visibility("default"))) int gsensor_set_static_calibration(void) {
    ALOGD("gsensor_set_static_calibration() called");
    return 0;
}

/* Demangled: gyroscope_init */
extern "C" __attribute__((visibility("default"))) int gyroscope_init(void) {
    ALOGD("gyroscope_init() called");
    return 0;
}

/* Demangled: gyroscope_read */
extern "C" __attribute__((visibility("default"))) int gyroscope_read(void) {
    ALOGD("gyroscope_read() called");
    return 0;
}

/* Demangled: alsps_ps_enable_cali */
extern "C" __attribute__((visibility("default"))) int alsps_ps_enable_cali(void) {
    ALOGD("alsps_ps_enable_cali() called");
    return 0;
}

/* Demangled: alsps_rst_cali */
extern "C" __attribute__((visibility("default"))) int alsps_rst_cali(void) {
    ALOGD("alsps_rst_cali() called");
    return 0;
}

/* Demangled: get_gyroscope_calibration */
extern "C" __attribute__((visibility("default"))) int get_gyroscope_calibration(void) {
    ALOGD("get_gyroscope_calibration() called");
    return 0;
}

/* Demangled: sar_write_nvram */
extern "C" __attribute__((visibility("default"))) int sar_write_nvram(void) {
    ALOGD("sar_write_nvram() called");
    return 0;
}

/* Demangled: alsps_set_cali */
extern "C" __attribute__((visibility("default"))) int alsps_set_cali(void) {
    ALOGD("alsps_set_cali() called");
    return 0;
}

/* Demangled: gsensor_open */
extern "C" __attribute__((visibility("default"))) int gsensor_open(void) {
    ALOGD("gsensor_open() called");
    return 0;
}

/* Demangled: gsensor_update_nvram */
extern "C" __attribute__((visibility("default"))) int gsensor_update_nvram(void) {
    ALOGD("gsensor_update_nvram() called");
    return 0;
}

/* Demangled: gyroscope_calibration */
extern "C" __attribute__((visibility("default"))) int gyroscope_calibration(void) {
    ALOGD("gyroscope_calibration() called");
    return 0;
}

/* Demangled: gyroscope_set_static_calibration */
extern "C" __attribute__((visibility("default"))) int gyroscope_set_static_calibration(void) {
    ALOGD("gyroscope_set_static_calibration() called");
    return 0;
}

/* Demangled: msensor_open */
extern "C" __attribute__((visibility("default"))) int msensor_open(void) {
    ALOGD("msensor_open() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: als_start_static_calibration */
extern "C" __attribute__((visibility("default"))) int als_start_static_calibration(void) {
    ALOGD("als_start_static_calibration() called");
    return 0;
}

/* Demangled: sar_get_static_calibration */
extern "C" __attribute__((visibility("default"))) int sar_get_static_calibration(void) {
    ALOGD("sar_get_static_calibration() called");
    return 0;
}

/* Demangled: sar_start_static_calibration */
extern "C" __attribute__((visibility("default"))) int sar_start_static_calibration(void) {
    ALOGD("sar_start_static_calibration() called");
    return 0;
}

/* Demangled: set_psensor_threshold */
extern "C" __attribute__((visibility("default"))) int set_psensor_threshold(void) {
    ALOGD("set_psensor_threshold() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: do_gsensor_calibration */
extern "C" __attribute__((visibility("default"))) int do_gsensor_calibration(void) {
    ALOGD("do_gsensor_calibration() called");
    return 0;
}

/* Demangled: get_psensor_min_value */
extern "C" __attribute__((visibility("default"))) int get_psensor_min_value(void) {
    ALOGD("get_psensor_min_value() called");
    return 0;
}

/* Demangled: gsensor_reset_nvram */
extern "C" __attribute__((visibility("default"))) int gsensor_reset_nvram(void) {
    ALOGD("gsensor_reset_nvram() called");
    return 0;
}

/* Demangled: calculateStandardCalibration */
extern "C" __attribute__((visibility("default"))) int calculateStandardCalibration(void) {
    ALOGD("calculateStandardCalibration() called");
    return 0;
}

/* Demangled: get_gsensor_calibration */
extern "C" __attribute__((visibility("default"))) int get_gsensor_calibration(void) {
    ALOGD("get_gsensor_calibration() called");
    return 0;
}

/* Demangled: gsensor_read_nvram */
extern "C" __attribute__((visibility("default"))) int gsensor_read_nvram(void) {
    ALOGD("gsensor_read_nvram() called");
    return 0;
}

/* Demangled: sar_close */
extern "C" __attribute__((visibility("default"))) int sar_close(void) {
    ALOGD("sar_close() called");
    return 0;
}

/* Demangled: sar_open */
extern "C" __attribute__((visibility("default"))) int sar_open(void) {
    ALOGD("sar_open() called");
    return 0;
}

/* Demangled: alsps_set_threshold */
extern "C" __attribute__((visibility("default"))) int alsps_set_threshold(void) {
    ALOGD("alsps_set_threshold() called");
    return 0;
}

/* Demangled: alsps_write_nvram */
extern "C" __attribute__((visibility("default"))) int alsps_write_nvram(void) {
    ALOGD("alsps_write_nvram() called");
    return 0;
}

/* Demangled: get_psensor_max_value */
extern "C" __attribute__((visibility("default"))) int get_psensor_max_value(void) {
    ALOGD("get_psensor_max_value() called");
    return 0;
}

/* Demangled: gsensor_write_nvram */
extern "C" __attribute__((visibility("default"))) int gsensor_write_nvram(void) {
    ALOGD("gsensor_write_nvram() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: XM_set_psensor_threshold */
extern "C" __attribute__((visibility("default"))) int XM_set_psensor_threshold(void) {
    ALOGD("XM_set_psensor_threshold() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: checkAccelerometerData */
extern "C" __attribute__((visibility("default"))) int checkAccelerometerData(void) {
    ALOGD("checkAccelerometerData() called");
    return 0;
}

/* Demangled: gyroscope_read_nvram */
extern "C" __attribute__((visibility("default"))) int gyroscope_read_nvram(void) {
    ALOGD("gyroscope_read_nvram() called");
    return 0;
}

/* Demangled: libhwm_wait_delay */
extern "C" __attribute__((visibility("default"))) int libhwm_wait_delay(void) {
    ALOGD("libhwm_wait_delay() called");
    return 0;
}

/* Demangled: gsensor_get_cali */
extern "C" __attribute__((visibility("default"))) int gsensor_get_cali(void) {
    ALOGD("gsensor_get_cali() called");
    return 0;
}

/* Demangled: gsensor_start_static_calibration */
extern "C" __attribute__((visibility("default"))) int gsensor_start_static_calibration(void) {
    ALOGD("gsensor_start_static_calibration() called");
    return 0;
}

/* Demangled: gyroscope_start_static_calibration */
extern "C" __attribute__((visibility("default"))) int gyroscope_start_static_calibration(void) {
    ALOGD("gyroscope_start_static_calibration() called");
    return 0;
}

/* Demangled: gyroscope_write_nvram */
extern "C" __attribute__((visibility("default"))) int gyroscope_write_nvram(void) {
    ALOGD("gyroscope_write_nvram() called");
    return 0;
}

/* Demangled: sar_read_nvram */
extern "C" __attribute__((visibility("default"))) int sar_read_nvram(void) {
    ALOGD("sar_read_nvram() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: gsensor_rst_cali */
extern "C" __attribute__((visibility("default"))) int gsensor_rst_cali(void) {
    ALOGD("gsensor_rst_cali() called");
    return 0;
}

/* Demangled: gyroscope_rst_cali */
extern "C" __attribute__((visibility("default"))) int gyroscope_rst_cali(void) {
    ALOGD("gyroscope_rst_cali() called");
    return 0;
}

/* Demangled: XM_enable_ps_calibration */
extern "C" __attribute__((visibility("default"))) int XM_enable_ps_calibration(void) {
    ALOGD("XM_enable_ps_calibration() called");
    return 0;
}

/* Demangled: gsensor_set_cali */
extern "C" __attribute__((visibility("default"))) int gsensor_set_cali(void) {
    ALOGD("gsensor_set_cali() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: alsps_open */
extern "C" __attribute__((visibility("default"))) int alsps_open(void) {
    ALOGD("alsps_open() called");
    return 0;
}

/* Demangled: clear_gsensor_calibration */
extern "C" __attribute__((visibility("default"))) int clear_gsensor_calibration(void) {
    ALOGD("clear_gsensor_calibration() called");
    return 0;
}

/* Demangled: gsensor_init */
extern "C" __attribute__((visibility("default"))) int gsensor_init(void) {
    ALOGD("gsensor_init() called");
    return 0;
}

/* Demangled: gsensor_poll_data */
extern "C" __attribute__((visibility("default"))) int gsensor_poll_data(void) {
    ALOGD("gsensor_poll_data() called");
    return 0;
}

/* Demangled: gsensor_read */
extern "C" __attribute__((visibility("default"))) int gsensor_read(void) {
    ALOGD("gsensor_read() called");
    return 0;
}

/* Demangled: gyroscope_get_cali */
extern "C" __attribute__((visibility("default"))) int gyroscope_get_cali(void) {
    ALOGD("gyroscope_get_cali() called");
    return 0;
}

/* Demangled: libhwm_current_ms */
extern "C" __attribute__((visibility("default"))) int libhwm_current_ms(void) {
    ALOGD("libhwm_current_ms() called");
    return 0;
}

/* Demangled: als_set_cali */
extern "C" __attribute__((visibility("default"))) int als_set_cali(void) {
    ALOGD("als_set_cali() called");
    return 0;
}

/* Demangled: getGravityStandard */
extern "C" __attribute__((visibility("default"))) int getGravityStandard(void) {
    ALOGD("getGravityStandard() called");
    return 0;
}

/* Demangled: get_psensor_threshold */
extern "C" __attribute__((visibility("default"))) int get_psensor_threshold(void) {
    ALOGD("get_psensor_threshold() called");
    return 0;
}

/* Demangled: calculate_psensor_min_value */
extern "C" __attribute__((visibility("default"))) int calculate_psensor_min_value(void) {
    ALOGD("calculate_psensor_min_value() called");
    return 0;
}

/* Demangled: clear_gyroscope_calibration */
extern "C" __attribute__((visibility("default"))) int clear_gyroscope_calibration(void) {
    ALOGD("clear_gyroscope_calibration() called");
    return 0;
}

/* Demangled: gsensor_enable_selftest */
extern "C" __attribute__((visibility("default"))) int gsensor_enable_selftest(void) {
    ALOGD("gsensor_enable_selftest() called");
    return 0;
}

/* Demangled: gsensor_selftest */
extern "C" __attribute__((visibility("default"))) int gsensor_selftest(void) {
    ALOGD("gsensor_selftest() called");
    return 0;
}

/* Demangled: gyroscope_set_cali */
extern "C" __attribute__((visibility("default"))) int gyroscope_set_cali(void) {
    ALOGD("gyroscope_set_cali() called");
    return 0;
}
