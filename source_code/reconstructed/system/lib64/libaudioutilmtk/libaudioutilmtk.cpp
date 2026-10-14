/*
 * Reverse-Engineered Source for: libaudioutilmtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libaudioutilmtk"

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
#include "libaudioutilmtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::fwrite_s(void const*, unsigned long, unsigned long, __sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8fwrite_sEPKvmmP7__sFILE(void) {
    ALOGD("_ZN7android8fwrite_sEPKvmmP7__sFILE() called");
    return 0;
}

/* Demangled: android::ProcessBufferQueue(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18ProcessBufferQueueEb(void) {
    ALOGD("_ZN7android18ProcessBufferQueueEb() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpTrack */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump17keyAudioDumpTrackE = NULL;

/* Exported Object: android::AudioDump::aaudio_share_ul */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15aaudio_share_ulE = NULL;

/* Demangled: android::deleteMtkCustParamCache(android::MtkAudioCustParamCacheBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android23deleteMtkCustParamCacheEPNS_26MtkAudioCustParamCacheBaseE(void) {
    ALOGD("_ZN7android23deleteMtkCustParamCacheEPNS_26MtkAudioCustParamCacheBaseE() called");
    return 0;
}

/* Exported Object: android::mAudioDumpKeyMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android18mAudioDumpKeyMutexE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpAAudio */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18keyAudioDumpAAudioE = NULL;

/* Exported Object: android::FeatureOption::MTK_BT_HEARING_AID_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption26MTK_BT_HEARING_AID_SUPPORTE = NULL;

/* Demangled: android::newMtkAudioLoud(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15newMtkAudioLoudEjb(void) {
    ALOGD("_ZN7android15newMtkAudioLoudEjb() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpOffload */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19keyAudioDumpOffloadE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpLog */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15keyAudioDumpLogE = NULL;

/* Exported Object: android::AudioDump::aaudio_share_dl */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15aaudio_share_dlE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_BESLOUDNESS_RUN_WITH_HAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption35foName_MTK_BESLOUDNESS_RUN_WITH_HALE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption43foName_MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORTE = NULL;

/* Demangled: android::WriteNewWaveHeader(__sFILE*, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WriteNewWaveHeaderEP7__sFILENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android18WriteNewWaveHeaderEP7__sFILENS_15AudioDumpBufferE() called");
    return 0;
}

/* Demangled: android::AudioDumpThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15AudioDumpThreadEPv(void) {
    ALOGD("_ZN7android15AudioDumpThreadEPv() called");
    return 0;
}

/* Demangled: android::AudioDump::checkPath(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump9checkPathEPKc(void) {
    ALOGD("_ZN7android9AudioDump9checkPathEPKc() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpRecord */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18keyAudioDumpRecordE = NULL;

/* Exported Object: android::FeatureOption::MTK_AUDIO_GAIN_TABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption20MTK_AUDIO_GAIN_TABLEE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_BESLOUDNESS_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption30foName_MTK_BESLOUDNESS_SUPPORTE = NULL;

/* Exported Object: android::AudioDataNotifyEvent */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20AudioDataNotifyEventE = NULL;

/* Demangled: android::WriteAudioBuffer(__sFILE*, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WriteAudioBufferEP7__sFILENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android16WriteAudioBufferEP7__sFILENS_15AudioDumpBufferE() called");
    return 0;
}

/* Exported Object: android::AudioDump::af_record_read_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18af_record_read_pcmE = NULL;

/* Exported Object: android::FeatureOption::MTK_AURISYS_FRAMEWORK_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption29MTK_AURISYS_FRAMEWORK_SUPPORTE = NULL;

/* Demangled: android::AudioDump::pushBufferInfo(char const*, void*, int, audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump14pushBufferInfoEPKcPvi14audio_format_tjj(void) {
    ALOGD("_ZN7android9AudioDump14pushBufferInfoEPKcPvi14audio_format_tjj() called");
    return 0;
}

/* Exported Object: android::FeatureOption::foName_MTK_BT_HEARING_AID_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption33foName_MTK_BT_HEARING_AID_SUPPORTE = NULL;

/* Demangled: android::AudioDump::updateKeys(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump10updateKeysEi(void) {
    ALOGD("_ZN7android9AudioDump10updateKeysEi() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpMixerEnd */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20keyAudioDumpMixerEndE = NULL;

