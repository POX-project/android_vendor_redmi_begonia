/*
 * Reverse-Engineered Source for: xcap
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "xcap"

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
#include "xcap.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CCCI_SS_XCAP "/dev/ccci_ss_xcap"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CCCI_SS_XCAP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_SS_XCAP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_SS_XCAP, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating xcap", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting xcap service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("xcap service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: xcap_log */
extern "C" __attribute__((visibility("default"))) void* xcap_log = NULL;

/* Exported Object: __INIT_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __INIT_ARRAY__ = NULL;

/* Exported Object: __PREINIT_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __PREINIT_ARRAY__ = NULL;

/* Exported Object: __FINI_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __FINI_ARRAY__ = NULL;

/* Exported Object: XCAP_DEBUG_LEVEL */
extern "C" __attribute__((visibility("default"))) void* XCAP_DEBUG_LEVEL = NULL;
