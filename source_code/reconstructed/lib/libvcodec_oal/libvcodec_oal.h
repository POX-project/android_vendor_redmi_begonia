/*
 * Reverse-Engineered ABI Specification for: libvcodec_oal.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvcodec_oal.so
 */

#ifndef BEGONIA_RE_LIBVCODEC_OAL_H
#define BEGONIA_RE_LIBVCODEC_OAL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: VCodec_sem_wait */
/* Demangled: VCodec_sem_wait */
int VCodec_sem_wait(void);

/* Symbol: VCodecPthread_cond_signal */
/* Demangled: VCodecPthread_cond_signal */
int VCodecPthread_cond_signal(void);

/* Symbol: getProcessor */
/* Demangled: getProcessor */
int getProcessor(void);

/* Symbol: dspversion10 */
/* Demangled: dspversion10 */
extern void* dspversion10;

/* Symbol: VCodec_sem_init */
/* Demangled: VCodec_sem_init */
int VCodec_sem_init(void);

/* Symbol: VCodecQueryCPUTopoInfo */
/* Demangled: VCodecQueryCPUTopoInfo */
int VCodecQueryCPUTopoInfo(void);

/* Symbol: VCodecFlushCachedBuffer */
/* Demangled: VCodecFlushCachedBuffer */
int VCodecFlushCachedBuffer(void);

/* Symbol: VCodecPthread_mutex_unlock */
/* Demangled: VCodecPthread_mutex_unlock */
int VCodecPthread_mutex_unlock(void);

/* Symbol: VCodecCoreLoading */
/* Demangled: VCodecCoreLoading */
int VCodecCoreLoading(void);

/* Symbol: path_scaling_available_frequencies */
/* Demangled: path_scaling_available_frequencies */
extern void* path_scaling_available_frequencies;

/* Symbol: VCodecInitHWLock */
/* Demangled: VCodecInitHWLock */
int VCodecInitHWLock(void);

/* Symbol: VCodecGetAffinity */
/* Demangled: VCodecGetAffinity */
int VCodecGetAffinity(void);

/* Symbol: VCodecQueryCPUInfo */
/* Demangled: VCodecQueryCPUInfo */
int VCodecQueryCPUInfo(void);

/* Symbol: path_cpus_per_cluster */
/* Demangled: path_cpus_per_cluster */
extern void* path_cpus_per_cluster;

/* Symbol: VCodecPthread_spin_trylock */
/* Demangled: VCodecPthread_spin_trylock */
int VCodecPthread_spin_trylock(void);

/* Symbol: VCodecInvalidateCachedBufferAll */
/* Demangled: VCodecInvalidateCachedBufferAll */
int VCodecInvalidateCachedBufferAll(void);

/* Symbol: VCodecDeBindingCore */
/* Demangled: VCodecDeBindingCore */
int VCodecDeBindingCore(void);

/* Symbol: VCodecFlushCachedBufferAll */
/* Demangled: VCodecFlushCachedBufferAll */
int VCodecFlushCachedBufferAll(void);

/* Symbol: VCodecPthread_condattr_init */
/* Demangled: VCodecPthread_condattr_init */
int VCodecPthread_condattr_init(void);

/* Symbol: rVCODEC_OAL_Function */
/* Demangled: rVCODEC_OAL_Function */
extern void* rVCODEC_OAL_Function;

/* Symbol: dspversion1 */
/* Demangled: dspversion1 */
extern void* dspversion1;

/* Symbol: VCodecPthread_join */
/* Demangled: VCodecPthread_join */
int VCodecPthread_join(void);

/* Symbol: dspversion2 */
/* Demangled: dspversion2 */
extern void* dspversion2;

/* Symbol: VCodecPthread_mutex_destroy */
/* Demangled: VCodecPthread_mutex_destroy */
int VCodecPthread_mutex_destroy(void);

/* Symbol: VCodecConfigMCIPort */
/* Demangled: VCodecConfigMCIPort */
int VCodecConfigMCIPort(void);

/* Symbol: dspversion3 */
/* Demangled: dspversion3 */
extern void* dspversion3;

