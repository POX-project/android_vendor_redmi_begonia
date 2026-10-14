/*
 * Reverse-Engineered ABI Specification for: android.hardware.audio.common-util.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.audio.common-util.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_AUDIO_COMMON_UTIL_H
#define BEGONIA_RE_ANDROID_HARDWARE_AUDIO_COMMON_UTIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android9EffectMap10INVALID_IDE */
/* Demangled: android::EffectMap::INVALID_ID */
extern void* _ZN7android9EffectMap10INVALID_IDE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android9SingletonINS_9EffectMapEE5sLockE */
/* Demangled: android::Singleton<android::EffectMap>::sLock */
extern void* _ZN7android9SingletonINS_9EffectMapEE5sLockE;

/* Symbol: _ZN7android9SingletonINS_9EffectMapEEC2Ev */
/* Demangled: android::Singleton<android::EffectMap>::Singleton() */
int _ZN7android9SingletonINS_9EffectMapEEC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android9EffectMap12makeUniqueIdEv */
/* Demangled: android::EffectMap::makeUniqueId() */
int _ZN7android9EffectMap12makeUniqueIdEv(void);

/* Symbol: _ZN7android9EffectMap3getERKy */
/* Demangled: android::EffectMap::get(unsigned long long const&) */
int _ZN7android9EffectMap3getERKy(void);

/* Symbol: _ZN7android9SingletonINS_9EffectMapEE11hasInstanceEv */
/* Demangled: android::Singleton<android::EffectMap>::hasInstance() */
int _ZN7android9SingletonINS_9EffectMapEE11hasInstanceEv(void);

/* Symbol: _ZN7android9SingletonINS_9EffectMapEE9sInstanceE */
/* Demangled: android::Singleton<android::EffectMap>::sInstance */
extern void* _ZN7android9SingletonINS_9EffectMapEE9sInstanceE;

/* Symbol: _ZN7android9SingletonINS_9EffectMapEEC1Ev */
/* Demangled: android::Singleton<android::EffectMap>::Singleton() */
int _ZN7android9SingletonINS_9EffectMapEEC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android9SingletonINS_9EffectMapEED2Ev */
/* Demangled: android::Singleton<android::EffectMap>::~Singleton() */
int _ZN7android9SingletonINS_9EffectMapEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android9EffectMap3addEPP18effect_interface_s */
/* Demangled: android::EffectMap::add(effect_interface_s**) */
int _ZN7android9EffectMap3addEPP18effect_interface_s(void);

/* Symbol: _ZN7android9EffectMap6removeEPP18effect_interface_s */
/* Demangled: android::EffectMap::remove(effect_interface_s**) */
int _ZN7android9EffectMap6removeEPP18effect_interface_s(void);

/* Symbol: _ZN7android9SingletonINS_9EffectMapEE11getInstanceEv */
/* Demangled: android::Singleton<android::EffectMap>::getInstance() */
int _ZN7android9SingletonINS_9EffectMapEE11getInstanceEv(void);

/* Symbol: _ZN7android9SingletonINS_9EffectMapEED1Ev */
/* Demangled: android::Singleton<android::EffectMap>::~Singleton() */
int _ZN7android9SingletonINS_9EffectMapEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE12do_constructEPvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEEE;

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_AUDIO_COMMON_UTIL_H */
