/*
 * Reverse-Engineered ABI Specification for: libion_mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libion_mtk.so
 */

#ifndef BEGONIA_RE_LIBION_MTK_H
#define BEGONIA_RE_LIBION_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ion_dma_unmap_area */
/* Demangled: ion_dma_unmap_area */
int ion_dma_unmap_area(void);

/* Symbol: ion_munmap */
/* Demangled: ion_munmap */
int ion_munmap(void);

/* Symbol: ion_set_client_name */
/* Demangled: ion_set_client_name */
int ion_set_client_name(void);

/* Symbol: mt_ion_close */
/* Demangled: mt_ion_close */
int mt_ion_close(void);

/* Symbol: mt_ion_open */
/* Demangled: mt_ion_open */
int mt_ion_open(void);

/* Symbol: ion_alloc_camera */
/* Demangled: ion_alloc_camera */
int ion_alloc_camera(void);

/* Symbol: ion_cache_sync_flush_range_va */
/* Demangled: ion_cache_sync_flush_range_va */
int ion_cache_sync_flush_range_va(void);

/* Symbol: ion_dma_map_area */
/* Demangled: ion_dma_map_area */
int ion_dma_map_area(void);

/* Symbol: ion_mmap */
/* Demangled: ion_mmap */
int ion_mmap(void);

/* Symbol: ion_alloc_camera_pool */
/* Demangled: ion_alloc_camera_pool */
int ion_alloc_camera_pool(void);

/* Symbol: ion_alloc_mm */
/* Demangled: ion_alloc_mm */
int ion_alloc_mm(void);

/* Symbol: ion_dma_unmap_area_va */
/* Demangled: ion_dma_unmap_area_va */
int ion_dma_unmap_area_va(void);

/* Symbol: ion_share_close */
/* Demangled: ion_share_close */
int ion_share_close(void);

/* Symbol: ion_alloc_syscontig */
/* Demangled: ion_alloc_syscontig */
int ion_alloc_syscontig(void);

/* Symbol: ion_cache_sync_flush_all */
/* Demangled: ion_cache_sync_flush_all */
int ion_cache_sync_flush_all(void);

/* Symbol: ion_cache_sync_flush_range */
/* Demangled: ion_cache_sync_flush_range */
int ion_cache_sync_flush_range(void);

/* Symbol: ion_custom_ioctl */
/* Demangled: ion_custom_ioctl */
int ion_custom_ioctl(void);

/* Symbol: ion_dma_map_area_va */
/* Demangled: ion_dma_map_area_va */
int ion_dma_map_area_va(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBION_MTK_H */
