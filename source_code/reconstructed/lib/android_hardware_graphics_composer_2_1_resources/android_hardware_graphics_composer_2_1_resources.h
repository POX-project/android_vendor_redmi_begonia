/*
 * Reverse-Engineered ABI Specification for: android.hardware.graphics.composer@2.1-resources.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: android.hardware.graphics.composer@2.1-resources.so
 */

#ifndef BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_COMPOSER_2_1_RESOURCES_H
#define BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_COMPOSER_2_1_RESOURCES_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources25findDisplayResourceLockedEy */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::findDisplayResourceLocked(unsigned long long) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources25findDisplayResourceLockedEy(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources9getHandleEyyjNS5_5CacheEbPK13native_handlePS9_PNS5_14ReplacedHandleE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getHandle(unsigned long long, unsigned long long, unsigned int, android::hardware::graphics::composer::V2_1::hal::ComposerResources::Cache, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources9getHandleEyyjNS5_5CacheEbPK13native_handlePS9_PNS5_14ReplacedHandleE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter4initEv */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::init() */
int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter4initEv(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource21initClientTargetCacheEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::initClientTargetCache(unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource21initClientTargetCacheEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources14getLayerBufferEyyjbPK13native_handlePS8_PNS5_14ReplacedHandleE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getLayerBuffer(unsigned long long, unsigned long long, unsigned int, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources14getLayerBufferEyyjbPK13native_handlePS8_PNS5_14ReplacedHandleE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources21createDisplayResourceENS4_23ComposerDisplayResource11DisplayTypeEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::createDisplayResource(android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::DisplayType, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources21createDisplayResourceENS4_23ComposerDisplayResource11DisplayTypeEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD2Ev */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::~ComposerHandleCache() */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD2Ev(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource17getSidebandStreamEjbPK13native_handlePS8_S9_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::getSidebandStream(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource17getSidebandStreamEjbPK13native_handlePS8_S9_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources18addPhysicalDisplayEy */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::addPhysicalDisplay(unsigned long long) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources18addPhysicalDisplayEy(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource9getBufferEjbPK13native_handlePS8_S9_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::getBuffer(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource9getBufferEjbPK13native_handlePS8_S9_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11lookupCacheEjPPK13native_handle */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::lookupCache(unsigned int, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11lookupCacheEjPPK13native_handle(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::HandleType, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::HandleType, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource20setMustValidateStateEb */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::setMustValidateState(bool) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource20setMustValidateStateEb(void);

/* Symbol: _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9getLayersEv */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::getLayers() const */
int _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9getLayersEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj(void);

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource */
extern void* _ZTVN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceE;

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19mustValidateDisplayEy */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::mustValidateDisplay(unsigned long long) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19mustValidateDisplayEy(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getLayerSidebandStreamEyyPK13native_handlePS8_PNS5_14ReplacedHandleE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getLayerSidebandStream(unsigned long long, unsigned long long, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getLayerSidebandStreamEyyPK13native_handlePS8_PNS5_14ReplacedHandleE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeStreamEPK13native_handle */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::freeStream(native_handle const*) */
int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeStreamEPK13native_handle(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importBufferEPK13native_handlePS8_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::importBuffer(native_handle const*, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importBufferEPK13native_handlePS8_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource8addLayerEyNSt3__110unique_ptrINS4_21ComposerLayerResourceENS6_14default_deleteIS8_EEEE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::addLayer(unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> >) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource8addLayerEyNSt3__110unique_ptrINS4_21ComposerLayerResourceENS6_14default_deleteIS8_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources13removeDisplayEy */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::removeDisplay(unsigned long long) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources13removeDisplayEy(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources27setDisplayMustValidateStateEyb */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::setDisplayMustValidateState(unsigned long long, bool) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources27setDisplayMustValidateStateEyb(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getOutputBufferEjbPK13native_handlePS8_S9_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::getOutputBuffer(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getOutputBufferEjbPK13native_handlePS8_S9_(void);

/* Symbol: _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource12mustValidateEv */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::mustValidate() const */
int _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource12mustValidateEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::__emplace_unique_key_args<unsigned long long, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >(unsigned long long const&, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources17addVirtualDisplayEyj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::addVirtualDisplay(unsigned long long, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources17addVirtualDisplayEyj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9initCacheENS5_10HandleTypeEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::initCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::HandleType, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9initCacheENS5_10HandleTypeEj(void);

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_13hal17ComposerResourcesE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerResources */
extern void* _ZTVN7android8hardware8graphics8composer4V2_13hal17ComposerResourcesE;

/* Symbol: _ZTVN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceE */
/* Demangled: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource */
extern void* _ZTVN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceE;

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources4initEv */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::init() */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources4initEv(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources8addLayerEyyj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::addLayer(unsigned long long, unsigned long long, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources8addLayerEyyj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD1Ev */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::~ComposerHandleCache() */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD1Ev(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC2ERNS4_22ComposerHandleImporterEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::ComposerLayerResource(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC2ERNS4_22ComposerHandleImporterEj(void);

/* Symbol: _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9isVirtualEv */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::isVirtual() const */
int _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9isVirtualEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19createLayerResourceEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::createLayerResource(unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19createLayerResourceEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources5clearENSt3__18functionIFvybRKNS6_6vectorIyNS6_9allocatorIyEEEEEEE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::clear(std::__1::function<void (unsigned long long, bool, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > const&)>) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources5clearENSt3__18functionIFvybRKNS6_6vectorIyNS6_9allocatorIyEEEEEEE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC1ERNS4_22ComposerHandleImporterEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::ComposerLayerResource(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC1ERNS4_22ComposerHandleImporterEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeBufferEPK13native_handle */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::freeBuffer(native_handle const*) */
int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeBufferEPK13native_handle(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getClientTargetEjbPK13native_handlePS8_S9_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::getClientTarget(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getClientTargetEjbPK13native_handlePS8_S9_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources11removeLayerEyy */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::removeLayer(unsigned long long, unsigned long long) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources11removeLayerEyy(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayClientTargetEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getDisplayClientTarget(unsigned long long, unsigned int, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayClientTargetEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayOutputBufferEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getDisplayOutputBuffer(unsigned long long, unsigned int, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayOutputBufferEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importStreamEPK13native_handlePS8_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::importStream(native_handle const*, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importStreamEPK13native_handlePS8_(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11updateCacheEjPK13native_handlePS8_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::updateCache(unsigned int, native_handle const*, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11updateCacheEjPK13native_handlePS8_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9getHandleEjbPK13native_handlePS8_S9_ */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::getHandle(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9getHandleEjbPK13native_handlePS8_S9_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource17findLayerResourceEy */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::findLayerResource(unsigned long long) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource17findLayerResourceEy(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC1ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::ComposerDisplayResource(android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::DisplayType, android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC1ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources31setDisplayClientTargetCacheSizeEyj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::setDisplayClientTargetCacheSize(unsigned long long, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources31setDisplayClientTargetCacheSizeEyj(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources6createEv */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::create() */
int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources6createEv(void);

/* Symbol: _ZNSt3__16vectorIPK13native_handleNS_9allocatorIS3_EEE8__appendEjRKS3_ */
/* Demangled: std::__1::vector<native_handle const*, std::__1::allocator<native_handle const*> >::__append(unsigned int, native_handle const* const&) */
int _ZNSt3__16vectorIPK13native_handleNS_9allocatorIS3_EEE8__appendEjRKS3_(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterE */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&) */
int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterE(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource11removeLayerEy */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::removeLayer(unsigned long long) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource11removeLayerEy(void);

/* Symbol: _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC2ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj */
/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::ComposerDisplayResource(android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::DisplayType, android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC2ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::__emplace_unique_key_args<unsigned long long, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >(unsigned long long const&, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_(void);

__END_DECLS

#endif /* BEGONIA_RE_ANDROID_HARDWARE_GRAPHICS_COMPOSER_2_1_RESOURCES_H */