/* Symbol: path_little_cpumask */
/* Demangled: path_little_cpumask */
extern void* path_little_cpumask;

/* Symbol: VCodecPthread_mutex_init */
/* Demangled: VCodecPthread_mutex_init */
int VCodecPthread_mutex_init(void);

/* Symbol: dspversion4 */
/* Demangled: dspversion4 */
extern void* dspversion4;

/* Symbol: path_nr_clusters */
/* Demangled: path_nr_clusters */
extern void* path_nr_clusters;

/* Symbol: VCodecCoreNumber */
/* Demangled: VCodecCoreNumber */
int VCodecCoreNumber(void);

/* Symbol: VCodecSleep */
/* Demangled: VCodecSleep */
int VCodecSleep(void);

/* Symbol: dspversion5 */
/* Demangled: dspversion5 */
extern void* dspversion5;

/* Symbol: VCodecLockHW */
/* Demangled: VCodecLockHW */
int VCodecLockHW(void);

/* Symbol: dspversion6 */
/* Demangled: dspversion6 */
extern void* dspversion6;

/* Symbol: VCodecQueryMemType */
/* Demangled: VCodecQueryMemType */
int VCodecQueryMemType(void);

/* Symbol: VCodecPthread_condattr_destroy */
/* Demangled: VCodecPthread_condattr_destroy */
int VCodecPthread_condattr_destroy(void);

/* Symbol: dspversion7 */
/* Demangled: dspversion7 */
extern void* dspversion7;

/* Symbol: VCodecFlushInvalidateCacheBufferAll */
/* Demangled: VCodecFlushInvalidateCacheBufferAll */
int VCodecFlushInvalidateCacheBufferAll(void);

/* Symbol: VCodecPthread_cond_destroy */
/* Demangled: VCodecPthread_cond_destroy */
int VCodecPthread_cond_destroy(void);

/* Symbol: dspversion8 */
/* Demangled: dspversion8 */
extern void* dspversion8;

/* Symbol: VCodecQueryPhysicalAddr */
/* Demangled: VCodecQueryPhysicalAddr */
int VCodecQueryPhysicalAddr(void);

/* Symbol: dspversion9 */
/* Demangled: dspversion9 */
extern void* dspversion9;

/* Symbol: VCodecWaitISR */
/* Demangled: VCodecWaitISR */
int VCodecWaitISR(void);

/* Symbol: VCodecUnLockHW */
/* Demangled: VCodecUnLockHW */
int VCodecUnLockHW(void);

/* Symbol: VCodecPthread_cond_wait */
/* Demangled: VCodecPthread_cond_wait */
int VCodecPthread_cond_wait(void);

/* Symbol: path_cpu_freq_oppidx_table */
/* Demangled: path_cpu_freq_oppidx_table */
extern void* path_cpu_freq_oppidx_table;

/* Symbol: VCodecPthread_self */
/* Demangled: VCodecPthread_self */
int VCodecPthread_self(void);

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

/* Symbol: VCodecMemCopy */
/* Demangled: VCodecMemCopy */
int VCodecMemCopy(void);

/* Symbol: VCodecPthread_attr_setdetachstate */
/* Demangled: VCodecPthread_attr_setdetachstate */
int VCodecPthread_attr_setdetachstate(void);

/* Symbol: VCodecQueryCPUCapacity */
/* Demangled: VCodecQueryCPUCapacity */
int VCodecQueryCPUCapacity(void);

/* Symbol: VCodecPthread_cond_init */
/* Demangled: VCodecPthread_cond_init */
int VCodecPthread_cond_init(void);

/* Symbol: VCodecMMAP */
/* Demangled: VCodecMMAP */
int VCodecMMAP(void);

/* Symbol: VCodecPthread_attr_destroy */
/* Demangled: VCodecPthread_attr_destroy */
int VCodecPthread_attr_destroy(void);

/* Symbol: VCodecPthread_mutex_trylock */
/* Demangled: VCodecPthread_mutex_trylock */
int VCodecPthread_mutex_trylock(void);

/* Symbol: VCodecPthread_kill */
/* Demangled: VCodecPthread_kill */
int VCodecPthread_kill(void);

