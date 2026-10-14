/*
 * Reverse-Engineered Source for: libispcameraca.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libispcameraca"

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
#include "libispcameraca.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MtkSecISP_tlcGetSecCam */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcGetSecCam(void) {
    ALOGD("MtkSecISP_tlcGetSecCam() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcMigrateTable */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcMigrateTable(void) {
    ALOGD("MtkSecISP_tlcMigrateTable() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcQueryPAFromHandle */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcQueryPAFromHandle(void) {
    ALOGD("MtkSecISP_tlcQueryPAFromHandle() called");
    return 0;
}

/* Demangled: updateTimeProfile(int, E_MTKSECISP_TA_FUNC_IDX, SecMgr_SecInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z17updateTimeProfilei23E_MTKSECISP_TA_FUNC_IDXP14SecMgr_SecInfo(void) {
    ALOGD("_Z17updateTimeProfilei23E_MTKSECISP_TA_FUNC_IDXP14SecMgr_SecInfo() called");
    return 0;
}

/* Exported Object: gSecISPInit */
extern "C" __attribute__((visibility("default"))) void* gSecISPInit = NULL;

/* Demangled: MtkSecISP_tlcInit */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcInit(void) {
    ALOGD("MtkSecISP_tlcInit() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcQueryMVAFromHandle */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcQueryMVAFromHandle(void) {
    ALOGD("MtkSecISP_tlcQueryMVAFromHandle() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcReadReg */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcReadReg(void) {
    ALOGD("MtkSecISP_tlcReadReg() called");
    return 0;
}

/* Exported Object: gISPHandle */
extern "C" __attribute__((visibility("default"))) void* gISPHandle = NULL;

/* Exported Object: g_ion_fd */
extern "C" __attribute__((visibility("default"))) void* g_ion_fd = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcQueryFHPA */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcQueryFHPA(void) {
    ALOGD("MtkSecISP_tlcQueryFHPA() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcWriteReg */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcWriteReg(void) {
    ALOGD("MtkSecISP_tlcWriteReg() called");
    return 0;
}

/* Exported Object: g_sys_data */
extern "C" __attribute__((visibility("default"))) void* g_sys_data = NULL;

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

/* Demangled: MtkSecISP_tlcDumpReg */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcDumpReg(void) {
    ALOGD("MtkSecISP_tlcDumpReg() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcOpen */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcOpen(void) {
    ALOGD("MtkSecISP_tlcOpen() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcMigrateFromTable */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcMigrateFromTable(void) {
    ALOGD("MtkSecISP_tlcMigrateFromTable() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcQueryHWInfo */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcQueryHWInfo(void) {
    ALOGD("MtkSecISP_tlcQueryHWInfo() called");
    return 0;
}

/* Demangled: image_dump(char*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10image_dumpPcPvi(void) {
    ALOGD("_Z10image_dumpPcPvi() called");
    return 0;
}

/* Exported Object: global_mem_session */
extern "C" __attribute__((visibility("default"))) void* global_mem_session = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: MtkSecISP_registerShareMemTest */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_registerShareMemTest(void) {
    ALOGD("MtkSecISP_registerShareMemTest() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcHandleCreate */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcHandleCreate(void) {
    ALOGD("MtkSecISP_tlcHandleCreate() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcUnregisterShareMem */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcUnregisterShareMem(void) {
    ALOGD("MtkSecISP_tlcUnregisterShareMem() called");
    return 0;
}

/* Exported Object: gSecMasterCam */
extern "C" __attribute__((visibility("default"))) void* gSecMasterCam = NULL;

/* Demangled: MtkSecISP_tlcSecConfig */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcSecConfig(void) {
    ALOGD("MtkSecISP_tlcSecConfig() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcUnInit */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcUnInit(void) {
    ALOGD("MtkSecISP_tlcUnInit() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcClose */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcClose(void) {
    ALOGD("MtkSecISP_tlcClose() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcDumpSecmem */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcDumpSecmem(void) {
    ALOGD("MtkSecISP_tlcDumpSecmem() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcSetSecCam */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcSetSecCam(void) {
    ALOGD("MtkSecISP_tlcSetSecCam() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: g_ion_handle */
extern "C" __attribute__((visibility("default"))) void* g_ion_handle = NULL;

/* Exported Object: global_function_session */
extern "C" __attribute__((visibility("default"))) void* global_function_session = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: MtkSecISP_tlcRegisterShareMem */
extern "C" __attribute__((visibility("default"))) int MtkSecISP_tlcRegisterShareMem(void) {
    ALOGD("MtkSecISP_tlcRegisterShareMem() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}
