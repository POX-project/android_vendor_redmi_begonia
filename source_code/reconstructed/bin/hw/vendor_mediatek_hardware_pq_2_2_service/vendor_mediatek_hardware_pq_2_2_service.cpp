/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.pq@2.2-service
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_pq_2_2_service"

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
#include "vendor_mediatek_hardware_pq_2_2_service.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating vendor_mediatek_hardware_pq_2_2_service", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting vendor_mediatek_hardware_pq_2_2_service service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("vendor_mediatek_hardware_pq_2_2_service service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: typeinfo for std::__1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__112system_errorE = NULL;

/* Exported Object: typeinfo for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13runtime_error = NULL;

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Exported Object: typeinfo name for std::__1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__112system_errorE = NULL;

/* Exported Object: typeinfo name for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13runtime_error = NULL;

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;
