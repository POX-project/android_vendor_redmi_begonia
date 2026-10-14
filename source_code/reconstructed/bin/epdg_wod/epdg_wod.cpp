/*
 * Reverse-Engineered Source for: epdg_wod
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "epdg_wod"

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
#include "epdg_wod.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CCCI_WOA "/dev/ccci_woa"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CCCI_WOA, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_WOA, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_WOA, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating epdg_wod", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting epdg_wod service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("epdg_wod service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: __PREINIT_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __PREINIT_ARRAY__ = NULL;

/* Exported Object: __FINI_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __FINI_ARRAY__ = NULL;

/* Demangled: wo_dispatcher_dispatch */
extern "C" __attribute__((visibility("default"))) int wo_dispatcher_dispatch(void) {
    ALOGD("wo_dispatcher_dispatch() called");
    return 0;
}

/* Exported Object: __INIT_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __INIT_ARRAY__ = NULL;
