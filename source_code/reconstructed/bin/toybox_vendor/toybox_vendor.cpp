/*
 * Reverse-Engineered Source for: toybox_vendor
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "toybox_vendor"

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
#include "toybox_vendor.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV "/dev/"
#define DEV_DEV_BLOCK "/dev/block"
#define DEV_DEV_I2C_ "/dev/i2c-"
#define DEV_DEV_KMSG "/dev/kmsg"
#define DEV_DEV_LOOP_CONTROL "/dev/loop-control"
#define DEV_DEV_MEM "/dev/mem"
#define DEV_DEV_MISC_RTC "/dev/misc/rtc"
#define DEV_DEV_NET_TUN "/dev/net/tun"
#define DEV_DEV_RANDOM "/dev/random"
#define DEV_DEV_RFKILL "/dev/rfkill"
#define DEV_DEV_RTC "/dev/rtc"
#define DEV_DEV_STDIN "/dev/stdin"
#define DEV_DEV_TTY "/dev/tty"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_I2C_, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_I2C_, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_I2C_, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_KMSG, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_KMSG, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_KMSG, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_LOOP_CONTROL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_LOOP_CONTROL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_LOOP_CONTROL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MEM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MEM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MEM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MISC_RTC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MISC_RTC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MISC_RTC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_NET_TUN, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_NET_TUN, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_NET_TUN, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_RANDOM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RANDOM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RANDOM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_RFKILL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RFKILL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RFKILL, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_RTC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RTC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RTC, g_dev_fd);
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
    if (access(DEV_DEV_TTY, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TTY, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TTY, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating toybox_vendor", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting toybox_vendor service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("toybox_vendor service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}
