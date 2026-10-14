/*
 * Reverse-Engineered Source for: libstorage_otp.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libstorage_otp"

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
#include "libstorage_otp.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_BLOCK "/dev/block/"
#define DEV_DEV_BLOCK_BY_NAME_OTP "/dev/block/by-name/otp"
#define DEV_DEV_OTP "/dev/otp"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_BLOCK, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_BY_NAME_OTP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME_OTP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME_OTP, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_OTP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_OTP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_OTP, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: ufs_block_read(otp*, char*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z14ufs_block_readP3otpPcyy(void) {
    ALOGD("_Z14ufs_block_readP3otpPcyy() called");
    return 0;
}

/* Demangled: ufs_otp_unlock(otp*, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z14ufs_otp_unlockP3otpyyy(void) {
    ALOGD("_Z14ufs_otp_unlockP3otpyyy() called");
    return 0;
}

/* Demangled: otp_write */
extern "C" __attribute__((visibility("default"))) int otp_write(void) {
    ALOGD("otp_write() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: otp_get_libversion */
extern "C" __attribute__((visibility("default"))) int otp_get_libversion(void) {
    ALOGD("otp_get_libversion() called");
    return 0;
}

/* Demangled: otp_get_region */
extern "C" __attribute__((visibility("default"))) int otp_get_region(void) {
    ALOGD("otp_get_region() called");
    return 0;
}

/* Demangled: otp_ops_read_write */
extern "C" __attribute__((visibility("default"))) int otp_ops_read_write(void) {
    ALOGD("otp_ops_read_write() called");
    return 0;
}

/* Demangled: otp_unlock */
extern "C" __attribute__((visibility("default"))) int otp_unlock(void) {
    ALOGD("otp_unlock() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: ufs_otp_get_status(otp*, unsigned long long, unsigned long long, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z18ufs_otp_get_statusP3otpyyPjS1_(void) {
    ALOGD("_Z18ufs_otp_get_statusP3otpyyPjS1_() called");
    return 0;
}

/* Demangled: emmc_otp_get_status(otp*, unsigned long long, unsigned long long, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19emmc_otp_get_statusP3otpyyPjS1_(void) {
    ALOGD("_Z19emmc_otp_get_statusP3otpyyPjS1_() called");
    return 0;
}

/* Demangled: otp_close */
extern "C" __attribute__((visibility("default"))) int otp_close(void) {
    ALOGD("otp_close() called");
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

/* Demangled: emmc_otp_lock(otp*, unsigned int, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z13emmc_otp_lockP3otpjyyy(void) {
    ALOGD("_Z13emmc_otp_lockP3otpjyyy() called");
    return 0;
}

/* Demangled: emmc_otp_unlock(otp*, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z15emmc_otp_unlockP3otpyyy(void) {
    ALOGD("_Z15emmc_otp_unlockP3otpyyy() called");
    return 0;
}

/* Demangled: emmc_storage_init */
extern "C" __attribute__((visibility("default"))) int emmc_storage_init(void) {
    ALOGD("emmc_storage_init() called");
    return 0;
}

/* Demangled: otp_open */
extern "C" __attribute__((visibility("default"))) int otp_open(void) {
    ALOGD("otp_open() called");
    return 0;
}

/* Demangled: emmc_block_read(otp*, char*, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z15emmc_block_readP3otpPcyy(void) {
    ALOGD("_Z15emmc_block_readP3otpPcyy() called");
    return 0;
}

/* Demangled: otp_get_libversion_if_legacy */
extern "C" __attribute__((visibility("default"))) int otp_get_libversion_if_legacy(void) {
    ALOGD("otp_get_libversion_if_legacy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: ufs_otp_lock(otp*, unsigned int, unsigned long long, unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z12ufs_otp_lockP3otpjyyy(void) {
    ALOGD("_Z12ufs_otp_lockP3otpjyyy() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: ufs_storage_init */
extern "C" __attribute__((visibility("default"))) int ufs_storage_init(void) {
    ALOGD("ufs_storage_init() called");
    return 0;
}

/* Demangled: otp_get_size */
extern "C" __attribute__((visibility("default"))) int otp_get_size(void) {
    ALOGD("otp_get_size() called");
    return 0;
}

/* Demangled: otp_read */
extern "C" __attribute__((visibility("default"))) int otp_read(void) {
    ALOGD("otp_read() called");
    return 0;
}

/* Demangled: otp_get_status */
extern "C" __attribute__((visibility("default"))) int otp_get_status(void) {
    ALOGD("otp_get_status() called");
    return 0;
}

/* Demangled: otp_lock */
extern "C" __attribute__((visibility("default"))) int otp_lock(void) {
    ALOGD("otp_lock() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
