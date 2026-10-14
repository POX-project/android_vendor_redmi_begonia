/*
 * Reverse-Engineered ABI Specification for: libaudioutilmtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudioutilmtk.so
 */

#ifndef BEGONIA_RE_LIBAUDIOUTILMTK_H
#define BEGONIA_RE_LIBAUDIOUTILMTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android13FeatureOption17MTK_USB_PHONECALLE */
/* Demangled: android::FeatureOption::MTK_USB_PHONECALL */
extern void* _ZN7android13FeatureOption17MTK_USB_PHONECALLE;

/* Symbol: _ZN7android13FeatureOption35foName_MTK_BESLOUDNESS_RUN_WITH_HALE */
/* Demangled: android::FeatureOption::foName_MTK_BESLOUDNESS_RUN_WITH_HAL */
extern void* _ZN7android13FeatureOption35foName_MTK_BESLOUDNESS_RUN_WITH_HALE;

/* Symbol: _ZN7android18UpdateWaveHeader_fENS_7String8ENS_15AudioDumpBufferE */
/* Demangled: android::UpdateWaveHeader_f(android::String8, android::AudioDumpBuffer) */
int _ZN7android18UpdateWaveHeader_fENS_7String8ENS_15AudioDumpBufferE(void);

/* Symbol: _ZN7android9AudioDump14pushBufferInfoEPKcPvi14audio_format_tjj */
/* Demangled: android::AudioDump::pushBufferInfo(char const*, void*, int, audio_format_t, unsigned int, unsigned int) */
int _ZN7android9AudioDump14pushBufferInfoEPKcPvi14audio_format_tjj(void);

/* Symbol: _ZN7android9AudioDump15keyAudioDumpDrcE */
/* Demangled: android::AudioDump::keyAudioDumpDrc */
extern void* _ZN7android9AudioDump15keyAudioDumpDrcE;

/* Symbol: _ZN7android13FeatureOption24foName_MTK_USB_PHONECALLE */
/* Demangled: android::FeatureOption::foName_MTK_USB_PHONECALL */
extern void* _ZN7android13FeatureOption24foName_MTK_USB_PHONECALLE;

/* Symbol: _ZN7android9AudioDump18keyAudioDumpRecordE */
/* Demangled: android::AudioDump::keyAudioDumpRecord */
extern void* _ZN7android9AudioDump18keyAudioDumpRecordE;

/* Symbol: _ZN7android9AudioDump21af_record_convert_pcmE */
/* Demangled: android::AudioDump::af_record_convert_pcm */
extern void* _ZN7android9AudioDump21af_record_convert_pcmE;

/* Symbol: _ZN7android9AudioDump22af_mixer_drc_pcm_afterE */
/* Demangled: android::AudioDump::af_mixer_drc_pcm_after */
extern void* _ZN7android9AudioDump22af_mixer_drc_pcm_afterE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZNK7android6VectorIPNS_15AudioDumpBufferEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_15AudioDumpBufferEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android9AudioDump12af_mixer_pcmE */
/* Demangled: android::AudioDump::af_mixer_pcm */
extern void* _ZN7android9AudioDump12af_mixer_pcmE;

/* Symbol: _ZN7android9AudioDump12af_track_pcmE */
/* Demangled: android::AudioDump::af_track_pcm */
extern void* _ZN7android9AudioDump12af_track_pcmE;

/* Symbol: _ZN7android9AudioDump18keyAudioDumpAAudioE */
/* Demangled: android::AudioDump::keyAudioDumpAAudio */
extern void* _ZN7android9AudioDump18keyAudioDumpAAudioE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEEE;

/* Symbol: _ZN7android13FeatureOption36foName_MTK_AURISYS_FRAMEWORK_SUPPORTE */
/* Demangled: android::FeatureOption::foName_MTK_AURISYS_FRAMEWORK_SUPPORT */
extern void* _ZN7android13FeatureOption36foName_MTK_AURISYS_FRAMEWORK_SUPPORTE;

/* Symbol: _ZN7android9AudioDump15aaudio_share_dlE */
/* Demangled: android::AudioDump::aaudio_share_dl */
extern void* _ZN7android9AudioDump15aaudio_share_dlE;

