/*
 * Reverse-Engineered Source for: libmtkcam_modulefactory_feature.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_modulefactory_feature"

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
#include "libmtkcam_modulefactory_feature.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MtkCam_getModuleFactory_feature */
extern "C" __attribute__((visibility("default"))) int MtkCam_getModuleFactory_feature(void) {
    ALOGD("MtkCam_getModuleFactory_feature() called");
    return 0;
}

/* Demangled: register_mtkcam_module(mtkcam_module_info const*, NSCam::Int2Type<2>) */
extern "C" __attribute__((visibility("default"))) int _Z22register_mtkcam_modulePK18mtkcam_module_infoN5NSCam8Int2TypeILi2EEE(void) {
    ALOGD("_Z22register_mtkcam_modulePK18mtkcam_module_infoN5NSCam8Int2TypeILi2EEE() called");
    return 0;
}
