/*
 * Reverse-Engineered ABI Specification for: libaudiopreprocessing_mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiopreprocessing_mtk.so
 */

#ifndef BEGONIA_RE_LIBAUDIOPREPROCESSING_MTK_H
#define BEGONIA_RE_LIBAUDIOPREPROCESSING_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z10Agc2EnableP16preproc_effect_s */
/* Demangled: Agc2Enable(preproc_effect_s*) */
int _Z10Agc2EnableP16preproc_effect_s(void);

/* Symbol: _Z12ProcIdToUuidi */
/* Demangled: ProcIdToUuid(int) */
int _Z12ProcIdToUuidi(void);

/* Symbol: _Z14NsGetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: NsGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z14NsGetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_SetReverseConfig(preproc_session_s*, effect_config_s*) */
int _Z24Session_SetReverseConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: PreProcessingFx_Command */
/* Demangled: PreProcessingFx_Command */
int PreProcessingFx_Command(void);

/* Symbol: _Z15Effect_SetStateP16preproc_effect_sj */
/* Demangled: Effect_SetState(preproc_effect_s*, unsigned int) */
int _Z15Effect_SetStateP16preproc_effect_sj(void);

/* Symbol: PreProcessingLib_Create */
/* Demangled: PreProcessingLib_Create */
int PreProcessingLib_Create(void);

/* Symbol: PreProcessingLib_GetDescriptor */
/* Demangled: PreProcessingLib_GetDescriptor */
int PreProcessingLib_GetDescriptor(void);

/* Symbol: _Z15AgcGetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: AgcGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z15AgcGetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _Z21PreProc_GetDescriptorPK12audio_uuid_s */
/* Demangled: PreProc_GetDescriptor(audio_uuid_s const*) */
int _Z21PreProc_GetDescriptorPK12audio_uuid_s(void);

/* Symbol: _Z7AgcInitP16preproc_effect_s */
/* Demangled: AgcInit(preproc_effect_s*) */
int _Z7AgcInitP16preproc_effect_s(void);

/* Symbol: _Z9AgcCreateP16preproc_effect_s */
/* Demangled: AgcCreate(preproc_effect_s*) */
int _Z9AgcCreateP16preproc_effect_s(void);

/* Symbol: AELI */
/* Demangled: AELI */
extern void* AELI;

/* Symbol: PreProcessingFx_GetDescriptor */
/* Demangled: PreProcessingFx_GetDescriptor */
int PreProcessingFx_GetDescriptor(void);

/* Symbol: _Z16HasReverseStreamj */
/* Demangled: HasReverseStream(unsigned int) */
int _Z16HasReverseStreamj(void);

/* Symbol: _Z22Session_SetProcEnabledP17preproc_session_sjb */
/* Demangled: Session_SetProcEnabled(preproc_session_s*, unsigned int, bool) */
int _Z22Session_SetProcEnabledP17preproc_session_sjb(void);

/* Symbol: _Z7AecInitP16preproc_effect_s */
/* Demangled: AecInit(preproc_effect_s*) */
int _Z7AecInitP16preproc_effect_s(void);

/* Symbol: _Z9AecEnableP16preproc_effect_s */
/* Demangled: AecEnable(preproc_effect_s*) */
int _Z9AecEnableP16preproc_effect_s(void);

/* Symbol: sEffectInterface */
/* Demangled: sEffectInterface */
extern void* sEffectInterface;

/* Symbol: PreProcessingFx_Process */
/* Demangled: PreProcessingFx_Process */
int PreProcessingFx_Process(void);

/* Symbol: _Z10Agc2CreateP16preproc_effect_s */
/* Demangled: Agc2Create(preproc_effect_s*) */
int _Z10Agc2CreateP16preproc_effect_s(void);

/* Symbol: _Z11Agc2DisableP16preproc_effect_s */
/* Demangled: Agc2Disable(preproc_effect_s*) */
int _Z11Agc2DisableP16preproc_effect_s(void);

/* Symbol: _Z12Session_InitP17preproc_session_s */
/* Demangled: Session_Init(preproc_session_s*) */
int _Z12Session_InitP17preproc_session_s(void);

/* Symbol: _Z12UuidToProcIdPK12audio_uuid_s */
/* Demangled: UuidToProcId(audio_uuid_s const*) */
int _Z12UuidToProcIdPK12audio_uuid_s(void);

/* Symbol: _Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s */
/* Demangled: Effect_Create(preproc_effect_s*, preproc_session_s*, effect_interface_s***) */
int _Z13Effect_CreateP16preproc_effect_sP17preproc_session_sPPP18effect_interface_s(void);

/* Symbol: _Z15AgcSetParameterP16preproc_effect_sPvS1_ */
/* Demangled: AgcSetParameter(preproc_effect_s*, void*, void*) */
int _Z15AgcSetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: _Z16Agc2SetParameterP16preproc_effect_sPvS1_ */
/* Demangled: Agc2SetParameter(preproc_effect_s*, void*, void*) */
int _Z16Agc2SetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: _Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s */
/* Demangled: Session_ReleaseEffect(preproc_session_s*, preproc_effect_s*) */
int _Z21Session_ReleaseEffectP17preproc_session_sP16preproc_effect_s(void);

