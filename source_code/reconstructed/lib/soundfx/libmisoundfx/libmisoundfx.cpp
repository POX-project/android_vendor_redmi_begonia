/*
 * Reverse-Engineered Source for: libmisoundfx.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmisoundfx"

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
#include "libmisoundfx.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_SOCKET_AUDIO_HW_SOCKET "/dev/socket/audio_hw_socket"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_SOCKET_AUDIO_HW_SOCKET, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SOCKET_AUDIO_HW_SOCKET, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SOCKET_AUDIO_HW_SOCKET, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MiSound_process */
extern "C" __attribute__((visibility("default"))) int MiSound_process(void) {
    ALOGD("MiSound_process() called");
    return 0;
}

/* Demangled: MiSound_restoreEarsCompensationExample */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreEarsCompensationExample(void) {
    ALOGD("MiSound_restoreEarsCompensationExample() called");
    return 0;
}

/* Demangled: MiSound_saveEQ */
extern "C" __attribute__((visibility("default"))) int MiSound_saveEQ(void) {
    ALOGD("MiSound_saveEQ() called");
    return 0;
}

/* Demangled: MiSound_saveEarsCompensationState */
extern "C" __attribute__((visibility("default"))) int MiSound_saveEarsCompensationState(void) {
    ALOGD("MiSound_saveEarsCompensationState() called");
    return 0;
}

/* Demangled: MiSound_saveEarsEQLeft */
extern "C" __attribute__((visibility("default"))) int MiSound_saveEarsEQLeft(void) {
    ALOGD("MiSound_saveEarsEQLeft() called");
    return 0;
}

/* Demangled: MiSound_saveScenario */
extern "C" __attribute__((visibility("default"))) int MiSound_saveScenario(void) {
    ALOGD("MiSound_saveScenario() called");
    return 0;
}

/* Demangled: android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android25MiSoundSetParameterThreadD2Ev(void) {
    ALOGD("_ZN7android25MiSoundSetParameterThreadD2Ev() called");
    return 0;
}

/* Demangled: MiSound_restoreEarsEQLeft */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreEarsEQLeft(void) {
    ALOGD("MiSound_restoreEarsEQLeft() called");
    return 0;
}

/* Demangled: MiSound_restoreEffectEnable */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreEffectEnable(void) {
    ALOGD("MiSound_restoreEffectEnable() called");
    return 0;
}

/* Demangled: MiSound_restoreHeadset */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreHeadset(void) {
    ALOGD("MiSound_restoreHeadset() called");
    return 0;
}

/* Demangled: MiSound_saveHeadset */
extern "C" __attribute__((visibility("default"))) int MiSound_saveHeadset(void) {
    ALOGD("MiSound_saveHeadset() called");
    return 0;
}

/* Demangled: MiSound_saveSurroundLevel */
extern "C" __attribute__((visibility("default"))) int MiSound_saveSurroundLevel(void) {
    ALOGD("MiSound_saveSurroundLevel() called");
    return 0;
}

/* Demangled: MiSoundLib_Release */
extern "C" __attribute__((visibility("default"))) int MiSoundLib_Release(void) {
    ALOGD("MiSoundLib_Release() called");
    return 0;
}

/* Demangled: MiSound_getConfig */
extern "C" __attribute__((visibility("default"))) int MiSound_getConfig(void) {
    ALOGD("MiSound_getConfig() called");
    return 0;
}

/* Demangled: android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android25MiSoundSetParameterThreadD1Ev(void) {
    ALOGD("_ZN7android25MiSoundSetParameterThreadD1Ev() called");
    return 0;
}

/* Demangled: android::sp<android::MiSoundSetParameterThread>::operator=(android::MiSoundSetParameterThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_25MiSoundSetParameterThreadEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_25MiSoundSetParameterThreadEEaSEPS1_() called");
    return 0;
}

/* Exported Object: gPresetDSP_SPK */
extern "C" __attribute__((visibility("default"))) void* gPresetDSP_SPK = NULL;

