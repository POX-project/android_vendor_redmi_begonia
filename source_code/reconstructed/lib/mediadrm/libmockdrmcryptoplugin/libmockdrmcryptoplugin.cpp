/*
 * Reverse-Engineered Source for: libmockdrmcryptoplugin.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmockdrmcryptoplugin"

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
#include "libmockdrmcryptoplugin.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::MockDrmPlugin::getSecureStop(android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin13getSecureStopERKNS_6VectorIhEERS2_(void) {
    ALOGD("_ZN7android13MockDrmPlugin13getSecureStopERKNS_6VectorIhEERS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_6VectorIhEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_6VectorIhEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::MockCryptoPlugin::requiresSecureDecoderComponent(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16MockCryptoPlugin30requiresSecureDecoderComponentEPKc(void) {
    ALOGD("_ZNK7android16MockCryptoPlugin30requiresSecureDecoderComponentEPKc() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::signRSA(android::Vector<unsigned char> const&, android::String8 const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin7signRSAERKNS_6VectorIhEERKNS_7String8ES4_S4_RS2_(void) {
    ALOGD("_ZN7android13MockDrmPlugin7signRSAERKNS_6VectorIhEERKNS_7String8ES4_S4_RS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_6VectorIhEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_6VectorIhEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::releaseAllSecureStops() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin21releaseAllSecureStopsEv(void) {
    ALOGD("_ZN7android13MockDrmPlugin21releaseAllSecureStopsEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: createCryptoFactory */
