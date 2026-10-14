/*
 * Reverse-Engineered Source for: libdapparamstorage.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdapparamstorage"

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
#include "libdapparamstorage.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::get(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache3getEi(void) {
    ALOGD("_ZN5dolby13DapParamCache3getEi() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::Values::~Values() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6ValuesD2Ev(void) {
    ALOGD("_ZN5dolby13DapParamCache6ValuesD2Ev() called");
    return 0;
}

/* Demangled: dolby::EffectParamParser::begin() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17EffectParamParser5beginEv(void) {
    ALOGD("_ZN5dolby17EffectParamParser5beginEv() called");
    return 0;
}

/* Demangled: dolby::DapParamStore::isSharedParam(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStore13isSharedParamEi(void) {
    ALOGD("_ZN5dolby13DapParamStore13isSharedParamEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::~DapParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCacheD1Ev(void) {
    ALOGD("_ZN5dolby13DapParamCacheD1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DapParamStore>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DapParamStoreEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DapParamStoreEE11getInstanceEv() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DapParamStore>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DapParamStoreEED1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DapParamStoreEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE = NULL;

/* Demangled: dolby::DapParamCache::Values::get(int*, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5dolby13DapParamCache6Values3getEPii(void) {
    ALOGD("_ZNK5dolby13DapParamCache6Values3getEPii() called");
    return 0;
}

/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12ParserBufferC1EPvi(void) {
    ALOGD("_ZN5dolby12ParserBufferC1EPvi() called");
    return 0;
}

/* Demangled: dolby::EffectParamParser::EffectParamParser(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17EffectParamParserC2EPvi(void) {
    ALOGD("_ZN5dolby17EffectParamParserC2EPvi() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::set(int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache3setEiPKii(void) {
    ALOGD("_ZN5dolby13DapParamCache3setEiPKii() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::Values::~Values() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6ValuesD1Ev(void) {
    ALOGD("_ZN5dolby13DapParamCache6ValuesD1Ev() called");
    return 0;
}

/* Demangled: dolby::EffectParamParser::next() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17EffectParamParser4nextEv(void) {
    ALOGD("_ZN5dolby17EffectParamParser4nextEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: dolby::DapParamStore::commitChange() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStore12commitChangeEv(void) {
    ALOGD("_ZN5dolby13DapParamStore12commitChangeEv() called");
    return 0;
}

/* Demangled: dolby::DapParamStore::setParam(audio_devices_t, int, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStore8setParamE15audio_devices_tiPKii(void) {
    ALOGD("_ZN5dolby13DapParamStore8setParamE15audio_devices_tiPKii() called");
    return 0;
}

/* Exported Object: android::Singleton<dolby::DapParamStore>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5dolby13DapParamStoreEE5sLockE = NULL;

/* Demangled: dolby::DapParamStore::isDeviceProcDisableParam(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStore24isDeviceProcDisableParamEi(void) {
    ALOGD("_ZN5dolby13DapParamStore24isDeviceProcDisableParamEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::EffectParamParser::EffectParamParser(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17EffectParamParserC1EPvi(void) {
    ALOGD("_ZN5dolby17EffectParamParserC1EPvi() called");
    return 0;
}

/* Demangled: dolby::DapParamStore::DapParamStore() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStoreC2Ev(void) {
    ALOGD("_ZN5dolby13DapParamStoreC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DapParamStore>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DapParamStoreEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DapParamStoreEEC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: dolby::ParserBuffer::skip(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12ParserBuffer4skipEi(void) {
    ALOGD("_ZN5dolby12ParserBuffer4skipEi() called");
    return 0;
}

/* Demangled: dolby::DapParamStore::getStoredParams(android::KeyedVector<audio_devices_t, dolby::DapParamCache*>*, bool, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStore15getStoredParamsEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEEbPi(void) {
    ALOGD("_ZN5dolby13DapParamStore15getStoredParamsEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEEbPi() called");
    return 0;
}

/* Demangled: dolby::DapParamStore::getDeviceParamCache(android::KeyedVector<audio_devices_t, dolby::DapParamCache*>*, audio_devices_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStore19getDeviceParamCacheEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEES3_(void) {
    ALOGD("_ZN5dolby13DapParamStore19getDeviceParamCacheEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::get(int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache3getEiPii(void) {
    ALOGD("_ZN5dolby13DapParamCache3getEiPii() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::Values::set(int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6Values3setEPKii(void) {
    ALOGD("_ZN5dolby13DapParamCache6Values3setEPKii() called");
    return 0;
}

/* Demangled: dolby::DapParamCache::Values::Values() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCache6ValuesC2Ev(void) {
    ALOGD("_ZN5dolby13DapParamCache6ValuesC2Ev() called");
    return 0;
}

/* Demangled: dolby::EffectParamParser::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby17EffectParamParser8validateEv(void) {
    ALOGD("_ZN5dolby17EffectParamParser8validateEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE = NULL;

/* Demangled: dolby::DapParamStore::DapParamStore() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStoreC1Ev(void) {
    ALOGD("_ZN5dolby13DapParamStoreC1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DapParamStore>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DapParamStoreEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DapParamStoreEE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: android::Singleton<dolby::DapParamStore>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonIN5dolby13DapParamStoreEE9sInstanceE = NULL;

/* Demangled: android::Singleton<dolby::DapParamStore>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DapParamStoreEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DapParamStoreEEC1Ev() called");
    return 0;
}

/* Demangled: dolby::DapParamStore::isContentProcDisableParam(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamStore25isContentProcDisableParamEi(void) {
    ALOGD("_ZN5dolby13DapParamStore25isContentProcDisableParamEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj() called");
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

/* Demangled: dolby::DapParamCache::~DapParamCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby13DapParamCacheD2Ev(void) {
    ALOGD("_ZN5dolby13DapParamCacheD2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<dolby::DapParamStore>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonIN5dolby13DapParamStoreEED2Ev(void) {
    ALOGD("_ZN7android9SingletonIN5dolby13DapParamStoreEED2Ev() called");
    return 0;
}

/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5dolby12ParserBufferC2EPvi(void) {
    ALOGD("_ZN5dolby12ParserBufferC2EPvi() called");
    return 0;
}
