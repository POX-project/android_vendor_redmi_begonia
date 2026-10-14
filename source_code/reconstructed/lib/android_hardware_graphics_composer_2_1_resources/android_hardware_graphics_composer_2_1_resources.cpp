/*
 * Reverse-Engineered Source for: android.hardware.graphics.composer@2.1-resources.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "android_hardware_graphics_composer_2_1_resources"

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
#include "android_hardware_graphics_composer_2_1_resources.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::findDisplayResourceLocked(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources25findDisplayResourceLockedEy(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources25findDisplayResourceLockedEy() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getHandle(unsigned long long, unsigned long long, unsigned int, android::hardware::graphics::composer::V2_1::hal::ComposerResources::Cache, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources9getHandleEyyjNS5_5CacheEbPK13native_handlePS9_PNS5_14ReplacedHandleE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources9getHandleEyyjNS5_5CacheEbPK13native_handlePS9_PNS5_14ReplacedHandleE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter4initEv(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter4initEv() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::initClientTargetCache(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource21initClientTargetCacheEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource21initClientTargetCacheEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getLayerBuffer(unsigned long long, unsigned long long, unsigned int, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources14getLayerBufferEyyjbPK13native_handlePS8_PNS5_14ReplacedHandleE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources14getLayerBufferEyyjbPK13native_handlePS8_PNS5_14ReplacedHandleE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::createDisplayResource(android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::DisplayType, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources21createDisplayResourceENS4_23ComposerDisplayResource11DisplayTypeEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources21createDisplayResourceENS4_23ComposerDisplayResource11DisplayTypeEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::~ComposerHandleCache() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD2Ev(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::getSidebandStream(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource17getSidebandStreamEjbPK13native_handlePS8_S9_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource17getSidebandStreamEjbPK13native_handlePS8_S9_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::addPhysicalDisplay(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources18addPhysicalDisplayEy(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources18addPhysicalDisplayEy() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::getBuffer(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource9getBufferEjbPK13native_handlePS8_S9_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResource9getBufferEjbPK13native_handlePS8_S9_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::lookupCache(unsigned int, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11lookupCacheEjPPK13native_handle(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11lookupCacheEjPPK13native_handle() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::HandleType, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::HandleType, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterENS5_10HandleTypeEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::setMustValidateState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource20setMustValidateStateEb(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource20setMustValidateStateEb() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::getLayers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9getLayersEv(void) {
    ALOGD("_ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9getLayersEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceE = NULL;

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::mustValidateDisplay(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19mustValidateDisplayEy(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19mustValidateDisplayEy() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getLayerSidebandStream(unsigned long long, unsigned long long, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getLayerSidebandStreamEyyPK13native_handlePS8_PNS5_14ReplacedHandleE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getLayerSidebandStreamEyyPK13native_handlePS8_PNS5_14ReplacedHandleE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::freeStream(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeStreamEPK13native_handle(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeStreamEPK13native_handle() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::importBuffer(native_handle const*, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importBufferEPK13native_handlePS8_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importBufferEPK13native_handlePS8_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::addLayer(unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> >) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource8addLayerEyNSt3__110unique_ptrINS4_21ComposerLayerResourceENS6_14default_deleteIS8_EEEE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource8addLayerEyNSt3__110unique_ptrINS4_21ComposerLayerResourceENS6_14default_deleteIS8_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6rehashEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::removeDisplay(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources13removeDisplayEy(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources13removeDisplayEy() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::setDisplayMustValidateState(unsigned long long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources27setDisplayMustValidateStateEyb(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources27setDisplayMustValidateStateEyb() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::getOutputBuffer(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getOutputBufferEjbPK13native_handlePS8_S9_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getOutputBufferEjbPK13native_handlePS8_S9_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::mustValidate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource12mustValidateEv(void) {
    ALOGD("_ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource12mustValidateEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::__emplace_unique_key_args<unsigned long long, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >(unsigned long long const&, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::addVirtualDisplay(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources17addVirtualDisplayEyj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources17addVirtualDisplayEyj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::initCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::HandleType, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9initCacheENS5_10HandleTypeEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9initCacheENS5_10HandleTypeEj() called");
    return 0;
}

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerResources */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_13hal17ComposerResourcesE = NULL;

