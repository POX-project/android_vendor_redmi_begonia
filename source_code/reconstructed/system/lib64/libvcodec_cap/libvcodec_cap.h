/*
 * Reverse-Engineered ABI Specification for: libvcodec_cap.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libvcodec_cap.so
 */

#ifndef BEGONIA_RE_LIBVCODEC_CAP_H
#define BEGONIA_RE_LIBVCODEC_CAP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z19getLevelfromOMXHEVCj */
/* Demangled: getLevelfromOMXHEVC(unsigned int) */
int _Z19getLevelfromOMXHEVCj(void);

/* Symbol: _Z8getLevel13_video_formatj */
/* Demangled: getLevel(_video_format, unsigned int) */
int _Z8getLevel13_video_formatj(void);

/* Symbol: _Z8getLevel13_video_format12_video_level */
/* Demangled: getLevel(_video_format, _video_level) */
int _Z8getLevel13_video_format12_video_level(void);

/* Symbol: _Z26getAdaptativeFrameRateInfo13_video_formatjjjPjS0_ */
/* Demangled: getAdaptativeFrameRateInfo(_video_format, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */
int _Z26getAdaptativeFrameRateInfo13_video_formatjjjPjS0_(void);

/* Symbol: _ZNK7android6VectorI20_video_media_profileE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<_video_media_profile>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI20_video_media_profileE16do_move_backwardEPvPKvm(void);

/* Symbol: _Z18getCodecCapabiltiyjP18_sensor_resolutionPjP16video_codec_fmtp */
/* Demangled: getCodecCapabiltiy(unsigned int, _sensor_resolution*, unsigned int*, video_codec_fmtp*) */
int _Z18getCodecCapabiltiyjP18_sensor_resolutionPjP16video_codec_fmtp(void);

/* Symbol: _Z15getMediaProfile13_video_formatjjP20_video_media_profile */
/* Demangled: getMediaProfile(_video_format, unsigned int, unsigned int, _video_media_profile*) */
int _Z15getMediaProfile13_video_formatjjP20_video_media_profile(void);

/* Symbol: _ZNK7android6VectorI20_video_media_profileE8do_splatEPvPKvm */
/* Demangled: android::Vector<_video_media_profile>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI20_video_media_profileE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI13_video_formatE12do_constructEPvm */
/* Demangled: android::Vector<_video_format>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorI13_video_formatE12do_constructEPvm(void);

/* Symbol: _Z18getCodecCapabiltiyjjP18_sensor_resolutionPjP16video_codec_fmtp */
/* Demangled: getCodecCapabiltiy(unsigned int, unsigned int, _sensor_resolution*, unsigned int*, video_codec_fmtp*) */
int _Z18getCodecCapabiltiyjjP18_sensor_resolutionPjP16video_codec_fmtp(void);

/* Symbol: _Z16getVideoPropertyv */
/* Demangled: getVideoProperty() */
int _Z16getVideoPropertyv(void);

/* Symbol: _Z8toString14_video_profile */
/* Demangled: toString(_video_profile) */
int _Z8toString14_video_profile(void);

/* Symbol: _Z11printBinaryPhi */
/* Demangled: printBinary(unsigned char*, int) */
int _Z11printBinaryPhi(void);

/* Symbol: _Z29getResolutionChangeCapabiltiy13_video_format */
/* Demangled: getResolutionChangeCapabiltiy(_video_format) */
int _Z29getResolutionChangeCapabiltiy13_video_format(void);

/* Symbol: _Z30getAdaptiveDropFrameCapabiltiy13_video_format */
/* Demangled: getAdaptiveDropFrameCapabiltiy(_video_format) */
int _Z30getAdaptiveDropFrameCapabiltiy13_video_format(void);

/* Symbol: _Z18getLevelbyProperty13_video_formatj */
/* Demangled: getLevelbyProperty(_video_format, unsigned int) */
int _Z18getLevelbyProperty13_video_formatj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI13_video_formatE10do_destroyEPvm */
/* Demangled: android::Vector<_video_format>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorI13_video_formatE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorI13_video_formatE8do_splatEPvPKvm */
/* Demangled: android::Vector<_video_format>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI13_video_formatE8do_splatEPvPKvm(void);

/* Symbol: _Z23getMediaProfileListInstj */
/* Demangled: getMediaProfileListInst(unsigned int) */
int _Z23getMediaProfileListInstj(void);

/* Symbol: _Z15getMediaProfilej13_video_formatjjP20_video_media_profile */
/* Demangled: getMediaProfile(unsigned int, _video_format, unsigned int, unsigned int, _video_media_profile*) */
int _Z15getMediaProfilej13_video_formatjjP20_video_media_profile(void);