/* Exported Object: android::AudioDump::af_mixer_end_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump16af_mixer_end_pcmE = NULL;

/* Exported Object: android::AUDIO_COMPONENT_ENGINE_LIB_PATH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android31AUDIO_COMPONENT_ENGINE_LIB_PATHE = NULL;

/* Demangled: android::fseek_s(__sFILE*, long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7fseek_sEP7__sFILEli(void) {
    ALOGD("_ZN7android7fseek_sEP7__sFILEli() called");
    return 0;
}

/* Exported Object: android::AudioDump::af_mixer_drc_pcm_before */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump23af_mixer_drc_pcm_beforeE = NULL;

/* Exported Object: android::AudioDump::af_resampler_in_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19af_resampler_in_pcmE = NULL;

/* Exported Object: android::FeatureOption::AOSP_USB_PHONECALL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption18AOSP_USB_PHONECALLE = NULL;

/* Exported Object: android::FeatureOption::MTK_FM_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption13MTK_FM_ENABLEE = NULL;

/* Exported Object: android::AudioDump::af_resampler_out_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20af_resampler_out_pcmE = NULL;

/* Exported Object: android::FeatureOption::MTK_USB_PHONECALL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption17MTK_USB_PHONECALLE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AUDIO_NUMBER_OF_SPEAKER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption34foName_MTK_AUDIO_NUMBER_OF_SPEAKERE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AUDIO_A2DP_LATENCY_IMPROVE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption37foName_MTK_AUDIO_A2DP_LATENCY_IMPROVEE = NULL;

/* Demangled: android::AudioDump::dump(char const*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump4dumpEPKcPvi(void) {
    ALOGD("_ZN7android9AudioDump4dumpEPKcPvi() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_TTY_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption15MTK_TTY_SUPPORTE = NULL;

/* Exported Object: android::FeatureOption::MTK_TC10_IN_HOUSE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption17MTK_TC10_IN_HOUSEE = NULL;

/* Demangled: android::deleteMtkAudioLoud(android::MtkAudioLoudBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE(void) {
    ALOGD("_ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE() called");
    return 0;
}

/* Demangled: android::UpdateWaveHeader_f(android::String8, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18UpdateWaveHeader_fENS_7String8ENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android18UpdateWaveHeader_fENS_7String8ENS_15AudioDumpBufferE() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_AUDIO_A2DP_LATENCY_IMPROVE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption30MTK_AUDIO_A2DP_LATENCY_IMPROVEE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_FM_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption21foName_MTK_FM_SUPPORTE = NULL;

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int fn___cfi_check(void) __asm__("__cfi_check");
int fn___cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpResampler */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump21keyAudioDumpResamplerE = NULL;

/* Exported Object: android::AudioDump::aaudio_exclusive_ul */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19aaudio_exclusive_ulE = NULL;

/* Exported Object: android::mAudioDumpFileVector */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20mAudioDumpFileVectorE = NULL;

/* Exported Object: android::mAudioDumpFileIoDelayTime */
extern "C" __attribute__((visibility("default"))) void* _ZN7android25mAudioDumpFileIoDelayTimeE = NULL;

/* Demangled: android::fopen_rb(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8fopen_rbENS_7String8E(void) {
    ALOGD("_ZN7android8fopen_rbENS_7String8E() called");
    return 0;
}

/* Demangled: android::FeatureOption::getValues() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13FeatureOption9getValuesEv(void) {
    ALOGD("_ZN7android13FeatureOption9getValuesEv() called");
    return 0;
}

/* Exported Object: android::mAudioDumpKeyEnableVector */
extern "C" __attribute__((visibility("default"))) void* _ZN7android25mAudioDumpKeyEnableVectorE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpDrc */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15keyAudioDumpDrcE = NULL;

/* Exported Object: android::AudioDump::audioDumpPropertyStr */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20audioDumpPropertyStrE = NULL;

/* Exported Object: android::AudioDump::af_mixer_drc_pcm_after */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump22af_mixer_drc_pcm_afterE = NULL;

/* Exported Object: android::AudioDump::af_mixer_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump12af_mixer_pcmE = NULL;

/* Exported Object: android::AudioDump::af_effect_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump13af_effect_pcmE = NULL;

/* Exported Object: android::AudioDump::aaudio_exclusive_dl */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19aaudio_exclusive_dlE = NULL;

/* Exported Object: android::FeatureOption::MTK_BESLOUDNESS_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption22MTK_BESLOUDNESS_ENABLEE = NULL;

/* Exported Object: android::FeatureOption::MTK_TC10_FEATURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption16MTK_TC10_FEATUREE = NULL;

/* Exported Object: android::mAudioDumpQueueVector */
extern "C" __attribute__((visibility("default"))) void* _ZN7android21mAudioDumpQueueVectorE = NULL;

