/*
 * Reverse-Engineered Source for: libnwk_opt_halwrap_vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libnwk_opt_halwrap_vendor"

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
#include "libnwk_opt_halwrap_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NwkOptHal_Wrap_notifyAppState_S */
extern "C" __attribute__((visibility("default"))) int NwkOptHal_Wrap_notifyAppState_S(void) {
    ALOGD("NwkOptHal_Wrap_notifyAppState_S() called");
    return 0;
}

/* Demangled: NwkOptHal_wrap_switch_game_mode_S */
extern "C" __attribute__((visibility("default"))) int NwkOptHal_wrap_switch_game_mode_S(void) {
    ALOGD("NwkOptHal_wrap_switch_game_mode_S() called");
    return 0;
}

/* Demangled: android::sp<NwkOptDeathRecipient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI20NwkOptDeathRecipientED2Ev(void) {
    ALOGD("_ZN7android2spI20NwkOptDeathRecipientED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NwkOptDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTV20NwkOptDeathRecipient = NULL;

/* Demangled: NwkOptHal_wrap_setDisplayViewport_S */
extern "C" __attribute__((visibility("default"))) int NwkOptHal_wrap_setDisplayViewport_S(void) {
    ALOGD("NwkOptHal_wrap_setDisplayViewport_S() called");
    return 0;
}

/* Demangled: android::sp<NwkOptDeathRecipient>::operator=(NwkOptDeathRecipient*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI20NwkOptDeathRecipientEaSEPS1_(void) {
    ALOGD("_ZN7android2spI20NwkOptDeathRecipientEaSEPS1_() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>::operator=(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEOS7_() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>::operator=(vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptEEaSEPS6_() called");
    return 0;
}
