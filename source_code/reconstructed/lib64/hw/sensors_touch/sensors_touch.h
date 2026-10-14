/*
 * Reverse-Engineered ABI Specification for: sensors.touch.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: sensors.touch.so
 */

#ifndef BEGONIA_RE_SENSORS_TOUCH_H
#define BEGONIA_RE_SENSORS_TOUCH_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<sensor_t, std::__1::allocator<sensor_t> >::__push_back_slow_path<sensor_t const&>(sensor_t const&) */
int _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _sensor_info */
/* Demangled: _sensor_info */
extern void* _sensor_info;

/* Symbol: _touch_sensors */
/* Demangled: _touch_sensors */
extern void* _touch_sensors;

/* Symbol: flush_count */
/* Demangled: flush_count */
extern void* flush_count;

__END_DECLS

#endif /* BEGONIA_RE_SENSORS_TOUCH_H */
