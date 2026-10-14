/*
 * Reverse-Engineered ABI Specification for: libapuwareutils.mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libapuwareutils.mtk.so
 */

#ifndef BEGONIA_RE_LIBAPUWAREUTILS_MTK_H
#define BEGONIA_RE_LIBAPUWAREUTILS_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN18ApuwareutilsClient12utilsServiceE */
/* Demangled: ApuwareutilsClient::utilsService */
extern void* _ZN18ApuwareutilsClient12utilsServiceE;

/* Symbol: _ZN18ApuwareutilsClient13queryHwConfigEv */
/* Demangled: ApuwareutilsClient::queryHwConfig() */
int _ZN18ApuwareutilsClient13queryHwConfigEv(void);

/* Symbol: _ZN18ApuwareutilsClient22acquirePerformanceLockEi18PERFORMANCE_MODE_Ej */
/* Demangled: ApuwareutilsClient::acquirePerformanceLock(int, PERFORMANCE_MODE_E, unsigned int) */
int _ZN18ApuwareutilsClient22acquirePerformanceLockEi18PERFORMANCE_MODE_Ej(void);

/* Symbol: _ZN18ApuwareutilsClient22releasePerformanceLockEi */
/* Demangled: ApuwareutilsClient::releasePerformanceLock(int) */
int _ZN18ApuwareutilsClient22releasePerformanceLockEi(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev */
/* Demangled: android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils>::~sp() */
int _ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev(void);

/* Symbol: releasePerformanceLockInternal */
/* Demangled: releasePerformanceLockInternal */
int releasePerformanceLockInternal(void);

/* Symbol: _ZN18ApuwareutilsClient14createInstanceEv */
/* Demangled: ApuwareutilsClient::createInstance() */
int _ZN18ApuwareutilsClient14createInstanceEv(void);

/* Symbol: _ZN18ApuwareutilsClient9apuClientE */
/* Demangled: ApuwareutilsClient::apuClient */
extern void* _ZN18ApuwareutilsClient9apuClientE;

/* Symbol: acquirePerformanceLockInternal */
/* Demangled: acquirePerformanceLockInternal */
int acquirePerformanceLockInternal(void);

/* Symbol: queryHwConfigInternal */
/* Demangled: queryHwConfigInternal */
int queryHwConfigInternal(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAPUWAREUTILS_MTK_H */
