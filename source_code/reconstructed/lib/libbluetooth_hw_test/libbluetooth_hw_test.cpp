/*
 * Reverse-Engineered Source for: libbluetooth_hw_test.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libbluetooth_hw_test"

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
#include "libbluetooth_hw_test.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: HW_TEST_BT_LE_Enhanced_Rx_start */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_LE_Enhanced_Rx_start(void) {
    ALOGD("HW_TEST_BT_LE_Enhanced_Rx_start() called");
    return 0;
}

/* Demangled: HW_TEST_BT_LE_Enhanced_Tx_start */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_LE_Enhanced_Tx_start(void) {
    ALOGD("HW_TEST_BT_LE_Enhanced_Tx_start() called");
    return 0;
}

/* Demangled: HW_TEST_BT_LE_Rx_start */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_LE_Rx_start(void) {
    ALOGD("HW_TEST_BT_LE_Rx_start() called");
    return 0;
}

/* Demangled: HW_TEST_BT_LE_Tx_start */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_LE_Tx_start(void) {
    ALOGD("HW_TEST_BT_LE_Tx_start() called");
    return 0;
}

/* Demangled: HW_TEST_BT_PDN_UT */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_PDN_UT(void) {
    ALOGD("HW_TEST_BT_PDN_UT() called");
    return 0;
}

/* Demangled: HW_TEST_BT_TestMode_exit */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_TestMode_exit(void) {
    ALOGD("HW_TEST_BT_TestMode_exit() called");
    return 0;
}

/* Demangled: HW_TEST_BT_TxOnlyTest_start */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_TxOnlyTest_start(void) {
    ALOGD("HW_TEST_BT_TxOnlyTest_start() called");
    return 0;
}

/* Demangled: HW_TEST_BT_reset */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_reset(void) {
    ALOGD("HW_TEST_BT_reset() called");
    return 0;
}

/* Demangled: HW_TEST_BT_NonSignalRx_start */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_NonSignalRx_start(void) {
    ALOGD("HW_TEST_BT_NonSignalRx_start() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: HW_TEST_BT_LE_Tx_end */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_LE_Tx_end(void) {
    ALOGD("HW_TEST_BT_LE_Tx_end() called");
    return 0;
}

/* Demangled: HW_TEST_BT_TestMode_enter */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_TestMode_enter(void) {
    ALOGD("HW_TEST_BT_TestMode_enter() called");
    return 0;
}

/* Demangled: HW_TEST_BT_TxOnlyTest_end */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_TxOnlyTest_end(void) {
    ALOGD("HW_TEST_BT_TxOnlyTest_end() called");
    return 0;
}

/* Exported Object: bt_init */
extern "C" __attribute__((visibility("default"))) void* bt_init = NULL;

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

/* Demangled: HW_TEST_BT_LE_Rx_end */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_LE_Rx_end(void) {
    ALOGD("HW_TEST_BT_LE_Rx_end() called");
    return 0;
}

/* Exported Object: bt_restore */
extern "C" __attribute__((visibility("default"))) void* bt_restore = NULL;

/* Demangled: HW_TEST_BT_PDN_SET_CLOCK */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_PDN_SET_CLOCK(void) {
    ALOGD("HW_TEST_BT_PDN_SET_CLOCK() called");
    return 0;
}

/* Demangled: HW_TEST_BT_deinit */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_deinit(void) {
    ALOGD("HW_TEST_BT_deinit() called");
    return 0;
}

/* Demangled: HW_TEST_BT_NonSignalRx_end */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_NonSignalRx_end(void) {
    ALOGD("HW_TEST_BT_NonSignalRx_end() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: bt_receive_data */
extern "C" __attribute__((visibility("default"))) void* bt_receive_data = NULL;

/* Exported Object: bt_send_data */
extern "C" __attribute__((visibility("default"))) void* bt_send_data = NULL;

/* Demangled: HW_TEST_BT_Inquiry */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_Inquiry(void) {
    ALOGD("HW_TEST_BT_Inquiry() called");
    return 0;
}

/* Demangled: HW_TEST_BT_PDN_LOOP */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_PDN_LOOP(void) {
    ALOGD("HW_TEST_BT_PDN_LOOP() called");
    return 0;
}

/* Demangled: HW_TEST_BT_init */
extern "C" __attribute__((visibility("default"))) int HW_TEST_BT_init(void) {
    ALOGD("HW_TEST_BT_init() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
