/*
 * Reverse-Engineered Source for: VP9SecureVdecCA.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "VP9SecureVdecCA"

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
#include "VP9SecureVdecCA.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: gIonFd */
extern "C" __attribute__((visibility("default"))) void* gIonFd = NULL;

/* Exported Object: gVdecHandle */
extern "C" __attribute__((visibility("default"))) void* gVdecHandle = NULL;

/* Demangled: MtkVP9SecVdec_secMemDeInit */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_secMemDeInit(void) {
    ALOGD("MtkVP9SecVdec_secMemDeInit() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcDecode */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcDecode(void) {
    ALOGD("MtkVP9SecVdec_tlcDecode() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcOpen */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcOpen(void) {
    ALOGD("MtkVP9SecVdec_tlcOpen() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_secMemFree */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_secMemFree(void) {
    ALOGD("MtkVP9SecVdec_secMemFree() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: gSecMemInitialized */
extern "C" __attribute__((visibility("default"))) void* gSecMemInitialized = NULL;

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_AllocateIon */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_AllocateIon(void) {
    ALOGD("MtkVP9SecVdec_AllocateIon() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcDumpSecMem */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcDumpSecMem(void) {
    ALOGD("MtkVP9SecVdec_tlcDumpSecMem() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcHandleCreate */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcHandleCreate(void) {
    ALOGD("MtkVP9SecVdec_tlcHandleCreate() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

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

/* Demangled: MtkVP9SecVdec_FreeIon */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_FreeIon(void) {
    ALOGD("MtkVP9SecVdec_FreeIon() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_secMemInit */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_secMemInit(void) {
    ALOGD("MtkVP9SecVdec_secMemInit() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcDeinit */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcDeinit(void) {
    ALOGD("MtkVP9SecVdec_tlcDeinit() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: gTLCOpenednitialized */
extern "C" __attribute__((visibility("default"))) void* gTLCOpenednitialized = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Exported Object: gIonHandle */
extern "C" __attribute__((visibility("default"))) void* gIonHandle = NULL;

/* Demangled: MtkVP9SecVdec_secMemAllocate */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_secMemAllocate(void) {
    ALOGD("MtkVP9SecVdec_secMemAllocate() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcClose */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcClose(void) {
    ALOGD("MtkVP9SecVdec_tlcClose() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: vp9_vdec_ta_uuid */
extern "C" __attribute__((visibility("default"))) void* vp9_vdec_ta_uuid = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_secMemFreeTBL */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_secMemFreeTBL(void) {
    ALOGD("MtkVP9SecVdec_secMemFreeTBL() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcFillSecMem */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcFillSecMem(void) {
    ALOGD("MtkVP9SecVdec_tlcFillSecMem() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_secMemAllocateTBL */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_secMemAllocateTBL(void) {
    ALOGD("MtkVP9SecVdec_secMemAllocateTBL() called");
    return 0;
}

/* Demangled: MtkVP9SecVdec_tlcInit */
extern "C" __attribute__((visibility("default"))) int MtkVP9SecVdec_tlcInit(void) {
    ALOGD("MtkVP9SecVdec_tlcInit() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}