/* Demangled: MiSoundLib_Create */
extern "C" __attribute__((visibility("default"))) int MiSoundLib_Create(void) {
    ALOGD("MiSoundLib_Create() called");
    return 0;
}

/* Demangled: MiSound_getHIFIState */
extern "C" __attribute__((visibility("default"))) int MiSound_getHIFIState(void) {
    ALOGD("MiSound_getHIFIState() called");
    return 0;
}

/* Demangled: MiSound_releaseAppId */
extern "C" __attribute__((visibility("default"))) int MiSound_releaseAppId(void) {
    ALOGD("MiSound_releaseAppId() called");
    return 0;
}

/* Demangled: MiSound_restoreEarsCompensationState */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreEarsCompensationState(void) {
    ALOGD("MiSound_restoreEarsCompensationState() called");
    return 0;
}

/* Demangled: MiSound_saveEarsCompensationExample */
extern "C" __attribute__((visibility("default"))) int MiSound_saveEarsCompensationExample(void) {
    ALOGD("MiSound_saveEarsCompensationExample() called");
    return 0;
}

/* Demangled: android::MiSoundSetParameterThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android25MiSoundSetParameterThread10threadLoopEv(void) {
    ALOGD("_ZN7android25MiSoundSetParameterThread10threadLoopEv() called");
    return 0;
}

/* Exported Object: gPresetDSP_HP */
extern "C" __attribute__((visibility("default"))) void* gPresetDSP_HP = NULL;

/* Demangled: MiSound_allocateAppId */
extern "C" __attribute__((visibility("default"))) int MiSound_allocateAppId(void) {
    ALOGD("MiSound_allocateAppId() called");
    return 0;
}

/* Demangled: MiSound_saveEffectEnable */
extern "C" __attribute__((visibility("default"))) int MiSound_saveEffectEnable(void) {
    ALOGD("MiSound_saveEffectEnable() called");
    return 0;
}

/* Demangled: android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
extern "C" __attribute__((visibility("default"))) int _ZN7android25MiSoundSetParameterThreadD0Ev(void) {
    ALOGD("_ZN7android25MiSoundSetParameterThreadD0Ev() called");
    return 0;
}

/* Exported Object: VTT for android::MiSoundSetParameterThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android25MiSoundSetParameterThreadE = NULL;

/* Demangled: MiSoundLib_QueryEffect */
extern "C" __attribute__((visibility("default"))) int MiSoundLib_QueryEffect(void) {
    ALOGD("MiSoundLib_QueryEffect() called");
    return 0;
}

/* Demangled: MiSound_restoreSurround */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreSurround(void) {
    ALOGD("MiSound_restoreSurround() called");
    return 0;
}

/* Demangled: android::MiSoundSetParameterThread::MiSoundSetParameterThread(android::setParamBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android25MiSoundSetParameterThreadC1EPNS_11setParamBufE(void) {
    ALOGD("_ZN7android25MiSoundSetParameterThreadC1EPNS_11setParamBufE() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::MiSoundSetParameterThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android25MiSoundSetParameterThreadE0_NS_6ThreadE = NULL;

/* Exported Object: gAppIdUsed */
extern "C" __attribute__((visibility("default"))) void* gAppIdUsed = NULL;

/* Exported Object: DSPVarFS */
extern "C" __attribute__((visibility("default"))) void* DSPVarFS = NULL;

/* Demangled: MiSound_command */
extern "C" __attribute__((visibility("default"))) int MiSound_command(void) {
    ALOGD("MiSound_command() called");
    return 0;
}

/* Demangled: MiSound_restoreEarsEQRight */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreEarsEQRight(void) {
    ALOGD("MiSound_restoreEarsEQRight() called");
    return 0;
}

/* Demangled: MiSound_saveMusicState */
extern "C" __attribute__((visibility("default"))) int MiSound_saveMusicState(void) {
    ALOGD("MiSound_saveMusicState() called");
    return 0;
}

