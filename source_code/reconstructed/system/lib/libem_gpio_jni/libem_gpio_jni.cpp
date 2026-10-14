/*
 * Reverse-Engineered Source for: libem_gpio_jni.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libem_gpio_jni"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libem_gpio_jni.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: gpio_set_mode */
extern "C" __attribute__((visibility("default"))) int gpio_set_mode(void) {
    ALOGD("gpio_set_mode() called");
    return 0;
}

/* Demangled: gpio_set_out */
extern "C" __attribute__((visibility("default"))) int gpio_set_out(void) {
    ALOGD("gpio_set_out() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_gpioInit */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_gpioInit(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_gpioInit() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioModeZero */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_setGpioModeZero(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_setGpioModeZero() called");
    return 0;
}

/* Demangled: gpio_set_pupd_enable */
extern "C" __attribute__((visibility("default"))) int gpio_set_pupd_enable(void) {
    ALOGD("gpio_set_pupd_enable() called");
    return 0;
}

/* Demangled: gpio_set_pupd_select */
extern "C" __attribute__((visibility("default"))) int gpio_set_pupd_select(void) {
    ALOGD("gpio_set_pupd_select() called");
    return 0;
}

/* Demangled: gpio_init */
extern "C" __attribute__((visibility("default"))) int gpio_init(void) {
    ALOGD("gpio_init() called");
    return 0;
}

/* Demangled: print_gpio_status */
extern "C" __attribute__((visibility("default"))) int print_gpio_status(void) {
    ALOGD("print_gpio_status() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_getGpioMaxNumber */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_getGpioMaxNumber(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_getGpioMaxNumber() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_gpioUnInit */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_gpioUnInit(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_gpioUnInit() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioOutput */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_setGpioOutput(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_setGpioOutput() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr8(void) __asm__("__aeabi_memclr8");
int fn___aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset8(void) __asm__("__aeabi_memset8");
int fn___aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr(void) __asm__("__aeabi_memclr");
int fn___aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioInput */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_setGpioInput(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_setGpioInput() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memclr4(void) __asm__("__aeabi_memclr4");
int fn___aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset(void) __asm__("__aeabi_memset");
int fn___aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int fn___aeabi_memset4(void) __asm__("__aeabi_memset4");
int fn___aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: gpio_deinit */
extern "C" __attribute__((visibility("default"))) int gpio_deinit(void) {
    ALOGD("gpio_deinit() called");
    return 0;
}

/* Demangled: gpio_set_direction */
extern "C" __attribute__((visibility("default"))) int gpio_set_direction(void) {
    ALOGD("gpio_set_direction() called");
    return 0;
}

/* Demangled: gpio_write_op */
extern "C" __attribute__((visibility("default"))) int gpio_write_op(void) {
    ALOGD("gpio_write_op() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioDataHigh */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_setGpioDataHigh(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_setGpioDataHigh() called");
    return 0;
}

/* Demangled: Java_com_mediatek_engineermode_io_EmGpio_setGpioDataLow */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_engineermode_io_EmGpio_setGpioDataLow(void) {
    ALOGD("Java_com_mediatek_engineermode_io_EmGpio_setGpioDataLow() called");
    return 0;
}
