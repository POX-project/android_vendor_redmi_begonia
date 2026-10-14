/*
 * Reverse-Engineered ABI Specification for: libmockdrmcryptoplugin.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmockdrmcryptoplugin.so
 */

#ifndef BEGONIA_RE_LIBMOCKDRMCRYPTOPLUGIN_H
#define BEGONIA_RE_LIBMOCKDRMCRYPTOPLUGIN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android13MockDrmPlugin13getSecureStopERKNS_6VectorIhEERS2_ */
/* Demangled: android::MockDrmPlugin::getSecureStop(android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin13getSecureStopERKNS_6VectorIhEERS2_(void);

/* Symbol: _ZNK7android12SortedVectorINS_6VectorIhEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_6VectorIhEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android16MockCryptoPlugin30requiresSecureDecoderComponentEPKc */
/* Demangled: android::MockCryptoPlugin::requiresSecureDecoderComponent(char const*) const */
int _ZNK7android16MockCryptoPlugin30requiresSecureDecoderComponentEPKc(void);

/* Symbol: _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android13MockDrmPlugin7signRSAERKNS_6VectorIhEERKNS_7String8ES4_S4_RS2_ */
/* Demangled: android::MockDrmPlugin::signRSA(android::Vector<unsigned char> const&, android::String8 const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin7signRSAERKNS_6VectorIhEERKNS_7String8ES4_S4_RS2_(void);

/* Symbol: _ZNK7android12SortedVectorINS_6VectorIhEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_6VectorIhEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIhE10do_destroyEPvj */
/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIhE10do_destroyEPvj(void);

