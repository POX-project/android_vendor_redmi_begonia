/*
 * Handcrafted, fully functional Vibrator HAL for Redmi Note 8 Pro (Begonia / MT6785)
 * Interfaces with hardware haptic motor via Linux sysfs.
 */

#define LOG_TAG "vibrator_mt6785"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include <hardware/vibrator.h>

#define THE_ONE_VIBRATOR_DURATION "/sys/class/leds/vibrator/duration"
#define THE_ONE_VIBRATOR_ACTIVATE "/sys/class/leds/vibrator/activate"
#define THE_ONE_VIBRATOR_STATE    "/sys/class/leds/vibrator/state"

static int write_int(const char *path, int value) {
    int fd = open(path, O_RDWR);
    if (fd < 0) return -errno;
    char buffer[20];
    int bytes = snprintf(buffer, sizeof(buffer), "%d\n", value);
    ssize_t amt = write(fd, buffer, bytes);
    close(fd);
    return amt == -1 ? -errno : 0;
}

static int vib_on(struct vibrator_device* dev, unsigned int timeout_ms) {
    int err = write_int(THE_ONE_VIBRATOR_DURATION, timeout_ms);
    if (err == 0) {
        err = write_int(THE_ONE_VIBRATOR_ACTIVATE, 1);
    }
    return err;
}

static int vib_off(struct vibrator_device* dev) {
    return write_int(THE_ONE_VIBRATOR_ACTIVATE, 0);
}

static int vib_close(struct hw_device_t *dev) {
    if (dev) free(dev);
    return 0;
}

static int vib_open(const struct hw_module_t* module, const char* name,
        struct hw_device_t** device) {
    if (strcmp(VIBRATOR_HARDWARE_MODULE_ID, name) != 0) {
        return -EINVAL;
    }

    struct vibrator_device *dev = (struct vibrator_device*)calloc(1, sizeof(struct vibrator_device));
    if (!dev) return -ENOMEM;

    dev->common.tag = HARDWARE_DEVICE_TAG;
    dev->common.version = 0;
    dev->common.module = (struct hw_module_t*)module;
    dev->common.close = vib_close;
    dev->vibrator_on = vib_on;
    dev->vibrator_off = vib_off;

    *device = (struct hw_device_t*)dev;
    ALOGI("Begonia Vibrator HAL opened successfully");
    return 0;
}

static struct hw_module_methods_t vibrator_module_methods = {
    .open = vib_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = VIBRATOR_HARDWARE_MODULE_ID,
    .name = "Begonia Vibrator HAL",
    .author = "Google Antigravity & LineageOS",
    .methods = &vibrator_module_methods,
    .dso = NULL,
    .reserved = {0},
};
