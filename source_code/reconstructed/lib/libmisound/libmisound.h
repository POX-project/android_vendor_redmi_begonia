/*
 * Reverse-Engineered ABI Specification for: libmisound.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmisound.so
 */

#ifndef BEGONIA_RE_LIBMISOUND_H
#define BEGONIA_RE_LIBMISOUND_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: CMiSoundFX_Helper_ReadMem */
/* Demangled: CMiSoundFX_Helper_ReadMem */
int CMiSoundFX_Helper_ReadMem(void);

/* Symbol: Biquad_New */
/* Demangled: Biquad_New */
int Biquad_New(void);

/* Symbol: __floatsidf */
/* Demangled: __floatsidf */
int __floatsidf(void);

/* Symbol: _ZN18CMusicSimpleReverb7processEPfS0_ */
/* Demangled: CMusicSimpleReverb::process(float*, float*) */
int _ZN18CMusicSimpleReverb7processEPfS0_(void);

/* Symbol: _ZN7Allpass11getfeedbackEv */
/* Demangled: Allpass::getfeedback() */
int _ZN7Allpass11getfeedbackEv(void);

/* Symbol: Biquad_Process */
/* Demangled: Biquad_Process */
int Biquad_Process(void);

/* Symbol: CMusicIntFloat_Init */
/* Demangled: CMusicIntFloat_Init */
int CMusicIntFloat_Init(void);

/* Symbol: _ZN7Allpass9setbufferEPfi */
/* Demangled: Allpass::setbuffer(float*, int) */
int _ZN7Allpass9setbufferEPfi(void);

/* Symbol: CMiSoundFX_SetEqBandGains */
/* Demangled: CMiSoundFX_SetEqBandGains */
int CMiSoundFX_SetEqBandGains(void);

/* Symbol: CMiSoundFX_WA_Limit */
/* Demangled: CMiSoundFX_WA_Limit */
int CMiSoundFX_WA_Limit(void);

/* Symbol: CMusicLimiter_Init */
/* Demangled: CMusicLimiter_Init */
int CMusicLimiter_Init(void);

/* Symbol: _ZN17MiSoundFX_Utility9closeFileEv */
/* Demangled: MiSoundFX_Utility::closeFile() */
int _ZN17MiSoundFX_Utility9closeFileEv(void);

/* Symbol: CMusicEQ_ResetHistory */
/* Demangled: CMusicEQ_ResetHistory */
int CMusicEQ_ResetHistory(void);

/* Symbol: CMiSoundFX_GetModeType */
/* Demangled: CMiSoundFX_GetModeType */
int CMiSoundFX_GetModeType(void);

/* Symbol: CMusicFastConv_Init */
/* Demangled: CMusicFastConv_Init */
int CMusicFastConv_Init(void);

/* Symbol: kiss_fft_alloc */
/* Demangled: kiss_fft_alloc */
int kiss_fft_alloc(void);

/* Symbol: CMusicEQ_Process */
/* Demangled: CMusicEQ_Process */
int CMusicEQ_Process(void);

/* Symbol: CMusicLR4HighPass_New */
/* Demangled: CMusicLR4HighPass_New */
int CMusicLR4HighPass_New(void);

/* Symbol: CMusicPBE_SetParam */
/* Demangled: CMusicPBE_SetParam */
int CMusicPBE_SetParam(void);

/* Symbol: CMusicMBExpanderLR4_SetParam */
/* Demangled: CMusicMBExpanderLR4_SetParam */
int CMusicMBExpanderLR4_SetParam(void);

/* Symbol: CMusicIntFloat_Add */
/* Demangled: CMusicIntFloat_Add */
int CMusicIntFloat_Add(void);

/* Symbol: Biquad_ResetHistory */
/* Demangled: Biquad_ResetHistory */
int Biquad_ResetHistory(void);

/* Symbol: __nedf2 */
/* Demangled: __nedf2 */
int __nedf2(void);

/* Symbol: misound_arsi_set_debug_log_fp */
/* Demangled: misound_arsi_set_debug_log_fp */
int misound_arsi_set_debug_log_fp(void);

/* Symbol: misound_arsi_set_dl_mute */
/* Demangled: misound_arsi_set_dl_mute */
int misound_arsi_set_dl_mute(void);

/* Symbol: CMusicMBCompressorLR4_Process_Buffer */
/* Demangled: CMusicMBCompressorLR4_Process_Buffer */
int CMusicMBCompressorLR4_Process_Buffer(void);

/* Symbol: __aeabi_ddiv */
/* Demangled: __aeabi_ddiv */
int __aeabi_ddiv(void);

/* Symbol: CMusicLR4LowPass_SetFrequency */
/* Demangled: CMusicLR4LowPass_SetFrequency */
int CMusicLR4LowPass_SetFrequency(void);

/* Symbol: CMusicMBExpander_Reset */
/* Demangled: CMusicMBExpander_Reset */
int CMusicMBExpander_Reset(void);

/* Symbol: CMusicCompressor_Process_Buffer */
/* Demangled: CMusicCompressor_Process_Buffer */
int CMusicCompressor_Process_Buffer(void);

/* Symbol: CMusicMBCompressor_SetParam */
/* Demangled: CMusicMBCompressor_SetParam */
int CMusicMBCompressor_SetParam(void);

/* Symbol: _Z20SosIir_Delete_ScalesP20CMusicIirSos_State_t */
/* Demangled: SosIir_Delete_Scales(CMusicIirSos_State_t*) */
int _Z20SosIir_Delete_ScalesP20CMusicIirSos_State_t(void);

/* Symbol: CMusicLR4HighPass_ResetHistory */
/* Demangled: CMusicLR4HighPass_ResetHistory */
int CMusicLR4HighPass_ResetHistory(void);

/* Symbol: _Z25getFilterParamsFromBinMemjjP36tag_CMiSoundFX_FilterParamReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory */
/* Demangled: getFilterParamsFromBinMem(unsigned int, unsigned int, tag_CMiSoundFX_FilterParamReadStruct*, tag_MiSound_CMiSoundFX_BinFileMemory*) */
int _Z25getFilterParamsFromBinMemjjP36tag_CMiSoundFX_FilterParamReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory(void);

/* Symbol: misound_arsi_get_addr_value */
/* Demangled: misound_arsi_get_addr_value */
int misound_arsi_get_addr_value(void);

/* Symbol: IirSos_Process_Buffer_ScaleB0PreMult */
/* Demangled: IirSos_Process_Buffer_ScaleB0PreMult */
int IirSos_Process_Buffer_ScaleB0PreMult(void);

