/*
 * Android Hardware Headers: Thermal (hardware/thermal.h)
 */
#ifndef ANDROID_THERMAL_INTERFACE_H
#define ANDROID_THERMAL_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define THERMAL_HARDWARE_MODULE_ID "thermal"

#define THERMAL_MODULE_API_VERSION_0_1 HARDWARE_MODULE_API_VERSION(0, 1)

enum temperature_type {
    DEVICE_TEMPERATURE_UNKNOWN = -1,
    DEVICE_TEMPERATURE_CPU = 0,
    DEVICE_TEMPERATURE_GPU = 1,
    DEVICE_TEMPERATURE_BATTERY = 2,
    DEVICE_TEMPERATURE_SKIN = 3,
};

typedef struct {
    enum temperature_type type;
    const char *name;
    float current_value;
    float throttling_threshold;
    float shutdown_threshold;
    float vr_throttling_threshold;
} temperature_t;

typedef struct {
    const char *name;
    uint64_t active;
    uint64_t total;
} cpu_usage_t;

typedef struct {
    const char *name;
    float current_value;
} cooling_device_t;

typedef struct thermal_module {
    struct hw_module_t common;
    ssize_t (*get_temperatures)(struct thermal_module *module, temperature_t *list, size_t size);
    ssize_t (*get_cpu_usages)(struct thermal_module *module, cpu_usage_t *list);
    ssize_t (*get_cooling_devices)(struct thermal_module *module, cooling_device_t *list, size_t size);
} thermal_module_t;

__END_DECLS

#endif /* ANDROID_THERMAL_INTERFACE_H */
