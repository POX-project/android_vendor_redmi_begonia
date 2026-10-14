/*
 * Reverse-Engineered Source for: libion_mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libion_mtk"

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
#include "libion_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ion_dma_unmap_area */
extern "C" __attribute__((visibility("default"))) int ion_dma_unmap_area(void) {
    ALOGD("ion_dma_unmap_area() called");
    return 0;
}

/* Demangled: ion_munmap */
extern "C" __attribute__((visibility("default"))) int ion_munmap(void) {
    ALOGD("ion_munmap() called");
    return 0;
}

/* Demangled: ion_set_client_name */
extern "C" __attribute__((visibility("default"))) int ion_set_client_name(void) {
    ALOGD("ion_set_client_name() called");
    return 0;
}

/* Demangled: mt_ion_close */
extern "C" __attribute__((visibility("default"))) int mt_ion_close(void) {
    ALOGD("mt_ion_close() called");
    return 0;
}

/* Demangled: mt_ion_open */
extern "C" __attribute__((visibility("default"))) int mt_ion_open(void) {
    ALOGD("mt_ion_open() called");
    return 0;
}

/* Demangled: ion_alloc_camera */
extern "C" __attribute__((visibility("default"))) int ion_alloc_camera(void) {
    ALOGD("ion_alloc_camera() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_range_va */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_range_va(void) {
    ALOGD("ion_cache_sync_flush_range_va() called");
    return 0;
}

/* Demangled: ion_dma_map_area */
extern "C" __attribute__((visibility("default"))) int ion_dma_map_area(void) {
    ALOGD("ion_dma_map_area() called");
    return 0;
}

/* Demangled: ion_mmap */
extern "C" __attribute__((visibility("default"))) int ion_mmap(void) {
    ALOGD("ion_mmap() called");
    return 0;
}

/* Demangled: ion_alloc_camera_pool */
extern "C" __attribute__((visibility("default"))) int ion_alloc_camera_pool(void) {
    ALOGD("ion_alloc_camera_pool() called");
    return 0;
}

/* Demangled: ion_alloc_mm */
extern "C" __attribute__((visibility("default"))) int ion_alloc_mm(void) {
    ALOGD("ion_alloc_mm() called");
    return 0;
}

/* Demangled: ion_dma_unmap_area_va */
extern "C" __attribute__((visibility("default"))) int ion_dma_unmap_area_va(void) {
    ALOGD("ion_dma_unmap_area_va() called");
    return 0;
}

/* Demangled: ion_share_close */
extern "C" __attribute__((visibility("default"))) int ion_share_close(void) {
    ALOGD("ion_share_close() called");
    return 0;
}

/* Demangled: ion_alloc_syscontig */
extern "C" __attribute__((visibility("default"))) int ion_alloc_syscontig(void) {
    ALOGD("ion_alloc_syscontig() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_all */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_all(void) {
    ALOGD("ion_cache_sync_flush_all() called");
    return 0;
}

/* Demangled: ion_cache_sync_flush_range */
extern "C" __attribute__((visibility("default"))) int ion_cache_sync_flush_range(void) {
    ALOGD("ion_cache_sync_flush_range() called");
    return 0;
}

/* Demangled: ion_custom_ioctl */
extern "C" __attribute__((visibility("default"))) int ion_custom_ioctl(void) {
    ALOGD("ion_custom_ioctl() called");
    return 0;
}

/* Demangled: ion_dma_map_area_va */
extern "C" __attribute__((visibility("default"))) int ion_dma_map_area_va(void) {
    ALOGD("ion_dma_map_area_va() called");
    return 0;
}
