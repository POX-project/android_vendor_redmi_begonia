/*
 * Reverse-Engineered Source for: libaudioutilmtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
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

/* Exported Object: android::FeatureOption::MTK_USB_PHONECALL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption17MTK_USB_PHONECALLE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_BESLOUDNESS_RUN_WITH_HAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption35foName_MTK_BESLOUDNESS_RUN_WITH_HALE = NULL;

/* Demangled: android::UpdateWaveHeader_f(android::String8, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18UpdateWaveHeader_fENS_7String8ENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android18UpdateWaveHeader_fENS_7String8ENS_15AudioDumpBufferE() called");
    return 0;
}

/* Demangled: android::AudioDump::pushBufferInfo(char const*, void*, int, audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump14pushBufferInfoEPKcPvi14audio_format_tjj(void) {
    ALOGD("_ZN7android9AudioDump14pushBufferInfoEPKcPvi14audio_format_tjj() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpDrc */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15keyAudioDumpDrcE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_USB_PHONECALL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption24foName_MTK_USB_PHONECALLE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpRecord */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18keyAudioDumpRecordE = NULL;

/* Exported Object: android::AudioDump::af_record_convert_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump21af_record_convert_pcmE = NULL;

/* Exported Object: android::AudioDump::af_mixer_drc_pcm_after */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump22af_mixer_drc_pcm_afterE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_15AudioDumpBufferEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_15AudioDumpBufferEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: android::AudioDump::af_mixer_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump12af_mixer_pcmE = NULL;

/* Exported Object: android::AudioDump::af_track_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump12af_track_pcmE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpAAudio */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18keyAudioDumpAAudioE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEEE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AURISYS_FRAMEWORK_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption36foName_MTK_AURISYS_FRAMEWORK_SUPPORTE = NULL;

/* Exported Object: android::AudioDump::aaudio_share_dl */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15aaudio_share_dlE = NULL;

/* Exported Object: android::AudioDump::audioDumpPropertyStr */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20audioDumpPropertyStrE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AUDIO_NUMBER_OF_SPEAKER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption34foName_MTK_AUDIO_NUMBER_OF_SPEAKERE = NULL;

/* Demangled: android::AudioDump::getProperty(android::AudioDump::PROP_AUDIO_DUMP) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump11getPropertyENS0_15PROP_AUDIO_DUMPE(void) {
    ALOGD("_ZN7android9AudioDump11getPropertyENS0_15PROP_AUDIO_DUMPE() called");
    return 0;
}

/* Demangled: android::AudioDump::dump(char const*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump4dumpEPKcPvi(void) {
    ALOGD("_ZN7android9AudioDump4dumpEPKcPvi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: android::FeatureOption::foName_MTK_HIFIAUDIO_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption28foName_MTK_HIFIAUDIO_SUPPORTE = NULL;

/* Exported Object: android::mAudioDumpKeyEnableVector */
extern "C" __attribute__((visibility("default"))) void* _ZN7android25mAudioDumpKeyEnableVectorE = NULL;