/* Symbol: CMusicLR4HighPass_Delete */
/* Demangled: CMusicLR4HighPass_Delete */
int CMusicLR4HighPass_Delete(void);

/* Symbol: _ZTSSt16invalid_argument */
/* Demangled: typeinfo name for std::invalid_argument */
extern void* _ZTSSt16invalid_argument;

/* Symbol: CMiSoundFX_GetReferenceCount */
/* Demangled: CMiSoundFX_GetReferenceCount */
int CMiSoundFX_GetReferenceCount(void);

/* Symbol: CMusicMBCompressor_Delete */
/* Demangled: CMusicMBCompressor_Delete */
int CMusicMBCompressor_Delete(void);

/* Symbol: _ZN4CombC1Ev */
/* Demangled: Comb::Comb() */
int _ZN4CombC1Ev(void);

/* Symbol: CMusicCompressor_Process */
/* Demangled: CMusicCompressor_Process */
int CMusicCompressor_Process(void);

/* Symbol: CMusicLimiter_Reset */
/* Demangled: CMusicLimiter_Reset */
int CMusicLimiter_Reset(void);

/* Symbol: _Z26CMiSoundFX_DeleteProcessorPvP22tag_CMiSound_Processor */
/* Demangled: CMiSoundFX_DeleteProcessor(void*, tag_CMiSound_Processor*) */
int _Z26CMiSoundFX_DeleteProcessorPvP22tag_CMiSound_Processor(void);

/* Symbol: CMusicLrMix_Process */
/* Demangled: CMusicLrMix_Process */
int CMusicLrMix_Process(void);

/* Symbol: CMusicPBE_Process_Buffer */
/* Demangled: CMusicPBE_Process_Buffer */
int CMusicPBE_Process_Buffer(void);

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: misound_arsi_update_param */
/* Demangled: misound_arsi_update_param */
int misound_arsi_update_param(void);

/* Symbol: CMusicDEQ_Init */
/* Demangled: CMusicDEQ_Init */
int CMusicDEQ_Init(void);

