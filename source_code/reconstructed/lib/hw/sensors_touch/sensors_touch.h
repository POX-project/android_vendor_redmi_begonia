/*
 * Reverse-Engineered ABI Specification for: sensors.touch.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
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

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<sensor_t, std::__1::allocator<sensor_t> >::__push_back_slow_path<sensor_t const&>(sensor_t const&) */
int _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _sensor_info */
/* Demangled: _sensor_info */
extern void* _sensor_info;

/* Symbol: _ZNSt3__114__split_bufferI8sensor_tRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<sensor_t, std::__1::allocator<sensor_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<sensor_t>&) */
int _ZNSt3__114__split_bufferI8sensor_tRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<sensor_t, std::__1::allocator<sensor_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<sensor_t, std::__1::allocator<sensor_t>&>&) */
int _ZNSt3__16vectorI8sensor_tNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _touch_sensors */
/* Demangled: _touch_sensors */
extern void* _touch_sensors;

/* Symbol: flush_count */
/* Demangled: flush_count */
extern void* flush_count;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_SENSORS_TOUCH_H */
