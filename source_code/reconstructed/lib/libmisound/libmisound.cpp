/*
 * Reverse-Engineered Source for: libmisound.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmisound"

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
#include "libmisound.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: CMiSoundFX_Helper_ReadMem */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Helper_ReadMem(void) {
    ALOGD("CMiSoundFX_Helper_ReadMem() called");
    return 0;
}

/* Demangled: Biquad_New */
extern "C" __attribute__((visibility("default"))) int Biquad_New(void) {
    ALOGD("Biquad_New() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::process(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb7processEPfS0_(void) {
    ALOGD("_ZN18CMusicSimpleReverb7processEPfS0_() called");
    return 0;
}

/* Demangled: Allpass::getfeedback() */
extern "C" __attribute__((visibility("default"))) int _ZN7Allpass11getfeedbackEv(void) {
    ALOGD("_ZN7Allpass11getfeedbackEv() called");
    return 0;
}

/* Demangled: Biquad_Process */
extern "C" __attribute__((visibility("default"))) int Biquad_Process(void) {
    ALOGD("Biquad_Process() called");
    return 0;
}

/* Demangled: CMusicIntFloat_Init */
extern "C" __attribute__((visibility("default"))) int CMusicIntFloat_Init(void) {
    ALOGD("CMusicIntFloat_Init() called");
    return 0;
}

/* Demangled: Allpass::setbuffer(float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Allpass9setbufferEPfi(void) {
    ALOGD("_ZN7Allpass9setbufferEPfi() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetEqBandGains */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetEqBandGains(void) {
    ALOGD("CMiSoundFX_SetEqBandGains() called");
    return 0;
}

/* Demangled: CMiSoundFX_WA_Limit */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_WA_Limit(void) {
    ALOGD("CMiSoundFX_WA_Limit() called");
    return 0;
}

/* Demangled: CMusicLimiter_Init */
extern "C" __attribute__((visibility("default"))) int CMusicLimiter_Init(void) {
    ALOGD("CMusicLimiter_Init() called");
    return 0;
}

/* Demangled: MiSoundFX_Utility::closeFile() */
extern "C" __attribute__((visibility("default"))) int _ZN17MiSoundFX_Utility9closeFileEv(void) {
    ALOGD("_ZN17MiSoundFX_Utility9closeFileEv() called");
    return 0;
}

/* Demangled: CMusicEQ_ResetHistory */
extern "C" __attribute__((visibility("default"))) int CMusicEQ_ResetHistory(void) {
    ALOGD("CMusicEQ_ResetHistory() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetModeType */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetModeType(void) {
    ALOGD("CMiSoundFX_GetModeType() called");
    return 0;
}

/* Demangled: CMusicFastConv_Init */
extern "C" __attribute__((visibility("default"))) int CMusicFastConv_Init(void) {
    ALOGD("CMusicFastConv_Init() called");
    return 0;
}

/* Demangled: kiss_fft_alloc */
extern "C" __attribute__((visibility("default"))) int kiss_fft_alloc(void) {
    ALOGD("kiss_fft_alloc() called");
    return 0;
}

/* Demangled: CMusicEQ_Process */
extern "C" __attribute__((visibility("default"))) int CMusicEQ_Process(void) {
    ALOGD("CMusicEQ_Process() called");
    return 0;
}

/* Demangled: CMusicLR4HighPass_New */
extern "C" __attribute__((visibility("default"))) int CMusicLR4HighPass_New(void) {
    ALOGD("CMusicLR4HighPass_New() called");
    return 0;
}

/* Demangled: CMusicPBE_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicPBE_SetParam(void) {
    ALOGD("CMusicPBE_SetParam() called");
    return 0;
}

/* Demangled: CMusicMBExpanderLR4_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpanderLR4_SetParam(void) {
    ALOGD("CMusicMBExpanderLR4_SetParam() called");
    return 0;
}

/* Demangled: CMusicIntFloat_Add */
extern "C" __attribute__((visibility("default"))) int CMusicIntFloat_Add(void) {
    ALOGD("CMusicIntFloat_Add() called");
    return 0;
}

/* Demangled: Biquad_ResetHistory */
extern "C" __attribute__((visibility("default"))) int Biquad_ResetHistory(void) {
    ALOGD("Biquad_ResetHistory() called");
    return 0;
}

/* Demangled: __nedf2 */
extern "C" __attribute__((visibility("default"))) int __nedf2(void) {
    ALOGD("__nedf2() called");
    return 0;
}

/* Demangled: misound_arsi_set_debug_log_fp */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_debug_log_fp(void) {
    ALOGD("misound_arsi_set_debug_log_fp() called");
    return 0;
}

/* Demangled: misound_arsi_set_dl_mute */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_dl_mute(void) {
    ALOGD("misound_arsi_set_dl_mute() called");
    return 0;
}

/* Demangled: CMusicMBCompressorLR4_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressorLR4_Process_Buffer(void) {
    ALOGD("CMusicMBCompressorLR4_Process_Buffer() called");
    return 0;
}

/* Demangled: __aeabi_ddiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_ddiv(void) {
    ALOGD("__aeabi_ddiv() called");
    return 0;
}

/* Demangled: CMusicLR4LowPass_SetFrequency */
extern "C" __attribute__((visibility("default"))) int CMusicLR4LowPass_SetFrequency(void) {
    ALOGD("CMusicLR4LowPass_SetFrequency() called");
    return 0;
}

/* Demangled: CMusicMBExpander_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpander_Reset(void) {
    ALOGD("CMusicMBExpander_Reset() called");
    return 0;
}

/* Demangled: CMusicCompressor_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicCompressor_Process_Buffer(void) {
    ALOGD("CMusicCompressor_Process_Buffer() called");
    return 0;
}

/* Demangled: CMusicMBCompressor_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressor_SetParam(void) {
    ALOGD("CMusicMBCompressor_SetParam() called");
    return 0;
}

/* Demangled: SosIir_Delete_Scales(CMusicIirSos_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z20SosIir_Delete_ScalesP20CMusicIirSos_State_t(void) {
    ALOGD("_Z20SosIir_Delete_ScalesP20CMusicIirSos_State_t() called");
    return 0;
}

/* Demangled: CMusicLR4HighPass_ResetHistory */
extern "C" __attribute__((visibility("default"))) int CMusicLR4HighPass_ResetHistory(void) {
    ALOGD("CMusicLR4HighPass_ResetHistory() called");
    return 0;
}

/* Demangled: getFilterParamsFromBinMem(unsigned int, unsigned int, tag_CMiSoundFX_FilterParamReadStruct*, tag_MiSound_CMiSoundFX_BinFileMemory*) */
extern "C" __attribute__((visibility("default"))) int _Z25getFilterParamsFromBinMemjjP36tag_CMiSoundFX_FilterParamReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory(void) {
    ALOGD("_Z25getFilterParamsFromBinMemjjP36tag_CMiSoundFX_FilterParamReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory() called");
    return 0;
}

/* Demangled: misound_arsi_get_addr_value */
extern "C" __attribute__((visibility("default"))) int misound_arsi_get_addr_value(void) {
    ALOGD("misound_arsi_get_addr_value() called");
    return 0;
}

/* Demangled: IirSos_Process_Buffer_ScaleB0PreMult */
extern "C" __attribute__((visibility("default"))) int IirSos_Process_Buffer_ScaleB0PreMult(void) {
    ALOGD("IirSos_Process_Buffer_ScaleB0PreMult() called");
    return 0;
}

/* Demangled: CMusicLR4HighPass_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicLR4HighPass_Delete(void) {
    ALOGD("CMusicLR4HighPass_Delete() called");
    return 0;
}

/* Exported Object: typeinfo name for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16invalid_argument = NULL;

/* Demangled: CMiSoundFX_GetReferenceCount */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetReferenceCount(void) {
    ALOGD("CMiSoundFX_GetReferenceCount() called");
    return 0;
}

/* Demangled: CMusicMBCompressor_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressor_Delete(void) {
    ALOGD("CMusicMBCompressor_Delete() called");
    return 0;
}

/* Demangled: Comb::Comb() */
extern "C" __attribute__((visibility("default"))) int _ZN4CombC1Ev(void) {
    ALOGD("_ZN4CombC1Ev() called");
    return 0;
}

/* Demangled: CMusicCompressor_Process */
extern "C" __attribute__((visibility("default"))) int CMusicCompressor_Process(void) {
    ALOGD("CMusicCompressor_Process() called");
    return 0;
}

/* Demangled: CMusicLimiter_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicLimiter_Reset(void) {
    ALOGD("CMusicLimiter_Reset() called");
    return 0;
}

/* Demangled: CMiSoundFX_DeleteProcessor(void*, tag_CMiSound_Processor*) */
extern "C" __attribute__((visibility("default"))) int _Z26CMiSoundFX_DeleteProcessorPvP22tag_CMiSound_Processor(void) {
    ALOGD("_Z26CMiSoundFX_DeleteProcessorPvP22tag_CMiSound_Processor() called");
    return 0;
}

/* Demangled: CMusicLrMix_Process */
extern "C" __attribute__((visibility("default"))) int CMusicLrMix_Process(void) {
    ALOGD("CMusicLrMix_Process() called");
    return 0;
}

/* Demangled: CMusicPBE_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicPBE_Process_Buffer(void) {
    ALOGD("CMusicPBE_Process_Buffer() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: misound_arsi_update_param */
extern "C" __attribute__((visibility("default"))) int misound_arsi_update_param(void) {
    ALOGD("misound_arsi_update_param() called");
    return 0;
}

/* Demangled: CMusicDEQ_Init */
extern "C" __attribute__((visibility("default"))) int CMusicDEQ_Init(void) {
    ALOGD("CMusicDEQ_Init() called");
    return 0;
}

/* Demangled: CMiSoundFX_LoadModelMappingData(void*, tag_MiSound_FileMemReadStruct*) */
extern "C" __attribute__((visibility("default"))) int _Z31CMiSoundFX_LoadModelMappingDataPvP29tag_MiSound_FileMemReadStruct(void) {
    ALOGD("_Z31CMiSoundFX_LoadModelMappingDataPvP29tag_MiSound_FileMemReadStruct() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: __aeabi_dcmpge */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpge(void) {
    ALOGD("__aeabi_dcmpge() called");
    return 0;
}

/* Exported Object: typeinfo for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16invalid_argument = NULL;

/* Demangled: seekBinFileMem(tag_MiSound_CMiSoundFX_BinFileMemory*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14seekBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemoryj(void) {
    ALOGD("_Z14seekBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemoryj() called");
    return 0;
}

/* Demangled: CMusicMBCompressor_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressor_Reset(void) {
    ALOGD("CMusicMBCompressor_Reset() called");
    return 0;
}

/* Demangled: CMusicMBExpanderLR4_New */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpanderLR4_New(void) {
    ALOGD("CMusicMBExpanderLR4_New() called");
    return 0;
}

/* Demangled: CMusicExpander_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicExpander_SetParam(void) {
    ALOGD("CMusicExpander_SetParam() called");
    return 0;
}

/* Demangled: IirSos_SetFilterCoefs */
extern "C" __attribute__((visibility("default"))) int IirSos_SetFilterCoefs(void) {
    ALOGD("IirSos_SetFilterCoefs() called");
    return 0;
}

/* Demangled: misound_arsi_process_dl_buf */
extern "C" __attribute__((visibility("default"))) int misound_arsi_process_dl_buf(void) {
    ALOGD("misound_arsi_process_dl_buf() called");
    return 0;
}

/* Demangled: CMusicPBE_Init */
extern "C" __attribute__((visibility("default"))) int CMusicPBE_Init(void) {
    ALOGD("CMusicPBE_Init() called");
    return 0;
}

/* Demangled: CMusicSmoothedValue_GetNextValue */
extern "C" __attribute__((visibility("default"))) int CMusicSmoothedValue_GetNextValue(void) {
    ALOGD("CMusicSmoothedValue_GetNextValue() called");
    return 0;
}

/* Demangled: CMiSoundFX_Resampler_LPF_Init(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z29CMiSoundFX_Resampler_LPF_InitPvi(void) {
    ALOGD("_Z29CMiSoundFX_Resampler_LPF_InitPvi() called");
    return 0;
}

/* Demangled: dynamic_link_arsi_assign_lib_fp */
extern "C" __attribute__((visibility("default"))) int dynamic_link_arsi_assign_lib_fp(void) {
    ALOGD("dynamic_link_arsi_assign_lib_fp() called");
    return 0;
}

/* Demangled: CMiSoundFX_LoadConfig(void*, unsigned int, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z21CMiSoundFX_LoadConfigPvjPKcS1_(void) {
    ALOGD("_Z21CMiSoundFX_LoadConfigPvjPKcS1_() called");
    return 0;
}

/* Demangled: CMusicLR4LowPass_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicLR4LowPass_Delete(void) {
    ALOGD("CMusicLR4LowPass_Delete() called");
    return 0;
}

/* Demangled: CMusicEQ_New */
extern "C" __attribute__((visibility("default"))) int CMusicEQ_New(void) {
    ALOGD("CMusicEQ_New() called");
    return 0;
}

/* Demangled: __aeabi_dcmpgt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpgt(void) {
    ALOGD("__aeabi_dcmpgt() called");
    return 0;
}

/* Demangled: misound_arsi_query_process_unit_bytes */
extern "C" __attribute__((visibility("default"))) int misound_arsi_query_process_unit_bytes(void) {
    ALOGD("misound_arsi_query_process_unit_bytes() called");
    return 0;
}

/* Demangled: misound_arsi_set_dl_digital_gain */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_dl_digital_gain(void) {
    ALOGD("misound_arsi_set_dl_digital_gain() called");
    return 0;
}

/* Demangled: CMusicMBExpanderLR4_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpanderLR4_Process_Buffer(void) {
    ALOGD("CMusicMBExpanderLR4_Process_Buffer() called");
    return 0;
}

/* Demangled: kiss_fft_stride */
extern "C" __attribute__((visibility("default"))) int kiss_fft_stride(void) {
    ALOGD("kiss_fft_stride() called");
    return 0;
}

/* Demangled: __fixdfdi */
extern "C" __attribute__((visibility("default"))) int __fixdfdi(void) {
    ALOGD("__fixdfdi() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetModePtrByModeType(void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z31CMiSoundFX_GetModePtrByModeTypePvPKc(void) {
    ALOGD("_Z31CMiSoundFX_GetModePtrByModeTypePvPKc() called");
    return 0;
}

/* Demangled: CMusicEQ_Initialize(CMusicEQ_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z19CMusicEQ_InitializeP16CMusicEQ_State_t(void) {
    ALOGD("_Z19CMusicEQ_InitializeP16CMusicEQ_State_t() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::getroomsize() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb11getroomsizeEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb11getroomsizeEv() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetParams */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetParams(void) {
    ALOGD("CMiSoundFX_SetParams() called");
    return 0;
}

/* Demangled: CMiSoundFX_Helper_TellMemPos */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Helper_TellMemPos(void) {
    ALOGD("CMiSoundFX_Helper_TellMemPos() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetModePtrByModeIndex(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z32CMiSoundFX_GetModePtrByModeIndexPvi(void) {
    ALOGD("_Z32CMiSoundFX_GetModePtrByModeIndexPvi() called");
    return 0;
}

/* Demangled: CMusicResampler_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicResampler_Delete(void) {
    ALOGD("CMusicResampler_Delete() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb_ProcessBuffer(float*, float*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z32CMusicSimpleReverb_ProcessBufferPfS_iPv(void) {
    ALOGD("_Z32CMusicSimpleReverb_ProcessBufferPfS_iPv() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetParams */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetParams(void) {
    ALOGD("CMiSoundFX_GetParams() called");
    return 0;
}

/* Demangled: misound_arsi_load_param */
extern "C" __attribute__((visibility("default"))) int misound_arsi_load_param(void) {
    ALOGD("misound_arsi_load_param() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetMovieModeEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetMovieModeEnable(void) {
    ALOGD("CMiSoundFX_GetMovieModeEnable() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetEqEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetEqEnable(void) {
    ALOGD("CMiSoundFX_GetEqEnable() called");
    return 0;
}

/* Demangled: __gtdf2 */
extern "C" __attribute__((visibility("default"))) int __gtdf2(void) {
    ALOGD("__gtdf2() called");
    return 0;
}

/* Demangled: Comb::Comb() */
extern "C" __attribute__((visibility("default"))) int _ZN4CombC2Ev(void) {
    ALOGD("_ZN4CombC2Ev() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::setwet(float) */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb6setwetEf(void) {
    ALOGD("_ZN18CMusicSimpleReverb6setwetEf() called");
    return 0;
}

/* Exported Object: MiSoundFX_Utility::FileMem */
extern "C" __attribute__((visibility("default"))) void* _ZN17MiSoundFX_Utility7FileMemE = NULL;

/* Demangled: CMusicSimpleReverb::setdamp(float) */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb7setdampEf(void) {
    ALOGD("_ZN18CMusicSimpleReverb7setdampEf() called");
    return 0;
}

/* Demangled: CMusicFade_Init */
extern "C" __attribute__((visibility("default"))) int CMusicFade_Init(void) {
    ALOGD("CMusicFade_Init() called");
    return 0;
}

/* Exported Object: MiSoundFX_Utility::resFd */
extern "C" __attribute__((visibility("default"))) void* _ZN17MiSoundFX_Utility5resFdE = NULL;

/* Demangled: __ltdf2 */
extern "C" __attribute__((visibility("default"))) int __ltdf2(void) {
    ALOGD("__ltdf2() called");
    return 0;
}

/* Demangled: __fixunsdfsi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfsi(void) {
    ALOGD("__fixunsdfsi() called");
    return 0;
}

/* Demangled: CMusicEQ_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicEQ_Delete(void) {
    ALOGD("CMusicEQ_Delete() called");
    return 0;
}

/* Demangled: CMusicSmoothedValue_IsSmoothing */
extern "C" __attribute__((visibility("default"))) int CMusicSmoothedValue_IsSmoothing(void) {
    ALOGD("CMusicSmoothedValue_IsSmoothing() called");
    return 0;
}

/* Demangled: SosIir_Delete_Filters(CMusicIirSos_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z21SosIir_Delete_FiltersP20CMusicIirSos_State_t(void) {
    ALOGD("_Z21SosIir_Delete_FiltersP20CMusicIirSos_State_t() called");
    return 0;
}

/* Demangled: CMusicMBCompressorLR4_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressorLR4_Reset(void) {
    ALOGD("CMusicMBCompressorLR4_Reset() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: CMusicExpander_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicExpander_Reset(void) {
    ALOGD("CMusicExpander_Reset() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: CMusicLR4LowPass_Process */
extern "C" __attribute__((visibility("default"))) int CMusicLR4LowPass_Process(void) {
    ALOGD("CMusicLR4LowPass_Process() called");
    return 0;
}

/* Demangled: kiss_fftri */
extern "C" __attribute__((visibility("default"))) int kiss_fftri(void) {
    ALOGD("kiss_fftri() called");
    return 0;
}

/* Demangled: misound_arsi_get_key_value_pair */
extern "C" __attribute__((visibility("default"))) int misound_arsi_get_key_value_pair(void) {
    ALOGD("misound_arsi_get_key_value_pair() called");
    return 0;
}

/* Demangled: __aeabi_d2uiz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2uiz(void) {
    ALOGD("__aeabi_d2uiz() called");
    return 0;
}

/* Demangled: misound_arsi_set_ul_enhance */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_ul_enhance(void) {
    ALOGD("misound_arsi_set_ul_enhance() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetConfigParam(void*, unsigned int, char const*, int, float, tag_MiSound_CMiSoundFX_Mode*) */
extern "C" __attribute__((visibility("default"))) int _Z25CMiSoundFX_SetConfigParamPvjPKcifP27tag_MiSound_CMiSoundFX_Mode(void) {
    ALOGD("_Z25CMiSoundFX_SetConfigParamPvjPKcifP27tag_MiSound_CMiSoundFX_Mode() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::getwet() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb6getwetEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb6getwetEv() called");
    return 0;
}

/* Demangled: Comb::mute() */
extern "C" __attribute__((visibility("default"))) int _ZN4Comb4muteEv(void) {
    ALOGD("_ZN4Comb4muteEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: CMusicSmoothedValue_SetValue */
extern "C" __attribute__((visibility("default"))) int CMusicSmoothedValue_SetValue(void) {
    ALOGD("CMusicSmoothedValue_SetValue() called");
    return 0;
}

/* Demangled: CMusicMBExpander_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpander_Delete(void) {
    ALOGD("CMusicMBExpander_Delete() called");
    return 0;
}

/* Exported Object: MiSoundFX_Utility::resFileSize */
extern "C" __attribute__((visibility("default"))) void* _ZN17MiSoundFX_Utility11resFileSizeE = NULL;

/* Demangled: IirSos_Process */
extern "C" __attribute__((visibility("default"))) int IirSos_Process(void) {
    ALOGD("IirSos_Process() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::getdamp() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb7getdampEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb7getdampEv() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetMusicModeEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetMusicModeEnable(void) {
    ALOGD("CMiSoundFX_SetMusicModeEnable() called");
    return 0;
}

/* Demangled: misound_arsi_process_ul_buf */
extern "C" __attribute__((visibility("default"))) int misound_arsi_process_ul_buf(void) {
    ALOGD("misound_arsi_process_ul_buf() called");
    return 0;
}

/* Demangled: CMiSoundFX_UpdateUserEQStatus(void*) */
extern "C" __attribute__((visibility("default"))) int _Z29CMiSoundFX_UpdateUserEQStatusPv(void) {
    ALOGD("_Z29CMiSoundFX_UpdateUserEQStatusPv() called");
    return 0;
}

/* Demangled: CMusicDEQ_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicDEQ_Process_Buffer(void) {
    ALOGD("CMusicDEQ_Process_Buffer() called");
    return 0;
}

/* Demangled: CMusicExpander_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicExpander_Process_Buffer(void) {
    ALOGD("CMusicExpander_Process_Buffer() called");
    return 0;
}

/* Demangled: Biquad_CalcCoeff */
extern "C" __attribute__((visibility("default"))) int Biquad_CalcCoeff(void) {
    ALOGD("Biquad_CalcCoeff() called");
    return 0;
}

/* Demangled: IirSos_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int IirSos_Process_Buffer(void) {
    ALOGD("IirSos_Process_Buffer() called");
    return 0;
}

/* Demangled: CMusicResampler_DownSample */
extern "C" __attribute__((visibility("default"))) int CMusicResampler_DownSample(void) {
    ALOGD("CMusicResampler_DownSample() called");
    return 0;
}

/* Demangled: CMiSoundFX_LoadModeConfig(void*, unsigned int, char const*, tag_MiSound_FileMemReadStruct*) */
extern "C" __attribute__((visibility("default"))) int _Z25CMiSoundFX_LoadModeConfigPvjPKcP29tag_MiSound_FileMemReadStruct(void) {
    ALOGD("_Z25CMiSoundFX_LoadModeConfigPvjPKcP29tag_MiSound_FileMemReadStruct() called");
    return 0;
}

/* Demangled: __fixunsdfdi */
extern "C" __attribute__((visibility("default"))) int __fixunsdfdi(void) {
    ALOGD("__fixunsdfdi() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetEnable(void) {
    ALOGD("CMiSoundFX_SetEnable() called");
    return 0;
}

/* Demangled: CMusicLimiter_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicLimiter_Delete(void) {
    ALOGD("CMusicLimiter_Delete() called");
    return 0;
}

/* Demangled: CMusicMBExpander_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpander_SetParam(void) {
    ALOGD("CMusicMBExpander_SetParam() called");
    return 0;
}

/* Demangled: Biquad_SetCoefsDirectly */
extern "C" __attribute__((visibility("default"))) int Biquad_SetCoefsDirectly(void) {
    ALOGD("Biquad_SetCoefsDirectly() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::mute() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb4muteEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb4muteEv() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::setwidth(float) */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb8setwidthEf(void) {
    ALOGD("_ZN18CMusicSimpleReverb8setwidthEf() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetEnable(void) {
    ALOGD("CMiSoundFX_GetEnable() called");
    return 0;
}

/* Demangled: CMusicFastConv_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicFastConv_Delete(void) {
    ALOGD("CMusicFastConv_Delete() called");
    return 0;
}

/* Demangled: __aeabi_d2lz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2lz(void) {
    ALOGD("__aeabi_d2lz() called");
    return 0;
}

/* Demangled: CMusicPBE_Process_Buffer_Neon(float*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z29CMusicPBE_Process_Buffer_NeonPfiPv(void) {
    ALOGD("_Z29CMusicPBE_Process_Buffer_NeonPfiPv() called");
    return 0;
}

/* Demangled: misound_arsi_parsing_param_file_by_custom_info */
extern "C" __attribute__((visibility("default"))) int misound_arsi_parsing_param_file_by_custom_info(void) {
    ALOGD("misound_arsi_parsing_param_file_by_custom_info() called");
    return 0;
}

/* Demangled: CMiSoundFX_InitModule(void*, unsigned int, char const*, int, float, tag_MiSound_CMiSoundFX_Mode*, tag_MiSound_FileMemReadStruct*) */
extern "C" __attribute__((visibility("default"))) int _Z21CMiSoundFX_InitModulePvjPKcifP27tag_MiSound_CMiSoundFX_ModeP29tag_MiSound_FileMemReadStruct(void) {
    ALOGD("_Z21CMiSoundFX_InitModulePvjPKcifP27tag_MiSound_CMiSoundFX_ModeP29tag_MiSound_FileMemReadStruct() called");
    return 0;
}

/* Demangled: CMusicMBExpander_SetCrossOverFreq(int, float, CMusicMBExpander_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z33CMusicMBExpander_SetCrossOverFreqifP24CMusicMBExpander_State_t(void) {
    ALOGD("_Z33CMusicMBExpander_SetCrossOverFreqifP24CMusicMBExpander_State_t() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::setdry(float) */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb6setdryEf(void) {
    ALOGD("_ZN18CMusicSimpleReverb6setdryEf() called");
    return 0;
}

/* Demangled: Comb::getfeedback() */
extern "C" __attribute__((visibility("default"))) int _ZN4Comb11getfeedbackEv(void) {
    ALOGD("_ZN4Comb11getfeedbackEv() called");
    return 0;
}

/* Demangled: CMiSoundFX_PrepareToStartFX */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_PrepareToStartFX(void) {
    ALOGD("CMiSoundFX_PrepareToStartFX() called");
    return 0;
}

/* Demangled: CMusicDEQ_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicDEQ_Reset(void) {
    ALOGD("CMusicDEQ_Reset() called");
    return 0;
}

/* Demangled: CMusicFastConv_ReadFileParams */
extern "C" __attribute__((visibility("default"))) int CMusicFastConv_ReadFileParams(void) {
    ALOGD("CMusicFastConv_ReadFileParams() called");
    return 0;
}

/* Demangled: CMusicLR4HighPass_SetFrequency */
extern "C" __attribute__((visibility("default"))) int CMusicLR4HighPass_SetFrequency(void) {
    ALOGD("CMusicLR4HighPass_SetFrequency() called");
    return 0;
}

/* Demangled: CMusicPBE_Process_OnlyNonlinear_Feedback */
extern "C" __attribute__((visibility("default"))) int CMusicPBE_Process_OnlyNonlinear_Feedback(void) {
    ALOGD("CMusicPBE_Process_OnlyNonlinear_Feedback() called");
    return 0;
}

/* Demangled: CMusicExpander_Process */
extern "C" __attribute__((visibility("default"))) int CMusicExpander_Process(void) {
    ALOGD("CMusicExpander_Process() called");
    return 0;
}

/* Demangled: kiss_fftr_alloc */
extern "C" __attribute__((visibility("default"))) int kiss_fftr_alloc(void) {
    ALOGD("kiss_fftr_alloc() called");
    return 0;
}

/* Demangled: CMusicLrMix_Init */
extern "C" __attribute__((visibility("default"))) int CMusicLrMix_Init(void) {
    ALOGD("CMusicLrMix_Init() called");
    return 0;
}

/* Demangled: readBinFileMem(void*, unsigned int, unsigned int, tag_MiSound_CMiSoundFX_BinFileMemory*) */
extern "C" __attribute__((visibility("default"))) int _Z14readBinFileMemPvjjP36tag_MiSound_CMiSoundFX_BinFileMemory(void) {
    ALOGD("_Z14readBinFileMemPvjjP36tag_MiSound_CMiSoundFX_BinFileMemory() called");
    return 0;
}

/* Demangled: __aeabi_f2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2d(void) {
    ALOGD("__aeabi_f2d() called");
    return 0;
}

/* Demangled: CMusicLimiter_ProcessSample */
extern "C" __attribute__((visibility("default"))) int CMusicLimiter_ProcessSample(void) {
    ALOGD("CMusicLimiter_ProcessSample() called");
    return 0;
}

/* Demangled: Allpass::setfeedback(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7Allpass11setfeedbackEf(void) {
    ALOGD("_ZN7Allpass11setfeedbackEf() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::getdry() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb6getdryEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb6getdryEv() called");
    return 0;
}

/* Demangled: CMusicGain_Process */
extern "C" __attribute__((visibility("default"))) int CMusicGain_Process(void) {
    ALOGD("CMusicGain_Process() called");
    return 0;
}

/* Demangled: CMusicPBE_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicPBE_Delete(void) {
    ALOGD("CMusicPBE_Delete() called");
    return 0;
}

/* Demangled: __divdf3 */
extern "C" __attribute__((visibility("default"))) int __divdf3(void) {
    ALOGD("__divdf3() called");
    return 0;
}

/* Demangled: misound_arsi_query_param_buf_size_by_custom_info */
extern "C" __attribute__((visibility("default"))) int misound_arsi_query_param_buf_size_by_custom_info(void) {
    ALOGD("misound_arsi_query_param_buf_size_by_custom_info() called");
    return 0;
}

/* Demangled: NLD3(float, CMusicPBE_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z4NLD3fP17CMusicPBE_State_t(void) {
    ALOGD("_Z4NLD3fP17CMusicPBE_State_t() called");
    return 0;
}

/* Demangled: CMusicMBExpander_New */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpander_New(void) {
    ALOGD("CMusicMBExpander_New() called");
    return 0;
}

/* Demangled: __muldf3 */
extern "C" __attribute__((visibility("default"))) int __muldf3(void) {
    ALOGD("__muldf3() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: IirSos_Process_Buffer_Fix */
extern "C" __attribute__((visibility("default"))) int IirSos_Process_Buffer_Fix(void) {
    ALOGD("IirSos_Process_Buffer_Fix() called");
    return 0;
}

/* Demangled: CMusicMBCompressorLR4_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressorLR4_Delete(void) {
    ALOGD("CMusicMBCompressorLR4_Delete() called");
    return 0;
}

/* Demangled: NLD4(float, CMusicPBE_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z4NLD4fP17CMusicPBE_State_t(void) {
    ALOGD("_Z4NLD4fP17CMusicPBE_State_t() called");
    return 0;
}

/* Demangled: kiss_fft */
extern "C" __attribute__((visibility("default"))) int kiss_fft(void) {
    ALOGD("kiss_fft() called");
    return 0;
}

/* Demangled: IirSos_Delete */
extern "C" __attribute__((visibility("default"))) int IirSos_Delete(void) {
    ALOGD("IirSos_Delete() called");
    return 0;
}

/* Demangled: CMusicLR4HighPass_Process */
extern "C" __attribute__((visibility("default"))) int CMusicLR4HighPass_Process(void) {
    ALOGD("CMusicLR4HighPass_Process() called");
    return 0;
}

/* Demangled: NLD5(float, CMusicPBE_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z4NLD5fP17CMusicPBE_State_t(void) {
    ALOGD("_Z4NLD5fP17CMusicPBE_State_t() called");
    return 0;
}

/* Demangled: Comb::setdamp(float) */
extern "C" __attribute__((visibility("default"))) int _ZN4Comb7setdampEf(void) {
    ALOGD("_ZN4Comb7setdampEf() called");
    return 0;
}

/* Demangled: Biquad_Process_ScaleB0PreMult */
extern "C" __attribute__((visibility("default"))) int Biquad_Process_ScaleB0PreMult(void) {
    ALOGD("Biquad_Process_ScaleB0PreMult() called");
    return 0;
}

/* Demangled: CMusicDEQ_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicDEQ_SetParam(void) {
    ALOGD("CMusicDEQ_SetParam() called");
    return 0;
}

/* Demangled: CMusicPBE_Process_OnlyNLD */
extern "C" __attribute__((visibility("default"))) int CMusicPBE_Process_OnlyNLD(void) {
    ALOGD("CMusicPBE_Process_OnlyNLD() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetEqBandGains */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetEqBandGains(void) {
    ALOGD("CMiSoundFX_GetEqBandGains() called");
    return 0;
}

/* Demangled: CMusicEQ_SetFilterParam */
extern "C" __attribute__((visibility("default"))) int CMusicEQ_SetFilterParam(void) {
    ALOGD("CMusicEQ_SetFilterParam() called");
    return 0;
}

/* Demangled: CMusicResampler_Interp(float, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _Z22CMusicResampler_Interpfffff(void) {
    ALOGD("_Z22CMusicResampler_Interpfffff() called");
    return 0;
}

/* Demangled: misound_arsi_reset_handler */
extern "C" __attribute__((visibility("default"))) int misound_arsi_reset_handler(void) {
    ALOGD("misound_arsi_reset_handler() called");
    return 0;
}

/* Demangled: misound_arsi_set_ul_mute */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_ul_mute(void) {
    ALOGD("misound_arsi_set_ul_mute() called");
    return 0;
}

/* Demangled: CMusicFade_Process */
extern "C" __attribute__((visibility("default"))) int CMusicFade_Process(void) {
    ALOGD("CMusicFade_Process() called");
    return 0;
}

/* Demangled: CMusicPBE_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicPBE_Reset(void) {
    ALOGD("CMusicPBE_Reset() called");
    return 0;
}

/* Demangled: Allpass::mute() */
extern "C" __attribute__((visibility("default"))) int _ZN7Allpass4muteEv(void) {
    ALOGD("_ZN7Allpass4muteEv() called");
    return 0;
}

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Demangled: CMusicFastConv_LoadData */
extern "C" __attribute__((visibility("default"))) int CMusicFastConv_LoadData(void) {
    ALOGD("CMusicFastConv_LoadData() called");
    return 0;
}

/* Demangled: CMusicMBCompressor_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressor_Process_Buffer(void) {
    ALOGD("CMusicMBCompressor_Process_Buffer() called");
    return 0;
}

/* Demangled: CMusicSmoothedValue_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicSmoothedValue_Reset(void) {
    ALOGD("CMusicSmoothedValue_Reset() called");
    return 0;
}

/* Demangled: CMiSoundFX_WA_Limit_Restore */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_WA_Limit_Restore(void) {
    ALOGD("CMiSoundFX_WA_Limit_Restore() called");
    return 0;
}

/* Demangled: SosIir_Initialize(CMusicIirSos_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z17SosIir_InitializeP20CMusicIirSos_State_t(void) {
    ALOGD("_Z17SosIir_InitializeP20CMusicIirSos_State_t() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Demangled: MiSoundFX_Utility::openFile() */
extern "C" __attribute__((visibility("default"))) int _ZN17MiSoundFX_Utility8openFileEv(void) {
    ALOGD("_ZN17MiSoundFX_Utility8openFileEv() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetHeadphone */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetHeadphone(void) {
    ALOGD("CMiSoundFX_SetHeadphone() called");
    return 0;
}

/* Demangled: __aeabi_cdcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmple(void) {
    ALOGD("__aeabi_cdcmple() called");
    return 0;
}

/* Demangled: CMusicCompressor_Process_MakeUp0 */
extern "C" __attribute__((visibility("default"))) int CMusicCompressor_Process_MakeUp0(void) {
    ALOGD("CMusicCompressor_Process_MakeUp0() called");
    return 0;
}

/* Demangled: CMusicLimiter_ProcessBufferHardLimit */
extern "C" __attribute__((visibility("default"))) int CMusicLimiter_ProcessBufferHardLimit(void) {
    ALOGD("CMusicLimiter_ProcessBufferHardLimit() called");
    return 0;
}

/* Demangled: Comb::getdamp() */
extern "C" __attribute__((visibility("default"))) int _ZN4Comb7getdampEv(void) {
    ALOGD("_ZN4Comb7getdampEv() called");
    return 0;
}

/* Demangled: kiss_fftr */
extern "C" __attribute__((visibility("default"))) int kiss_fftr(void) {
    ALOGD("kiss_fftr() called");
    return 0;
}

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Demangled: NLD1(float, CMusicPBE_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z4NLD1fP17CMusicPBE_State_t(void) {
    ALOGD("_Z4NLD1fP17CMusicPBE_State_t() called");
    return 0;
}

/* Demangled: misound_arsi_update_device */
extern "C" __attribute__((visibility("default"))) int misound_arsi_update_device(void) {
    ALOGD("misound_arsi_update_device() called");
    return 0;
}

/* Demangled: CMusicEQ_SetFilterBandGain */
extern "C" __attribute__((visibility("default"))) int CMusicEQ_SetFilterBandGain(void) {
    ALOGD("CMusicEQ_SetFilterBandGain() called");
    return 0;
}

/* Demangled: __gedf2 */
extern "C" __attribute__((visibility("default"))) int __gedf2(void) {
    ALOGD("__gedf2() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetSize */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetSize(void) {
    ALOGD("CMiSoundFX_GetSize() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetModeType */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetModeType(void) {
    ALOGD("CMiSoundFX_SetModeType() called");
    return 0;
}

/* Demangled: CMusicResampler_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicResampler_Reset(void) {
    ALOGD("CMusicResampler_Reset() called");
    return 0;
}

/* Demangled: NLD2(float, CMusicPBE_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z4NLD2fP17CMusicPBE_State_t(void) {
    ALOGD("_Z4NLD2fP17CMusicPBE_State_t() called");
    return 0;
}

/* Demangled: readBinFileMemInit(tag_MiSound_CMiSoundFX_BinFileMemory*) */
extern "C" __attribute__((visibility("default"))) int _Z18readBinFileMemInitP36tag_MiSound_CMiSoundFX_BinFileMemory(void) {
    ALOGD("_Z18readBinFileMemInitP36tag_MiSound_CMiSoundFX_BinFileMemory() called");
    return 0;
}

/* Exported Object: MiSoundFX_Utility::referenceCount */
extern "C" __attribute__((visibility("default"))) void* _ZN17MiSoundFX_Utility14referenceCountE = NULL;

/* Demangled: CMusicMBExpanderLR4_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpanderLR4_Reset(void) {
    ALOGD("CMusicMBExpanderLR4_Reset() called");
    return 0;
}

/* Demangled: Biquad_Process_Neon */
extern "C" __attribute__((visibility("default"))) int Biquad_Process_Neon(void) {
    ALOGD("Biquad_Process_Neon() called");
    return 0;
}

/* Demangled: __ledf2 */
extern "C" __attribute__((visibility("default"))) int __ledf2(void) {
    ALOGD("__ledf2() called");
    return 0;
}

/* Demangled: CMusicLimiter_ProcessBuffer */
extern "C" __attribute__((visibility("default"))) int CMusicLimiter_ProcessBuffer(void) {
    ALOGD("CMusicLimiter_ProcessBuffer() called");
    return 0;
}

/* Demangled: misound_arsi_create_handler */
extern "C" __attribute__((visibility("default"))) int misound_arsi_create_handler(void) {
    ALOGD("misound_arsi_create_handler() called");
    return 0;
}

/* Demangled: misound_arsi_get_lib_version */
extern "C" __attribute__((visibility("default"))) int misound_arsi_get_lib_version(void) {
    ALOGD("misound_arsi_get_lib_version() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::getwidth() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb8getwidthEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb8getwidthEv() called");
    return 0;
}

/* Demangled: Comb::setbuffer(float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4Comb9setbufferEPfi(void) {
    ALOGD("_ZN4Comb9setbufferEPfi() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::CMusicSimpleReverb() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverbC1Ev(void) {
    ALOGD("_ZN18CMusicSimpleReverbC1Ev() called");
    return 0;
}

/* Demangled: CMusicFade_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicFade_Reset(void) {
    ALOGD("CMusicFade_Reset() called");
    return 0;
}

/* Demangled: CMusicLR4LowPass_CalcCoeff */
extern "C" __attribute__((visibility("default"))) int CMusicLR4LowPass_CalcCoeff(void) {
    ALOGD("CMusicLR4LowPass_CalcCoeff() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: CMusicFastConv_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicFastConv_Reset(void) {
    ALOGD("CMusicFastConv_Reset() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: __cmpdf2 */
extern "C" __attribute__((visibility("default"))) int __cmpdf2(void) {
    ALOGD("__cmpdf2() called");
    return 0;
}

/* Demangled: CMiSoundFX_Process */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Process(void) {
    ALOGD("CMiSoundFX_Process() called");
    return 0;
}

/* Demangled: CMiSoundFX_Helper_InitReadStruct */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Helper_InitReadStruct(void) {
    ALOGD("CMiSoundFX_Helper_InitReadStruct() called");
    return 0;
}

/* Demangled: Allpass::Allpass() */
extern "C" __attribute__((visibility("default"))) int _ZN7AllpassC1Ev(void) {
    ALOGD("_ZN7AllpassC1Ev() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetMusicModeEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_GetMusicModeEnable(void) {
    ALOGD("CMiSoundFX_GetMusicModeEnable() called");
    return 0;
}

/* Demangled: CMiSoundFX_ModeStruct_Init(void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z26CMiSoundFX_ModeStruct_InitPvPKc(void) {
    ALOGD("_Z26CMiSoundFX_ModeStruct_InitPvPKc() called");
    return 0;
}

/* Demangled: __aeabi_d2ulz */
extern "C" __attribute__((visibility("default"))) int __aeabi_d2ulz(void) {
    ALOGD("__aeabi_d2ulz() called");
    return 0;
}

/* Demangled: CMusicResampler_UpSample */
extern "C" __attribute__((visibility("default"))) int CMusicResampler_UpSample(void) {
    ALOGD("CMusicResampler_UpSample() called");
    return 0;
}

/* Demangled: misound_arsi_set_addr_value */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_addr_value(void) {
    ALOGD("misound_arsi_set_addr_value() called");
    return 0;
}

/* Demangled: CMiSoundFX_Helper_MapInt32ToFloat32 */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Helper_MapInt32ToFloat32(void) {
    ALOGD("CMiSoundFX_Helper_MapInt32ToFloat32() called");
    return 0;
}

/* Demangled: CMusicMBExpanderLR4_SetCrossOverFreq(int, float, CMusicMBExpanderLR4_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z36CMusicMBExpanderLR4_SetCrossOverFreqifP27CMusicMBExpanderLR4_State_t(void) {
    ALOGD("_Z36CMusicMBExpanderLR4_SetCrossOverFreqifP27CMusicMBExpanderLR4_State_t() called");
    return 0;
}

/* Demangled: CMusicLR4LowPass_ResetHistory */
extern "C" __attribute__((visibility("default"))) int CMusicLR4LowPass_ResetHistory(void) {
    ALOGD("CMusicLR4LowPass_ResetHistory() called");
    return 0;
}

/* Demangled: IirSos_New */
extern "C" __attribute__((visibility("default"))) int IirSos_New(void) {
    ALOGD("IirSos_New() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb_ProcessBufferPreMonoMix(float*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z42CMusicSimpleReverb_ProcessBufferPreMonoMixPfiPv(void) {
    ALOGD("_Z42CMusicSimpleReverb_ProcessBufferPreMonoMixPfiPv() called");
    return 0;
}

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: IirSos_SetFilterScales */
extern "C" __attribute__((visibility("default"))) int IirSos_SetFilterScales(void) {
    ALOGD("IirSos_SetFilterScales() called");
    return 0;
}

/* Demangled: CMiSoundFX_Init */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Init(void) {
    ALOGD("CMiSoundFX_Init() called");
    return 0;
}

/* Demangled: CMusicCompressor_Init */
extern "C" __attribute__((visibility("default"))) int CMusicCompressor_Init(void) {
    ALOGD("CMusicCompressor_Init() called");
    return 0;
}

/* Demangled: CMusicResampler_Init */
extern "C" __attribute__((visibility("default"))) int CMusicResampler_Init(void) {
    ALOGD("CMusicResampler_Init() called");
    return 0;
}

/* Demangled: CMusicFastConv_Process */
extern "C" __attribute__((visibility("default"))) int CMusicFastConv_Process(void) {
    ALOGD("CMusicFastConv_Process() called");
    return 0;
}

/* Demangled: CMusicDEQ_Process */
extern "C" __attribute__((visibility("default"))) int CMusicDEQ_Process(void) {
    ALOGD("CMusicDEQ_Process() called");
    return 0;
}

/* Demangled: __subdf3 */
extern "C" __attribute__((visibility("default"))) int __subdf3(void) {
    ALOGD("__subdf3() called");
    return 0;
}

/* Demangled: misound_arsi_query_working_buf_size */
extern "C" __attribute__((visibility("default"))) int misound_arsi_query_working_buf_size(void) {
    ALOGD("misound_arsi_query_working_buf_size() called");
    return 0;
}

/* Demangled: __aeabi_cdcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdcmpeq(void) {
    ALOGD("__aeabi_cdcmpeq() called");
    return 0;
}

/* Demangled: CMusicSmoothedValue_Init */
extern "C" __attribute__((visibility("default"))) int CMusicSmoothedValue_Init(void) {
    ALOGD("CMusicSmoothedValue_Init() called");
    return 0;
}

/* Demangled: CMusicGain_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicGain_SetParam(void) {
    ALOGD("CMusicGain_SetParam() called");
    return 0;
}

/* Demangled: skipModelDataChunkInBinFileMem(tag_MiSound_CMiSoundFX_BinFileMemory*) */
extern "C" __attribute__((visibility("default"))) int _Z30skipModelDataChunkInBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemory(void) {
    ALOGD("_Z30skipModelDataChunkInBinFileMemP36tag_MiSound_CMiSoundFX_BinFileMemory() called");
    return 0;
}

/* Demangled: __floatunsidf */
extern "C" __attribute__((visibility("default"))) int __floatunsidf(void) {
    ALOGD("__floatunsidf() called");
    return 0;
}

/* Demangled: IirSos_Process_Fix */
extern "C" __attribute__((visibility("default"))) int IirSos_Process_Fix(void) {
    ALOGD("IirSos_Process_Fix() called");
    return 0;
}

/* Demangled: __aeabi_dcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmple(void) {
    ALOGD("__aeabi_dcmple() called");
    return 0;
}

/* Demangled: misound_arsi_destroy_handler */
extern "C" __attribute__((visibility("default"))) int misound_arsi_destroy_handler(void) {
    ALOGD("misound_arsi_destroy_handler() called");
    return 0;
}

/* Demangled: CMusicMBCompressorLR4_SetCrossOverFreq(int, float, CMusicMBCompressorLR4_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z38CMusicMBCompressorLR4_SetCrossOverFreqifP29CMusicMBCompressorLR4_State_t(void) {
    ALOGD("_Z38CMusicMBCompressorLR4_SetCrossOverFreqifP29CMusicMBCompressorLR4_State_t() called");
    return 0;
}

/* Demangled: CMusicMBExpanderLR4_Delete */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpanderLR4_Delete(void) {
    ALOGD("CMusicMBExpanderLR4_Delete() called");
    return 0;
}

/* Demangled: CMiSoundFX_OpenFile */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_OpenFile(void) {
    ALOGD("CMiSoundFX_OpenFile() called");
    return 0;
}

/* Demangled: Biquad_Process_Fix */
extern "C" __attribute__((visibility("default"))) int Biquad_Process_Fix(void) {
    ALOGD("Biquad_Process_Fix() called");
    return 0;
}

/* Demangled: CMusicLR4HighPass_CalcCoeff */
extern "C" __attribute__((visibility("default"))) int CMusicLR4HighPass_CalcCoeff(void) {
    ALOGD("CMusicLR4HighPass_CalcCoeff() called");
    return 0;
}

/* Demangled: misound_arsi_query_max_debug_dump_buf_size */
extern "C" __attribute__((visibility("default"))) int misound_arsi_query_max_debug_dump_buf_size(void) {
    ALOGD("misound_arsi_query_max_debug_dump_buf_size() called");
    return 0;
}

/* Demangled: CMusicMBExpander_Process_Buffer */
extern "C" __attribute__((visibility("default"))) int CMusicMBExpander_Process_Buffer(void) {
    ALOGD("CMusicMBExpander_Process_Buffer() called");
    return 0;
}

/* Demangled: CMiSoundFX_InitProcessor(void*, tag_MiSound_CMiSoundFX_Mode*, CMiSound_ProcessorType, float, tag_MiSound_FileMemReadStruct*) */
extern "C" __attribute__((visibility("default"))) int _Z24CMiSoundFX_InitProcessorPvP27tag_MiSound_CMiSoundFX_Mode22CMiSound_ProcessorTypefP29tag_MiSound_FileMemReadStruct(void) {
    ALOGD("_Z24CMiSoundFX_InitProcessorPvP27tag_MiSound_CMiSoundFX_Mode22CMiSound_ProcessorTypefP29tag_MiSound_FileMemReadStruct() called");
    return 0;
}

/* Demangled: CMusicGain_Init */
extern "C" __attribute__((visibility("default"))) int CMusicGain_Init(void) {
    ALOGD("CMusicGain_Init() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::setmode(float) */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb7setmodeEf(void) {
    ALOGD("_ZN18CMusicSimpleReverb7setmodeEf() called");
    return 0;
}

/* Demangled: __aeabi_dmul */
extern "C" __attribute__((visibility("default"))) int __aeabi_dmul(void) {
    ALOGD("__aeabi_dmul() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::CMusicSimpleReverb() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverbC2Ev(void) {
    ALOGD("_ZN18CMusicSimpleReverbC2Ev() called");
    return 0;
}

/* Demangled: misound_arsi_set_dl_enhance */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_dl_enhance(void) {
    ALOGD("misound_arsi_set_dl_enhance() called");
    return 0;
}

/* Demangled: CMiSoundFX_Delete_Internal */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Delete_Internal(void) {
    ALOGD("CMiSoundFX_Delete_Internal() called");
    return 0;
}

/* Demangled: CMiSoundFX_HeadphoneChange_FadeOutDone(void*) */
extern "C" __attribute__((visibility("default"))) int _Z38CMiSoundFX_HeadphoneChange_FadeOutDonePv(void) {
    ALOGD("_Z38CMiSoundFX_HeadphoneChange_FadeOutDonePv() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::setroomsize(float) */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb11setroomsizeEf(void) {
    ALOGD("_ZN18CMusicSimpleReverb11setroomsizeEf() called");
    return 0;
}

/* Demangled: CMusicMBCompressor_New */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressor_New(void) {
    ALOGD("CMusicMBCompressor_New() called");
    return 0;
}

/* Demangled: Allpass::Allpass() */
extern "C" __attribute__((visibility("default"))) int _ZN7AllpassC2Ev(void) {
    ALOGD("_ZN7AllpassC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_dcmplt */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmplt(void) {
    ALOGD("__aeabi_dcmplt() called");
    return 0;
}

/* Demangled: CMiSoundFX_ModeStruct_Delete(void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z28CMiSoundFX_ModeStruct_DeletePvPKc(void) {
    ALOGD("_Z28CMiSoundFX_ModeStruct_DeletePvPKc() called");
    return 0;
}

/* Demangled: IirSos_ResetHistory */
extern "C" __attribute__((visibility("default"))) int IirSos_ResetHistory(void) {
    ALOGD("IirSos_ResetHistory() called");
    return 0;
}

/* Demangled: misound_arsi_assign_lib_fp */
extern "C" __attribute__((visibility("default"))) int misound_arsi_assign_lib_fp(void) {
    ALOGD("misound_arsi_assign_lib_fp() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetEqEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetEqEnable(void) {
    ALOGD("CMiSoundFX_SetEqEnable() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: misound_arsi_set_key_value_pair */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_key_value_pair(void) {
    ALOGD("misound_arsi_set_key_value_pair() called");
    return 0;
}

/* Demangled: CMusicCompressor_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicCompressor_SetParam(void) {
    ALOGD("CMusicCompressor_SetParam() called");
    return 0;
}

/* Demangled: kiss_fft_next_fast_size */
extern "C" __attribute__((visibility("default"))) int kiss_fft_next_fast_size(void) {
    ALOGD("kiss_fft_next_fast_size() called");
    return 0;
}

/* Demangled: CMusicLR4LowPass_New */
extern "C" __attribute__((visibility("default"))) int CMusicLR4LowPass_New(void) {
    ALOGD("CMusicLR4LowPass_New() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::getmode() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb7getmodeEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb7getmodeEv() called");
    return 0;
}

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: CMiSoundFX_CloseFile */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_CloseFile(void) {
    ALOGD("CMiSoundFX_CloseFile() called");
    return 0;
}

/* Demangled: loadFileBinToMemory(tag_MiSound_FileMemReadStruct*, tag_MiSound_CMiSoundFX_BinFileMemory*) */
extern "C" __attribute__((visibility("default"))) int _Z19loadFileBinToMemoryP29tag_MiSound_FileMemReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory(void) {
    ALOGD("_Z19loadFileBinToMemoryP29tag_MiSound_FileMemReadStructP36tag_MiSound_CMiSoundFX_BinFileMemory() called");
    return 0;
}

/* Demangled: Comb::setfeedback(float) */
extern "C" __attribute__((visibility("default"))) int _ZN4Comb11setfeedbackEf(void) {
    ALOGD("_ZN4Comb11setfeedbackEf() called");
    return 0;
}

/* Demangled: CMiSoundFX_Helper_SeekMem */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_Helper_SeekMem(void) {
    ALOGD("CMiSoundFX_Helper_SeekMem() called");
    return 0;
}

/* Demangled: CMusicMBCompressor_SetCrossOverFreq(int, float, CMusicMBCompressor_State_t*) */
extern "C" __attribute__((visibility("default"))) int _Z35CMusicMBCompressor_SetCrossOverFreqifP26CMusicMBCompressor_State_t(void) {
    ALOGD("_Z35CMusicMBCompressor_SetCrossOverFreqifP26CMusicMBCompressor_State_t() called");
    return 0;
}

/* Demangled: CMusicExpander_Init */
extern "C" __attribute__((visibility("default"))) int CMusicExpander_Init(void) {
    ALOGD("CMusicExpander_Init() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetMovieModeEnable */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetMovieModeEnable(void) {
    ALOGD("CMiSoundFX_SetMovieModeEnable() called");
    return 0;
}

/* Demangled: __eqdf2 */
extern "C" __attribute__((visibility("default"))) int __eqdf2(void) {
    ALOGD("__eqdf2() called");
    return 0;
}

/* Demangled: CMiSoundFX_LoadSubConfig(void*, unsigned int, char const*, tag_MiSound_FileMemReadStruct*) */
extern "C" __attribute__((visibility("default"))) int _Z24CMiSoundFX_LoadSubConfigPvjPKcP29tag_MiSound_FileMemReadStruct(void) {
    ALOGD("_Z24CMiSoundFX_LoadSubConfigPvjPKcP29tag_MiSound_FileMemReadStruct() called");
    return 0;
}

/* Demangled: __aeabi_cdrcmple */
extern "C" __attribute__((visibility("default"))) int __aeabi_cdrcmple(void) {
    ALOGD("__aeabi_cdrcmple() called");
    return 0;
}

/* Demangled: CMiSoundFX_GetModeIndexByModeType(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z33CMiSoundFX_GetModeIndexByModeTypePKc(void) {
    ALOGD("_Z33CMiSoundFX_GetModeIndexByModeTypePKc() called");
    return 0;
}

/* Demangled: CMusicSimpleReverb::update() */
extern "C" __attribute__((visibility("default"))) int _ZN18CMusicSimpleReverb6updateEv(void) {
    ALOGD("_ZN18CMusicSimpleReverb6updateEv() called");
    return 0;
}

/* Demangled: misound_arsi_set_ul_digital_gain */
extern "C" __attribute__((visibility("default"))) int misound_arsi_set_ul_digital_gain(void) {
    ALOGD("misound_arsi_set_ul_digital_gain() called");
    return 0;
}

/* Demangled: kiss_fft_cleanup */
extern "C" __attribute__((visibility("default"))) int kiss_fft_cleanup(void) {
    ALOGD("kiss_fft_cleanup() called");
    return 0;
}

/* Demangled: CMusicCompressor_Process_Neon */
extern "C" __attribute__((visibility("default"))) int CMusicCompressor_Process_Neon(void) {
    ALOGD("CMusicCompressor_Process_Neon() called");
    return 0;
}

/* Demangled: __aeabi_dcmpeq */
extern "C" __attribute__((visibility("default"))) int __aeabi_dcmpeq(void) {
    ALOGD("__aeabi_dcmpeq() called");
    return 0;
}

/* Demangled: CMusicCompressor_Reset */
extern "C" __attribute__((visibility("default"))) int CMusicCompressor_Reset(void) {
    ALOGD("CMusicCompressor_Reset() called");
    return 0;
}

/* Demangled: CMusicMBCompressorLR4_New */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressorLR4_New(void) {
    ALOGD("CMusicMBCompressorLR4_New() called");
    return 0;
}

/* Demangled: __aeabi_dadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_dadd(void) {
    ALOGD("__aeabi_dadd() called");
    return 0;
}

/* Demangled: CMusicMBCompressorLR4_SetParam */
extern "C" __attribute__((visibility("default"))) int CMusicMBCompressorLR4_SetParam(void) {
    ALOGD("CMusicMBCompressorLR4_SetParam() called");
    return 0;
}

/* Demangled: CMiSoundFX_SetSpk */
extern "C" __attribute__((visibility("default"))) int CMiSoundFX_SetSpk(void) {
    ALOGD("CMiSoundFX_SetSpk() called");
    return 0;
}