/* Symbol: _ZN7android9AudioDump20audioDumpPropertyStrE */
/* Demangled: android::AudioDump::audioDumpPropertyStr */
extern void* _ZN7android9AudioDump20audioDumpPropertyStrE;

/* Symbol: _ZN7android13FeatureOption34foName_MTK_AUDIO_NUMBER_OF_SPEAKERE */
/* Demangled: android::FeatureOption::foName_MTK_AUDIO_NUMBER_OF_SPEAKER */
extern void* _ZN7android13FeatureOption34foName_MTK_AUDIO_NUMBER_OF_SPEAKERE;

/* Symbol: _ZN7android9AudioDump11getPropertyENS0_15PROP_AUDIO_DUMPE */
/* Demangled: android::AudioDump::getProperty(android::AudioDump::PROP_AUDIO_DUMP) */
int _ZN7android9AudioDump11getPropertyENS0_15PROP_AUDIO_DUMPE(void);

/* Symbol: _ZN7android9AudioDump4dumpEPKcPvi */
/* Demangled: android::AudioDump::dump(char const*, void*, int) */
int _ZN7android9AudioDump4dumpEPKcPvi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android13FeatureOption28foName_MTK_HIFIAUDIO_SUPPORTE */
/* Demangled: android::FeatureOption::foName_MTK_HIFIAUDIO_SUPPORT */
extern void* _ZN7android13FeatureOption28foName_MTK_HIFIAUDIO_SUPPORTE;

/* Symbol: _ZN7android25mAudioDumpKeyEnableVectorE */
/* Demangled: android::mAudioDumpKeyEnableVector */
extern void* _ZN7android25mAudioDumpKeyEnableVectorE;

/* Symbol: _ZN7android9AudioDump13af_effect_pcmE */
/* Demangled: android::AudioDump::af_effect_pcm */
extern void* _ZN7android9AudioDump13af_effect_pcmE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android13FeatureOption16MTK_TC10_FEATUREE */
/* Demangled: android::FeatureOption::MTK_TC10_FEATURE */
extern void* _ZN7android13FeatureOption16MTK_TC10_FEATUREE;

/* Symbol: _ZN7android20AudioDataNotifyMutexE */
/* Demangled: android::AudioDataNotifyMutex */
extern void* _ZN7android20AudioDataNotifyMutexE;

/* Symbol: _ZN7android9AudioDump15aaudio_share_ulE */
/* Demangled: android::AudioDump::aaudio_share_ul */
extern void* _ZN7android9AudioDump15aaudio_share_ulE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIPNS_15AudioDumpBufferEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_15AudioDumpBufferEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIPNS_15AudioDumpBufferEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_15AudioDumpBufferEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android7fread_sEPvjjP7__sFILE */
/* Demangled: android::fread_s(void*, unsigned int, unsigned int, __sFILE*) */
int _ZN7android7fread_sEPvjjP7__sFILE(void);

/* Symbol: _ZN7android9AudioDump19keyAudioDumpOffloadE */
/* Demangled: android::AudioDump::keyAudioDumpOffload */
extern void* _ZN7android9AudioDump19keyAudioDumpOffloadE;

/* Symbol: _ZN7android18mAudioDumpKeyMutexE */
/* Demangled: android::mAudioDumpKeyMutex */
extern void* _ZN7android18mAudioDumpKeyMutexE;

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android13FeatureOption20MTK_AUDIO_GAIN_NVRAME */
/* Demangled: android::FeatureOption::MTK_AUDIO_GAIN_NVRAM */
extern void* _ZN7android13FeatureOption20MTK_AUDIO_GAIN_NVRAME;

/* Symbol: _ZN7android13FeatureOption20MTK_AUDIO_GAIN_TABLEE */
/* Demangled: android::FeatureOption::MTK_AUDIO_GAIN_TABLE */
extern void* _ZN7android13FeatureOption20MTK_AUDIO_GAIN_TABLEE;

/* Symbol: _ZN7android13FeatureOption37foName_MTK_AUDIO_A2DP_LATENCY_IMPROVEE */
/* Demangled: android::FeatureOption::foName_MTK_AUDIO_A2DP_LATENCY_IMPROVE */
extern void* _ZN7android13FeatureOption37foName_MTK_AUDIO_A2DP_LATENCY_IMPROVEE;

