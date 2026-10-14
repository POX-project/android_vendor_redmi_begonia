/*
 * Reverse-Engineered ABI Specification for: AVCSecureVdecCA.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: AVCSecureVdecCA.so
 */

#ifndef BEGONIA_RE_AVCSECUREVDECCA_H
#define BEGONIA_RE_AVCSECUREVDECCA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MtkH264SecVdec_tlcClose */
/* Demangled: MtkH264SecVdec_tlcClose */
int MtkH264SecVdec_tlcClose(void);

/* Symbol: gIonFd */
/* Demangled: gIonFd */
extern void* gIonFd;

/* Symbol: gVdecHandle */
/* Demangled: gVdecHandle */
extern void* gVdecHandle;

/* Symbol: MtkH264SecVdec_FreeIon */
/* Demangled: MtkH264SecVdec_FreeIon */
int MtkH264SecVdec_FreeIon(void);

/* Symbol: MtkH264SecVdec_secMemFree */
/* Demangled: MtkH264SecVdec_secMemFree */
int MtkH264SecVdec_secMemFree(void);

/* Symbol: MtkH264SecVdec_tlcDeinit */
/* Demangled: MtkH264SecVdec_tlcDeinit */
int MtkH264SecVdec_tlcDeinit(void);

/* Symbol: MtkH264SecVdec_AllocateIon */
/* Demangled: MtkH264SecVdec_AllocateIon */
int MtkH264SecVdec_AllocateIon(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gSecMemInitialized */
/* Demangled: gSecMemInitialized */
extern void* gSecMemInitialized;

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: MtkH264SecVdec_secMemInit */
/* Demangled: MtkH264SecVdec_secMemInit */
int MtkH264SecVdec_secMemInit(void);

/* Symbol: MtkH264SecVdec_tlcFillSecMem */
/* Demangled: MtkH264SecVdec_tlcFillSecMem */
int MtkH264SecVdec_tlcFillSecMem(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: MtkH264SecVdec_secMemDeInit */
/* Demangled: MtkH264SecVdec_secMemDeInit */
int MtkH264SecVdec_secMemDeInit(void);

/* Symbol: MtkH264SecVdec_tlcDumpSecMem */
/* Demangled: MtkH264SecVdec_tlcDumpSecMem */
int MtkH264SecVdec_tlcDumpSecMem(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: h264_vdec_ta_uuid */
/* Demangled: h264_vdec_ta_uuid */
extern void* h264_vdec_ta_uuid;

/* Symbol: gTLCOpenednitialized */
/* Demangled: gTLCOpenednitialized */
extern void* gTLCOpenednitialized;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: MtkH264SecVdec_tlcHandleCreate */
/* Demangled: MtkH264SecVdec_tlcHandleCreate */
int MtkH264SecVdec_tlcHandleCreate(void);

/* Symbol: MtkH264SecVdec_tlcInit */
/* Demangled: MtkH264SecVdec_tlcInit */
int MtkH264SecVdec_tlcInit(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: gIonHandle */
/* Demangled: gIonHandle */
extern void* gIonHandle;

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: MtkH264SecVdec_secMemAllocate */
/* Demangled: MtkH264SecVdec_secMemAllocate */
int MtkH264SecVdec_secMemAllocate(void);

/* Symbol: MtkH264SecVdec_secMemAllocateTBL */
/* Demangled: MtkH264SecVdec_secMemAllocateTBL */
int MtkH264SecVdec_secMemAllocateTBL(void);

/* Symbol: MtkH264SecVdec_tlcDecode */
/* Demangled: MtkH264SecVdec_tlcDecode */
int MtkH264SecVdec_tlcDecode(void);

/* Symbol: MtkH264SecVdec_tlcOpen */
/* Demangled: MtkH264SecVdec_tlcOpen */
int MtkH264SecVdec_tlcOpen(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: MtkH264SecVdec_secMemFreeTBL */
/* Demangled: MtkH264SecVdec_secMemFreeTBL */
int MtkH264SecVdec_secMemFreeTBL(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_AVCSECUREVDECCA_H */
