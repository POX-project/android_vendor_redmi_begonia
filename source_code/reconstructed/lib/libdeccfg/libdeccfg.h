/*
 * Reverse-Engineered ABI Specification for: libdeccfg.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdeccfg.so
 */

#ifndef BEGONIA_RE_LIBDECCFG_H
#define BEGONIA_RE_LIBDECCFG_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5dolby13DapParamCache3setEiPKii */
/* Demangled: dolby::DapParamCache::set(int, int const*, int) */
int _ZN5dolby13DapParamCache3setEiPKii(void);

/* Symbol: _ZN5dolby9DecConfig12getOffParamsEv */
/* Demangled: dolby::DecConfig::getOffParams() */
int _ZN5dolby9DecConfig12getOffParamsEv(void);

/* Symbol: _ZN5dolby13DecParamArray21mDynamicProfileParamsE */
/* Demangled: dolby::DecParamArray::mDynamicProfileParams */
extern void* _ZN5dolby13DecParamArray21mDynamicProfileParamsE;

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEE11getInstanceEv */
/* Demangled: android::Singleton<dolby::DecParamArray>::getInstance() */
int _ZN7android9SingletonIN5dolby13DecParamArrayEE11getInstanceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE12do_constructEPvj(void);

/* Symbol: _ZN5dolby13DecParamCacheD2Ev */
/* Demangled: dolby::DecParamCache::~DecParamCache() */
int _ZN5dolby13DecParamCacheD2Ev(void);

/* Symbol: _ZN5dolby9DecConfig14getOutputLevelEv */
/* Demangled: dolby::DecConfig::getOutputLevel() */
int _ZN5dolby9DecConfig14getOutputLevelEv(void);

/* Symbol: _ZNK5dolby13DapParamCache6Values3getEPii */
/* Demangled: dolby::DapParamCache::Values::get(int*, int) const */
int _ZNK5dolby13DapParamCache6Values3getEPii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5dolby16DecDynamicConfig14setOutputLevelEib */
/* Demangled: dolby::DecDynamicConfig::setOutputLevel(int, bool) */
int _ZN5dolby16DecDynamicConfig14setOutputLevelEib(void);

/* Symbol: _ZN5dolby16DecDynamicConfigD2Ev */
/* Demangled: dolby::DecDynamicConfig::~DecDynamicConfig() */
int _ZN5dolby16DecDynamicConfigD2Ev(void);

/* Symbol: _ZN5dolby16DecDynamicConfig8setDaxOnEbb */
/* Demangled: dolby::DecDynamicConfig::setDaxOn(bool, bool) */
int _ZN5dolby16DecDynamicConfig8setDaxOnEbb(void);

/* Symbol: _ZN5dolby13DecParamArray20getProfileParamsSizeENS_15DlbDecProfileIdE */
/* Demangled: dolby::DecParamArray::getProfileParamsSize(dolby::DlbDecProfileId) */
int _ZN5dolby13DecParamArray20getProfileParamsSizeENS_15DlbDecProfileIdE(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEEC2Ev */
/* Demangled: android::Singleton<dolby::DecParamArray>::Singleton() */
int _ZN7android9SingletonIN5dolby13DecParamArrayEEC2Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void);

/* Symbol: _ZN5dolby14DecParamParserC1EPvi */
/* Demangled: dolby::DecParamParser::DecParamParser(void*, int) */
int _ZN5dolby14DecParamParserC1EPvi(void);

/* Symbol: _ZN5dolby13DecParamCache17markParamModifiedEi */
/* Demangled: dolby::DecParamCache::markParamModified(int) */
int _ZN5dolby13DecParamCache17markParamModifiedEi(void);

/* Symbol: _ZN5dolby9DecConfig14setOutputLevelEib */
/* Demangled: dolby::DecConfig::setOutputLevel(int, bool) */
int _ZN5dolby9DecConfig14setOutputLevelEib(void);

