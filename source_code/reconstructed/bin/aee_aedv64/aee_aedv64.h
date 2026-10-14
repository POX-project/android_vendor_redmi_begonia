/*
 * Reverse-Engineered ABI Specification for: aee_aedv64
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Executable Service Daemon
 * Soname: aee_aedv64
 */

#ifndef BEGONIA_RE_AEE_AEDV64_H
#define BEGONIA_RE_AEE_AEDV64_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEm */
/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::reserve(unsigned long) */
int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEm(void);

/* Symbol: _ZTVN11unwindstack8UnwinderE */
/* Demangled: vtable for unwindstack::Unwinder */
extern void* _ZTVN11unwindstack8UnwinderE;

/* Symbol: klog_write */
/* Demangled: klog_write */
int klog_write(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<unwindstack::MemoryOfflineBuffer*, std::__1::default_delete<unwindstack::MemoryOfflineBuffer>, std::__1::allocator<unwindstack::MemoryOfflineBuffer> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN11unwindstack19MemoryOfflineBufferENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: error */
/* Demangled: error */
extern void* error;

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

__END_DECLS

#endif /* BEGONIA_RE_AEE_AEDV64_H */
