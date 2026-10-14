/*
 * Reverse-Engineered Source for: libaudiopreprocessing_mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaudiopreprocessing_mtk"

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
#include "libaudiopreprocessing_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Agc2Enable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10Agc2EnableP16preproc_effect_s(void) {
    ALOGD("_Z10Agc2EnableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: ProcIdToUuid(int) */
extern "C" __attribute__((visibility("default"))) int _Z12ProcIdToUuidi(void) {
    ALOGD("_Z12ProcIdToUuidi() called");
    return 0;
}

/* Demangled: NsGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z14NsGetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z14NsGetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: Session_SetReverseConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Demangled: PreProcessingFx_Command */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_Command(void) {
    ALOGD("PreProcessingFx_Command() called");
    return 0;
}

/* Demangled: Effect_SetState(preproc_effect_s*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15Effect_SetStateP16preproc_effect_sj(void) {
    ALOGD("_Z15Effect_SetStateP16preproc_effect_sj() called");
    return 0;
}

/* Demangled: PreProcessingLib_Create */
extern "C" __attribute__((visibility("default"))) int PreProcessingLib_Create(void) {
    ALOGD("PreProcessingLib_Create() called");
    return 0;
}

/* Demangled: PreProcessingLib_GetDescriptor */
extern "C" __attribute__((visibility("default"))) int PreProcessingLib_GetDescriptor(void) {
    ALOGD("PreProcessingLib_GetDescriptor() called");
    return 0;
}

/* Demangled: AgcGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AgcGetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z15AgcGetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: PreProc_GetDescriptor(audio_uuid_s const*) */
extern "C" __attribute__((visibility("default"))) int _Z21PreProc_GetDescriptorPK12audio_uuid_s(void) {
    ALOGD("_Z21PreProc_GetDescriptorPK12audio_uuid_s() called");
    return 0;
}

/* Demangled: AgcInit(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z7AgcInitP16preproc_effect_s(void) {
    ALOGD("_Z7AgcInitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: AgcCreate(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AgcCreateP16preproc_effect_s(void) {
    ALOGD("_Z9AgcCreateP16preproc_effect_s() called");
    return 0;
}

/* Exported Object: AELI */
extern "C" __attribute__((visibility("default"))) void* AELI = NULL;

/* Demangled: PreProcessingFx_GetDescriptor */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_GetDescriptor(void) {
    ALOGD("PreProcessingFx_GetDescriptor() called");
    return 0;
}

/* Demangled: HasReverseStream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16HasReverseStreamj(void) {
    ALOGD("_Z16HasReverseStreamj() called");
    return 0;
}

/* Demangled: Session_SetProcEnabled(preproc_session_s*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z22Session_SetProcEnabledP17preproc_session_sjb(void) {
    ALOGD("_Z22Session_SetProcEnabledP17preproc_session_sjb() called");
    return 0;
}

/* Demangled: AecInit(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z7AecInitP16preproc_effect_s(void) {
    ALOGD("_Z7AecInitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: AecEnable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AecEnableP16preproc_effect_s(void) {
    ALOGD("_Z9AecEnableP16preproc_effect_s() called");
    return 0;
}

/* Exported Object: sEffectInterface */
extern "C" __attribute__((visibility("default"))) void* sEffectInterface = NULL;

/* Demangled: PreProcessingFx_Process */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_Process(void) {
    ALOGD("PreProcessingFx_Process() called");
    return 0;
}

/* Demangled: Agc2Create(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10Agc2CreateP16preproc_effect_s(void) {
    ALOGD("_Z10Agc2CreateP16preproc_effect_s() called");
    return 0;
}

/* Demangled: Agc2Disable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z11Agc2DisableP16preproc_effect_s(void) {
    ALOGD("_Z11Agc2DisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: Session_Init(preproc_session_s*) */
extern "C" __attribute__((visibility("default"))) int _Z12Session_InitP17preproc_session_s(void) {
    ALOGD("_Z12Session_InitP17preproc_session_s() called");
    return 0;
}

/* Demangled: UuidToProcId(audio_uuid_s const*) */
extern "C" __attribute__((visibility("default"))) int _Z12UuidToProcIdPK12audio_uuid_s(void) {
    ALOGD("_Z12UuidToProcIdPK12audio_uuid_s() called");
    return 0;
}

/* Demangled: Effect_Create(preproc_effect_s*, preproc_session_s*, effect_interface_s***) */
extern "C" __attribute__((visibility("default"))) int _Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s(void) {
    ALOGD("_Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s() called");
    return 0;
}

