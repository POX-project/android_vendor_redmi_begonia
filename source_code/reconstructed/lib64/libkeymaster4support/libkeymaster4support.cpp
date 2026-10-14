/*
 * Reverse-Engineered Source for: libkeymaster4support.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libkeymaster4support"

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
#include "libkeymaster4support.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::keymaster::V4_0::KM_KEY_DESCRIPTION_new() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_022KM_KEY_DESCRIPTION_newEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_022KM_KEY_DESCRIPTION_newEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::KM_KEY_DESCRIPTION_free(android::hardware::keymaster::V4_0::km_key_description*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023KM_KEY_DESCRIPTION_freeEPNS2_18km_key_descriptionE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023KM_KEY_DESCRIPTION_freeEPNS2_18km_key_descriptionE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::GcmModeMinMacLen(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16GcmModeMinMacLenEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16GcmModeMinMacLenEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, android::hardware::keymaster::V4_0::KeyParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS2_12KeyParameterE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS2_12KeyParameterE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::getOsPatchlevel() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::parse_attestation_record(unsigned char const*, unsigned long, unsigned int*, android::hardware::keymaster::V4_0::SecurityLevel*, unsigned int*, android::hardware::keymaster::V4_0::SecurityLevel*, android::hardware::hidl_vec<unsigned char>*, android::hardware::keymaster::V4_0::AuthorizationSet*, android::hardware::keymaster::V4_0::AuthorizationSet*, android::hardware::hidl_vec<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_024parse_attestation_recordEPKhmPjPNS2_13SecurityLevelES5_S7_PNS0_8hidl_vecIhEEPNS2_16AuthorizationSetESC_SA_(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_024parse_attestation_recordEPKhmPjPNS2_13SecurityLevelES5_S7_PNS0_8hidl_vecIhEEPNS2_16AuthorizationSetESC_SA_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::deserialize(android::hardware::keymaster::V4_0::InStreams&, android::hardware::keymaster::V4_0::KeyParameter*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_011deserializeERNS2_9InStreamsEPNS2_12KeyParameterE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_011deserializeERNS2_9InStreamsEPNS2_12KeyParameterE() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__swap_out_circular_buffer(std::__1::__split_buffer<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter>&>&, android::hardware::keymaster::V4_0::KeyParameter*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EEPS5_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EEPS5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__push_back_slow_path<android::hardware::keymaster::V4_0::KeyParameter>(android::hardware::keymaster::V4_0::KeyParameter&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Deserialize(std::__1::basic_istream<char, std::__1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeserializeEPNSt3__113basic_istreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeserializeEPNSt3__113basic_istreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::serialize(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_09serializeERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_09serializeERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::serializeVerificationToken(android::hardware::keymaster::V4_0::VerificationToken const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support26serializeVerificationTokenERKNS2_17VerificationTokenE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support26serializeVerificationTokenERKNS2_17VerificationTokenE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::d2i_KM_ROOT_OF_TRUST(android::hardware::keymaster::V4_0::km_root_of_trust**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_020d2i_KM_ROOT_OF_TRUSTEPPNS2_16km_root_of_trustEPPKhl(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_020d2i_KM_ROOT_OF_TRUSTEPPNS2_16km_root_of_trustEPPKhl() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Sort() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet4SortEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet4SortEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE8__appendEm() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort3<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_T_(void) {
    ALOGD("_ZNSt3__17__sort3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_T_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::KM_ROOT_OF_TRUST_free(android::hardware::keymaster::V4_0::km_root_of_trust*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_021KM_ROOT_OF_TRUST_freeEPNS2_16km_root_of_trustE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_021KM_ROOT_OF_TRUST_freeEPNS2_16km_root_of_trustE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Filter(std::__1::function<bool (android::hardware::keymaster::V4_0::KeyParameter const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet6FilterENSt3__18functionIFbRKNS2_12KeyParameterEEEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet6FilterENSt3__18functionIFbRKNS2_12KeyParameterEEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::i2d_KM_AUTH_LIST(android::hardware::keymaster::V4_0::km_auth_list*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016i2d_KM_AUTH_LISTEPNS2_12km_auth_listEPPh(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016i2d_KM_AUTH_LISTEPNS2_12km_auth_listEPPh() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::deserialize(android::hardware::keymaster::V4_0::TypedTag<(android::hardware::keymaster::V4_0::TagType)0, (android::hardware::keymaster::V4_0::Tag)0>&&, android::hardware::keymaster::V4_0::InStreams&, android::hardware::keymaster::V4_0::KeyParameter*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_011deserializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_9InStreamsEPNS2_12KeyParameterE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_011deserializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_9InStreamsEPNS2_12KeyParameterE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::serializeParamValue(android::hardware::keymaster::V4_0::OutStreams&, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_019serializeParamValueERNS2_10OutStreamsERKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_019serializeParamValueERNS2_10OutStreamsERKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::RsaEncryptionKey(unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16RsaEncryptionKeyEjm(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16RsaEncryptionKeyEjm() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::RsaKey(unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6RsaKeyEjm(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6RsaKeyEjm() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::BlockMode(std::initializer_list<android::hardware::keymaster::V4_0::BlockMode>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder9BlockModeESt16initializer_listINS2_9BlockModeEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder9BlockModeESt16initializer_listINS2_9BlockModeEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::find(android::hardware::keymaster::V4_0::Tag, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet4findENS2_3TagEi(void) {
    ALOGD("_ZNK7android8hardware9keymaster4V4_016AuthorizationSet4findENS2_3TagEi() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::hardware::keymaster::V4_0::operator<(android::hardware::keymaster::V4_0::HmacSharingParameters const&, android::hardware::keymaster::V4_0::HmacSharingParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_0ltERKNS2_21HmacSharingParametersES5_(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_0ltERKNS2_21HmacSharingParametersES5_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6insertIN7android8hardware8hidl_vecIhE4iterILb1EEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsISC_E9referenceEEE5valueENS_11__wrap_iterIPhEEE4typeENSG_IPKhEESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE6insertIN7android8hardware8hidl_vecIhE4iterILb1EEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsISC_E9referenceEEE5valueENS_11__wrap_iterIPhEEE4typeENSG_IPKhEESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE6insertIN7android8hardware8hidl_vecIhE4iterILb1EEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsISC_E9referenceEEE5valueENS_11__wrap_iterIPhEEE4typeENSG_IPKhEESC_SC_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaSigningKey(android::hardware::keymaster::V4_0::EcCurve) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyENS2_7EcCurveE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyENS2_7EcCurveE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::HmacKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7HmacKeyEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7HmacKeyEj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: android::hardware::keymaster::V4_0::support::deserializeVerificationToken(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support28deserializeVerificationTokenERKNSt3__16vectorIhNS4_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support28deserializeVerificationTokenERKNSt3__16vectorIhNS4_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaSigningKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder15EcdsaSigningKeyEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::GetEntry(android::hardware::keymaster::V4_0::Tag) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet8GetEntryENS2_3TagE(void) {
    ALOGD("_ZNK7android8hardware9keymaster4V4_016AuthorizationSet8GetEntryENS2_3TagE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::getOsVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support12getOsVersionEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support12getOsVersionEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::construct_uint_max() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_018construct_uint_maxEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_018construct_uint_maxEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::keyParamLess(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_012keyParamLessERKNS2_12KeyParameterES5_(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_012keyParamLessERKNS2_12KeyParameterES5_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Subtract(android::hardware::keymaster::V4_0::AuthorizationSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet8SubtractERKS3_(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet8SubtractERKS3_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::operator[](int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSetixEi(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSetixEi() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::GetTagCount(android::hardware::keymaster::V4_0::Tag) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet11GetTagCountENS2_3TagE(void) {
    ALOGD("_ZNK7android8hardware9keymaster4V4_016AuthorizationSet11GetTagCountENS2_3TagE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::keymaster::V4_0::KM_AUTH_LIST_free(android::hardware::keymaster::V4_0::km_auth_list*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_017KM_AUTH_LIST_freeEPNS2_12km_auth_listE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_017KM_AUTH_LIST_freeEPNS2_12km_auth_listE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::parse_root_of_trust(unsigned char const*, unsigned long, android::hardware::hidl_vec<unsigned char>*, android::hardware::keymaster::V4_0::keymaster_verified_boot_t*, bool*, android::hardware::hidl_vec<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_019parse_root_of_trustEPKhmPNS0_8hidl_vecIhEEPNS2_25keymaster_verified_boot_tEPbS7_(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_019parse_root_of_trustEPKhmPNS0_8hidl_vecIhEEPNS2_25keymaster_verified_boot_tEPbS7_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::TripleDesKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder12TripleDesKeyEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder12TripleDesKeyEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::TripleDesEncryptionKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder22TripleDesEncryptionKeyEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder22TripleDesEncryptionKeyEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::serialize(android::hardware::keymaster::V4_0::TypedTag<(android::hardware::keymaster::V4_0::TagType)0, (android::hardware::keymaster::V4_0::Tag)0>&&, android::hardware::keymaster::V4_0::OutStreams&, android::hardware::keymaster::V4_0::KeyParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_09serializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_10OutStreamsERKNS2_12KeyParameterE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_09serializeEONS2_8TypedTagILNS2_7TagTypeE0ELNS2_3TagE0EEERNS2_10OutStreamsERKNS2_12KeyParameterE() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__sort4<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__17__sort4IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_SC_T_(void) {
    ALOGD("_ZNSt3__17__sort4IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEjT0_SC_SC_SC_T_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::extractUint64(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support13extractUint64ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support13extractUint64ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::i2d_KM_KEY_DESCRIPTION(android::hardware::keymaster::V4_0::km_key_description*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_022i2d_KM_KEY_DESCRIPTIONEPNS2_18km_key_descriptionEPPh(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_022i2d_KM_KEY_DESCRIPTIONEPNS2_18km_key_descriptionEPPh() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Deduplicate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeduplicateEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet11DeduplicateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::hardware::keymaster::V4_0::support::getOsPatchlevel(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEPKc(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support15getOsPatchlevelEPKc() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::hidlVec2AuthToken(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support17hidlVec2AuthTokenERKNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support17hidlVec2AuthTokenERKNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::KM_ROOT_OF_TRUST_new() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_020KM_ROOT_OF_TRUST_newEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_020KM_ROOT_OF_TRUST_newEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::deserializeParamValue(android::hardware::keymaster::V4_0::InStreams&, android::hardware::hidl_vec<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_021deserializeParamValueERNS2_9InStreamsEPNS0_8hidl_vecIhEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_021deserializeParamValueERNS2_9InStreamsEPNS0_8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::GcmModeMacLen(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13GcmModeMacLenEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13GcmModeMacLenEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::serialize(android::hardware::keymaster::V4_0::OutStreams&, android::hardware::keymaster::V4_0::KeyParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_09serializeERNS2_10OutStreamsERKNS2_12KeyParameterE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_09serializeERNS2_10OutStreamsERKNS2_12KeyParameterE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::keyParamEqual(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_013keyParamEqualERKNS2_12KeyParameterES5_(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_013keyParamEqualERKNS2_12KeyParameterES5_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::SigningKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder10SigningKeyEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder10SigningKeyEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::Digest(std::__1::vector<android::hardware::keymaster::V4_0::Digest, std::__1::allocator<android::hardware::keymaster::V4_0::Digest> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6DigestENSt3__16vectorINS2_6DigestENS4_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6DigestENSt3__16vectorINS2_6DigestENS4_9allocatorIS6_EEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EncryptionKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13EncryptionKeyEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13EncryptionKeyEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::AesEncryptionKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16AesEncryptionKeyEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder16AesEncryptionKeyEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Serialize(std::__1::basic_ostream<char, std::__1::char_traits<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware9keymaster4V4_016AuthorizationSet9SerializeEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE(void) {
    ALOGD("_ZNK7android8hardware9keymaster4V4_016AuthorizationSet9SerializeEPNSt3__113basic_ostreamIcNS4_11char_traitsIcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__insertion_sort_3<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__insertion_sort_3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_(void) {
    ALOGD("_ZNSt3__118__insertion_sort_3IRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::i2d_KM_ROOT_OF_TRUST(android::hardware::keymaster::V4_0::km_root_of_trust*, unsigned char**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_020i2d_KM_ROOT_OF_TRUSTEPNS2_16km_root_of_trustEPPh(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_020i2d_KM_ROOT_OF_TRUSTEPNS2_16km_root_of_trustEPPh() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE6insertINS_11__wrap_iterIPKS5_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISF_E9referenceEEE5valueENSA_IPS5_EEE4typeESD_SF_SF_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE6insertINS_11__wrap_iterIPKS5_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISF_E9referenceEEE5valueENSA_IPS5_EEE4typeESD_SF_SF_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE6insertINS_11__wrap_iterIPKS5_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS5_NS_15iterator_traitsISF_E9referenceEEE5valueENSA_IPS5_EEE4typeESD_SF_SF_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::d2i_KM_AUTH_LIST(android::hardware::keymaster::V4_0::km_auth_list**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016d2i_KM_AUTH_LISTEPPNS2_12km_auth_listEPPKhl(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016d2i_KM_AUTH_LISTEPPNS2_12km_auth_listEPPKhl() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: void std::__1::__sort<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__sortIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_(void) {
    ALOGD("_ZNSt3__16__sortIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEvT0_SC_T_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::keymaster::V4_0::support::appendUint32(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support12appendUint32ERNSt3__16vectorIhNS4_9allocatorIhEEEEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support12appendUint32ERNSt3__16vectorIhNS4_9allocatorIhEEEEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaKey(android::hardware::keymaster::V4_0::EcCurve) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyENS2_7EcCurveE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyENS2_7EcCurveE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet5ClearEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet5ClearEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::erase(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet5eraseEi(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet5eraseEi() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcdsaKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder8EcdsaKeyEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::BignumToUint64(bignum_st*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_014BignumToUint64EP9bignum_st(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_014BignumToUint64EP9bignum_st() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::AesKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6AesKeyEj(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder6AesKeyEj() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::Padding(std::initializer_list<android::hardware::keymaster::V4_0::PaddingMode>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7PaddingESt16initializer_listINS2_11PaddingModeEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7PaddingESt16initializer_listINS2_11PaddingModeEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >::__move_range(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE12__move_rangeEPS5_S9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware9keymaster4V4_012KeyParameterENS_9allocatorIS5_EEE12__move_rangeEPS5_S9_S9_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::authToken2HidlVec(android::hardware::keymaster::V4_0::HardwareAuthToken const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support17authToken2HidlVecERKNS2_17HardwareAuthTokenE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support17authToken2HidlVecERKNS2_17HardwareAuthTokenE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::KM_AUTH_LIST_new() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016KM_AUTH_LIST_newEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016KM_AUTH_LIST_newEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::Union(android::hardware::keymaster::V4_0::AuthorizationSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_016AuthorizationSet5UnionERKS3_(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_016AuthorizationSet5UnionERKS3_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::RsaSigningKey(unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13RsaSigningKeyEjm(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder13RsaSigningKeyEjm() called");
    return 0;
}

/* Demangled: bool std::__1::__insertion_sort_incomplete<bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&), android::hardware::keymaster::V4_0::KeyParameter*>(android::hardware::keymaster::V4_0::KeyParameter*, android::hardware::keymaster::V4_0::KeyParameter*, bool (*&)(android::hardware::keymaster::V4_0::KeyParameter const&, android::hardware::keymaster::V4_0::KeyParameter const&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__insertion_sort_incompleteIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEbT0_SC_T_(void) {
    ALOGD("_ZNSt3__127__insertion_sort_incompleteIRPFbRKN7android8hardware9keymaster4V4_012KeyParameterES7_EPS5_EEbT0_SC_T_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::appendUint64(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support12appendUint64ERNSt3__16vectorIhNS4_9allocatorIhEEEEm(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support12appendUint64ERNSt3__16vectorIhNS4_9allocatorIhEEEEm() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char const&>(unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::deserialize(std::__1::basic_istream<char, std::__1::char_traits<char> >&, std::__1::vector<android::hardware::keymaster::V4_0::KeyParameter, std::__1::allocator<android::hardware::keymaster::V4_0::KeyParameter> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_011deserializeERNSt3__113basic_istreamIcNS3_11char_traitsIcEEEEPNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_011deserializeERNSt3__113basic_istreamIcNS3_11char_traitsIcEEEEPNS3_6vectorINS2_12KeyParameterENS3_9allocatorISA_EEEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::EcbMode() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7EcbModeEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder7EcbModeEv() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSet::operator[](int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware9keymaster4V4_016AuthorizationSetixEi(void) {
    ALOGD("_ZNK7android8hardware9keymaster4V4_016AuthorizationSetixEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, android::hardware::hidl_vec<android::hardware::keymaster::V4_0::KeyParameter> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS0_8hidl_vecINS2_12KeyParameterEEE(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_0lsERNSt3__113basic_ostreamIcNS3_11char_traitsIcEEEERKNS0_8hidl_vecINS2_12KeyParameterEEE() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::support::getOsVersion(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support12getOsVersionEPKc(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support12getOsVersionEPKc() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::AuthorizationSetBuilder::NoDigestOrPadding() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder17NoDigestOrPaddingEv(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_023AuthorizationSetBuilder17NoDigestOrPaddingEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::hardware::keymaster::V4_0::support::extractUint32(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_07support13extractUint32ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_07support13extractUint32ERKNSt3__16vectorIhNS4_9allocatorIhEEEEm() called");
    return 0;
}

/* Demangled: android::hardware::keymaster::V4_0::d2i_KM_KEY_DESCRIPTION(android::hardware::keymaster::V4_0::km_key_description**, unsigned char const**, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9keymaster4V4_022d2i_KM_KEY_DESCRIPTIONEPPNS2_18km_key_descriptionEPPKhl(void) {
    ALOGD("_ZN7android8hardware9keymaster4V4_022d2i_KM_KEY_DESCRIPTIONEPPNS2_18km_key_descriptionEPPKhl() called");
    return 0;
}
