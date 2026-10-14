/*
 * Android Hardware Headers: Lights (hardware/lights.h)
 */
#ifndef ANDROID_LIGHTS_INTERFACE_H
#define ANDROID_LIGHTS_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define LIGHTS_HARDWARE_MODULE_ID "lights"

#define LIGHT_INDEX_BACKLIGHT          0
#define LIGHT_INDEX_KEYBOARD           1
#define LIGHT_INDEX_BUTTONS            2
#define LIGHT_INDEX_BATTERY            3
#define LIGHT_INDEX_NOTIFICATIONS      4
#define LIGHT_INDEX_ATTENTION          5
#define LIGHT_INDEX_BLUETOOTH          6
#define LIGHT_INDEX_WIFI               7
#define LIGHT_COUNT                    8

#define LIGHT_ID_BACKLIGHT             "backlight"
#define LIGHT_ID_KEYBOARD              "keyboard"
#define LIGHT_ID_BUTTONS               "buttons"
#define LIGHT_ID_BATTERY               "battery"
#define LIGHT_ID_NOTIFICATIONS         "notifications"
#define LIGHT_ID_ATTENTION             "attention"
#define LIGHT_ID_BLUETOOTH             "bluetooth"
#define LIGHT_ID_WIFI                  "wifi"

#define LIGHT_FLASH_NONE               0
#define LIGHT_FLASH_TIMED              1
#define LIGHT_FLASH_HARDWARE           2

#define BRIGHTNESS_MODE_USER           0
#define BRIGHTNESS_MODE_SENSOR         1
#define BRIGHTNESS_MODE_LOW_PERSISTENCE 2

struct light_state_t {
    unsigned int color;
    int flashMode;
    int flashOnMS;
    int flashOffMS;
    int brightnessMode;
};

struct light_device_t {
    struct hw_device_t common;
    int (*set_light)(struct light_device_t* dev,
            struct light_state_t const* state);
};

__END_DECLS

#endif /* ANDROID_LIGHTS_INTERFACE_H */
