/*
 * Reverse-Engineered Source for: starter
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "starter"

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
#include "starter.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_RANDOM "/dev/random"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_RANDOM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RANDOM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RANDOM, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating starter", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting starter service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("starter service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: yyin */
extern "C" __attribute__((visibility("default"))) void* yyin = NULL;

/* Exported Object: daemon_name */
extern "C" __attribute__((visibility("default"))) void* daemon_name = NULL;

/* Exported Object: cmd */
extern "C" __attribute__((visibility("default"))) void* cmd = NULL;

/* Exported Object: __INIT_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __INIT_ARRAY__ = NULL;

/* Exported Object: pid_file */
extern "C" __attribute__((visibility("default"))) void* pid_file = NULL;

/* Exported Object: __PREINIT_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __PREINIT_ARRAY__ = NULL;

/* Exported Object: __FINI_ARRAY__ */
extern "C" __attribute__((visibility("default"))) void* __FINI_ARRAY__ = NULL;

/* Exported Object: yylval */
extern "C" __attribute__((visibility("default"))) void* yylval = NULL;
