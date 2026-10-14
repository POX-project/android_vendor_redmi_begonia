/*
 * Reverse-Engineered ABI Specification for: libdrmclearkeyplugin.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdrmclearkeyplugin.so
 */

#ifndef BEGONIA_RE_LIBDRMCLEARKEYPLUGIN_H
#define BEGONIA_RE_LIBDRMCLEARKEYPLUGIN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: createDrmFactory */
/* Demangled: createDrmFactory */
int createDrmFactory(void);

/* Symbol: _ZN11clearkeydrm7Session18provideKeyResponseERKN7android6VectorIhEE */
/* Demangled: clearkeydrm::Session::provideKeyResponse(android::Vector<unsigned char> const&) */
int _ZN11clearkeydrm7Session18provideKeyResponseERKN7android6VectorIhEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN11clearkeydrm25getSupportedCryptoSchemesEv */
/* Demangled: clearkeydrm::getSupportedCryptoSchemes() */
int _ZN11clearkeydrm25getSupportedCryptoSchemesEv(void);

/* Symbol: _ZNK7android6VectorIhE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK11clearkeydrm9DrmPlugin14queryKeyStatusERKN7android6VectorIhEERNS1_11KeyedVectorINS1_7String8ES7_EE */
/* Demangled: clearkeydrm::DrmPlugin::queryKeyStatus(android::Vector<unsigned char> const&, android::KeyedVector<android::String8, android::String8>&) const */
int _ZNK11clearkeydrm9DrmPlugin14queryKeyStatusERKN7android6VectorIhEERNS1_11KeyedVectorINS1_7String8ES7_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm14InitDataParser9parsePsshERKN7android6VectorIhEEPNS2_IPKhEE */
/* Demangled: clearkeydrm::InitDataParser::parsePssh(android::Vector<unsigned char> const&, android::Vector<unsigned char const*>*) */
int _ZN11clearkeydrm14InitDataParser9parsePsshERKN7android6VectorIhEEPNS2_IPKhEE(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZNK7android6VectorIhE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIhE10do_destroyEPvj(void);

/* Symbol: _ZN11clearkeydrm14SessionLibrary14destroySessionERKN7android2spINS_7SessionEEE */
/* Demangled: clearkeydrm::SessionLibrary::destroySession(android::sp<clearkeydrm::Session> const&) */
int _ZN11clearkeydrm14SessionLibrary14destroySessionERKN7android2spINS_7SessionEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKeyD2Ev */
/* Demangled: clearkeydrm::JsonWebKey::~JsonWebKey() */
int _ZN11clearkeydrm10JsonWebKeyD2Ev(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEEE;

/* Symbol: _ZN11clearkeydrm9DrmPlugin14initPropertiesEv */
/* Demangled: clearkeydrm::DrmPlugin::initProperties() */
int _ZN11clearkeydrm9DrmPlugin14initPropertiesEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZN11clearkeydrm14InitDataParser5parseERKN7android6VectorIhEERKNS1_7String8EPS3_ */
/* Demangled: clearkeydrm::InitDataParser::parse(android::Vector<unsigned char> const&, android::String8 const&, android::Vector<unsigned char>*) */
int _ZN11clearkeydrm14InitDataParser5parseERKN7android6VectorIhEERKNS1_7String8EPS3_(void);

/* Symbol: _ZNK7android6VectorIPKhE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned char const*>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPKhE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE12do_constructEPvj */
/* Demangled: android::Vector<jsmntok_t>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE12do_constructEPvj(void);

/* Symbol: _ZTVN7android6VectorIhEE */
/* Demangled: vtable for android::Vector<unsigned char> */
extern void* _ZTVN7android6VectorIhEE;

/* Symbol: _ZN11clearkeydrm9DrmPluginC1EPNS_14SessionLibraryE */
/* Demangled: clearkeydrm::DrmPlugin::DrmPlugin(clearkeydrm::SessionLibrary*) */
int _ZN11clearkeydrm9DrmPluginC1EPNS_14SessionLibraryE(void);

/* Symbol: _ZTVN7android9DrmPluginE */
/* Demangled: vtable for android::DrmPlugin */
extern void* _ZTVN7android9DrmPluginE;

/* Symbol: _ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm14SessionLibrary3getEv */
/* Demangled: clearkeydrm::SessionLibrary::get() */
int _ZN11clearkeydrm14SessionLibrary3getEv(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKeyC2Ev */
/* Demangled: clearkeydrm::JsonWebKey::JsonWebKey() */
int _ZN11clearkeydrm10JsonWebKeyC2Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm9DrmPlugin13getKeyRequestERKN7android6VectorIhEES5_RKNS1_7String8ENS1_9DrmPlugin7KeyTypeERKNS1_11KeyedVectorIS6_S6_EERS3_RS6_PNS9_14KeyRequestTypeE */
/* Demangled: clearkeydrm::DrmPlugin::getKeyRequest(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::String8 const&, android::DrmPlugin::KeyType, android::KeyedVector<android::String8, android::String8> const&, android::Vector<unsigned char>&, android::String8&, android::DrmPlugin::KeyRequestType*) */
int _ZN11clearkeydrm9DrmPlugin13getKeyRequestERKN7android6VectorIhEES5_RKNS1_7String8ENS1_9DrmPlugin7KeyTypeERKNS1_11KeyedVectorIS6_S6_EERS3_RS6_PNS9_14KeyRequestTypeE(void);

/* Symbol: _ZNK11clearkeydrm7Session13getKeyRequestERKN7android6VectorIhEERKNS1_7String8EPS3_ */
/* Demangled: clearkeydrm::Session::getKeyRequest(android::Vector<unsigned char> const&, android::String8 const&, android::Vector<unsigned char>*) const */
int _ZNK11clearkeydrm7Session13getKeyRequestERKN7android6VectorIhEERKNS1_7String8EPS3_(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKey28extractKeysFromJsonWebKeySetERKN7android7String8EPNS1_11KeyedVectorINS1_6VectorIhEES7_EE */
/* Demangled: clearkeydrm::JsonWebKey::extractKeysFromJsonWebKeySet(android::String8 const&, android::KeyedVector<android::Vector<unsigned char>, android::Vector<unsigned char> >*) */
int _ZN11clearkeydrm10JsonWebKey28extractKeysFromJsonWebKeySetERKN7android7String8EPNS1_11KeyedVectorINS1_6VectorIhEES7_EE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIhE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKey18decodeBase64StringERKN7android7String8EPNS1_6VectorIhEE */
/* Demangled: clearkeydrm::JsonWebKey::decodeBase64String(android::String8 const&, android::Vector<unsigned char>*) */
int _ZN11clearkeydrm10JsonWebKey18decodeBase64StringERKN7android7String8EPNS1_6VectorIhEE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN11clearkeydrm7SessionE */
/* Demangled: vtable for clearkeydrm::Session */
extern void* _ZTVN11clearkeydrm7SessionE;

/* Symbol: _ZN11clearkeydrm14SessionLibrary13createSessionEv */
/* Demangled: clearkeydrm::SessionLibrary::createSession() */
int _ZN11clearkeydrm14SessionLibrary13createSessionEv(void);

/* Symbol: _ZNK7android6VectorIPKhE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned char const*>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPKhE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKey7findKeyERKN7android7String8EPS2_S5_ */
/* Demangled: clearkeydrm::JsonWebKey::findKey(android::String8 const&, android::String8*, android::String8*) */
int _ZN11clearkeydrm10JsonWebKey7findKeyERKN7android7String8EPS2_S5_(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN11clearkeydrm10JsonWebKeyE */
/* Demangled: vtable for clearkeydrm::JsonWebKey */
extern void* _ZTVN11clearkeydrm10JsonWebKeyE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKey9findValueERKN7android7String8EPS2_ */
/* Demangled: clearkeydrm::JsonWebKey::findValue(android::String8 const&, android::String8*) */
int _ZN11clearkeydrm10JsonWebKey9findValueERKN7android7String8EPS2_(void);

/* Symbol: _ZN11clearkeydrm14SessionLibrary10sSingletonE */
/* Demangled: clearkeydrm::SessionLibrary::sSingleton */
extern void* _ZN11clearkeydrm14SessionLibrary10sSingletonE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm9DrmPlugin18provideKeyResponseERKN7android6VectorIhEES5_RS3_ */
/* Demangled: clearkeydrm::DrmPlugin::provideKeyResponse(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
int _ZN11clearkeydrm9DrmPlugin18provideKeyResponseERKN7android6VectorIhEES5_RS3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZN11clearkeydrm12CryptoPlugin7decryptEbPKhS2_N7android12CryptoPlugin4ModeERKNS4_7PatternEPKvPKNS4_9SubSampleEjPvPNS3_7AStringE */
/* Demangled: clearkeydrm::CryptoPlugin::decrypt(bool, unsigned char const*, unsigned char const*, android::CryptoPlugin::Mode, android::CryptoPlugin::Pattern const&, void const*, android::CryptoPlugin::SubSample const*, unsigned int, void*, android::AString*) */
int _ZN11clearkeydrm12CryptoPlugin7decryptEbPKhS2_N7android12CryptoPlugin4ModeERKNS4_7PatternEPKvPKNS4_9SubSampleEjPvPNS3_7AStringE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKeyD0Ev */
/* Demangled: clearkeydrm::JsonWebKey::~JsonWebKey() */
int _ZN11clearkeydrm10JsonWebKeyD0Ev(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvj */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorIPKhE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned char const*>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPKhE8do_splatEPvPKvj(void);

/* Symbol: _ZNK11clearkeydrm13CryptoFactory23isCryptoSchemeSupportedEPKh */
/* Demangled: clearkeydrm::CryptoFactory::isCryptoSchemeSupported(unsigned char const*) const */
int _ZNK11clearkeydrm13CryptoFactory23isCryptoSchemeSupportedEPKh(void);

/* Symbol: _ZNK11clearkeydrm9DrmPlugin17getPropertyStringERKN7android7String8ERS2_ */
/* Demangled: clearkeydrm::DrmPlugin::getPropertyString(android::String8 const&, android::String8&) const */
int _ZNK11clearkeydrm9DrmPlugin17getPropertyStringERKN7android7String8ERS2_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKey18parseJsonWebKeySetERKN7android7String8EPNS1_6VectorIS2_EE */
/* Demangled: clearkeydrm::JsonWebKey::parseJsonWebKeySet(android::String8 const&, android::Vector<android::String8>*) */
int _ZN11clearkeydrm10JsonWebKey18parseJsonWebKeySetERKN7android7String8EPNS1_6VectorIS2_EE(void);

/* Symbol: _ZNK11clearkeydrm10JsonWebKey15isJsonWebKeySetERKN7android7String8E */
/* Demangled: clearkeydrm::JsonWebKey::isJsonWebKeySet(android::String8 const&) const */
int _ZNK11clearkeydrm10JsonWebKey15isJsonWebKeySetERKN7android7String8E(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj */
/* Demangled: android::Vector<jsmntok_t>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj(void);

/* Symbol: _ZN11clearkeydrm14SessionLibrary14sSingletonLockE */
/* Demangled: clearkeydrm::SessionLibrary::sSingletonLock */
extern void* _ZN11clearkeydrm14SessionLibrary14sSingletonLockE;

/* Symbol: _ZN11clearkeydrm14isClearKeyUUIDEPKh */
/* Demangled: clearkeydrm::isClearKeyUUID(unsigned char const*) */
int _ZN11clearkeydrm14isClearKeyUUIDEPKh(void);

/* Symbol: _ZN11clearkeydrm7Session7decryptEPKhS2_PKvPvPKN7android12CryptoPlugin9SubSampleEjPj */
/* Demangled: clearkeydrm::Session::decrypt(unsigned char const*, unsigned char const*, void const*, void*, android::CryptoPlugin::SubSample const*, unsigned int, unsigned int*) */
int _ZN11clearkeydrm7Session7decryptEPKhS2_PKvPvPKN7android12CryptoPlugin9SubSampleEjPj(void);

/* Symbol: _ZN11clearkeydrm10DrmFactory22isContentTypeSupportedERKN7android7String8E */
/* Demangled: clearkeydrm::DrmFactory::isContentTypeSupported(android::String8 const&) */
int _ZN11clearkeydrm10DrmFactory22isContentTypeSupportedERKN7android7String8E(void);

/* Symbol: jsmn_parse */
/* Demangled: jsmn_parse */
int jsmn_parse(void);

/* Symbol: _ZTVN11clearkeydrm10DrmFactoryE */
/* Demangled: vtable for clearkeydrm::DrmFactory */
extern void* _ZTVN11clearkeydrm10DrmFactoryE;

/* Symbol: createCryptoFactory */
/* Demangled: createCryptoFactory */
int createCryptoFactory(void);

/* Symbol: _ZNK7android6VectorIhE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE8do_splatEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm14SessionLibrary11findSessionERKN7android6VectorIhEE */
/* Demangled: clearkeydrm::SessionLibrary::findSession(android::Vector<unsigned char> const&) */
int _ZN11clearkeydrm14SessionLibrary11findSessionERKN7android6VectorIhEE(void);

/* Symbol: _ZNK7android6VectorIPKhE12do_constructEPvj */
/* Demangled: android::Vector<unsigned char const*>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIPKhE12do_constructEPvj(void);

/* Symbol: _ZTVN11clearkeydrm13CryptoFactoryE */
/* Demangled: vtable for clearkeydrm::CryptoFactory */
extern void* _ZTVN11clearkeydrm13CryptoFactoryE;

/* Symbol: _ZN11clearkeydrm10DrmFactory15createDrmPluginEPKhPPN7android9DrmPluginE */
/* Demangled: clearkeydrm::DrmFactory::createDrmPlugin(unsigned char const*, android::DrmPlugin**) */
int _ZN11clearkeydrm10DrmFactory15createDrmPluginEPKhPPN7android9DrmPluginE(void);

/* Symbol: _ZN11clearkeydrm9DrmPlugin12closeSessionERKN7android6VectorIhEE */
/* Demangled: clearkeydrm::DrmPlugin::closeSession(android::Vector<unsigned char> const&) */
int _ZN11clearkeydrm9DrmPlugin12closeSessionERKN7android6VectorIhEE(void);

/* Symbol: _ZN11clearkeydrm9DrmPlugin20setPropertyByteArrayERKN7android7String8ERKNS1_6VectorIhEE */
/* Demangled: clearkeydrm::DrmPlugin::setPropertyByteArray(android::String8 const&, android::Vector<unsigned char> const&) */
int _ZN11clearkeydrm9DrmPlugin20setPropertyByteArrayERKN7android7String8ERKNS1_6VectorIhEE(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKey15parseJsonObjectERKN7android7String8EPNS1_6VectorIS2_EE */
/* Demangled: clearkeydrm::JsonWebKey::parseJsonObject(android::String8 const&, android::Vector<android::String8>*) */
int _ZN11clearkeydrm10JsonWebKey15parseJsonObjectERKN7android7String8EPNS1_6VectorIS2_EE(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIhE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void);

/* Symbol: jsmn_init */
/* Demangled: jsmn_init */
int jsmn_init(void);

/* Symbol: _ZTVN11clearkeydrm12CryptoPluginE */
/* Demangled: vtable for clearkeydrm::CryptoPlugin */
extern void* _ZTVN11clearkeydrm12CryptoPluginE;

/* Symbol: _ZTVN11clearkeydrm9DrmPluginE */
/* Demangled: vtable for clearkeydrm::DrmPlugin */
extern void* _ZTVN11clearkeydrm9DrmPluginE;

/* Symbol: _ZN7androidltERKNS_6VectorIhEES3_ */
/* Demangled: android::operator<(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&) */
int _ZN7androidltERKNS_6VectorIhEES3_(void);

/* Symbol: _ZN11clearkeydrm10DrmFactory23isCryptoSchemeSupportedEPKh */
/* Demangled: clearkeydrm::DrmFactory::isCryptoSchemeSupported(unsigned char const*) */
int _ZN11clearkeydrm10DrmFactory23isCryptoSchemeSupportedEPKh(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIhE12do_constructEPvj */
/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIhE12do_constructEPvj(void);

/* Symbol: _ZN11clearkeydrm9DrmPlugin17setPropertyStringERKN7android7String8ES4_ */
/* Demangled: clearkeydrm::DrmPlugin::setPropertyString(android::String8 const&, android::String8 const&) */
int _ZN11clearkeydrm9DrmPlugin17setPropertyStringERKN7android7String8ES4_(void);

/* Symbol: _ZN11clearkeydrm9DrmPluginC2EPNS_14SessionLibraryE */
/* Demangled: clearkeydrm::DrmPlugin::DrmPlugin(clearkeydrm::SessionLibrary*) */
int _ZN11clearkeydrm9DrmPluginC2EPNS_14SessionLibraryE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKeyD1Ev */
/* Demangled: clearkeydrm::JsonWebKey::~JsonWebKey() */
int _ZN11clearkeydrm10JsonWebKeyD1Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvj */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEEE;

/* Symbol: _ZN11clearkeydrm14InitDataParser15generateRequestERKN7android6VectorIPKhEE */
/* Demangled: clearkeydrm::InitDataParser::generateRequest(android::Vector<unsigned char const*> const&) */
int _ZN11clearkeydrm14InitDataParser15generateRequestERKN7android6VectorIPKhEE(void);

/* Symbol: _ZNK11clearkeydrm9DrmPlugin20getPropertyByteArrayERKN7android7String8ERNS1_6VectorIhEE */
/* Demangled: clearkeydrm::DrmPlugin::getPropertyByteArray(android::String8 const&, android::Vector<unsigned char>&) const */
int _ZNK11clearkeydrm9DrmPlugin20getPropertyByteArrayERKN7android7String8ERNS1_6VectorIhEE(void);

/* Symbol: _ZTVN7android6VectorIPKhEE */
/* Demangled: vtable for android::Vector<unsigned char const*> */
extern void* _ZTVN7android6VectorIPKhEE;

/* Symbol: _ZN11clearkeydrm15AesCtrDecryptor7decryptERKN7android6VectorIhEEPKhS7_PhPKNS1_12CryptoPlugin9SubSampleEjPj */
/* Demangled: clearkeydrm::AesCtrDecryptor::decrypt(android::Vector<unsigned char> const&, unsigned char const*, unsigned char const*, unsigned char*, android::CryptoPlugin::SubSample const*, unsigned int, unsigned int*) */
int _ZN11clearkeydrm15AesCtrDecryptor7decryptERKN7android6VectorIhEEPKhS7_PhPKNS1_12CryptoPlugin9SubSampleEjPj(void);

/* Symbol: _ZN11clearkeydrm12CryptoPlugin18setMediaDrmSessionERKN7android6VectorIhEE */
/* Demangled: clearkeydrm::CryptoPlugin::setMediaDrmSession(android::Vector<unsigned char> const&) */
int _ZN11clearkeydrm12CryptoPlugin18setMediaDrmSessionERKN7android6VectorIhEE(void);

/* Symbol: _ZN11clearkeydrm10JsonWebKeyC1Ev */
/* Demangled: clearkeydrm::JsonWebKey::JsonWebKey() */
int _ZN11clearkeydrm10JsonWebKeyC1Ev(void);

/* Symbol: _ZN11clearkeydrm9DrmPlugin11openSessionERN7android6VectorIhEE */
/* Demangled: clearkeydrm::DrmPlugin::openSession(android::Vector<unsigned char>&) */
int _ZN11clearkeydrm9DrmPlugin11openSessionERN7android6VectorIhEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_compareEPKvS7_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE12do_constructEPvj(void);

/* Symbol: _ZTVN7android6VectorI9jsmntok_tEE */
/* Demangled: vtable for android::Vector<jsmntok_t> */
extern void* _ZTVN7android6VectorI9jsmntok_tEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android20ByteArrayToHexStringEPKhj */
/* Demangled: android::ByteArrayToHexString(unsigned char const*, unsigned int) */
int _ZN7android20ByteArrayToHexStringEPKhj(void);

/* Symbol: _ZN11clearkeydrm13CryptoFactory12createPluginEPKhPKvjPPN7android12CryptoPluginE */
/* Demangled: clearkeydrm::CryptoFactory::createPlugin(unsigned char const*, void const*, unsigned int, android::CryptoPlugin**) */
int _ZN11clearkeydrm13CryptoFactory12createPluginEPKhPKvjPPN7android12CryptoPluginE(void);

/* Symbol: _ZN11clearkeydrm9DrmPlugin13setPlayPolicyEv */
/* Demangled: clearkeydrm::DrmPlugin::setPlayPolicy() */
int _ZN11clearkeydrm9DrmPlugin13setPlayPolicyEv(void);

/* Symbol: _ZNK7android6VectorIPKhE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned char const*>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIPKhE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIPKhE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned char const*>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIPKhE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE12do_constructEPvj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDRMCLEARKEYPLUGIN_H */
