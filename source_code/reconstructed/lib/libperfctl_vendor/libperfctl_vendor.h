/*
 * Reverse-Engineered ABI Specification for: libperfctl_vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libperfctl_vendor.so
 */

#ifndef BEGONIA_RE_LIBPERFCTL_VENDOR_H
#define BEGONIA_RE_LIBPERFCTL_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: earaNotifyCVJobBegin */
/* Demangled: earaNotifyCVJobBegin */
int earaNotifyCVJobBegin(void);

/* Symbol: fbcNotifyTouch */
/* Demangled: fbcNotifyTouch */
int fbcNotifyTouch(void);

/* Symbol: perfmgrSetCpuPrefer */
/* Demangled: perfmgrSetCpuPrefer */
int perfmgrSetCpuPrefer(void);

/* Symbol: xgfNotifyQueue */
/* Demangled: xgfNotifyQueue */
int xgfNotifyQueue(void);

/* Symbol: earaNotifyJobEnd */
/* Demangled: earaNotifyJobEnd */
int earaNotifyJobEnd(void);

/* Symbol: perfmgrdevfd */
/* Demangled: perfmgrdevfd */
extern void* perfmgrdevfd;

/* Symbol: xgfNotifyConnect */
/* Demangled: xgfNotifyConnect */
int xgfNotifyConnect(void);

/* Symbol: xgfNotifyDequeue */
/* Demangled: xgfNotifyDequeue */
int xgfNotifyDequeue(void);

/* Symbol: devfd */
/* Demangled: devfd */
extern void* devfd;

/* Symbol: earaNotifyCVJobEnd */
/* Demangled: earaNotifyCVJobEnd */
int earaNotifyCVJobEnd(void);

/* Symbol: xgfNotifyVsync */
/* Demangled: xgfNotifyVsync */
int xgfNotifyVsync(void);

/* Symbol: earaGetState */
/* Demangled: earaGetState */
int earaGetState(void);

/* Symbol: earaGetUsage */
/* Demangled: earaGetUsage */
int earaGetUsage(void);

/* Symbol: earaNotifyJobBegin */
/* Demangled: earaNotifyJobBegin */
int earaNotifyJobBegin(void);

/* Symbol: earadevfd */
/* Demangled: earadevfd */
extern void* earadevfd;

/* Symbol: xgfNotifyBqid */
/* Demangled: xgfNotifyBqid */
int xgfNotifyBqid(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBPERFCTL_VENDOR_H */
