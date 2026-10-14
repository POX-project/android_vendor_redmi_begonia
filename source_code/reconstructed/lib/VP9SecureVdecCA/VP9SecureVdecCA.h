/*
 * Reverse-Engineered ABI Specification for: VP9SecureVdecCA.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: VP9SecureVdecCA.so
 */

#ifndef BEGONIA_RE_VP9SECUREVDECCA_H
#define BEGONIA_RE_VP9SECUREVDECCA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: gIonFd */
/* Demangled: gIonFd */
extern void* gIonFd;

/* Symbol: gVdecHandle */
/* Demangled: gVdecHandle */
extern void* gVdecHandle;

/* Symbol: MtkVP9SecVdec_secMemDeInit */
/* Demangled: MtkVP9SecVdec_secMemDeInit */
int MtkVP9SecVdec_secMemDeInit(void);

/* Symbol: MtkVP9SecVdec_tlcDecode */
/* Demangled: MtkVP9SecVdec_tlcDecode */
int MtkVP9SecVdec_tlcDecode(void);

/* Symbol: MtkVP9SecVdec_tlcOpen */
/* Demangled: MtkVP9SecVdec_tlcOpen */
int MtkVP9SecVdec_tlcOpen(void);

/* Symbol: MtkVP9SecVdec_secMemFree */
/* Demangled: MtkVP9SecVdec_secMemFree */
int MtkVP9SecVdec_secMemFree(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gSecMemInitialized */
/* Demangled: gSecMemInitialized */
extern void* gSecMemInitialized;

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: MtkVP9SecVdec_AllocateIon */
/* Demangled: MtkVP9SecVdec_AllocateIon */
int MtkVP9SecVdec_AllocateIon(void);

/* Symbol: MtkVP9SecVdec_tlcDumpSecMem */
/* Demangled: MtkVP9SecVdec_tlcDumpSecMem */
int MtkVP9SecVdec_tlcDumpSecMem(void);

/* Symbol: MtkVP9SecVdec_tlcHandleCreate */
/* Demangled: MtkVP9SecVdec_tlcHandleCreate */
int MtkVP9SecVdec_tlcHandleCreate(void);

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

/* Symbol: MtkVP9SecVdec_FreeIon */
/* Demangled: MtkVP9SecVdec_FreeIon */
int MtkVP9SecVdec_FreeIon(void);

/* Symbol: MtkVP9SecVdec_secMemInit */
/* Demangled: MtkVP9SecVdec_secMemInit */
int MtkVP9SecVdec_secMemInit(void);

/* Symbol: MtkVP9SecVdec_tlcDeinit */
/* Demangled: MtkVP9SecVdec_tlcDeinit */
int MtkVP9SecVdec_tlcDeinit(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: gTLCOpenednitialized */
/* Demangled: gTLCOpenednitialized */
extern void* gTLCOpenednitialized;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: gIonHandle */
/* Demangled: gIonHandle */
extern void* gIonHandle;

/* Symbol: MtkVP9SecVdec_secMemAllocate */
/* Demangled: MtkVP9SecVdec_secMemAllocate */
int MtkVP9SecVdec_secMemAllocate(void);

/* Symbol: MtkVP9SecVdec_tlcClose */
/* Demangled: MtkVP9SecVdec_tlcClose */
int MtkVP9SecVdec_tlcClose(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: vp9_vdec_ta_uuid */
/* Demangled: vp9_vdec_ta_uuid */
extern void* vp9_vdec_ta_uuid;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: MtkVP9SecVdec_secMemFreeTBL */
/* Demangled: MtkVP9SecVdec_secMemFreeTBL */
int MtkVP9SecVdec_secMemFreeTBL(void);

/* Symbol: MtkVP9SecVdec_tlcFillSecMem */
/* Demangled: MtkVP9SecVdec_tlcFillSecMem */
int MtkVP9SecVdec_tlcFillSecMem(void);

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

/* Symbol: MtkVP9SecVdec_secMemAllocateTBL */
/* Demangled: MtkVP9SecVdec_secMemAllocateTBL */
int MtkVP9SecVdec_secMemAllocateTBL(void);

/* Symbol: MtkVP9SecVdec_tlcInit */
/* Demangled: MtkVP9SecVdec_tlcInit */
int MtkVP9SecVdec_tlcInit(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_VP9SECUREVDECCA_H */
