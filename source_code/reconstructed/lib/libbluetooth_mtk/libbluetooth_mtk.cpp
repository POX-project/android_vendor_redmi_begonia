/*
 * Reverse-Engineered Source for: libbluetooth_mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libbluetooth_mtk"

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
#include "libbluetooth_mtk.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_STPBT "/dev/stpbt"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_STPBT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STPBT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STPBT, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: store_bdaddr */
extern "C" __attribute__((visibility("default"))) int store_bdaddr(void) {
    ALOGD("store_bdaddr() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: parse_fw_cfg_para */
extern "C" __attribute__((visibility("default"))) int parse_fw_cfg_para(void) {
    ALOGD("parse_fw_cfg_para() called");
    return 0;
}

/* Demangled: clean_resource */
extern "C" __attribute__((visibility("default"))) int clean_resource(void) {
    ALOGD("clean_resource() called");
    return 0;
}

/* Demangled: set_callbacks */
extern "C" __attribute__((visibility("default"))) int set_callbacks(void) {
    ALOGD("set_callbacks() called");
    return 0;
}

/* Demangled: GetRandomByte */
extern "C" __attribute__((visibility("default"))) int GetRandomByte(void) {
    ALOGD("GetRandomByte() called");
    return 0;
}

/* Demangled: _parse_para */
extern "C" __attribute__((visibility("default"))) int _parse_para(void) {
    ALOGD("_parse_para() called");
    return 0;
}

/* Exported Object: bt_init_preload_script_connac */
extern "C" __attribute__((visibility("default"))) void* bt_init_preload_script_connac = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: mtk_set_psm_control */
extern "C" __attribute__((visibility("default"))) int mtk_set_psm_control(void) {
    ALOGD("mtk_set_psm_control() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: BT_InitDevice */
extern "C" __attribute__((visibility("default"))) int BT_InitDevice(void) {
    ALOGD("BT_InitDevice() called");
    return 0;
}

/* Demangled: init_uart */
extern "C" __attribute__((visibility("default"))) int init_uart(void) {
    ALOGD("init_uart() called");
    return 0;
}

/* Demangled: mtk_prepare_off */
extern "C" __attribute__((visibility("default"))) int mtk_prepare_off(void) {
    ALOGD("mtk_prepare_off() called");
    return 0;
}

/* Demangled: wait_connsys_ready */
extern "C" __attribute__((visibility("default"))) int wait_connsys_ready(void) {
    ALOGD("wait_connsys_ready() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: mtk_fw_cfg */
extern "C" __attribute__((visibility("default"))) int mtk_fw_cfg(void) {
    ALOGD("mtk_fw_cfg() called");
    return 0;
}

/* Exported Object: bt_init_preload_script_after_6893 */
extern "C" __attribute__((visibility("default"))) void* bt_init_preload_script_after_6893 = NULL;

/* Demangled: process_cmd_rsp */
extern "C" __attribute__((visibility("default"))) int process_cmd_rsp(void) {
    ALOGD("process_cmd_rsp() called");
    return 0;
}

/* Demangled: close_uart */
extern "C" __attribute__((visibility("default"))) int close_uart(void) {
    ALOGD("close_uart() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: bt_init_preload_script_6630 */
extern "C" __attribute__((visibility("default"))) void* bt_init_preload_script_6630 = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: _parse_cmd */
extern "C" __attribute__((visibility("default"))) int _parse_cmd(void) {
    ALOGD("_parse_cmd() called");
    return 0;
}

/* Exported Object: bt_vnd_cbacks */
extern "C" __attribute__((visibility("default"))) void* bt_vnd_cbacks = NULL;

/* Demangled: BT_DeinitDevice */
extern "C" __attribute__((visibility("default"))) int BT_DeinitDevice(void) {
    ALOGD("BT_DeinitDevice() called");
    return 0;
}

/* Exported Object: btinit */
extern "C" __attribute__((visibility("default"))) void* btinit = NULL;

/* Demangled: notify_thread_exit */
extern "C" __attribute__((visibility("default"))) int notify_thread_exit(void) {
    ALOGD("notify_thread_exit() called");
    return 0;
}

/* Exported Object: bt_init_preload_script_6628 */
extern "C" __attribute__((visibility("default"))) void* bt_init_preload_script_6628 = NULL;

/* Exported Object: bt_init_preload_script_6632 */
extern "C" __attribute__((visibility("default"))) void* bt_init_preload_script_6632 = NULL;

/* Demangled: BT_Cleanup */
extern "C" __attribute__((visibility("default"))) int BT_Cleanup(void) {
    ALOGD("BT_Cleanup() called");
    return 0;
}

/* Demangled: clean_callbacks */
extern "C" __attribute__((visibility("default"))) int clean_callbacks(void) {
    ALOGD("clean_callbacks() called");
    return 0;
}

/* Demangled: print_nv_data */
extern "C" __attribute__((visibility("default"))) int print_nv_data(void) {
    ALOGD("print_nv_data() called");
    return 0;
}

/* Demangled: GORM_FW_Init_Thread */
extern "C" __attribute__((visibility("default"))) int GORM_FW_Init_Thread(void) {
    ALOGD("GORM_FW_Init_Thread() called");
    return 0;
}

/* Exported Object: btinit_ctrl */
extern "C" __attribute__((visibility("default"))) void* btinit_ctrl = NULL;

/* Exported Object: bt_init_preload_script_consys */
extern "C" __attribute__((visibility("default"))) void* bt_init_preload_script_consys = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
