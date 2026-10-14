/*
 * Reverse-Engineered Source for: libaal_cust.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaal_cust"

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
#include "libaal_cust.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_MTK_DISP_MGR "/dev/mtk_disp_mgr"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_MTK_DISP_MGR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MTK_DISP_MGR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MTK_DISP_MGR, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: SmartBacklightRange */
extern "C" __attribute__((visibility("default"))) void* SmartBacklightRange = NULL;

/* Exported Object: BacklightBits */
extern "C" __attribute__((visibility("default"))) void* BacklightBits = NULL;

/* Exported Object: ReadabilityEnhancementMode */
extern "C" __attribute__((visibility("default"))) void* ReadabilityEnhancementMode = NULL;

/* Exported Object: ReadabilityOffOnChangeSpeed */
extern "C" __attribute__((visibility("default"))) void* ReadabilityOffOnChangeSpeed = NULL;

/* Exported Object: SupportEssLevelCtlByKernel */
extern "C" __attribute__((visibility("default"))) void* SupportEssLevelCtlByKernel = NULL;

/* Demangled: custInit */
extern "C" __attribute__((visibility("default"))) int custInit(void) {
    ALOGD("custInit() called");
    return 0;
}

/* Demangled: checkVariableNames */
extern "C" __attribute__((visibility("default"))) int checkVariableNames(void) {
    ALOGD("checkVariableNames() called");
    return 0;
}

/* Demangled: getLcmIndex */
extern "C" __attribute__((visibility("default"))) int getLcmIndex(void) {
    ALOGD("getLcmIndex() called");
    return 0;
}

/* Exported Object: ESSVorYHist1 */
extern "C" __attribute__((visibility("default"))) void* ESSVorYHist1 = NULL;

/* Exported Object: LowBLReadabilityLevel */
extern "C" __attribute__((visibility("default"))) void* LowBLReadabilityLevel = NULL;

/* Exported Object: SmartBacklightStrength */
extern "C" __attribute__((visibility("default"))) void* SmartBacklightStrength = NULL;

/* Exported Object: DREAliThd */
extern "C" __attribute__((visibility("default"))) void* DREAliThd = NULL;

/* Exported Object: ESSVorYHist2 */
extern "C" __attribute__((visibility("default"))) void* ESSVorYHist2 = NULL;

/* Exported Object: LcmGamma */
extern "C" __attribute__((visibility("default"))) void* LcmGamma = NULL;

/* Exported Object: ReadabilityOnOffChangeSpeed */
extern "C" __attribute__((visibility("default"))) void* ReadabilityOnOffChangeSpeed = NULL;

/* Exported Object: ReadabilityLevel */
extern "C" __attribute__((visibility("default"))) void* ReadabilityLevel = NULL;

/* Demangled: dimmingVirtual10ToPhysical12 */
extern "C" __attribute__((visibility("default"))) int dimmingVirtual10ToPhysical12(void) {
    ALOGD("dimmingVirtual10ToPhysical12() called");
    return 0;
}

/* Exported Object: ESS_alg_mode */
extern "C" __attribute__((visibility("default"))) void* ESS_alg_mode = NULL;

/* Exported Object: ReadabilityChangeDownSpeedForALI */
extern "C" __attribute__((visibility("default"))) void* ReadabilityChangeDownSpeedForALI = NULL;

/* Exported Object: SupportDreEnableCtlByKernel */
extern "C" __attribute__((visibility("default"))) void* SupportDreEnableCtlByKernel = NULL;

/* Exported Object: strenth_mode */
extern "C" __attribute__((visibility("default"))) void* strenth_mode = NULL;

/* Exported Object: ReadabilityChangeUpSpeedForALI */
extern "C" __attribute__((visibility("default"))) void* ReadabilityChangeUpSpeedForALI = NULL;

/* Exported Object: LCM_COUNT */
extern "C" __attribute__((visibility("default"))) void* LCM_COUNT = NULL;

/* Exported Object: AlsDebounceTime */
extern "C" __attribute__((visibility("default"))) void* AlsDebounceTime = NULL;

/* Exported Object: InitFunction */
extern "C" __attribute__((visibility("default"))) void* InitFunction = NULL;

/* Exported Object: MinOutBL */
extern "C" __attribute__((visibility("default"))) void* MinOutBL = NULL;
