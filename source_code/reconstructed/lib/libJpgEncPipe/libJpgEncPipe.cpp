/*
 * Reverse-Engineered Source for: libJpgEncPipe.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libJpgEncPipe"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libJpgEncPipe.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: JpgEncHal::setDstPAddr(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal11setDstPAddrEPv(void) {
    ALOGD("_ZN9JpgEncHal11setDstPAddrEPv() called");
    return 0;
}

/* Demangled: imgIon_syncDone(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15imgIon_syncDoneiij(void) {
    ALOGD("_Z15imgIon_syncDoneiij() called");
    return 0;
}

/* Demangled: jpegEncLockEncoder(int*) */
extern "C" __attribute__((visibility("default"))) int _Z18jpegEncLockEncoderPi(void) {
    ALOGD("_Z18jpegEncLockEncoderPi() called");
    return 0;
}

/* Demangled: JpgEncHal::setDstAddr(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10setDstAddrEPv(void) {
    ALOGD("_ZN9JpgEncHal10setDstAddrEPv() called");
    return 0;
}

/* Demangled: JpgEncHal::setDstSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10setDstSizeEj(void) {
    ALOGD("_ZN9JpgEncHal10setDstSizeEj() called");
    return 0;
}

/* Demangled: JpgEncHal::~JpgEncHal() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHalD1Ev(void) {
    ALOGD("_ZN9JpgEncHalD1Ev() called");
    return 0;
}

/* Demangled: jpegEncWaitIRQ(int, long, unsigned int*, JPEG_ENC_RESULT_ENUM*) */
extern "C" __attribute__((visibility("default"))) int _Z14jpegEncWaitIRQilPjP20JPEG_ENC_RESULT_ENUM(void) {
    ALOGD("_Z14jpegEncWaitIRQilPjP20JPEG_ENC_RESULT_ENUM() called");
    return 0;
}

/* Demangled: JpgEncHal::setSrcBufSize(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal13setSrcBufSizeEjjjjj(void) {
    ALOGD("_ZN9JpgEncHal13setSrcBufSizeEjjjjj() called");
    return 0;
}

/* Demangled: JpgEncHal::setDRI(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal6setDRIEi(void) {
    ALOGD("_ZN9JpgEncHal6setDRIEi() called");
    return 0;
}

/* Demangled: JpgEncHal::setDstFD(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal8setDstFDEi(void) {
    ALOGD("_ZN9JpgEncHal8setDstFDEi() called");
    return 0;
}

/* Demangled: JpgEncHal::setSrcFD(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal8setSrcFDEii(void) {
    ALOGD("_ZN9JpgEncHal8setSrcFDEii() called");
    return 0;
}

/* Demangled: JpgEncHal::LevelLock(JpgEncHal::EncLockType) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal9LevelLockENS_11EncLockTypeE(void) {
    ALOGD("_ZN9JpgEncHal9LevelLockENS_11EncLockTypeE() called");
    return 0;
}

/* Demangled: JpgEncHal::JpgEncHal() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHalC1Ev(void) {
    ALOGD("_ZN9JpgEncHalC1Ev() called");
    return 0;
}

/* Demangled: imgIon_sync(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11imgIon_synciij(void) {
    ALOGD("_Z11imgIon_synciij() called");
    return 0;
}

/* Demangled: jpegEncUnlockEncoder(int) */
extern "C" __attribute__((visibility("default"))) int _Z20jpegEncUnlockEncoderi(void) {
    ALOGD("_Z20jpegEncUnlockEncoderi() called");
    return 0;
}

