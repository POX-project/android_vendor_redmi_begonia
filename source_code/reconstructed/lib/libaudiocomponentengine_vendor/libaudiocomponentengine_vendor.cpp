/*
 * Reverse-Engineered Source for: libaudiocomponentengine_vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaudiocomponentengine_vendor"

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
#include "libaudiocomponentengine_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MtkAudioLoudEnableXMLCallBack */
extern "C" __attribute__((visibility("default"))) int MtkAudioLoudEnableXMLCallBack(void) {
    ALOGD("MtkAudioLoudEnableXMLCallBack() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::MtkAudioSrc(unsigned int, unsigned int, unsigned int, unsigned int, SRC_PCM_FORMAT) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrcC2Ejjjj14SRC_PCM_FORMAT(void) {
    ALOGD("_ZN7android11MtkAudioSrcC2Ejjjj14SRC_PCM_FORMAT() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverterC1Ev(void) {
    ALOGD("_ZN7android20MtkAudioBitConverterC1Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::~MtkAudioDcRemove() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemoveD0Ev(void) {
    ALOGD("_ZN7android16MtkAudioDcRemoveD0Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::setParameter(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc12setParameterEjPv(void) {
    ALOGD("_ZN7android11MtkAudioSrc12setParameterEjPv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::~MtkAudioSrc() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrcD2Ev(void) {
    ALOGD("_ZN7android11MtkAudioSrcD2Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::resetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverter11resetBufferEv(void) {
    ALOGD("_ZN7android20MtkAudioBitConverter11resetBufferEv() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::process(void*, unsigned int*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverter7processEPvPjS1_S2_(void) {
    ALOGD("_ZN7android20MtkAudioBitConverter7processEPvPjS1_S2_() called");
    return 0;
}

/* Demangled: createMtkDcRemove */
extern "C" __attribute__((visibility("default"))) int createMtkDcRemove(void) {
    ALOGD("createMtkDcRemove() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::resetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemove11resetBufferEv(void) {
    ALOGD("_ZN7android16MtkAudioDcRemove11resetBufferEv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::MtkAudioSrc() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrcC2Ev(void) {
    ALOGD("_ZN7android11MtkAudioSrcC2Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::setParameter(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverter12setParameterEjPv(void) {
    ALOGD("_ZN7android20MtkAudioBitConverter12setParameterEjPv() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::~MtkAudioBitConverter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverterD0Ev(void) {
    ALOGD("_ZN7android20MtkAudioBitConverterD0Ev() called");
    return 0;
}

/* Demangled: destroyMtkAudioCustParamCache */
extern "C" __attribute__((visibility("default"))) int destroyMtkAudioCustParamCache(void) {
    ALOGD("destroyMtkAudioCustParamCache() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::init(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemove4initEjjjj(void) {
    ALOGD("_ZN7android16MtkAudioDcRemove4initEjjjj() called");
    return 0;
}

/* Exported Object: vtable for android::MtkAudioSrc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11MtkAudioSrcE = NULL;

/* Demangled: destroyMtkAudioDcRemove */
extern "C" __attribute__((visibility("default"))) int destroyMtkAudioDcRemove(void) {
    ALOGD("destroyMtkAudioDcRemove() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::process(void*, unsigned int*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemove7processEPvPjS1_S2_(void) {
    ALOGD("_ZN7android16MtkAudioDcRemove7processEPvPjS1_S2_() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::resetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc11resetBufferEv(void) {
    ALOGD("_ZN7android11MtkAudioSrc11resetBufferEv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc5closeEv(void) {
    ALOGD("_ZN7android11MtkAudioSrc5closeEv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::~MtkAudioSrc() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrcD1Ev(void) {
    ALOGD("_ZN7android11MtkAudioSrcD1Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::getParameter(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverter12getParameterEjPv(void) {
    ALOGD("_ZN7android20MtkAudioBitConverter12getParameterEjPv() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::open() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverter4openEv(void) {
    ALOGD("_ZN7android20MtkAudioBitConverter4openEv() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter(unsigned int, unsigned int, BCV_PCM_FORMAT) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverterC2Ejj14BCV_PCM_FORMAT(void) {
    ALOGD("_ZN7android20MtkAudioBitConverterC2Ejj14BCV_PCM_FORMAT() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter(unsigned int, unsigned int, BCV_PCM_FORMAT) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverterC1Ejj14BCV_PCM_FORMAT(void) {
    ALOGD("_ZN7android20MtkAudioBitConverterC1Ejj14BCV_PCM_FORMAT() called");
    return 0;
}

/* Demangled: destroyMtkAudioLoud */
extern "C" __attribute__((visibility("default"))) int destroyMtkAudioLoud(void) {
    ALOGD("destroyMtkAudioLoud() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::getParameter(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemove12getParameterEjPv(void) {
    ALOGD("_ZN7android16MtkAudioDcRemove12getParameterEjPv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::multiChannelResetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc23multiChannelResetBufferEv(void) {
    ALOGD("_ZN7android11MtkAudioSrc23multiChannelResetBufferEv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::MtkAudioSrc() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrcC1Ev(void) {
    ALOGD("_ZN7android11MtkAudioSrcC1Ev() called");
    return 0;
}

/* Demangled: destroyMtkAudioBitConverter */
extern "C" __attribute__((visibility("default"))) int destroyMtkAudioBitConverter(void) {
    ALOGD("destroyMtkAudioBitConverter() called");
    return 0;
}

/* Exported Object: vtable for android::MtkAudioBitConverter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android20MtkAudioBitConverterE = NULL;

/* Demangled: android::MtkAudioDcRemove::open() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemove4openEv(void) {
    ALOGD("_ZN7android16MtkAudioDcRemove4openEv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::getParameter(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc12getParameterEjPv(void) {
    ALOGD("_ZN7android11MtkAudioSrc12getParameterEjPv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::~MtkAudioSrc() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrcD0Ev(void) {
    ALOGD("_ZN7android11MtkAudioSrcD0Ev() called");
    return 0;
}

/* Demangled: createMtkAudioBitConverter */
extern "C" __attribute__((visibility("default"))) int createMtkAudioBitConverter(void) {
    ALOGD("createMtkAudioBitConverter() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::multiChannelOpen() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc16multiChannelOpenEv(void) {
    ALOGD("_ZN7android11MtkAudioSrc16multiChannelOpenEv() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::process(void*, unsigned int*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc7processEPvPjS1_S2_(void) {
    ALOGD("_ZN7android11MtkAudioSrc7processEPvPjS1_S2_() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::MtkAudioSrc(unsigned int, unsigned int, unsigned int, unsigned int, SRC_PCM_FORMAT) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrcC1Ejjjj14SRC_PCM_FORMAT(void) {
    ALOGD("_ZN7android11MtkAudioSrcC1Ejjjj14SRC_PCM_FORMAT() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::~MtkAudioDcRemove() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemoveD2Ev(void) {
    ALOGD("_ZN7android16MtkAudioDcRemoveD2Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverter5closeEv(void) {
    ALOGD("_ZN7android20MtkAudioBitConverter5closeEv() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::close() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemove5closeEv(void) {
    ALOGD("_ZN7android16MtkAudioDcRemove5closeEv() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::MtkAudioDcRemove() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemoveC2Ev(void) {
    ALOGD("_ZN7android16MtkAudioDcRemoveC2Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::~MtkAudioBitConverter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverterD2Ev(void) {
    ALOGD("_ZN7android20MtkAudioBitConverterD2Ev() called");
    return 0;
}

/* Demangled: createMtkAudioCustParamCache */
extern "C" __attribute__((visibility("default"))) int createMtkAudioCustParamCache(void) {
    ALOGD("createMtkAudioCustParamCache() called");
    return 0;
}

/* Demangled: destroyMtkAudioSrc */
extern "C" __attribute__((visibility("default"))) int destroyMtkAudioSrc(void) {
    ALOGD("destroyMtkAudioSrc() called");
    return 0;
}

/* Demangled: android::MtkAudioSrc::open() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc4openEv(void) {
    ALOGD("_ZN7android11MtkAudioSrc4openEv() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::MtkAudioBitConverter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverterC2Ev(void) {
    ALOGD("_ZN7android20MtkAudioBitConverterC2Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::MtkAudioDcRemove::~MtkAudioDcRemove() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemoveD1Ev(void) {
    ALOGD("_ZN7android16MtkAudioDcRemoveD1Ev() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::MtkAudioDcRemove() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemoveC1Ev(void) {
    ALOGD("_ZN7android16MtkAudioDcRemoveC1Ev() called");
    return 0;
}

/* Demangled: createMtkAudioLoud */
extern "C" __attribute__((visibility("default"))) int createMtkAudioLoud(void) {
    ALOGD("createMtkAudioLoud() called");
    return 0;
}

/* Demangled: createMtkAudioSrc */
extern "C" __attribute__((visibility("default"))) int createMtkAudioSrc(void) {
    ALOGD("createMtkAudioSrc() called");
    return 0;
}

/* Demangled: android::MtkAudioDcRemove::setParameter(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MtkAudioDcRemove12setParameterEjPv(void) {
    ALOGD("_ZN7android16MtkAudioDcRemove12setParameterEjPv() called");
    return 0;
}

/* Exported Object: vtable for android::MtkAudioDcRemove */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16MtkAudioDcRemoveE = NULL;

/* Demangled: android::MtkAudioSrc::multiChannelProcess(void*, unsigned int*, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11MtkAudioSrc19multiChannelProcessEPvPjS1_S2_(void) {
    ALOGD("_ZN7android11MtkAudioSrc19multiChannelProcessEPvPjS1_S2_() called");
    return 0;
}

/* Demangled: android::MtkAudioBitConverter::~MtkAudioBitConverter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android20MtkAudioBitConverterD1Ev(void) {
    ALOGD("_ZN7android20MtkAudioBitConverterD1Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
