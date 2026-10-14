/*
 * Reverse-Engineered Source for: 020b0000000000000000000000000000.ta
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "020b0000000000000000000000000000_ta"

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
#include "020b0000000000000000000000000000_ta.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating 020b0000000000000000000000000000_ta", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting 020b0000000000000000000000000000_ta service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("020b0000000000000000000000000000_ta service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: msee_drv_module */
extern "C" __attribute__((visibility("default"))) void* msee_drv_module = NULL;

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start__ __asm__("__bss_start__") = NULL;

/* Exported Object: _ta_cfg */
extern "C" __attribute__((visibility("default"))) void* _ta_cfg = NULL;

/* Demangled: _init */
extern "C" __attribute__((visibility("default"))) int _init(void) {
    ALOGD("_init() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_end__ __asm__("__bss_end__") = NULL;

/* Demangled: _start */
extern "C" __attribute__((visibility("default"))) int _start(void) {
    ALOGD("_start() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Demangled: _fini */
extern "C" __attribute__((visibility("default"))) int _fini(void) {
    ALOGD("_fini() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: __L4_KIP_ADDR__ */
extern "C" __attribute__((visibility("default"))) void* obj___L4_KIP_ADDR__ __asm__("__L4_KIP_ADDR__") = NULL;
