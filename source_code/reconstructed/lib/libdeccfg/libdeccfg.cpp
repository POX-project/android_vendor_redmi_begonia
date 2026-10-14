/*
 * Reverse-Engineered Source for: libdeccfg.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdeccfg"

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
#include "libdeccfg.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: dolby::DapParamCache::set(int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache3setEiPKii(void) {
    ALOGD("_ZN5dolby13DapParamCache3setEiPKii() called");
    return 0;
}

/* Demangled: dolby::DecConfig::getOffParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig12getOffParamsEv(void) {
    ALOGD("_ZN5dolby9DecConfig12getOffParamsEv() called");
    return 0;
}

/* Exported Object: dolby::DecParamArray::mDynamicProfileParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13DecParamArray21mDynamicProfileParamsE = NULL;

/* Demangled: android::Singleton<dolby::DecParamArray>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DecParamArrayEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DecParamArrayEE11getInstanceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: dolby::DecParamCache::~DecParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamCacheD2Ev(void) {
    ALOGD("_ZN5dolby13DecParamCacheD2Ev() called");
    return 0;
}

/* Demangled: dolby::DecConfig::getOutputLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig14getOutputLevelEv(void) {
    ALOGD("_ZN5dolby9DecConfig14getOutputLevelEv() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::Values::get(int*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5dolby13DapParamCache6Values3getEPii(void) {
    ALOGD("_ZNK5dolby13DapParamCache6Values3getEPii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::setOutputLevel(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig14setOutputLevelEib(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig14setOutputLevelEib() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::~DecDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfigD2Ev(void) {
    ALOGD("_ZN5dolby16DecDynamicConfigD2Ev() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::setDaxOn(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig8setDaxOnEbb(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig8setDaxOnEbb() called");
    return 0;
}

/* Demangled: dolby::DecParamArray::getProfileParamsSize(dolby::DlbDecProfileId) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamArray20getProfileParamsSizeENS_15DlbDecProfileIdE(void) {
    ALOGD("_ZN5dolby13DecParamArray20getProfileParamsSizeENS_15DlbDecProfileIdE() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DecParamArray>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DecParamArrayEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DecParamArrayEEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: dolby::DecParamParser::DecParamParser(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DecParamParserC1EPvi(void) {
    ALOGD("_ZN5dolby14DecParamParserC1EPvi() called");
    return 0;
}

/* Demangled: dolby::DecParamCache::markParamModified(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamCache17markParamModifiedEi(void) {
    ALOGD("_ZN5dolby13DecParamCache17markParamModifiedEi() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setOutputLevel(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig14setOutputLevelEib(void) {
    ALOGD("_ZN5dolby9DecConfig14setOutputLevelEib() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::updateCodecType(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig15updateCodecTypeEi(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig15updateCodecTypeEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setSpeakerPortraitMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig22setSpeakerPortraitModeEb(void) {
    ALOGD("_ZN5dolby9DecConfig22setSpeakerPortraitModeEb() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DecParamArray>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DecParamArrayEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DecParamArrayEE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: android::Singleton<dolby::DecParamArray>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5dolby13DecParamArrayEE9sInstanceE = NULL;

/* Demangled: dolby::DapParamCache::Values::~Values() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6ValuesD2Ev(void) {
    ALOGD("_ZN5dolby13DapParamCache6ValuesD2Ev() called");
    return 0;
}

/* Demangled: dolby::DecConfig::initState() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig9initStateEv(void) {
    ALOGD("_ZN5dolby9DecConfig9initStateEv() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::checkShareConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig16checkShareConfigEv(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig16checkShareConfigEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::get(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache3getEi(void) {
    ALOGD("_ZN5dolby13DapParamCache3getEi() called");
    return 0;
}

/* Demangled: dolby::DecParamCache::DecParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamCacheC1Ev(void) {
    ALOGD("_ZN5dolby13DecParamCacheC1Ev() called");
    return 0;
}

/* Demangled: dolby::DecConfig::getDapParams() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig12getDapParamsEv(void) {
    ALOGD("_ZN5dolby9DecConfig12getDapParamsEv() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setTuningParamDHSA(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig18setTuningParamDHSAEi(void) {
    ALOGD("_ZN5dolby9DecConfig18setTuningParamDHSAEi() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::isConfigChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig15isConfigChangedEv(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig15isConfigChangedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DecParamArray>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DecParamArrayEED2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DecParamArrayEED2Ev() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::Values::set(int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6Values3setEPKii(void) {
    ALOGD("_ZN5dolby13DapParamCache6Values3setEPKii() called");
    return 0;
}

/* Demangled: dolby::DecConfig::DecConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfigC2Ev(void) {
    ALOGD("_ZN5dolby9DecConfigC2Ev() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::setProfileIndex(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig15setProfileIndexEjb(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig15setProfileIndexEjb() called");
    return 0;
}

/* Exported Object: dolby::DecParamArray::mCustomProfileParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13DecParamArray20mCustomProfileParamsE = NULL;

/* Demangled: dolby::DecParamArray::DecParamArray() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamArrayC1Ev(void) {
    ALOGD("_ZN5dolby13DecParamArrayC1Ev() called");
    return 0;
}

/* Demangled: dolby::DecParamParser::next() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DecParamParser4nextEv(void) {
    ALOGD("_ZN5dolby14DecParamParser4nextEv() called");
    return 0;
}

/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12ParserBufferC2EPvi(void) {
    ALOGD("_ZN5dolby12ParserBufferC2EPvi() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setProfileIndex(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig15setProfileIndexEjb(void) {
    ALOGD("_ZN5dolby9DecConfig15setProfileIndexEjb() called");
    return 0;
}

/* Exported Object: dolby::DecParamArray::mMovieProfileParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13DecParamArray19mMovieProfileParamsE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::~DapParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCacheD1Ev(void) {
    ALOGD("_ZN5dolby13DapParamCacheD1Ev() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::getOutputLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig14getOutputLevelEv(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig14getOutputLevelEv() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::getDeGain() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig9getDeGainEv(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig9getDeGainEv() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::DecDynamicConfig(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfigC2Ei(void) {
    ALOGD("_ZN5dolby16DecDynamicConfigC2Ei() called");
    return 0;
}

/* Exported Object: vtable for dolby::DecDynamicConfig::DecCallbacks */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16DecDynamicConfig12DecCallbacksE = NULL;

