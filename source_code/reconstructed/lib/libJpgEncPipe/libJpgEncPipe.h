/*
 * Reverse-Engineered ABI Specification for: libJpgEncPipe.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libJpgEncPipe.so
 */

#ifndef BEGONIA_RE_LIBJPGENCPIPE_H
#define BEGONIA_RE_LIBJPGENCPIPE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9JpgEncHal11setDstPAddrEPv */
/* Demangled: JpgEncHal::setDstPAddr(void*) */
int _ZN9JpgEncHal11setDstPAddrEPv(void);

/* Symbol: _Z15imgIon_syncDoneiij */
/* Demangled: imgIon_syncDone(int, int, unsigned int) */
int _Z15imgIon_syncDoneiij(void);

/* Symbol: _Z18jpegEncLockEncoderPi */
/* Demangled: jpegEncLockEncoder(int*) */
int _Z18jpegEncLockEncoderPi(void);

/* Symbol: _ZN9JpgEncHal10setDstAddrEPv */
/* Demangled: JpgEncHal::setDstAddr(void*) */
int _ZN9JpgEncHal10setDstAddrEPv(void);

/* Symbol: _ZN9JpgEncHal10setDstSizeEj */
/* Demangled: JpgEncHal::setDstSize(unsigned int) */
int _ZN9JpgEncHal10setDstSizeEj(void);

/* Symbol: _ZN9JpgEncHalD1Ev */
/* Demangled: JpgEncHal::~JpgEncHal() */
int _ZN9JpgEncHalD1Ev(void);

/* Symbol: _Z14jpegEncWaitIRQilPjP20JPEG_ENC_RESULT_ENUM */
/* Demangled: jpegEncWaitIRQ(int, long, unsigned int*, JPEG_ENC_RESULT_ENUM*) */
int _Z14jpegEncWaitIRQilPjP20JPEG_ENC_RESULT_ENUM(void);

/* Symbol: _ZN9JpgEncHal13setSrcBufSizeEjjjjj */
/* Demangled: JpgEncHal::setSrcBufSize(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9JpgEncHal13setSrcBufSizeEjjjjj(void);

/* Symbol: _ZN9JpgEncHal6setDRIEi */
/* Demangled: JpgEncHal::setDRI(int) */
int _ZN9JpgEncHal6setDRIEi(void);

/* Symbol: _ZN9JpgEncHal8setDstFDEi */
/* Demangled: JpgEncHal::setDstFD(int) */
int _ZN9JpgEncHal8setDstFDEi(void);

/* Symbol: _ZN9JpgEncHal8setSrcFDEii */
/* Demangled: JpgEncHal::setSrcFD(int, int) */
int _ZN9JpgEncHal8setSrcFDEii(void);

/* Symbol: _ZN9JpgEncHal9LevelLockENS_11EncLockTypeE */
/* Demangled: JpgEncHal::LevelLock(JpgEncHal::EncLockType) */
int _ZN9JpgEncHal9LevelLockENS_11EncLockTypeE(void);

/* Symbol: _ZN9JpgEncHalC1Ev */
/* Demangled: JpgEncHal::JpgEncHal() */
int _ZN9JpgEncHalC1Ev(void);

/* Symbol: _Z11imgIon_synciij */
/* Demangled: imgIon_sync(int, int, unsigned int) */
int _Z11imgIon_synciij(void);

/* Symbol: _Z20jpegEncUnlockEncoderi */
/* Demangled: jpegEncUnlockEncoder(int) */
int _Z20jpegEncUnlockEncoderi(void);

/* Symbol: _ZN9JpgEncHal8free_m4uEv */
/* Demangled: JpgEncHal::free_m4u() */
int _ZN9JpgEncHal8free_m4uEv(void);

