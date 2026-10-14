/*
 * Reverse-Engineered ABI Specification for: libdapparamstorage.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdapparamstorage.so
 */

#ifndef BEGONIA_RE_LIBDAPPARAMSTORAGE_H
#define BEGONIA_RE_LIBDAPPARAMSTORAGE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5dolby13DapParamCache3getEi */
/* Demangled: dolby::DapParamCache::get(int) */
int _ZN5dolby13DapParamCache3getEi(void);

/* Symbol: _ZN5dolby13DapParamCache6ValuesD2Ev */
/* Demangled: dolby::DapParamCache::Values::~Values() */
int _ZN5dolby13DapParamCache6ValuesD2Ev(void);

/* Symbol: _ZN5dolby17EffectParamParser5beginEv */
/* Demangled: dolby::EffectParamParser::begin() */
int _ZN5dolby17EffectParamParser5beginEv(void);

/* Symbol: _ZN5dolby13DapParamStore13isSharedParamEi */
/* Demangled: dolby::DapParamStore::isSharedParam(int) */
int _ZN5dolby13DapParamStore13isSharedParamEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5dolby13DapParamCacheD1Ev */
/* Demangled: dolby::DapParamCache::~DapParamCache() */
int _ZN5dolby13DapParamCacheD1Ev(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEE11getInstanceEv */
/* Demangled: android::Singleton<dolby::DapParamStore>::getInstance() */
int _ZN7android9SingletonIN5dolby13DapParamStoreEE11getInstanceEv(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEED1Ev */
/* Demangled: android::Singleton<dolby::DapParamStore>::~Singleton() */
int _ZN7android9SingletonIN5dolby13DapParamStoreEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE;

/* Symbol: _ZNK5dolby13DapParamCache6Values3getEPii */
/* Demangled: dolby::DapParamCache::Values::get(int*, int) const */
int _ZNK5dolby13DapParamCache6Values3getEPii(void);

/* Symbol: _ZN5dolby12ParserBufferC1EPvi */
/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
int _ZN5dolby12ParserBufferC1EPvi(void);

/* Symbol: _ZN5dolby17EffectParamParserC2EPvi */
/* Demangled: dolby::EffectParamParser::EffectParamParser(void*, int) */
int _ZN5dolby17EffectParamParserC2EPvi(void);

/* Symbol: _ZN5dolby13DapParamCache3setEiPKii */
/* Demangled: dolby::DapParamCache::set(int, int const*, int) */
int _ZN5dolby13DapParamCache3setEiPKii(void);

/* Symbol: _ZN5dolby13DapParamCache6ValuesD1Ev */
/* Demangled: dolby::DapParamCache::Values::~Values() */
int _ZN5dolby13DapParamCache6ValuesD1Ev(void);

/* Symbol: _ZN5dolby17EffectParamParser4nextEv */
/* Demangled: dolby::EffectParamParser::next() */
int _ZN5dolby17EffectParamParser4nextEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5dolby13DapParamStore12commitChangeEv */
/* Demangled: dolby::DapParamStore::commitChange() */
int _ZN5dolby13DapParamStore12commitChangeEv(void);

/* Symbol: _ZN5dolby13DapParamStore8setParamE15audio_devices_tiPKii */
/* Demangled: dolby::DapParamStore::setParam(audio_devices_t, int, int const*, int) */
int _ZN5dolby13DapParamStore8setParamE15audio_devices_tiPKii(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEE5sLockE */
/* Demangled: android::Singleton<dolby::DapParamStore>::sLock */
extern void* _ZN7android9SingletonIN5dolby13DapParamStoreEE5sLockE;

/* Symbol: _ZN5dolby13DapParamStore24isDeviceProcDisableParamEi */
/* Demangled: dolby::DapParamStore::isDeviceProcDisableParam(int) */
int _ZN5dolby13DapParamStore24isDeviceProcDisableParamEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5dolby17EffectParamParserC1EPvi */
/* Demangled: dolby::EffectParamParser::EffectParamParser(void*, int) */
int _ZN5dolby17EffectParamParserC1EPvi(void);

/* Symbol: _ZN5dolby13DapParamStoreC2Ev */
/* Demangled: dolby::DapParamStore::DapParamStore() */
int _ZN5dolby13DapParamStoreC2Ev(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEEC2Ev */
/* Demangled: android::Singleton<dolby::DapParamStore>::Singleton() */
int _ZN7android9SingletonIN5dolby13DapParamStoreEEC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5dolby12ParserBuffer4skipEi */
/* Demangled: dolby::ParserBuffer::skip(int) */
int _ZN5dolby12ParserBuffer4skipEi(void);

/* Symbol: _ZN5dolby13DapParamStore15getStoredParamsEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEEbPi */
/* Demangled: dolby::DapParamStore::getStoredParams(android::KeyedVector<audio_devices_t, dolby::DapParamCache*>*, bool, int*) */
int _ZN5dolby13DapParamStore15getStoredParamsEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEEbPi(void);

/* Symbol: _ZN5dolby13DapParamStore19getDeviceParamCacheEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEES3_ */
/* Demangled: dolby::DapParamStore::getDeviceParamCache(android::KeyedVector<audio_devices_t, dolby::DapParamCache*>*, audio_devices_t) */
int _ZN5dolby13DapParamStore19getDeviceParamCacheEPN7android11KeyedVectorI15audio_devices_tPNS_13DapParamCacheEEES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5dolby13DapParamCache3getEiPii */
/* Demangled: dolby::DapParamCache::get(int, int*, int) */
int _ZN5dolby13DapParamCache3getEiPii(void);

/* Symbol: _ZN5dolby13DapParamCache6Values3setEPKii */
/* Demangled: dolby::DapParamCache::Values::set(int const*, int) */
int _ZN5dolby13DapParamCache6Values3setEPKii(void);

/* Symbol: _ZN5dolby13DapParamCache6ValuesC2Ev */
/* Demangled: dolby::DapParamCache::Values::Values() */
int _ZN5dolby13DapParamCache6ValuesC2Ev(void);

/* Symbol: _ZN5dolby17EffectParamParser8validateEv */
/* Demangled: dolby::EffectParamParser::validate() */
int _ZN5dolby17EffectParamParser8validateEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, dolby::DapParamCache::Cache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5dolby13DapParamCache5CacheEEEEE;

/* Symbol: _ZN5dolby13DapParamStoreC1Ev */
/* Demangled: dolby::DapParamStore::DapParamStore() */
int _ZN5dolby13DapParamStoreC1Ev(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEE11hasInstanceEv */
/* Demangled: android::Singleton<dolby::DapParamStore>::hasInstance() */
int _ZN7android9SingletonIN5dolby13DapParamStoreEE11hasInstanceEv(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEE9sInstanceE */
/* Demangled: android::Singleton<dolby::DapParamStore>::sInstance */
extern void* _ZN7android9SingletonIN5dolby13DapParamStoreEE9sInstanceE;

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEEC1Ev */
/* Demangled: android::Singleton<dolby::DapParamStore>::Singleton() */
int _ZN7android9SingletonIN5dolby13DapParamStoreEEC1Ev(void);

/* Symbol: _ZN5dolby13DapParamStore25isContentProcDisableParamEi */
/* Demangled: dolby::DapParamStore::isContentProcDisableParam(int) */
int _ZN5dolby13DapParamStore25isContentProcDisableParamEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5dolby13DapParamCache3getEiPiS1_ */
/* Demangled: dolby::DapParamCache::get(int, int*, int*) */
int _ZN5dolby13DapParamCache3getEiPiS1_(void);

/* Symbol: _ZN5dolby13DapParamCache6ValuesC1Ev */
/* Demangled: dolby::DapParamCache::Values::Values() */
int _ZN5dolby13DapParamCache6ValuesC1Ev(void);

/* Symbol: _ZN5dolby13DapParamCacheD2Ev */
/* Demangled: dolby::DapParamCache::~DapParamCache() */
int _ZN5dolby13DapParamCacheD2Ev(void);

/* Symbol: _ZN7android9SingletonIN5dolby13DapParamStoreEED2Ev */
/* Demangled: android::Singleton<dolby::DapParamStore>::~Singleton() */
int _ZN7android9SingletonIN5dolby13DapParamStoreEED2Ev(void);

/* Symbol: _ZN5dolby12ParserBufferC2EPvi */
/* Demangled: dolby::ParserBuffer::ParserBuffer(void*, int) */
int _ZN5dolby12ParserBufferC2EPvi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDAPPARAMSTORAGE_H */
