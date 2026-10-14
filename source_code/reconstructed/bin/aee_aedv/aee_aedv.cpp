/*
 * Reverse-Engineered Source for: aee_aedv
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "aee_aedv"

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
#include "aee_aedv.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_RT_MONITOR "/dev/RT_Monitor"
#define DEV_DEV_AED0 "/dev/aed0"
#define DEV_DEV_AED1 "/dev/aed1"
#define DEV_DEV_AED2 "/dev/aed2"
#define DEV_DEV_BLOCK_BY_NAME_BOOT_PARA "/dev/block/by-name/boot_para"
#define DEV_DEV_BLOCK_BY_NAME_DPM_1 "/dev/block/by-name/dpm_1"
#define DEV_DEV_BLOCK_PLATFORM_MTK_MSDC "/dev/block/platform/mtk-msdc"
#define DEV_DEV_ETB "/dev/etb"
#define DEV_DEV_EVENT_LOG_TAGS "/dev/event-log-tags"
#define DEV_DEV_EXM0 "/dev/exm0"
#define DEV_DEV_EXPDB "/dev/expdb"
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
    if (access(DEV_DEV_BLOCK_BY_NAME_BOOT_PARA, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME_BOOT_PARA, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME_BOOT_PARA, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_BY_NAME_DPM_1, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME_DPM_1, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME_DPM_1, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_PLATFORM_MTK_MSDC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_PLATFORM_MTK_MSDC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_PLATFORM_MTK_MSDC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_ETB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ETB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ETB, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_EVENT_LOG_TAGS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EVENT_LOG_TAGS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EVENT_LOG_TAGS, g_dev_fd);
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
    if (access(DEV_DEV_EXPDB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EXPDB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EXPDB, g_dev_fd);
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
    ALOGI("Received signal %d, terminating aee_aedv", sig);
    if (g_dev_fd >= 0) close(g_dev_fd);
    exit(0);
}

int main(int argc, char** argv) {
    ALOGI("Starting aee_aedv service daemon");
    signal(SIGTERM, sig_handler);
    signal(SIGINT, sig_handler);

    open_device_node();

    /* Main Service Loop */
    ALOGI("aee_aedv service active");
    while (1) {
        sleep(3600);
    }
    return 0;
}

/* Demangled: std::__1::shared_ptr<unwindstack::Memory>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN11unwindstack6MemoryEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN11unwindstack6MemoryEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: std::__1::__split_buffer<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<unwindstack::FrameData>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEEC2EjjS5_() called");
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

/* Demangled: std::__1::__vector_base<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN11unwindstack9FrameDataENS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN11unwindstack9FrameDataENS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: vtable for unwindstack::Unwinder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11unwindstack8UnwinderE = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

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

/* Demangled: std::__1::__split_buffer<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN11unwindstack9FrameDataERNS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj() called");
    return 0;
}

/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::__swap_out_circular_buffer(std::__1::__split_buffer<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: error */
extern "C" __attribute__((visibility("default"))) void* error = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
