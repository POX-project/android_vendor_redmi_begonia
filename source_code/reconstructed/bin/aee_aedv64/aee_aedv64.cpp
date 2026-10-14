/*
 * Reverse-Engineered Source for: aee_aedv64
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "aee_aedv64"

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
#include "aee_aedv64.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_RT_MONITOR "/dev/RT_Monitor"
#define DEV_DEV_AED0 "/dev/aed0"
#define DEV_DEV_AED1 "/dev/aed1"
#define DEV_DEV_AED2 "/dev/aed2"
#define DEV_DEV_EXM0 "/dev/exm0"
#define DEV_DEV_MALI0 "/dev/mali0"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_RT_MONITOR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_RT_MONITOR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_RT_MONITOR, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_AED0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_AED0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_AED0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_AED1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_AED1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_AED1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_AED2, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_AED2, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_AED2, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EXM0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EXM0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EXM0, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MALI0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MALI0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MALI0, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Executable Service Daemon Entrypoint */
static void sig_handler(int sig) {
    ALOGI("Received signal %d, terminating aee_aedv64", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting aee_aedv64 service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("aee_aedv64 service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEm() called");
    return 0;
}

/* Exported Object: vtable for unwindstack::Unwinder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8UnwinderE = NULL;

/* Demangled: klog_write */
extern "C" __attribute__((visibility("default"))) int klog_write(void) {
    ALOGD("klog_write() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Exported Object: error */
extern "C" __attribute__((visibility("default"))) void* error = NULL;

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;
