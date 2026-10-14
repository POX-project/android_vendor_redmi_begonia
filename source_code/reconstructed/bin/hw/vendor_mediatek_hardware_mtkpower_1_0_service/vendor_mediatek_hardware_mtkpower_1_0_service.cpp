/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mtkpower@1.0-service
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mtkpower_1_0_service"

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
#include "vendor_mediatek_hardware_mtkpower_1_0_service.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating vendor_mediatek_hardware_mtkpower_1_0_service", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting vendor_mediatek_hardware_mtkpower_1_0_service service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("vendor_mediatek_hardware_mtkpower_1_0_service service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: libpowerhal_wrap_CusLockHint */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_CusLockHint(void) {
    ALOGD("libpowerhal_wrap_CusLockHint() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_Init */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_Init(void) {
    ALOGD("libpowerhal_wrap_Init() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserGetCapability */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserGetCapability(void) {
    ALOGD("libpowerhal_wrap_UserGetCapability() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserScnDisableAll */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserScnDisableAll(void) {
    ALOGD("libpowerhal_wrap_UserScnDisableAll() called");
    return 0;
}

/* Exported Object: guard variable for aidl::android::hardware::power::IPower::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl7android8hardware5power6IPower4hashE = NULL;

/* Exported Object: aidl::android::hardware::power::IPower::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl7android8hardware5power6IPower4hashE = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: libpowerhal_wrap_LockAcq */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_LockAcq(void) {
    ALOGD("libpowerhal_wrap_LockAcq() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_UserScnRestoreAll */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_UserScnRestoreAll(void) {
    ALOGD("libpowerhal_wrap_UserScnRestoreAll() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_LockRel */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_LockRel(void) {
    ALOGD("libpowerhal_wrap_LockRel() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_NotifyAppState */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_NotifyAppState(void) {
    ALOGD("libpowerhal_wrap_NotifyAppState() called");
    return 0;
}

/* Demangled: libpowerhal_wrap_SetSysInfo */
extern "C" __attribute__((visibility("default"))) int libpowerhal_wrap_SetSysInfo(void) {
    ALOGD("libpowerhal_wrap_SetSysInfo() called");
    return 0;
}
