/*
 * Reverse-Engineered ABI Specification for: factory
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Executable Service Daemon
 * Soname: factory
 */

#ifndef BEGONIA_RE_FACTORY_H
#define BEGONIA_RE_FACTORY_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >::__push_back_slow_path<audio_source_t const&>(audio_source_t const&) */
int _ZNSt3__16vectorI14audio_source_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android14AudioParameter16keyDeviceConnectE */
/* Demangled: android::AudioParameter::keyDeviceConnect */
extern void* _ZN7android14AudioParameter16keyDeviceConnectE;

/* Symbol: _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc */
/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void);

/* Symbol: _ZNK7android14AudioParameter5getAtEmRNS_7String8E */
/* Demangled: android::AudioParameter::getAt(unsigned long, android::String8&) const */
int _ZNK7android14AudioParameter5getAtEmRNS_7String8E(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::toString(audio_stream_type_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_ */
/* Demangled: android::base::StderrLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base12StderrLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android14AudioParameterE */
/* Demangled: vtable for android::AudioParameter */
extern void* _ZTVN7android14AudioParameterE;

/* Symbol: _ZN7android14AudioParameter9keyBtNrecE */
/* Demangled: android::AudioParameter::keyBtNrec */
extern void* _ZN7android14AudioParameter9keyBtNrecE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::toString(audio_input_flags_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE */
/* Demangled: vtable for std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)> */
extern void* _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::toString(audio_usage_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

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

/* Symbol: _Z18get_android_dt_dirv */
/* Demangled: get_android_dt_dir() */
int _Z18get_android_dt_dirv(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE */
/* Demangled: android::fs_mgr::ReadDefaultFstab(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN7android14AudioParameter8valueOffE */
/* Demangled: android::AudioParameter::valueOff */
extern void* _ZN7android14AudioParameter8valueOffE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE6mTableE;

/* Symbol: _ZN7android4base14CachedPropertyC2EPKc */
/* Demangled: android::base::CachedProperty::CachedProperty(char const*) */
int _ZN7android4base14CachedPropertyC2EPKc(void);

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

/* Symbol: _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE */
/* Demangled: fs_mgr_update_for_slotselect(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE(void);

/* Symbol: _ZN13TemporaryFile7releaseEv */
/* Demangled: TemporaryFile::release() */
int _ZN13TemporaryFile7releaseEv(void);

/* Symbol: _ZN7android4base10LogMessageD2Ev */
/* Demangled: android::base::LogMessage::~LogMessage() */
int _ZN7android4base10LogMessageD2Ev(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)> */
extern void* _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE;

/* Symbol: iFilePRODUCT_INFOLID */
/* Demangled: iFilePRODUCT_INFOLID */
extern void* iFilePRODUCT_INFOLID;

/* Symbol: _ZN7android14AudioParameter25keyStreamSupportedFormatsE */
/* Demangled: android::AudioParameter::keyStreamSupportedFormats */
extern void* _ZN7android14AudioParameter25keyStreamSupportedFormatsE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

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

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const (&) [1]>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, char const (&) [1]) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_(void);

/* Symbol: _ZN12TemporaryDirD2Ev */
/* Demangled: TemporaryDir::~TemporaryDir() */
int _ZN12TemporaryDirD2Ev(void);

/* Symbol: _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::EndsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base18EndsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: _ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE */
/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
int _ZN7android4base17ScopedLogSeverityC1ENS0_11LogSeverityE(void);

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android14AudioParameter6removeERKNS_7String8E */
/* Demangled: android::AudioParameter::remove(android::String8 const&) */
int _ZN7android14AudioParameter6removeERKNS_7String8E(void);

/* Symbol: _ZN7android14AudioParameterD0Ev */
/* Demangled: android::AudioParameter::~AudioParameter() */
int _ZN7android14AudioParameterD0Ev(void);

/* Symbol: _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: _ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void);

/* Symbol: _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz */
/* Demangled: android::base::StringAppendF(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, ...) */
int _ZN7android4base13StringAppendFEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcz(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEERKS9_EES9_RKT_T0_(void);

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_19OutputChannelTraitsEE6mTableE;

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE */
/* Demangled: android::fs_mgr::GetVerityDeviceName(android::fs_mgr::FstabEntry const&) */
int _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE(void);

/* Symbol: _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_ */
/* Demangled: fs_mgr_get_boot_config_from_kernel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_(void);

/* Symbol: _ZN7android4base14GetIntPropertyIaEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_ */
/* Demangled: signed char android::base::GetIntProperty<signed char>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, signed char, signed char, signed char) */
int _ZN7android4base14GetIntPropertyIaEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void);

/* Symbol: property_get */
/* Demangled: property_get */
int property_get(void);

/* Symbol: _ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::channelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android22channelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_ */
/* Demangled: android::base::LogdLogger::operator()(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base10LogdLoggerclENS0_5LogIdENS0_11LogSeverityEPKcS5_jS5_(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN7android14AudioParameter6addIntERKNS_7String8Ei */
/* Demangled: android::AudioParameter::addInt(android::String8 const&, int) */
int _ZN7android14AudioParameter6addIntERKNS_7String8Ei(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_usage_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj */
/* Demangled: android::deviceFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android16deviceFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android4base9ParseUintImEEbPKcPT_S4_b */
/* Demangled: bool android::base::ParseUint<unsigned long>(char const*, unsigned long*, unsigned long, bool) */
int _ZN7android4base9ParseUintImEEbPKcPT_S4_b(void);

/* Symbol: _ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE */
/* Demangled: android::base::SetAborter(std::__1::function<void (char const*)>&&) */
int _ZN7android4base10SetAborterEONSt3__18functionIFvPKcEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_source_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _Z28fs_mgr_get_other_slot_suffixv */
/* Demangled: fs_mgr_get_other_slot_suffix() */
int _Z28fs_mgr_get_other_slot_suffixv(void);

/* Symbol: _ZN7android4base18GetLibLogFunctionsEv */
/* Demangled: android::base::GetLibLogFunctions() */
int _ZN7android4base18GetLibLogFunctionsEv(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE6mTableE;

/* Symbol: _ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_ */
/* Demangled: android::base::Readlink(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base8ReadlinkERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void);

/* Symbol: _ZN7android6fs_mgr14GetBootDevicesEv */
/* Demangled: android::fs_mgr::GetBootDevices() */
int _ZN7android6fs_mgr14GetBootDevicesEv(void);

/* Symbol: _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_ */
/* Demangled: fs_mgr_get_boot_config_from_kernel_cmdline(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void);

/* Symbol: _ZN7android4base11GetThreadIdEv */
/* Demangled: android::base::GetThreadId() */
int _ZN7android4base11GetThreadIdEv(void);

/* Symbol: _ZN7android4base10LogMessage6streamEv */
/* Demangled: android::base::LogMessage::stream() */
int _ZN7android4base10LogMessage6streamEv(void);

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

/* Symbol: _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_ */
/* Demangled: bool android::base::ParseInt<int>(char const*, int*, int, int) */
int _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_(void);

/* Symbol: _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry*, std::__1::allocator<android::fs_mgr::FstabEntry*> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry*>(android::fs_mgr::FstabEntry*&&) */
int _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE6mTableE;

/* Symbol: _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char const*>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char const*) */
int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_(void);

/* Symbol: _ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::inputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android27inputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZN7android14AudioParameter11keyHwAvSyncE */
/* Demangled: android::AudioParameter::keyHwAvSync */
extern void* _ZN7android14AudioParameter11keyHwAvSyncE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_mode_t, std::__1::allocator<audio_mode_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryFile::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN13TemporaryFile4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: stWifiCfgDefault */
/* Demangled: stWifiCfgDefault */
extern void* stWifiCfgDefault;

/* Symbol: _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc */
/* Demangled: android::base::ShouldLog(android::base::LogSeverity, char const*) */
int _ZN7android4base9ShouldLogENS0_11LogSeverityEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry&>(android::fs_mgr::FstabEntry&) */
int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_ */
/* Demangled: android::base::KernelLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base12KernelLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void);

/* Symbol: _ZGVN4aidl7android8hardware5light7ILights4hashE */
/* Demangled: guard variable for aidl::android::hardware::light::ILights::hash */
extern void* _ZGVN4aidl7android8hardware5light7ILights4hashE;

/* Symbol: _ZN7android14AudioParameter13keyMonoOutputE */
/* Demangled: android::AudioParameter::keyMonoOutput */
extern void* _ZN7android14AudioParameter13keyMonoOutputE;

/* Symbol: _ZN7android14AudioParameter14keyScreenStateE */
/* Demangled: android::AudioParameter::keyScreenState */
extern void* _ZN7android14AudioParameter14keyScreenStateE;

/* Symbol: _ZNK7android14AudioParameter6getIntERKNS_7String8ERi */
/* Demangled: android::AudioParameter::getInt(android::String8 const&, int&) const */
int _ZNK7android14AudioParameter6getIntERKNS_7String8ERi(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base17ScopedLogSeverityD1Ev */
/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
int _ZN7android4base17ScopedLogSeverityD1Ev(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEERKNS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEEEESD_RKT_T0_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_source_t, std::__1::allocator<audio_source_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE */
/* Demangled: android::fs_mgr::ReadFstabFromFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE(void);

/* Symbol: _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_jjjb */
/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, unsigned int, unsigned int, bool) */
int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_jjjb(void);

/* Symbol: _ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b */
/* Demangled: android::base::StringReplace(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >, bool) */
int _ZN7android4base13StringReplaceENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_S5_b(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE6mTableE;

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_ */
/* Demangled: android::base::StdioLogger(android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*) */
int _ZN7android4base11StdioLoggerENS0_5LogIdENS0_11LogSeverityEPKcS4_jS4_(void);

/* Symbol: _ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE */
/* Demangled: android::base::ScopedLogSeverity::ScopedLogSeverity(android::base::LogSeverity) */
int _ZN7android4base17ScopedLogSeverityC2ENS0_11LogSeverityE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_mode_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: property_list */
/* Demangled: property_list */
int property_list(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZN7android14AudioParameter12keyProgramIdE */
/* Demangled: android::AudioParameter::keyProgramId */
extern void* _ZN7android14AudioParameter12keyProgramIdE;

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::OutputChannelTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_19OutputChannelTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >::__push_back_slow_path<audio_format_t const&>(audio_format_t const&) */
int _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t */
/* Demangled: android::formatFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_format_t) */
int _ZN7android16formatFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE14audio_format_t(void);

/* Symbol: _ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::SetDefaultTag(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base13SetDefaultTagERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: property_get_int64 */
/* Demangled: property_get_int64 */
int property_get_int64(void);

/* Symbol: _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::StartsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base10StartsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE */
/* Demangled: android::fs_mgr::TransformFstabForDsu(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE(void);

/* Symbol: _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: fs_mgr_parse_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void);

/* Symbol: _ZN7android14AudioParameter31keyStreamSupportedSamplingRatesE */
/* Demangled: android::AudioParameter::keyStreamSupportedSamplingRates */
extern void* _ZN7android14AudioParameter31keyStreamSupportedSamplingRatesE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN13TemporaryFileC1Ev */
/* Demangled: TemporaryFile::TemporaryFile() */
int _ZN13TemporaryFileC1Ev(void);

/* Symbol: _ZN7android14AudioParameter6addKeyERKNS_7String8E */
/* Demangled: android::AudioParameter::addKey(android::String8 const&) */
int _ZN7android14AudioParameter6addKeyERKNS_7String8E(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void);

/* Symbol: _ZN7android4base15GetUintPropertyItEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_ */
/* Demangled: unsigned short android::base::GetUintProperty<unsigned short>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned short, unsigned short) */
int _ZN7android4base15GetUintPropertyItEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void);

/* Symbol: _ZN7android14AudioParameterD1Ev */
/* Demangled: android::AudioParameter::~AudioParameter() */
int _ZN7android14AudioParameterD1Ev(void);

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: gsensor_selftest */
/* Demangled: gsensor_selftest */
int gsensor_selftest(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE6mTableE;

/* Symbol: _ZN7android4base23WaitForPropertyCreationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE */
/* Demangled: android::base::WaitForPropertyCreation(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
int _ZN7android4base23WaitForPropertyCreationERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::OutputDeviceTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_18OutputDeviceTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_(void);

/* Symbol: _ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::base::ReadFdToString(android::base::borrowed_fd, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base14ReadFdToStringENS0_11borrowed_fdEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android14AudioParameter17keyPresentationIdE */
/* Demangled: android::AudioParameter::keyPresentationId */
extern void* _ZN7android14AudioParameter17keyPresentationIdE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE8toStringERKjRNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_usage_t, std::__1::allocator<audio_usage_t> >::__push_back_slow_path<audio_usage_t const&>(audio_usage_t const&) */
int _ZNSt3__16vectorI13audio_usage_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android4base12StringPrintfEPKcz */
/* Demangled: android::base::StringPrintf(char const*, ...) */
int _ZN7android4base12StringPrintfEPKcz(void);

/* Symbol: _ZN7android4base14GetIntPropertyIlEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_ */
/* Demangled: long android::base::GetIntProperty<long>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long, long, long) */
int _ZN7android4base14GetIntPropertyIlEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void);

/* Symbol: _ZNSt3__110shared_ptrIN4aidl7android8hardware5light7ILightsEED2Ev */
/* Demangled: std::__1::shared_ptr<aidl::android::hardware::light::ILights>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN4aidl7android8hardware5light7ILightsEED2Ev(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_stream_type_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvm */
/* Demangled: android::base::WriteFully(android::base::borrowed_fd, void const*, unsigned long) */
int _ZN7android4base10WriteFullyENS0_11borrowed_fdEPKvm(void);

/* Symbol: _ZN7android4base14GetIntPropertyIsEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_ */
/* Demangled: short android::base::GetIntProperty<short>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, short, short, short) */
int _ZN7android4base14GetIntPropertyIsEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void);

/* Symbol: _ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::StartsWithIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base20StartsWithIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: iNvRamFileMaxLID */
/* Demangled: iNvRamFileMaxLID */
extern void* iNvRamFileMaxLID;

/* Symbol: _ZN7android4base10LogdLoggerC2ENS0_5LogIdE */
/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
int _ZN7android4base10LogdLoggerC2ENS0_5LogIdE(void);

/* Symbol: _ZN7android4base15GetBoolPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: android::base::GetBoolProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN7android4base15GetBoolPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN4aidl7android8hardware5light7ILights4hashE */
/* Demangled: aidl::android::hardware::light::ILights::hash */
extern void* _ZN4aidl7android8hardware5light7ILights4hashE;

/* Symbol: _ZN7android14AudioParameterC1ERKNS_7String8E */
/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
int _ZN7android14AudioParameterC1ERKNS_7String8E(void);

/* Symbol: _ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::Basename(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base8BasenameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC2EPKcjNS0_11LogSeverityES3_i(void);

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

/* Symbol: _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE */
/* Demangled: android::fs_mgr::EnableMandatoryFlags(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_(void);

/* Symbol: _ZN7android4base15GetUintPropertyImEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_ */
/* Demangled: unsigned long android::base::GetUintProperty<unsigned long>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned long, unsigned long) */
int _ZN7android4base15GetUintPropertyImEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void);

/* Symbol: property_set */
/* Demangled: property_set */
int property_set(void);

/* Symbol: _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::ChannelIndexTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_18ChannelIndexTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_3setIjNS3_4lessIjEENS7_IjEEEEPKc(void);

/* Symbol: _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_ */
/* Demangled: fs_mgr_get_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void);

/* Symbol: _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc */
/* Demangled: android::base::EndsWith(std::__1::basic_string_view<char, std::__1::char_traits<char> >, char) */
int _ZN7android4base8EndsWithENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEEc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE6mTableE;

/* Symbol: _ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::outputChannelMasksFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android28outputChannelMasksFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_ */
/* Demangled: android::base::RemoveFileIfExists(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base18RemoveFileIfExistsERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void);

/* Symbol: _ZN7android4base10LogdLoggerC1ENS0_5LogIdE */
/* Demangled: android::base::LogdLogger::LogdLogger(android::base::LogId) */
int _ZN7android4base10LogdLoggerC1ENS0_5LogIdE(void);

/* Symbol: _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE */
/* Demangled: android::base::SetMinimumLogSeverity(android::base::LogSeverity) */
int _ZN7android4base21SetMinimumLogSeverityENS0_11LogSeverityE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _Z16is_dt_compatiblev */
/* Demangled: is_dt_compatible() */
int _Z16is_dt_compatiblev(void);

/* Symbol: _ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_ */
/* Demangled: android::base::Realpath(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN7android4base8RealpathERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN12TemporaryDirC1Ev */
/* Demangled: TemporaryDir::TemporaryDir() */
int _ZN12TemporaryDirC1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv(void);

/* Symbol: stWifiCustomDefault */
/* Demangled: stWifiCustomDefault */
extern void* stWifiCustomDefault;

/* Symbol: _ZN7android4base17ScopedLogSeverityD2Ev */
/* Demangled: android::base::ScopedLogSeverity::~ScopedLogSeverity() */
int _ZN7android4base17ScopedLogSeverityD2Ev(void);

/* Symbol: _ZN7android4base15GetUintPropertyIjEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_ */
/* Demangled: unsigned int android::base::GetUintProperty<unsigned int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int, unsigned int) */
int _ZN7android4base15GetUintPropertyIjEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE12maskToStringEjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy() */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv(void);

/* Symbol: _ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::Trim(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base4TrimERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvml */
/* Demangled: android::base::ReadFullyAtOffset(android::base::borrowed_fd, void*, unsigned long, long) */
int _ZN7android4base17ReadFullyAtOffsetENS0_11borrowed_fdEPvml(void);

/* Symbol: _ZN7android4base15GetUintPropertyIhEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_ */
/* Demangled: unsigned char android::base::GetUintProperty<unsigned char>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned char, unsigned char) */
int _ZN7android4base15GetUintPropertyIhEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_(void);

/* Symbol: _ZN7android4base9ParseUintItEEbPKcPT_S4_b */
/* Demangled: bool android::base::ParseUint<unsigned short>(char const*, unsigned short*, unsigned short, bool) */
int _ZN7android4base9ParseUintItEEbPKcPT_S4_b(void);

/* Symbol: _ZN7android14AudioParameter19keyDeviceDisconnectE */
/* Demangled: android::AudioParameter::keyDeviceDisconnect */
extern void* _ZN7android14AudioParameter19keyDeviceDisconnectE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

/* Symbol: _ZN7android4base14CachedPropertyC1EPKc */
/* Demangled: android::base::CachedProperty::CachedProperty(char const*) */
int _ZN7android4base14CachedPropertyC1EPKc(void);

/* Symbol: _ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE */
/* Demangled: android::base::WriteStringToFd(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::base::borrowed_fd) */
int _ZN7android4base15WriteStringToFdERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS0_11borrowed_fdE(void);

/* Symbol: _ZN7android14AudioParameter14keyInputSourceE */
/* Demangled: android::AudioParameter::keyInputSource */
extern void* _ZN7android14AudioParameter14keyInputSourceE;

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE6mTableE */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::mTable */
extern void* _ZN7android13TypeConverterINS_15AudioFlagTraitsEE6mTableE;

/* Symbol: _ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >::__push_back_slow_path<audio_input_flags_t const&>(audio_input_flags_t const&) */
int _ZNSt3__16vectorI19audio_input_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_format_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_format_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN13TemporaryFileD1Ev */
/* Demangled: TemporaryFile::~TemporaryFile() */
int _ZN13TemporaryFileD1Ev(void);

/* Symbol: _ZN7android4base17GetExecutablePathEv */
/* Demangled: android::base::GetExecutablePath() */
int _ZN7android4base17GetExecutablePathEv(void);

/* Symbol: _ZNK7android14AudioParameter5getAtEmRNS_7String8ES2_ */
/* Demangled: android::AudioParameter::getAt(unsigned long, android::String8&, android::String8&) const */
int _ZNK7android14AudioParameter5getAtEmRNS_7String8ES2_(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc */
/* Demangled: android::samplingRatesFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android23samplingRatesFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPKc(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _Z22fs_mgr_get_slot_suffixv */
/* Demangled: fs_mgr_get_slot_suffix() */
int _Z22fs_mgr_get_slot_suffixv(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_input_flags_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE10fromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERj(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN13TemporaryFileC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN13TemporaryFileC2Ev */
/* Demangled: TemporaryFile::TemporaryFile() */
int _ZN13TemporaryFileC2Ev(void);

/* Symbol: _ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_ */
/* Demangled: android::base::EqualsIgnoreCase(std::__1::basic_string_view<char, std::__1::char_traits<char> >, std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base16EqualsIgnoreCaseENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEES5_(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE14maskFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE */
/* Demangled: android::base::SetLogger(std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&) */
int _ZN7android4base9SetLoggerEONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS6_jS6_EEE(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_ */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::operator()(android::base::LogId&&, android::base::LogSeverity&&, char const*&&, char const*&&, unsigned int&&, char const*&&) */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_(void);

/* Symbol: _ZN7android14AudioParameterD2Ev */
/* Demangled: android::AudioParameter::~AudioParameter() */
int _ZN7android14AudioParameterD2Ev(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE14maskFromStringERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: android::channelMaskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android21channelMaskFromStringERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone(std::__1::__function::__base<void (char const*)>*) const */
int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_stream_type_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_stream_type_t, std::__1::allocator<audio_stream_type_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_stream_type_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >&, char const*) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE20collectionFromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERNS3_6vectorIjNS7_IjEEEEPKc(void);

/* Symbol: _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE */
/* Demangled: android::base::InitLogging(char**, std::__1::function<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>&&, std::__1::function<void (char const*)>&&) */
int _ZN7android4base11InitLoggingEPPcONSt3__18functionIFvNS0_5LogIdENS0_11LogSeverityEPKcS8_jS8_EEEONS4_IFvS8_EEE(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char) */
int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEcEES9_RKT_T0_(void);

/* Symbol: _ZN7android4base11GetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: android::base::GetProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base11GetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN7android14AudioParameter25keyAudioLanguagePreferredE */
/* Demangled: android::AudioParameter::keyAudioLanguagePreferred */
extern void* _ZN7android14AudioParameter25keyAudioLanguagePreferredE;

/* Symbol: _ZN7android14AudioParameterC2ERKNS_7String8E */
/* Demangled: android::AudioParameter::AudioParameter(android::String8 const&) */
int _ZN7android14AudioParameterC2ERKNS_7String8E(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN7android4base14GetIntPropertyIiEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_ */
/* Demangled: int android::base::GetIntProperty<int>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int, int, int) */
int _ZN7android4base14GetIntPropertyIiEET_RKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEES2_S2_S2_(void);

/* Symbol: _ZN7android4base21GetMinimumLogSeverityEv */
/* Demangled: android::base::GetMinimumLogSeverity() */
int _ZN7android4base21GetMinimumLogSeverityEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone(std::__1::__function::__base<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>*) const */
int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: _ZN7android4base9ParseBoolENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE */
/* Demangled: android::base::ParseBool(std::__1::basic_string_view<char, std::__1::char_traits<char> >) */
int _ZN7android4base9ParseBoolENSt3__117basic_string_viewIcNS1_11char_traitsIcEEEE(void);

/* Symbol: iFileCustomWIFILID */
/* Demangled: iFileCustomWIFILID */
extern void* iFileCustomWIFILID;

/* Symbol: _ZN7android14AudioParameter16keyStreamConnectE */
/* Demangled: android::AudioParameter::keyStreamConnect */
extern void* _ZN7android14AudioParameter16keyStreamConnectE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_source_t> >::toString(audio_source_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI14audio_source_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base9ParseUintIhEEbPKcPT_S4_b */
/* Demangled: bool android::base::ParseUint<unsigned char>(char const*, unsigned char*, unsigned char, bool) */
int _ZN7android4base9ParseUintIhEEbPKcPT_S4_b(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN7android4base15WaitForPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_NS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE */
/* Demangled: android::base::WaitForProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::chrono::duration<long long, std::__1::ratio<1l, 1000l> >) */
int _ZN7android4base15WaitForPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_NS1_6chrono8durationIxNS1_5ratioILl1ELl1000EEEEE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_content_type_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_content_type_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_content_type_tEEE6mTableE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE6mTableE;

/* Symbol: _ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >::__push_back_slow_path<audio_output_flags_t const&>(audio_output_flags_t const&) */
int _ZNSt3__16vectorI20audio_output_flags_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list */
/* Demangled: android::base::StringAppendV(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, char const*, std::__va_list) */
int _ZN7android4base13StringAppendVEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPKcSt9__va_list(void);

/* Symbol: iFileWIFILID */
/* Demangled: iFileWIFILID */
extern void* iFileWIFILID;

/* Symbol: stFGConfigDefault */
/* Demangled: stFGConfigDefault */
extern void* stFGConfigDefault;

/* Symbol: _ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC1EPKcjNS0_11LogSeverityES3_i(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7android14AudioParameter13keyFrameCountE */
/* Demangled: android::AudioParameter::keyFrameCount */
extern void* _ZN7android14AudioParameter13keyFrameCountE;

/* Symbol: _ZN7android14AudioParameter19keyStreamDisconnectE */
/* Demangled: android::AudioParameter::keyStreamDisconnect */
extern void* _ZN7android14AudioParameter19keyStreamDisconnectE;

/* Symbol: _ZN7android14AudioParameter26keyStreamSupportedChannelsE */
/* Demangled: android::AudioParameter::keyStreamSupportedChannels */
extern void* _ZN7android14AudioParameter26keyStreamSupportedChannelsE;

/* Symbol: _ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj */
/* Demangled: android::TypeConverter<android::InputDeviceTraits>::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int&) */
int _ZN7android13TypeConverterINS_17InputDeviceTraitsEE10fromStringERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERj(void);

/* Symbol: _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE */
/* Demangled: android::fs_mgr::GetEntriesForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: _ZN7android4base10LogMessageD1Ev */
/* Demangled: android::base::LogMessage::~LogMessage() */
int _ZN7android4base10LogMessageD1Ev(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::toString(audio_mode_t const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE8toStringERKS2_RNSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEE(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_input_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_input_flags_t, std::__1::allocator<audio_input_flags_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI19audio_input_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: android::base::Split(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base5SplitERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN7android14AudioParameter24keyReconfigA2dpSupportedE */
/* Demangled: android::AudioParameter::keyReconfigA2dpSupported */
extern void* _ZN7android14AudioParameter24keyReconfigA2dpSupportedE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::collectionFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<audio_output_flags_t, std::__1::allocator<audio_output_flags_t> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE20collectionFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERNS5_6vectorIS2_NS9_IS2_EEEEPKc(void);

/* Symbol: smartpa_calib_ConfigDefault */
/* Demangled: smartpa_calib_ConfigDefault */
extern void* smartpa_calib_ConfigDefault;

/* Symbol: _ZN7android14AudioParameter17keyStreamHwAvSyncE */
/* Demangled: android::AudioParameter::keyStreamHwAvSync */
extern void* _ZN7android14AudioParameter17keyStreamHwAvSyncE;

/* Symbol: _ZN12TemporaryDirD1Ev */
/* Demangled: TemporaryDir::~TemporaryDir() */
int _ZN12TemporaryDirD1Ev(void);

/* Symbol: _ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_ */
/* Demangled: android::base::LogMessage::LogLine(char const*, unsigned int, android::base::LogSeverity, char const*, char const*) */
int _ZN7android4base10LogMessage7LogLineEPKcjNS0_11LogSeverityES3_S3_(void);

/* Symbol: _ZN7android4base14CachedProperty3GetEPb */
/* Demangled: android::base::CachedProperty::Get(bool*) */
int _ZN7android4base14CachedProperty3GetEPb(void);

/* Symbol: _ZN7android14AudioParameter9keyFormatE */
/* Demangled: android::AudioParameter::keyFormat */
extern void* _ZN7android14AudioParameter9keyFormatE;

/* Symbol: _ZNK7android14AudioParameter8getFloatERKNS_7String8ERf */
/* Demangled: android::AudioParameter::getFloat(android::String8 const&, float&) const */
int _ZNK7android14AudioParameter8getFloatERKNS_7String8ERf(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::toString(unsigned int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE8toStringERKjRNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<char const*, std::__1::allocator<char const*> >, char>(std::__1::vector<char const*, std::__1::allocator<char const*> > const&, char) */
int _ZN7android4base4JoinINSt3__16vectorIPKcNS2_9allocatorIS5_EEEEcEENS2_12basic_stringIcNS2_11char_traitsIcEENS6_IcEEEERKT_T0_(void);

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

/* Symbol: _ZN12TemporaryDirC2Ev */
/* Demangled: TemporaryDir::TemporaryDir() */
int _ZN12TemporaryDirC2Ev(void);

/* Symbol: _ZN7android4base14DefaultAborterEPKc */
/* Demangled: android::base::DefaultAborter(char const*) */
int _ZN7android4base14DefaultAborterEPKc(void);

/* Symbol: _ZNK7android14AudioParameter3getERKNS_7String8ERS1_ */
/* Demangled: android::AudioParameter::get(android::String8 const&, android::String8&) const */
int _ZNK7android14AudioParameter3getERKNS_7String8ERS1_(void);

/* Symbol: _ZN7android14AudioParameter10keyRoutingE */
/* Demangled: android::AudioParameter::keyRouting */
extern void* _ZN7android14AudioParameter10keyRoutingE;

/* Symbol: _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b */
/* Demangled: android::base::WriteStringToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN7android4base17WriteStringToFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_b(void);

/* Symbol: _ZN7android14AudioParameter18valueListSeparatorE */
/* Demangled: android::AudioParameter::valueListSeparator */
extern void* _ZN7android14AudioParameter18valueListSeparatorE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_ */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_output_flags_t> >::fromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, audio_output_flags_t&) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI20audio_output_flags_tEEE10fromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERS2_(void);

/* Symbol: _ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::InputChannelTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_18InputChannelTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EElEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry>(android::fs_mgr::FstabEntry&&) */
int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNK7android14AudioParameter12toStringImplEb */
/* Demangled: android::AudioParameter::toStringImpl(bool) const */
int _ZNK7android14AudioParameter12toStringImplEb(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_mode_t> >::maskFromString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsI12audio_mode_tEEE14maskFromStringERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb */
/* Demangled: android::fs_mgr::ReadFstabFromDt(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, bool) */
int _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb(void);

/* Symbol: _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b */
/* Demangled: android::base::ReadFileToString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, bool) */
int _ZN7android4base16ReadFileToStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPS7_b(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy() */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZN7android14AudioParameter7valueOnE */
/* Demangled: android::AudioParameter::valueOn */
extern void* _ZN7android14AudioParameter7valueOnE;

/* Symbol: _ZN7android14AudioParameter8addFloatERKNS_7String8Ef */
/* Demangled: android::AudioParameter::addFloat(android::String8 const&, float) */
int _ZN7android14AudioParameter8addFloatERKNS_7String8Ef(void);

/* Symbol: _ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::AudioFlagTraits>::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_15AudioFlagTraitsEE12maskToStringEjRNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc */
/* Demangled: android::TypeConverter<android::DefaultTraits<unsigned int> >::maskToString(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, char const*) */
int _ZN7android13TypeConverterINS_13DefaultTraitsIjEEE12maskToStringEjRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEPKc(void);

/* Symbol: _ZN7android4base8ParseIntIlEEbPKcPT_S4_S4_ */
/* Demangled: bool android::base::ParseInt<long>(char const*, long*, long, long) */
int _ZN7android4base8ParseIntIlEEbPKcPT_S4_S4_(void);

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void);

/* Symbol: _ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryDir::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN12TemporaryDir4initERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm */
/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned long) */
int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm(void);

/* Symbol: _ZN7android14AudioParameter11keyChannelsE */
/* Demangled: android::AudioParameter::keyChannels */
extern void* _ZN7android14AudioParameter11keyChannelsE;

/* Symbol: _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE6mTableE */
/* Demangled: android::TypeConverter<android::DefaultTraits<audio_usage_t> >::mTable */
extern void* _ZN7android13TypeConverterINS_13DefaultTraitsI13audio_usage_tEEE6mTableE;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZN13TemporaryFileD2Ev */
/* Demangled: TemporaryFile::~TemporaryFile() */
int _ZN13TemporaryFileD2Ev(void);

/* Symbol: _ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::base::Dirname(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base7DirnameERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android4base9ReadFullyENS0_11borrowed_fdEPvm */
/* Demangled: android::base::ReadFully(android::base::borrowed_fd, void*, unsigned long) */
int _ZN7android4base9ReadFullyENS0_11borrowed_fdEPvm(void);

/* Symbol: _ZN7android4base22GetExecutableDirectoryEv */
/* Demangled: android::base::GetExecutableDirectory() */
int _ZN7android4base22GetExecutableDirectoryEv(void);

/* Symbol: _ZN7android4base11SetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_ */
/* Demangled: android::base::SetProperty(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android4base11SetPropertyERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_(void);

/* Symbol: _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE */
/* Demangled: android::fs_mgr::GetEntryForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEENS_21__tree_const_iteratorIS6_SI_lEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, long> std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEENS_21__tree_const_iteratorIS6_SI_lEERKT_DpOT0_(void);

/* Symbol: _ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: TemporaryFile::TemporaryFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN13TemporaryFileC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: stGPSConfigDefault */
/* Demangled: stGPSConfigDefault */
extern void* stGPSConfigDefault;

/* Symbol: gsensor_init */
/* Demangled: gsensor_init */
int gsensor_init(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::operator()(char const*&&) */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i */
/* Demangled: android::base::LogMessage::LogMessage(char const*, unsigned int, android::base::LogId, android::base::LogSeverity, char const*, int) */
int _ZN7android4base10LogMessageC2EPKcjNS0_5LogIdENS0_11LogSeverityES3_i(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void);

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

#endif /* BEGONIA_RE_FACTORY_H */
