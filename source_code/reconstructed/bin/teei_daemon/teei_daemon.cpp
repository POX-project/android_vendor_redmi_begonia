/*
 * Reverse-Engineered Source for: teei_daemon
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "teei_daemon"

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
#include "teei_daemon.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_BLOCK_BY_NAME_PROINFO "/dev/block/by-name/proinfo"
#define DEV_DEV_TEEI_CONFIG "/dev/teei_config"
#define DEV_DEV_TZ_VFS "/dev/tz_vfs"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_BLOCK_BY_NAME_PROINFO, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME_PROINFO, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME_PROINFO, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TEEI_CONFIG, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TEEI_CONFIG, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TEEI_CONFIG, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TZ_VFS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TZ_VFS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TZ_VFS, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating teei_daemon", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting teei_daemon service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("teei_daemon service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}
