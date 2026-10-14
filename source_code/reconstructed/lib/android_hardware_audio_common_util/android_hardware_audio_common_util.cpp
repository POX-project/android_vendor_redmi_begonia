/*
 * Reverse-Engineered Source for: android.hardware.audio.common-util.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_audio_common_util"

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
#include "android_hardware_audio_common_util.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: android::EffectMap::INVALID_ID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9EffectMap10INVALID_IDE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: android::Singleton<android::EffectMap>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_9EffectMapEE5sLockE = NULL;

/* Demangled: android::Singleton<android::EffectMap>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_9EffectMapEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_9EffectMapEEC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::EffectMap::makeUniqueId() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9EffectMap12makeUniqueIdEv(void) {
    ALOGD("_ZN7android9EffectMap12makeUniqueIdEv() called");
    return 0;
}

/* Demangled: android::EffectMap::get(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9EffectMap3getERKy(void) {
    ALOGD("_ZN7android9EffectMap3getERKy() called");
    return 0;
}

/* Demangled: android::Singleton<android::EffectMap>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_9EffectMapEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_9EffectMapEE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: android::Singleton<android::EffectMap>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_9EffectMapEE9sInstanceE = NULL;

/* Demangled: android::Singleton<android::EffectMap>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_9EffectMapEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_9EffectMapEEC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Singleton<android::EffectMap>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_9EffectMapEED2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_9EffectMapEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::EffectMap::add(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9EffectMap3addEPP18effect_interface_s(void) {
    ALOGD("_ZN7android9EffectMap3addEPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::EffectMap::remove(effect_interface_s**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9EffectMap6removeEPP18effect_interface_s(void) {
    ALOGD("_ZN7android9EffectMap6removeEPP18effect_interface_s() called");
    return 0;
}

/* Demangled: android::Singleton<android::EffectMap>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_9EffectMapEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_9EffectMapEE11getInstanceEv() called");
    return 0;
}

/* Demangled: android::Singleton<android::EffectMap>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_9EffectMapEED1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_9EffectMapEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, effect_interface_s**> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyPP18effect_interface_sEEEE = NULL;
