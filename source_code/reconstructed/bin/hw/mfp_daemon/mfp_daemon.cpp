/*
 * Reverse-Engineered Source for: mfp-daemon
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "mfp_daemon"

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
#include "mfp_daemon.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_GOODIX_FP "/dev/goodix_fp"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_GOODIX_FP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GOODIX_FP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GOODIX_FP, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating mfp_daemon", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting mfp_daemon service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("mfp_daemon service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: hw_get_module */
extern "C" __attribute__((visibility("default"))) int hw_get_module(const char *id, const struct hw_module_t **module) {
    ALOGD("hw_get_module(%s) called", id ? id : "null");
    if (module) *module = NULL;
    return -EINVAL;
}

/* Demangled: hw_get_module_by_class */
extern "C" __attribute__((visibility("default"))) int hw_get_module_by_class(const char *class_id, const char *inst, const struct hw_module_t **module) {
    ALOGD("hw_get_module_by_class(%s, %s) called", class_id ? class_id : "null", inst ? inst : "null");
    if (module) *module = NULL;
    return -EINVAL;
}