/* Symbol: _Z23getAvailableBitrateInfojPjP20_video_media_bitrate */
/* Demangled: getAvailableBitrateInfo(unsigned int, unsigned int*, _video_media_bitrate*) */
int _Z23getAvailableBitrateInfojPjP20_video_media_bitrate(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI11QualityInfoE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<QualityInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI11QualityInfoE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI13_video_formatE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<_video_format>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI13_video_formatE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorI20_video_media_profileEE */
/* Demangled: vtable for android::Vector<_video_media_profile> */
extern void* _ZTVN7android6VectorI20_video_media_profileEE;

/* Symbol: _Z18configLowPowerMode14low_power_modei */
/* Demangled: configLowPowerMode(low_power_mode, int) */
int _Z18configLowPowerMode14low_power_modei(void);

/* Symbol: _ZNK7android6VectorI11QualityInfoE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<QualityInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI11QualityInfoE15do_move_forwardEPvPKvm(void);

/* Symbol: _Z20removePreventionBytePhh */
/* Demangled: removePreventionByte(unsigned char*, unsigned char) */
int _Z20removePreventionBytePhh(void);

/* Symbol: _Z26getCodecLevelParameterSetsjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp */
/* Demangled: getCodecLevelParameterSets(unsigned int, _sensor_resolution*, _video_format, unsigned int*, video_codec_level_fmtp*) */
int _Z26getCodecLevelParameterSetsjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp(void);

/* Symbol: _Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_jjS0_S0_ */
/* Demangled: getAdaptativeFrameRateInfo(unsigned int, _video_format, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int, unsigned int, unsigned int*, unsigned int*) */
int _Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_jjS0_S0_(void);

/* Symbol: _Z15getOperatorNamei */
/* Demangled: getOperatorName(int) */
int _Z15getOperatorNamei(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE10do_compareEPKvS7_(void);

/* Symbol: _Z36getDefaultH264MediaProfileByOperatoriPP20_video_media_profilePi */
/* Demangled: getDefaultH264MediaProfileByOperator(int, _video_media_profile**, int*) */
int _Z36getDefaultH264MediaProfileByOperatoriPP20_video_media_profilePi(void);

/* Symbol: _Z39createH264QualityMediaProfileByOperatoriP11QualityInfo */
/* Demangled: createH264QualityMediaProfileByOperator(int, QualityInfo*) */
int _Z39createH264QualityMediaProfileByOperatoriP11QualityInfo(void);

/* Symbol: _ZNK7android6VectorIP20_video_media_profileE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<_video_media_profile*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP20_video_media_profileE15do_move_forwardEPvPKvm(void);

/* Symbol: _Z10getProfile13_video_formatj */
/* Demangled: getProfile(_video_format, unsigned int) */
int _Z10getProfile13_video_formatj(void);

/* Symbol: _ZNK7android6VectorIP20_video_media_profileE10do_destroyEPvm */
/* Demangled: android::Vector<_video_media_profile*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIP20_video_media_profileE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIP20_video_media_profileE8do_splatEPvPKvm */
/* Demangled: android::Vector<_video_media_profile*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP20_video_media_profileE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI11QualityInfoE7do_copyEPvPKvm */
/* Demangled: android::Vector<QualityInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI11QualityInfoE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorI11QualityInfoEE */
/* Demangled: vtable for android::Vector<QualityInfo> */
extern void* _ZTVN7android6VectorI11QualityInfoEE;

/* Symbol: _ZNK7android6VectorIP20_video_media_profileE12do_constructEPvm */
/* Demangled: android::Vector<_video_media_profile*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIP20_video_media_profileE12do_constructEPvm(void);

/* Symbol: _Z21getProfilefromOMXHEVCj */
/* Demangled: getProfilefromOMXHEVC(unsigned int) */
int _Z21getProfilefromOMXHEVCj(void);

/* Symbol: _ZNK7android6VectorI20_video_media_profileE7do_copyEPvPKvm */
/* Demangled: android::Vector<_video_media_profile>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI20_video_media_profileE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI11QualityInfoE10do_destroyEPvm */
/* Demangled: android::Vector<QualityInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorI11QualityInfoE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorI11QualityInfoE8do_splatEPvPKvm */
/* Demangled: android::Vector<QualityInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI11QualityInfoE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI20_video_media_profileE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<_video_media_profile>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI20_video_media_profileE15do_move_forwardEPvPKvm(void);

/* Symbol: _Z39createHEVCQualityMediaProfileByOperatoriP11QualityInfo */
/* Demangled: createHEVCQualityMediaProfileByOperator(int, QualityInfo*) */
int _Z39createHEVCQualityMediaProfileByOperatoriP11QualityInfo(void);

/* Symbol: _ZTVN7android6VectorIP20_video_media_profileEE */
/* Demangled: vtable for android::Vector<_video_media_profile*> */
extern void* _ZTVN7android6VectorIP20_video_media_profileEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorI11QualityInfoE12do_constructEPvm */
/* Demangled: android::Vector<QualityInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorI11QualityInfoE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorI13_video_formatE7do_copyEPvPKvm */
/* Demangled: android::Vector<_video_format>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI13_video_formatE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorI13_video_formatE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<_video_format>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI13_video_formatE16do_move_backwardEPvPKvm(void);

/* Symbol: _Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_ */
/* Demangled: getAdaptativeFrameRateInfo(unsigned int, _video_format, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */
int _Z26getAdaptativeFrameRateInfoj13_video_formatjjjPjS0_(void);

/* Symbol: _Z26getCodecLevelParameterSetsjjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp */
/* Demangled: getCodecLevelParameterSets(unsigned int, unsigned int, _sensor_resolution*, _video_format, unsigned int*, video_codec_level_fmtp*) */
int _Z26getCodecLevelParameterSetsjjP18_sensor_resolution13_video_formatPjP22video_codec_level_fmtp(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _Z20getProfilefromOMXAVCj */
/* Demangled: getProfilefromOMXAVC(unsigned int) */
int _Z20getProfilefromOMXAVCj(void);

/* Symbol: _Z18getLevelfromOMXAVCj */
/* Demangled: getLevelfromOMXAVC(unsigned int) */
int _Z18getLevelfromOMXAVCj(void);

/* Symbol: _Z36getDefaultHEVCMediaProfileByOperatoriPP20_video_media_profilePi */
/* Demangled: getDefaultHEVCMediaProfileByOperator(int, _video_media_profile**, int*) */
int _Z36getDefaultHEVCMediaProfileByOperatoriPP20_video_media_profilePi(void);

/* Symbol: _Z20getMediaProfileEntryP16MediaProfileList13_video_format14_video_profile12_video_level */
/* Demangled: getMediaProfileEntry(MediaProfileList*, _video_format, _video_profile, _video_level) */
int _Z20getMediaProfileEntryP16MediaProfileList13_video_format14_video_profile12_video_level(void);

/* Symbol: _Z8toString12_video_level */
/* Demangled: toString(_video_level) */
int _Z8toString12_video_level(void);

/* Symbol: _ZTVN7android6VectorI13_video_formatEE */
/* Demangled: vtable for android::Vector<_video_format> */
extern void* _ZTVN7android6VectorI13_video_formatEE;

/* Symbol: _ZNK7android6VectorIP20_video_media_profileE7do_copyEPvPKvm */
/* Demangled: android::Vector<_video_media_profile*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP20_video_media_profileE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIP20_video_media_profileE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<_video_media_profile*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP20_video_media_profileE16do_move_backwardEPvPKvm(void);

/* Symbol: _Z15searchStartCodeimm */
/* Demangled: searchStartCode(int, unsigned long, unsigned long) */
int _Z15searchStartCodeimm(void);

/* Symbol: _Z23getAvailableBitrateInfoPjP20_video_media_bitrate */
/* Demangled: getAvailableBitrateInfo(unsigned int*, _video_media_bitrate*) */
int _Z23getAvailableBitrateInfoPjP20_video_media_bitrate(void);

/* Symbol: _ZNK7android6VectorI20_video_media_profileE10do_destroyEPvm */
/* Demangled: android::Vector<_video_media_profile>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorI20_video_media_profileE10do_destroyEPvm(void);

/* Symbol: _Z24getMediaProfileByQualityj14_video_qualityPjP20_video_media_profile */
/* Demangled: getMediaProfileByQuality(unsigned int, _video_quality, unsigned int*, _video_media_profile*) */
int _Z24getMediaProfileByQualityj14_video_qualityPjP20_video_media_profile(void);

/* Symbol: _Z10getProfile13_video_format14_video_profile */
/* Demangled: getProfile(_video_format, _video_profile) */
int _Z10getProfile13_video_format14_video_profile(void);

/* Symbol: _ZNK7android6VectorI20_video_media_profileE12do_constructEPvm */
/* Demangled: android::Vector<_video_media_profile>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorI20_video_media_profileE12do_constructEPvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<_video_quality, _video_media_profile> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI14_video_quality20_video_media_profileEEEE;

__END_DECLS

#endif /* BEGONIA_RE_LIBVCODEC_CAP_H */