/* Symbol: _ZTV9JpgEncHal */
/* Demangled: vtable for JpgEncHal */
extern void* _ZTV9JpgEncHal;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN9JpgEncHalD0Ev */
/* Demangled: JpgEncHal::~JpgEncHal() */
int _ZN9JpgEncHalD0Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _Z11imgIon_openPi */
/* Demangled: imgIon_open(int*) */
int _Z11imgIon_openPi(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _Z12imgIon_getVAijPPv */
/* Demangled: imgIon_getVA(int, unsigned int, void**) */
int _Z12imgIon_getVAijPPv(void);

/* Symbol: _Z12jpegEncStarti */
/* Demangled: jpegEncStart(int) */
int _Z12jpegEncStarti(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN9JpgEncHal11setSrcPAddrEPvS0_ */
/* Demangled: JpgEncHal::setSrcPAddr(void*, void*) */
int _ZN9JpgEncHal11setSrcPAddrEPvS0_(void);

/* Symbol: _ZN9JpgEncHal9lockVideoEv */
/* Demangled: JpgEncHal::lockVideo() */
int _ZN9JpgEncHal9lockVideoEv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _Z12imgIon_closei */
/* Demangled: imgIon_close(int) */
int _Z12imgIon_closei(void);

/* Symbol: _ZN9JpgEncHal10setSrcAddrEPvS0_ */
/* Demangled: JpgEncHal::setSrcAddr(void*, void*) */
int _ZN9JpgEncHal10setSrcAddrEPvS0_(void);

/* Symbol: _ZN9JpgEncHal6unlockEv */
/* Demangled: JpgEncHal::unlock() */
int _ZN9JpgEncHal6unlockEv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z10dumpBufferPhjb */
/* Demangled: dumpBuffer(unsigned char*, unsigned int, bool) */
int _Z10dumpBufferPhjb(void);

/* Symbol: _ZN9JpgEncHal10setEncSizeEjjNS_9EncFormatEb */
/* Demangled: JpgEncHal::setEncSize(unsigned int, unsigned int, JpgEncHal::EncFormat, bool) */
int _ZN9JpgEncHal10setEncSizeEjjNS_9EncFormatEb(void);

/* Symbol: _ZN9JpgEncHal11unlockVideoEv */
/* Demangled: JpgEncHal::unlockVideo() */
int _ZN9JpgEncHal11unlockVideoEv(void);

/* Symbol: _ZN9JpgEncHal5startEPj */
/* Demangled: JpgEncHal::start(unsigned int*) */
int _ZN9JpgEncHal5startEPj(void);

/* Symbol: _ZN9JpgEncHal9alloc_ionEv */
/* Demangled: JpgEncHal::alloc_ion() */
int _ZN9JpgEncHal9alloc_ionEv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _Z12imgIon_getPAiiiPvjPiPj */
/* Demangled: imgIon_getPA(int, int, int, void*, unsigned int, int*, unsigned int*) */
int _Z12imgIon_getPAiiiPvjPiPj(void);

/* Symbol: _ZN9JpgEncHal10onSwEncodeEPj */
/* Demangled: JpgEncHal::onSwEncode(unsigned int*) */
int _ZN9JpgEncHal10onSwEncodeEPj(void);

/* Symbol: _ZN9JpgEncHal10setIonModeEb */
/* Demangled: JpgEncHal::setIonMode(bool) */
int _ZN9JpgEncHal10setIonModeEb(void);

/* Symbol: _ZN9JpgEncHal9enableSOIEb */
/* Demangled: JpgEncHal::enableSOI(bool) */
int _ZN9JpgEncHal9enableSOIEb(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Z20jpegEncConfigEncoderi15JPEG_ENC_HAL_IN */
/* Demangled: jpegEncConfigEncoder(int, JPEG_ENC_HAL_IN) */
int _Z20jpegEncConfigEncoderi15JPEG_ENC_HAL_IN(void);

/* Symbol: _ZN9JpgEncHal10setQualityEj */
/* Demangled: JpgEncHal::setQuality(unsigned int) */
int _ZN9JpgEncHal10setQualityEj(void);

/* Symbol: _ZN9JpgEncHal10setSrcAddrEPvS0_S0_ */
/* Demangled: JpgEncHal::setSrcAddr(void*, void*, void*) */
int _ZN9JpgEncHal10setSrcAddrEPvS0_S0_(void);

/* Symbol: _ZN9JpgEncHal13setSrcBufSizeEjjj */
/* Demangled: JpgEncHal::setSrcBufSize(unsigned int, unsigned int, unsigned int) */
int _ZN9JpgEncHal13setSrcBufSizeEjjj(void);

/* Symbol: _ZN9JpgEncHalD2Ev */
/* Demangled: JpgEncHal::~JpgEncHal() */
int _ZN9JpgEncHalD2Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN9JpgEncHal4lockEv */
/* Demangled: JpgEncHal::lock() */
int _ZN9JpgEncHal4lockEv(void);

/* Symbol: _ZN9JpgEncHal8free_ionEv */
/* Demangled: JpgEncHal::free_ion() */
int _ZN9JpgEncHal8free_ionEv(void);

/* Symbol: _ZN9JpgEncHal9alloc_m4uEv */
/* Demangled: JpgEncHal::alloc_m4u() */
int _ZN9JpgEncHal9alloc_m4uEv(void);

/* Symbol: _ZN9JpgEncHalC2Ev */
/* Demangled: JpgEncHal::JpgEncHal() */
int _ZN9JpgEncHalC2Ev(void);

/* Symbol: _Z13imgIon_freeVAPPvj */
/* Demangled: imgIon_freeVA(void**, unsigned int) */
int _Z13imgIon_freeVAPPvj(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBJPGENCPIPE_H */
