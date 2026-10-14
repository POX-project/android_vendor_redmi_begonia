/*
 * Reverse-Engineered ABI Specification for: libapu-apuwareutils.mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libapuwareutils.mtk.so
 */

#ifndef BEGONIA_RE_LIBAPU_APUWAREUTILS_MTK_H
#define BEGONIA_RE_LIBAPU_APUWAREUTILS_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev(void);

/* Symbol: acquirePerformanceLockInternal */
/* Demangled: acquirePerformanceLockInternal */
int acquirePerformanceLockInternal(void);

/* Symbol: queryHwConfigInternal */
/* Demangled: queryHwConfigInternal */
int queryHwConfigInternal(void);

/* Symbol: releasePerformanceLockInternal */
/* Demangled: releasePerformanceLockInternal */
int releasePerformanceLockInternal(void);

/* Symbol: utilsService */
/* Demangled: utilsService */
extern void* utilsService;

__END_DECLS

#endif /* BEGONIA_RE_LIBAPU_APUWAREUTILS_MTK_H */