/* Demangled: dolby::DapParamCache::get(int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache3getEiPii(void) {
    ALOGD("_ZN5dolby13DapParamCache3getEiPii() called");
    return 0;
}

/* Demangled: dolby::DecConfig::~DecConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfigD0Ev(void) {
    ALOGD("_ZN5dolby9DecConfigD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: dolby::DecParamArray::mAtmosMusicProfileParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13DecParamArray24mAtmosMusicProfileParamsE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::get(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache3getEiPiS1_(void) {
    ALOGD("_ZN5dolby13DapParamCache3getEiPiS1_() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::Values::Values() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6ValuesC1Ev(void) {
    ALOGD("_ZN5dolby13DapParamCache6ValuesC1Ev() called");
    return 0;
}

/* Demangled: dolby::DecParamCache::~DecParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamCacheD1Ev(void) {
    ALOGD("_ZN5dolby13DecParamCacheD1Ev() called");
    return 0;
}

/* Exported Object: dolby::DecParamArray::mCommonParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13DecParamArray13mCommonParamsE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::~DecDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfigD1Ev(void) {
    ALOGD("_ZN5dolby16DecDynamicConfigD1Ev() called");
    return 0;
}

/* Exported Object: dolby::DecParamArray::mOffProfileParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13DecParamArray17mOffProfileParamsE = NULL;

/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12ParserBufferC1EPvi(void) {
    ALOGD("_ZN5dolby12ParserBufferC1EPvi() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setOutChannelCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig18setOutChannelCountEj(void) {
    ALOGD("_ZN5dolby9DecConfig18setOutChannelCountEj() called");
    return 0;
}

/* Demangled: dolby::DecConfig::~DecConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfigD2Ev(void) {
    ALOGD("_ZN5dolby9DecConfigD2Ev() called");
    return 0;
}

/* Demangled: dolby::DecParamArray::getProfileParams(dolby::DlbDecProfileId, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamArray16getProfileParamsENS_15DlbDecProfileIdEPv(void) {
    ALOGD("_ZN5dolby13DecParamArray16getProfileParamsENS_15DlbDecProfileIdEPv() called");
    return 0;
}

/* Exported Object: dolby::DecParamArray::mMusicProfileParams */
extern "C" __attribute__((visibility("default"))) void* _ZN5dolby13DecParamArray19mMusicProfileParamsE = NULL;

