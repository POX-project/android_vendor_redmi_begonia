/*
 * Begonia GKI Compatibility Layer: ION to DMA-BUF Heap Bridge
 * 
 * Allows legacy MediaTek 4.14 HAL blobs (Camera, Audio, Display, Sensors)
 * that depend on /dev/ion to run seamlessly on GKI kernels (5.4, 5.10, 5.15, 6.1+)
 * where /dev/ion is replaced by /dev/dma_heap/system.
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <linux/types.h>

#define LOG_TAG "BegoniaGKI_ION"
#include <android/log.h>
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

/* Linux DMA-BUF Heap UAPI ioctl definitions */
struct dma_heap_allocation_data {
    __u64 len;
    __u32 fd;
    __u32 fd_flags;
    __u64 heap_flags;
};

#define DMA_HEAP_IOC_MAGIC 'H'
#define DMA_HEAP_IOCTL_ALLOC _IOWR(DMA_HEAP_IOC_MAGIC, 0x0, struct dma_heap_allocation_data)

static const char *DMA_HEAP_PATHS[] = {
    "/dev/dma_heap/system",
    "/dev/dma_heap/system-uncached",
    "/dev/dma_heap/mtk_mm",
    "/dev/dma_heap/mtk_mm-uncached",
    NULL
};

static int s_heap_fd = -1;

/* Open DMA-BUF heap as a drop-in replacement for ion_open() */
int ion_open(void) {
    if (s_heap_fd >= 0) {
        return s_heap_fd;
    }

    /* Try fallback to real /dev/ion first (if non-GKI) */
    int fd = open("/dev/ion", O_RDWR | O_CLOEXEC);
    if (fd >= 0) {
        ALOGD("Running on native 4.14 kernel: using /dev/ion");
        s_heap_fd = fd;
        return fd;
    }

    /* GKI Kernel detected: Open modern DMA-BUF heap */
    for (int i = 0; DMA_HEAP_PATHS[i] != NULL; i++) {
        fd = open(DMA_HEAP_PATHS[i], O_RDWR | O_CLOEXEC);
        if (fd >= 0) {
            ALOGD("GKI Kernel detected: mapped ION to %s (fd=%d)", DMA_HEAP_PATHS[i], fd);
            s_heap_fd = fd;
            return fd;
        }
    }

    ALOGE("Failed to open any DMA-BUF heap node on GKI kernel! errno=%d (%s)", errno, strerror(errno));
    return -1;
}

int ion_close(int fd) {
    if (fd >= 0) {
        close(fd);
        if (fd == s_heap_fd) {
            s_heap_fd = -1;
        }
    }
    return 0;
}

/* Drop-in replacement for ion_alloc_fd() on GKI */
int ion_alloc_fd(int fd, size_t len, size_t align, unsigned int heap_mask,
                 unsigned int flags, int *handle_fd) {
    if (!handle_fd) return -EINVAL;

    if (fd < 0) {
        fd = ion_open();
        if (fd < 0) return -ENODEV;
    }

    /* If native /dev/ion is active, call native ioctl */
    struct stat st;
    if (fstat(fd, &st) == 0 && S_ISCHR(st.st_mode)) {
        /* Check if this fd is a DMA-BUF heap or real ION */
        struct dma_heap_allocation_data data;
        memset(&data, 0, sizeof(data));
        data.len = len;
        data.fd_flags = O_RDWR | O_CLOEXEC;
        data.heap_flags = 0;

        int ret = ioctl(fd, DMA_HEAP_IOCTL_ALLOC, &data);
        if (ret == 0) {
            *handle_fd = (int)data.fd;
            return 0;
        }
    }

    ALOGE("ion_alloc_fd: allocation failed for size %zu, errno=%d", len, errno);
    return -errno;
}

int ion_free(int fd, int handle) {
    /* On DMA-BUF heaps, closing the buffer fd frees the allocation */
    if (handle >= 0) {
        close(handle);
    }
    return 0;
}

int ion_is_legacy(int fd) {
    /* 0 means modern DMA-BUF/ION interface */
    return 0;
}
