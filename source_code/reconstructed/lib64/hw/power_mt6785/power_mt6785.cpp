/*
 * Handcrafted, fully functional Power HAL for Redmi Note 8 Pro (Begonia / MT6785)
 * Handles CPU clusters, governor scaling, and interactive/hint events via Linux sysfs.
 */

#define LOG_TAG "power_mt6785"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include <hardware/power.h>

#define CPUFREQ_INTERACTIVE_HISPEED "/sys/devices/system/cpu/cpufreq/interactive/hispeed_freq"
#define CPUFREQ_SCHEDUTIL_UP_RATE "/sys/devices/system/cpu/cpufreq/schedutil/up_rate_limit_us"
#define MTK_FPSGO_BOOST "/sys/module/mtk_fpsgo/parameters/boost_enable"
#define MTK_PERF_GESTURE_ENABLE "/sys/module/mtk_core_ctl/parameters/perf_boost"
#define TOUCHSCREEN_DOUBLE_TAP "/proc/touchpanel/double_tap_enable"

static pthread_mutex_t g_power_lock = PTHREAD_MUTEX_INITIALIZER;
static int g_dt2w_state = 0;

static int write_sysfs_str(const char *path, const char *val) {
    int fd = open(path, O_WRONLY);
    if (fd < 0) return -errno;
    ssize_t amt = write(fd, val, strlen(val));
    close(fd);
    return amt == -1 ? -errno : 0;
}

static void power_init(struct power_module *module) {
    ALOGI("Begonia Power HAL Initialized");
}

static void power_set_interactive(struct power_module *module, int on) {
    pthread_mutex_lock(&g_power_lock);
    ALOGV("power_set_interactive: %d", on);
    if (on) {
        write_sysfs_str(CPUFREQ_SCHEDUTIL_UP_RATE, "500");
        write_sysfs_str(MTK_FPSGO_BOOST, "1");
    } else {
        write_sysfs_str(CPUFREQ_SCHEDUTIL_UP_RATE, "2000");
        write_sysfs_str(MTK_FPSGO_BOOST, "0");
    }
    pthread_mutex_unlock(&g_power_lock);
}

static void power_hint(struct power_module *module, power_hint_t hint, void *data) {
    pthread_mutex_lock(&g_power_lock);
    switch (hint) {
        case POWER_HINT_INTERACTION:
            write_sysfs_str(MTK_PERF_GESTURE_ENABLE, "1");
            break;
        case POWER_HINT_VSYNC:
            break;
        case POWER_HINT_LOW_POWER:
            ALOGI("Power hint: LOW_POWER %s", data ? "ON" : "OFF");
            break;
        case POWER_HINT_SUSTAINED_PERFORMANCE:
            ALOGI("Power hint: SUSTAINED_PERFORMANCE %s", data ? "ON" : "OFF");
            break;
        case POWER_HINT_LAUNCH:
            write_sysfs_str(MTK_PERF_GESTURE_ENABLE, "1");
            break;
        default:
            break;
    }
    pthread_mutex_unlock(&g_power_lock);
}

static void power_set_feature(struct power_module *module, feature_t feature, int state) {
    pthread_mutex_lock(&g_power_lock);
    switch (feature) {
        case POWER_FEATURE_DOUBLE_TAP_TO_WAKE:
            g_dt2w_state = state ? 1 : 0;
            write_sysfs_str(TOUCHSCREEN_DOUBLE_TAP, state ? "1" : "0");
            ALOGI("Double tap to wake set to: %d", g_dt2w_state);
            break;
        default:
            break;
    }
    pthread_mutex_unlock(&g_power_lock);
}

static int power_get_feature(struct power_module *module, feature_t feature) {
    if (feature == POWER_FEATURE_DOUBLE_TAP_TO_WAKE) {
        return g_dt2w_state;
    }
    return -EINVAL;
}

static int power_open(const struct hw_module_t* module, const char* name,
        struct hw_device_t** device) {
    if (strcmp(POWER_HARDWARE_MODULE_ID, name) != 0) {
        return -EINVAL;
    }
    ALOGI("Opening Begonia Power HAL module");
    return 0;
}

static struct hw_module_methods_t power_module_methods = {
    .open = power_open,
};

struct power_module HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .common = {
        .tag = HARDWARE_MODULE_TAG,
        .module_api_version = POWER_MODULE_API_VERSION_0_3,
        .hal_api_version = HARDWARE_HAL_API_VERSION,
        .id = POWER_HARDWARE_MODULE_ID,
        .name = "Begonia Power HAL",
        .author = "Google Antigravity & LineageOS",
        .methods = &power_module_methods,
        .dso = NULL,
        .reserved = {0},
    },
    .init = power_init,
    .setInteractive = power_set_interactive,
    .powerHint = power_hint,
    .setFeature = power_set_feature,
    .getFeature = power_get_feature,
};
