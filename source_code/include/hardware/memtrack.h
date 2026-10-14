/*
 * Android Hardware Headers: Memtrack (hardware/memtrack.h)
 */
#ifndef ANDROID_MEMTRACK_INTERFACE_H
#define ANDROID_MEMTRACK_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define MEMTRACK_HARDWARE_MODULE_ID "memtrack"

enum memtrack_type {
    MEMTRACK_TYPE_OTHER = 0,
    MEMTRACK_TYPE_GL = 1,
    MEMTRACK_TYPE_GRAPHICS = 2,
    MEMTRACK_TYPE_MULTIMEDIA = 3,
    MEMTRACK_TYPE_CAMERA = 4,
    MEMTRACK_NUM_TYPES,
};

struct memtrack_record {
    size_t size_in_bytes;
    unsigned int flags;
};

struct memtrack_module {
    struct hw_module_t common;
    int (*init)(const struct memtrack_module *module);
    int (*get_memory)(const struct memtrack_module *module,
                      pid_t pid,
                      int type,
                      struct memtrack_record *records,
                      size_t *num_records);
};

__END_DECLS

#endif /* ANDROID_MEMTRACK_INTERFACE_H */
