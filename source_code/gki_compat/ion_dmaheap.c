/*
 * SPDX-FileCopyrightText: The LineageOS Project
 * SPDX-FileCopyrightText: Begonia GKI Port
 * SPDX-License-Identifier: Apache-2.0
 *
 * Drop-in replacement for the legacy libion.so, backed by modern Linux dma-buf heaps.
 * Tailored for MediaTek MT6785 (Begonia) legacy blobs running on GKI kernels (5.4/5.10/5.15/6.1+).
 */

#define LOG_TAG "ion_dmaheap"

#include <errno.h>
#include <fcntl.h>
#include <linux/dma-buf.h>
#include <linux/dma-heap.h>
#include <stddef.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <unistd.h>

#include <android/log.h>
#define ALOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define ALOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define ALOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

typedef int ion_user_handle_t;

#define DMA_HEAP_DIR "/dev/dma_heap"

/* Bit 31 of the flags; also the reserved bit of the heap ID mask. */
#define ION_FLAG_SECURE (1U << 31)

#define MAX_HEAP_NAMES 4

struct heap_map {
    unsigned int id;
    const char* names[MAX_HEAP_NAMES];
};

/*
 * MediaTek MT6785 ION Heap IDs mapped to modern GKI DMA-BUF Heaps.
 * 
 * MTK Heap 0/1: System Heap -> "system", "system-uncached"
 * MTK Heap 2/3: Multimedia (MM/Camera/VPU) -> "mtk_mm", "mtk_mm-uncached", "system"
 * MTK Heap 4  : Contiguous / CMA -> "default_cma_region", "system"
 */
static const struct heap_map heap_maps[] = {
    { 0, { "system", "system-uncached", NULL } },
    { 1, { "system", "system-uncached", NULL } },
    { 2, { "mtk_mm", "mtk_mm-uncached", "system", NULL } },
    { 3, { "mtk_mm", "mtk_mm-uncached", "system", NULL } },
    { 4, { "default_cma_region", "system", NULL } },
};

int ion_open() {
    int fd = open(DMA_HEAP_DIR, O_RDONLY | O_DIRECTORY | O_CLOEXEC);
    if (fd < 0) {
        /* Fallback: If running on legacy non-GKI 4.14 kernel where /dev/ion still exists */
        fd = open("/dev/ion", O_RDWR | O_CLOEXEC);
        if (fd < 0) {
            ALOGE("open %s and /dev/ion failed: %s", DMA_HEAP_DIR, strerror(errno));
        }
    }
    return fd;
}

int ion_close(int fd) {
    if (fd < 0) return -EINVAL;
    int ret = close(fd);
    if (ret < 0) return -errno;
    return ret;
}

static int alloc_from_heap(int fd, const char* name, size_t len, int* handle_fd) {
    struct dma_heap_allocation_data data = {
        .len = len,
        .fd_flags = O_RDWR | O_CLOEXEC,
    };
    int heap_fd, ret;

    heap_fd = openat(fd, name, O_RDONLY | O_CLOEXEC);
    if (heap_fd < 0) return -errno;

    ret = ioctl(heap_fd, DMA_HEAP_IOCTL_ALLOC, &data);
    ret = ret < 0 ? -errno : 0;
    close(heap_fd);
    if (ret < 0) return ret;

    *handle_fd = (int)data.fd;
    return 0;
}

int ion_alloc_fd(int fd, size_t len, size_t align, unsigned int heap_mask, unsigned int flags,
                 int* handle_fd) {
    int ret = -ENODEV;
    size_t i, j;

    (void)align; /* dma-buf heaps align allocations by themselves */

    if (handle_fd == NULL) return -EINVAL;

    if (flags & ION_FLAG_SECURE) {
        ALOGW("secure allocations requested on GKI: attempting system heap fallback");
    }

    /* Try mapped MediaTek heaps */
    for (i = 0; i < sizeof(heap_maps) / sizeof(heap_maps[0]); i++) {
        if (heap_mask && !(heap_mask & (1U << heap_maps[i].id))) continue;

        for (j = 0; j < MAX_HEAP_NAMES && heap_maps[i].names[j]; j++) {
            ret = alloc_from_heap(fd, heap_maps[i].names[j], len, handle_fd);
            if (ret == 0) return 0;
        }
    }

    /* Ultimate fallback: Try system heap unconditionally */
    ret = alloc_from_heap(fd, "system", len, handle_fd);
    if (ret == 0) return 0;

    ALOGE("no dma-buf heap could satisfy heap_mask 0x%x, len %zu: %s", heap_mask, len,
          strerror(-ret));
    return ret;
}

int ion_alloc(int fd, size_t len, size_t align, unsigned int heap_mask, unsigned int flags,
              ion_user_handle_t* handle) {
    if (handle == NULL) return -EINVAL;
    return ion_alloc_fd(fd, len, align, heap_mask, flags, handle);
}

int ion_free(int fd, ion_user_handle_t handle) {
    (void)fd;
    if (handle <= 0) return -EINVAL;
    return ion_close(handle);
}

int ion_share(int fd, ion_user_handle_t handle, int* share_fd) {
    (void)fd;
    if (share_fd == NULL) return -EINVAL;

    *share_fd = fcntl(handle, F_DUPFD_CLOEXEC, 0);
    if (*share_fd < 0) return -errno;
    return 0;
}

int ion_import(int fd, int share_fd, ion_user_handle_t* handle) {
    return ion_share(fd, share_fd, handle);
}

int ion_map(int fd, ion_user_handle_t handle, size_t length, int prot, int flags, off_t offset,
            unsigned char** ptr, int* map_fd) {
    unsigned char* tmp_ptr;
    int ret;

    if (map_fd == NULL || ptr == NULL) return -EINVAL;

    ret = ion_share(fd, handle, map_fd);
    if (ret < 0) return ret;

    tmp_ptr = (unsigned char*)mmap(NULL, length, prot, flags, *map_fd, offset);
    if (tmp_ptr == MAP_FAILED) {
        ret = -errno;
        ALOGE("mmap failed: %s", strerror(-ret));
        close(*map_fd);
        *map_fd = -1;
        return ret;
    }

    *ptr = tmp_ptr;
    return 0;
}

int ion_sync_fd(int fd, int handle_fd) {
    struct dma_buf_sync sync = {
        .flags = DMA_BUF_SYNC_START | DMA_BUF_SYNC_RW,
    };
    (void)fd;

    if (ioctl(handle_fd, DMA_BUF_IOCTL_SYNC, &sync) < 0) return -errno;
    return 0;
}

int ion_is_legacy(int fd) {
    (void)fd;
    return 0;
}
