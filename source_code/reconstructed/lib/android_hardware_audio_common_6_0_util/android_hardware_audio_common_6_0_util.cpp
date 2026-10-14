/*
 * Reverse-Engineered Source for: android.hardware.audio.common@6.0-util.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_audio_common_6_0_util"

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
#include "android_hardware_audio_common_6_0_util.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioGainToHal(android::hardware::audio::common::V6_0::AudioGain const&, audio_gain*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils14audioGainToHalERKNS3_9AudioGainEP10audio_gain(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils14audioGainToHalERKNS3_9AudioGainEP10audio_gain() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioPortConfigToHal(android::hardware::audio::common::V6_0::AudioPortConfig const&, audio_port_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils20audioPortConfigToHalERKNS3_15AudioPortConfigEP17audio_port_config(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils20audioPortConfigToHalERKNS3_15AudioPortConfigEP17audio_port_config() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioPortConfigsFromHal(unsigned int, audio_port_config const*, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils23audioPortConfigsFromHalEjPK17audio_port_configPNS0_8hidl_vecINS3_15AudioPortConfigEEE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils23audioPortConfigsFromHalEjPK17audio_port_configPNS0_8hidl_vecINS3_15AudioPortConfigEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::uuidFromHal(audio_uuid_s const&, android::hardware::audio::common::V6_0::Uuid*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils11uuidFromHalERK12audio_uuid_sPNS3_4UuidE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils11uuidFromHalERK12audio_uuid_sPNS3_4UuidE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioPortFromHal(audio_port const&, android::hardware::audio::common::V6_0::AudioPort*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils16audioPortFromHalERK10audio_portPNS3_9AudioPortE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils16audioPortFromHalERK10audio_portPNS3_9AudioPortE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioConfigFromHal(audio_config const&, android::hardware::audio::common::V6_0::AudioConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils18audioConfigFromHalERK12audio_configPNS3_11AudioConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils18audioConfigFromHalERK12audio_configPNS3_11AudioConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioGainConfigFromHal(audio_gain_config const&, android::hardware::audio::common::V6_0::AudioGainConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils22audioGainConfigFromHalERK17audio_gain_configPNS3_15AudioGainConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils22audioGainConfigFromHalERK17audio_gain_configPNS3_15AudioGainConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioPortToHal(android::hardware::audio::common::V6_0::AudioPort const&, audio_port*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils14audioPortToHalERKNS3_9AudioPortEP10audio_port(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils14audioPortToHalERKNS3_9AudioPortEP10audio_port() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioConfigToHal(android::hardware::audio::common::V6_0::AudioConfig const&, audio_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils16audioConfigToHalERKNS3_11AudioConfigEP12audio_config(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils16audioConfigToHalERKNS3_11AudioConfigEP12audio_config() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioGainConfigToHal(android::hardware::audio::common::V6_0::AudioGainConfig const&, audio_gain_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils20audioGainConfigToHalERKNS3_15AudioGainConfigEP17audio_gain_config(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils20audioGainConfigToHalERKNS3_15AudioGainConfigEP17audio_gain_config() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioPortConfigsToHal(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils21audioPortConfigsToHalERKNS0_8hidl_vecINS3_15AudioPortConfigEEE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils21audioPortConfigsToHalERKNS0_8hidl_vecINS3_15AudioPortConfigEEE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioOffloadInfoFromHal(audio_offload_info_t const&, android::hardware::audio::common::V6_0::AudioOffloadInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils23audioOffloadInfoFromHalERK20audio_offload_info_tPNS3_16AudioOffloadInfoE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils23audioOffloadInfoFromHalERK20audio_offload_info_tPNS3_16AudioOffloadInfoE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioUsageToHal(android::hardware::audio::common::V6_0::AudioUsage) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils15audioUsageToHalENS3_10AudioUsageE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils15audioUsageToHalENS3_10AudioUsageE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioGainFromHal(audio_gain const&, android::hardware::audio::common::V6_0::AudioGain*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils16audioGainFromHalERK10audio_gainPNS3_9AudioGainE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils16audioGainFromHalERK10audio_gainPNS3_9AudioGainE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioUsageFromHal(audio_usage_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils17audioUsageFromHalE13audio_usage_t(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils17audioUsageFromHalE13audio_usage_t() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioOffloadInfoToHal(android::hardware::audio::common::V6_0::AudioOffloadInfo const&, audio_offload_info_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils21audioOffloadInfoToHalERKNS3_16AudioOffloadInfoEP20audio_offload_info_t(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils21audioOffloadInfoToHalERKNS3_16AudioOffloadInfoEP20audio_offload_info_t() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::audioPortConfigFromHal(audio_port_config const&, android::hardware::audio::common::V6_0::AudioPortConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils22audioPortConfigFromHalERK17audio_port_configPNS3_15AudioPortConfigE(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils22audioPortConfigFromHalERK17audio_port_configPNS3_15AudioPortConfigE() called");
    return 0;
}

/* Demangled: android::hardware::audio::common::V6_0::implementation::HidlUtils::uuidToHal(android::hardware::audio::common::V6_0::Uuid const&, audio_uuid_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware5audio6common4V6_014implementation9HidlUtils9uuidToHalERKNS3_4UuidEP12audio_uuid_s(void) {
    ALOGD("_ZN7android8hardware5audio6common4V6_014implementation9HidlUtils9uuidToHalERKNS3_4UuidEP12audio_uuid_s() called");
    return 0;
}
