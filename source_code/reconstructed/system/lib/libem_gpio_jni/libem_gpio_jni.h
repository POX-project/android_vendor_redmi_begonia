/*
 * Reverse-Engineered ABI Specification for: libem_gpio_jni.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libem_gpio_jni.so
 */

#ifndef BEGONIA_RE_LIBEM_GPIO_JNI_H
#define BEGONIA_RE_LIBEM_GPIO_JNI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: gpio_set_mode */
/* Demangled: gpio_set_mode */
int gpio_set_mode(void);

/* Symbol: gpio_set_out */
/* Demangled: gpio_set_out */
int gpio_set_out(void);

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_gpioInit */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_gpioInit */
int Java_com_mediatek_engineermode_io_EmGpio_gpioInit(void);

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_setGpioModeZero */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioModeZero */
int Java_com_mediatek_engineermode_io_EmGpio_setGpioModeZero(void);

/* Symbol: gpio_set_pupd_enable */
/* Demangled: gpio_set_pupd_enable */
int gpio_set_pupd_enable(void);

/* Symbol: gpio_set_pupd_select */
/* Demangled: gpio_set_pupd_select */
int gpio_set_pupd_select(void);

/* Symbol: gpio_init */
/* Demangled: gpio_init */
int gpio_init(void);

/* Symbol: print_gpio_status */
/* Demangled: print_gpio_status */
int print_gpio_status(void);

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_getGpioMaxNumber */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_getGpioMaxNumber */
int Java_com_mediatek_engineermode_io_EmGpio_getGpioMaxNumber(void);

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_gpioUnInit */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_gpioUnInit */
int Java_com_mediatek_engineermode_io_EmGpio_gpioUnInit(void);

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_setGpioOutput */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioOutput */
int Java_com_mediatek_engineermode_io_EmGpio_setGpioOutput(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_setGpioInput */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioInput */
int Java_com_mediatek_engineermode_io_EmGpio_setGpioInput(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int fn___aeabi_memset(void) __asm__("__aeabi_memset");

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");

/* Symbol: gpio_deinit */
/* Demangled: gpio_deinit */
int gpio_deinit(void);

/* Symbol: gpio_set_direction */
/* Demangled: gpio_set_direction */
int gpio_set_direction(void);

/* Symbol: gpio_write_op */
/* Demangled: gpio_write_op */
int gpio_write_op(void);

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_setGpioDataHigh */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioDataHigh */
int Java_com_mediatek_engineermode_io_EmGpio_setGpioDataHigh(void);

/* Symbol: Java_com_mediatek_engineermode_io_EmGpio_setGpioDataLow */
/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioDataLow */
int Java_com_mediatek_engineermode_io_EmGpio_setGpioDataLow(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBEM_GPIO_JNI_H */