/* Symbol: _ZN7android9AudioDump18af_record_read_pcmE */
/* Demangled: android::AudioDump::af_record_read_pcm */
extern void* _ZN7android9AudioDump18af_record_read_pcmE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_compareEPKvS7_(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android13FeatureOption26MTK_BT_HEARING_AID_SUPPORTE */
/* Demangled: android::FeatureOption::MTK_BT_HEARING_AID_SUPPORT */
extern void* _ZN7android13FeatureOption26MTK_BT_HEARING_AID_SUPPORTE;

/* Symbol: _ZN7android13FeatureOption43foName_MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORTE */
/* Demangled: android::FeatureOption::foName_MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORT */
extern void* _ZN7android13FeatureOption43foName_MTK_AUDIO_HIERARCHICAL_PARAM_SUPPORTE;

/* Symbol: _ZN7android15AudioDumpThreadEPv */
/* Demangled: android::AudioDumpThread(void*) */
int _ZN7android15AudioDumpThreadEPv(void);

/* Symbol: _ZN7android25mAudioDumpFileIoDelayTimeE */
/* Demangled: android::mAudioDumpFileIoDelayTime */
extern void* _ZN7android25mAudioDumpFileIoDelayTimeE;

/* Symbol: _ZN7android9AudioDump19aaudio_exclusive_dlE */
/* Demangled: android::AudioDump::aaudio_exclusive_dl */
extern void* _ZN7android9AudioDump19aaudio_exclusive_dlE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android13FeatureOption25MTK_ENABLE_STEREO_SPEAKERE */
/* Demangled: android::FeatureOption::MTK_ENABLE_STEREO_SPEAKER */
extern void* _ZN7android13FeatureOption25MTK_ENABLE_STEREO_SPEAKERE;

/* Symbol: _ZN7android9AudioDump10threadDumpEPKcPvi14audio_format_tjj */
/* Demangled: android::AudioDump::threadDump(char const*, void*, int, audio_format_t, unsigned int, unsigned int) */
int _ZN7android9AudioDump10threadDumpEPKcPvi14audio_format_tjj(void);

/* Symbol: _ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE */
/* Demangled: android::deleteMtkAudioLoud(android::MtkAudioLoudBase*) */
int _ZN7android18deleteMtkAudioLoudEPNS_16MtkAudioLoudBaseE(void);

/* Symbol: _ZN7android21mAudioDumpQueueVectorE */
/* Demangled: android::mAudioDumpQueueVector */
extern void* _ZN7android21mAudioDumpQueueVectorE;

/* Symbol: _ZN7android9AudioDump16af_mixer_end_pcmE */
/* Demangled: android::AudioDump::af_mixer_end_pcm */
extern void* _ZN7android9AudioDump16af_mixer_end_pcmE;

/* Symbol: _ZNK7android6VectorIPNS_15AudioDumpBufferEE10do_destroyEPvj */
/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_15AudioDumpBufferEE10do_destroyEPvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEEE;

/* Symbol: _ZN7android13FeatureOption21MTK_HIFIAUDIO_SUPPORTE */
/* Demangled: android::FeatureOption::MTK_HIFIAUDIO_SUPPORT */
extern void* _ZN7android13FeatureOption21MTK_HIFIAUDIO_SUPPORTE;

/* Symbol: _ZN7android18WriteNewWaveHeaderEP7__sFILENS_15AudioDumpBufferE */
/* Demangled: android::WriteNewWaveHeader(__sFILE*, android::AudioDumpBuffer) */
int _ZN7android18WriteNewWaveHeaderEP7__sFILENS_15AudioDumpBufferE(void);

/* Symbol: _ZN7android9AudioDump19aaudio_exclusive_ulE */
/* Demangled: android::AudioDump::aaudio_exclusive_ul */
extern void* _ZN7android9AudioDump19aaudio_exclusive_ulE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvj */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void);

/* Symbol: _ZN7android31AUDIO_COMPONENT_ENGINE_LIB_PATHE */
/* Demangled: android::AUDIO_COMPONENT_ENGINE_LIB_PATH */
extern void* _ZN7android31AUDIO_COMPONENT_ENGINE_LIB_PATHE;

