/*
 * Reverse-Engineered Source for: awk
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "awk"

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
#include "awk.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_STDERR "/dev/stderr"
#define DEV_DEV_STDIN "/dev/stdin"
#define DEV_DEV_STDOUT "/dev/stdout"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_STDERR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STDERR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STDERR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_STDIN, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STDIN, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STDIN, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_STDOUT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_STDOUT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_STDOUT, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating awk", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting awk service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("awk service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: error */
extern "C" __attribute__((visibility("default"))) int error(void) {
    ALOGD("error() called");
    return 0;
}