/* Symbol: _ZN7android13MockDrmPlugin21releaseAllSecureStopsEv */
/* Demangled: android::MockDrmPlugin::releaseAllSecureStops() */
int _ZN7android13MockDrmPlugin21releaseAllSecureStopsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: createCryptoFactory */
/* Demangled: createCryptoFactory */
int createCryptoFactory(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_6VectorIhEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_6VectorIhEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android17MockCryptoFactory23isCryptoSchemeSupportedEPKh */
/* Demangled: android::MockCryptoFactory::isCryptoSchemeSupported(unsigned char const*) const */
int _ZNK7android17MockCryptoFactory23isCryptoSchemeSupportedEPKh(void);

/* Symbol: _ZTVN7android12SortedVectorINS_6VectorIhEEEE */
/* Demangled: vtable for android::SortedVector<android::Vector<unsigned char> > */
extern void* _ZTVN7android12SortedVectorINS_6VectorIhEEEE;

/* Symbol: _ZTVN7android17MockCryptoFactoryE */
/* Demangled: vtable for android::MockCryptoFactory */
extern void* _ZTVN7android17MockCryptoFactoryE;

/* Symbol: _ZN7android13MockDrmPlugin12closeSessionERKNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::closeSession(android::Vector<unsigned char> const&) */
int _ZN7android13MockDrmPlugin12closeSessionERKNS_6VectorIhEE(void);

/* Symbol: _ZN7android13MockDrmPlugin15setMacAlgorithmERKNS_6VectorIhEERKNS_7String8E */
/* Demangled: android::MockDrmPlugin::setMacAlgorithm(android::Vector<unsigned char> const&, android::String8 const&) */
int _ZN7android13MockDrmPlugin15setMacAlgorithmERKNS_6VectorIhEERKNS_7String8E(void);

/* Symbol: _ZNK7android13MockDrmPlugin20getPropertyByteArrayERKNS_7String8ERNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::getPropertyByteArray(android::String8 const&, android::Vector<unsigned char>&) const */
int _ZNK7android13MockDrmPlugin20getPropertyByteArrayERKNS_7String8ERNS_6VectorIhEE(void);

/* Symbol: _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android13MockDrmPlugin18releaseSecureStopsERKNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::releaseSecureStops(android::Vector<unsigned char> const&) */
int _ZN7android13MockDrmPlugin18releaseSecureStopsERKNS_6VectorIhEE(void);

/* Symbol: _ZN7android13MockDrmPlugin7encryptERKNS_6VectorIhEES4_S4_S4_RS2_ */
/* Demangled: android::MockDrmPlugin::encrypt(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin7encryptERKNS_6VectorIhEES4_S4_S4_RS2_(void);

/* Symbol: _ZN7android13MockDrmPlugin18setCipherAlgorithmERKNS_6VectorIhEERKNS_7String8E */
/* Demangled: android::MockDrmPlugin::setCipherAlgorithm(android::Vector<unsigned char> const&, android::String8 const&) */
int _ZN7android13MockDrmPlugin18setCipherAlgorithmERKNS_6VectorIhEERKNS_7String8E(void);

/* Symbol: _ZNK7android13MockDrmPlugin17stringMapToStringERKNS_11KeyedVectorINS_7String8ES2_EE */
/* Demangled: android::MockDrmPlugin::stringMapToString(android::KeyedVector<android::String8, android::String8> const&) const */
int _ZNK7android13MockDrmPlugin17stringMapToStringERKNS_11KeyedVectorINS_7String8ES2_EE(void);

/* Symbol: _ZNK7android16MockCryptoPlugin18subSamplesToStringEPKNS_12CryptoPlugin9SubSampleEj */
/* Demangled: android::MockCryptoPlugin::subSamplesToString(android::CryptoPlugin::SubSample const*, unsigned int) const */
int _ZNK7android16MockCryptoPlugin18subSamplesToStringEPKNS_12CryptoPlugin9SubSampleEj(void);

/* Symbol: _ZN7android13MockDrmPlugin17setPropertyStringERKNS_7String8ES3_ */
/* Demangled: android::MockDrmPlugin::setPropertyString(android::String8 const&, android::String8 const&) */
int _ZN7android13MockDrmPlugin17setPropertyStringERKNS_7String8ES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_6VectorIhEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_6VectorIhEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android13MockDrmPlugin13arrayToStringEPKhj */
/* Demangled: android::MockDrmPlugin::arrayToString(unsigned char const*, unsigned int) const */
int _ZNK7android13MockDrmPlugin13arrayToStringEPKhj(void);

/* Symbol: _ZNK7android6VectorIhE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android13MockDrmPlugin11findSessionERKNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::findSession(android::Vector<unsigned char> const&) const */
int _ZNK7android13MockDrmPlugin11findSessionERKNS_6VectorIhEE(void);

/* Symbol: _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN7android13MockDrmPlugin7decryptERKNS_6VectorIhEES4_S4_S4_RS2_ */
/* Demangled: android::MockDrmPlugin::decrypt(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin7decryptERKNS_6VectorIhEES4_S4_S4_RS2_(void);

/* Symbol: _ZN7android14MockDrmFactory23isCryptoSchemeSupportedEPKh */
/* Demangled: android::MockDrmFactory::isCryptoSchemeSupported(unsigned char const*) */
int _ZN7android14MockDrmFactory23isCryptoSchemeSupportedEPKh(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_6VectorIhEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_6VectorIhEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android9DrmPluginE */
/* Demangled: vtable for android::DrmPlugin */
extern void* _ZTVN7android9DrmPluginE;

/* Symbol: _ZN7android13MockDrmPlugin24provideProvisionResponseERKNS_6VectorIhEERS2_S5_ */
/* Demangled: android::MockDrmPlugin::provideProvisionResponse(android::Vector<unsigned char> const&, android::Vector<unsigned char>&, android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin24provideProvisionResponseERKNS_6VectorIhEERS2_S5_(void);

/* Symbol: _ZNK7android12SortedVectorINS_6VectorIhEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_6VectorIhEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android13MockDrmPlugin17getPropertyStringERKNS_7String8ERS1_ */
/* Demangled: android::MockDrmPlugin::getPropertyString(android::String8 const&, android::String8&) const */
int _ZNK7android13MockDrmPlugin17getPropertyStringERKNS_7String8ERS1_(void);

/* Symbol: _ZTVN7android13MockDrmPluginE */
/* Demangled: vtable for android::MockDrmPlugin */
extern void* _ZTVN7android13MockDrmPluginE;

/* Symbol: _ZN7android13MockDrmPlugin10removeKeysERKNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::removeKeys(android::Vector<unsigned char> const&) */
int _ZN7android13MockDrmPlugin10removeKeysERKNS_6VectorIhEE(void);

/* Symbol: _ZN7android13MockDrmPlugin18provideKeyResponseERKNS_6VectorIhEES4_RS2_ */
/* Demangled: android::MockDrmPlugin::provideKeyResponse(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin18provideKeyResponseERKNS_6VectorIhEES4_RS2_(void);

/* Symbol: _ZN7android14MockDrmFactory22isContentTypeSupportedERKNS_7String8E */
/* Demangled: android::MockDrmFactory::isContentTypeSupported(android::String8 const&) */
int _ZN7android14MockDrmFactory22isContentTypeSupportedERKNS_7String8E(void);

/* Symbol: _ZNK7android13MockDrmPlugin14queryKeyStatusERKNS_6VectorIhEERNS_11KeyedVectorINS_7String8ES6_EE */
/* Demangled: android::MockDrmPlugin::queryKeyStatus(android::Vector<unsigned char> const&, android::KeyedVector<android::String8, android::String8>&) const */
int _ZNK7android13MockDrmPlugin14queryKeyStatusERKNS_6VectorIhEERNS_11KeyedVectorINS_7String8ES6_EE(void);

/* Symbol: _ZNK7android6VectorIhE8do_splatEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android16MockCryptoPluginE */
/* Demangled: vtable for android::MockCryptoPlugin */
extern void* _ZTVN7android16MockCryptoPluginE;

/* Symbol: _ZTVN7android6VectorINS_9DrmPlugin9KeyStatusEEE */
/* Demangled: vtable for android::Vector<android::DrmPlugin::KeyStatus> */
extern void* _ZTVN7android6VectorINS_9DrmPlugin9KeyStatusEEE;

/* Symbol: createDrmFactory */
/* Demangled: createDrmFactory */
int createDrmFactory(void);

/* Symbol: _ZN7android13MockDrmPlugin13getKeyRequestERKNS_6VectorIhEES4_RKNS_7String8ENS_9DrmPlugin7KeyTypeERKNS_11KeyedVectorIS5_S5_EERS2_RS5_PNS8_14KeyRequestTypeE */
/* Demangled: android::MockDrmPlugin::getKeyRequest(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::String8 const&, android::DrmPlugin::KeyType, android::KeyedVector<android::String8, android::String8> const&, android::Vector<unsigned char>&, android::String8&, android::DrmPlugin::KeyRequestType*) */
int _ZN7android13MockDrmPlugin13getKeyRequestERKNS_6VectorIhEES4_RKNS_7String8ENS_9DrmPlugin7KeyTypeERKNS_11KeyedVectorIS5_S5_EERS2_RS5_PNS8_14KeyRequestTypeE(void);

/* Symbol: _ZN7android17MockCryptoFactory12createPluginEPKhPKvjPPNS_12CryptoPluginE */
/* Demangled: android::MockCryptoFactory::createPlugin(unsigned char const*, void const*, unsigned int, android::CryptoPlugin**) */
int _ZN7android17MockCryptoFactory12createPluginEPKhPKvjPPNS_12CryptoPluginE(void);

/* Symbol: _ZNK7android6VectorIhE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIhEE */
/* Demangled: vtable for android::Vector<unsigned char> */
extern void* _ZTVN7android6VectorIhEE;

/* Symbol: _ZN7android13MockDrmPlugin11openSessionERNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::openSession(android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin11openSessionERNS_6VectorIhEE(void);

/* Symbol: _ZN7android13MockDrmPlugin11restoreKeysERKNS_6VectorIhEES4_ */
/* Demangled: android::MockDrmPlugin::restoreKeys(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&) */
int _ZN7android13MockDrmPlugin11restoreKeysERKNS_6VectorIhEES4_(void);

/* Symbol: _ZN7android13MockDrmPlugin14getSecureStopsERNS_4ListINS_6VectorIhEEEE */
/* Demangled: android::MockDrmPlugin::getSecureStops(android::List<android::Vector<unsigned char> >&) */
int _ZN7android13MockDrmPlugin14getSecureStopsERNS_4ListINS_6VectorIhEEEE(void);

/* Symbol: _ZN7android14MockDrmFactory15createDrmPluginEPKhPPNS_9DrmPluginE */
/* Demangled: android::MockDrmFactory::createDrmPlugin(unsigned char const*, android::DrmPlugin**) */
int _ZN7android14MockDrmFactory15createDrmPluginEPKhPPNS_9DrmPluginE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android13MockDrmPlugin6verifyERKNS_6VectorIhEES4_S4_S4_Rb */
/* Demangled: android::MockDrmPlugin::verify(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, bool&) */
int _ZN7android13MockDrmPlugin6verifyERKNS_6VectorIhEES4_S4_S4_Rb(void);

/* Symbol: _ZN7android16MockCryptoPlugin7decryptEbPKhS2_NS_12CryptoPlugin4ModeERKNS3_7PatternEPKvPKNS3_9SubSampleEjPvPNS_7AStringE */
/* Demangled: android::MockCryptoPlugin::decrypt(bool, unsigned char const*, unsigned char const*, android::CryptoPlugin::Mode, android::CryptoPlugin::Pattern const&, void const*, android::CryptoPlugin::SubSample const*, unsigned int, void*, android::AString*) */
int _ZN7android16MockCryptoPlugin7decryptEbPKhS2_NS_12CryptoPlugin4ModeERKNS3_7PatternEPKvPKNS3_9SubSampleEjPvPNS_7AStringE(void);

/* Symbol: _ZNK7android12SortedVectorINS_6VectorIhEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_6VectorIhEEE10do_destroyEPvj(void);

/* Symbol: _ZN7android13MockDrmPlugin19getProvisionRequestERKNS_7String8ES3_RNS_6VectorIhEERS1_ */
/* Demangled: android::MockDrmPlugin::getProvisionRequest(android::String8 const&, android::String8 const&, android::Vector<unsigned char>&, android::String8&) */
int _ZN7android13MockDrmPlugin19getProvisionRequestERKNS_7String8ES3_RNS_6VectorIhEERS1_(void);

/* Symbol: _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE10do_destroyEPvj */
/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE12do_constructEPvj */
/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorIhE12do_constructEPvj */
/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIhE12do_constructEPvj(void);

/* Symbol: _ZN7android13MockDrmPlugin4signERKNS_6VectorIhEES4_S4_RS2_ */
/* Demangled: android::MockDrmPlugin::sign(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
int _ZN7android13MockDrmPlugin4signERKNS_6VectorIhEES4_S4_RS2_(void);

/* Symbol: _ZN7androidltERKNS_6VectorIhEES3_ */
/* Demangled: android::operator<(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&) */
int _ZN7androidltERKNS_6VectorIhEES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZTVN7android14MockDrmFactoryE */
/* Demangled: vtable for android::MockDrmFactory */
extern void* _ZTVN7android14MockDrmFactoryE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android13MockDrmPlugin10findKeySetERKNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::findKeySet(android::Vector<unsigned char> const&) const */
int _ZNK7android13MockDrmPlugin10findKeySetERKNS_6VectorIhEE(void);

/* Symbol: _ZN7android13MockDrmPlugin20setPropertyByteArrayERKNS_7String8ERKNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::setPropertyByteArray(android::String8 const&, android::Vector<unsigned char> const&) */
int _ZN7android13MockDrmPlugin20setPropertyByteArrayERKNS_7String8ERKNS_6VectorIhEE(void);

/* Symbol: _ZNK7android13MockDrmPlugin14vectorToStringERKNS_6VectorIhEE */
/* Demangled: android::MockDrmPlugin::vectorToString(android::Vector<unsigned char> const&) const */
int _ZNK7android13MockDrmPlugin14vectorToStringERKNS_6VectorIhEE(void);

/* Symbol: _ZNK7android16MockCryptoPlugin13arrayToStringEPKhj */
/* Demangled: android::MockCryptoPlugin::arrayToString(unsigned char const*, unsigned int) const */
int _ZNK7android16MockCryptoPlugin13arrayToStringEPKhj(void);

/* Symbol: _ZNK7android6VectorIhE7do_copyEPvPKvj */
/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIhE7do_copyEPvPKvj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMOCKDRMCRYPTOPLUGIN_H */
