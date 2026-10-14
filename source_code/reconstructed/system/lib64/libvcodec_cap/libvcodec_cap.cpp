/*
 * Reverse-Engineered Source for: libvcodec_cap.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libvcodec_cap"

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
#include "libvcodec_cap.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: getLevelfromOMXHEVC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z19getLevelfromOMXHEVCj(void) {
    ALOGD("_Z19getLevelfromOMXHEVCj() called");
    return 0;
}

/* Demangled: getLevel(_video_format, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8getLevel13_video_formatj(void) {
    ALOGD("_Z8getLevel13_video_formatj() called");
    return 0;
}

/* Demangled: getLevel(_video_format, _video_level) */
extern "C" __attribute__((visibility("default"))) int _Z8getLevel13_video_format12_video_level(void) {
    ALOGD("_Z8getLevel13_video_format12_video_level() called");
    return 0;
}

/* Demangled: getAdaptativeFrameRateInfo(_video_format, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z26getAdaptativeFrameRateInfo13_video_formatjjjPjS0_(void) {
    ALOGD("_Z26getAdaptativeFrameRateInfo13_video_formatjjjPjS0_() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI20_video_media_profileE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI20_video_media_profileE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: getCodecCapabiltiy(unsigned int, _sensor_resolution*, unsigned int*, video_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _Z18getCodecCapabiltiyjP18_sensor_resolutionPjP16video_codec_fmtp(void) {
    ALOGD("_Z18getCodecCapabiltiyjP18_sensor_resolutionPjP16video_codec_fmtp() called");
    return 0;
}

/* Demangled: getMediaProfile(_video_format, unsigned int, unsigned int, _video_media_profile*) */
extern "C" __attribute__((visibility("default"))) int _Z15getMediaProfile13_video_formatjjP20_video_media_profile(void) {
    ALOGD("_Z15getMediaProfile13_video_formatjjP20_video_media_profile() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI20_video_media_profileE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI20_video_media_profileE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_format>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI13_video_formatE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorI13_video_formatE12do_constructEPvm() called");
    return 0;
}

/* Demangled: getCodecCapabiltiy(unsigned int, unsigned int, _sensor_resolution*, unsigned int*, video_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _Z18getCodecCapabiltiyjjP18_sensor_resolutionPjP16video_codec_fmtp(void) {
    ALOGD("_Z18getCodecCapabiltiyjjP18_sensor_resolutionPjP16video_codec_fmtp() called");
    return 0;
}

/* Demangled: getVideoProperty() */
extern "C" __attribute__((visibility("default"))) int _Z16getVideoPropertyv(void) {
    ALOGD("_Z16getVideoPropertyv() called");
    return 0;
}

/* Demangled: toString(_video_profile) */
extern "C" __attribute__((visibility("default"))) int _Z8toString14_video_profile(void) {
    ALOGD("_Z8toString14_video_profile() called");
    return 0;
}

/* Demangled: printBinary(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11printBinaryPhi(void) {
    ALOGD("_Z11printBinaryPhi() called");
    return 0;
}

/* Demangled: getResolutionChangeCapabiltiy(_video_format) */
extern "C" __attribute__((visibility("default"))) int _Z29getResolutionChangeCapabiltiy13_video_format(void) {
    ALOGD("_Z29getResolutionChangeCapabiltiy13_video_format() called");
    return 0;
}

/* Demangled: getAdaptiveDropFrameCapabiltiy(_video_format) */
extern "C" __attribute__((visibility("default"))) int _Z30getAdaptiveDropFrameCapabiltiy13_video_format(void) {
    ALOGD("_Z30getAdaptiveDropFrameCapabiltiy13_video_format() called");
    return 0;
}

/* Demangled: getLevelbyProperty(_video_format, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18getLevelbyProperty13_video_formatj(void) {
    ALOGD("_Z18getLevelbyProperty13_video_formatj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_format>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI13_video_formatE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorI13_video_formatE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_format>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI13_video_formatE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI13_video_formatE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: getMediaProfileListInst(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23getMediaProfileListInstj(void) {
    ALOGD("_Z23getMediaProfileListInstj() called");
    return 0;
}

/* Demangled: getMediaProfile(unsigned int, _video_format, unsigned int, unsigned int, _video_media_profile*) */
extern "C" __attribute__((visibility("default"))) int _Z15getMediaProfilej13_video_formatjjP20_video_media_profile(void) {
    ALOGD("_Z15getMediaProfilej13_video_formatjjP20_video_media_profile() called");
    return 0;
}

/* Demangled: getAvailableBitrateInfo(unsigned int, unsigned int*, _video_media_bitrate*) */
extern "C" __attribute__((visibility("default"))) int _Z23getAvailableBitrateInfojPjP20_video_media_bitrate(void) {
    ALOGD("_Z23getAvailableBitrateInfojPjP20_video_media_bitrate() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<QualityInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI11QualityInfoE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI11QualityInfoE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_format>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI13_video_formatE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI13_video_formatE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<_video_media_profile> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI20_video_media_profileEE = NULL;

/* Demangled: configLowPowerMode(low_power_mode, int) */
extern "C" __attribute__((visibility("default"))) int _Z18configLowPowerMode14low_power_modei(void) {
    ALOGD("_Z18configLowPowerMode14low_power_modei() called");
    return 0;
}

/* Demangled: android::Vector<QualityInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI11QualityInfoE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI11QualityInfoE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: removePreventionByte(unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z20removePreventionBytePhh(void) {
    ALOGD("_Z20removePreventionBytePhh() called");
    return 0;
}

/* Demangled: getCodecLevelParameterSets(unsigned int, _sensor_resolution*, _video_format, unsigned int*, video_codec_level_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _Z26getCodecLevelParameterSetsjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp(void) {
    ALOGD("_Z26getCodecLevelParameterSetsjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp() called");
    return 0;
}

/* Demangled: getAdaptativeFrameRateInfo(unsigned int, _video_format, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int, unsigned int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_jjS0_S0_(void) {
    ALOGD("_Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_jjS0_S0_() called");
    return 0;
}

/* Demangled: getOperatorName(int) */
extern "C" __attribute__((visibility("default"))) int _Z15getOperatorNamei(void) {
    ALOGD("_Z15getOperatorNamei() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: getDefaultH264MediaProfileByOperator(int, _video_media_profile**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z36getDefaultH264MediaProfileByOperatoriPP20_video_media_profilePi(void) {
    ALOGD("_Z36getDefaultH264MediaProfileByOperatoriPP20_video_media_profilePi() called");
    return 0;
}

/* Demangled: createH264QualityMediaProfileByOperator(int, QualityInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z39createH264QualityMediaProfileByOperatoriP11QualityInfo(void) {
    ALOGD("_Z39createH264QualityMediaProfileByOperatoriP11QualityInfo() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP20_video_media_profileE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP20_video_media_profileE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: getProfile(_video_format, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z10getProfile13_video_formatj(void) {
    ALOGD("_Z10getProfile13_video_formatj() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP20_video_media_profileE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIP20_video_media_profileE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP20_video_media_profileE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP20_video_media_profileE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<QualityInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI11QualityInfoE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI11QualityInfoE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<QualityInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI11QualityInfoEE = NULL;

/* Demangled: android::Vector<_video_media_profile*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP20_video_media_profileE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIP20_video_media_profileE12do_constructEPvm() called");
    return 0;
}

/* Demangled: getProfilefromOMXHEVC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z21getProfilefromOMXHEVCj(void) {
    ALOGD("_Z21getProfilefromOMXHEVCj() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI20_video_media_profileE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI20_video_media_profileE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<QualityInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI11QualityInfoE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorI11QualityInfoE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<QualityInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI11QualityInfoE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI11QualityInfoE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI20_video_media_profileE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI20_video_media_profileE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: createHEVCQualityMediaProfileByOperator(int, QualityInfo*) */
extern "C" __attribute__((visibility("default"))) int _Z39createHEVCQualityMediaProfileByOperatoriP11QualityInfo(void) {
    ALOGD("_Z39createHEVCQualityMediaProfileByOperatoriP11QualityInfo() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<_video_media_profile*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP20_video_media_profileEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<QualityInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI11QualityInfoE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorI11QualityInfoE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_format>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI13_video_formatE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI13_video_formatE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_format>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI13_video_formatE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI13_video_formatE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: getAdaptativeFrameRateInfo(unsigned int, _video_format, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_(void) {
    ALOGD("_Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_() called");
    return 0;
}

/* Demangled: getCodecLevelParameterSets(unsigned int, unsigned int, _sensor_resolution*, _video_format, unsigned int*, video_codec_level_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _Z26getCodecLevelParameterSetsjjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp(void) {
    ALOGD("_Z26getCodecLevelParameterSetsjjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: getProfilefromOMXAVC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20getProfilefromOMXAVCj(void) {
    ALOGD("_Z20getProfilefromOMXAVCj() called");
    return 0;
}

/* Demangled: getLevelfromOMXAVC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18getLevelfromOMXAVCj(void) {
    ALOGD("_Z18getLevelfromOMXAVCj() called");
    return 0;
}

/* Demangled: getDefaultHEVCMediaProfileByOperator(int, _video_media_profile**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z36getDefaultHEVCMediaProfileByOperatoriPP20_video_media_profilePi(void) {
    ALOGD("_Z36getDefaultHEVCMediaProfileByOperatoriPP20_video_media_profilePi() called");
    return 0;
}

/* Demangled: getMediaProfileEntry(MediaProfileList*, _video_format, _video_profile, _video_level) */
extern "C" __attribute__((visibility("default"))) int _Z20getMediaProfileEntryP16MediaProfileList13_video_format14_video_profile12_video_level(void) {
    ALOGD("_Z20getMediaProfileEntryP16MediaProfileList13_video_format14_video_profile12_video_level() called");
    return 0;
}

/* Demangled: toString(_video_level) */
extern "C" __attribute__((visibility("default"))) int _Z8toString12_video_level(void) {
    ALOGD("_Z8toString12_video_level() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<_video_format> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI13_video_formatEE = NULL;

/* Demangled: android::Vector<_video_media_profile*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP20_video_media_profileE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP20_video_media_profileE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP20_video_media_profileE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP20_video_media_profileE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: searchStartCode(int, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z15searchStartCodeimm(void) {
    ALOGD("_Z15searchStartCodeimm() called");
    return 0;
}

/* Demangled: getAvailableBitrateInfo(unsigned int*, _video_media_bitrate*) */
extern "C" __attribute__((visibility("default"))) int _Z23getAvailableBitrateInfoPjP20_video_media_bitrate(void) {
    ALOGD("_Z23getAvailableBitrateInfoPjP20_video_media_bitrate() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI20_video_media_profileE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorI20_video_media_profileE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: getMediaProfileByQuality(unsigned int, _video_quality, unsigned int*, _video_media_profile*) */
extern "C" __attribute__((visibility("default"))) int _Z24getMediaProfileByQualityj14_video_qualityPjP20_video_media_profile(void) {
    ALOGD("_Z24getMediaProfileByQualityj14_video_qualityPjP20_video_media_profile() called");
    return 0;
}

/* Demangled: getProfile(_video_format, _video_profile) */
extern "C" __attribute__((visibility("default"))) int _Z10getProfile13_video_format14_video_profile(void) {
    ALOGD("_Z10getProfile13_video_format14_video_profile() called");
    return 0;
}

/* Demangled: android::Vector<_video_media_profile>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI20_video_media_profileE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorI20_video_media_profileE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEEE = NULL;
