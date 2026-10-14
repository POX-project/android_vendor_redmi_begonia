/*
 * Android Hardware Headers: Sensors (hardware/sensors.h)
 */
#ifndef ANDROID_SENSORS_INTERFACE_H
#define ANDROID_SENSORS_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define SENSORS_HARDWARE_MODULE_ID "sensors"

#define SENSORS_MODULE_API_VERSION_0_1 HARDWARE_MODULE_API_VERSION(0, 1)
#define SENSORS_DEVICE_API_VERSION_1_0 HARDWARE_DEVICE_API_VERSION(1, 0)
#define SENSORS_DEVICE_API_VERSION_1_3 HARDWARE_DEVICE_API_VERSION(1, 3)

#define SENSOR_TYPE_ACCELEROMETER                    (1)
#define SENSOR_TYPE_GEOMAGNETIC_FIELD                (2)
#define SENSOR_TYPE_MAGNETIC_FIELD                   SENSOR_TYPE_GEOMAGNETIC_FIELD
#define SENSOR_TYPE_ORIENTATION                      (3)
#define SENSOR_TYPE_GYROSCOPE                        (4)
#define SENSOR_TYPE_LIGHT                            (5)
#define SENSOR_TYPE_PRESSURE                         (6)
#define SENSOR_TYPE_TEMPERATURE                      (7)
#define SENSOR_TYPE_PROXIMITY                        (8)
#define SENSOR_TYPE_GRAVITY                          (9)
#define SENSOR_TYPE_LINEAR_ACCELERATION              (10)
#define SENSOR_TYPE_ROTATION_VECTOR                  (11)
#define SENSOR_TYPE_RELATIVE_HUMIDITY                (12)
#define SENSOR_TYPE_AMBIENT_TEMPERATURE              (13)
#define SENSOR_TYPE_MAGNETIC_FIELD_UNCALIBRATED      (14)
#define SENSOR_TYPE_GAME_ROTATION_VECTOR             (15)
#define SENSOR_TYPE_GYROSCOPE_UNCALIBRATED           (16)
#define SENSOR_TYPE_SIGNIFICANT_MOTION               (17)
#define SENSOR_TYPE_STEP_DETECTOR                    (18)
#define SENSOR_TYPE_STEP_COUNTER                     (19)
#define SENSOR_TYPE_GEOMAGNETIC_ROTATION_VECTOR      (20)

#define SENSOR_STRING_TYPE_ACCELEROMETER             "android.sensor.accelerometer"
#define SENSOR_STRING_TYPE_MAGNETIC_FIELD            "android.sensor.magnetic_field"
#define SENSOR_STRING_TYPE_ORIENTATION               "android.sensor.orientation"
#define SENSOR_STRING_TYPE_GYROSCOPE                 "android.sensor.gyroscope"
#define SENSOR_STRING_TYPE_LIGHT                     "android.sensor.light"
#define SENSOR_STRING_TYPE_PRESSURE                  "android.sensor.pressure"
#define SENSOR_STRING_TYPE_TEMPERATURE               "android.sensor.temperature"
#define SENSOR_STRING_TYPE_PROXIMITY                 "android.sensor.proximity"
#define SENSOR_STRING_TYPE_GRAVITY                   "android.sensor.gravity"
#define SENSOR_STRING_TYPE_LINEAR_ACCELERATION       "android.sensor.linear_acceleration"
#define SENSOR_STRING_TYPE_ROTATION_VECTOR           "android.sensor.rotation_vector"
#define SENSOR_STRING_TYPE_RELATIVE_HUMIDITY         "android.sensor.relative_humidity"
#define SENSOR_STRING_TYPE_AMBIENT_TEMPERATURE       "android.sensor.ambient_temperature"
#define SENSOR_STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED "android.sensor.magnetic_field_uncalibrated"
#define SENSOR_STRING_TYPE_GAME_ROTATION_VECTOR      "android.sensor.game_rotation_vector"
#define SENSOR_STRING_TYPE_GYROSCOPE_UNCALIBRATED    "android.sensor.gyroscope_uncalibrated"
#define SENSOR_STRING_TYPE_SIGNIFICANT_MOTION        "android.sensor.significant_motion"
#define SENSOR_STRING_TYPE_STEP_DETECTOR             "android.sensor.step_detector"
#define SENSOR_STRING_TYPE_STEP_COUNTER              "android.sensor.step_counter"
#define SENSOR_STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR "android.sensor.geomagnetic_rotation_vector"

#define SENSOR_FLAG_CONTINUOUS_MODE                  (0)
#define SENSOR_FLAG_ON_CHANGE_MODE                   (2)
#define SENSOR_FLAG_ONE_SHOT_MODE                    (4)
#define SENSOR_FLAG_SPECIAL_REPORTING_MODE           (6)
#define SENSOR_FLAG_WAKE_UP                          (1)

typedef struct sensors_vec_t {
    union {
        float v[3];
        struct {
            float x;
            float y;
            float z;
        };
        struct {
            float azimuth;
            float pitch;
            float roll;
        };
    };
    int8_t status;
    uint8_t reserved[3];
} sensors_vec_t;

typedef struct sensors_event_t {
    int32_t version;
    int32_t sensor;
    int32_t type;
    int32_t reserved0;
    int64_t timestamp;
    union {
        float data[16];
        sensors_vec_t acceleration;
        sensors_vec_t magnetic;
        float light;
        float distance;
        float temperature;
    };
    uint32_t flags;
    int32_t reserved1[3];
} sensors_event_t;

struct sensor_t {
    const char*     name;
    const char*     vendor;
    int             version;
    int             handle;
    int             type;
    float           maxRange;
    float           resolution;
    float           power;
    int32_t         minDelay;
    uint32_t        fifoReservedEventCount;
    uint32_t        fifoMaxEventCount;
    const char*     stringType;
    const char*     requiredPermission;
    int32_t         maxDelay;
    uint32_t        flags;
    void*           reserved[2];
};

struct sensors_module_t {
    struct hw_module_t common;
    int (*get_sensors_list)(struct sensors_module_t* module,
            struct sensor_t const** list);
};

struct sensors_poll_device_1 {
    struct hw_device_t common;
    int (*activate)(struct sensors_poll_device_1 *dev,
            int sensor_handle, int enabled);
    int (*setDelay)(struct sensors_poll_device_1 *dev,
            int sensor_handle, int64_t sampling_period_ns);
    int (*poll)(struct sensors_poll_device_1 *dev,
            sensors_event_t* data, int count);
    int (*batch)(struct sensors_poll_device_1 *dev,
            int sensor_handle, int flags, int64_t sampling_period_ns,
            int64_t max_report_latency_ns);
    int (*flush)(struct sensors_poll_device_1 *dev, int sensor_handle);
    int (*inject_sensor_data)(struct sensors_poll_device_1 *dev, const sensors_event_t *data);
    void (*reserved_impl[7])(void);
};
typedef struct sensors_poll_device_1 sensors_poll_device_1_t;

__END_DECLS

#endif /* ANDROID_SENSORS_INTERFACE_H */
