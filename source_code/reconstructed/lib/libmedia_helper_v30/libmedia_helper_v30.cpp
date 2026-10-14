/*
 * Reverse-Engineered Source for: libmedia_helper-v30.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmedia_helper_v30"

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
#include "libmedia_helper_v30.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterC1ERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameterC1ERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >::__push_back_slow_path<audio_source_t const&>(audio_source_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyDeviceConnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter16keyDeviceConnectE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::InputDeviceTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_17InputDeviceTraitsEE6mTableE = NULL;

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::AudioParameter::getAt(unsigned int, android::String8&, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter5getAtEjRNS_7String8ES2_(void) {
    ALOGD("_ZNK7android14AudioParameter5getAtEjRNS_7String8ES2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::toString(audio_stream_type_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyBtNrec */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter9keyBtNrecE = NULL;

/* Exported Object: vtable for android::AudioParameter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14AudioParameterE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::toString(audio_input_flags_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE6mTableE = NULL;

/* Demangled: android::outputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::AudioParameter::getAt(unsigned int, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter5getAtEjRNS_7String8E(void) {
    ALOGD("_ZNK7android14AudioParameter5getAtEjRNS_7String8E() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::toString(audio_usage_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::toString(audio_output_flags_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::ChannelIndexTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE6mTableE = NULL;

/* Exported Object: android::TypeConverter<android::InputChannelTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_18InputChannelTraitsEE6mTableE = NULL;

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::AudioParameter::valueOff */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter8valueOffE = NULL;

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_format_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE6mTableE = NULL;

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: android::AudioParameter::keyStreamSupportedFormats */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter25keyStreamSupportedFormatsE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE20collectionFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERNS4_6vectorIjNS8_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE20collectionFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERNS4_6vectorIjNS8_IjEEEEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_stream_type_t, std::__1::allocator<audio_stream_type_t> >::__push_back_slow_path<audio_stream_type_t const&>(audio_stream_type_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19audio_stream_type_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI19audio_stream_type_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyReconfigA2dp */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter15keyReconfigA2dpE = NULL;

/* Demangled: android::AudioParameter::add(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter3addERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android14AudioParameter3addERKNS_7String8ES3_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyDeviceDisconnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter19keyDeviceDisconnectE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyInputSource */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter14keyInputSourceE = NULL;

/* Demangled: android::AudioParameter::remove(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter6removeERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameter6removeERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::AudioParameter::~AudioParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterD0Ev(void) {
    ALOGD("_ZN7android14AudioParameterD0Ev() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::AudioFlagTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_15AudioFlagTraitsEE6mTableE = NULL;

/* Demangled: void std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >::__push_back_slow_path<audio_input_flags_t const&>(audio_input_flags_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::OutputChannelTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_19OutputChannelTraitsEE6mTableE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::channelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::samplingRatesFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::AudioParameter::addInt(android::String8 const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter6addIntERKNS_7String8Ei(void) {
    ALOGD("_ZN7android14AudioParameter6addIntERKNS_7String8Ei() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_usage_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_input_flags_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::deviceFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_source_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::AudioParameter::~AudioParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterD2Ev(void) {
    ALOGD("_ZN7android14AudioParameterD2Ev() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::OutputDeviceTraits>::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE6mTableE = NULL;

/* Demangled: android::channelMaskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_stream_type_t, std::__1::allocator<audio_stream_type_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_mode_t, std::__1::allocator<audio_mode_t> >::__push_back_slow_path<audio_mode_t const&>(audio_mode_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12audio_mode_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI12audio_mode_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyAudioLanguagePreferred */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter25keyAudioLanguagePreferredE = NULL;

/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterC2ERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameterC2ERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_source_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE6mTableE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyStreamConnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter16keyStreamConnectE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::toString(audio_source_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::inputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyHwAvSync */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter11keyHwAvSyncE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_mode_t, std::__1::allocator<audio_mode_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_content_type_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_content_type_tEEE6mTableE = NULL;

/* Exported Object: android::TypeConverter<android::DefaultTraits<unsigned int> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE6mTableE = NULL;

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >::__push_back_slow_path<audio_output_flags_t const&>(audio_output_flags_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyFrameCount */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter13keyFrameCountE = NULL;

/* Exported Object: android::AudioParameter::keyStreamDisconnect */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter19keyStreamDisconnectE = NULL;

/* Exported Object: android::AudioParameter::keyStreamSupportedChannels */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter26keyStreamSupportedChannelsE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyMonoOutput */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter13keyMonoOutputE = NULL;

/* Exported Object: android::AudioParameter::keyScreenState */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter14keyScreenStateE = NULL;

/* Demangled: android::AudioParameter::getInt(android::String8 const&, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter6getIntERKNS_7String8ERi(void) {
    ALOGD("_ZNK7android14AudioParameter6getIntERKNS_7String8ERi() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::toString(audio_mode_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyReconfigA2dpSupported */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter24keyReconfigA2dpSupportedE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyStreamHwAvSync */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter17keyStreamHwAvSyncE = NULL;

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE6mTableE = NULL;

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: android::AudioParameter::keyFormat */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter9keyFormatE = NULL;

/* Demangled: android::AudioParameter::getFloat(android::String8 const&, float&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter8getFloatERKNS_7String8ERf(void) {
    ALOGD("_ZNK7android14AudioParameter8getFloatERKNS_7String8ERf() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_mode_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyProgramId */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter12keyProgramIdE = NULL;

/* Exported Object: android::AudioParameter::keySamplingRate */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter15keySamplingRateE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::toString(audio_format_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE6mTableE = NULL;

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >::__push_back_slow_path<audio_format_t const&>(audio_format_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::AudioParameter::get(android::String8 const&, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter3getERKNS_7String8ERS1_(void) {
    ALOGD("_ZNK7android14AudioParameter3getERKNS_7String8ERS1_() called");
    return 0;
}

/* Demangled: android::formatFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_format_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t(void) {
    ALOGD("_ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyRouting */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter10keyRoutingE = NULL;

/* Exported Object: android::AudioParameter::valueListSeparator */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter18valueListSeparatorE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_output_flags_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyStreamSupportedSamplingRates */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter31keyStreamSupportedSamplingRatesE = NULL;

/* Demangled: android::AudioParameter::toStringImpl(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14AudioParameter12toStringImplEb(void) {
    ALOGD("_ZNK7android14AudioParameter12toStringImplEb() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::AudioParameter::addKey(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter6addKeyERKNS_7String8E(void) {
    ALOGD("_ZN7android14AudioParameter6addKeyERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::AudioParameter::valueOn */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter7valueOnE = NULL;

/* Demangled: android::AudioParameter::addFloat(android::String8 const&, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameter8addFloatERKNS_7String8Ef(void) {
    ALOGD("_ZN7android14AudioParameter8addFloatERKNS_7String8Ef() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputChannelTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::AudioParameter::~AudioParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AudioParameterD1Ev(void) {
    ALOGD("_ZN7android14AudioParameterD1Ev() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: android::AudioParameter::keyChannels */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter11keyChannelsE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE6mTableE = NULL;

/* Exported Object: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::mTable */
extern "C" __attribute__((visibility("default"))) void* _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE6mTableE = NULL;

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: android::AudioParameter::keyPresentationId */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AudioParameter17keyPresentationIdE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >::__push_back_slow_path<audio_usage_t const&>(audio_usage_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_stream_type_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_format_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void) {
    ALOGD("_ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_() called");
    return 0;
}

/* Demangled: android::TypeConverter<android::OutputChannelTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void) {
    ALOGD("_ZN7android13TypeConverterINS_19OutputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc() called");
    return 0;
}

/* Demangled: android::formatsFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17formatsFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void) {
    ALOGD("_ZN7android17formatsFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}
