/*
 * Reverse-Engineered Source for: power_native_test_v_1_1
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "power_native_test_v_1_1"

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
#include "power_native_test_v_1_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating power_native_test_v_1_1", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting power_native_test_v_1_1 service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("power_native_test_v_1_1 service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Exported Object: guard variable for aidl::android::hardware::power::IPower::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl7android8hardware5power6IPower4hashE = NULL;

/* Exported Object: aidl::android::hardware::power::IPower::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl7android8hardware5power6IPower4hashE = NULL;

/* Demangled: std::__1::shared_ptr<aidl::android::hardware::power::IPower>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN4aidl7android8hardware5power6IPowerEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN4aidl7android8hardware5power6IPowerEED2Ev() called");
    return 0;
}
