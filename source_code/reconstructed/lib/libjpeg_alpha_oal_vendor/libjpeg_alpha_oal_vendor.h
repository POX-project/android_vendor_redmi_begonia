/*
 * Reverse-Engineered ABI Specification for: libjpeg-alpha-oal_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libjpeg-alpha-oal_vendor.so
 */

#ifndef BEGONIA_RE_LIBJPEG_ALPHA_OAL_VENDOR_H
#define BEGONIA_RE_LIBJPEG_ALPHA_OAL_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: jpeg_oal_pthread_detach */
/* Demangled: jpeg_oal_pthread_detach */
int jpeg_oal_pthread_detach(void);

/* Symbol: jpeg_oal_hybrid_lock */
/* Demangled: jpeg_oal_hybrid_lock */
int jpeg_oal_hybrid_lock(void);

/* Symbol: jpeg_oal_malloc */
/* Demangled: jpeg_oal_malloc */
int jpeg_oal_malloc(void);

/* Symbol: getProcessor */
/* Demangled: getProcessor */
int getProcessor(void);

/* Symbol: jpeg_queryOAL */
/* Demangled: jpeg_queryOAL */
int jpeg_queryOAL(void);

/* Symbol: write_reg_32 */
/* Demangled: write_reg_32 */
int write_reg_32(void);

/* Symbol: dspversion10 */
/* Demangled: dspversion10 */
extern void* dspversion10;

/* Symbol: VCodecQueryCPUTopoInfo */
/* Demangled: VCodecQueryCPUTopoInfo */
int VCodecQueryCPUTopoInfo(void);

/* Symbol: jpeg_oal_ion_flush */
/* Demangled: jpeg_oal_ion_flush */
int jpeg_oal_ion_flush(void);

/* Symbol: path_scaling_available_frequencies */
/* Demangled: path_scaling_available_frequencies */
extern void* path_scaling_available_frequencies;

/* Symbol: jpeg_oal_pthread_cond_destroy */
/* Demangled: jpeg_oal_pthread_cond_destroy */
int jpeg_oal_pthread_cond_destroy(void);

/* Symbol: jpeg_oal_memcpy */
/* Demangled: jpeg_oal_memcpy */
int jpeg_oal_memcpy(void);

/* Symbol: VCodecQueryCPUInfo */
/* Demangled: VCodecQueryCPUInfo */
int VCodecQueryCPUInfo(void);

/* Symbol: path_cpus_per_cluster */
/* Demangled: path_cpus_per_cluster */
extern void* path_cpus_per_cluster;

/* Symbol: jpeg_oal_gettid */
/* Demangled: jpeg_oal_gettid */
int jpeg_oal_gettid(void);

/* Symbol: jpeg_oal_ion_malloc */
/* Demangled: jpeg_oal_ion_malloc */
int jpeg_oal_ion_malloc(void);

/* Symbol: dspversion1 */
/* Demangled: dspversion1 */
extern void* dspversion1;

/* Symbol: jpeg_oal_ion_free */
/* Demangled: jpeg_oal_ion_free */
int jpeg_oal_ion_free(void);

/* Symbol: jpeg_oal_printlog */
/* Demangled: jpeg_oal_printlog */
int jpeg_oal_printlog(void);

/* Symbol: jpeg_oal_pthread_mutex_unlock */
/* Demangled: jpeg_oal_pthread_mutex_unlock */
int jpeg_oal_pthread_mutex_unlock(void);

/* Symbol: dspversion2 */
/* Demangled: dspversion2 */
extern void* dspversion2;

/* Symbol: path_little_cpumask */
/* Demangled: path_little_cpumask */
extern void* path_little_cpumask;

/* Symbol: dspversion3 */
/* Demangled: dspversion3 */
extern void* dspversion3;

/* Symbol: path_nr_clusters */
/* Demangled: path_nr_clusters */
extern void* path_nr_clusters;

/* Symbol: dspversion4 */
/* Demangled: dspversion4 */
extern void* dspversion4;

/* Symbol: dspversion5 */
/* Demangled: dspversion5 */
extern void* dspversion5;

/* Symbol: jpeg_querySWIP */
/* Demangled: jpeg_querySWIP */
int jpeg_querySWIP(void);

/* Symbol: dspversion6 */
/* Demangled: dspversion6 */
extern void* dspversion6;

/* Symbol: jpeg_oal_pthread_cond_signal */
/* Demangled: jpeg_oal_pthread_cond_signal */
int jpeg_oal_pthread_cond_signal(void);

/* Symbol: jpeg_oal_pthread_mutex_destroy */
/* Demangled: jpeg_oal_pthread_mutex_destroy */
int jpeg_oal_pthread_mutex_destroy(void);

/* Symbol: dspversion7 */
/* Demangled: dspversion7 */
extern void* dspversion7;

/* Symbol: dspversion8 */
/* Demangled: dspversion8 */
extern void* dspversion8;

