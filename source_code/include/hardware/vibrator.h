/*
 * Android Hardware Headers: Vibrator (hardware/vibrator.h)
 */
#ifndef ANDROID_VIBRATOR_INTERFACE_H
#define ANDROID_VIBRATOR_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define VIBRATOR_HARDWARE_MODULE_ID "vibrator"

struct vibrator_device {
    struct hw_device_t common;
    int (*vibrator_on)(struct vibrator_device* dev, unsigned int timeout_ms);
    int (*vibrator_off)(struct vibrator_device* dev);
};

__END_DECLS

#endif /* ANDROID_VIBRATOR_INTERFACE_H */
