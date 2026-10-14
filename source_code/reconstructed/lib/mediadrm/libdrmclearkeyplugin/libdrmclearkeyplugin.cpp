/*
 * Reverse-Engineered Source for: libdrmclearkeyplugin.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdrmclearkeyplugin"

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
#include "libdrmclearkeyplugin.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: createDrmFactory */
extern "C" __attribute__((visibility("default"))) int createDrmFactory(void) {
    ALOGD("createDrmFactory() called");
    return 0;
}

/* Demangled: clearkeydrm::Session::provideKeyResponse(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm7Session18provideKeyResponseERKN7android6VectorIhEE(void) {
    ALOGD("_ZN11clearkeydrm7Session18provideKeyResponseERKN7android6VectorIhEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: clearkeydrm::getSupportedCryptoSchemes() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm25getSupportedCryptoSchemesEv(void) {
    ALOGD("_ZN11clearkeydrm25getSupportedCryptoSchemesEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::queryKeyStatus(android::Vector<unsigned char> const&, android::KeyedVector<android::String8, android::String8>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11clearkeydrm9DrmPlugin14queryKeyStatusERKN7android6VectorIhEERNS1_11KeyedVectorINS1_7String8ES7_EE(void) {
    ALOGD("_ZNK11clearkeydrm9DrmPlugin14queryKeyStatusERKN7android6VectorIhEERNS1_11KeyedVectorINS1_7String8ES7_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::InitDataParser::parsePssh(android::Vector<unsigned char> const&, android::Vector<unsigned char const*>*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14InitDataParser9parsePsshERKN7android6VectorIhEEPNS2_IPKhEE(void) {
    ALOGD("_ZN11clearkeydrm14InitDataParser9parsePsshERKN7android6VectorIhEEPNS2_IPKhEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: android::Vector<unsigned char>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: clearkeydrm::SessionLibrary::destroySession(android::sp<clearkeydrm::Session> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14SessionLibrary14destroySessionERKN7android2spINS_7SessionEEE(void) {
    ALOGD("_ZN11clearkeydrm14SessionLibrary14destroySessionERKN7android2spINS_7SessionEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::~JsonWebKey() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKeyD2Ev(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKeyD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEEE = NULL;

/* Demangled: clearkeydrm::DrmPlugin::initProperties() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin14initPropertiesEv(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin14initPropertiesEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: clearkeydrm::InitDataParser::parse(android::Vector<unsigned char> const&, android::String8 const&, android::Vector<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14InitDataParser5parseERKN7android6VectorIhEERKNS1_7String8EPS3_(void) {
    ALOGD("_ZN11clearkeydrm14InitDataParser5parseERKN7android6VectorIhEERKNS1_7String8EPS3_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char const*>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPKhE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPKhE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIhEE = NULL;

/* Demangled: clearkeydrm::DrmPlugin::DrmPlugin(clearkeydrm::SessionLibrary*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPluginC1EPNS_14SessionLibraryE(void) {
    ALOGD("_ZN11clearkeydrm9DrmPluginC1EPNS_14SessionLibraryE() called");
    return 0;
}

/* Exported Object: vtable for android::DrmPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9DrmPluginE = NULL;

/* Demangled: android::Vector<jsmntok_t>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::SessionLibrary::get() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14SessionLibrary3getEv(void) {
    ALOGD("_ZN11clearkeydrm14SessionLibrary3getEv() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::JsonWebKey() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKeyC2Ev(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKeyC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::getKeyRequest(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::String8 const&, android::DrmPlugin::KeyType, android::KeyedVector<android::String8, android::String8> const&, android::Vector<unsigned char>&, android::String8&, android::DrmPlugin::KeyRequestType*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin13getKeyRequestERKN7android6VectorIhEES5_RKNS1_7String8ENS1_9DrmPlugin7KeyTypeERKNS1_11KeyedVectorIS6_S6_EERS3_RS6_PNS9_14KeyRequestTypeE(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin13getKeyRequestERKN7android6VectorIhEES5_RKNS1_7String8ENS1_9DrmPlugin7KeyTypeERKNS1_11KeyedVectorIS6_S6_EERS3_RS6_PNS9_14KeyRequestTypeE() called");
    return 0;
}

/* Demangled: clearkeydrm::Session::getKeyRequest(android::Vector<unsigned char> const&, android::String8 const&, android::Vector<unsigned char>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11clearkeydrm7Session13getKeyRequestERKN7android6VectorIhEERKNS1_7String8EPS3_(void) {
    ALOGD("_ZNK11clearkeydrm7Session13getKeyRequestERKN7android6VectorIhEERKNS1_7String8EPS3_() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::extractKeysFromJsonWebKeySet(android::String8 const&, android::KeyedVector<android::Vector<unsigned char>, android::Vector<unsigned char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKey28extractKeysFromJsonWebKeySetERKN7android7String8EPNS1_11KeyedVectorINS1_6VectorIhEES7_EE(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKey28extractKeysFromJsonWebKeySetERKN7android7String8EPNS1_11KeyedVectorINS1_6VectorIhEES7_EE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::decodeBase64String(android::String8 const&, android::Vector<unsigned char>*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKey18decodeBase64StringERKN7android7String8EPNS1_6VectorIhEE(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKey18decodeBase64StringERKN7android7String8EPNS1_6VectorIhEE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for clearkeydrm::Session */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11clearkeydrm7SessionE = NULL;

