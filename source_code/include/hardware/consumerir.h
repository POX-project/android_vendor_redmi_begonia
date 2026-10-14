/*
 * Android Hardware Headers: Consumer IR (hardware/consumerir.h)
 */
#ifndef ANDROID_CONSUMERIR_INTERFACE_H
#define ANDROID_CONSUMERIR_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define CONSUMERIR_HARDWARE_MODULE_ID "consumerir"

typedef struct consumerir_freq_range {
    int min;
    int max;
} consumerir_freq_range_t;

struct consumerir_device {
    struct hw_device_t common;
    int (*transmit)(struct consumerir_device *dev, int carrier_freq,
            const int pattern[], int pattern_len);
    int (*get_num_carrier_freqs)(struct consumerir_device *dev);
    int (*get_carrier_freqs)(struct consumerir_device *dev,
            size_t len, consumerir_freq_range_t *ranges);
};

__END_DECLS

#endif /* ANDROID_CONSUMERIR_INTERFACE_H */
