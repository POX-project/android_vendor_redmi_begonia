/*
 * Reverse-Engineered Source for: libcam3a_imem.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam3a_imem"

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
#include "libcam3a_imem.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: IMem3AImp::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp5resetEv(void) {
    ALOGD("_ZN9IMem3AImp5resetEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, _imem_map_info_>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: IMem3AImp::unmapPhyAddr(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp12unmapPhyAddrEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN9IMem3AImp12unmapPhyAddrEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: IMem3AImp::mapPhyAddr(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp10mapPhyAddrEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN9IMem3AImp10mapPhyAddrEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: IMem3AImp::IMem3AImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImpC1Ev(void) {
    ALOGD("_ZN9IMem3AImpC1Ev() called");
    return 0;
}

/* Demangled: IMem3AImp::~IMem3AImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImpD0Ev(void) {
    ALOGD("_ZN9IMem3AImpD0Ev() called");
    return 0;
}

/* Demangled: IMem3AImp::~IMem3AImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImpD2Ev(void) {
    ALOGD("_ZN9IMem3AImpD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: IMem3AImp::freeVirtBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp11freeVirtBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN9IMem3AImp11freeVirtBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: IMem3AImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp11getInstanceEv(void) {
    ALOGD("_ZN9IMem3AImp11getInstanceEv() called");
    return 0;
}

/* Demangled: IMem3AImp::allocVirtBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp12allocVirtBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN9IMem3AImp12allocVirtBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: IMem3AImp::cacheFlushAll() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp13cacheFlushAllEv(void) {
    ALOGD("_ZN9IMem3AImp13cacheFlushAllEv() called");
    return 0;
}

/* Demangled: IMem3AImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp15destroyInstanceEv(void) {
    ALOGD("_ZN9IMem3AImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: IMem3AImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp6uninitEv(void) {
    ALOGD("_ZN9IMem3AImp6uninitEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: IMem3AImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp4initEv(void) {
    ALOGD("_ZN9IMem3AImp4initEv() called");
    return 0;
}

/* Demangled: IMem3A::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6IMem3A14createInstanceEv(void) {
    ALOGD("_ZN6IMem3A14createInstanceEv() called");
    return 0;
}

/* Demangled: IMem3AImp::cacheSyncbyRange(IMEM_CACHECTRL_ENUM, IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN9IMem3AImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: IMem3AImp::IMem3AImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImpC2Ev(void) {
    ALOGD("_ZN9IMem3AImpC2Ev() called");
    return 0;
}

/* Demangled: IMem3AImp::~IMem3AImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9IMem3AImpD1Ev(void) {
    ALOGD("_ZN9IMem3AImpD1Ev() called");
    return 0;
}

/* Exported Object: vtable for IMem3AImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9IMem3AImp = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
