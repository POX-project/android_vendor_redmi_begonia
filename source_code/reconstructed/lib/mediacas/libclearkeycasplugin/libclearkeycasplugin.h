/*
 * Reverse-Engineered ABI Specification for: libclearkeycasplugin.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libclearkeycasplugin.so
 */

#ifndef BEGONIA_RE_LIBCLEARKEYCASPLUGIN_H
#define BEGONIA_RE_LIBCLEARKEYCASPLUGIN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin10processEcmERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_ */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::processEcm(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin10processEcmERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPluginD0Ev */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::~ClearKeyCasPlugin() */
int _ZN7android11clearkeycas17ClearKeyCasPluginD0Ev(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasSession7decryptEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKvPvPNS_7AStringE */
/* Demangled: android::clearkeycas::ClearKeyCasSession::decrypt(bool, android::DescramblerPlugin::ScramblingControl, unsigned int, android::DescramblerPlugin::SubSample const*, void const*, void*, android::AString*) */
int _ZN7android11clearkeycas18ClearKeyCasSession7decryptEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKvPvPNS_7AStringE(void);

/* Symbol: createDescramblerFactory */
/* Demangled: createDescramblerFactory */
int createDescramblerFactory(void);

/* Symbol: _ZN7android11clearkeycas5Asset8CopyFromERKS1_ */
/* Demangled: android::clearkeycas::Asset::CopyFrom(android::clearkeycas::Asset const&) */
int _ZN7android11clearkeycas5Asset8CopyFromERKS1_(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINS0_15UnknownFieldSetENS1_25InternalMetadataWithArenaEE9ContainerEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<google::protobuf::internal::InternalMetadataWithArenaBase<google::protobuf::UnknownFieldSet, google::protobuf::internal::InternalMetadataWithArena>::Container>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectINS1_29InternalMetadataWithArenaBaseINS0_15UnknownFieldSetENS1_25InternalMetadataWithArenaEE9ContainerEEEvPv(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEjjPNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::openSession(unsigned int, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEjjPNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas26ClearKeyDescramblerFactory12createPluginEiPPNS_17DescramblerPluginE */
/* Demangled: android::clearkeycas::ClearKeyDescramblerFactory::createPlugin(int, android::DescramblerPlugin**) */
int _ZN7android11clearkeycas26ClearKeyDescramblerFactory12createPluginEiPPNS_17DescramblerPluginE(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoader7findKeyERKNS_7String8EPNS0_5AssetE */
/* Demangled: android::clearkeycas::JsonAssetLoader::findKey(android::String8 const&, android::clearkeycas::Asset*) */
int _ZN7android11clearkeycas15JsonAssetLoader7findKeyERKNS_7String8EPNS0_5AssetE(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin19refreshEntitlementsEiRKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::refreshEntitlements(int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin19refreshEntitlementsEiRKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas12EcmContainerD2Ev */
/* Demangled: android::clearkeycas::EcmContainer::~EcmContainer() */
int _ZN7android11clearkeycas12EcmContainerD2Ev(void);

/* Symbol: _ZTVN7android11clearkeycas8AssetKeyE */
/* Demangled: vtable for android::clearkeycas::AssetKey */
extern void* _ZTVN7android11clearkeycas8AssetKeyE;

/* Symbol: _ZTVN7android11clearkeycas15JsonAssetLoaderE */
/* Demangled: vtable for android::clearkeycas::JsonAssetLoader */
extern void* _ZTVN7android11clearkeycas15JsonAssetLoaderE;

/* Symbol: _ZN7android11clearkeycas8AssetKey8CopyFromERKS1_ */
/* Demangled: android::clearkeycas::AssetKey::CopyFrom(android::clearkeycas::AssetKey const&) */
int _ZN7android11clearkeycas8AssetKey8CopyFromERKS1_(void);

/* Symbol: _ZN7android11clearkeycas15ClearKeyFetcher9ObtainKeyERKNS_2spINS_7ABufferEEEPyPNSt3__16vectorINS0_10KeyFetcher7KeyInfoENS8_9allocatorISB_EEEE */
/* Demangled: android::clearkeycas::ClearKeyFetcher::ObtainKey(android::sp<android::ABuffer> const&, unsigned long long*, std::__1::vector<android::clearkeycas::KeyFetcher::KeyInfo, std::__1::allocator<android::clearkeycas::KeyFetcher::KeyInfo> >*) */
int _ZN7android11clearkeycas15ClearKeyFetcher9ObtainKeyERKNS_2spINS_7ABufferEEEPyPNSt3__16vectorINS0_10KeyFetcher7KeyInfoENS8_9allocatorISB_EEEE(void);

/* Symbol: _ZN7android11clearkeycas15ClearKeyFetcherD2Ev */
/* Demangled: android::clearkeycas::ClearKeyFetcher::~ClearKeyFetcher() */
int _ZN7android11clearkeycas15ClearKeyFetcherD2Ev(void);

/* Symbol: _ZN7android11clearkeycas3Ecm7DecryptERKNS_2spINS_7ABufferEEERKNS0_5AssetE */
/* Demangled: android::clearkeycas::Ecm::Decrypt(android::sp<android::ABuffer> const&, android::clearkeycas::Asset const&) */
int _ZN7android11clearkeycas3Ecm7DecryptERKNS_2spINS_7ABufferEEERKNS0_5AssetE(void);

/* Symbol: _ZN7android11clearkeycas5Asset21InitAsDefaultInstanceEv */
/* Demangled: android::clearkeycas::Asset::InitAsDefaultInstance() */
int _ZN7android11clearkeycas5Asset21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN7android11clearkeycas5AssetC1Ev */
/* Demangled: android::clearkeycas::Asset::Asset() */
int _ZN7android11clearkeycas5AssetC1Ev(void);

/* Symbol: _ZN7android11clearkeycas8AssetKeyD1Ev */
/* Demangled: android::clearkeycas::AssetKey::~AssetKey() */
int _ZN7android11clearkeycas8AssetKeyD1Ev(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const*)) */
int _ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoader22extractAssetFromStringERKNS_7String8EPNS0_5AssetE */
/* Demangled: android::clearkeycas::JsonAssetLoader::extractAssetFromString(android::String8 const&, android::clearkeycas::Asset*) */
int _ZN7android11clearkeycas15JsonAssetLoader22extractAssetFromStringERKNS_7String8EPNS0_5AssetE(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasSessionC1EPNS_9CasPluginE */
/* Demangled: android::clearkeycas::ClearKeyCasSession::ClearKeyCasSession(android::CasPlugin*) */
int _ZN7android11clearkeycas18ClearKeyCasSessionC1EPNS_9CasPluginE(void);

/* Symbol: _ZN7android11clearkeycas13EcmDescriptor5ParseERKNS_2spINS_7ABufferEEE */
/* Demangled: android::clearkeycas::EcmDescriptor::Parse(android::sp<android::ABuffer> const&) */
int _ZN7android11clearkeycas13EcmDescriptor5ParseERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android11clearkeycas13EcmDescriptorD1Ev */
/* Demangled: android::clearkeycas::EcmDescriptor::~EcmDescriptor() */
int _ZN7android11clearkeycas13EcmDescriptorD1Ev(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoader20parseJsonAssetStringERKNS_7String8EPNS_6VectorIS2_EE */
/* Demangled: android::clearkeycas::JsonAssetLoader::parseJsonAssetString(android::String8 const&, android::Vector<android::String8>*) */
int _ZN7android11clearkeycas15JsonAssetLoader20parseJsonAssetStringERKNS_7String8EPNS_6VectorIS2_EE(void);

/* Symbol: descriptor_table_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
/* Demangled: descriptor_table_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
extern void* descriptor_table_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto;

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_ */
/* Demangled: void std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__push_back_slow_path<unsigned char const&>(unsigned char const&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE21__push_back_slow_pathIRKhEEvOT_(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPluginD1Ev */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::~ClearKeyCasPlugin() */
int _ZN7android11clearkeycas17ClearKeyCasPluginD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas5AssetEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<android::clearkeycas::Asset>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas5AssetEEEvPv(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int)) */
int _ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjE(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoaderC1Ev */
/* Demangled: android::clearkeycas::JsonAssetLoader::JsonAssetLoader() */
int _ZN7android11clearkeycas15JsonAssetLoaderC1Ev(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibrary10sSingletonE */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::sSingleton */
extern void* _ZN7android11clearkeycas22ClearKeySessionLibrary10sSingletonE;

/* Symbol: _ZN7android11clearkeycas24Asset_CasType_descriptorEv */
/* Demangled: android::clearkeycas::Asset_CasType_descriptor() */
int _ZN7android11clearkeycas24Asset_CasType_descriptorEv(void);

/* Symbol: _ZTVN7android11clearkeycas18ClearKeyCasFactoryE */
/* Demangled: vtable for android::clearkeycas::ClearKeyCasFactory */
extern void* _ZTVN7android11clearkeycas18ClearKeyCasFactoryE;

/* Symbol: _ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE7do_copyEPvPKvj(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas8AssetKeyEJEEEPT_PS1_DpOT0_ */
/* Demangled: android::clearkeycas::AssetKey* google::protobuf::Arena::CreateMaybeMessage<android::clearkeycas::AssetKey>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas8AssetKeyEJEEEPT_PS1_DpOT0_(void);

/* Symbol: _ZN7android11clearkeycas5Asset16default_instanceEv */
/* Demangled: android::clearkeycas::Asset::default_instance() */
int _ZN7android11clearkeycas5Asset16default_instanceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_compareEPKvSE_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_compareEPKvSE_(void);

/* Symbol: _ZN7android11clearkeycas5Asset9MergeFromERKS1_ */
/* Demangled: android::clearkeycas::Asset::MergeFrom(android::clearkeycas::Asset const&) */
int _ZN7android11clearkeycas5Asset9MergeFromERKS1_(void);

/* Symbol: _ZNK7android11clearkeycas8AssetKey39InternalSerializeWithCachedSizesToArrayEPh */
/* Demangled: android::clearkeycas::AssetKey::InternalSerializeWithCachedSizesToArray(unsigned char*) const */
int _ZNK7android11clearkeycas8AssetKey39InternalSerializeWithCachedSizesToArrayEPh(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibrary3getEv */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::get() */
int _ZN7android11clearkeycas22ClearKeySessionLibrary3getEv(void);

/* Symbol: _ZTVN7android11clearkeycas17ClearKeyCasPluginE */
/* Demangled: vtable for android::clearkeycas::ClearKeyCasPlugin */
extern void* _ZTVN7android11clearkeycas17ClearKeyCasPluginE;

/* Symbol: _ZTVN7android11clearkeycas25ClearKeyDescramblerPluginE */
/* Demangled: vtable for android::clearkeycas::ClearKeyDescramblerPlugin */
extern void* _ZTVN7android11clearkeycas25ClearKeyDescramblerPluginE;

/* Symbol: _ZN7android11clearkeycas12EcmContainerC1Ev */
/* Demangled: android::clearkeycas::EcmContainer::EcmContainer() */
int _ZN7android11clearkeycas12EcmContainerC1Ev(void);

/* Symbol: _ZN7android11clearkeycas15ClearKeyFetcherC2ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE */
/* Demangled: android::clearkeycas::ClearKeyFetcher::ClearKeyFetcher(std::__1::unique_ptr<android::clearkeycas::LicenseFetcher, std::__1::default_delete<android::clearkeycas::LicenseFetcher> >) */
int _ZN7android11clearkeycas15ClearKeyFetcherC2ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE(void);

/* Symbol: _ZN7android11clearkeycas21Asset_CasType_IsValidEi */
/* Demangled: android::clearkeycas::Asset_CasType_IsValid(int) */
int _ZN7android11clearkeycas21Asset_CasType_IsValidEi(void);

/* Symbol: _ZNK7android11clearkeycas5Asset39InternalSerializeWithCachedSizesToArrayEPh */
/* Demangled: android::clearkeycas::Asset::InternalSerializeWithCachedSizesToArray(unsigned char*) const */
int _ZNK7android11clearkeycas5Asset39InternalSerializeWithCachedSizesToArrayEPh(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<android::clearkeycas::ClearKeyCasSession*, std::__1::default_delete<android::clearkeycas::ClearKeyCasSession>, std::__1::allocator<android::clearkeycas::ClearKeyCasSession> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEEE;

/* Symbol: _ZN7android11clearkeycas5AssetC2Ev */
/* Demangled: android::clearkeycas::Asset::Asset() */
int _ZN7android11clearkeycas5AssetC2Ev(void);

/* Symbol: _ZN7android11clearkeycas8AssetKeyD2Ev */
/* Demangled: android::clearkeycas::AssetKey::~AssetKey() */
int _ZN7android11clearkeycas8AssetKeyD2Ev(void);

/* Symbol: _ZNK7android11clearkeycas8AssetKey11GetMetadataEv */
/* Demangled: android::clearkeycas::AssetKey::GetMetadata() const */
int _ZNK7android11clearkeycas8AssetKey11GetMetadataEv(void);

/* Symbol: _ZTVN7android11clearkeycas5AssetE */
/* Demangled: vtable for android::clearkeycas::Asset */
extern void* _ZTVN7android11clearkeycas5AssetE;

/* Symbol: scc_info_AssetKey_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
/* Demangled: scc_info_AssetKey_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
extern void* scc_info_AssetKey_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto;

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const*)) */
int _ZN7android11clearkeycas17ClearKeyCasPluginC1EPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEE(void);

/* Symbol: _ZN7android11clearkeycas13EcmDescriptorD2Ev */
/* Demangled: android::clearkeycas::EcmDescriptor::~EcmDescriptor() */
int _ZN7android11clearkeycas13EcmDescriptorD2Ev(void);

/* Symbol: _ZN7android11clearkeycas24_Asset_default_instance_E */
/* Demangled: android::clearkeycas::_Asset_default_instance_ */
extern void* _ZN7android11clearkeycas24_Asset_default_instance_E;

/* Symbol: _ZN7android11clearkeycas8AssetKey5ClearEv */
/* Demangled: android::clearkeycas::AssetKey::Clear() */
int _ZN7android11clearkeycas8AssetKey5ClearEv(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::ClearKeyCasPlugin(void*, void (*)(void*, int, int, unsigned char*, unsigned int)) */
int _ZN7android11clearkeycas17ClearKeyCasPluginC2EPvPFvS2_iiPhjE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin16sendSessionEventERKNSt3__16vectorIhNS2_9allocatorIhEEEEiiS8_ */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::sendSessionEvent(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, int, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin16sendSessionEventERKNSt3__16vectorIhNS2_9allocatorIhEEEEiiS8_(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPluginD2Ev */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::~ClearKeyCasPlugin() */
int _ZN7android11clearkeycas17ClearKeyCasPluginD2Ev(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibrary14destroySessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::destroySession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas22ClearKeySessionLibrary14destroySessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin30requiresSecureDecoderComponentEPKc */
/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::requiresSecureDecoderComponent(char const*) const */
int _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin30requiresSecureDecoderComponentEPKc(void);

/* Symbol: _ZN7android11clearkeycas12EcmContainer3AddERKNS0_13EcmDescriptorE */
/* Demangled: android::clearkeycas::EcmContainer::Add(android::clearkeycas::EcmDescriptor const&) */
int _ZN7android11clearkeycas12EcmContainer3AddERKNS0_13EcmDescriptorE(void);

/* Symbol: _ZN7android11clearkeycas5Asset9_Internal9asset_keyEPKS1_ */
/* Demangled: android::clearkeycas::Asset::_Internal::asset_key(android::clearkeycas::Asset const*) */
int _ZN7android11clearkeycas5Asset9_Internal9asset_keyEPKS1_(void);

/* Symbol: _ZN7android11clearkeycas8AssetKeyC2ERKS1_ */
/* Demangled: android::clearkeycas::AssetKey::AssetKey(android::clearkeycas::AssetKey const&) */
int _ZN7android11clearkeycas8AssetKeyC2ERKS1_(void);

/* Symbol: _ZTVN7android11clearkeycas26ClearKeyDescramblerFactoryE */
/* Demangled: vtable for android::clearkeycas::ClearKeyDescramblerFactory */
extern void* _ZTVN7android11clearkeycas26ClearKeyDescramblerFactoryE;

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoaderC2Ev */
/* Demangled: android::clearkeycas::JsonAssetLoader::JsonAssetLoader() */
int _ZN7android11clearkeycas15JsonAssetLoaderC2Ev(void);

/* Symbol: jsmn_init */
/* Demangled: jsmn_init */
int jsmn_init(void);

/* Symbol: _ZNK7android11clearkeycas5Asset13IsInitializedEv */
/* Demangled: android::clearkeycas::Asset::IsInitialized() const */
int _ZNK7android11clearkeycas5Asset13IsInitializedEv(void);

/* Symbol: _ZN7android11clearkeycas15ClearKeyFetcherC1ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE */
/* Demangled: android::clearkeycas::ClearKeyFetcher::ClearKeyFetcher(std::__1::unique_ptr<android::clearkeycas::LicenseFetcher, std::__1::default_delete<android::clearkeycas::LicenseFetcher> >) */
int _ZN7android11clearkeycas15ClearKeyFetcherC1ENSt3__110unique_ptrINS0_14LicenseFetcherENS2_14default_deleteIS4_EEEE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorI9jsmntok_tEE */
/* Demangled: vtable for android::Vector<jsmntok_t> */
extern void* _ZTVN7android6VectorI9jsmntok_tEE;

/* Symbol: _ZN7android11clearkeycas8AssetKey12InternalSwapEPS1_ */
/* Demangled: android::clearkeycas::AssetKey::InternalSwap(android::clearkeycas::AssetKey*) */
int _ZN7android11clearkeycas8AssetKey12InternalSwapEPS1_(void);

/* Symbol: _ZN7android11clearkeycas8AssetKey9MergeFromERKS1_ */
/* Demangled: android::clearkeycas::AssetKey::MergeFrom(android::clearkeycas::AssetKey const&) */
int _ZN7android11clearkeycas8AssetKey9MergeFromERKS1_(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin21setSessionPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_ */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::setSessionPrivateData(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin21setSessionPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEES8_(void);

/* Symbol: _ZN7android11clearkeycas12EcmContainerC2Ev */
/* Demangled: android::clearkeycas::EcmContainer::EcmContainer() */
int _ZN7android11clearkeycas12EcmContainerC2Ev(void);

/* Symbol: _ZN7android11clearkeycas3EcmD1Ev */
/* Demangled: android::clearkeycas::Ecm::~Ecm() */
int _ZN7android11clearkeycas3EcmD1Ev(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoader18decodeBase64StringERKNS_7String8E */
/* Demangled: android::clearkeycas::JsonAssetLoader::decodeBase64String(android::String8 const&) */
int _ZN7android11clearkeycas15JsonAssetLoader18decodeBase64StringERKNS_7String8E(void);

/* Symbol: createCasFactory */
/* Demangled: createCasFactory */
int createCasFactory(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<android::clearkeycas::ClearKeyCasSession*, std::__1::default_delete<android::clearkeycas::ClearKeyCasSession>, std::__1::allocator<android::clearkeycas::ClearKeyCasSession> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN7android11clearkeycas8AssetKey9MergeFromERKN6google8protobuf7MessageE */
/* Demangled: android::clearkeycas::AssetKey::MergeFrom(google::protobuf::Message const&) */
int _ZN7android11clearkeycas8AssetKey9MergeFromERKN6google8protobuf7MessageE(void);

/* Symbol: _ZN7android11clearkeycas8AssetKeyC1ERKS1_ */
/* Demangled: android::clearkeycas::AssetKey::AssetKey(android::clearkeycas::AssetKey const&) */
int _ZN7android11clearkeycas8AssetKeyC1ERKS1_(void);

/* Symbol: _ZNK7android11clearkeycas18ClearKeyCasFactory19isSystemIdSupportedEi */
/* Demangled: android::clearkeycas::ClearKeyCasFactory::isSystemIdSupported(int) const */
int _ZNK7android11clearkeycas18ClearKeyCasFactory19isSystemIdSupportedEi(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoader9findValueERKNS_7String8EPS2_ */
/* Demangled: android::clearkeycas::JsonAssetLoader::findValue(android::String8 const&, android::String8*) */
int _ZN7android11clearkeycas15JsonAssetLoader9findValueERKNS_7String8EPS2_(void);

/* Symbol: _ZN101TableStruct_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto7offsetsE */
/* Demangled: TableStruct_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto::offsets */
extern void* _ZN101TableStruct_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto7offsetsE;

/* Symbol: _ZN7android11clearkeycas8AssetKeyC1Ev */
/* Demangled: android::clearkeycas::AssetKey::AssetKey() */
int _ZN7android11clearkeycas8AssetKeyC1Ev(void);

/* Symbol: _ZNK7android11clearkeycas5Asset13SetCachedSizeEi */
/* Demangled: android::clearkeycas::Asset::SetCachedSize(int) const */
int _ZNK7android11clearkeycas5Asset13SetCachedSizeEi(void);

/* Symbol: _ZN7android11clearkeycas25ClearKeyDescramblerPlugin10descrambleEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKviPviPNS_7AStringE */
/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::descramble(bool, android::DescramblerPlugin::ScramblingControl, unsigned int, android::DescramblerPlugin::SubSample const*, void const*, int, void*, int, android::AString*) */
int _ZN7android11clearkeycas25ClearKeyDescramblerPlugin10descrambleEbNS_17DescramblerPlugin17ScramblingControlEjPKNS2_9SubSampleEPKviPviPNS_7AStringE(void);

/* Symbol: _ZN7android11clearkeycas13EcmDescriptorC1Ev */
/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor() */
int _ZN7android11clearkeycas13EcmDescriptorC1Ev(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEEPPNS_9CasPluginE */
/* Demangled: android::clearkeycas::ClearKeyCasFactory::createPlugin(int, void*, void (*)(void*, int, int, unsigned char*, unsigned int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const*), android::CasPlugin**) */
int _ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjPKNSt3__16vectorIhNS4_9allocatorIhEEEEEPPNS_9CasPluginE(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasSessionD0Ev */
/* Demangled: android::clearkeycas::ClearKeyCasSession::~ClearKeyCasSession() */
int _ZN7android11clearkeycas18ClearKeyCasSessionD0Ev(void);

/* Symbol: _ZN7android11clearkeycas5Asset27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: android::clearkeycas::Asset::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN7android11clearkeycas5Asset27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZNK7android11clearkeycas18ClearKeyCasFactory12queryPluginsEPNSt3__16vectorINS_19CasPluginDescriptorENS2_9allocatorIS4_EEEE */
/* Demangled: android::clearkeycas::ClearKeyCasFactory::queryPlugins(std::__1::vector<android::CasPluginDescriptor, std::__1::allocator<android::CasPluginDescriptor> >*) const */
int _ZNK7android11clearkeycas18ClearKeyCasFactory12queryPluginsEPNSt3__16vectorINS_19CasPluginDescriptorENS2_9allocatorIS4_EEEE(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasSessionC2EPNS_9CasPluginE */
/* Demangled: android::clearkeycas::ClearKeyCasSession::ClearKeyCasSession(android::CasPlugin*) */
int _ZN7android11clearkeycas18ClearKeyCasSessionC2EPNS_9CasPluginE(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoader15parseJsonObjectERKNS_7String8EPNS_6VectorIS2_EE */
/* Demangled: android::clearkeycas::JsonAssetLoader::parseJsonObject(android::String8 const&, android::Vector<android::String8>*) */
int _ZN7android11clearkeycas15JsonAssetLoader15parseJsonObjectERKNS_7String8EPNS_6VectorIS2_EE(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN7android11clearkeycas5AssetD0Ev */
/* Demangled: android::clearkeycas::Asset::~Asset() */
int _ZN7android11clearkeycas5AssetD0Ev(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin9provisionERKNS_7String8E */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::provision(android::String8 const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin9provisionERKNS_7String8E(void);

/* Symbol: _ZTVN7android11clearkeycas22ClearKeyLicenseFetcherE */
/* Demangled: vtable for android::clearkeycas::ClearKeyLicenseFetcher */
extern void* _ZTVN7android11clearkeycas22ClearKeyLicenseFetcherE;

/* Symbol: _ZN7android11clearkeycas3EcmD2Ev */
/* Demangled: android::clearkeycas::Ecm::~Ecm() */
int _ZN7android11clearkeycas3EcmD2Ev(void);

/* Symbol: _ZNK7android11clearkeycas8AssetKey12ByteSizeLongEv */
/* Demangled: android::clearkeycas::AssetKey::ByteSizeLong() const */
int _ZNK7android11clearkeycas8AssetKey12ByteSizeLongEv(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin14setPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::setPrivateData(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin14setPrivateDataERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas5Asset5ClearEv */
/* Demangled: android::clearkeycas::Asset::Clear() */
int _ZN7android11clearkeycas5Asset5ClearEv(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeyLicenseFetcher4InitEPKc */
/* Demangled: android::clearkeycas::ClearKeyLicenseFetcher::Init(char const*) */
int _ZN7android11clearkeycas22ClearKeyLicenseFetcher4InitEPKc(void);

/* Symbol: _ZNK7android11clearkeycas5Asset11GetMetadataEv */
/* Demangled: android::clearkeycas::Asset::GetMetadata() const */
int _ZNK7android11clearkeycas5Asset11GetMetadataEv(void);

/* Symbol: _ZNSt3__16vectorIN7android11clearkeycas10KeyFetcher7KeyInfoENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<android::clearkeycas::KeyFetcher::KeyInfo, std::__1::allocator<android::clearkeycas::KeyFetcher::KeyInfo> >::__append(unsigned int) */
int _ZNSt3__16vectorIN7android11clearkeycas10KeyFetcher7KeyInfoENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZTVN7android11clearkeycas15ClearKeyFetcherE */
/* Demangled: vtable for android::clearkeycas::ClearKeyFetcher */
extern void* _ZTVN7android11clearkeycas15ClearKeyFetcherE;

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoaderD0Ev */
/* Demangled: android::clearkeycas::JsonAssetLoader::~JsonAssetLoader() */
int _ZN7android11clearkeycas15JsonAssetLoaderD0Ev(void);

/* Symbol: _ZN7android11clearkeycas17TpBlockCtsDecryptERK10aes_key_stjPc */
/* Demangled: android::clearkeycas::TpBlockCtsDecrypt(aes_key_st const&, unsigned int, char*) */
int _ZN7android11clearkeycas17TpBlockCtsDecryptERK10aes_key_stjPc(void);

/* Symbol: _ZTVN7android11clearkeycas18ClearKeyCasSessionE */
/* Demangled: vtable for android::clearkeycas::ClearKeyCasSession */
extern void* _ZTVN7android11clearkeycas18ClearKeyCasSessionE;

/* Symbol: _ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj */
/* Demangled: android::Vector<jsmntok_t>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android11clearkeycas5AssetC2ERKS1_ */
/* Demangled: android::clearkeycas::Asset::Asset(android::clearkeycas::Asset const&) */
int _ZN7android11clearkeycas5AssetC2ERKS1_(void);

/* Symbol: _ZN7android11clearkeycas8AssetKeyC2Ev */
/* Demangled: android::clearkeycas::AssetKey::AssetKey() */
int _ZN7android11clearkeycas8AssetKeyC2Ev(void);

/* Symbol: _ZNK7android11clearkeycas8AssetKey24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: android::clearkeycas::AssetKey::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK7android11clearkeycas8AssetKey24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin13arrayToStringEPKhj */
/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::arrayToString(unsigned char const*, unsigned int) const */
int _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin13arrayToStringEPKhj(void);

/* Symbol: _ZNSt3__16vectorIN7android19CasPluginDescriptorENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<android::CasPluginDescriptor, std::__1::allocator<android::CasPluginDescriptor> >::__push_back_slow_path<android::CasPluginDescriptor>(android::CasPluginDescriptor&&) */
int _ZNSt3__16vectorIN7android19CasPluginDescriptorENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN7android11clearkeycas15ClearKeyFetcher4InitEv */
/* Demangled: android::clearkeycas::ClearKeyFetcher::Init() */
int _ZN7android11clearkeycas15ClearKeyFetcher4InitEv(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibrary14sSingletonLockE */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::sSingletonLock */
extern void* _ZN7android11clearkeycas22ClearKeySessionLibrary14sSingletonLockE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEEE;

/* Symbol: _ZN7android11clearkeycas13EcmDescriptorC2Ev */
/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor() */
int _ZN7android11clearkeycas13EcmDescriptorC2Ev(void);

/* Symbol: _ZN7android11clearkeycas13ecm_generator20DecodeECMClearFieldsERKNS_2spINS_7ABufferEEEPNS0_5AssetEPNS1_16DefaultEcmFieldsE */
/* Demangled: android::clearkeycas::ecm_generator::DecodeECMClearFields(android::sp<android::ABuffer> const&, android::clearkeycas::Asset*, android::clearkeycas::ecm_generator::DefaultEcmFields*) */
int _ZN7android11clearkeycas13ecm_generator20DecodeECMClearFieldsERKNS_2spINS_7ABufferEEEPNS0_5AssetEPNS1_16DefaultEcmFieldsE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android11clearkeycas8AssetKey13IsInitializedEv */
/* Demangled: android::clearkeycas::AssetKey::IsInitialized() const */
int _ZNK7android11clearkeycas8AssetKey13IsInitializedEv(void);

/* Symbol: _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin18subSamplesToStringEPKNS_17DescramblerPlugin9SubSampleEj */
/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::subSamplesToString(android::DescramblerPlugin::SubSample const*, unsigned int) const */
int _ZNK7android11clearkeycas25ClearKeyDescramblerPlugin18subSamplesToStringEPKNS_17DescramblerPlugin9SubSampleEj(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasSessionD1Ev */
/* Demangled: android::clearkeycas::ClearKeyCasSession::~ClearKeyCasSession() */
int _ZN7android11clearkeycas18ClearKeyCasSessionD1Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<android::clearkeycas::ClearKeyCasSession*, std::__1::default_delete<android::clearkeycas::ClearKeyCasSession>, std::__1::allocator<android::clearkeycas::ClearKeyCasSession> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN7android11clearkeycas18ClearKeyCasSessionENS_14default_deleteIS3_EENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN7android11clearkeycas8AssetKey16default_instanceEv */
/* Demangled: android::clearkeycas::AssetKey::default_instance() */
int _ZN7android11clearkeycas8AssetKey16default_instanceEv(void);

/* Symbol: scc_info_Asset_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
/* Demangled: scc_info_Asset_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto */
extern void* scc_info_Asset_frameworks_2fav_2fdrm_2fmediacas_2fplugins_2fclearkey_2fprotos_2flicense_5fprotos_2eproto;

/* Symbol: _ZN7android11clearkeycas5AssetD1Ev */
/* Demangled: android::clearkeycas::Asset::~Asset() */
int _ZN7android11clearkeycas5AssetD1Ev(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibraryC1Ev */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::ClearKeySessionLibrary() */
int _ZN7android11clearkeycas22ClearKeySessionLibraryC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj */
/* Demangled: android::Vector<jsmntok_t>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE10do_destroyEPvj(void);

/* Symbol: _ZN7android11clearkeycas5Asset12InternalSwapEPS1_ */
/* Demangled: android::clearkeycas::Asset::InternalSwap(android::clearkeycas::Asset*) */
int _ZN7android11clearkeycas5Asset12InternalSwapEPS1_(void);

/* Symbol: _ZNK7android11clearkeycas5Asset24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE */
/* Demangled: android::clearkeycas::Asset::SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream*) const */
int _ZNK7android11clearkeycas5Asset24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin12closeSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::closeSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin12closeSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjEPPNS_9CasPluginE */
/* Demangled: android::clearkeycas::ClearKeyCasFactory::createPlugin(int, void*, void (*)(void*, int, int, unsigned char*, unsigned int), android::CasPlugin**) */
int _ZN7android11clearkeycas18ClearKeyCasFactory12createPluginEiPvPFvS2_iiPhjEPPNS_9CasPluginE(void);

/* Symbol: _ZNK7android11clearkeycas26ClearKeyDescramblerFactory19isSystemIdSupportedEi */
/* Demangled: android::clearkeycas::ClearKeyDescramblerFactory::isSystemIdSupported(int) const */
int _ZNK7android11clearkeycas26ClearKeyDescramblerFactory19isSystemIdSupportedEi(void);

/* Symbol: _ZN7android11clearkeycas15ClearKeyFetcherD0Ev */
/* Demangled: android::clearkeycas::ClearKeyFetcher::~ClearKeyFetcher() */
int _ZN7android11clearkeycas15ClearKeyFetcherD0Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvj(void);

/* Symbol: jsmn_parse */
/* Demangled: jsmn_parse */
int jsmn_parse(void);

/* Symbol: _ZN7android11clearkeycas8AssetKey8CopyFromERKN6google8protobuf7MessageE */
/* Demangled: android::clearkeycas::AssetKey::CopyFrom(google::protobuf::Message const&) */
int _ZN7android11clearkeycas8AssetKey8CopyFromERKN6google8protobuf7MessageE(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibrary10addSessionEPNS_9CasPluginEPNSt3__16vectorIhNS4_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::addSession(android::CasPlugin*, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) */
int _ZN7android11clearkeycas22ClearKeySessionLibrary10addSessionEPNS_9CasPluginEPNSt3__16vectorIhNS4_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas25ClearKeyDescramblerPlugin18setMediaCasSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyDescramblerPlugin::setMediaCasSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas25ClearKeyDescramblerPlugin18setMediaCasSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas5AssetC1ERKS1_ */
/* Demangled: android::clearkeycas::Asset::Asset(android::clearkeycas::Asset const&) */
int _ZN7android11clearkeycas5AssetC1ERKS1_(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvj */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvj(void);

/* Symbol: _ZN7android11clearkeycas5Asset8CopyFromERKN6google8protobuf7MessageE */
/* Demangled: android::clearkeycas::Asset::CopyFrom(google::protobuf::Message const&) */
int _ZN7android11clearkeycas5Asset8CopyFromERKN6google8protobuf7MessageE(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEPNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::openSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >*) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin11openSessionEPNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas13EcmDescriptorC2EtRKNS0_3EcmE */
/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor(unsigned short, android::clearkeycas::Ecm const&) */
int _ZN7android11clearkeycas13EcmDescriptorC2EtRKNS0_3EcmE(void);

/* Symbol: _ZN7android11clearkeycas12EcmContainer5ParseERKNS_2spINS_7ABufferEEE */
/* Demangled: android::clearkeycas::EcmContainer::Parse(android::sp<android::ABuffer> const&) */
int _ZN7android11clearkeycas12EcmContainer5ParseERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN7android11clearkeycas3EcmC1Ev */
/* Demangled: android::clearkeycas::Ecm::Ecm() */
int _ZN7android11clearkeycas3EcmC1Ev(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoaderD1Ev */
/* Demangled: android::clearkeycas::JsonAssetLoader::~JsonAssetLoader() */
int _ZN7android11clearkeycas15JsonAssetLoaderD1Ev(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvj */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvj(void);

/* Symbol: _ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas8AssetKeyEEEvPv */
/* Demangled: void google::protobuf::internal::arena_destruct_object<android::clearkeycas::AssetKey>(void*) */
int _ZN6google8protobuf8internal21arena_destruct_objectIN7android11clearkeycas8AssetKeyEEEvPv(void);

/* Symbol: _ZNK7android11clearkeycas8AssetKey13SetCachedSizeEi */
/* Demangled: android::clearkeycas::AssetKey::SetCachedSize(int) const */
int _ZNK7android11clearkeycas8AssetKey13SetCachedSizeEi(void);

/* Symbol: _ZN7android11clearkeycas8AssetKey21InitAsDefaultInstanceEv */
/* Demangled: android::clearkeycas::AssetKey::InitAsDefaultInstance() */
int _ZN7android11clearkeycas8AssetKey21InitAsDefaultInstanceEv(void);

/* Symbol: _ZN7android11clearkeycas8AssetKey27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE */
/* Demangled: android::clearkeycas::AssetKey::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream*) */
int _ZN7android11clearkeycas8AssetKey27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin17setStatusCallbackEPFvPviiE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::setStatusCallback(void (*)(void*, int, int)) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin17setStatusCallbackEPFvPviiE(void);

/* Symbol: _ZN7android11clearkeycas12EcmContainerD1Ev */
/* Demangled: android::clearkeycas::EcmContainer::~EcmContainer() */
int _ZN7android11clearkeycas12EcmContainerD1Ev(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasSessionD2Ev */
/* Demangled: android::clearkeycas::ClearKeyCasSession::~ClearKeyCasSession() */
int _ZN7android11clearkeycas18ClearKeyCasSessionD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::shared_ptr<android::clearkeycas::ClearKeyCasSession> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__16vectorIhNS2_9allocatorIhEEEENS2_10shared_ptrINS_11clearkeycas18ClearKeyCasSessionEEEEEE12do_constructEPvj(void);

/* Symbol: _ZN7android11clearkeycas13EcmDescriptorC1EtRKNS0_3EcmE */
/* Demangled: android::clearkeycas::EcmDescriptor::EcmDescriptor(unsigned short, android::clearkeycas::Ecm const&) */
int _ZN7android11clearkeycas13EcmDescriptorC1EtRKNS0_3EcmE(void);

/* Symbol: _ZN7android11clearkeycas3Ecm5ParseERKNS_2spINS_7ABufferEEE */
/* Demangled: android::clearkeycas::Ecm::Parse(android::sp<android::ABuffer> const&) */
int _ZN7android11clearkeycas3Ecm5ParseERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZNK7android6VectorI9jsmntok_tE12do_constructEPvj */
/* Demangled: android::Vector<jsmntok_t>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorI9jsmntok_tE12do_constructEPvj(void);

/* Symbol: _ZN7android11clearkeycas5Asset9MergeFromERKN6google8protobuf7MessageE */
/* Demangled: android::clearkeycas::Asset::MergeFrom(google::protobuf::Message const&) */
int _ZN7android11clearkeycas5Asset9MergeFromERKN6google8protobuf7MessageE(void);

/* Symbol: _ZN7android11clearkeycas18ClearKeyCasSession9updateECMEPNS0_10KeyFetcherEPvj */
/* Demangled: android::clearkeycas::ClearKeyCasSession::updateECM(android::clearkeycas::KeyFetcher*, void*, unsigned int) */
int _ZN7android11clearkeycas18ClearKeyCasSession9updateECMEPNS0_10KeyFetcherEPvj(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeyLicenseFetcher12FetchLicenseEyPNS0_5AssetE */
/* Demangled: android::clearkeycas::ClearKeyLicenseFetcher::FetchLicense(unsigned long long, android::clearkeycas::Asset*) */
int _ZN7android11clearkeycas22ClearKeyLicenseFetcher12FetchLicenseEyPNS0_5AssetE(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibraryC2Ev */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::ClearKeySessionLibrary() */
int _ZN7android11clearkeycas22ClearKeySessionLibraryC2Ev(void);

/* Symbol: _ZN7android11clearkeycas13ecm_generator9DecodeECMERKNS_2spINS_7ABufferEEEPNS0_5AssetEPS4_PNS1_16DefaultEcmFieldsE */
/* Demangled: android::clearkeycas::ecm_generator::DecodeECM(android::sp<android::ABuffer> const&, android::clearkeycas::Asset*, android::sp<android::ABuffer>*, android::clearkeycas::ecm_generator::DefaultEcmFields*) */
int _ZN7android11clearkeycas13ecm_generator9DecodeECMERKNS_2spINS_7ABufferEEEPNS0_5AssetEPS4_PNS1_16DefaultEcmFieldsE(void);

/* Symbol: _ZN7android11clearkeycas5AssetD2Ev */
/* Demangled: android::clearkeycas::Asset::~Asset() */
int _ZN7android11clearkeycas5AssetD2Ev(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibrary11findSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::findSession(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas22ClearKeySessionLibrary11findSessionERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZNK7android11clearkeycas18ClearKeyCasSession14decryptPayloadERK10aes_key_stjjPc */
/* Demangled: android::clearkeycas::ClearKeyCasSession::decryptPayload(aes_key_st const&, unsigned int, unsigned int, char*) const */
int _ZNK7android11clearkeycas18ClearKeyCasSession14decryptPayloadERK10aes_key_stjjPc(void);

/* Symbol: _ZN7android11clearkeycas15ClearKeyFetcherD1Ev */
/* Demangled: android::clearkeycas::ClearKeyFetcher::~ClearKeyFetcher() */
int _ZN7android11clearkeycas15ClearKeyFetcherD1Ev(void);

/* Symbol: _ZN7android11clearkeycas27_AssetKey_default_instance_E */
/* Demangled: android::clearkeycas::_AssetKey_default_instance_ */
extern void* _ZN7android11clearkeycas27_AssetKey_default_instance_E;

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android11clearkeycas8AssetKeyD0Ev */
/* Demangled: android::clearkeycas::AssetKey::~AssetKey() */
int _ZN7android11clearkeycas8AssetKeyD0Ev(void);

/* Symbol: _ZNK7android11clearkeycas5Asset12ByteSizeLongEv */
/* Demangled: android::clearkeycas::Asset::ByteSizeLong() const */
int _ZNK7android11clearkeycas5Asset12ByteSizeLongEv(void);

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin10processEmmERKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::processEmm(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin10processEmmERKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas22ClearKeySessionLibrary13destroyPluginEPNS_9CasPluginE */
/* Demangled: android::clearkeycas::ClearKeySessionLibrary::destroyPlugin(android::CasPlugin*) */
int _ZN7android11clearkeycas22ClearKeySessionLibrary13destroyPluginEPNS_9CasPluginE(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZN7android11clearkeycas17ClearKeyCasPlugin9sendEventEiiRKNSt3__16vectorIhNS2_9allocatorIhEEEE */
/* Demangled: android::clearkeycas::ClearKeyCasPlugin::sendEvent(int, int, std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZN7android11clearkeycas17ClearKeyCasPlugin9sendEventEiiRKNSt3__16vectorIhNS2_9allocatorIhEEEE(void);

/* Symbol: _ZN7android11clearkeycas3EcmC2Ev */
/* Demangled: android::clearkeycas::Ecm::Ecm() */
int _ZN7android11clearkeycas3EcmC2Ev(void);

/* Symbol: _ZN7android11clearkeycas15JsonAssetLoaderD2Ev */
/* Demangled: android::clearkeycas::JsonAssetLoader::~JsonAssetLoader() */
int _ZN7android11clearkeycas15JsonAssetLoaderD2Ev(void);

/* Symbol: _ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas5AssetEJEEEPT_PS1_DpOT0_ */
/* Demangled: android::clearkeycas::Asset* google::protobuf::Arena::CreateMaybeMessage<android::clearkeycas::Asset>(google::protobuf::Arena*) */
int _ZN6google8protobuf5Arena18CreateMaybeMessageIN7android11clearkeycas5AssetEJEEEPT_PS1_DpOT0_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCLEARKEYCASPLUGIN_H */
