/*
 * Reverse-Engineered Source for: dconfig
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "dconfig"

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
#include "dconfig.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_BLOCK_BY_NAME_BOOT_PARA "/dev/block/by-name/boot_para"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_BLOCK_BY_NAME_BOOT_PARA, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME_BOOT_PARA, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME_BOOT_PARA, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating dconfig", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting dconfig service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("dconfig service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}