/* Symbol: _ZN7android15mAudioDumpMutexE */
/* Demangled: android::mAudioDumpMutex */
extern void* _ZN7android15mAudioDumpMutexE;

/* Symbol: _ZN7android23deleteMtkCustParamCacheEPNS_26MtkAudioCustParamCacheBaseE */
/* Demangled: android::deleteMtkCustParamCache(android::MtkAudioCustParamCacheBase*) */
int _ZN7android23deleteMtkCustParamCacheEPNS_26MtkAudioCustParamCacheBaseE(void);

/* Symbol: _ZN7android13FeatureOption18AOSP_USB_PHONECALLE */
/* Demangled: android::FeatureOption::AOSP_USB_PHONECALL */
extern void* _ZN7android13FeatureOption18AOSP_USB_PHONECALLE;

/* Symbol: _ZN7android13FeatureOption30MTK_AUDIO_A2DP_LATENCY_IMPROVEE */
/* Demangled: android::FeatureOption::MTK_AUDIO_A2DP_LATENCY_IMPROVE */
extern void* _ZN7android13FeatureOption30MTK_AUDIO_A2DP_LATENCY_IMPROVEE;

/* Symbol: _ZN7android9AudioDump20af_offload_write_rawE */
/* Demangled: android::AudioDump::af_offload_write_raw */
extern void* _ZN7android9AudioDump20af_offload_write_rawE;

/* Symbol: _ZN7android9AudioDump18keyAudioDumpEffectE */
/* Demangled: android::AudioDump::keyAudioDumpEffect */
extern void* _ZN7android9AudioDump18keyAudioDumpEffectE;

/* Symbol: _ZN7android13FeatureOption17MTK_TC10_IN_HOUSEE */
/* Demangled: android::FeatureOption::MTK_TC10_IN_HOUSE */
extern void* _ZN7android13FeatureOption17MTK_TC10_IN_HOUSEE;

/* Symbol: _ZN7android13FeatureOption21foName_MTK_FM_SUPPORTE */
/* Demangled: android::FeatureOption::foName_MTK_FM_SUPPORT */
extern void* _ZN7android13FeatureOption21foName_MTK_FM_SUPPORTE;

/* Symbol: _ZN7android18ProcessBufferQueueEb */
/* Demangled: android::ProcessBufferQueue(bool) */
int _ZN7android18ProcessBufferQueueEb(void);

/* Symbol: _ZN7android13FeatureOption24foName_MTK_TC10_IN_HOUSEE */
/* Demangled: android::FeatureOption::foName_MTK_TC10_IN_HOUSE */
extern void* _ZN7android13FeatureOption24foName_MTK_TC10_IN_HOUSEE;

/* Symbol: _ZN7android13FeatureOption9getValuesEv */
/* Demangled: android::FeatureOption::getValues() */
int _ZN7android13FeatureOption9getValuesEv(void);

/* Symbol: _ZN7android20mAudioDumpFileVectorE */
/* Demangled: android::mAudioDumpFileVector */
extern void* _ZN7android20mAudioDumpFileVectorE;

/* Symbol: _ZN7android7fseek_sEP7__sFILEli */
/* Demangled: android::fseek_s(__sFILE*, long, int) */
int _ZN7android7fseek_sEP7__sFILEli(void);

/* Symbol: _ZN7android15newMtkAudioLoudEjb */
/* Demangled: android::newMtkAudioLoud(unsigned int, bool) */
int _ZN7android15newMtkAudioLoudEjb(void);

/* Symbol: _ZN7android13FeatureOption23foName_MTK_TC10_FEATUREE */
/* Demangled: android::FeatureOption::foName_MTK_TC10_FEATURE */
extern void* _ZN7android13FeatureOption23foName_MTK_TC10_FEATUREE;

/* Symbol: _ZN7android13FeatureOption33foName_MTK_BT_HEARING_AID_SUPPORTE */
/* Demangled: android::FeatureOption::foName_MTK_BT_HEARING_AID_SUPPORT */
extern void* _ZN7android13FeatureOption33foName_MTK_BT_HEARING_AID_SUPPORTE;