/* Symbol: _Z9NsDisableP16preproc_effect_s */
/* Demangled: NsDisable(preproc_effect_s*) */
int _Z9NsDisableP16preproc_effect_s(void);

/* Symbol: _Z15AecSetParameterP16preproc_effect_sPvS1_ */
/* Demangled: AecSetParameter(preproc_effect_s*, void*, void*) */
int _Z15AecSetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: _Z16Agc2GetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: Agc2GetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z16Agc2GetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _Z14Effect_ReleaseP16preproc_effect_s */
/* Demangled: Effect_Release(preproc_effect_s*) */
int _Z14Effect_ReleaseP16preproc_effect_s(void);

/* Symbol: _Z6NsInitP16preproc_effect_s */
/* Demangled: NsInit(preproc_effect_s*) */
int _Z6NsInitP16preproc_effect_s(void);

/* Symbol: _Z8NsEnableP16preproc_effect_s */
/* Demangled: NsEnable(preproc_effect_s*) */
int _Z8NsEnableP16preproc_effect_s(void);

/* Symbol: PreProcessingLib_Release */
/* Demangled: PreProcessingLib_Release */
int PreProcessingLib_Release(void);

/* Symbol: _Z15AecGetParameterP16preproc_effect_sPvPjS1_ */
/* Demangled: AecGetParameter(preproc_effect_s*, void*, unsigned int*, void*) */
int _Z15AecGetParameterP16preproc_effect_sPvPjS1_(void);

/* Symbol: _Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_GetReverseConfig(preproc_session_s*, effect_config_s*) */
int _Z24Session_GetReverseConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: _Z9AecCreateP16preproc_effect_s */
/* Demangled: AecCreate(preproc_effect_s*) */
int _Z9AecCreateP16preproc_effect_s(void);

/* Symbol: _Z10AgcDisableP16preproc_effect_s */
/* Demangled: AgcDisable(preproc_effect_s*) */
int _Z10AgcDisableP16preproc_effect_s(void);

/* Symbol: _Z18PreProc_GetSessioniii */
/* Demangled: PreProc_GetSession(int, int, int) */
int _Z18PreProc_GetSessioniii(void);

/* Symbol: _Z10AecDisableP16preproc_effect_s */
/* Demangled: AecDisable(preproc_effect_s*) */
int _Z10AecDisableP16preproc_effect_s(void);

/* Symbol: _Z11Effect_InitP16preproc_effect_sj */
/* Demangled: Effect_Init(preproc_effect_s*, unsigned int) */
int _Z11Effect_InitP16preproc_effect_sj(void);

/* Symbol: _Z17Session_SetConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_SetConfig(preproc_session_s*, effect_config_s*) */
int _Z17Session_SetConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: _Z8NsCreateP16preproc_effect_s */
/* Demangled: NsCreate(preproc_effect_s*) */
int _Z8NsCreateP16preproc_effect_s(void);

/* Symbol: _Z12AecSetDeviceP16preproc_effect_sj */
/* Demangled: AecSetDevice(preproc_effect_s*, unsigned int) */
int _Z12AecSetDeviceP16preproc_effect_sj(void);

/* Symbol: _Z12PreProc_Initv */
/* Demangled: PreProc_Init() */
int _Z12PreProc_Initv(void);

/* Symbol: _Z8Agc2InitP16preproc_effect_s */
/* Demangled: Agc2Init(preproc_effect_s*) */
int _Z8Agc2InitP16preproc_effect_s(void);

/* Symbol: _Z9AgcEnableP16preproc_effect_s */
/* Demangled: AgcEnable(preproc_effect_s*) */
int _Z9AgcEnableP16preproc_effect_s(void);

/* Symbol: PreProcessingFx_ProcessReverse */
/* Demangled: PreProcessingFx_ProcessReverse */
int PreProcessingFx_ProcessReverse(void);

/* Symbol: Session_CreateEffect */
/* Demangled: Session_CreateEffect */
int Session_CreateEffect(void);

/* Symbol: _Z14NsSetParameterP16preproc_effect_sPvS1_ */
/* Demangled: NsSetParameter(preproc_effect_s*, void*, void*) */
int _Z14NsSetParameterP16preproc_effect_sPvS1_(void);

/* Symbol: _Z17Session_GetConfigP17preproc_session_sP15effect_config_s */
/* Demangled: Session_GetConfig(preproc_session_s*, effect_config_s*) */
int _Z17Session_GetConfigP17preproc_session_sP15effect_config_s(void);

/* Symbol: sEffectInterfaceReverse */
/* Demangled: sEffectInterfaceReverse */
extern void* sEffectInterfaceReverse;

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOPREPROCESSING_MTK_H */
