/*
 * Reverse-Engineered Source for: bt_drv.ko
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "bt_drv_ko"

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
#include "bt_drv_ko.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: BT_poll */
extern "C" __attribute__((visibility("default"))) int BT_poll(void) {
    ALOGD("BT_poll() called");
    return 0;
}

/* Exported Object: gBtDbgLevel */
extern "C" __attribute__((visibility("default"))) void* gBtDbgLevel = NULL;

/* Demangled: send_hci_frame */
extern "C" __attribute__((visibility("default"))) int send_hci_frame(void) {
    ALOGD("send_hci_frame() called");
    return 0;
}

/* Demangled: BT_write_iter */
extern "C" __attribute__((visibility("default"))) int BT_write_iter(void) {
    ALOGD("BT_write_iter() called");
    return 0;
}

/* Demangled: BT_write */
extern "C" __attribute__((visibility("default"))) int BT_write(void) {
    ALOGD("BT_write() called");
    return 0;
}

/* Demangled: BT_read */
extern "C" __attribute__((visibility("default"))) int BT_read(void) {
    ALOGD("BT_read() called");
    return 0;
}

/* Exported Object: g_bt_dbg_st */
extern "C" __attribute__((visibility("default"))) void* g_bt_dbg_st = NULL;

/* Demangled: BT_unlocked_ioctl */
extern "C" __attribute__((visibility("default"))) int BT_unlocked_ioctl(void) {
    ALOGD("BT_unlocked_ioctl() called");
    return 0;
}

/* Demangled: BT_compat_ioctl */
extern "C" __attribute__((visibility("default"))) int BT_compat_ioctl(void) {
    ALOGD("BT_compat_ioctl() called");
    return 0;
}

/* Demangled: bt_state_notify */
extern "C" __attribute__((visibility("default"))) int bt_state_notify(void) {
    ALOGD("bt_state_notify() called");
    return 0;
}

/* Demangled: bt_dev_dbg_set_state */
extern "C" __attribute__((visibility("default"))) int bt_dev_dbg_set_state(void) {
    ALOGD("bt_dev_dbg_set_state() called");
    return 0;
}

/* Demangled: init_module */
extern "C" __attribute__((visibility("default"))) int init_module(void) {
    ALOGD("init_module() called");
    return 0;
}

/* Exported Object: BT_fops */
extern "C" __attribute__((visibility("default"))) void* BT_fops = NULL;

/* Exported Object: __this_module */
extern "C" __attribute__((visibility("default"))) void* __this_module = NULL;

/* Demangled: fw_log_bt_init */
extern "C" __attribute__((visibility("default"))) int fw_log_bt_init(void) {
    ALOGD("fw_log_bt_init() called");
    return 0;
}

/* Demangled: bt_dev_dbg_init */
extern "C" __attribute__((visibility("default"))) int bt_dev_dbg_init(void) {
    ALOGD("bt_dev_dbg_init() called");
    return 0;
}

/* Demangled: cleanup_module */
extern "C" __attribute__((visibility("default"))) int cleanup_module(void) {
    ALOGD("cleanup_module() called");
    return 0;
}

/* Demangled: bt_dev_dbg_deinit */
extern "C" __attribute__((visibility("default"))) int bt_dev_dbg_deinit(void) {
    ALOGD("bt_dev_dbg_deinit() called");
    return 0;
}

/* Demangled: fw_log_bt_exit */
extern "C" __attribute__((visibility("default"))) int fw_log_bt_exit(void) {
    ALOGD("fw_log_bt_exit() called");
    return 0;
}

/* Demangled: _bt_dbg_reset_dump_buf */
extern "C" __attribute__((visibility("default"))) int _bt_dbg_reset_dump_buf(void) {
    ALOGD("_bt_dbg_reset_dump_buf() called");
    return 0;
}

/* Demangled: bt_dbg_read */
extern "C" __attribute__((visibility("default"))) int bt_dbg_read(void) {
    ALOGD("bt_dbg_read() called");
    return 0;
}

/* Demangled: _osal_strtol */
extern "C" __attribute__((visibility("default"))) int _osal_strtol(void) {
    ALOGD("_osal_strtol() called");
    return 0;
}

/* Demangled: bt_dbg_user_trx_cb */
extern "C" __attribute__((visibility("default"))) int bt_dbg_user_trx_cb(void) {
    ALOGD("bt_dbg_user_trx_cb() called");
    return 0;
}

/* Demangled: bt_dbg_user_trx_proc */
extern "C" __attribute__((visibility("default"))) int bt_dbg_user_trx_proc(void) {
    ALOGD("bt_dbg_user_trx_proc() called");
    return 0;
}

/* Demangled: bt_dbg_write */
extern "C" __attribute__((visibility("default"))) int bt_dbg_write(void) {
    ALOGD("bt_dbg_write() called");
    return 0;
}

/* Demangled: fw_log_bt_unlocked_ioctl */
extern "C" __attribute__((visibility("default"))) int fw_log_bt_unlocked_ioctl(void) {
    ALOGD("fw_log_bt_unlocked_ioctl() called");
    return 0;
}

/* Demangled: fw_log_bt_compat_ioctl */
extern "C" __attribute__((visibility("default"))) int fw_log_bt_compat_ioctl(void) {
    ALOGD("fw_log_bt_compat_ioctl() called");
    return 0;
}

/* Exported Object: BT_log_wq */
extern "C" __attribute__((visibility("default"))) void* BT_log_wq = NULL;

/* Exported Object: log_fops */
extern "C" __attribute__((visibility("default"))) void* log_fops = NULL;