/* Symbol: _ZN7android16hAudioDumpThreadE */
/* Demangled: android::hAudioDumpThread */
extern void* _ZN7android16hAudioDumpThreadE;

/* Symbol: _ZN7android9AudioDump15keyAudioDumpLogE */
/* Demangled: android::AudioDump::keyAudioDumpLog */
extern void* _ZN7android9AudioDump15keyAudioDumpLogE;

/* Symbol: _ZN7android13FeatureOption13MTK_FM_ENABLEE */
/* Demangled: android::FeatureOption::MTK_FM_ENABLE */
extern void* _ZN7android13FeatureOption13MTK_FM_ENABLEE;

/* Symbol: _ZN7android13FeatureOption30foName_MTK_BESLOUDNESS_SUPPORTE */
/* Demangled: android::FeatureOption::foName_MTK_BESLOUDNESS_SUPPORT */
extern void* _ZN7android13FeatureOption30foName_MTK_BESLOUDNESS_SUPPORTE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE12do_constructEPvj(void);

/* Symbol: _ZN7android23MtkAudioLoud_InitParserEv */
/* Demangled: android::MtkAudioLoud_InitParser() */
int _ZN7android23MtkAudioLoud_InitParserEv(void);

/* Symbol: _ZN7android13FeatureOption22foName_MTK_TTY_SUPPORTE */
/* Demangled: android::FeatureOption::foName_MTK_TTY_SUPPORT */
extern void* _ZN7android13FeatureOption22foName_MTK_TTY_SUPPORTE;

/* Symbol: _ZN7android9AudioDump20keyAudioDumpMixerEndE */
/* Demangled: android::AudioDump::keyAudioDumpMixerEnd */
extern void* _ZN7android9AudioDump20keyAudioDumpMixerEndE;

/* Symbol: _ZN7android9AudioDump23af_mixer_drc_pcm_beforeE */
/* Demangled: android::AudioDump::af_mixer_drc_pcm_before */
extern void* _ZN7android9AudioDump23af_mixer_drc_pcm_beforeE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvj */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void);

/* Symbol: _ZN7android13FeatureOption22MTK_BESLOUDNESS_ENABLEE */
/* Demangled: android::FeatureOption::MTK_BESLOUDNESS_ENABLE */
extern void* _ZN7android13FeatureOption22MTK_BESLOUDNESS_ENABLEE;

/* Symbol: _ZN7android16UpdateWaveHeaderEP7__sFILENS_15AudioDumpBufferE */
/* Demangled: android::UpdateWaveHeader(__sFILE*, android::AudioDumpBuffer) */
int _ZN7android16UpdateWaveHeaderEP7__sFILENS_15AudioDumpBufferE(void);

/* Symbol: _ZN7android9AudioDump19af_resampler_in_pcmE */
/* Demangled: android::AudioDump::af_resampler_in_pcm */
extern void* _ZN7android9AudioDump19af_resampler_in_pcmE;

/* Symbol: _ZN7android9AudioDump9checkPathEPKc */
/* Demangled: android::AudioDump::checkPath(char const*) */
int _ZN7android9AudioDump9checkPathEPKc(void);

/* Symbol: _ZNK7android6VectorIPNS_15AudioDumpBufferEE12do_constructEPvj */
/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPNS_15AudioDumpBufferEE12do_constructEPvj(void);

/* Symbol: _ZN7android19UpdateAllWaveHeaderEv */
/* Demangled: android::UpdateAllWaveHeader() */
int _ZN7android19UpdateAllWaveHeaderEv(void);

/* Symbol: _ZN7android9AudioDump10updateKeysEi */
/* Demangled: android::AudioDump::updateKeys(int) */
int _ZN7android9AudioDump10updateKeysEi(void);

/* Symbol: _ZN7android13FeatureOption15MTK_TTY_SUPPORTE */
/* Demangled: android::FeatureOption::MTK_TTY_SUPPORT */
extern void* _ZN7android13FeatureOption15MTK_TTY_SUPPORTE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android25newMtkAudioCustParamCacheEv */
/* Demangled: android::newMtkAudioCustParamCache() */
int _ZN7android25newMtkAudioCustParamCacheEv(void);