/* Exported Object: android::AudioDump::af_effect_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump13af_effect_pcmE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_TC10_FEATURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption16MTK_TC10_FEATUREE = NULL;

/* Exported Object: android::AudioDataNotifyMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20AudioDataNotifyMutexE = NULL;

/* Exported Object: android::AudioDump::aaudio_share_ul */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15aaudio_share_ulE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_15AudioDumpBufferEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_15AudioDumpBufferEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_15AudioDumpBufferEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_15AudioDumpBufferEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::fread_s(void*, unsigned int, unsigned int, __sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7fread_sEPvjjP7__sFILE(void) {
    ALOGD("_ZN7android7fread_sEPvjjP7__sFILE() called");
    return 0;
}

/* Exported Object: android::AudioDump::keyAudioDumpOffload */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19keyAudioDumpOffloadE = NULL;

/* Exported Object: android::mAudioDumpKeyMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android18mAudioDumpKeyMutexE = NULL;

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_AUDIO_GAIN_NVRAM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption20MTK_AUDIO_GAIN_NVRAME = NULL;

/* Exported Object: android::FeatureOption::MTK_AUDIO_GAIN_TABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption20MTK_AUDIO_GAIN_TABLEE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AUDIO_A2DP_LATENCY_IMPROVE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption37foName_MTK_AUDIO_A2DP_LATENCY_IMPROVEE = NULL;

/* Exported Object: android::AudioDump::af_record_read_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18af_record_read_pcmE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_BT_HEARING_AID_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption26MTK_BT_HEARING_AID_SUPPORTE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption43foName_MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORTE = NULL;

/* Demangled: android::AudioDumpThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15AudioDumpThreadEPv(void) {
    ALOGD("_ZN7android15AudioDumpThreadEPv() called");
    return 0;
}

/* Exported Object: android::mAudioDumpFileIoDelayTime */
extern "C" __attribute__((visibility("default"))) void* _ZN7android25mAudioDumpFileIoDelayTimeE = NULL;

/* Exported Object: android::AudioDump::aaudio_exclusive_dl */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19aaudio_exclusive_dlE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_ENABLE_STEREO_SPEAKER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption25MTK_ENABLE_STEREO_SPEAKERE = NULL;

/* Demangled: android::AudioDump::threadDump(char const*, void*, int, audio_format_t, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump10threadDumpEPKcPvi14audio_format_tjj(void) {
    ALOGD("_ZN7android9AudioDump10threadDumpEPKcPvi14audio_format_tjj() called");
    return 0;
}

/* Demangled: android::deleteMtkAudioLoud(android::MtkAudioLoudBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE(void) {
    ALOGD("_ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE() called");
    return 0;
}

/* Exported Object: android::mAudioDumpQueueVector */
extern "C" __attribute__((visibility("default"))) void* _ZN7android21mAudioDumpQueueVectorE = NULL;

/* Exported Object: android::AudioDump::af_mixer_end_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump16af_mixer_end_pcmE = NULL;

/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_15AudioDumpBufferEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_15AudioDumpBufferEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEEE = NULL;

/* Exported Object: android::FeatureOption::MTK_HIFIAUDIO_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption21MTK_HIFIAUDIO_SUPPORTE = NULL;

/* Demangled: android::WriteNewWaveHeader(__sFILE*, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18WriteNewWaveHeaderEP7__sFILENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android18WriteNewWaveHeaderEP7__sFILENS_15AudioDumpBufferE() called");
    return 0;
}

/* Exported Object: android::AudioDump::aaudio_exclusive_ul */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19aaudio_exclusive_ulE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: android::AUDIO_COMPONENT_ENGINE_LIB_PATH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android31AUDIO_COMPONENT_ENGINE_LIB_PATHE = NULL;

/* Exported Object: android::mAudioDumpMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android15mAudioDumpMutexE = NULL;

/* Demangled: android::deleteMtkCustParamCache(android::MtkAudioCustParamCacheBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android23deleteMtkCustParamCacheEPNS_26MtkAudioCustParamCacheBaseE(void) {
    ALOGD("_ZN7android23deleteMtkCustParamCacheEPNS_26MtkAudioCustParamCacheBaseE() called");
    return 0;
}

/* Exported Object: android::FeatureOption::AOSP_USB_PHONECALL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption18AOSP_USB_PHONECALLE = NULL;

/* Exported Object: android::FeatureOption::MTK_AUDIO_A2DP_LATENCY_IMPROVE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption30MTK_AUDIO_A2DP_LATENCY_IMPROVEE = NULL;

/* Exported Object: android::AudioDump::af_offload_write_raw */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20af_offload_write_rawE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpEffect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18keyAudioDumpEffectE = NULL;

/* Exported Object: android::FeatureOption::MTK_TC10_IN_HOUSE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption17MTK_TC10_IN_HOUSEE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_FM_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption21foName_MTK_FM_SUPPORTE = NULL;

/* Demangled: android::ProcessBufferQueue(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18ProcessBufferQueueEb(void) {
    ALOGD("_ZN7android18ProcessBufferQueueEb() called");
    return 0;
}

/* Exported Object: android::FeatureOption::foName_MTK_TC10_IN_HOUSE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption24foName_MTK_TC10_IN_HOUSEE = NULL;

/* Demangled: android::FeatureOption::getValues() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13FeatureOption9getValuesEv(void) {
    ALOGD("_ZN7android13FeatureOption9getValuesEv() called");
    return 0;
}

/* Exported Object: android::mAudioDumpFileVector */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20mAudioDumpFileVectorE = NULL;

/* Demangled: android::fseek_s(__sFILE*, long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7fseek_sEP7__sFILEli(void) {
    ALOGD("_ZN7android7fseek_sEP7__sFILEli() called");
    return 0;
}

/* Demangled: android::newMtkAudioLoud(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15newMtkAudioLoudEjb(void) {
    ALOGD("_ZN7android15newMtkAudioLoudEjb() called");
    return 0;
}

/* Exported Object: android::FeatureOption::foName_MTK_TC10_FEATURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption23foName_MTK_TC10_FEATUREE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_BT_HEARING_AID_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption33foName_MTK_BT_HEARING_AID_SUPPORTE = NULL;

/* Exported Object: android::hAudioDumpThread */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16hAudioDumpThreadE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpLog */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump15keyAudioDumpLogE = NULL;

/* Exported Object: android::FeatureOption::MTK_FM_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption13MTK_FM_ENABLEE = NULL;

/* Exported Object: android::FeatureOption::foName_MTK_BESLOUDNESS_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption30foName_MTK_BESLOUDNESS_SUPPORTE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::MtkAudioLoud_InitParser() */
extern "C" __attribute__((visibility("default"))) int _ZN7android23MtkAudioLoud_InitParserEv(void) {
    ALOGD("_ZN7android23MtkAudioLoud_InitParserEv() called");
    return 0;
}

/* Exported Object: android::FeatureOption::foName_MTK_TTY_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption22foName_MTK_TTY_SUPPORTE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpMixerEnd */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20keyAudioDumpMixerEndE = NULL;

/* Exported Object: android::AudioDump::af_mixer_drc_pcm_before */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump23af_mixer_drc_pcm_beforeE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_BESLOUDNESS_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption22MTK_BESLOUDNESS_ENABLEE = NULL;

/* Demangled: android::UpdateWaveHeader(__sFILE*, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16UpdateWaveHeaderEP7__sFILENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android16UpdateWaveHeaderEP7__sFILENS_15AudioDumpBufferE() called");
    return 0;
}

/* Exported Object: android::AudioDump::af_resampler_in_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump19af_resampler_in_pcmE = NULL;

/* Demangled: android::AudioDump::checkPath(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump9checkPathEPKc(void) {
    ALOGD("_ZN7android9AudioDump9checkPathEPKc() called");
    return 0;
}

/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_15AudioDumpBufferEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_15AudioDumpBufferEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::UpdateAllWaveHeader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android19UpdateAllWaveHeaderEv(void) {
    ALOGD("_ZN7android19UpdateAllWaveHeaderEv() called");
    return 0;
}

/* Demangled: android::AudioDump::updateKeys(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9AudioDump10updateKeysEi(void) {
    ALOGD("_ZN7android9AudioDump10updateKeysEi() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_TTY_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption15MTK_TTY_SUPPORTE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::newMtkAudioCustParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN7android25newMtkAudioCustParamCacheEv(void) {
    ALOGD("_ZN7android25newMtkAudioCustParamCacheEv() called");
    return 0;
}

/* Exported Object: android::FeatureOption::MTK_AUDIOMIXER_ENABLE_DRC */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption25MTK_AUDIOMIXER_ENABLE_DRCE = NULL;

/* Exported Object: android::FeatureOption::MTK_AURISYS_FRAMEWORK_SUPPORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13FeatureOption29MTK_AURISYS_FRAMEWORK_SUPPORTE = NULL;

/* Exported Object: android::mAudioDumpFileMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19mAudioDumpFileMutexE = NULL;

/* Demangled: android::fopen_rb(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8fopen_rbENS_7String8E(void) {
    ALOGD("_ZN7android8fopen_rbENS_7String8E() called");
    return 0;
}

/* Demangled: android::fwrite_s(void const*, unsigned int, unsigned int, __sFILE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8fwrite_sEPKvjjP7__sFILE(void) {
    ALOGD("_ZN7android8fwrite_sEPKvjjP7__sFILE() called");
    return 0;
}

/* Exported Object: android::AudioDump::af_mixer_write_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump18af_mixer_write_pcmE = NULL;

/* Exported Object: android::AudioDump::af_resampler_out_pcm */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump20af_resampler_out_pcmE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpResampler */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump21keyAudioDumpResamplerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::AudioDumpBuffer*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPNS_15AudioDumpBufferEEE = NULL;

/* Demangled: android::WriteAudioBuffer(__sFILE*, android::AudioDumpBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WriteAudioBufferEP7__sFILENS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android16WriteAudioBufferEP7__sFILENS_15AudioDumpBufferE() called");
    return 0;
}

/* Exported Object: android::mAudioDumpSleepTime */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19mAudioDumpSleepTimeE = NULL;

/* Exported Object: android::AudioDataNotifyEvent */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20AudioDataNotifyEventE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpMixer */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump17keyAudioDumpMixerE = NULL;

/* Exported Object: android::AudioDump::keyAudioDumpTrack */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9AudioDump17keyAudioDumpTrackE = NULL;

/* Demangled: android::PushBufferFromeQueueToVector(android::String8, android::AudioDumpBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28PushBufferFromeQueueToVectorENS_7String8EPNS_15AudioDumpBufferE(void) {
    ALOGD("_ZN7android28PushBufferFromeQueueToVectorENS_7String8EPNS_15AudioDumpBufferE() called");
    return 0;
}

/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPNS_15AudioDumpBufferEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPNS_15AudioDumpBufferEE8do_splatEPvPKvj() called");
    return 0;
}