/* Exported Object: vtable for android::MiSoundSetParameterThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android25MiSoundSetParameterThreadE = NULL;

/* Demangled: virtual thunk to android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android25MiSoundSetParameterThreadD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android25MiSoundSetParameterThreadD1Ev() called");
    return 0;
}

/* Demangled: MiSound_restoreEQ */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreEQ(void) {
    ALOGD("MiSound_restoreEQ() called");
    return 0;
}

/* Demangled: MiSound_saveVocalLevel */
extern "C" __attribute__((visibility("default"))) int MiSound_saveVocalLevel(void) {
    ALOGD("MiSound_saveVocalLevel() called");
    return 0;
}

/* Demangled: MiSound_updateState */
extern "C" __attribute__((visibility("default"))) int MiSound_updateState(void) {
    ALOGD("MiSound_updateState() called");
    return 0;
}

/* Demangled: MiSound_getDescriptor */
extern "C" __attribute__((visibility("default"))) int MiSound_getDescriptor(void) {
    ALOGD("MiSound_getDescriptor() called");
    return 0;
}

/* Demangled: android::MiSoundSetParameterThread::MiSoundSetParameterThread(android::setParamBuf*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android25MiSoundSetParameterThreadC2EPNS_11setParamBufE(void) {
    ALOGD("_ZN7android25MiSoundSetParameterThreadC2EPNS_11setParamBufE() called");
    return 0;
}

/* Exported Object: gMiSoundInterface */
extern "C" __attribute__((visibility("default"))) void* gMiSoundInterface = NULL;

/* Demangled: parameterInfoInit */
extern "C" __attribute__((visibility("default"))) int parameterInfoInit(void) {
    ALOGD("parameterInfoInit() called");
    return 0;
}

/* Demangled: MiSoundLib_GetDescriptor */
extern "C" __attribute__((visibility("default"))) int MiSoundLib_GetDescriptor(void) {
    ALOGD("MiSoundLib_GetDescriptor() called");
    return 0;
}

/* Demangled: MiSoundLib_QueryNumberEffects */
extern "C" __attribute__((visibility("default"))) int MiSoundLib_QueryNumberEffects(void) {
    ALOGD("MiSoundLib_QueryNumberEffects() called");
    return 0;
}

/* Demangled: MiSound_saveEarsEQRight */
extern "C" __attribute__((visibility("default"))) int MiSound_saveEarsEQRight(void) {
    ALOGD("MiSound_saveEarsEQRight() called");
    return 0;
}

/* Demangled: MiSound_saveMode */
extern "C" __attribute__((visibility("default"))) int MiSound_saveMode(void) {
    ALOGD("MiSound_saveMode() called");
    return 0;
}

/* Demangled: MiSound_setConfig */
extern "C" __attribute__((visibility("default"))) int MiSound_setConfig(void) {
    ALOGD("MiSound_setConfig() called");
    return 0;
}

/* Demangled: virtual thunk to android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android25MiSoundSetParameterThreadD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android25MiSoundSetParameterThreadD0Ev() called");
    return 0;
}

/* Exported Object: AELI */
extern "C" __attribute__((visibility("default"))) void* AELI = NULL;

/* Demangled: MiSound_restoreVocal */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreVocal(void) {
    ALOGD("MiSound_restoreVocal() called");
    return 0;
}

/* Demangled: MiSound_restoreMusicState */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreMusicState(void) {
    ALOGD("MiSound_restoreMusicState() called");
    return 0;
}

/* Demangled: MiSound_restoreScenario */
extern "C" __attribute__((visibility("default"))) int MiSound_restoreScenario(void) {
    ALOGD("MiSound_restoreScenario() called");
    return 0;
}

/* Demangled: MiSound_saveHIFIState */
extern "C" __attribute__((visibility("default"))) int MiSound_saveHIFIState(void) {
    ALOGD("MiSound_saveHIFIState() called");
    return 0;
}

/* Demangled: Misound_getDeviceIndex */
extern "C" __attribute__((visibility("default"))) int Misound_getDeviceIndex(void) {
    ALOGD("Misound_getDeviceIndex() called");
    return 0;
}