/* Symbol: _ZN7android13FeatureOption25MTK_AUDIOMIXER_ENABLE_DRCE */
/* Demangled: android::FeatureOption::MTK_AUDIOMIXER_ENABLE_DRC */
extern void* _ZN7android13FeatureOption25MTK_AUDIOMIXER_ENABLE_DRCE;

/* Symbol: _ZN7android13FeatureOption29MTK_AURISYS_FRAMEWORK_SUPPORTE */
/* Demangled: android::FeatureOption::MTK_AURISYS_FRAMEWORK_SUPPORT */
extern void* _ZN7android13FeatureOption29MTK_AURISYS_FRAMEWORK_SUPPORTE;

/* Symbol: _ZN7android19mAudioDumpFileMutexE */
/* Demangled: android::mAudioDumpFileMutex */
extern void* _ZN7android19mAudioDumpFileMutexE;

/* Symbol: _ZN7android8fopen_rbENS_7String8E */
/* Demangled: android::fopen_rb(android::String8) */
int _ZN7android8fopen_rbENS_7String8E(void);

/* Symbol: _ZN7android8fwrite_sEPKvjjP7__sFILE */
/* Demangled: android::fwrite_s(void const*, unsigned int, unsigned int, __sFILE*) */
int _ZN7android8fwrite_sEPKvjjP7__sFILE(void);

/* Symbol: _ZN7android9AudioDump18af_mixer_write_pcmE */
/* Demangled: android::AudioDump::af_mixer_write_pcm */
extern void* _ZN7android9AudioDump18af_mixer_write_pcmE;

/* Symbol: _ZN7android9AudioDump20af_resampler_out_pcmE */
/* Demangled: android::AudioDump::af_resampler_out_pcm */
extern void* _ZN7android9AudioDump20af_resampler_out_pcmE;

/* Symbol: _ZN7android9AudioDump21keyAudioDumpResamplerE */
/* Demangled: android::AudioDump::keyAudioDumpResampler */
extern void* _ZN7android9AudioDump21keyAudioDumpResamplerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<android::AudioDumpBuffer*>*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EPNS_6VectorIPNS_15AudioDumpBufferEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::AudioDump::PROP_AUDIO_DUMP, int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_9AudioDump15PROP_AUDIO_DUMPEiEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIPNS_15AudioDumpBufferEEE */
/* Demangled: vtable for android::Vector<android::AudioDumpBuffer*> */
extern void* _ZTVN7android6VectorIPNS_15AudioDumpBufferEEE;

/* Symbol: _ZN7android16WriteAudioBufferEP7__sFILENS_15AudioDumpBufferE */
/* Demangled: android::WriteAudioBuffer(__sFILE*, android::AudioDumpBuffer) */
int _ZN7android16WriteAudioBufferEP7__sFILENS_15AudioDumpBufferE(void);

/* Symbol: _ZN7android19mAudioDumpSleepTimeE */
/* Demangled: android::mAudioDumpSleepTime */
extern void* _ZN7android19mAudioDumpSleepTimeE;

/* Symbol: _ZN7android20AudioDataNotifyEventE */
/* Demangled: android::AudioDataNotifyEvent */
extern void* _ZN7android20AudioDataNotifyEventE;

/* Symbol: _ZN7android9AudioDump17keyAudioDumpMixerE */
/* Demangled: android::AudioDump::keyAudioDumpMixer */
extern void* _ZN7android9AudioDump17keyAudioDumpMixerE;

/* Symbol: _ZN7android9AudioDump17keyAudioDumpTrackE */
/* Demangled: android::AudioDump::keyAudioDumpTrack */
extern void* _ZN7android9AudioDump17keyAudioDumpTrackE;

/* Symbol: _ZN7android28PushBufferFromeQueueToVectorENS_7String8EPNS_15AudioDumpBufferE */
/* Demangled: android::PushBufferFromeQueueToVector(android::String8, android::AudioDumpBuffer*) */
int _ZN7android28PushBufferFromeQueueToVectorENS_7String8EPNS_15AudioDumpBufferE(void);

/* Symbol: _ZNK7android6VectorIPNS_15AudioDumpBufferEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::AudioDumpBuffer*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPNS_15AudioDumpBufferEE8do_splatEPvPKvj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOUTILMTK_H */
