/*
 * Reverse-Engineered Source for: libeffectsconfig.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libeffectsconfig"

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
#include "libeffectsconfig.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: void std::__1::vector<android::effectsConfig::DeviceEffects, std::__1::allocator<android::effectsConfig::DeviceEffects> >::__push_back_slow_path<android::effectsConfig::DeviceEffects>(android::effectsConfig::DeviceEffects&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android13effectsConfig13DeviceEffectsENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android13effectsConfig13DeviceEffectsENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::effectsConfig::Stream<audio_source_t>, std::__1::allocator<android::effectsConfig::Stream<audio_source_t> > >::__push_back_slow_path<android::effectsConfig::Stream<audio_source_t> >(android::effectsConfig::Stream<audio_source_t>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android13effectsConfig6StreamI14audio_source_tEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android13effectsConfig6StreamI14audio_source_tEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::effectsConfig::Library, std::__1::allocator<android::effectsConfig::Library> >::__push_back_slow_path<android::effectsConfig::Library>(android::effectsConfig::Library&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android13effectsConfig7LibraryENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android13effectsConfig7LibraryENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::reference_wrapper<tinyxml2::XMLElement const>, std::__1::allocator<std::__1::reference_wrapper<tinyxml2::XMLElement const> > >::__emplace_back_slow_path<tinyxml2::XMLElement const&>(tinyxml2::XMLElement const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_17reference_wrapperIKN8tinyxml210XMLElementEEENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJRS4_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_17reference_wrapperIKN8tinyxml210XMLElementEEENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJRS4_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::effectsConfig::parse(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13effectsConfig5parseEPKc(void) {
    ALOGD("_ZN7android13effectsConfig5parseEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::effectsConfig::Effect, std::__1::allocator<android::effectsConfig::Effect> >::__push_back_slow_path<android::effectsConfig::Effect>(android::effectsConfig::Effect&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android13effectsConfig6EffectENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android13effectsConfig6EffectENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::effectsConfig::Stream<audio_stream_type_t>, std::__1::allocator<android::effectsConfig::Stream<audio_stream_type_t> > >::__push_back_slow_path<android::effectsConfig::Stream<audio_stream_type_t> >(android::effectsConfig::Stream<audio_stream_type_t>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android13effectsConfig6StreamI19audio_stream_type_tEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android13effectsConfig6StreamI19audio_stream_type_tEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::reference_wrapper<android::effectsConfig::Effect>, std::__1::allocator<std::__1::reference_wrapper<android::effectsConfig::Effect> > >::__emplace_back_slow_path<android::effectsConfig::Effect&>(android::effectsConfig::Effect&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_17reference_wrapperIN7android13effectsConfig6EffectEEENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJRS4_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_17reference_wrapperIN7android13effectsConfig6EffectEEENS_9allocatorIS5_EEE24__emplace_back_slow_pathIJRS4_EEEvDpOT_() called");
    return 0;
}
