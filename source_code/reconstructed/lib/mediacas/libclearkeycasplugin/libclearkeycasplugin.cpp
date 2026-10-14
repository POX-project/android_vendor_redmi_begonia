/*
 * Reverse-Engineered Source for: libclearkeycasplugin.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libclearkeycasplugin"

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
#include "libclearkeycasplugin.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::processEcm(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin10processEcmERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin10processEcmERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::~ClearKeyCasPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPluginD0Ev(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPluginD0Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::decrypt(bool, android::DescramblerPlugin::ScramblingControl, unsigned int, android::DescramblerPlugin::SubSample const*, void const*, void*, android::AString*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasSession7decryptEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKvPvPNS_7AStringE(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasSession7decryptEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKvPvPNS_7AStringE() called");
    return 0;
}

/* Demangled: createDescramblerFactory */
extern "C" __attribute__((visibility("default"))) int createDescramblerFactory(void) {
    ALOGD("createDescramblerFactory() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::CopyFrom(android::clearkeycas::Asset const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset8CopyFromERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas5Asset8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet, google::protobuf::internal::InternalMetadataWithArena>::Container>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINS0_15UnknownFieldSetENS1_25InternalMetadataWithArenaEE9ContainerEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINS0_15UnknownFieldSetENS1_25InternalMetadataWithArenaEE9ContainerEEEvPv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::openSession(unsigned int, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEjjPNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEjjPNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyDescramblerFactory::createPlugin(int, android::DescramblerPlugin**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas26ClearKeyDescramblerFactory12createPluginEiPPNS_17DescramblerPluginE(void) {
    ALOGD("_ZN7android11clearkeycas26ClearKeyDescramblerFactory12createPluginEiPPNS_17DescramblerPluginE() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::findKey(android::String8 const&, android::clearkeycas::Asset*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoader7findKeyERKNS_7String8EPNS0_5AssetE(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoader7findKeyERKNS_7String8EPNS0_5AssetE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::refreshEntitlements(int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin19refreshEntitlementsEiRKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin19refreshEntitlementsEiRKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmContainer::~EcmContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas12EcmContainerD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas12EcmContainerD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::AssetKey */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas8AssetKeyE = NULL;

/* Exported Object: vtable for android::clearkeycas::JsonAssetLoader */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas15JsonAssetLoaderE = NULL;

/* Demangled: android::clearkeycas::AssetKey::CopyFrom(android::clearkeycas::AssetKey const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey8CopyFromERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey8CopyFromERKS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyFetcher::ObtainKey(android::sp<android::ABuffer> const&, unsigned long long*, std::__1::vector<android::clearkeycas::KeyFetcher::KeyInfo, std::__1::allocator<android::clearkeycas::KeyFetcher::KeyInfo> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15ClearKeyFetcher9ObtainKeyERKNS_2spINS_7ABufferEEEPyPNSt3__16vectorINS0_10KeyFetcher7KeyInfoENS8_9allocatorISB_EEEE(void) {
    ALOGD("_ZN7android11clearkeycas15ClearKeyFetcher9ObtainKeyERKNS_2spINS_7ABufferEEEPyPNSt3__16vectorINS0_10KeyFetcher7KeyInfoENS8_9allocatorISB_EEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyFetcher::~ClearKeyFetcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15ClearKeyFetcherD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas15ClearKeyFetcherD2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::Ecm::Decrypt(android::sp<android::ABuffer> const&, android::clearkeycas::Asset const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas3Ecm7DecryptERKNS_2spINS_7ABufferEEERKNS0_5AssetE(void) {
    ALOGD("_ZN7android11clearkeycas3Ecm7DecryptERKNS_2spINS_7ABufferEEERKNS0_5AssetE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN7android11clearkeycas5Asset21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::Asset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5AssetC1Ev(void) {
    ALOGD("_ZN7android11clearkeycas5AssetC1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::~AssetKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKeyD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKeyD1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::extractAssetFromString(android::String8 const&, android::clearkeycas::Asset*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoader22extractAssetFromStringERKNS_7String8EPNS0_5AssetE(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoader22extractAssetFromStringERKNS_7String8EPNS0_5AssetE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::ClearKeyCasSession(android::CasPlugin*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasSessionC1EPNS_9CasPluginE(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasSessionC1EPNS_9CasPluginE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmDescriptor::Parse(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13EcmDescriptor5ParseERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android11clearkeycas13EcmDescriptor5ParseERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmDescriptor::~EcmDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13EcmDescriptorD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas13EcmDescriptorD1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::parseJsonAssetString(android::String8 const&, android::Vector<android::String8>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoader20parseJsonAssetStringERKNS_7String8EPNS_6VectorIS2_EE(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoader20parseJsonAssetStringERKNS_7String8EPNS_6VectorIS2_EE() called");
    return 0;
}

/* Exported Object: descriptor_table_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
extern "C" __attribute__((visibility("default"))) void* descriptor_table_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto = NULL;

/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char const&>(unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::~ClearKeyCasPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPluginD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPluginD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<android::clearkeycas::Asset>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas5AssetEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas5AssetEEEvPv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjE() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::JsonAssetLoader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoaderC1Ev(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoaderC1Ev() called");
    return 0;
}

/* Exported Object: android::clearkeycas::ClearKeySessionLibrary::sSingleton */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11clearkeycas22ClearKeySessionLibrary10sSingletonE = NULL;

/* Demangled: android::clearkeycas::Asset_CasType_descriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas24Asset_CasType_descriptorEv(void) {
    ALOGD("_ZN7android11clearkeycas24Asset_CasType_descriptorEv() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::ClearKeyCasFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas18ClearKeyCasFactoryE = NULL;

/* Demangled: android::Vector<jsmntok_t>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey* google::protobuf::Arena::CreateMaybeMessage<android::clearkeycas::AssetKey>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas8AssetKeyEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas8AssetKeyEJEEEPT_PS1_DpOT0_() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset16default_instanceEv(void) {
    ALOGD("_ZN7android11clearkeycas5Asset16default_instanceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_compareEPKvSE_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_compareEPKvSE_() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::MergeFrom(android::clearkeycas::Asset const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset9MergeFromERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas5Asset9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::InternalSerializeWithCachedSizesToArray(unsigned char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas8AssetKey39InternalSerializeWithCachedSizesToArrayEPh(void) {
    ALOGD("_ZNK7android11clearkeycas8AssetKey39InternalSerializeWithCachedSizesToArrayEPh() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeySessionLibrary::get() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeySessionLibrary3getEv(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeySessionLibrary3getEv() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::ClearKeyCasPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas17ClearKeyCasPluginE = NULL;

/* Exported Object: vtable for android::clearkeycas::ClearKeyDescramblerPlugin */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas25ClearKeyDescramblerPluginE = NULL;

/* Demangled: android::clearkeycas::EcmContainer::EcmContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas12EcmContainerC1Ev(void) {
    ALOGD("_ZN7android11clearkeycas12EcmContainerC1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyFetcher::ClearKeyFetcher(std::__1::unique_ptr<android::clearkeycas::LicenseFetcher, std::__1::default_delete<android::clearkeycas::LicenseFetcher> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15ClearKeyFetcherC2ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE(void) {
    ALOGD("_ZN7android11clearkeycas15ClearKeyFetcherC2ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset_CasType_IsValid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas21Asset_CasType_IsValidEi(void) {
    ALOGD("_ZN7android11clearkeycas21Asset_CasType_IsValidEi() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::InternalSerializeWithCachedSizesToArray(unsigned char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas5Asset39InternalSerializeWithCachedSizesToArrayEPh(void) {
    ALOGD("_ZNK7android11clearkeycas5Asset39InternalSerializeWithCachedSizesToArrayEPh() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<android::clearkeycas::ClearKeyCasSession*, std::__1::default_delete<android::clearkeycas::ClearKeyCasSession>, std::__1::allocator<android::clearkeycas::ClearKeyCasSession> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEEE = NULL;

/* Demangled: android::clearkeycas::Asset::Asset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5AssetC2Ev(void) {
    ALOGD("_ZN7android11clearkeycas5AssetC2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::~AssetKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKeyD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKeyD2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::GetMetadata() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas8AssetKey11GetMetadataEv(void) {
    ALOGD("_ZNK7android11clearkeycas8AssetKey11GetMetadataEv() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::Asset */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas5AssetE = NULL;

/* Exported Object: scc_info_AssetKey_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_AssetKey_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto = NULL;

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const*)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmDescriptor::~EcmDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13EcmDescriptorD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas13EcmDescriptorD2Ev() called");
    return 0;
}

/* Exported Object: android::clearkeycas::_Asset_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11clearkeycas24_Asset_default_instance_E = NULL;

/* Demangled: android::clearkeycas::AssetKey::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey5ClearEv(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey5ClearEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::sendSessionEvent(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, int, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin16sendSessionEventERKNSt3__16vectorIhNS2_9allocatorIhEEEEiiS8_(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin16sendSessionEventERKNSt3__16vectorIhNS2_9allocatorIhEEEEiiS8_() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::~ClearKeyCasPlugin() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPluginD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPluginD2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeySessionLibrary::destroySession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeySessionLibrary14destroySessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeySessionLibrary14destroySessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::requiresSecureDecoderComponent(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin30requiresSecureDecoderComponentEPKc(void) {
    ALOGD("_ZNK7android11clearkeycas25ClearKeyDescramblerPlugin30requiresSecureDecoderComponentEPKc() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmContainer::Add(android::clearkeycas::EcmDescriptor const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas12EcmContainer3AddERKNS0_13EcmDescriptorE(void) {
    ALOGD("_ZN7android11clearkeycas12EcmContainer3AddERKNS0_13EcmDescriptorE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::_Internal::asset_key(android::clearkeycas::Asset const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset9_Internal9asset_keyEPKS1_(void) {
    ALOGD("_ZN7android11clearkeycas5Asset9_Internal9asset_keyEPKS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::AssetKey(android::clearkeycas::AssetKey const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKeyC2ERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKeyC2ERKS1_() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::ClearKeyDescramblerFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas26ClearKeyDescramblerFactoryE = NULL;

/* Demangled: android::clearkeycas::JsonAssetLoader::JsonAssetLoader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoaderC2Ev(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoaderC2Ev() called");
    return 0;
}

/* Demangled: jsmn_init */
extern "C" __attribute__((visibility("default"))) int jsmn_init(void) {
    ALOGD("jsmn_init() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas5Asset13IsInitializedEv(void) {
    ALOGD("_ZNK7android11clearkeycas5Asset13IsInitializedEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyFetcher::ClearKeyFetcher(std::__1::unique_ptr<android::clearkeycas::LicenseFetcher, std::__1::default_delete<android::clearkeycas::LicenseFetcher> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15ClearKeyFetcherC1ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE(void) {
    ALOGD("_ZN7android11clearkeycas15ClearKeyFetcherC1ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<jsmntok_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI9jsmntok_tEE = NULL;

/* Demangled: android::clearkeycas::AssetKey::InternalSwap(android::clearkeycas::AssetKey*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey12InternalSwapEPS1_(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::MergeFrom(android::clearkeycas::AssetKey const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey9MergeFromERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey9MergeFromERKS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::setSessionPrivateData(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin21setSessionPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin21setSessionPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmContainer::EcmContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas12EcmContainerC2Ev(void) {
    ALOGD("_ZN7android11clearkeycas12EcmContainerC2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::Ecm::~Ecm() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas3EcmD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas3EcmD1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::decodeBase64String(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoader18decodeBase64StringERKNS_7String8E(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoader18decodeBase64StringERKNS_7String8E() called");
    return 0;
}

/* Demangled: createCasFactory */
extern "C" __attribute__((visibility("default"))) int createCasFactory(void) {
    ALOGD("createCasFactory() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<android::clearkeycas::ClearKeyCasSession*, std::__1::default_delete<android::clearkeycas::ClearKeyCasSession>, std::__1::allocator<android::clearkeycas::ClearKeyCasSession> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::MergeFrom(google::protobuf::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey9MergeFromERKN6google8protobuf7MessageE(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey9MergeFromERKN6google8protobuf7MessageE() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::AssetKey(android::clearkeycas::AssetKey const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKeyC1ERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKeyC1ERKS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasFactory::isSystemIdSupported(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas18ClearKeyCasFactory19isSystemIdSupportedEi(void) {
    ALOGD("_ZNK7android11clearkeycas18ClearKeyCasFactory19isSystemIdSupportedEi() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::findValue(android::String8 const&, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoader9findValueERKNS_7String8EPS2_(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoader9findValueERKNS_7String8EPS2_() called");
    return 0;
}

/* Exported Object: TableStruct_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto::offsets */
extern "C" __attribute__((visibility("default"))) void* _ZN101TableStruct_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto7offsetsE = NULL;

/* Demangled: android::clearkeycas::AssetKey::AssetKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKeyC1Ev(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKeyC1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas5Asset13SetCachedSizeEi(void) {
    ALOGD("_ZNK7android11clearkeycas5Asset13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::descramble(bool, android::DescramblerPlugin::ScramblingControl, unsigned int, android::DescramblerPlugin::SubSample const*, void const*, int, void*, int, android::AString*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas25ClearKeyDescramblerPlugin10descrambleEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKviPviPNS_7AStringE(void) {
    ALOGD("_ZN7android11clearkeycas25ClearKeyDescramblerPlugin10descrambleEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKviPviPNS_7AStringE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13EcmDescriptorC1Ev(void) {
    ALOGD("_ZN7android11clearkeycas13EcmDescriptorC1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasFactory::createPlugin(int, void*, void (*)(void*, int, int, unsigned char*, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const*), android::CasPlugin**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEEPPNS_9CasPluginE(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEEPPNS_9CasPluginE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::~ClearKeyCasSession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasSessionD0Ev(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasSessionD0Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN7android11clearkeycas5Asset27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasFactory::queryPlugins(std::__1::vector<android::CasPluginDescriptor, std::__1::allocator<android::CasPluginDescriptor> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas18ClearKeyCasFactory12queryPluginsEPNSt3__16vectorINS_19CasPluginDescriptorENS2_9allocatorIS4_EEEE(void) {
    ALOGD("_ZNK7android11clearkeycas18ClearKeyCasFactory12queryPluginsEPNSt3__16vectorINS_19CasPluginDescriptorENS2_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::ClearKeyCasSession(android::CasPlugin*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasSessionC2EPNS_9CasPluginE(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasSessionC2EPNS_9CasPluginE() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::parseJsonObject(android::String8 const&, android::Vector<android::String8>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoader15parseJsonObjectERKNS_7String8EPNS_6VectorIS2_EE(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoader15parseJsonObjectERKNS_7String8EPNS_6VectorIS2_EE() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::~Asset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5AssetD0Ev(void) {
    ALOGD("_ZN7android11clearkeycas5AssetD0Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::provision(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin9provisionERKNS_7String8E(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin9provisionERKNS_7String8E() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::ClearKeyLicenseFetcher */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas22ClearKeyLicenseFetcherE = NULL;

/* Demangled: android::clearkeycas::Ecm::~Ecm() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas3EcmD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas3EcmD2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas8AssetKey12ByteSizeLongEv(void) {
    ALOGD("_ZNK7android11clearkeycas8AssetKey12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::setPrivateData(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin14setPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin14setPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::Clear() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset5ClearEv(void) {
    ALOGD("_ZN7android11clearkeycas5Asset5ClearEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyLicenseFetcher::Init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeyLicenseFetcher4InitEPKc(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeyLicenseFetcher4InitEPKc() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::GetMetadata() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas5Asset11GetMetadataEv(void) {
    ALOGD("_ZNK7android11clearkeycas5Asset11GetMetadataEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::clearkeycas::KeyFetcher::KeyInfo, std::__1::allocator<android::clearkeycas::KeyFetcher::KeyInfo> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android11clearkeycas10KeyFetcher7KeyInfoENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN7android11clearkeycas10KeyFetcher7KeyInfoENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::ClearKeyFetcher */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas15ClearKeyFetcherE = NULL;

/* Demangled: android::clearkeycas::JsonAssetLoader::~JsonAssetLoader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoaderD0Ev(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoaderD0Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::TpBlockCtsDecrypt(aes_key_st const&, unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17TpBlockCtsDecryptERK10aes_key_stjPc(void) {
    ALOGD("_ZN7android11clearkeycas17TpBlockCtsDecryptERK10aes_key_stjPc() called");
    return 0;
}

/* Exported Object: vtable for android::clearkeycas::ClearKeyCasSession */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android11clearkeycas18ClearKeyCasSessionE = NULL;

/* Demangled: android::Vector<jsmntok_t>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::Asset(android::clearkeycas::Asset const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5AssetC2ERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas5AssetC2ERKS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::AssetKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKeyC2Ev(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKeyC2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas8AssetKey24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK7android11clearkeycas8AssetKey24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::arrayToString(unsigned char const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin13arrayToStringEPKhj(void) {
    ALOGD("_ZNK7android11clearkeycas25ClearKeyDescramblerPlugin13arrayToStringEPKhj() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::CasPluginDescriptor, std::__1::allocator<android::CasPluginDescriptor> >::__push_back_slow_path<android::CasPluginDescriptor>(android::CasPluginDescriptor&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android19CasPluginDescriptorENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android19CasPluginDescriptorENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyFetcher::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15ClearKeyFetcher4InitEv(void) {
    ALOGD("_ZN7android11clearkeycas15ClearKeyFetcher4InitEv() called");
    return 0;
}

/* Exported Object: android::clearkeycas::ClearKeySessionLibrary::sSingletonLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11clearkeycas22ClearKeySessionLibrary14sSingletonLockE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEEE = NULL;

/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13EcmDescriptorC2Ev(void) {
    ALOGD("_ZN7android11clearkeycas13EcmDescriptorC2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ecm_generator::DecodeECMClearFields(android::sp<android::ABuffer> const&, android::clearkeycas::Asset*, android::clearkeycas::ecm_generator::DefaultEcmFields*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13ecm_generator20DecodeECMClearFieldsERKNS_2spINS_7ABufferEEEPNS0_5AssetEPNS1_16DefaultEcmFieldsE(void) {
    ALOGD("_ZN7android11clearkeycas13ecm_generator20DecodeECMClearFieldsERKNS_2spINS_7ABufferEEEPNS0_5AssetEPNS1_16DefaultEcmFieldsE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::IsInitialized() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas8AssetKey13IsInitializedEv(void) {
    ALOGD("_ZNK7android11clearkeycas8AssetKey13IsInitializedEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::subSamplesToString(android::DescramblerPlugin::SubSample const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin18subSamplesToStringEPKNS_17DescramblerPlugin9SubSampleEj(void) {
    ALOGD("_ZNK7android11clearkeycas25ClearKeyDescramblerPlugin18subSamplesToStringEPKNS_17DescramblerPlugin9SubSampleEj() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::~ClearKeyCasSession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasSessionD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasSessionD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<android::clearkeycas::ClearKeyCasSession*, std::__1::default_delete<android::clearkeycas::ClearKeyCasSession>, std::__1::allocator<android::clearkeycas::ClearKeyCasSession> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::default_instance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey16default_instanceEv(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey16default_instanceEv() called");
    return 0;
}

/* Exported Object: scc_info_Asset_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
extern "C" __attribute__((visibility("default"))) void* scc_info_Asset_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto = NULL;

/* Demangled: android::clearkeycas::Asset::~Asset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5AssetD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas5AssetD1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeySessionLibrary::ClearKeySessionLibrary() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeySessionLibraryC1Ev(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeySessionLibraryC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::InternalSwap(android::clearkeycas::Asset*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset12InternalSwapEPS1_(void) {
    ALOGD("_ZN7android11clearkeycas5Asset12InternalSwapEPS1_() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas5Asset24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void) {
    ALOGD("_ZNK7android11clearkeycas5Asset24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::closeSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin12closeSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin12closeSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasFactory::createPlugin(int, void*, void (*)(void*, int, int, unsigned char*, unsigned int), android::CasPlugin**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjEPPNS_9CasPluginE(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjEPPNS_9CasPluginE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyDescramblerFactory::isSystemIdSupported(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas26ClearKeyDescramblerFactory19isSystemIdSupportedEi(void) {
    ALOGD("_ZNK7android11clearkeycas26ClearKeyDescramblerFactory19isSystemIdSupportedEi() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyFetcher::~ClearKeyFetcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15ClearKeyFetcherD0Ev(void) {
    ALOGD("_ZN7android11clearkeycas15ClearKeyFetcherD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: jsmn_parse */
extern "C" __attribute__((visibility("default"))) int jsmn_parse(void) {
    ALOGD("jsmn_parse() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::CopyFrom(google::protobuf::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey8CopyFromERKN6google8protobuf7MessageE(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey8CopyFromERKN6google8protobuf7MessageE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeySessionLibrary::addSession(android::CasPlugin*, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeySessionLibrary10addSessionEPNS_9CasPluginEPNSt3__16vectorIhNS4_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeySessionLibrary10addSessionEPNS_9CasPluginEPNSt3__16vectorIhNS4_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::setMediaCasSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas25ClearKeyDescramblerPlugin18setMediaCasSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas25ClearKeyDescramblerPlugin18setMediaCasSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::Asset(android::clearkeycas::Asset const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5AssetC1ERKS1_(void) {
    ALOGD("_ZN7android11clearkeycas5AssetC1ERKS1_() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::CopyFrom(google::protobuf::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset8CopyFromERKN6google8protobuf7MessageE(void) {
    ALOGD("_ZN7android11clearkeycas5Asset8CopyFromERKN6google8protobuf7MessageE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::openSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEPNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEPNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor(unsigned short, android::clearkeycas::Ecm const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13EcmDescriptorC2EtRKNS0_3EcmE(void) {
    ALOGD("_ZN7android11clearkeycas13EcmDescriptorC2EtRKNS0_3EcmE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmContainer::Parse(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas12EcmContainer5ParseERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android11clearkeycas12EcmContainer5ParseERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::Ecm::Ecm() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas3EcmC1Ev(void) {
    ALOGD("_ZN7android11clearkeycas3EcmC1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::~JsonAssetLoader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoaderD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoaderD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: void google::protobuf::internal::arena_destruct_object<android::clearkeycas::AssetKey>(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas8AssetKeyEEEvPv(void) {
    ALOGD("_ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas8AssetKeyEEEvPv() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::SetCachedSize(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas8AssetKey13SetCachedSizeEi(void) {
    ALOGD("_ZNK7android11clearkeycas8AssetKey13SetCachedSizeEi() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::InitAsDefaultInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey21InitAsDefaultInstanceEv(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey21InitAsDefaultInstanceEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKey27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKey27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::setStatusCallback(void (*)(void*, int, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin17setStatusCallbackEPFvPviiE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin17setStatusCallbackEPFvPviiE() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmContainer::~EcmContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas12EcmContainerD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas12EcmContainerD1Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::~ClearKeyCasSession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasSessionD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasSessionD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor(unsigned short, android::clearkeycas::Ecm const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13EcmDescriptorC1EtRKNS0_3EcmE(void) {
    ALOGD("_ZN7android11clearkeycas13EcmDescriptorC1EtRKNS0_3EcmE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Ecm::Parse(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas3Ecm5ParseERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android11clearkeycas3Ecm5ParseERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<jsmntok_t>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI9jsmntok_tE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorI9jsmntok_tE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::MergeFrom(google::protobuf::Message const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5Asset9MergeFromERKN6google8protobuf7MessageE(void) {
    ALOGD("_ZN7android11clearkeycas5Asset9MergeFromERKN6google8protobuf7MessageE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::updateECM(android::clearkeycas::KeyFetcher*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas18ClearKeyCasSession9updateECMEPNS0_10KeyFetcherEPvj(void) {
    ALOGD("_ZN7android11clearkeycas18ClearKeyCasSession9updateECMEPNS0_10KeyFetcherEPvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyLicenseFetcher::FetchLicense(unsigned long long, android::clearkeycas::Asset*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeyLicenseFetcher12FetchLicenseEyPNS0_5AssetE(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeyLicenseFetcher12FetchLicenseEyPNS0_5AssetE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeySessionLibrary::ClearKeySessionLibrary() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeySessionLibraryC2Ev(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeySessionLibraryC2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ecm_generator::DecodeECM(android::sp<android::ABuffer> const&, android::clearkeycas::Asset*, android::sp<android::ABuffer>*, android::clearkeycas::ecm_generator::DefaultEcmFields*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas13ecm_generator9DecodeECMERKNS_2spINS_7ABufferEEEPNS0_5AssetEPS4_PNS1_16DefaultEcmFieldsE(void) {
    ALOGD("_ZN7android11clearkeycas13ecm_generator9DecodeECMERKNS_2spINS_7ABufferEEEPNS0_5AssetEPS4_PNS1_16DefaultEcmFieldsE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::~Asset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas5AssetD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas5AssetD2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeySessionLibrary::findSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeySessionLibrary11findSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeySessionLibrary11findSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasSession::decryptPayload(aes_key_st const&, unsigned int, unsigned int, char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas18ClearKeyCasSession14decryptPayloadERK10aes_key_stjjPc(void) {
    ALOGD("_ZNK7android11clearkeycas18ClearKeyCasSession14decryptPayloadERK10aes_key_stjjPc() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyFetcher::~ClearKeyFetcher() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15ClearKeyFetcherD1Ev(void) {
    ALOGD("_ZN7android11clearkeycas15ClearKeyFetcherD1Ev() called");
    return 0;
}

/* Exported Object: android::clearkeycas::_AssetKey_default_instance_ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android11clearkeycas27_AssetKey_default_instance_E = NULL;

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::clearkeycas::AssetKey::~AssetKey() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas8AssetKeyD0Ev(void) {
    ALOGD("_ZN7android11clearkeycas8AssetKeyD0Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset::ByteSizeLong() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android11clearkeycas5Asset12ByteSizeLongEv(void) {
    ALOGD("_ZNK7android11clearkeycas5Asset12ByteSizeLongEv() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::processEmm(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin10processEmmERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin10processEmmERKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::ClearKeySessionLibrary::destroyPlugin(android::CasPlugin*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas22ClearKeySessionLibrary13destroyPluginEPNS_9CasPluginE(void) {
    ALOGD("_ZN7android11clearkeycas22ClearKeySessionLibrary13destroyPluginEPNS_9CasPluginE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: android::clearkeycas::ClearKeyCasPlugin::sendEvent(int, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas17ClearKeyCasPlugin9sendEventEiiRKNSt3__16vectorIhNS2_9allocatorIhEEEE(void) {
    ALOGD("_ZN7android11clearkeycas17ClearKeyCasPlugin9sendEventEiiRKNSt3__16vectorIhNS2_9allocatorIhEEEE() called");
    return 0;
}

/* Demangled: android::clearkeycas::Ecm::Ecm() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas3EcmC2Ev(void) {
    ALOGD("_ZN7android11clearkeycas3EcmC2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::JsonAssetLoader::~JsonAssetLoader() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11clearkeycas15JsonAssetLoaderD2Ev(void) {
    ALOGD("_ZN7android11clearkeycas15JsonAssetLoaderD2Ev() called");
    return 0;
}

/* Demangled: android::clearkeycas::Asset* google::protobuf::Arena::CreateMaybeMessage<android::clearkeycas::Asset>(google::protobuf::Arena*) */
extern "C" __attribute__((visibility("default"))) int _ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas5AssetEJEEEPT_PS1_DpOT0_(void) {
    ALOGD("_ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas5AssetEJEEEPT_PS1_DpOT0_() called");
    return 0;
}
