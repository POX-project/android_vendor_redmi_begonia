/*
 * Android Hardware Headers: Power (hardware/power.h)
 */
#ifndef ANDROID_POWER_INTERFACE_H
#define ANDROID_POWER_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define POWER_HARDWARE_MODULE_ID "power"

#define POWER_MODULE_API_VERSION_0_1 HARDWARE_MODULE_API_VERSION(0, 1)
#define POWER_MODULE_API_VERSION_0_2 HARDWARE_MODULE_API_VERSION(0, 2)
#define POWER_MODULE_API_VERSION_0_3 HARDWARE_MODULE_API_VERSION(0, 3)

typedef enum {
    POWER_HINT_VSYNC = 0x00000001,
    POWER_HINT_INTERACTION = 0x00000002,
    POWER_HINT_VIDEO_ENCODE = 0x00000003,
    POWER_HINT_VIDEO_DECODE = 0x00000004,
    POWER_HINT_LOW_POWER = 0x00000005,
    POWER_HINT_SUSTAINED_PERFORMANCE = 0x00000006,
    POWER_HINT_VR_MODE = 0x00000007,
    POWER_HINT_LAUNCH = 0x00000008,
    POWER_HINT_DISABLE_TOUCH = 0x00000009,
    POWER_HINT_AUDIO_STREAMING = 0x0000000A,
    POWER_HINT_AUDIO_LOW_LATENCY = 0x0000000B,
} power_hint_t;

typedef enum {
    POWER_FEATURE_DOUBLE_TAP_TO_WAKE = 0x00000001,
} feature_t;

struct power_module {
    struct hw_module_t common;
    void (*init)(struct power_module *module);
    void (*setInteractive)(struct power_module *module, int on);
    void (*powerHint)(struct power_module *module, power_hint_t hint, void *data);
    void (*setFeature)(struct power_module *module, feature_t feature, int state);
    int (*getFeature)(struct power_module *module, feature_t feature);
};

__END_DECLS

#endif /* ANDROID_POWER_INTERFACE_H */
