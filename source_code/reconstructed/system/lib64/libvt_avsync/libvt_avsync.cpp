/*
 * Reverse-Engineered Source for: libvt_avsync.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libvt_avsync"

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
#include "libvt_avsync.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CCCI_IMSDC "/dev/ccci_imsdc"
#define DEV_DEV_WWAND0IMSDC "/dev/wwanD0IMSDC"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CCCI_IMSDC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CCCI_IMSDC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CCCI_IMSDC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_WWAND0IMSDC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_WWAND0IMSDC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_WWAND0IMSDC, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: VTService::VTAVSync::resetParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync10resetParamEv(void) {
    ALOGD("_ZN9VTService8VTAVSync10resetParamEv() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTAVSync */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService8VTAVSyncE = NULL;

/* Exported Object: VTService::g_pthreadDownlink */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService17g_pthreadDownlinkE = NULL;

/* Exported Object: VTService::g_lockAVsync */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService12g_lockAVsyncE = NULL;

/* Demangled: VTService::VTAVSync::~VTAVSync() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSyncD2Ev(void) {
    ALOGD("_ZN9VTService8VTAVSyncD2Ev() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::~VTAVSync() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSyncD0Ev(void) {
    ALOGD("_ZN9VTService8VTAVSyncD0Ev() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::VTAVSync() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSyncC1Ev(void) {
    ALOGD("_ZN9VTService8VTAVSyncC1Ev() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::checkFD() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync7checkFDEv(void) {
    ALOGD("_ZN9VTService8VTAVSync7checkFDEv() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::avInit() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync6avInitEv(void) {
    ALOGD("_ZN9VTService8VTAVSync6avInitEv() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::closeFD() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync7closeFDEv(void) {
    ALOGD("_ZN9VTService8VTAVSync7closeFDEv() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::HandleDLAVSync(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync14HandleDLAVSyncEPh(void) {
    ALOGD("_ZN9VTService8VTAVSync14HandleDLAVSyncEPh() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::openFD() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync6openFDEv(void) {
    ALOGD("_ZN9VTService8VTAVSync6openFDEv() called");
    return 0;
}

/* Exported Object: VTService::g_bAVSyncDownlinkThreadRunning */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService30g_bAVSyncDownlinkThreadRunningE = NULL;

/* Demangled: VTService::VTAVSync::initFD() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync6initFDEv(void) {
    ALOGD("_ZN9VTService8VTAVSync6initFDEv() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::writeFD(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync7writeFDEiPvi(void) {
    ALOGD("_ZN9VTService8VTAVSync7writeFDEiPvi() called");
    return 0;
}

/* Demangled: VTService::VTAVSync::VTAVSync() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSyncC2Ev(void) {
    ALOGD("_ZN9VTService8VTAVSyncC2Ev() called");
    return 0;
}

/* Exported Object: VTService::VTAVSync::mAV */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService8VTAVSync3mAVE = NULL;

/* Exported Object: VTService::g_fd_name */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9g_fd_nameE = NULL;

/* Demangled: VTService::VTAVSync::downlinkThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync14downlinkThreadEPv(void) {
    ALOGD("_ZN9VTService8VTAVSync14downlinkThreadEPv() called");
    return 0;
}

/* Exported Object: VTService::g_fd_avsync */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService11g_fd_avsyncE = NULL;

/* Demangled: VTService::VTAVSync::~VTAVSync() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSyncD1Ev(void) {
    ALOGD("_ZN9VTService8VTAVSyncD1Ev() called");
    return 0;
}

/* Exported Object: VTService::g_thin_md_mode */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService14g_thin_md_modeE = NULL;

/* Exported Object: VTService::g_poll_cnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10g_poll_cntE = NULL;

/* Exported Object: VTService::g_poll_fds */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10g_poll_fdsE = NULL;

/* Demangled: VTService::VTAVSync::getDLAudioTimeStamp(long*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTAVSync19getDLAudioTimeStampEPl(void) {
    ALOGD("_ZN9VTService8VTAVSync19getDLAudioTimeStampEPl() called");
    return 0;
}