/* Exported Object: vtable for android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceE = NULL;

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::init() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources4initEv(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources4initEv() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::addLayer(unsigned long long, unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources8addLayerEyyj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources8addLayerEyyj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::~ComposerHandleCache() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD1Ev(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::ComposerLayerResource(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC2ERNS4_22ComposerHandleImporterEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC2ERNS4_22ComposerHandleImporterEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::isVirtual() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9isVirtualEv(void) {
    ALOGD("_ZNK7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource9isVirtualEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::createLayerResource(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19createLayerResourceEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources19createLayerResourceEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::clear(std::__1::function<void (unsigned long long, bool, std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources5clearENSt3__18functionIFvybRKNS6_6vectorIyNS6_9allocatorIyEEEEEEE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources5clearENSt3__18functionIFvybRKNS6_6vectorIyNS6_9allocatorIyEEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource::ComposerLayerResource(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC1ERNS4_22ComposerHandleImporterEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceC1ERNS4_22ComposerHandleImporterEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::freeBuffer(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeBufferEPK13native_handle(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter10freeBufferEPK13native_handle() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::getClientTarget(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getClientTargetEjbPK13native_handlePS8_S9_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource15getClientTargetEjbPK13native_handlePS8_S9_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::removeLayer(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources11removeLayerEyy(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources11removeLayerEyy() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getDisplayClientTarget(unsigned long long, unsigned int, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayClientTargetEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayClientTargetEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::getDisplayOutputBuffer(unsigned long long, unsigned int, bool, native_handle const*, native_handle const**, android::hardware::graphics::composer::V2_1::hal::ComposerResources::ReplacedHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayOutputBufferEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources22getDisplayOutputBufferEyjbPK13native_handlePS8_PNS5_14ReplacedHandleE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC1ERNS4_22ComposerHandleImporterE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter::importStream(native_handle const*, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importStreamEPK13native_handlePS8_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal22ComposerHandleImporter12importStreamEPK13native_handlePS8_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::updateCache(unsigned int, native_handle const*, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11updateCacheEjPK13native_handlePS8_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache11updateCacheEjPK13native_handlePS8_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::getHandle(unsigned int, bool, native_handle const*, native_handle const**, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9getHandleEjbPK13native_handlePS8_S9_(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCache9getHandleEjbPK13native_handlePS8_S9_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::findLayerResource(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource17findLayerResourceEy(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource17findLayerResourceEy() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::ComposerDisplayResource(android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::DisplayType, android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC1ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC1ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::setDisplayClientTargetCacheSize(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources31setDisplayClientTargetCacheSizeEyj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources31setDisplayClientTargetCacheSizeEyj() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerResources::create() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources6createEv(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal17ComposerResources6createEv() called");
    return 0;
}

/* Demangled: std::__1::vector<native_handle const*, std::__1::allocator<native_handle const*> >::__append(unsigned int, native_handle const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPK13native_handleNS_9allocatorIS3_EEE8__appendEjRKS3_(void) {
    ALOGD("_ZNSt3__16vectorIPK13native_handleNS_9allocatorIS3_EEE8__appendEjRKS3_() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerHandleCache::ComposerHandleCache(android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterE(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal19ComposerHandleCacheC2ERNS4_22ComposerHandleImporterE() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::removeLayer(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource11removeLayerEy(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResource11removeLayerEy() called");
    return 0;
}

/* Demangled: android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::ComposerDisplayResource(android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource::DisplayType, android::hardware::graphics::composer::V2_1::hal::ComposerHandleImporter&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC2ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj(void) {
    ALOGD("_ZN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceC2ENS5_11DisplayTypeERNS4_22ComposerHandleImporterEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerLayerResource> > >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal21ComposerLayerResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeISD_PvEEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > > > >::__emplace_unique_key_args<unsigned long long, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> > >(unsigned long long const&, unsigned long long&, std::__1::unique_ptr<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource, std::__1::default_delete<android::hardware::graphics::composer::V2_1::hal::ComposerDisplayResource> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyNS_10unique_ptrIN7android8hardware8graphics8composer4V2_13hal23ComposerDisplayResourceENS_14default_deleteIS9_EEEEEENS_22__unordered_map_hasherIySD_NS_4hashIyEELb1EEENS_21__unordered_map_equalIySD_NS_8equal_toIyEELb1EEENS_9allocatorISD_EEE25__emplace_unique_key_argsIyJRySC_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISD_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}