/* Demangled: AgcSetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AgcSetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z15AgcSetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: Agc2SetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z16Agc2SetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z16Agc2SetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: Session_ReleaseEffect(preproc_session_s*, preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s(void) {
    ALOGD("_Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s() called");
    return 0;
}

/* Demangled: NsDisable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9NsDisableP16preproc_effect_s(void) {
    ALOGD("_Z9NsDisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: AecSetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AecSetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z15AecSetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: Agc2GetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z16Agc2GetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z16Agc2GetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: Effect_Release(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z14Effect_ReleaseP16preproc_effect_s(void) {
    ALOGD("_Z14Effect_ReleaseP16preproc_effect_s() called");
    return 0;
}

/* Demangled: NsInit(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z6NsInitP16preproc_effect_s(void) {
    ALOGD("_Z6NsInitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: NsEnable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z8NsEnableP16preproc_effect_s(void) {
    ALOGD("_Z8NsEnableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: PreProcessingLib_Release */
extern "C" __attribute__((visibility("default"))) int PreProcessingLib_Release(void) {
    ALOGD("PreProcessingLib_Release() called");
    return 0;
}

/* Demangled: AecGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15AecGetParameterP16preproc_effect_sPvPjS1_(void) {
    ALOGD("_Z15AecGetParameterP16preproc_effect_sPvPjS1_() called");
    return 0;
}

/* Demangled: Session_GetReverseConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Demangled: AecCreate(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AecCreateP16preproc_effect_s(void) {
    ALOGD("_Z9AecCreateP16preproc_effect_s() called");
    return 0;
}

/* Demangled: AgcDisable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10AgcDisableP16preproc_effect_s(void) {
    ALOGD("_Z10AgcDisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: PreProc_GetSession(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18PreProc_GetSessioniii(void) {
    ALOGD("_Z18PreProc_GetSessioniii() called");
    return 0;
}

/* Demangled: AecDisable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z10AecDisableP16preproc_effect_s(void) {
    ALOGD("_Z10AecDisableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: Effect_Init(preproc_effect_s*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11Effect_InitP16preproc_effect_sj(void) {
    ALOGD("_Z11Effect_InitP16preproc_effect_sj() called");
    return 0;
}

/* Demangled: Session_SetConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z17Session_SetConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z17Session_SetConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Demangled: NsCreate(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z8NsCreateP16preproc_effect_s(void) {
    ALOGD("_Z8NsCreateP16preproc_effect_s() called");
    return 0;
}

/* Demangled: AecSetDevice(preproc_effect_s*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z12AecSetDeviceP16preproc_effect_sj(void) {
    ALOGD("_Z12AecSetDeviceP16preproc_effect_sj() called");
    return 0;
}

/* Demangled: PreProc_Init() */
extern "C" __attribute__((visibility("default"))) int _Z12PreProc_Initv(void) {
    ALOGD("_Z12PreProc_Initv() called");
    return 0;
}

/* Demangled: Agc2Init(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z8Agc2InitP16preproc_effect_s(void) {
    ALOGD("_Z8Agc2InitP16preproc_effect_s() called");
    return 0;
}

/* Demangled: AgcEnable(preproc_effect_s*) */
extern "C" __attribute__((visibility("default"))) int _Z9AgcEnableP16preproc_effect_s(void) {
    ALOGD("_Z9AgcEnableP16preproc_effect_s() called");
    return 0;
}

/* Demangled: PreProcessingFx_ProcessReverse */
extern "C" __attribute__((visibility("default"))) int PreProcessingFx_ProcessReverse(void) {
    ALOGD("PreProcessingFx_ProcessReverse() called");
    return 0;
}

/* Demangled: Session_CreateEffect */
extern "C" __attribute__((visibility("default"))) int Session_CreateEffect(void) {
    ALOGD("Session_CreateEffect() called");
    return 0;
}

/* Demangled: NsSetParameter(preproc_effect_s*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z14NsSetParameterP16preproc_effect_sPvS1_(void) {
    ALOGD("_Z14NsSetParameterP16preproc_effect_sPvS1_() called");
    return 0;
}

/* Demangled: Session_GetConfig(preproc_session_s*, effect_config_s*) */
extern "C" __attribute__((visibility("default"))) int _Z17Session_GetConfigP17preproc_session_sP15effect_config_s(void) {
    ALOGD("_Z17Session_GetConfigP17preproc_session_sP15effect_config_s() called");
    return 0;
}

/* Exported Object: sEffectInterfaceReverse */
extern "C" __attribute__((visibility("default"))) void* sEffectInterfaceReverse = NULL;
