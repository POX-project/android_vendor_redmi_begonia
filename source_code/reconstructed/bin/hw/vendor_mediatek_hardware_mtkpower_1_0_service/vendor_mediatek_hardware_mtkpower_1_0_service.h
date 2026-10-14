/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mtkpower@1.0-service
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Executable Service Daemon
 * Soname: vendor.mediatek.hardware.mtkpower@1.0-service
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_0_SERVICE_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_0_SERVICE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: libpowerhal_wrap_CusLockHint */
/* Demangled: libpowerhal_wrap_CusLockHint */
int libpowerhal_wrap_CusLockHint(void);

/* Symbol: libpowerhal_wrap_Init */
/* Demangled: libpowerhal_wrap_Init */
int libpowerhal_wrap_Init(void);

/* Symbol: libpowerhal_wrap_UserGetCapability */
/* Demangled: libpowerhal_wrap_UserGetCapability */
int libpowerhal_wrap_UserGetCapability(void);

/* Symbol: libpowerhal_wrap_UserScnDisableAll */
/* Demangled: libpowerhal_wrap_UserScnDisableAll */
int libpowerhal_wrap_UserScnDisableAll(void);

/* Symbol: _ZGVN4aidl7android8hardware5power6IPower4hashE */
/* Demangled: guard variable for aidl::android::hardware::power::IPower::hash */
extern void* _ZGVN4aidl7android8hardware5power6IPower4hashE;

/* Symbol: _ZN4aidl7android8hardware5power6IPower4hashE */
/* Demangled: aidl::android::hardware::power::IPower::hash */
extern void* _ZN4aidl7android8hardware5power6IPower4hashE;

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<ndk::SharedRefBase*, std::__1::default_delete<ndk::SharedRefBase>, std::__1::allocator<ndk::SharedRefBase> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN3ndk13SharedRefBaseENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: libpowerhal_wrap_LockAcq */
/* Demangled: libpowerhal_wrap_LockAcq */
int libpowerhal_wrap_LockAcq(void);

/* Symbol: libpowerhal_wrap_UserScnRestoreAll */
/* Demangled: libpowerhal_wrap_UserScnRestoreAll */
int libpowerhal_wrap_UserScnRestoreAll(void);

/* Symbol: libpowerhal_wrap_LockRel */
/* Demangled: libpowerhal_wrap_LockRel */
int libpowerhal_wrap_LockRel(void);

/* Symbol: libpowerhal_wrap_NotifyAppState */
/* Demangled: libpowerhal_wrap_NotifyAppState */
int libpowerhal_wrap_NotifyAppState(void);

/* Symbol: libpowerhal_wrap_SetSysInfo */
/* Demangled: libpowerhal_wrap_SetSysInfo */
int libpowerhal_wrap_SetSysInfo(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKPOWER_1_0_SERVICE_H */