/* Symbol: VCodecPthread_attr_getdetachstate */
/* Demangled: VCodecPthread_attr_getdetachstate */
int VCodecPthread_attr_getdetachstate(void);

/* Symbol: VCodecPthread_mutex_lock */
/* Demangled: VCodecPthread_mutex_lock */
int VCodecPthread_mutex_lock(void);

/* Symbol: VCodecSwitchMemType */
/* Demangled: VCodecSwitchMemType */
int VCodecSwitchMemType(void);

/* Symbol: VCodecPthread_spin_init */
/* Demangled: VCodecPthread_spin_init */
int VCodecPthread_spin_init(void);

/* Symbol: VCodecDeInitHWLock */
/* Demangled: VCodecDeInitHWLock */
int VCodecDeInitHWLock(void);

/* Symbol: VCodec_sem_destroy */
/* Demangled: VCodec_sem_destroy */
int VCodec_sem_destroy(void);

/* Symbol: swip_init */
/* Demangled: swip_init */
int swip_init(void);

/* Symbol: VCodecBindingCore */
/* Demangled: VCodecBindingCore */
int VCodecBindingCore(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: path_ppm_cluster_freq_table */
/* Demangled: path_ppm_cluster_freq_table */
extern void* path_ppm_cluster_freq_table;

/* Symbol: VCodecPthread_mutexattr_destroy */
/* Demangled: VCodecPthread_mutexattr_destroy */
int VCodecPthread_mutexattr_destroy(void);

/* Symbol: VCodecUnMMAP */
/* Demangled: VCodecUnMMAP */
int VCodecUnMMAP(void);

/* Symbol: VCodecPthread_mutexattr_init */
/* Demangled: VCodecPthread_mutexattr_init */
int VCodecPthread_mutexattr_init(void);

/* Symbol: VCodecPthread_cond_broadcast */
/* Demangled: VCodecPthread_cond_broadcast */
int VCodecPthread_cond_broadcast(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: VCodecPthread_exit */
/* Demangled: VCodecPthread_exit */
int VCodecPthread_exit(void);

/* Symbol: VCodecPthread_attr_init */
/* Demangled: VCodecPthread_attr_init */
int VCodecPthread_attr_init(void);

/* Symbol: VCodecPthread_once */
/* Demangled: VCodecPthread_once */
int VCodecPthread_once(void);

/* Symbol: VCodec_sem_post */
/* Demangled: VCodec_sem_post */
int VCodec_sem_post(void);

/* Symbol: VCodecQueryOPPTableFromScalingAvailableFrequencies */
/* Demangled: VCodecQueryOPPTableFromScalingAvailableFrequencies */
int VCodecQueryOPPTableFromScalingAvailableFrequencies(void);

/* Symbol: VCodecInvalidateCachedBuffer */
/* Demangled: VCodecInvalidateCachedBuffer */
int VCodecInvalidateCachedBuffer(void);

/* Symbol: path_cpuinfo */
/* Demangled: path_cpuinfo */
extern void* path_cpuinfo;

/* Symbol: VCodecPthread_create */
/* Demangled: VCodecPthread_create */
int VCodecPthread_create(void);

/* Symbol: path_affected_cpus */
/* Demangled: path_affected_cpus */
extern void* path_affected_cpus;

/* Symbol: VCodecPthread_spin_unlock */
/* Demangled: VCodecPthread_spin_unlock */
int VCodecPthread_spin_unlock(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: VCodecMemSet */
/* Demangled: VCodecMemSet */
int VCodecMemSet(void);

/* Symbol: VCodecPthread_spin_destroy */
/* Demangled: VCodecPthread_spin_destroy */
int VCodecPthread_spin_destroy(void);

/* Symbol: VCodecPthread_spin_lock */
/* Demangled: VCodecPthread_spin_lock */
int VCodecPthread_spin_lock(void);

/* Symbol: VCodecOALInit */
/* Demangled: VCodecOALInit */
int VCodecOALInit(void);

/* Symbol: path_is_big_little */
/* Demangled: path_is_big_little */
extern void* path_is_big_little;

__END_DECLS

#endif /* BEGONIA_RE_LIBVCODEC_OAL_H */