/* Demangled: JpgEncHal::free_m4u() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal8free_m4uEv(void) {
    ALOGD("_ZN9JpgEncHal8free_m4uEv() called");
    return 0;
}

/* Exported Object: vtable for JpgEncHal */
extern "C" __attribute__((visibility("default"))) void* _ZTV9JpgEncHal = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: JpgEncHal::~JpgEncHal() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHalD0Ev(void) {
    ALOGD("_ZN9JpgEncHalD0Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: imgIon_open(int*) */
extern "C" __attribute__((visibility("default"))) int _Z11imgIon_openPi(void) {
    ALOGD("_Z11imgIon_openPi() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: imgIon_getVA(int, unsigned int, void**) */
extern "C" __attribute__((visibility("default"))) int _Z12imgIon_getVAijPPv(void) {
    ALOGD("_Z12imgIon_getVAijPPv() called");
    return 0;
}

/* Demangled: jpegEncStart(int) */
extern "C" __attribute__((visibility("default"))) int _Z12jpegEncStarti(void) {
    ALOGD("_Z12jpegEncStarti() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: JpgEncHal::setSrcPAddr(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal11setSrcPAddrEPvS0_(void) {
    ALOGD("_ZN9JpgEncHal11setSrcPAddrEPvS0_() called");
    return 0;
}

/* Demangled: JpgEncHal::lockVideo() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal9lockVideoEv(void) {
    ALOGD("_ZN9JpgEncHal9lockVideoEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: imgIon_close(int) */
extern "C" __attribute__((visibility("default"))) int _Z12imgIon_closei(void) {
    ALOGD("_Z12imgIon_closei() called");
    return 0;
}

/* Demangled: JpgEncHal::setSrcAddr(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10setSrcAddrEPvS0_(void) {
    ALOGD("_ZN9JpgEncHal10setSrcAddrEPvS0_() called");
    return 0;
}

/* Demangled: JpgEncHal::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal6unlockEv(void) {
    ALOGD("_ZN9JpgEncHal6unlockEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: dumpBuffer(unsigned char*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z10dumpBufferPhjb(void) {
    ALOGD("_Z10dumpBufferPhjb() called");
    return 0;
}

/* Demangled: JpgEncHal::setEncSize(unsigned int, unsigned int, JpgEncHal::EncFormat, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10setEncSizeEjjNS_9EncFormatEb(void) {
    ALOGD("_ZN9JpgEncHal10setEncSizeEjjNS_9EncFormatEb() called");
    return 0;
}

/* Demangled: JpgEncHal::unlockVideo() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal11unlockVideoEv(void) {
    ALOGD("_ZN9JpgEncHal11unlockVideoEv() called");
    return 0;
}

/* Demangled: JpgEncHal::start(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal5startEPj(void) {
    ALOGD("_ZN9JpgEncHal5startEPj() called");
    return 0;
}

/* Demangled: JpgEncHal::alloc_ion() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal9alloc_ionEv(void) {
    ALOGD("_ZN9JpgEncHal9alloc_ionEv() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: imgIon_getPA(int, int, int, void*, unsigned int, int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z12imgIon_getPAiiiPvjPiPj(void) {
    ALOGD("_Z12imgIon_getPAiiiPvjPiPj() called");
    return 0;
}

/* Demangled: JpgEncHal::onSwEncode(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10onSwEncodeEPj(void) {
    ALOGD("_ZN9JpgEncHal10onSwEncodeEPj() called");
    return 0;
}

/* Demangled: JpgEncHal::setIonMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10setIonModeEb(void) {
    ALOGD("_ZN9JpgEncHal10setIonModeEb() called");
    return 0;
}

/* Demangled: JpgEncHal::enableSOI(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal9enableSOIEb(void) {
    ALOGD("_ZN9JpgEncHal9enableSOIEb() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: jpegEncConfigEncoder(int, JPEG_ENC_HAL_IN) */
extern "C" __attribute__((visibility("default"))) int _Z20jpegEncConfigEncoderi15JPEG_ENC_HAL_IN(void) {
    ALOGD("_Z20jpegEncConfigEncoderi15JPEG_ENC_HAL_IN() called");
    return 0;
}

/* Demangled: JpgEncHal::setQuality(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10setQualityEj(void) {
    ALOGD("_ZN9JpgEncHal10setQualityEj() called");
    return 0;
}

/* Demangled: JpgEncHal::setSrcAddr(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal10setSrcAddrEPvS0_S0_(void) {
    ALOGD("_ZN9JpgEncHal10setSrcAddrEPvS0_S0_() called");
    return 0;
}

/* Demangled: JpgEncHal::setSrcBufSize(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal13setSrcBufSizeEjjj(void) {
    ALOGD("_ZN9JpgEncHal13setSrcBufSizeEjjj() called");
    return 0;
}

/* Demangled: JpgEncHal::~JpgEncHal() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHalD2Ev(void) {
    ALOGD("_ZN9JpgEncHalD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: JpgEncHal::lock() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal4lockEv(void) {
    ALOGD("_ZN9JpgEncHal4lockEv() called");
    return 0;
}

/* Demangled: JpgEncHal::free_ion() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal8free_ionEv(void) {
    ALOGD("_ZN9JpgEncHal8free_ionEv() called");
    return 0;
}

/* Demangled: JpgEncHal::alloc_m4u() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHal9alloc_m4uEv(void) {
    ALOGD("_ZN9JpgEncHal9alloc_m4uEv() called");
    return 0;
}

/* Demangled: JpgEncHal::JpgEncHal() */
extern "C" __attribute__((visibility("default"))) int _ZN9JpgEncHalC2Ev(void) {
    ALOGD("_ZN9JpgEncHalC2Ev() called");
    return 0;
}

/* Demangled: imgIon_freeVA(void**, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13imgIon_freeVAPPvj(void) {
    ALOGD("_Z13imgIon_freeVAPPvj() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
