/*
 * Reverse-Engineered ABI Specification for: libkeymaster4support.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libkeymaster4support.so
 */

#ifndef BEGONIA_RE_LIBKEYMASTER4SUPPORT_H
#define BEGONIA_RE_LIBKEYMASTER4SUPPORT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware9keymaster4V4_022KM_KEY_DESCRIPTION_newEv */
/* Demangled: android::hardware::keymaster::V4_0::KM_KEY_DESCRIPTION_new() */
int _ZN7android8hardware9keymaster4V4_022KM_KEY_DESCRIPTION_newEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023KM_KEY_DESCRIPTION_freeEPNS2_18km_key_descriptionE */
/* Demangled: android::hardware::keymaster::V4_0::KM_KEY_DESCRIPTION_free(android::hardware::keymaster::V4_0::km_key_description*) */
int _ZN7android8hardware9keymaster4V4_023KM_KEY_DESCRIPTION_freeEPNS2_18km_key_descriptionE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16GcmModeMinMacLenEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::GcmModeMinMacLen(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16GcmModeMinMacLenEj(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS2_12KeyParameterE */
/* Demangled: android::hardware::keymaster::V4_0::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, android::hardware::keymaster::V4_0::KeyParameter const&) */
int _ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS2_12KeyParameterE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEv */
/* Demangled: android::hardware::keymaster::V4_0::support::getOsPatchlevel() */
int _ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_024parse_attestation_recordEPKhmPjPNS2_13SecurityLevelES5_S7_PNS0_8hidl_vecIhEEPNS2_16AuthorizationSetESC_SA_ */
/* Demangled: android::hardware::keymaster::V4_0::parse_attestation_record(unsigned char const*, unsigned long, unsigned int*, android::hardware::keymaster::V4_0::SecurityLevel*, unsigned int*, android::hardware::keymaster::V4_0::SecurityLevel*, android::hardware::hidl_vec<unsigned char>*, android::hardware::keymaster::V4_0::AuthorizationSet*, android::hardware::keymaster::V4_0::AuthorizationSet*, android::hardware::hidl_vec<unsigned char>*) */
int _ZN7android8hardware9keymaster4V4_024parse_attestation_recordEPKhmPjPNS2_13SecurityLevelES5_S7_PNS0_8hidl_vecIhEEPNS2_16AuthorizationSetESC_SA_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_011deserializeERNS2_9InStreamsEPNS2_12KeyParameterE */
/* Demangled: android::hardware::keymaster::V4_0::deserialize(android::hardware::keymaster::V4_0::InStreams&, android::hardware::keymaster::V4_0::KeyParameter*) */
int _ZN7android8hardware9keymaster4V4_011deserializeERNS2_9InStreamsEPNS2_12KeyParameterE(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EEPS5_ */
/* Demangled: std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__swap_out_circular_buffer(std::__1::__split_buffer<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter>&>&, android::hardware::keymaster::V4_0::KeyParameter*) */
int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EEPS5_(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__push_back_slow_path<android::hardware::keymaster::V4_0::KeyParameter>(android::hardware::keymaster::V4_0::KeyParameter&&) */
int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeserializeEPNSt3__113basic_istreamIcNS4_11char_traitsIcEEEE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Deserialize(std::__1::basic_istream<char, std::__1::char_traits<char> >*) */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeserializeEPNSt3__113basic_istreamIcNS4_11char_traitsIcEEEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_09serializeERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE */
/* Demangled: android::hardware::keymaster::V4_0::serialize(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> > const&) */
int _ZN7android8hardware9keymaster4V4_09serializeERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support26serializeVerificationTokenERKNS2_17VerificationTokenE */
/* Demangled: android::hardware::keymaster::V4_0::support::serializeVerificationToken(android::hardware::keymaster::V4_0::VerificationToken const&) */
int _ZN7android8hardware9keymaster4V4_07support26serializeVerificationTokenERKNS2_17VerificationTokenE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_020d2i_KM_ROOT_OF_TRUSTEPPNS2_16km_root_of_trustEPPKhl */
/* Demangled: android::hardware::keymaster::V4_0::d2i_KM_ROOT_OF_TRUST(android::hardware::keymaster::V4_0::km_root_of_trust**, unsigned char const**, long) */
int _ZN7android8hardware9keymaster4V4_020d2i_KM_ROOT_OF_TRUSTEPPNS2_16km_root_of_trustEPPKhl(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet4SortEv */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Sort() */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet4SortEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE8__appendEm */
/* Demangled: std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__append(unsigned long) */
int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE8__appendEm(void);

/* Symbol: _ZNSt3__17__sort3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_T_ */
/* Demangled: unsigned int std::__1::__sort3<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
int _ZNSt3__17__sort3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_T_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_021KM_ROOT_OF_TRUST_freeEPNS2_16km_root_of_trustE */
/* Demangled: android::hardware::keymaster::V4_0::KM_ROOT_OF_TRUST_free(android::hardware::keymaster::V4_0::km_root_of_trust*) */
int _ZN7android8hardware9keymaster4V4_021KM_ROOT_OF_TRUST_freeEPNS2_16km_root_of_trustE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet6FilterENSt3__18functionIFbRKNS2_12KeyParameterEEEE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Filter(std::__1::function<bool (android::hardware::keymaster::V4_0::KeyParameter const&)>) */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet6FilterENSt3__18functionIFbRKNS2_12KeyParameterEEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016i2d_KM_AUTH_LISTEPNS2_12km_auth_listEPPh */
/* Demangled: android::hardware::keymaster::V4_0::i2d_KM_AUTH_LIST(android::hardware::keymaster::V4_0::km_auth_list*, unsigned char**) */
int _ZN7android8hardware9keymaster4V4_016i2d_KM_AUTH_LISTEPNS2_12km_auth_listEPPh(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_011deserializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_9InStreamsEPNS2_12KeyParameterE */
/* Demangled: android::hardware::keymaster::V4_0::deserialize(android::hardware::keymaster::V4_0::TypedTag<(android::hardware::keymaster::V4_0::TagType)0, (android::hardware::keymaster::V4_0::Tag)0>&&, android::hardware::keymaster::V4_0::InStreams&, android::hardware::keymaster::V4_0::KeyParameter*) */
int _ZN7android8hardware9keymaster4V4_011deserializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_9InStreamsEPNS2_12KeyParameterE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_019serializeParamValueERNS2_10OutStreamsERKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::keymaster::V4_0::serializeParamValue(android::hardware::keymaster::V4_0::OutStreams&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware9keymaster4V4_019serializeParamValueERNS2_10OutStreamsERKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16RsaEncryptionKeyEjm */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::RsaEncryptionKey(unsigned int, unsigned long) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16RsaEncryptionKeyEjm(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6RsaKeyEjm */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::RsaKey(unsigned int, unsigned long) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6RsaKeyEjm(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder9BlockModeESt16initializer_listINS2_9BlockModeEE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::BlockMode(std::initializer_list<android::hardware::keymaster::V4_0::BlockMode>) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder9BlockModeESt16initializer_listINS2_9BlockModeEE(void);

/* Symbol: _ZNK7android8hardware9keymaster4V4_016AuthorizationSet4findENS2_3TagEi */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::find(android::hardware::keymaster::V4_0::Tag, int) const */
int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet4findENS2_3TagEi(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android8hardware9keymaster4V4_0ltERKNS2_21HmacSharingParametersES5_ */
/* Demangled: android::hardware::keymaster::V4_0::operator<(android::hardware::keymaster::V4_0::HmacSharingParameters const&, android::hardware::keymaster::V4_0::HmacSharingParameters const&) */
int _ZN7android8hardware9keymaster4V4_0ltERKNS2_21HmacSharingParametersES5_(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE6insertIN7android8hardware8hidl_vecIhE4iterILb1EEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsISC_E9referenceEEE5valueENS_11__wrap_iterIPhEEE4typeENSG_IPKhEESC_SC_ */
/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6insertIN7android8hardware8hidl_vecIhE4iterILb1EEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsISC_E9referenceEEE5valueENS_11__wrap_iterIPhEEE4typeENSG_IPKhEESC_SC_ */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE6insertIN7android8hardware8hidl_vecIhE4iterILb1EEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsISC_E9referenceEEE5valueENS_11__wrap_iterIPhEEE4typeENSG_IPKhEESC_SC_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyENS2_7EcCurveE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaSigningKey(android::hardware::keymaster::V4_0::EcCurve) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyENS2_7EcCurveE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7HmacKeyEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::HmacKey(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7HmacKeyEj(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN7android8hardware9keymaster4V4_07support28deserializeVerificationTokenERKNSt3__16vectorIhNS4_9allocatorIhEEEE */
/* Demangled: android::hardware::keymaster::V4_0::support::deserializeVerificationToken(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android8hardware9keymaster4V4_07support28deserializeVerificationTokenERKNSt3__16vectorIhNS4_9allocatorIhEEEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaSigningKey(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyEj(void);

/* Symbol: _ZNK7android8hardware9keymaster4V4_016AuthorizationSet8GetEntryENS2_3TagE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::GetEntry(android::hardware::keymaster::V4_0::Tag) const */
int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet8GetEntryENS2_3TagE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support12getOsVersionEv */
/* Demangled: android::hardware::keymaster::V4_0::support::getOsVersion() */
int _ZN7android8hardware9keymaster4V4_07support12getOsVersionEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_018construct_uint_maxEv */
/* Demangled: android::hardware::keymaster::V4_0::construct_uint_max() */
int _ZN7android8hardware9keymaster4V4_018construct_uint_maxEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_012keyParamLessERKNS2_12KeyParameterES5_ */
/* Demangled: android::hardware::keymaster::V4_0::keyParamLess(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&) */
int _ZN7android8hardware9keymaster4V4_012keyParamLessERKNS2_12KeyParameterES5_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet8SubtractERKS3_ */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Subtract(android::hardware::keymaster::V4_0::AuthorizationSet const&) */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet8SubtractERKS3_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSetixEi */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::operator[](int) */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSetixEi(void);

/* Symbol: _ZNK7android8hardware9keymaster4V4_016AuthorizationSet11GetTagCountENS2_3TagE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::GetTagCount(android::hardware::keymaster::V4_0::Tag) const */
int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet11GetTagCountENS2_3TagE(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware9keymaster4V4_017KM_AUTH_LIST_freeEPNS2_12km_auth_listE */
/* Demangled: android::hardware::keymaster::V4_0::KM_AUTH_LIST_free(android::hardware::keymaster::V4_0::km_auth_list*) */
int _ZN7android8hardware9keymaster4V4_017KM_AUTH_LIST_freeEPNS2_12km_auth_listE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_019parse_root_of_trustEPKhmPNS0_8hidl_vecIhEEPNS2_25keymaster_verified_boot_tEPbS7_ */
/* Demangled: android::hardware::keymaster::V4_0::parse_root_of_trust(unsigned char const*, unsigned long, android::hardware::hidl_vec<unsigned char>*, android::hardware::keymaster::V4_0::keymaster_verified_boot_t*, bool*, android::hardware::hidl_vec<unsigned char>*) */
int _ZN7android8hardware9keymaster4V4_019parse_root_of_trustEPKhmPNS0_8hidl_vecIhEEPNS2_25keymaster_verified_boot_tEPbS7_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder12TripleDesKeyEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::TripleDesKey(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder12TripleDesKeyEj(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder22TripleDesEncryptionKeyEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::TripleDesEncryptionKey(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder22TripleDesEncryptionKeyEj(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_09serializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_10OutStreamsERKNS2_12KeyParameterE */
/* Demangled: android::hardware::keymaster::V4_0::serialize(android::hardware::keymaster::V4_0::TypedTag<(android::hardware::keymaster::V4_0::TagType)0, (android::hardware::keymaster::V4_0::Tag)0>&&, android::hardware::keymaster::V4_0::OutStreams&, android::hardware::keymaster::V4_0::KeyParameter const&) */
int _ZN7android8hardware9keymaster4V4_09serializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_10OutStreamsERKNS2_12KeyParameterE(void);

/* Symbol: _ZNSt3__17__sort4IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_SC_T_ */
/* Demangled: unsigned int std::__1::__sort4<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
int _ZNSt3__17__sort4IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_SC_T_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support13extractUint64ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm */
/* Demangled: android::hardware::keymaster::V4_0::support::extractUint64(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, unsigned long) */
int _ZN7android8hardware9keymaster4V4_07support13extractUint64ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_022i2d_KM_KEY_DESCRIPTIONEPNS2_18km_key_descriptionEPPh */
/* Demangled: android::hardware::keymaster::V4_0::i2d_KM_KEY_DESCRIPTION(android::hardware::keymaster::V4_0::km_key_description*, unsigned char**) */
int _ZN7android8hardware9keymaster4V4_022i2d_KM_KEY_DESCRIPTIONEPNS2_18km_key_descriptionEPPh(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeduplicateEv */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Deduplicate() */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeduplicateEv(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEPKc */
/* Demangled: android::hardware::keymaster::V4_0::support::getOsPatchlevel(char const*) */
int _ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEPKc(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support17hidlVec2AuthTokenERKNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::keymaster::V4_0::support::hidlVec2AuthToken(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware9keymaster4V4_07support17hidlVec2AuthTokenERKNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_020KM_ROOT_OF_TRUST_newEv */
/* Demangled: android::hardware::keymaster::V4_0::KM_ROOT_OF_TRUST_new() */
int _ZN7android8hardware9keymaster4V4_020KM_ROOT_OF_TRUST_newEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_021deserializeParamValueERNS2_9InStreamsEPNS0_8hidl_vecIhEE */
/* Demangled: android::hardware::keymaster::V4_0::deserializeParamValue(android::hardware::keymaster::V4_0::InStreams&, android::hardware::hidl_vec<unsigned char>*) */
int _ZN7android8hardware9keymaster4V4_021deserializeParamValueERNS2_9InStreamsEPNS0_8hidl_vecIhEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13GcmModeMacLenEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::GcmModeMacLen(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13GcmModeMacLenEj(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_09serializeERNS2_10OutStreamsERKNS2_12KeyParameterE */
/* Demangled: android::hardware::keymaster::V4_0::serialize(android::hardware::keymaster::V4_0::OutStreams&, android::hardware::keymaster::V4_0::KeyParameter const&) */
int _ZN7android8hardware9keymaster4V4_09serializeERNS2_10OutStreamsERKNS2_12KeyParameterE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_013keyParamEqualERKNS2_12KeyParameterES5_ */
/* Demangled: android::hardware::keymaster::V4_0::keyParamEqual(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&) */
int _ZN7android8hardware9keymaster4V4_013keyParamEqualERKNS2_12KeyParameterES5_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder10SigningKeyEv */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::SigningKey() */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder10SigningKeyEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6DigestENSt3__16vectorINS2_6DigestENS4_9allocatorIS6_EEEE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::Digest(std::__1::vector<android::hardware::keymaster::V4_0::Digest, std::__1::allocator<android::hardware::keymaster::V4_0::Digest> >) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6DigestENSt3__16vectorINS2_6DigestENS4_9allocatorIS6_EEEE(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13EncryptionKeyEv */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EncryptionKey() */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13EncryptionKeyEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16AesEncryptionKeyEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::AesEncryptionKey(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16AesEncryptionKeyEj(void);

/* Symbol: _ZNK7android8hardware9keymaster4V4_016AuthorizationSet9SerializeEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Serialize(std::__1::basic_ostream<char, std::__1::char_traits<char> >*) const */
int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet9SerializeEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void);

/* Symbol: _ZNSt3__118__insertion_sort_3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_ */
/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
int _ZNSt3__118__insertion_sort_3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_020i2d_KM_ROOT_OF_TRUSTEPNS2_16km_root_of_trustEPPh */
/* Demangled: android::hardware::keymaster::V4_0::i2d_KM_ROOT_OF_TRUST(android::hardware::keymaster::V4_0::km_root_of_trust*, unsigned char**) */
int _ZN7android8hardware9keymaster4V4_020i2d_KM_ROOT_OF_TRUSTEPNS2_16km_root_of_trustEPPh(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE6insertINS_11__wrap_iterIPKS5_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISF_E9referenceEEE5valueENSA_IPS5_EEE4typeESD_SF_SF_ */
/* Demangled: _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE6insertINS_11__wrap_iterIPKS5_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISF_E9referenceEEE5valueENSA_IPS5_EEE4typeESD_SF_SF_ */
int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE6insertINS_11__wrap_iterIPKS5_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISF_E9referenceEEE5valueENSA_IPS5_EEE4typeESD_SF_SF_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016d2i_KM_AUTH_LISTEPPNS2_12km_auth_listEPPKhl */
/* Demangled: android::hardware::keymaster::V4_0::d2i_KM_AUTH_LIST(android::hardware::keymaster::V4_0::km_auth_list**, unsigned char const**, long) */
int _ZN7android8hardware9keymaster4V4_016d2i_KM_AUTH_LISTEPPNS2_12km_auth_listEPPKhl(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__16__sortIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_ */
/* Demangled: void std::__1::__sort<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
int _ZNSt3__16__sortIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware9keymaster4V4_07support12appendUint32ERNSt3__16vectorIhNS4_9allocatorIhEEEEj */
/* Demangled: android::hardware::keymaster::V4_0::support::appendUint32(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&, unsigned int) */
int _ZN7android8hardware9keymaster4V4_07support12appendUint32ERNSt3__16vectorIhNS4_9allocatorIhEEEEj(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyENS2_7EcCurveE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaKey(android::hardware::keymaster::V4_0::EcCurve) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyENS2_7EcCurveE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet5ClearEv */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Clear() */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet5ClearEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet5eraseEi */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::erase(int) */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet5eraseEi(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaKey(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyEj(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_014BignumToUint64EP9bignum_st */
/* Demangled: android::hardware::keymaster::V4_0::BignumToUint64(bignum_st*) */
int _ZN7android8hardware9keymaster4V4_014BignumToUint64EP9bignum_st(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6AesKeyEj */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::AesKey(unsigned int) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6AesKeyEj(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7PaddingESt16initializer_listINS2_11PaddingModeEE */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::Padding(std::initializer_list<android::hardware::keymaster::V4_0::PaddingMode>) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7PaddingESt16initializer_listINS2_11PaddingModeEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE12__move_rangeEPS5_S9_S9_ */
/* Demangled: std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__move_range(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*) */
int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE12__move_rangeEPS5_S9_S9_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support17authToken2HidlVecERKNS2_17HardwareAuthTokenE */
/* Demangled: android::hardware::keymaster::V4_0::support::authToken2HidlVec(android::hardware::keymaster::V4_0::HardwareAuthToken const&) */
int _ZN7android8hardware9keymaster4V4_07support17authToken2HidlVecERKNS2_17HardwareAuthTokenE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016KM_AUTH_LIST_newEv */
/* Demangled: android::hardware::keymaster::V4_0::KM_AUTH_LIST_new() */
int _ZN7android8hardware9keymaster4V4_016KM_AUTH_LIST_newEv(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_016AuthorizationSet5UnionERKS3_ */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Union(android::hardware::keymaster::V4_0::AuthorizationSet const&) */
int _ZN7android8hardware9keymaster4V4_016AuthorizationSet5UnionERKS3_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13RsaSigningKeyEjm */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::RsaSigningKey(unsigned int, unsigned long) */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13RsaSigningKeyEjm(void);

/* Symbol: _ZNSt3__127__insertion_sort_incompleteIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEbT0_SC_T_ */
/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
int _ZNSt3__127__insertion_sort_incompleteIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEbT0_SC_T_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support12appendUint64ERNSt3__16vectorIhNS4_9allocatorIhEEEEm */
/* Demangled: android::hardware::keymaster::V4_0::support::appendUint64(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&, unsigned long) */
int _ZN7android8hardware9keymaster4V4_07support12appendUint64ERNSt3__16vectorIhNS4_9allocatorIhEEEEm(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_ */
/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char const&>(unsigned char const&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_011deserializeERNSt3__113basic_istreamIcNS3_11char_traitsIcEEEEPNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE */
/* Demangled: android::hardware::keymaster::V4_0::deserialize(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >*) */
int _ZN7android8hardware9keymaster4V4_011deserializeERNSt3__113basic_istreamIcNS3_11char_traitsIcEEEEPNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7EcbModeEv */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcbMode() */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7EcbModeEv(void);

/* Symbol: _ZNK7android8hardware9keymaster4V4_016AuthorizationSetixEi */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::operator[](int) const */
int _ZNK7android8hardware9keymaster4V4_016AuthorizationSetixEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS0_8hidl_vecINS2_12KeyParameterEEE */
/* Demangled: android::hardware::keymaster::V4_0::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&) */
int _ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS0_8hidl_vecINS2_12KeyParameterEEE(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_07support12getOsVersionEPKc */
/* Demangled: android::hardware::keymaster::V4_0::support::getOsVersion(char const*) */
int _ZN7android8hardware9keymaster4V4_07support12getOsVersionEPKc(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder17NoDigestOrPaddingEv */
/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::NoDigestOrPadding() */
int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder17NoDigestOrPaddingEv(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android8hardware9keymaster4V4_07support13extractUint32ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm */
/* Demangled: android::hardware::keymaster::V4_0::support::extractUint32(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, unsigned long) */
int _ZN7android8hardware9keymaster4V4_07support13extractUint32ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm(void);

/* Symbol: _ZN7android8hardware9keymaster4V4_022d2i_KM_KEY_DESCRIPTIONEPPNS2_18km_key_descriptionEPPKhl */
/* Demangled: android::hardware::keymaster::V4_0::d2i_KM_KEY_DESCRIPTION(android::hardware::keymaster::V4_0::km_key_description**, unsigned char const**, long) */
int _ZN7android8hardware9keymaster4V4_022d2i_KM_KEY_DESCRIPTIONEPPNS2_18km_key_descriptionEPPKhl(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBKEYMASTER4SUPPORT_H */
