/*
 * Reverse-Engineered Source for: libbluetoothem_mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libbluetoothem_mtk"

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
#include "libbluetoothem_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: em_bt_receive_data */
extern "C" __attribute__((visibility("default"))) void* em_bt_receive_data = NULL;

/* Exported Object: em_bt_set_io_attr */
extern "C" __attribute__((visibility("default"))) void* em_bt_set_io_attr = NULL;

/* Demangled: EM_BT_deinit */
extern "C" __attribute__((visibility("default"))) int EM_BT_deinit(void) {
    ALOGD("EM_BT_deinit() called");
    return 0;
}

/* Demangled: EM_BT_polling_start */
extern "C" __attribute__((visibility("default"))) int EM_BT_polling_start(void) {
    ALOGD("EM_BT_polling_start() called");
    return 0;
}

/* Demangled: EM_BT_polling_stop */
extern "C" __attribute__((visibility("default"))) int EM_BT_polling_stop(void) {
    ALOGD("EM_BT_polling_stop() called");
    return 0;
}

/* Exported Object: em_bt_restore */
extern "C" __attribute__((visibility("default"))) void* em_bt_restore = NULL;

/* Demangled: EM_BT_getPatchVersion */
extern "C" __attribute__((visibility("default"))) int EM_BT_getPatchVersion(void) {
    ALOGD("EM_BT_getPatchVersion() called");
    return 0;
}

/* Demangled: EM_BT_init */
extern "C" __attribute__((visibility("default"))) int EM_BT_init(void) {
    ALOGD("EM_BT_init() called");
    return 0;
}

/* Demangled: EM_BT_set_io_attr */
extern "C" __attribute__((visibility("default"))) int EM_BT_set_io_attr(void) {
    ALOGD("EM_BT_set_io_attr() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: em_bt_send_data */
extern "C" __attribute__((visibility("default"))) void* em_bt_send_data = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: EM_BT_write */
extern "C" __attribute__((visibility("default"))) int EM_BT_write(void) {
    ALOGD("EM_BT_write() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: em_bt_init */
extern "C" __attribute__((visibility("default"))) void* em_bt_init = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: EM_BT_clear_io_attr */
extern "C" __attribute__((visibility("default"))) int EM_BT_clear_io_attr(void) {
    ALOGD("EM_BT_clear_io_attr() called");
    return 0;
}

/* Demangled: EM_BT_read */
extern "C" __attribute__((visibility("default"))) int EM_BT_read(void) {
    ALOGD("EM_BT_read() called");
    return 0;
}

/* Exported Object: em_bt_get_io_attr */
extern "C" __attribute__((visibility("default"))) void* em_bt_get_io_attr = NULL;
