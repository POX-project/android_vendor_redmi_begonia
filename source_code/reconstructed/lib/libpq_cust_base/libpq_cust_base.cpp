/*
 * Reverse-Engineered Source for: libpq_cust_base.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libpq_cust_base"

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
#include "libpq_cust_base.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: tdshpindex */
extern "C" __attribute__((visibility("default"))) void* tdshpindex = NULL;

/* Exported Object: iUltraRes_en */
extern "C" __attribute__((visibility("default"))) void* iUltraRes_en = NULL;

/* Exported Object: RszLevel */
extern "C" __attribute__((visibility("default"))) void* RszLevel = NULL;

/* Exported Object: BT709_c12 */
extern "C" __attribute__((visibility("default"))) void* BT709_c12 = NULL;

/* Demangled: checkVariableNames() */
extern "C" __attribute__((visibility("default"))) int _Z18checkVariableNamesv(void) {
    ALOGD("_Z18checkVariableNamesv() called");
    return 0;
}

/* Exported Object: secondary_pqindex */
extern "C" __attribute__((visibility("default"))) void* secondary_pqindex = NULL;

/* Exported Object: iDSRegEntry */
extern "C" __attribute__((visibility("default"))) void* iDSRegEntry = NULL;

/* Exported Object: iDRERegEntry */
extern "C" __attribute__((visibility("default"))) void* iDRERegEntry = NULL;

/* Exported Object: BT709_c00 */
extern "C" __attribute__((visibility("default"))) void* BT709_c00 = NULL;

/* Exported Object: BT709_c20 */
extern "C" __attribute__((visibility("default"))) void* BT709_c20 = NULL;

/* Exported Object: pqparam_mapping */
extern "C" __attribute__((visibility("default"))) void* pqparam_mapping = NULL;

/* Exported Object: pqparam_table */
extern "C" __attribute__((visibility("default"))) void* pqparam_table = NULL;

/* Exported Object: cust_gamma */
extern "C" __attribute__((visibility("default"))) void* cust_gamma = NULL;

/* Exported Object: RszEntrySWReg */
extern "C" __attribute__((visibility("default"))) void* RszEntrySWReg = NULL;

/* Exported Object: iDSHWRegEntry */
extern "C" __attribute__((visibility("default"))) void* iDSHWRegEntry = NULL;

/* Exported Object: BT709_c01 */
extern "C" __attribute__((visibility("default"))) void* BT709_c01 = NULL;

/* Exported Object: BT709_c21 */
extern "C" __attribute__((visibility("default"))) void* BT709_c21 = NULL;

/* Exported Object: iTdshpLevel */
extern "C" __attribute__((visibility("default"))) void* iTdshpLevel = NULL;

/* Exported Object: BT709_c02 */
extern "C" __attribute__((visibility("default"))) void* BT709_c02 = NULL;

/* Exported Object: BT709_c22 */
extern "C" __attribute__((visibility("default"))) void* BT709_c22 = NULL;

/* Exported Object: BT709_c10 */
extern "C" __attribute__((visibility("default"))) void* BT709_c10 = NULL;

/* Exported Object: primary_pqindex */
extern "C" __attribute__((visibility("default"))) void* primary_pqindex = NULL;

/* Exported Object: RszEntryHWReg */
extern "C" __attribute__((visibility("default"))) void* RszEntryHWReg = NULL;

/* Exported Object: BT709_c11 */
extern "C" __attribute__((visibility("default"))) void* BT709_c11 = NULL;

/* Exported Object: gamut_matrix_en */
extern "C" __attribute__((visibility("default"))) void* gamut_matrix_en = NULL;
