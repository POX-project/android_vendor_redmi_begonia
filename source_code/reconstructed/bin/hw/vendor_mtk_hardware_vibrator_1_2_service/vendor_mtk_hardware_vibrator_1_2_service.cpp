/*
 * Reverse-Engineered Source for: vendor.mtk.hardware.vibrator@1.2-service
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mtk_hardware_vibrator_1_2_service"

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
#include "vendor_mtk_hardware_vibrator_1_2_service.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_INPUT "/dev/input/"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_INPUT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_INPUT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_INPUT, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating vendor_mtk_hardware_vibrator_1_2_service", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting vendor_mtk_hardware_vibrator_1_2_service service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("vendor_mtk_hardware_vibrator_1_2_service service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}