/* Demangled: android::Singleton<dolby::DecParamArray>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DecParamArrayEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DecParamArrayEEC1Ev() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setDeGain(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig9setDeGainEib(void) {
    ALOGD("_ZN5dolby9DecConfig9setDeGainEib() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::setDeGain(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig9setDeGainEib(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig9setDeGainEib() called");
    return 0;
}

/* Exported Object: vtable for dolby::DecDynamicConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby16DecDynamicConfigE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setTuningParamDFSA(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig18setTuningParamDFSAEi(void) {
    ALOGD("_ZN5dolby9DecConfig18setTuningParamDFSAEi() called");
    return 0;
}

/* Demangled: dolby::DecParamParser::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DecParamParser8validateEv(void) {
    ALOGD("_ZN5dolby14DecParamParser8validateEv() called");
    return 0;
}

/* Exported Object: vtable for dolby::DecConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5dolby9DecConfigE = NULL;

/* Demangled: dolby::DapParamCache::Values::~Values() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6ValuesD1Ev(void) {
    ALOGD("_ZN5dolby13DapParamCache6ValuesD1Ev() called");
    return 0;
}

/* Demangled: dolby::DecConfig::updateDeviceParams(dolby::DapParamCache*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig18updateDeviceParamsEPNS_13DapParamCacheE(void) {
    ALOGD("_ZN5dolby9DecConfig18updateDeviceParamsEPNS_13DapParamCacheE() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setMonoInternalSpeaker(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig22setMonoInternalSpeakerEb(void) {
    ALOGD("_ZN5dolby9DecConfig22setMonoInternalSpeakerEb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DecParamCache::getDeviceParams(audio_devices_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamCache15getDeviceParamsE15audio_devices_t(void) {
    ALOGD("_ZN5dolby13DecParamCache15getDeviceParamsE15audio_devices_t() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: android::Singleton<dolby::DecParamArray>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5dolby13DecParamArrayEE5sLockE = NULL;

/* Demangled: android::Singleton<dolby::DecParamArray>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DecParamArrayEED1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DecParamArrayEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setActiveDevice(audio_devices_t, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig15setActiveDeviceE15audio_devices_tb(void) {
    ALOGD("_ZN5dolby9DecConfig15setActiveDeviceE15audio_devices_tb() called");
    return 0;
}

/* Demangled: dolby::ParserBuffer::skip(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12ParserBuffer4skipEi(void) {
    ALOGD("_ZN5dolby12ParserBuffer4skipEi() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setTuningParamDSA(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig17setTuningParamDSAEi(void) {
    ALOGD("_ZN5dolby9DecConfig17setTuningParamDSAEi() called");
    return 0;
}

/* Demangled: dolby::DecParamCache::DecParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamCacheC2Ev(void) {
    ALOGD("_ZN5dolby13DecParamCacheC2Ev() called");
    return 0;
}

/* Demangled: dolby::DecParamCache::setProfile(dolby::DlbDecProfileId) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamCache10setProfileENS_15DlbDecProfileIdE(void) {
    ALOGD("_ZN5dolby13DecParamCache10setProfileENS_15DlbDecProfileIdE() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::disconnectService() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig17disconnectServiceEv(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig17disconnectServiceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: dolby::DecDynamicConfig::connectService() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfig14connectServiceEv(void) {
    ALOGD("_ZN5dolby16DecDynamicConfig14connectServiceEv() called");
    return 0;
}

/* Demangled: dolby::DecParamArray::DecParamArray() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DecParamArrayC2Ev(void) {
    ALOGD("_ZN5dolby13DecParamArrayC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, int const*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEPKiEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DecParamParser::begin() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DecParamParser5beginEv(void) {
    ALOGD("_ZN5dolby14DecParamParser5beginEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE = NULL;

/* Demangled: dolby::DecDynamicConfig::~DecDynamicConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby16DecDynamicConfigD0Ev(void) {
    ALOGD("_ZN5dolby16DecDynamicConfigD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<dolby::DlbDecProfileId, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIN5dolby15DlbDecProfileIdEjEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: dolby::DecParamParser::DecParamParser(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby14DecParamParserC2EPvi(void) {
    ALOGD("_ZN5dolby14DecParamParserC2EPvi() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::~DapParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCacheD2Ev(void) {
    ALOGD("_ZN5dolby13DapParamCacheD2Ev() called");
    return 0;
}

/* Demangled: dolby::DecConfig::setDaxOn(bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfig8setDaxOnEbb(void) {
    ALOGD("_ZN5dolby9DecConfig8setDaxOnEbb() called");
    return 0;
}

/* Demangled: dolby::DecConfig::~DecConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby9DecConfigD1Ev(void) {
    ALOGD("_ZN5dolby9DecConfigD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE = NULL;

/* Demangled: dolby::DapParamCache::Values::Values() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6ValuesC2Ev(void) {
    ALOGD("_ZN5dolby13DapParamCache6ValuesC2Ev() called");
    return 0;
}