/* Symbol: _ZN5dolby16DecDynamicConfig15updateCodecTypeEi */
/* Demangled: dolby::DecDynamicConfig::updateCodecType(int) */
int _ZN5dolby16DecDynamicConfig15updateCodecTypeEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5dolby9DecConfig22setSpeakerPortraitModeEb */
/* Demangled: dolby::DecConfig::setSpeakerPortraitMode(bool) */
int _ZN5dolby9DecConfig22setSpeakerPortraitModeEb(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEE11hasInstanceEv */
/* Demangled: android::Singleton<dolby::DecParamArray>::hasInstance() */
int _ZN7android9SingletonIN5dolby13DecParamArrayEE11hasInstanceEv(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEE9sInstanceE */
/* Demangled: android::Singleton<dolby::DecParamArray>::sInstance */
extern void* _ZN7android9SingletonIN5dolby13DecParamArrayEE9sInstanceE;

/* Symbol: _ZN5dolby13DapParamCache6ValuesD2Ev */
/* Demangled: dolby::DapParamCache::Values::~Values() */
int _ZN5dolby13DapParamCache6ValuesD2Ev(void);

/* Symbol: _ZN5dolby9DecConfig9initStateEv */
/* Demangled: dolby::DecConfig::initState() */
int _ZN5dolby9DecConfig9initStateEv(void);

/* Symbol: _ZN5dolby16DecDynamicConfig16checkShareConfigEv */
/* Demangled: dolby::DecDynamicConfig::checkShareConfig() */
int _ZN5dolby16DecDynamicConfig16checkShareConfigEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj(void);

/* Symbol: _ZN5dolby13DapParamCache3getEi */
/* Demangled: dolby::DapParamCache::get(int) */
int _ZN5dolby13DapParamCache3getEi(void);

/* Symbol: _ZN5dolby13DecParamCacheC1Ev */
/* Demangled: dolby::DecParamCache::DecParamCache() */
int _ZN5dolby13DecParamCacheC1Ev(void);

/* Symbol: _ZN5dolby9DecConfig12getDapParamsEv */
/* Demangled: dolby::DecConfig::getDapParams() */
int _ZN5dolby9DecConfig12getDapParamsEv(void);

/* Symbol: _ZN5dolby9DecConfig18setTuningParamDHSAEi */
/* Demangled: dolby::DecConfig::setTuningParamDHSA(int) */
int _ZN5dolby9DecConfig18setTuningParamDHSAEi(void);

/* Symbol: _ZN5dolby16DecDynamicConfig15isConfigChangedEv */
/* Demangled: dolby::DecDynamicConfig::isConfigChanged() */
int _ZN5dolby16DecDynamicConfig15isConfigChangedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEED2Ev */
/* Demangled: android::Singleton<dolby::DecParamArray>::~Singleton() */
int _ZN7android9SingletonIN5dolby13DecParamArrayEED2Ev(void);

/* Symbol: _ZN5dolby13DapParamCache6Values3setEPKii */
/* Demangled: dolby::DapParamCache::Values::set(int const*, int) */
int _ZN5dolby13DapParamCache6Values3setEPKii(void);

/* Symbol: _ZN5dolby9DecConfigC2Ev */
/* Demangled: dolby::DecConfig::DecConfig() */
int _ZN5dolby9DecConfigC2Ev(void);

/* Symbol: _ZN5dolby16DecDynamicConfig15setProfileIndexEjb */
/* Demangled: dolby::DecDynamicConfig::setProfileIndex(unsigned int, bool) */
int _ZN5dolby16DecDynamicConfig15setProfileIndexEjb(void);

/* Symbol: _ZN5dolby13DecParamArray20mCustomProfileParamsE */
/* Demangled: dolby::DecParamArray::mCustomProfileParams */
extern void* _ZN5dolby13DecParamArray20mCustomProfileParamsE;

/* Symbol: _ZN5dolby13DecParamArrayC1Ev */
/* Demangled: dolby::DecParamArray::DecParamArray() */
int _ZN5dolby13DecParamArrayC1Ev(void);

/* Symbol: _ZN5dolby14DecParamParser4nextEv */
/* Demangled: dolby::DecParamParser::next() */
int _ZN5dolby14DecParamParser4nextEv(void);

/* Symbol: _ZN5dolby12ParserBufferC2EPvi */
/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
int _ZN5dolby12ParserBufferC2EPvi(void);

/* Symbol: _ZN5dolby9DecConfig15setProfileIndexEjb */
/* Demangled: dolby::DecConfig::setProfileIndex(unsigned int, bool) */
int _ZN5dolby9DecConfig15setProfileIndexEjb(void);

/* Symbol: _ZN5dolby13DecParamArray19mMovieProfileParamsE */
/* Demangled: dolby::DecParamArray::mMovieProfileParams */
extern void* _ZN5dolby13DecParamArray19mMovieProfileParamsE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5dolby13DapParamCacheD1Ev */
/* Demangled: dolby::DapParamCache::~DapParamCache() */
int _ZN5dolby13DapParamCacheD1Ev(void);

/* Symbol: _ZN5dolby16DecDynamicConfig14getOutputLevelEv */
/* Demangled: dolby::DecDynamicConfig::getOutputLevel() */
int _ZN5dolby16DecDynamicConfig14getOutputLevelEv(void);

/* Symbol: _ZN5dolby16DecDynamicConfig9getDeGainEv */
/* Demangled: dolby::DecDynamicConfig::getDeGain() */
int _ZN5dolby16DecDynamicConfig9getDeGainEv(void);

/* Symbol: _ZN5dolby16DecDynamicConfigC2Ei */
/* Demangled: dolby::DecDynamicConfig::DecDynamicConfig(int) */
int _ZN5dolby16DecDynamicConfigC2Ei(void);

/* Symbol: _ZTVN5dolby16DecDynamicConfig12DecCallbacksE */
/* Demangled: vtable for dolby::DecDynamicConfig::DecCallbacks */
extern void* _ZTVN5dolby16DecDynamicConfig12DecCallbacksE;

/* Symbol: _ZN5dolby13DapParamCache3getEiPii */
/* Demangled: dolby::DapParamCache::get(int, int*, int) */
int _ZN5dolby13DapParamCache3getEiPii(void);

/* Symbol: _ZN5dolby9DecConfigD0Ev */
/* Demangled: dolby::DecConfig::~DecConfig() */
int _ZN5dolby9DecConfigD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5dolby13DecParamArray24mAtmosMusicProfileParamsE */
/* Demangled: dolby::DecParamArray::mAtmosMusicProfileParams */
extern void* _ZN5dolby13DecParamArray24mAtmosMusicProfileParamsE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5dolby13DapParamCache3getEiPiS1_ */
/* Demangled: dolby::DapParamCache::get(int, int*, int*) */
int _ZN5dolby13DapParamCache3getEiPiS1_(void);

/* Symbol: _ZN5dolby13DapParamCache6ValuesC1Ev */
/* Demangled: dolby::DapParamCache::Values::Values() */
int _ZN5dolby13DapParamCache6ValuesC1Ev(void);

/* Symbol: _ZN5dolby13DecParamCacheD1Ev */
/* Demangled: dolby::DecParamCache::~DecParamCache() */
int _ZN5dolby13DecParamCacheD1Ev(void);

/* Symbol: _ZN5dolby13DecParamArray13mCommonParamsE */
/* Demangled: dolby::DecParamArray::mCommonParams */
extern void* _ZN5dolby13DecParamArray13mCommonParamsE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5dolby16DecDynamicConfigD1Ev */
/* Demangled: dolby::DecDynamicConfig::~DecDynamicConfig() */
int _ZN5dolby16DecDynamicConfigD1Ev(void);

/* Symbol: _ZN5dolby13DecParamArray17mOffProfileParamsE */
/* Demangled: dolby::DecParamArray::mOffProfileParams */
extern void* _ZN5dolby13DecParamArray17mOffProfileParamsE;

/* Symbol: _ZN5dolby12ParserBufferC1EPvi */
/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
int _ZN5dolby12ParserBufferC1EPvi(void);

/* Symbol: _ZN5dolby9DecConfig18setOutChannelCountEj */
/* Demangled: dolby::DecConfig::setOutChannelCount(unsigned int) */
int _ZN5dolby9DecConfig18setOutChannelCountEj(void);

/* Symbol: _ZN5dolby9DecConfigD2Ev */
/* Demangled: dolby::DecConfig::~DecConfig() */
int _ZN5dolby9DecConfigD2Ev(void);

/* Symbol: _ZN5dolby13DecParamArray16getProfileParamsENS_15DlbDecProfileIdEPv */
/* Demangled: dolby::DecParamArray::getProfileParams(dolby::DlbDecProfileId, void*) */
int _ZN5dolby13DecParamArray16getProfileParamsENS_15DlbDecProfileIdEPv(void);

/* Symbol: _ZN5dolby13DecParamArray19mMusicProfileParamsE */
/* Demangled: dolby::DecParamArray::mMusicProfileParams */
extern void* _ZN5dolby13DecParamArray19mMusicProfileParamsE;

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEEC1Ev */
/* Demangled: android::Singleton<dolby::DecParamArray>::Singleton() */
int _ZN7android9SingletonIN5dolby13DecParamArrayEEC1Ev(void);

/* Symbol: _ZN5dolby9DecConfig9setDeGainEib */
/* Demangled: dolby::DecConfig::setDeGain(int, bool) */
int _ZN5dolby9DecConfig9setDeGainEib(void);

/* Symbol: _ZN5dolby16DecDynamicConfig9setDeGainEib */
/* Demangled: dolby::DecDynamicConfig::setDeGain(int, bool) */
int _ZN5dolby16DecDynamicConfig9setDeGainEib(void);

/* Symbol: _ZTVN5dolby16DecDynamicConfigE */
/* Demangled: vtable for dolby::DecDynamicConfig */
extern void* _ZTVN5dolby16DecDynamicConfigE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5dolby9DecConfig18setTuningParamDFSAEi */
/* Demangled: dolby::DecConfig::setTuningParamDFSA(int) */
int _ZN5dolby9DecConfig18setTuningParamDFSAEi(void);

/* Symbol: _ZN5dolby14DecParamParser8validateEv */
/* Demangled: dolby::DecParamParser::validate() */
int _ZN5dolby14DecParamParser8validateEv(void);

/* Symbol: _ZTVN5dolby9DecConfigE */
/* Demangled: vtable for dolby::DecConfig */
extern void* _ZTVN5dolby9DecConfigE;

/* Symbol: _ZN5dolby13DapParamCache6ValuesD1Ev */
/* Demangled: dolby::DapParamCache::Values::~Values() */
int _ZN5dolby13DapParamCache6ValuesD1Ev(void);

/* Symbol: _ZN5dolby9DecConfig18updateDeviceParamsEPNS_13DapParamCacheE */
/* Demangled: dolby::DecConfig::updateDeviceParams(dolby::DapParamCache*) */
int _ZN5dolby9DecConfig18updateDeviceParamsEPNS_13DapParamCacheE(void);

/* Symbol: _ZN5dolby9DecConfig22setMonoInternalSpeakerEb */
/* Demangled: dolby::DecConfig::setMonoInternalSpeaker(bool) */
int _ZN5dolby9DecConfig22setMonoInternalSpeakerEb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5dolby13DecParamCache15getDeviceParamsE15audio_devices_t */
/* Demangled: dolby::DecParamCache::getDeviceParams(audio_devices_t) */
int _ZN5dolby13DecParamCache15getDeviceParamsE15audio_devices_t(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEE5sLockE */
/* Demangled: android::Singleton<dolby::DecParamArray>::sLock */
extern void* _ZN7android9SingletonIN5dolby13DecParamArrayEE5sLockE;

/* Symbol: _ZN7android9SingletonIN5dolby13DecParamArrayEED1Ev */
/* Demangled: android::Singleton<dolby::DecParamArray>::~Singleton() */
int _ZN7android9SingletonIN5dolby13DecParamArrayEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5dolby9DecConfig15setActiveDeviceE15audio_devices_tb */
/* Demangled: dolby::DecConfig::setActiveDevice(audio_devices_t, bool) */
int _ZN5dolby9DecConfig15setActiveDeviceE15audio_devices_tb(void);

/* Symbol: _ZN5dolby12ParserBuffer4skipEi */
/* Demangled: dolby::ParserBuffer::skip(int) */
int _ZN5dolby12ParserBuffer4skipEi(void);

/* Symbol: _ZN5dolby9DecConfig17setTuningParamDSAEi */
/* Demangled: dolby::DecConfig::setTuningParamDSA(int) */
int _ZN5dolby9DecConfig17setTuningParamDSAEi(void);

/* Symbol: _ZN5dolby13DecParamCacheC2Ev */
/* Demangled: dolby::DecParamCache::DecParamCache() */
int _ZN5dolby13DecParamCacheC2Ev(void);

/* Symbol: _ZN5dolby13DecParamCache10setProfileENS_15DlbDecProfileIdE */
/* Demangled: dolby::DecParamCache::setProfile(dolby::DlbDecProfileId) */
int _ZN5dolby13DecParamCache10setProfileENS_15DlbDecProfileIdE(void);

/* Symbol: _ZN5dolby16DecDynamicConfig17disconnectServiceEv */
/* Demangled: dolby::DecDynamicConfig::disconnectService() */
int _ZN5dolby16DecDynamicConfig17disconnectServiceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5dolby16DecDynamicConfig14connectServiceEv */
/* Demangled: dolby::DecDynamicConfig::connectService() */
int _ZN5dolby16DecDynamicConfig14connectServiceEv(void);

/* Symbol: _ZN5dolby13DecParamArrayC2Ev */
/* Demangled: dolby::DecParamArray::DecParamArray() */
int _ZN5dolby13DecParamArrayC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5dolby14DecParamParser5beginEv */
/* Demangled: dolby::DecParamParser::begin() */
int _ZN5dolby14DecParamParser5beginEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE;

/* Symbol: _ZN5dolby16DecDynamicConfigD0Ev */
/* Demangled: dolby::DecDynamicConfig::~DecDynamicConfig() */
int _ZN5dolby16DecDynamicConfigD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_compareEPKvS7_(void);

/* Symbol: _ZN5dolby14DecParamParserC2EPvi */
/* Demangled: dolby::DecParamParser::DecParamParser(void*, int) */
int _ZN5dolby14DecParamParserC2EPvi(void);

/* Symbol: _ZN5dolby13DapParamCacheD2Ev */
/* Demangled: dolby::DapParamCache::~DapParamCache() */
int _ZN5dolby13DapParamCacheD2Ev(void);

/* Symbol: _ZN5dolby9DecConfig8setDaxOnEbb */
/* Demangled: dolby::DecConfig::setDaxOn(bool, bool) */
int _ZN5dolby9DecConfig8setDaxOnEbb(void);

/* Symbol: _ZN5dolby9DecConfigD1Ev */
/* Demangled: dolby::DecConfig::~DecConfig() */
int _ZN5dolby9DecConfigD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE;

/* Symbol: _ZN5dolby13DapParamCache6ValuesC2Ev */
/* Demangled: dolby::DapParamCache::Values::Values() */
int _ZN5dolby13DapParamCache6ValuesC2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDECCFG_H */
