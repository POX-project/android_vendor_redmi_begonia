/*
 * Reverse-Engineered ABI Specification for: libmedia_helper-v30.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmedia_helper.so
 */

#ifndef BEGONIA_RE_LIBMEDIA_HELPER_V30_H
#define BEGONIA_RE_LIBMEDIA_HELPER_V30_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android14AudioParameterC1ERKNS_7String8E */
/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
int _ZN7android14AudioParameterC1ERKNS_7String8E(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >::__push_back_slow_path<audio_source_t const&>(audio_source_t const&) */
int _ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android14AudioParameter16keyDeviceConnectE */
/* Demangled: android::AudioParameter::keyDeviceConnect */
extern void* _ZN7android14AudioParameter16keyDeviceConnectE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_17InputDeviceTraitsEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void);

/* Symbol: _ZNK7android14AudioParameter5getAtEjRNS_7String8ES2_ */
/* Demangled: android::AudioParameter::getAt(unsigned int, android::String8&, android::String8&) const */
int _ZNK7android14AudioParameter5getAtEjRNS_7String8ES2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::toString(audio_stream_type_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android14AudioParameter9keyBtNrecE */
/* Demangled: android::AudioParameter::keyBtNrec */
extern void* _ZN7android14AudioParameter9keyBtNrecE;

/* Symbol: _ZTVN7android14AudioParameterE */
/* Demangled: vtable for android::AudioParameter */
extern void* _ZTVN7android14AudioParameterE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::toString(audio_input_flags_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE6mTableE;

/* Symbol: _ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::outputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android14AudioParameter5getAtEjRNS_7String8E */
/* Demangled: android::AudioParameter::getAt(unsigned int, android::String8&) const */
int _ZNK7android14AudioParameter5getAtEjRNS_7String8E(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::toString(audio_usage_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::toString(audio_output_flags_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_18InputChannelTraitsEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameter8valueOffE */
/* Demangled: android::AudioParameter::valueOff */
extern void* _ZN7android14AudioParameter8valueOffE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE6mTableE;

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android14AudioParameter25keyStreamSupportedFormatsE */
/* Demangled: android::AudioParameter::keyStreamSupportedFormats */
extern void* _ZN7android14AudioParameter25keyStreamSupportedFormatsE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE20collectionFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERNS4_6vectorIjNS8_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE20collectionFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERNS4_6vectorIjNS8_IjEEEEPKc(void);

/* Symbol: _ZNSt3__16vectorI19audio_stream_type_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_stream_type_t, std::__1::allocator<audio_stream_type_t> >::__push_back_slow_path<audio_stream_type_t const&>(audio_stream_type_t const&) */
int _ZNSt3__16vectorI19audio_stream_type_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android14AudioParameter15keyReconfigA2dpE */
/* Demangled: android::AudioParameter::keyReconfigA2dp */
extern void* _ZN7android14AudioParameter15keyReconfigA2dpE;

/* Symbol: _ZN7android14AudioParameter3addERKNS_7String8ES3_ */
/* Demangled: android::AudioParameter::add(android::String8 const&, android::String8 const&) */
int _ZN7android14AudioParameter3addERKNS_7String8ES3_(void);

/* Symbol: _ZN7android14AudioParameter19keyDeviceDisconnectE */
/* Demangled: android::AudioParameter::keyDeviceDisconnect */
extern void* _ZN7android14AudioParameter19keyDeviceDisconnectE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameter14keyInputSourceE */
/* Demangled: android::AudioParameter::keyInputSource */
extern void* _ZN7android14AudioParameter14keyInputSourceE;

/* Symbol: _ZN7android14AudioParameter6removeERKNS_7String8E */
/* Demangled: android::AudioParameter::remove(android::String8 const&) */
int _ZN7android14AudioParameter6removeERKNS_7String8E(void);

/* Symbol: _ZN7android14AudioParameterD0Ev */
/* Demangled: android::AudioParameter::~AudioParameter() */
int _ZN7android14AudioParameterD0Ev(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_15AudioFlagTraitsEE6mTableE;

/* Symbol: _ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >::__push_back_slow_path<audio_input_flags_t const&>(audio_input_flags_t const&) */
int _ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_19OutputChannelTraitsEE6mTableE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::channelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::samplingRatesFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameter6addIntERKNS_7String8Ei */
/* Demangled: android::AudioParameter::addInt(android::String8 const&, int) */
int _ZN7android14AudioParameter6addIntERKNS_7String8Ei(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_usage_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_input_flags_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj */
/* Demangled: android::deviceFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_source_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android14AudioParameterD2Ev */
/* Demangled: android::AudioParameter::~AudioParameter() */
int _ZN7android14AudioParameterD2Ev(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE6mTableE;

/* Symbol: _ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: android::channelMaskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_stream_type_t, std::__1::allocator<audio_stream_type_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__16vectorI12audio_mode_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_mode_t, std::__1::allocator<audio_mode_t> >::__push_back_slow_path<audio_mode_t const&>(audio_mode_t const&) */
int _ZNSt3__16vectorI12audio_mode_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android14AudioParameter25keyAudioLanguagePreferredE */
/* Demangled: android::AudioParameter::keyAudioLanguagePreferred */
extern void* _ZN7android14AudioParameter25keyAudioLanguagePreferredE;

/* Symbol: _ZN7android14AudioParameterC2ERKNS_7String8E */
/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
int _ZN7android14AudioParameterC2ERKNS_7String8E(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN7android14AudioParameter16keyStreamConnectE */
/* Demangled: android::AudioParameter::keyStreamConnect */
extern void* _ZN7android14AudioParameter16keyStreamConnectE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::toString(audio_source_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::inputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZN7android14AudioParameter11keyHwAvSyncE */
/* Demangled: android::AudioParameter::keyHwAvSync */
extern void* _ZN7android14AudioParameter11keyHwAvSyncE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_mode_t, std::__1::allocator<audio_mode_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_content_type_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_content_type_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_content_type_tEEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >::__push_back_slow_path<audio_output_flags_t const&>(audio_output_flags_t const&) */
int _ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android14AudioParameter13keyFrameCountE */
/* Demangled: android::AudioParameter::keyFrameCount */
extern void* _ZN7android14AudioParameter13keyFrameCountE;

/* Symbol: _ZN7android14AudioParameter19keyStreamDisconnectE */
/* Demangled: android::AudioParameter::keyStreamDisconnect */
extern void* _ZN7android14AudioParameter19keyStreamDisconnectE;

/* Symbol: _ZN7android14AudioParameter26keyStreamSupportedChannelsE */
/* Demangled: android::AudioParameter::keyStreamSupportedChannels */
extern void* _ZN7android14AudioParameter26keyStreamSupportedChannelsE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android14AudioParameter13keyMonoOutputE */
/* Demangled: android::AudioParameter::keyMonoOutput */
extern void* _ZN7android14AudioParameter13keyMonoOutputE;

/* Symbol: _ZN7android14AudioParameter14keyScreenStateE */
/* Demangled: android::AudioParameter::keyScreenState */
extern void* _ZN7android14AudioParameter14keyScreenStateE;

/* Symbol: _ZNK7android14AudioParameter6getIntERKNS_7String8ERi */
/* Demangled: android::AudioParameter::getInt(android::String8 const&, int&) const */
int _ZNK7android14AudioParameter6getIntERKNS_7String8ERi(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::toString(audio_mode_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android14AudioParameter24keyReconfigA2dpSupportedE */
/* Demangled: android::AudioParameter::keyReconfigA2dpSupported */
extern void* _ZN7android14AudioParameter24keyReconfigA2dpSupportedE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android14AudioParameter17keyStreamHwAvSyncE */
/* Demangled: android::AudioParameter::keyStreamHwAvSync */
extern void* _ZN7android14AudioParameter17keyStreamHwAvSyncE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE6mTableE;

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN7android14AudioParameter9keyFormatE */
/* Demangled: android::AudioParameter::keyFormat */
extern void* _ZN7android14AudioParameter9keyFormatE;

/* Symbol: _ZNK7android14AudioParameter8getFloatERKNS_7String8ERf */
/* Demangled: android::AudioParameter::getFloat(android::String8 const&, float&) const */
int _ZNK7android14AudioParameter8getFloatERKNS_7String8ERf(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_mode_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android14AudioParameter12keyProgramIdE */
/* Demangled: android::AudioParameter::keyProgramId */
extern void* _ZN7android14AudioParameter12keyProgramIdE;

/* Symbol: _ZN7android14AudioParameter15keySamplingRateE */
/* Demangled: android::AudioParameter::keySamplingRate */
extern void* _ZN7android14AudioParameter15keySamplingRateE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::toString(audio_format_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >::__push_back_slow_path<audio_format_t const&>(audio_format_t const&) */
int _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZNK7android14AudioParameter3getERKNS_7String8ERS1_ */
/* Demangled: android::AudioParameter::get(android::String8 const&, android::String8&) const */
int _ZNK7android14AudioParameter3getERKNS_7String8ERS1_(void);

/* Symbol: _ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t */
/* Demangled: android::formatFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_format_t) */
int _ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t(void);

/* Symbol: _ZN7android14AudioParameter10keyRoutingE */
/* Demangled: android::AudioParameter::keyRouting */
extern void* _ZN7android14AudioParameter10keyRoutingE;

/* Symbol: _ZN7android14AudioParameter18valueListSeparatorE */
/* Demangled: android::AudioParameter::valueListSeparator */
extern void* _ZN7android14AudioParameter18valueListSeparatorE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_output_flags_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameter31keyStreamSupportedSamplingRatesE */
/* Demangled: android::AudioParameter::keyStreamSupportedSamplingRates */
extern void* _ZN7android14AudioParameter31keyStreamSupportedSamplingRatesE;

/* Symbol: _ZNK7android14AudioParameter12toStringImplEb */
/* Demangled: android::AudioParameter::toStringImpl(bool) const */
int _ZNK7android14AudioParameter12toStringImplEb(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameter6addKeyERKNS_7String8E */
/* Demangled: android::AudioParameter::addKey(android::String8 const&) */
int _ZN7android14AudioParameter6addKeyERKNS_7String8E(void);

/* Symbol: _ZN7android14AudioParameter7valueOnE */
/* Demangled: android::AudioParameter::valueOn */
extern void* _ZN7android14AudioParameter7valueOnE;

/* Symbol: _ZN7android14AudioParameter8addFloatERKNS_7String8Ef */
/* Demangled: android::AudioParameter::addFloat(android::String8 const&, float) */
int _ZN7android14AudioParameter8addFloatERKNS_7String8Ef(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameterD1Ev */
/* Demangled: android::AudioParameter::~AudioParameter() */
int _ZN7android14AudioParameterD1Ev(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameter11keyChannelsE */
/* Demangled: android::AudioParameter::keyChannels */
extern void* _ZN7android14AudioParameter11keyChannelsE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE6mTableE;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android14AudioParameter17keyPresentationIdE */
/* Demangled: android::AudioParameter::keyPresentationId */
extern void* _ZN7android14AudioParameter17keyPresentationIdE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >::__push_back_slow_path<audio_usage_t const&>(audio_usage_t const&) */
int _ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_stream_type_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_format_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void);

/* Symbol: _ZN7android17formatsFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::formatsFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android17formatsFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMEDIA_HELPER_V30_H */