/* Symbol: jpeg_oal_pthread_cond_wait */
/* Demangled: jpeg_oal_pthread_cond_wait */
int jpeg_oal_pthread_cond_wait(void);

/* Symbol: libjpeg_alpha_oal_tag */
/* Demangled: libjpeg_alpha_oal_tag */
int libjpeg_alpha_oal_tag(void);

/* Symbol: dspversion9 */
/* Demangled: dspversion9 */
extern void* dspversion9;

/* Symbol: jpeg_oal_pthread_create */
/* Demangled: jpeg_oal_pthread_create */
int jpeg_oal_pthread_create(void);

/* Symbol: path_cpu_freq_oppidx_table */
/* Demangled: path_cpu_freq_oppidx_table */
extern void* path_cpu_freq_oppidx_table;

/* Symbol: jpeg_oal_pthread_cond_init */
/* Demangled: jpeg_oal_pthread_cond_init */
int jpeg_oal_pthread_cond_init(void);

/* Symbol: jpeg_oal_pthread_mutex_init */
/* Demangled: jpeg_oal_pthread_mutex_init */
int jpeg_oal_pthread_mutex_init(void);

/* Symbol: read_reg_32 */
/* Demangled: read_reg_32 */
int read_reg_32(void);

/* Symbol: compareCapacity */
/* Demangled: compareCapacity */
int compareCapacity(void);

/* Symbol: path_big_cpumask */
/* Demangled: path_big_cpumask */
extern void* path_big_cpumask;

/* Symbol: path_cpu_compatible */
/* Demangled: path_cpu_compatible */
extern void* path_cpu_compatible;

/* Symbol: VCodecQueryOPPTableFromCPUFreqOppidx */
/* Demangled: VCodecQueryOPPTableFromCPUFreqOppidx */
int VCodecQueryOPPTableFromCPUFreqOppidx(void);

/* Symbol: VCodecQueryOPPTableFromPPM */
/* Demangled: VCodecQueryOPPTableFromPPM */
int VCodecQueryOPPTableFromPPM(void);

/* Symbol: VCodecQueryCPUCapacity */
/* Demangled: VCodecQueryCPUCapacity */
int VCodecQueryCPUCapacity(void);

/* Symbol: jpeg_oal_binding_core */
/* Demangled: jpeg_oal_binding_core */
int jpeg_oal_binding_core(void);

/* Symbol: jpeg_oal_ion_invalidate */
/* Demangled: jpeg_oal_ion_invalidate */
int jpeg_oal_ion_invalidate(void);

/* Symbol: jpeg_oal_hybrid_wait */
/* Demangled: jpeg_oal_hybrid_wait */
int jpeg_oal_hybrid_wait(void);

/* Symbol: jpeg_oal_sleep */
/* Demangled: jpeg_oal_sleep */
int jpeg_oal_sleep(void);

/* Symbol: jpeg_queryCapability */
/* Demangled: jpeg_queryCapability */
int jpeg_queryCapability(void);

/* Symbol: jpeg_oal_query_cpu_info */
/* Demangled: jpeg_oal_query_cpu_info */
int jpeg_oal_query_cpu_info(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: jpeg_oal_memset */
/* Demangled: jpeg_oal_memset */
int jpeg_oal_memset(void);

/* Symbol: jpeg_oal_hybrid_get_prog_n_stat */
/* Demangled: jpeg_oal_hybrid_get_prog_n_stat */
int jpeg_oal_hybrid_get_prog_n_stat(void);

/* Symbol: path_ppm_cluster_freq_table */
/* Demangled: path_ppm_cluster_freq_table */
extern void* path_ppm_cluster_freq_table;

/* Symbol: version */
/* Demangled: version */
int version(void);

/* Symbol: jpeg_oal_pthread_mutex_lock */
/* Demangled: jpeg_oal_pthread_mutex_lock */
int jpeg_oal_pthread_mutex_lock(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: jpeg_oal_pthread_join */
/* Demangled: jpeg_oal_pthread_join */
int jpeg_oal_pthread_join(void);

/* Symbol: VCodecQueryOPPTableFromScalingAvailableFrequencies */
/* Demangled: VCodecQueryOPPTableFromScalingAvailableFrequencies */
int VCodecQueryOPPTableFromScalingAvailableFrequencies(void);

/* Symbol: jpeg_oal_pthread_cond_broadcast */
/* Demangled: jpeg_oal_pthread_cond_broadcast */
int jpeg_oal_pthread_cond_broadcast(void);

/* Symbol: path_cpuinfo */
/* Demangled: path_cpuinfo */
extern void* path_cpuinfo;

/* Symbol: path_affected_cpus */
/* Demangled: path_affected_cpus */
extern void* path_affected_cpus;

/* Symbol: jpeg_oal_free */
/* Demangled: jpeg_oal_free */
int jpeg_oal_free(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: path_is_big_little */
/* Demangled: path_is_big_little */
extern void* path_is_big_little;

__END_DECLS

#endif /* BEGONIA_RE_LIBJPEG_ALPHA_OAL_VENDOR_H */