/* Symbol: _Z31CMiSoundFX_LoadModelMappingDataPvP29tag_MiSound_FileMemReadStruct */
/* Demangled: CMiSoundFX_LoadModelMappingData(void*, tag_MiSound_FileMemReadStruct*) */
int _Z31CMiSoundFX_LoadModelMappingDataPvP29tag_MiSound_FileMemReadStruct(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: __aeabi_dcmpge */
/* Demangled: __aeabi_dcmpge */
int __aeabi_dcmpge(void);

/* Symbol: _ZTISt16invalid_argument */
/* Demangled: typeinfo for std::invalid_argument */
extern void* _ZTISt16invalid_argument;

/* Symbol: _Z14seekBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemoryj */
/* Demangled: seekBinFileMem(tag_MiSound_CMiSoundFX_BinFileMemory*, unsigned int) */
int _Z14seekBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemoryj(void);

/* Symbol: CMusicMBCompressor_Reset */
/* Demangled: CMusicMBCompressor_Reset */
int CMusicMBCompressor_Reset(void);

/* Symbol: CMusicMBExpanderLR4_New */
/* Demangled: CMusicMBExpanderLR4_New */
int CMusicMBExpanderLR4_New(void);

/* Symbol: CMusicExpander_SetParam */
/* Demangled: CMusicExpander_SetParam */
int CMusicExpander_SetParam(void);

/* Symbol: IirSos_SetFilterCoefs */
/* Demangled: IirSos_SetFilterCoefs */
int IirSos_SetFilterCoefs(void);

/* Symbol: misound_arsi_process_dl_buf */
/* Demangled: misound_arsi_process_dl_buf */
int misound_arsi_process_dl_buf(void);

/* Symbol: CMusicPBE_Init */
/* Demangled: CMusicPBE_Init */
int CMusicPBE_Init(void);

/* Symbol: CMusicSmoothedValue_GetNextValue */
/* Demangled: CMusicSmoothedValue_GetNextValue */
int CMusicSmoothedValue_GetNextValue(void);

/* Symbol: _Z29CMiSoundFX_Resampler_LPF_InitPvi */
/* Demangled: CMiSoundFX_Resampler_LPF_Init(void*, int) */
int _Z29CMiSoundFX_Resampler_LPF_InitPvi(void);

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: _Z21CMiSoundFX_LoadConfigPvjPKcS1_ */
/* Demangled: CMiSoundFX_LoadConfig(void*, unsigned int, char const*, char const*) */
int _Z21CMiSoundFX_LoadConfigPvjPKcS1_(void);

/* Symbol: CMusicLR4LowPass_Delete */
/* Demangled: CMusicLR4LowPass_Delete */
int CMusicLR4LowPass_Delete(void);

/* Symbol: CMusicEQ_New */
/* Demangled: CMusicEQ_New */
int CMusicEQ_New(void);

/* Symbol: __aeabi_dcmpgt */
/* Demangled: __aeabi_dcmpgt */
int __aeabi_dcmpgt(void);

/* Symbol: misound_arsi_query_process_unit_bytes */
/* Demangled: misound_arsi_query_process_unit_bytes */
int misound_arsi_query_process_unit_bytes(void);

/* Symbol: misound_arsi_set_dl_digital_gain */
/* Demangled: misound_arsi_set_dl_digital_gain */
int misound_arsi_set_dl_digital_gain(void);

/* Symbol: CMusicMBExpanderLR4_Process_Buffer */
/* Demangled: CMusicMBExpanderLR4_Process_Buffer */
int CMusicMBExpanderLR4_Process_Buffer(void);

/* Symbol: kiss_fft_stride */
/* Demangled: kiss_fft_stride */
int kiss_fft_stride(void);

/* Symbol: __fixdfdi */
/* Demangled: __fixdfdi */
int __fixdfdi(void);

/* Symbol: _Z31CMiSoundFX_GetModePtrByModeTypePvPKc */
/* Demangled: CMiSoundFX_GetModePtrByModeType(void*, char const*) */
int _Z31CMiSoundFX_GetModePtrByModeTypePvPKc(void);

/* Symbol: _Z19CMusicEQ_InitializeP16CMusicEQ_State_t */
/* Demangled: CMusicEQ_Initialize(CMusicEQ_State_t*) */
int _Z19CMusicEQ_InitializeP16CMusicEQ_State_t(void);

/* Symbol: _ZN18CMusicSimpleReverb11getroomsizeEv */
/* Demangled: CMusicSimpleReverb::getroomsize() */
int _ZN18CMusicSimpleReverb11getroomsizeEv(void);

/* Symbol: CMiSoundFX_SetParams */
/* Demangled: CMiSoundFX_SetParams */
int CMiSoundFX_SetParams(void);

/* Symbol: CMiSoundFX_Helper_TellMemPos */
/* Demangled: CMiSoundFX_Helper_TellMemPos */
int CMiSoundFX_Helper_TellMemPos(void);

/* Symbol: _Z32CMiSoundFX_GetModePtrByModeIndexPvi */
/* Demangled: CMiSoundFX_GetModePtrByModeIndex(void*, int) */
int _Z32CMiSoundFX_GetModePtrByModeIndexPvi(void);

/* Symbol: CMusicResampler_Delete */
/* Demangled: CMusicResampler_Delete */
int CMusicResampler_Delete(void);

/* Symbol: _Z32CMusicSimpleReverb_ProcessBufferPfS_iPv */
/* Demangled: CMusicSimpleReverb_ProcessBuffer(float*, float*, int, void*) */
int _Z32CMusicSimpleReverb_ProcessBufferPfS_iPv(void);

/* Symbol: CMiSoundFX_GetParams */
/* Demangled: CMiSoundFX_GetParams */
int CMiSoundFX_GetParams(void);

/* Symbol: misound_arsi_load_param */
/* Demangled: misound_arsi_load_param */
int misound_arsi_load_param(void);

/* Symbol: CMiSoundFX_GetMovieModeEnable */
/* Demangled: CMiSoundFX_GetMovieModeEnable */
int CMiSoundFX_GetMovieModeEnable(void);

/* Symbol: CMiSoundFX_GetEqEnable */
/* Demangled: CMiSoundFX_GetEqEnable */
int CMiSoundFX_GetEqEnable(void);

/* Symbol: __gtdf2 */
/* Demangled: __gtdf2 */
int __gtdf2(void);

/* Symbol: _ZN4CombC2Ev */
/* Demangled: Comb::Comb() */
int _ZN4CombC2Ev(void);

/* Symbol: _ZN18CMusicSimpleReverb6setwetEf */
/* Demangled: CMusicSimpleReverb::setwet(float) */
int _ZN18CMusicSimpleReverb6setwetEf(void);

/* Symbol: _ZN17MiSoundFX_Utility7FileMemE */
/* Demangled: MiSoundFX_Utility::FileMem */
extern void* _ZN17MiSoundFX_Utility7FileMemE;

/* Symbol: _ZN18CMusicSimpleReverb7setdampEf */
/* Demangled: CMusicSimpleReverb::setdamp(float) */
int _ZN18CMusicSimpleReverb7setdampEf(void);

/* Symbol: CMusicFade_Init */
/* Demangled: CMusicFade_Init */
int CMusicFade_Init(void);

/* Symbol: _ZN17MiSoundFX_Utility5resFdE */
/* Demangled: MiSoundFX_Utility::resFd */
extern void* _ZN17MiSoundFX_Utility5resFdE;

/* Symbol: __ltdf2 */
/* Demangled: __ltdf2 */
int __ltdf2(void);

/* Symbol: __fixunsdfsi */
/* Demangled: __fixunsdfsi */
int __fixunsdfsi(void);

/* Symbol: CMusicEQ_Delete */
/* Demangled: CMusicEQ_Delete */
int CMusicEQ_Delete(void);

/* Symbol: CMusicSmoothedValue_IsSmoothing */
/* Demangled: CMusicSmoothedValue_IsSmoothing */
int CMusicSmoothedValue_IsSmoothing(void);

/* Symbol: _Z21SosIir_Delete_FiltersP20CMusicIirSos_State_t */
/* Demangled: SosIir_Delete_Filters(CMusicIirSos_State_t*) */
int _Z21SosIir_Delete_FiltersP20CMusicIirSos_State_t(void);

/* Symbol: CMusicMBCompressorLR4_Reset */
/* Demangled: CMusicMBCompressorLR4_Reset */
int CMusicMBCompressorLR4_Reset(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: CMusicExpander_Reset */
/* Demangled: CMusicExpander_Reset */
int CMusicExpander_Reset(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: CMusicLR4LowPass_Process */
/* Demangled: CMusicLR4LowPass_Process */
int CMusicLR4LowPass_Process(void);

/* Symbol: kiss_fftri */
/* Demangled: kiss_fftri */
int kiss_fftri(void);

/* Symbol: misound_arsi_get_key_value_pair */
/* Demangled: misound_arsi_get_key_value_pair */
int misound_arsi_get_key_value_pair(void);

/* Symbol: __aeabi_d2uiz */
/* Demangled: __aeabi_d2uiz */
int __aeabi_d2uiz(void);

/* Symbol: misound_arsi_set_ul_enhance */
/* Demangled: misound_arsi_set_ul_enhance */
int misound_arsi_set_ul_enhance(void);

/* Symbol: _Z25CMiSoundFX_SetConfigParamPvjPKcifP27tag_MiSound_CMiSoundFX_Mode */
/* Demangled: CMiSoundFX_SetConfigParam(void*, unsigned int, char const*, int, float, tag_MiSound_CMiSoundFX_Mode*) */
int _Z25CMiSoundFX_SetConfigParamPvjPKcifP27tag_MiSound_CMiSoundFX_Mode(void);

/* Symbol: _ZN18CMusicSimpleReverb6getwetEv */
/* Demangled: CMusicSimpleReverb::getwet() */
int _ZN18CMusicSimpleReverb6getwetEv(void);

/* Symbol: _ZN4Comb4muteEv */
/* Demangled: Comb::mute() */
int _ZN4Comb4muteEv(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: CMusicSmoothedValue_SetValue */
/* Demangled: CMusicSmoothedValue_SetValue */
int CMusicSmoothedValue_SetValue(void);

/* Symbol: CMusicMBExpander_Delete */
/* Demangled: CMusicMBExpander_Delete */
int CMusicMBExpander_Delete(void);

/* Symbol: _ZN17MiSoundFX_Utility11resFileSizeE */
/* Demangled: MiSoundFX_Utility::resFileSize */
extern void* _ZN17MiSoundFX_Utility11resFileSizeE;

/* Symbol: IirSos_Process */
/* Demangled: IirSos_Process */
int IirSos_Process(void);

/* Symbol: _ZN18CMusicSimpleReverb7getdampEv */
/* Demangled: CMusicSimpleReverb::getdamp() */
int _ZN18CMusicSimpleReverb7getdampEv(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: CMiSoundFX_SetMusicModeEnable */
/* Demangled: CMiSoundFX_SetMusicModeEnable */
int CMiSoundFX_SetMusicModeEnable(void);

/* Symbol: misound_arsi_process_ul_buf */
/* Demangled: misound_arsi_process_ul_buf */
int misound_arsi_process_ul_buf(void);

/* Symbol: _Z29CMiSoundFX_UpdateUserEQStatusPv */
/* Demangled: CMiSoundFX_UpdateUserEQStatus(void*) */
int _Z29CMiSoundFX_UpdateUserEQStatusPv(void);

/* Symbol: CMusicDEQ_Process_Buffer */
/* Demangled: CMusicDEQ_Process_Buffer */
int CMusicDEQ_Process_Buffer(void);

/* Symbol: CMusicExpander_Process_Buffer */
/* Demangled: CMusicExpander_Process_Buffer */
int CMusicExpander_Process_Buffer(void);

/* Symbol: Biquad_CalcCoeff */
/* Demangled: Biquad_CalcCoeff */
int Biquad_CalcCoeff(void);

/* Symbol: IirSos_Process_Buffer */
/* Demangled: IirSos_Process_Buffer */
int IirSos_Process_Buffer(void);

/* Symbol: CMusicResampler_DownSample */
/* Demangled: CMusicResampler_DownSample */
int CMusicResampler_DownSample(void);

/* Symbol: _Z25CMiSoundFX_LoadModeConfigPvjPKcP29tag_MiSound_FileMemReadStruct */
/* Demangled: CMiSoundFX_LoadModeConfig(void*, unsigned int, char const*, tag_MiSound_FileMemReadStruct*) */
int _Z25CMiSoundFX_LoadModeConfigPvjPKcP29tag_MiSound_FileMemReadStruct(void);

/* Symbol: __fixunsdfdi */
/* Demangled: __fixunsdfdi */
int __fixunsdfdi(void);

/* Symbol: CMiSoundFX_SetEnable */
/* Demangled: CMiSoundFX_SetEnable */
int CMiSoundFX_SetEnable(void);

/* Symbol: CMusicLimiter_Delete */
/* Demangled: CMusicLimiter_Delete */
int CMusicLimiter_Delete(void);

/* Symbol: CMusicMBExpander_SetParam */
/* Demangled: CMusicMBExpander_SetParam */
int CMusicMBExpander_SetParam(void);

/* Symbol: Biquad_SetCoefsDirectly */
/* Demangled: Biquad_SetCoefsDirectly */
int Biquad_SetCoefsDirectly(void);

/* Symbol: _ZN18CMusicSimpleReverb4muteEv */
/* Demangled: CMusicSimpleReverb::mute() */
int _ZN18CMusicSimpleReverb4muteEv(void);

/* Symbol: _ZN18CMusicSimpleReverb8setwidthEf */
/* Demangled: CMusicSimpleReverb::setwidth(float) */
int _ZN18CMusicSimpleReverb8setwidthEf(void);

/* Symbol: CMiSoundFX_GetEnable */
/* Demangled: CMiSoundFX_GetEnable */
int CMiSoundFX_GetEnable(void);

/* Symbol: CMusicFastConv_Delete */
/* Demangled: CMusicFastConv_Delete */
int CMusicFastConv_Delete(void);

/* Symbol: __aeabi_d2lz */
/* Demangled: __aeabi_d2lz */
int __aeabi_d2lz(void);

/* Symbol: _Z29CMusicPBE_Process_Buffer_NeonPfiPv */
/* Demangled: CMusicPBE_Process_Buffer_Neon(float*, int, void*) */
int _Z29CMusicPBE_Process_Buffer_NeonPfiPv(void);

/* Symbol: misound_arsi_parsing_param_file_by_custom_info */
/* Demangled: misound_arsi_parsing_param_file_by_custom_info */
int misound_arsi_parsing_param_file_by_custom_info(void);

/* Symbol: _Z21CMiSoundFX_InitModulePvjPKcifP27tag_MiSound_CMiSoundFX_ModeP29tag_MiSound_FileMemReadStruct */
/* Demangled: CMiSoundFX_InitModule(void*, unsigned int, char const*, int, float, tag_MiSound_CMiSoundFX_Mode*, tag_MiSound_FileMemReadStruct*) */
int _Z21CMiSoundFX_InitModulePvjPKcifP27tag_MiSound_CMiSoundFX_ModeP29tag_MiSound_FileMemReadStruct(void);

/* Symbol: _Z33CMusicMBExpander_SetCrossOverFreqifP24CMusicMBExpander_State_t */
/* Demangled: CMusicMBExpander_SetCrossOverFreq(int, float, CMusicMBExpander_State_t*) */
int _Z33CMusicMBExpander_SetCrossOverFreqifP24CMusicMBExpander_State_t(void);

/* Symbol: _ZN18CMusicSimpleReverb6setdryEf */
/* Demangled: CMusicSimpleReverb::setdry(float) */
int _ZN18CMusicSimpleReverb6setdryEf(void);

/* Symbol: _ZN4Comb11getfeedbackEv */
/* Demangled: Comb::getfeedback() */
int _ZN4Comb11getfeedbackEv(void);

/* Symbol: CMiSoundFX_PrepareToStartFX */
/* Demangled: CMiSoundFX_PrepareToStartFX */
int CMiSoundFX_PrepareToStartFX(void);

/* Symbol: CMusicDEQ_Reset */
/* Demangled: CMusicDEQ_Reset */
int CMusicDEQ_Reset(void);

/* Symbol: CMusicFastConv_ReadFileParams */
/* Demangled: CMusicFastConv_ReadFileParams */
int CMusicFastConv_ReadFileParams(void);

/* Symbol: CMusicLR4HighPass_SetFrequency */
/* Demangled: CMusicLR4HighPass_SetFrequency */
int CMusicLR4HighPass_SetFrequency(void);

/* Symbol: CMusicPBE_Process_OnlyNonlinear_Feedback */
/* Demangled: CMusicPBE_Process_OnlyNonlinear_Feedback */
int CMusicPBE_Process_OnlyNonlinear_Feedback(void);

/* Symbol: CMusicExpander_Process */
/* Demangled: CMusicExpander_Process */
int CMusicExpander_Process(void);

/* Symbol: kiss_fftr_alloc */
/* Demangled: kiss_fftr_alloc */
int kiss_fftr_alloc(void);

/* Symbol: CMusicLrMix_Init */
/* Demangled: CMusicLrMix_Init */
int CMusicLrMix_Init(void);

/* Symbol: _Z14readBinFileMemPvjjP36tag_MiSound_CMiSoundFX_BinFileMemory */
/* Demangled: readBinFileMem(void*, unsigned int, unsigned int, tag_MiSound_CMiSoundFX_BinFileMemory*) */
int _Z14readBinFileMemPvjjP36tag_MiSound_CMiSoundFX_BinFileMemory(void);

/* Symbol: __aeabi_f2d */
/* Demangled: __aeabi_f2d */
int __aeabi_f2d(void);

/* Symbol: CMusicLimiter_ProcessSample */
/* Demangled: CMusicLimiter_ProcessSample */
int CMusicLimiter_ProcessSample(void);

/* Symbol: _ZN7Allpass11setfeedbackEf */
/* Demangled: Allpass::setfeedback(float) */
int _ZN7Allpass11setfeedbackEf(void);

/* Symbol: _ZN18CMusicSimpleReverb6getdryEv */
/* Demangled: CMusicSimpleReverb::getdry() */
int _ZN18CMusicSimpleReverb6getdryEv(void);

/* Symbol: CMusicGain_Process */
/* Demangled: CMusicGain_Process */
int CMusicGain_Process(void);

/* Symbol: CMusicPBE_Delete */
/* Demangled: CMusicPBE_Delete */
int CMusicPBE_Delete(void);

/* Symbol: __divdf3 */
/* Demangled: __divdf3 */
int __divdf3(void);

/* Symbol: misound_arsi_query_param_buf_size_by_custom_info */
/* Demangled: misound_arsi_query_param_buf_size_by_custom_info */
int misound_arsi_query_param_buf_size_by_custom_info(void);

/* Symbol: _Z4NLD3fP17CMusicPBE_State_t */
/* Demangled: NLD3(float, CMusicPBE_State_t*) */
int _Z4NLD3fP17CMusicPBE_State_t(void);

/* Symbol: CMusicMBExpander_New */
/* Demangled: CMusicMBExpander_New */
int CMusicMBExpander_New(void);

/* Symbol: __muldf3 */
/* Demangled: __muldf3 */
int __muldf3(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: IirSos_Process_Buffer_Fix */
/* Demangled: IirSos_Process_Buffer_Fix */
int IirSos_Process_Buffer_Fix(void);

/* Symbol: CMusicMBCompressorLR4_Delete */
/* Demangled: CMusicMBCompressorLR4_Delete */
int CMusicMBCompressorLR4_Delete(void);

/* Symbol: _Z4NLD4fP17CMusicPBE_State_t */
/* Demangled: NLD4(float, CMusicPBE_State_t*) */
int _Z4NLD4fP17CMusicPBE_State_t(void);

/* Symbol: kiss_fft */
/* Demangled: kiss_fft */
int kiss_fft(void);

/* Symbol: IirSos_Delete */
/* Demangled: IirSos_Delete */
int IirSos_Delete(void);

/* Symbol: CMusicLR4HighPass_Process */
/* Demangled: CMusicLR4HighPass_Process */
int CMusicLR4HighPass_Process(void);

/* Symbol: _Z4NLD5fP17CMusicPBE_State_t */
/* Demangled: NLD5(float, CMusicPBE_State_t*) */
int _Z4NLD5fP17CMusicPBE_State_t(void);

/* Symbol: _ZN4Comb7setdampEf */
/* Demangled: Comb::setdamp(float) */
int _ZN4Comb7setdampEf(void);

/* Symbol: Biquad_Process_ScaleB0PreMult */
/* Demangled: Biquad_Process_ScaleB0PreMult */
int Biquad_Process_ScaleB0PreMult(void);

/* Symbol: CMusicDEQ_SetParam */
/* Demangled: CMusicDEQ_SetParam */
int CMusicDEQ_SetParam(void);

/* Symbol: CMusicPBE_Process_OnlyNLD */
/* Demangled: CMusicPBE_Process_OnlyNLD */
int CMusicPBE_Process_OnlyNLD(void);

/* Symbol: CMiSoundFX_GetEqBandGains */
/* Demangled: CMiSoundFX_GetEqBandGains */
int CMiSoundFX_GetEqBandGains(void);

/* Symbol: CMusicEQ_SetFilterParam */
/* Demangled: CMusicEQ_SetFilterParam */
int CMusicEQ_SetFilterParam(void);

/* Symbol: _Z22CMusicResampler_Interpfffff */
/* Demangled: CMusicResampler_Interp(float, float, float, float, float) */
int _Z22CMusicResampler_Interpfffff(void);

/* Symbol: misound_arsi_reset_handler */
/* Demangled: misound_arsi_reset_handler */
int misound_arsi_reset_handler(void);

/* Symbol: misound_arsi_set_ul_mute */
/* Demangled: misound_arsi_set_ul_mute */
int misound_arsi_set_ul_mute(void);

/* Symbol: CMusicFade_Process */
/* Demangled: CMusicFade_Process */
int CMusicFade_Process(void);

/* Symbol: CMusicPBE_Reset */
/* Demangled: CMusicPBE_Reset */
int CMusicPBE_Reset(void);

/* Symbol: _ZN7Allpass4muteEv */
/* Demangled: Allpass::mute() */
int _ZN7Allpass4muteEv(void);

/* Symbol: __extendsfdf2 */
/* Demangled: __extendsfdf2 */
int __extendsfdf2(void);

/* Symbol: CMusicFastConv_LoadData */
/* Demangled: CMusicFastConv_LoadData */
int CMusicFastConv_LoadData(void);

/* Symbol: CMusicMBCompressor_Process_Buffer */
/* Demangled: CMusicMBCompressor_Process_Buffer */
int CMusicMBCompressor_Process_Buffer(void);

/* Symbol: CMusicSmoothedValue_Reset */
/* Demangled: CMusicSmoothedValue_Reset */
int CMusicSmoothedValue_Reset(void);

/* Symbol: CMiSoundFX_WA_Limit_Restore */
/* Demangled: CMiSoundFX_WA_Limit_Restore */
int CMiSoundFX_WA_Limit_Restore(void);

/* Symbol: _Z17SosIir_InitializeP20CMusicIirSos_State_t */
/* Demangled: SosIir_Initialize(CMusicIirSos_State_t*) */
int _Z17SosIir_InitializeP20CMusicIirSos_State_t(void);

/* Symbol: __adddf3 */
/* Demangled: __adddf3 */
int __adddf3(void);

/* Symbol: _ZN17MiSoundFX_Utility8openFileEv */
/* Demangled: MiSoundFX_Utility::openFile() */
int _ZN17MiSoundFX_Utility8openFileEv(void);

/* Symbol: __aeabi_drsub */
/* Demangled: __aeabi_drsub */
int __aeabi_drsub(void);

/* Symbol: CMiSoundFX_SetHeadphone */
/* Demangled: CMiSoundFX_SetHeadphone */
int CMiSoundFX_SetHeadphone(void);

/* Symbol: __aeabi_cdcmple */
/* Demangled: __aeabi_cdcmple */
int __aeabi_cdcmple(void);

/* Symbol: CMusicCompressor_Process_MakeUp0 */
/* Demangled: CMusicCompressor_Process_MakeUp0 */
int CMusicCompressor_Process_MakeUp0(void);

/* Symbol: CMusicLimiter_ProcessBufferHardLimit */
/* Demangled: CMusicLimiter_ProcessBufferHardLimit */
int CMusicLimiter_ProcessBufferHardLimit(void);

/* Symbol: _ZN4Comb7getdampEv */
/* Demangled: Comb::getdamp() */
int _ZN4Comb7getdampEv(void);

/* Symbol: kiss_fftr */
/* Demangled: kiss_fftr */
int kiss_fftr(void);

/* Symbol: __aeabi_dsub */
/* Demangled: __aeabi_dsub */
int __aeabi_dsub(void);

/* Symbol: _Z4NLD1fP17CMusicPBE_State_t */
/* Demangled: NLD1(float, CMusicPBE_State_t*) */
int _Z4NLD1fP17CMusicPBE_State_t(void);

/* Symbol: misound_arsi_update_device */
/* Demangled: misound_arsi_update_device */
int misound_arsi_update_device(void);

/* Symbol: CMusicEQ_SetFilterBandGain */
/* Demangled: CMusicEQ_SetFilterBandGain */
int CMusicEQ_SetFilterBandGain(void);

/* Symbol: __gedf2 */
/* Demangled: __gedf2 */
int __gedf2(void);

/* Symbol: CMiSoundFX_GetSize */
/* Demangled: CMiSoundFX_GetSize */
int CMiSoundFX_GetSize(void);

/* Symbol: CMiSoundFX_SetModeType */
/* Demangled: CMiSoundFX_SetModeType */
int CMiSoundFX_SetModeType(void);

/* Symbol: CMusicResampler_Reset */
/* Demangled: CMusicResampler_Reset */
int CMusicResampler_Reset(void);

/* Symbol: _Z4NLD2fP17CMusicPBE_State_t */
/* Demangled: NLD2(float, CMusicPBE_State_t*) */
int _Z4NLD2fP17CMusicPBE_State_t(void);

/* Symbol: _Z18readBinFileMemInitP36tag_MiSound_CMiSoundFX_BinFileMemory */
/* Demangled: readBinFileMemInit(tag_MiSound_CMiSoundFX_BinFileMemory*) */
int _Z18readBinFileMemInitP36tag_MiSound_CMiSoundFX_BinFileMemory(void);

/* Symbol: _ZN17MiSoundFX_Utility14referenceCountE */
/* Demangled: MiSoundFX_Utility::referenceCount */
extern void* _ZN17MiSoundFX_Utility14referenceCountE;

/* Symbol: CMusicMBExpanderLR4_Reset */
/* Demangled: CMusicMBExpanderLR4_Reset */
int CMusicMBExpanderLR4_Reset(void);

/* Symbol: Biquad_Process_Neon */
/* Demangled: Biquad_Process_Neon */
int Biquad_Process_Neon(void);

/* Symbol: __ledf2 */
/* Demangled: __ledf2 */
int __ledf2(void);

/* Symbol: CMusicLimiter_ProcessBuffer */
/* Demangled: CMusicLimiter_ProcessBuffer */
int CMusicLimiter_ProcessBuffer(void);

/* Symbol: misound_arsi_create_handler */
/* Demangled: misound_arsi_create_handler */
int misound_arsi_create_handler(void);

/* Symbol: misound_arsi_get_lib_version */
/* Demangled: misound_arsi_get_lib_version */
int misound_arsi_get_lib_version(void);

/* Symbol: _ZN18CMusicSimpleReverb8getwidthEv */
/* Demangled: CMusicSimpleReverb::getwidth() */
int _ZN18CMusicSimpleReverb8getwidthEv(void);

/* Symbol: _ZN4Comb9setbufferEPfi */
/* Demangled: Comb::setbuffer(float*, int) */
int _ZN4Comb9setbufferEPfi(void);

/* Symbol: _ZN18CMusicSimpleReverbC1Ev */
/* Demangled: CMusicSimpleReverb::CMusicSimpleReverb() */
int _ZN18CMusicSimpleReverbC1Ev(void);

/* Symbol: CMusicFade_Reset */
/* Demangled: CMusicFade_Reset */
int CMusicFade_Reset(void);

/* Symbol: CMusicLR4LowPass_CalcCoeff */
/* Demangled: CMusicLR4LowPass_CalcCoeff */
int CMusicLR4LowPass_CalcCoeff(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: CMusicFastConv_Reset */
/* Demangled: CMusicFastConv_Reset */
int CMusicFastConv_Reset(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: __cmpdf2 */
/* Demangled: __cmpdf2 */
int __cmpdf2(void);

/* Symbol: CMiSoundFX_Process */
/* Demangled: CMiSoundFX_Process */
int CMiSoundFX_Process(void);

/* Symbol: CMiSoundFX_Helper_InitReadStruct */
/* Demangled: CMiSoundFX_Helper_InitReadStruct */
int CMiSoundFX_Helper_InitReadStruct(void);

/* Symbol: _ZN7AllpassC1Ev */
/* Demangled: Allpass::Allpass() */
int _ZN7AllpassC1Ev(void);

/* Symbol: CMiSoundFX_GetMusicModeEnable */
/* Demangled: CMiSoundFX_GetMusicModeEnable */
int CMiSoundFX_GetMusicModeEnable(void);

/* Symbol: _Z26CMiSoundFX_ModeStruct_InitPvPKc */
/* Demangled: CMiSoundFX_ModeStruct_Init(void*, char const*) */
int _Z26CMiSoundFX_ModeStruct_InitPvPKc(void);

/* Symbol: __aeabi_d2ulz */
/* Demangled: __aeabi_d2ulz */
int __aeabi_d2ulz(void);

/* Symbol: CMusicResampler_UpSample */
/* Demangled: CMusicResampler_UpSample */
int CMusicResampler_UpSample(void);

/* Symbol: misound_arsi_set_addr_value */
/* Demangled: misound_arsi_set_addr_value */
int misound_arsi_set_addr_value(void);

/* Symbol: CMiSoundFX_Helper_MapInt32ToFloat32 */
/* Demangled: CMiSoundFX_Helper_MapInt32ToFloat32 */
int CMiSoundFX_Helper_MapInt32ToFloat32(void);

/* Symbol: _Z36CMusicMBExpanderLR4_SetCrossOverFreqifP27CMusicMBExpanderLR4_State_t */
/* Demangled: CMusicMBExpanderLR4_SetCrossOverFreq(int, float, CMusicMBExpanderLR4_State_t*) */
int _Z36CMusicMBExpanderLR4_SetCrossOverFreqifP27CMusicMBExpanderLR4_State_t(void);

/* Symbol: CMusicLR4LowPass_ResetHistory */
/* Demangled: CMusicLR4LowPass_ResetHistory */
int CMusicLR4LowPass_ResetHistory(void);

/* Symbol: IirSos_New */
/* Demangled: IirSos_New */
int IirSos_New(void);

/* Symbol: _Z42CMusicSimpleReverb_ProcessBufferPreMonoMixPfiPv */
/* Demangled: CMusicSimpleReverb_ProcessBufferPreMonoMix(float*, int, void*) */
int _Z42CMusicSimpleReverb_ProcessBufferPreMonoMixPfiPv(void);

/* Symbol: __aeabi_ui2d */
/* Demangled: __aeabi_ui2d */
int __aeabi_ui2d(void);

/* Symbol: IirSos_SetFilterScales */
/* Demangled: IirSos_SetFilterScales */
int IirSos_SetFilterScales(void);

/* Symbol: CMiSoundFX_Init */
/* Demangled: CMiSoundFX_Init */
int CMiSoundFX_Init(void);

/* Symbol: CMusicCompressor_Init */
/* Demangled: CMusicCompressor_Init */
int CMusicCompressor_Init(void);

/* Symbol: CMusicResampler_Init */
/* Demangled: CMusicResampler_Init */
int CMusicResampler_Init(void);

/* Symbol: CMusicFastConv_Process */
/* Demangled: CMusicFastConv_Process */
int CMusicFastConv_Process(void);

/* Symbol: CMusicDEQ_Process */
/* Demangled: CMusicDEQ_Process */
int CMusicDEQ_Process(void);

/* Symbol: __subdf3 */
/* Demangled: __subdf3 */
int __subdf3(void);

/* Symbol: misound_arsi_query_working_buf_size */
/* Demangled: misound_arsi_query_working_buf_size */
int misound_arsi_query_working_buf_size(void);

/* Symbol: __aeabi_cdcmpeq */
/* Demangled: __aeabi_cdcmpeq */
int __aeabi_cdcmpeq(void);

/* Symbol: CMusicSmoothedValue_Init */
/* Demangled: CMusicSmoothedValue_Init */
int CMusicSmoothedValue_Init(void);

/* Symbol: CMusicGain_SetParam */
/* Demangled: CMusicGain_SetParam */
int CMusicGain_SetParam(void);

/* Symbol: _Z30skipModelDataChunkInBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemory */
/* Demangled: skipModelDataChunkInBinFileMem(tag_MiSound_CMiSoundFX_BinFileMemory*) */
int _Z30skipModelDataChunkInBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemory(void);

/* Symbol: __floatunsidf */
/* Demangled: __floatunsidf */
int __floatunsidf(void);

/* Symbol: IirSos_Process_Fix */
/* Demangled: IirSos_Process_Fix */
int IirSos_Process_Fix(void);

/* Symbol: __aeabi_dcmple */
/* Demangled: __aeabi_dcmple */
int __aeabi_dcmple(void);

/* Symbol: misound_arsi_destroy_handler */
/* Demangled: misound_arsi_destroy_handler */
int misound_arsi_destroy_handler(void);

/* Symbol: _Z38CMusicMBCompressorLR4_SetCrossOverFreqifP29CMusicMBCompressorLR4_State_t */
/* Demangled: CMusicMBCompressorLR4_SetCrossOverFreq(int, float, CMusicMBCompressorLR4_State_t*) */
int _Z38CMusicMBCompressorLR4_SetCrossOverFreqifP29CMusicMBCompressorLR4_State_t(void);

/* Symbol: CMusicMBExpanderLR4_Delete */
/* Demangled: CMusicMBExpanderLR4_Delete */
int CMusicMBExpanderLR4_Delete(void);

/* Symbol: CMiSoundFX_OpenFile */
/* Demangled: CMiSoundFX_OpenFile */
int CMiSoundFX_OpenFile(void);

/* Symbol: Biquad_Process_Fix */
/* Demangled: Biquad_Process_Fix */
int Biquad_Process_Fix(void);

/* Symbol: CMusicLR4HighPass_CalcCoeff */
/* Demangled: CMusicLR4HighPass_CalcCoeff */
int CMusicLR4HighPass_CalcCoeff(void);

/* Symbol: misound_arsi_query_max_debug_dump_buf_size */
/* Demangled: misound_arsi_query_max_debug_dump_buf_size */
int misound_arsi_query_max_debug_dump_buf_size(void);

/* Symbol: CMusicMBExpander_Process_Buffer */
/* Demangled: CMusicMBExpander_Process_Buffer */
int CMusicMBExpander_Process_Buffer(void);

/* Symbol: _Z24CMiSoundFX_InitProcessorPvP27tag_MiSound_CMiSoundFX_Mode22CMiSound_ProcessorTypefP29tag_MiSound_FileMemReadStruct */
/* Demangled: CMiSoundFX_InitProcessor(void*, tag_MiSound_CMiSoundFX_Mode*, CMiSound_ProcessorType, float, tag_MiSound_FileMemReadStruct*) */
int _Z24CMiSoundFX_InitProcessorPvP27tag_MiSound_CMiSoundFX_Mode22CMiSound_ProcessorTypefP29tag_MiSound_FileMemReadStruct(void);

/* Symbol: CMusicGain_Init */
/* Demangled: CMusicGain_Init */
int CMusicGain_Init(void);

/* Symbol: _ZN18CMusicSimpleReverb7setmodeEf */
/* Demangled: CMusicSimpleReverb::setmode(float) */
int _ZN18CMusicSimpleReverb7setmodeEf(void);

/* Symbol: __aeabi_dmul */
/* Demangled: __aeabi_dmul */
int __aeabi_dmul(void);

/* Symbol: _ZN18CMusicSimpleReverbC2Ev */
/* Demangled: CMusicSimpleReverb::CMusicSimpleReverb() */
int _ZN18CMusicSimpleReverbC2Ev(void);

/* Symbol: misound_arsi_set_dl_enhance */
/* Demangled: misound_arsi_set_dl_enhance */
int misound_arsi_set_dl_enhance(void);

/* Symbol: CMiSoundFX_Delete_Internal */
/* Demangled: CMiSoundFX_Delete_Internal */
int CMiSoundFX_Delete_Internal(void);

/* Symbol: _Z38CMiSoundFX_HeadphoneChange_FadeOutDonePv */
/* Demangled: CMiSoundFX_HeadphoneChange_FadeOutDone(void*) */
int _Z38CMiSoundFX_HeadphoneChange_FadeOutDonePv(void);

/* Symbol: _ZN18CMusicSimpleReverb11setroomsizeEf */
/* Demangled: CMusicSimpleReverb::setroomsize(float) */
int _ZN18CMusicSimpleReverb11setroomsizeEf(void);

/* Symbol: CMusicMBCompressor_New */
/* Demangled: CMusicMBCompressor_New */
int CMusicMBCompressor_New(void);

/* Symbol: _ZN7AllpassC2Ev */
/* Demangled: Allpass::Allpass() */
int _ZN7AllpassC2Ev(void);

/* Symbol: __aeabi_dcmplt */
/* Demangled: __aeabi_dcmplt */
int __aeabi_dcmplt(void);

/* Symbol: _Z28CMiSoundFX_ModeStruct_DeletePvPKc */
/* Demangled: CMiSoundFX_ModeStruct_Delete(void*, char const*) */
int _Z28CMiSoundFX_ModeStruct_DeletePvPKc(void);

/* Symbol: IirSos_ResetHistory */
/* Demangled: IirSos_ResetHistory */
int IirSos_ResetHistory(void);

/* Symbol: misound_arsi_assign_lib_fp */
/* Demangled: misound_arsi_assign_lib_fp */
int misound_arsi_assign_lib_fp(void);

/* Symbol: CMiSoundFX_SetEqEnable */
/* Demangled: CMiSoundFX_SetEqEnable */
int CMiSoundFX_SetEqEnable(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: misound_arsi_set_key_value_pair */
/* Demangled: misound_arsi_set_key_value_pair */
int misound_arsi_set_key_value_pair(void);

/* Symbol: CMusicCompressor_SetParam */
/* Demangled: CMusicCompressor_SetParam */
int CMusicCompressor_SetParam(void);

/* Symbol: kiss_fft_next_fast_size */
/* Demangled: kiss_fft_next_fast_size */
int kiss_fft_next_fast_size(void);

/* Symbol: CMusicLR4LowPass_New */
/* Demangled: CMusicLR4LowPass_New */
int CMusicLR4LowPass_New(void);

/* Symbol: _ZN18CMusicSimpleReverb7getmodeEv */
/* Demangled: CMusicSimpleReverb::getmode() */
int _ZN18CMusicSimpleReverb7getmodeEv(void);

/* Symbol: __aeabi_i2d */
/* Demangled: __aeabi_i2d */
int __aeabi_i2d(void);

/* Symbol: CMiSoundFX_CloseFile */
/* Demangled: CMiSoundFX_CloseFile */
int CMiSoundFX_CloseFile(void);

/* Symbol: _Z19loadFileBinToMemoryP29tag_MiSound_FileMemReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory */
/* Demangled: loadFileBinToMemory(tag_MiSound_FileMemReadStruct*, tag_MiSound_CMiSoundFX_BinFileMemory*) */
int _Z19loadFileBinToMemoryP29tag_MiSound_FileMemReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory(void);

/* Symbol: _ZN4Comb11setfeedbackEf */
/* Demangled: Comb::setfeedback(float) */
int _ZN4Comb11setfeedbackEf(void);

/* Symbol: CMiSoundFX_Helper_SeekMem */
/* Demangled: CMiSoundFX_Helper_SeekMem */
int CMiSoundFX_Helper_SeekMem(void);

/* Symbol: _Z35CMusicMBCompressor_SetCrossOverFreqifP26CMusicMBCompressor_State_t */
/* Demangled: CMusicMBCompressor_SetCrossOverFreq(int, float, CMusicMBCompressor_State_t*) */
int _Z35CMusicMBCompressor_SetCrossOverFreqifP26CMusicMBCompressor_State_t(void);

/* Symbol: CMusicExpander_Init */
/* Demangled: CMusicExpander_Init */
int CMusicExpander_Init(void);

/* Symbol: CMiSoundFX_SetMovieModeEnable */
/* Demangled: CMiSoundFX_SetMovieModeEnable */
int CMiSoundFX_SetMovieModeEnable(void);

/* Symbol: __eqdf2 */
/* Demangled: __eqdf2 */
int __eqdf2(void);

/* Symbol: _Z24CMiSoundFX_LoadSubConfigPvjPKcP29tag_MiSound_FileMemReadStruct */
/* Demangled: CMiSoundFX_LoadSubConfig(void*, unsigned int, char const*, tag_MiSound_FileMemReadStruct*) */
int _Z24CMiSoundFX_LoadSubConfigPvjPKcP29tag_MiSound_FileMemReadStruct(void);

/* Symbol: __aeabi_cdrcmple */
/* Demangled: __aeabi_cdrcmple */
int __aeabi_cdrcmple(void);

/* Symbol: _Z33CMiSoundFX_GetModeIndexByModeTypePKc */
/* Demangled: CMiSoundFX_GetModeIndexByModeType(char const*) */
int _Z33CMiSoundFX_GetModeIndexByModeTypePKc(void);

/* Symbol: _ZN18CMusicSimpleReverb6updateEv */
/* Demangled: CMusicSimpleReverb::update() */
int _ZN18CMusicSimpleReverb6updateEv(void);

/* Symbol: misound_arsi_set_ul_digital_gain */
/* Demangled: misound_arsi_set_ul_digital_gain */
int misound_arsi_set_ul_digital_gain(void);

/* Symbol: kiss_fft_cleanup */
/* Demangled: kiss_fft_cleanup */
int kiss_fft_cleanup(void);

/* Symbol: CMusicCompressor_Process_Neon */
/* Demangled: CMusicCompressor_Process_Neon */
int CMusicCompressor_Process_Neon(void);

/* Symbol: __aeabi_dcmpeq */
/* Demangled: __aeabi_dcmpeq */
int __aeabi_dcmpeq(void);

/* Symbol: CMusicCompressor_Reset */
/* Demangled: CMusicCompressor_Reset */
int CMusicCompressor_Reset(void);

/* Symbol: CMusicMBCompressorLR4_New */
/* Demangled: CMusicMBCompressorLR4_New */
int CMusicMBCompressorLR4_New(void);

/* Symbol: __aeabi_dadd */
/* Demangled: __aeabi_dadd */
int __aeabi_dadd(void);

/* Symbol: CMusicMBCompressorLR4_SetParam */
/* Demangled: CMusicMBCompressorLR4_SetParam */
int CMusicMBCompressorLR4_SetParam(void);

/* Symbol: CMiSoundFX_SetSpk */
/* Demangled: CMiSoundFX_SetSpk */
int CMiSoundFX_SetSpk(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMISOUND_H */