extern "C" __attribute__((visibility("default"))) int createCryptoFactory(void) {
    ALOGD("createCryptoFactory() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_6VectorIhEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_6VectorIhEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::MockCryptoFactory::isCryptoSchemeSupported(unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17MockCryptoFactory23isCryptoSchemeSupportedEPKh(void) {
    ALOGD("_ZNK7android17MockCryptoFactory23isCryptoSchemeSupportedEPKh() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::Vector<unsigned char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_6VectorIhEEEE = NULL;

/* Exported Object: vtable for android::MockCryptoFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17MockCryptoFactoryE = NULL;

/* Demangled: android::MockDrmPlugin::closeSession(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin12closeSessionERKNS_6VectorIhEE(void) {
    ALOGD("_ZN7android13MockDrmPlugin12closeSessionERKNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::setMacAlgorithm(android::Vector<unsigned char> const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin15setMacAlgorithmERKNS_6VectorIhEERKNS_7String8E(void) {
    ALOGD("_ZN7android13MockDrmPlugin15setMacAlgorithmERKNS_6VectorIhEERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::getPropertyByteArray(android::String8 const&, android::Vector<unsigned char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin20getPropertyByteArrayERKNS_7String8ERNS_6VectorIhEE(void) {
    ALOGD("_ZNK7android13MockDrmPlugin20getPropertyByteArrayERKNS_7String8ERNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::releaseSecureStops(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin18releaseSecureStopsERKNS_6VectorIhEE(void) {
    ALOGD("_ZN7android13MockDrmPlugin18releaseSecureStopsERKNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::encrypt(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin7encryptERKNS_6VectorIhEES4_S4_S4_RS2_(void) {
    ALOGD("_ZN7android13MockDrmPlugin7encryptERKNS_6VectorIhEES4_S4_S4_RS2_() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::setCipherAlgorithm(android::Vector<unsigned char> const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin18setCipherAlgorithmERKNS_6VectorIhEERKNS_7String8E(void) {
    ALOGD("_ZN7android13MockDrmPlugin18setCipherAlgorithmERKNS_6VectorIhEERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::stringMapToString(android::KeyedVector<android::String8, android::String8> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin17stringMapToStringERKNS_11KeyedVectorINS_7String8ES2_EE(void) {
    ALOGD("_ZNK7android13MockDrmPlugin17stringMapToStringERKNS_11KeyedVectorINS_7String8ES2_EE() called");
    return 0;
}

/* Demangled: android::MockCryptoPlugin::subSamplesToString(android::CryptoPlugin::SubSample const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16MockCryptoPlugin18subSamplesToStringEPKNS_12CryptoPlugin9SubSampleEj(void) {
    ALOGD("_ZNK7android16MockCryptoPlugin18subSamplesToStringEPKNS_12CryptoPlugin9SubSampleEj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::setPropertyString(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin17setPropertyStringERKNS_7String8ES3_(void) {
    ALOGD("_ZN7android13MockDrmPlugin17setPropertyStringERKNS_7String8ES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_6VectorIhEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_6VectorIhEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::arrayToString(unsigned char const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin13arrayToStringEPKhj(void) {
    ALOGD("_ZNK7android13MockDrmPlugin13arrayToStringEPKhj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::findSession(android::Vector<unsigned char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin11findSessionERKNS_6VectorIhEE(void) {
    ALOGD("_ZNK7android13MockDrmPlugin11findSessionERKNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::decrypt(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin7decryptERKNS_6VectorIhEES4_S4_S4_RS2_(void) {
    ALOGD("_ZN7android13MockDrmPlugin7decryptERKNS_6VectorIhEES4_S4_S4_RS2_() called");
    return 0;
}

/* Demangled: android::MockDrmFactory::isCryptoSchemeSupported(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MockDrmFactory23isCryptoSchemeSupportedEPKh(void) {
    ALOGD("_ZN7android14MockDrmFactory23isCryptoSchemeSupportedEPKh() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_6VectorIhEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_6VectorIhEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::DrmPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9DrmPluginE = NULL;

/* Demangled: android::MockDrmPlugin::provideProvisionResponse(android::Vector<unsigned char> const&, android::Vector<unsigned char>&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin24provideProvisionResponseERKNS_6VectorIhEERS2_S5_(void) {
    ALOGD("_ZN7android13MockDrmPlugin24provideProvisionResponseERKNS_6VectorIhEERS2_S5_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_6VectorIhEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_6VectorIhEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::getPropertyString(android::String8 const&, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin17getPropertyStringERKNS_7String8ERS1_(void) {
    ALOGD("_ZNK7android13MockDrmPlugin17getPropertyStringERKNS_7String8ERS1_() called");
    return 0;
}

/* Exported Object: vtable for android::MockDrmPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13MockDrmPluginE = NULL;

/* Demangled: android::MockDrmPlugin::removeKeys(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin10removeKeysERKNS_6VectorIhEE(void) {
    ALOGD("_ZN7android13MockDrmPlugin10removeKeysERKNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::provideKeyResponse(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin18provideKeyResponseERKNS_6VectorIhEES4_RS2_(void) {
    ALOGD("_ZN7android13MockDrmPlugin18provideKeyResponseERKNS_6VectorIhEES4_RS2_() called");
    return 0;
}

/* Demangled: android::MockDrmFactory::isContentTypeSupported(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MockDrmFactory22isContentTypeSupportedERKNS_7String8E(void) {
    ALOGD("_ZN7android14MockDrmFactory22isContentTypeSupportedERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::queryKeyStatus(android::Vector<unsigned char> const&, android::KeyedVector<android::String8, android::String8>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin14queryKeyStatusERKNS_6VectorIhEERNS_11KeyedVectorINS_7String8ES6_EE(void) {
    ALOGD("_ZNK7android13MockDrmPlugin14queryKeyStatusERKNS_6VectorIhEERNS_11KeyedVectorINS_7String8ES6_EE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::MockCryptoPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16MockCryptoPluginE = NULL;

/* Exported Object: vtable for android::Vector<android::DrmPlugin::KeyStatus> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_9DrmPlugin9KeyStatusEEE = NULL;

/* Demangled: createDrmFactory */
extern "C" __attribute__((visibility("default"))) int createDrmFactory(void) {
    ALOGD("createDrmFactory() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::getKeyRequest(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::String8 const&, android::DrmPlugin::KeyType, android::KeyedVector<android::String8, android::String8> const&, android::Vector<unsigned char>&, android::String8&, android::DrmPlugin::KeyRequestType*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin13getKeyRequestERKNS_6VectorIhEES4_RKNS_7String8ENS_9DrmPlugin7KeyTypeERKNS_11KeyedVectorIS5_S5_EERS2_RS5_PNS8_14KeyRequestTypeE(void) {
    ALOGD("_ZN7android13MockDrmPlugin13getKeyRequestERKNS_6VectorIhEES4_RKNS_7String8ENS_9DrmPlugin7KeyTypeERKNS_11KeyedVectorIS5_S5_EERS2_RS5_PNS8_14KeyRequestTypeE() called");
    return 0;
}

/* Demangled: android::MockCryptoFactory::createPlugin(unsigned char const*, void const*, unsigned int, android::CryptoPlugin**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MockCryptoFactory12createPluginEPKhPKvjPPNS_12CryptoPluginE(void) {
    ALOGD("_ZN7android17MockCryptoFactory12createPluginEPKhPKvjPPNS_12CryptoPluginE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIhEE = NULL;

/* Demangled: android::MockDrmPlugin::openSession(android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin11openSessionERNS_6VectorIhEE(void) {
    ALOGD("_ZN7android13MockDrmPlugin11openSessionERNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::restoreKeys(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin11restoreKeysERKNS_6VectorIhEES4_(void) {
    ALOGD("_ZN7android13MockDrmPlugin11restoreKeysERKNS_6VectorIhEES4_() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::getSecureStops(android::List<android::Vector<unsigned char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin14getSecureStopsERNS_4ListINS_6VectorIhEEEE(void) {
    ALOGD("_ZN7android13MockDrmPlugin14getSecureStopsERNS_4ListINS_6VectorIhEEEE() called");
    return 0;
}

/* Demangled: android::MockDrmFactory::createDrmPlugin(unsigned char const*, android::DrmPlugin**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MockDrmFactory15createDrmPluginEPKhPPNS_9DrmPluginE(void) {
    ALOGD("_ZN7android14MockDrmFactory15createDrmPluginEPKhPPNS_9DrmPluginE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::verify(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin6verifyERKNS_6VectorIhEES4_S4_S4_Rb(void) {
    ALOGD("_ZN7android13MockDrmPlugin6verifyERKNS_6VectorIhEES4_S4_S4_Rb() called");
    return 0;
}

/* Demangled: android::MockCryptoPlugin::decrypt(bool, unsigned char const*, unsigned char const*, android::CryptoPlugin::Mode, android::CryptoPlugin::Pattern const&, void const*, android::CryptoPlugin::SubSample const*, unsigned int, void*, android::AString*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MockCryptoPlugin7decryptEbPKhS2_NS_12CryptoPlugin4ModeERKNS3_7PatternEPKvPKNS3_9SubSampleEjPvPNS_7AStringE(void) {
    ALOGD("_ZN7android16MockCryptoPlugin7decryptEbPKhS2_NS_12CryptoPlugin4ModeERKNS3_7PatternEPKvPKNS3_9SubSampleEjPvPNS_7AStringE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::Vector<unsigned char> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_6VectorIhEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_6VectorIhEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::getProvisionRequest(android::String8 const&, android::String8 const&, android::Vector<unsigned char>&, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin19getProvisionRequestERKNS_7String8ES3_RNS_6VectorIhEERS1_(void) {
    ALOGD("_ZN7android13MockDrmPlugin19getProvisionRequestERKNS_7String8ES3_RNS_6VectorIhEERS1_() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::DrmPlugin::KeyStatus>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_9DrmPlugin9KeyStatusEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::sign(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin4signERKNS_6VectorIhEES4_S4_RS2_(void) {
    ALOGD("_ZN7android13MockDrmPlugin4signERKNS_6VectorIhEES4_S4_RS2_() called");
    return 0;
}

/* Demangled: android::operator<(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidltERKNS_6VectorIhEES3_(void) {
    ALOGD("_ZN7androidltERKNS_6VectorIhEES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Exported Object: vtable for android::MockDrmFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14MockDrmFactoryE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::findKeySet(android::Vector<unsigned char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin10findKeySetERKNS_6VectorIhEE(void) {
    ALOGD("_ZNK7android13MockDrmPlugin10findKeySetERKNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::setPropertyByteArray(android::String8 const&, android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13MockDrmPlugin20setPropertyByteArrayERKNS_7String8ERKNS_6VectorIhEE(void) {
    ALOGD("_ZN7android13MockDrmPlugin20setPropertyByteArrayERKNS_7String8ERKNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::MockDrmPlugin::vectorToString(android::Vector<unsigned char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android13MockDrmPlugin14vectorToStringERKNS_6VectorIhEE(void) {
    ALOGD("_ZNK7android13MockDrmPlugin14vectorToStringERKNS_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::MockCryptoPlugin::arrayToString(unsigned char const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16MockCryptoPlugin13arrayToStringEPKhj(void) {
    ALOGD("_ZNK7android16MockCryptoPlugin13arrayToStringEPKhj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE7do_copyEPvPKvj() called");
    return 0;
}
