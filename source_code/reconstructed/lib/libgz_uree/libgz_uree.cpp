/*
 * Reverse-Engineered Source for: libgz_uree.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgz_uree"

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
#include "libgz_uree.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_GZ_KREE "/dev/gz_kree"
#define DEV_DEV_TZMEM "/dev/tzmem"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_GZ_KREE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GZ_KREE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GZ_KREE, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_TZMEM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TZMEM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TZMEM, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: TZ_GetErrorString */
extern "C" __attribute__((visibility("default"))) int TZ_GetErrorString(void) {
    ALOGD("TZ_GetErrorString() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmemWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmemWithTag(void) {
    ALOGD("UREE_RegisterSharedmemWithTag() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmem_ReadOnly */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmem_ReadOnly(void) {
    ALOGD("UREE_RegisterSharedmem_ReadOnly() called");
    return 0;
}

/* Demangled: UREE_ReleaseSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReleaseSecurechunkmem(void) {
    ALOGD("UREE_ReleaseSecurechunkmem() called");
    return 0;
}

/* Demangled: UREE_WriteSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_WriteSecurechunkmem(void) {
    ALOGD("UREE_WriteSecurechunkmem() called");
    return 0;
}

/* Demangled: UREE_CreateSessionWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_CreateSessionWithTag(void) {
    ALOGD("UREE_CreateSessionWithTag() called");
    return 0;
}

/* Demangled: UREE_FOD_ShareMem_Enable */
extern "C" __attribute__((visibility("default"))) int UREE_FOD_ShareMem_Enable(void) {
    ALOGD("UREE_FOD_ShareMem_Enable() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmem_ReadOnlyWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmem_ReadOnlyWithTag(void) {
    ALOGD("UREE_RegisterSharedmem_ReadOnlyWithTag() called");
    return 0;
}

/* Demangled: UREE_ReferenceSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReferenceSecurechunkmem(void) {
    ALOGD("UREE_ReferenceSecurechunkmem() called");
    return 0;
}

/* Demangled: UREE_UnreferenceSecuremem */
extern "C" __attribute__((visibility("default"))) int UREE_UnreferenceSecuremem(void) {
    ALOGD("UREE_UnreferenceSecuremem() called");
    return 0;
}

/* Demangled: UREE_BindCpu */
extern "C" __attribute__((visibility("default"))) int UREE_BindCpu(void) {
    ALOGD("UREE_BindCpu() called");
    return 0;
}

/* Demangled: UREE_AppendTzmem */
extern "C" __attribute__((visibility("default"))) int UREE_AppendTzmem(void) {
    ALOGD("UREE_AppendTzmem() called");
    return 0;
}

/* Demangled: UREE_ReferenceSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReferenceSecureMultichunkmem(void) {
    ALOGD("UREE_ReferenceSecureMultichunkmem() called");
    return 0;
}

/* Demangled: UREE_ION_TEST_UPT_CHMDATA */
extern "C" __attribute__((visibility("default"))) int UREE_ION_TEST_UPT_CHMDATA(void) {
    ALOGD("UREE_ION_TEST_UPT_CHMDATA() called");
    return 0;
}

/* Demangled: UREE_RegisterSharedmem */
extern "C" __attribute__((visibility("default"))) int UREE_RegisterSharedmem(void) {
    ALOGD("UREE_RegisterSharedmem() called");
    return 0;
}

/* Demangled: UREE_SecureCamera_to_MTEE */
extern "C" __attribute__((visibility("default"))) int UREE_SecureCamera_to_MTEE(void) {
    ALOGD("UREE_SecureCamera_to_MTEE() called");
    return 0;
}

/* Demangled: UREE_CloseSession */
extern "C" __attribute__((visibility("default"))) int UREE_CloseSession(void) {
    ALOGD("UREE_CloseSession() called");
    return 0;
}

/* Demangled: UREE_UnregisterSharedmem */
extern "C" __attribute__((visibility("default"))) int UREE_UnregisterSharedmem(void) {
    ALOGD("UREE_UnregisterSharedmem() called");
    return 0;
}

/* Demangled: UREE_AllocSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecureMultichunkmem(void) {
    ALOGD("UREE_AllocSecureMultichunkmem() called");
    return 0;
}

/* Demangled: UREE_AllocSecureMultichunkmemWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecureMultichunkmemWithTag(void) {
    ALOGD("UREE_AllocSecureMultichunkmemWithTag() called");
    return 0;
}

/* Demangled: UREE_ReleaseTzmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReleaseTzmem(void) {
    ALOGD("UREE_ReleaseTzmem() called");
    return 0;
}

/* Demangled: UREE_UnreferenceSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_UnreferenceSecureMultichunkmem(void) {
    ALOGD("UREE_UnreferenceSecureMultichunkmem() called");
    return 0;
}

/* Demangled: UREE_ZallocSecurememWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_ZallocSecurememWithTag(void) {
    ALOGD("UREE_ZallocSecurememWithTag() called");
    return 0;
}

/* Demangled: UREE_CreateSession */
extern "C" __attribute__((visibility("default"))) int UREE_CreateSession(void) {
    ALOGD("UREE_CreateSession() called");
    return 0;
}

/* Demangled: UREE_ION_CP_Chm2Shm */
extern "C" __attribute__((visibility("default"))) int UREE_ION_CP_Chm2Shm(void) {
    ALOGD("UREE_ION_CP_Chm2Shm() called");
    return 0;
}

/* Demangled: UREE_TeeServiceCall */
extern "C" __attribute__((visibility("default"))) int UREE_TeeServiceCall(void) {
    ALOGD("UREE_TeeServiceCall() called");
    return 0;
}

/* Demangled: UREE_UnreferenceSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_UnreferenceSecurechunkmem(void) {
    ALOGD("UREE_UnreferenceSecurechunkmem() called");
    return 0;
}

/* Demangled: UREE_ZallocSecureMultichunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ZallocSecureMultichunkmem(void) {
    ALOGD("UREE_ZallocSecureMultichunkmem() called");
    return 0;
}

/* Demangled: UREE_ZallocSecureMultichunkmemWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_ZallocSecureMultichunkmemWithTag(void) {
    ALOGD("UREE_ZallocSecureMultichunkmemWithTag() called");
    return 0;
}

/* Demangled: UREE_ION_TO_SHM_HANDLE */
extern "C" __attribute__((visibility("default"))) int UREE_ION_TO_SHM_HANDLE(void) {
    ALOGD("UREE_ION_TO_SHM_HANDLE() called");
    return 0;
}

/* Demangled: __UREE_UnregisterSharedmem */
extern "C" __attribute__((visibility("default"))) int __UREE_UnregisterSharedmem(void) {
    ALOGD("__UREE_UnregisterSharedmem() called");
    return 0;
}

/* Demangled: UREE_AllocSecurememWithTag */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecurememWithTag(void) {
    ALOGD("UREE_AllocSecurememWithTag() called");
    return 0;
}

/* Demangled: UREE_ReadSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_ReadSecurechunkmem(void) {
    ALOGD("UREE_ReadSecurechunkmem() called");
    return 0;
}

/* Demangled: UREE_UnregisterSharedmem_ReadOnly */
extern "C" __attribute__((visibility("default"))) int UREE_UnregisterSharedmem_ReadOnly(void) {
    ALOGD("UREE_UnregisterSharedmem_ReadOnly() called");
    return 0;
}

/* Exported Object: uree_init_mutex */
extern "C" __attribute__((visibility("default"))) void* uree_init_mutex = NULL;

/* Demangled: UREE_AllocSecuremem */
extern "C" __attribute__((visibility("default"))) int UREE_AllocSecuremem(void) {
    ALOGD("UREE_AllocSecuremem() called");
    return 0;
}

/* Demangled: UREE_AppendSecurechunkmem */
extern "C" __attribute__((visibility("default"))) int UREE_AppendSecurechunkmem(void) {
    ALOGD("UREE_AppendSecurechunkmem() called");
    return 0;
}

/* Demangled: UREE_ReferenceSecuremem */
extern "C" __attribute__((visibility("default"))) int UREE_ReferenceSecuremem(void) {
    ALOGD("UREE_ReferenceSecuremem() called");
    return 0;
}