/* Demangled: android::newMtkAudioCustParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN7android25newMtkAudioCustParamCacheEv(void) {
    ALOGD("_ZN7android25newMtkAudioCustParamCacheEv() called");
    return 0;
}

/* Demangled: android::PushBufferFromeQueueToVector(android::String8, android::AudioDumpBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28PushBufferFromeQueueToVectorENS_7String8EPNS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android28PushBufferFromeQueueToVectorENS_7String8EPNS_15AudioDumpBufferE() called");
    return 0;
}

/* Demangled: android::AudioDump::threadDump(char const*, void*, int, audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump10threadDumpEPKcPvi14audio_format_tjj(void) {
    ALOGD("_ZN7android9AudioDump10threadDumpEPKcPvi14audio_format_tjj() called");
    return 0;
}

/* Exported Object: android::AudioDump::af_track_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump12af_track_pcmE = NULL;

/* Exported Object: android::AudioDump::af_record_convert_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump21af_record_convert_pcmE = NULL;

/* Exported Object: android::FeatureOption::MTK_AUDIOMIXER_ENABLE_DRC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption25MTK_AUDIOMIXER_ENABLE_DRCE = NULL;

/* Exported Object: android::FeatureOption::MTK_ENABLE_STEREO_SPEAKER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption25MTK_ENABLE_STEREO_SPEAKERE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_HIFIAUDIO_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption28foName_MTK_HIFIAUDIO_SUPPORTE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_USB_PHONECALL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption24foName_MTK_USB_PHONECALLE = NULL;

/* Exported Object: android::hAudioDumpThread */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16hAudioDumpThreadE = NULL;

/* Exported Object: android::AudioDataNotifyMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20AudioDataNotifyMutexE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_TC10_FEATURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption23foName_MTK_TC10_FEATUREE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_TC10_IN_HOUSE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption24foName_MTK_TC10_IN_HOUSEE = NULL;

/* Demangled: android::fread_s(void*, unsigned long, unsigned long, __sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7fread_sEPvmmP7__sFILE(void) {
    ALOGD("_ZN7android7fread_sEPvmmP7__sFILE() called");
    return 0;
}

/* Exported Object: android::AudioDump::af_mixer_write_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18af_mixer_write_pcmE = NULL;

/* Exported Object: android::AudioDump::af_offload_write_raw */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20af_offload_write_rawE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_TTY_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption22foName_MTK_TTY_SUPPORTE = NULL;

/* Demangled: android::UpdateAllWaveHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19UpdateAllWaveHeaderEv(void) {
    ALOGD("_ZN7android19UpdateAllWaveHeaderEv() called");
    return 0;
}

/* Demangled: android::AudioDump::getProperty(android::AudioDump::PROP_AUDIO_DUMP) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump11getPropertyENS0_15PROP_AUDIO_DUMPE(void) {
    ALOGD("_ZN7android9AudioDump11getPropertyENS0_15PROP_AUDIO_DUMPE() called");
    return 0;
}

/* Exported Object: android::mAudioDumpMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android15mAudioDumpMutexE = NULL;

/* Exported Object: android::mAudioDumpSleepTime */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19mAudioDumpSleepTimeE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpMixer */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump17keyAudioDumpMixerE = NULL;

/* Exported Object: android::FeatureOption::MTK_AUDIO_GAIN_NVRAM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption20MTK_AUDIO_GAIN_NVRAME = NULL;

/* Demangled: android::UpdateWaveHeader(__sFILE*, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16UpdateWaveHeaderEP7__sFILENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android16UpdateWaveHeaderEP7__sFILENS_15AudioDumpBufferE() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpEffect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18keyAudioDumpEffectE = NULL;

/* Exported Object: android::FeatureOption::MTK_HIFIAUDIO_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption21MTK_HIFIAUDIO_SUPPORTE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AURISYS_FRAMEWORK_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption36foName_MTK_AURISYS_FRAMEWORK_SUPPORTE = NULL;

/* Exported Object: android::mAudioDumpFileMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19mAudioDumpFileMutexE = NULL;

/* Demangled: android::MtkAudioLoud_InitParser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android23MtkAudioLoud_InitParserEv(void) {
    ALOGD("_ZN7android23MtkAudioLoud_InitParserEv() called");
    return 0;
}