/* Demangled: clearkeydrm::SessionLibrary::createSession() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14SessionLibrary13createSessionEv(void) {
    ALOGD("_ZN11clearkeydrm14SessionLibrary13createSessionEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char const*>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPKhE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPKhE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::findKey(android::String8 const&, android::String8*, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKey7findKeyERKN7android7String8EPS2_S5_(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKey7findKeyERKN7android7String8EPS2_S5_() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for clearkeydrm::JsonWebKey */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11clearkeydrm10JsonWebKeyE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::findValue(android::String8 const&, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKey9findValueERKN7android7String8EPS2_(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKey9findValueERKN7android7String8EPS2_() called");
    return 0;
}

/* Exported Object: clearkeydrm::SessionLibrary::sSingleton */
extern "C" __attribute__((visibility("default"))) void* _ZN11clearkeydrm14SessionLibrary10sSingletonE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::provideKeyResponse(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&, android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin18provideKeyResponseERKN7android6VectorIhEES5_RS3_(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin18provideKeyResponseERKN7android6VectorIhEES5_RS3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: clearkeydrm::CryptoPlugin::decrypt(bool, unsigned char const*, unsigned char const*, android::CryptoPlugin::Mode, android::CryptoPlugin::Pattern const&, void const*, android::CryptoPlugin::SubSample const*, unsigned int, void*, android::AString*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm12CryptoPlugin7decryptEbPKhS2_N7android12CryptoPlugin4ModeERKNS4_7PatternEPKvPKNS4_9SubSampleEjPvPNS3_7AStringE(void) {
    ALOGD("_ZN11clearkeydrm12CryptoPlugin7decryptEbPKhS2_N7android12CryptoPlugin4ModeERKNS4_7PatternEPKvPKNS4_9SubSampleEjPvPNS3_7AStringE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::~JsonWebKey() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKeyD0Ev(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKeyD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char const*>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPKhE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPKhE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::CryptoFactory::isCryptoSchemeSupported(unsigned char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11clearkeydrm13CryptoFactory23isCryptoSchemeSupportedEPKh(void) {
    ALOGD("_ZNK11clearkeydrm13CryptoFactory23isCryptoSchemeSupportedEPKh() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::getPropertyString(android::String8 const&, android::String8&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11clearkeydrm9DrmPlugin17getPropertyStringERKN7android7String8ERS2_(void) {
    ALOGD("_ZNK11clearkeydrm9DrmPlugin17getPropertyStringERKN7android7String8ERS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::parseJsonWebKeySet(android::String8 const&, android::Vector<android::String8>*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKey18parseJsonWebKeySetERKN7android7String8EPNS1_6VectorIS2_EE(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKey18parseJsonWebKeySetERKN7android7String8EPNS1_6VectorIS2_EE() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::isJsonWebKeySet(android::String8 const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11clearkeydrm10JsonWebKey15isJsonWebKeySetERKN7android7String8E(void) {
    ALOGD("_ZNK11clearkeydrm10JsonWebKey15isJsonWebKeySetERKN7android7String8E() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: clearkeydrm::SessionLibrary::sSingletonLock */
extern "C" __attribute__((visibility("default"))) void* _ZN11clearkeydrm14SessionLibrary14sSingletonLockE = NULL;

/* Demangled: clearkeydrm::isClearKeyUUID(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14isClearKeyUUIDEPKh(void) {
    ALOGD("_ZN11clearkeydrm14isClearKeyUUIDEPKh() called");
    return 0;
}

/* Demangled: clearkeydrm::Session::decrypt(unsigned char const*, unsigned char const*, void const*, void*, android::CryptoPlugin::SubSample const*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm7Session7decryptEPKhS2_PKvPvPKN7android12CryptoPlugin9SubSampleEjPj(void) {
    ALOGD("_ZN11clearkeydrm7Session7decryptEPKhS2_PKvPvPKN7android12CryptoPlugin9SubSampleEjPj() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmFactory::isContentTypeSupported(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10DrmFactory22isContentTypeSupportedERKN7android7String8E(void) {
    ALOGD("_ZN11clearkeydrm10DrmFactory22isContentTypeSupportedERKN7android7String8E() called");
    return 0;
}

/* Demangled: jsmn_parse */
extern "C" __attribute__((visibility("default"))) int jsmn_parse(void) {
    ALOGD("jsmn_parse() called");
    return 0;
}

/* Exported Object: vtable for clearkeydrm::DrmFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11clearkeydrm10DrmFactoryE = NULL;

/* Demangled: createCryptoFactory */
extern "C" __attribute__((visibility("default"))) int createCryptoFactory(void) {
    ALOGD("createCryptoFactory() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::SessionLibrary::findSession(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14SessionLibrary11findSessionERKN7android6VectorIhEE(void) {
    ALOGD("_ZN11clearkeydrm14SessionLibrary11findSessionERKN7android6VectorIhEE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char const*>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPKhE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIPKhE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for clearkeydrm::CryptoFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11clearkeydrm13CryptoFactoryE = NULL;

/* Demangled: clearkeydrm::DrmFactory::createDrmPlugin(unsigned char const*, android::DrmPlugin**) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10DrmFactory15createDrmPluginEPKhPPN7android9DrmPluginE(void) {
    ALOGD("_ZN11clearkeydrm10DrmFactory15createDrmPluginEPKhPPN7android9DrmPluginE() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::closeSession(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin12closeSessionERKN7android6VectorIhEE(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin12closeSessionERKN7android6VectorIhEE() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::setPropertyByteArray(android::String8 const&, android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin20setPropertyByteArrayERKN7android7String8ERKNS1_6VectorIhEE(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin20setPropertyByteArrayERKN7android7String8ERKNS1_6VectorIhEE() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::parseJsonObject(android::String8 const&, android::Vector<android::String8>*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKey15parseJsonObjectERKN7android7String8EPNS1_6VectorIS2_EE(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKey15parseJsonObjectERKN7android7String8EPNS1_6VectorIS2_EE() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIhE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: jsmn_init */
extern "C" __attribute__((visibility("default"))) int jsmn_init(void) {
    ALOGD("jsmn_init() called");
    return 0;
}

/* Exported Object: vtable for clearkeydrm::CryptoPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11clearkeydrm12CryptoPluginE = NULL;

/* Exported Object: vtable for clearkeydrm::DrmPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11clearkeydrm9DrmPluginE = NULL;

/* Demangled: android::operator<(android::Vector<unsigned char> const&, android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7androidltERKNS_6VectorIhEES3_(void) {
    ALOGD("_ZN7androidltERKNS_6VectorIhEES3_() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmFactory::isCryptoSchemeSupported(unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10DrmFactory23isCryptoSchemeSupportedEPKh(void) {
    ALOGD("_ZN11clearkeydrm10DrmFactory23isCryptoSchemeSupportedEPKh() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIhE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIhE12do_constructEPvj() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::setPropertyString(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin17setPropertyStringERKN7android7String8ES4_(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin17setPropertyStringERKN7android7String8ES4_() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::DrmPlugin(clearkeydrm::SessionLibrary*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPluginC2EPNS_14SessionLibraryE(void) {
    ALOGD("_ZN11clearkeydrm9DrmPluginC2EPNS_14SessionLibraryE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::~JsonWebKey() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKeyD1Ev(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKeyD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::Vector<unsigned char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ENS_6VectorIhEEEEEE = NULL;

/* Demangled: clearkeydrm::InitDataParser::generateRequest(android::Vector<unsigned char const*> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm14InitDataParser15generateRequestERKN7android6VectorIPKhEE(void) {
    ALOGD("_ZN11clearkeydrm14InitDataParser15generateRequestERKN7android6VectorIPKhEE() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::getPropertyByteArray(android::String8 const&, android::Vector<unsigned char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11clearkeydrm9DrmPlugin20getPropertyByteArrayERKN7android7String8ERNS1_6VectorIhEE(void) {
    ALOGD("_ZNK11clearkeydrm9DrmPlugin20getPropertyByteArrayERKN7android7String8ERNS1_6VectorIhEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned char const*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPKhEE = NULL;

/* Demangled: clearkeydrm::AesCtrDecryptor::decrypt(android::Vector<unsigned char> const&, unsigned char const*, unsigned char const*, unsigned char*, android::CryptoPlugin::SubSample const*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm15AesCtrDecryptor7decryptERKN7android6VectorIhEEPKhS7_PhPKNS1_12CryptoPlugin9SubSampleEjPj(void) {
    ALOGD("_ZN11clearkeydrm15AesCtrDecryptor7decryptERKN7android6VectorIhEEPKhS7_PhPKNS1_12CryptoPlugin9SubSampleEjPj() called");
    return 0;
}

/* Demangled: clearkeydrm::CryptoPlugin::setMediaDrmSession(android::Vector<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm12CryptoPlugin18setMediaDrmSessionERKN7android6VectorIhEE(void) {
    ALOGD("_ZN11clearkeydrm12CryptoPlugin18setMediaDrmSessionERKN7android6VectorIhEE() called");
    return 0;
}

/* Demangled: clearkeydrm::JsonWebKey::JsonWebKey() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm10JsonWebKeyC1Ev(void) {
    ALOGD("_ZN11clearkeydrm10JsonWebKeyC1Ev() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::openSession(android::Vector<unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin11openSessionERN7android6VectorIhEE(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin11openSessionERN7android6VectorIhEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::sp<clearkeydrm::Session> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEENS_2spIN11clearkeydrm7SessionEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<jsmntok_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI9jsmntok_tEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::ByteArrayToHexString(unsigned char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ByteArrayToHexStringEPKhj(void) {
    ALOGD("_ZN7android20ByteArrayToHexStringEPKhj() called");
    return 0;
}

/* Demangled: clearkeydrm::CryptoFactory::createPlugin(unsigned char const*, void const*, unsigned int, android::CryptoPlugin**) */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm13CryptoFactory12createPluginEPKhPKvjPPN7android12CryptoPluginE(void) {
    ALOGD("_ZN11clearkeydrm13CryptoFactory12createPluginEPKhPKvjPPN7android12CryptoPluginE() called");
    return 0;
}

/* Demangled: clearkeydrm::DrmPlugin::setPlayPolicy() */
extern "C" __attribute__((visibility("default"))) int _ZN11clearkeydrm9DrmPlugin13setPlayPolicyEv(void) {
    ALOGD("_ZN11clearkeydrm9DrmPlugin13setPlayPolicyEv() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char const*>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPKhE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIPKhE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<unsigned char const*>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPKhE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIPKhE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::Vector<unsigned char>, android::Vector<unsigned char> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_6VectorIhEES3_EEE12do_constructEPvj() called");
    return 0;
}
