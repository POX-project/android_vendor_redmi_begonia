/*
 * Reverse-Engineered Source for: libhwc2on1adapter.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libhwc2on1adapter"

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
#include "libhwc2on1adapter.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::HWC2On1Adapter::Display::allocateRequestedContents() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display25allocateRequestedContentsEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display25allocateRequestedContentsEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::merge(android::HWC2On1Adapter::Display::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display6Config5mergeERKS2_(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display6Config5mergeERKS2_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::HWC2On1Adapter(hwc_composer_device_1*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1AdapterC1EP21hwc_composer_device_1(void) {
    ALOGD("_ZN7android14HWC2On1AdapterC1EP21hwc_composer_device_1() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::SortLayersByZ::operator()(std::__1::shared_ptr<android::HWC2On1Adapter::Layer> const&, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter13SortLayersByZclERKNSt3__110shared_ptrINS0_5LayerEEES7_(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter13SortLayersByZclERKNSt3__110shared_ptrINS0_5LayerEEES7_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::destroyLayer(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display12destroyLayerEy(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display12destroyLayerEy() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::GetRects(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display8GetRectsEj(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display8GetRectsEj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getConfig(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display9getConfigEj(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display9getConfigEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<android_color_mode_t, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::__unordered_map_hasher<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::hash<android_color_mode_t>, true>, std::__1::__unordered_map_equal<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::equal_to<android_color_mode_t>, true>, std::__1::allocator<std::__1::__hash_value_type<android_color_mode_t, unsigned int> > >::__emplace_unique_key_args<android_color_mode_t, android_color_mode_t&, unsigned int const&>(android_color_mode_t const&, android_color_mode_t&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRS2_RKjEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRS2_RKjEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, HWC2::Composition> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC211CompositionEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC211CompositionEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, HWC2::Composition> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC211CompositionEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC211CompositionEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::__unordered_map_hasher<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::hash<android_color_mode_t>, true>, std::__1::__unordered_map_equal<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::equal_to<android_color_mode_t>, true>, std::__1::allocator<std::__1::__hash_value_type<android_color_mode_t, unsigned int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::destroyVirtualDisplay(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter21destroyVirtualDisplayEy(void) {
    ALOGD("_ZN7android14HWC2On1Adapter21destroyVirtualDisplayEy() called");
    return 0;
}

/* Exported Object: android::HWC2On1Adapter::Display::sNextId */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14HWC2On1Adapter7Display7sNextIdE = NULL;

/* Demangled: android::HWC2On1Adapter::Display::Config::getAttribute(HWC2::Attribute) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display6Config12getAttributeEN4HWC29AttributeE(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display6Config12getAttributeEN4HWC29AttributeE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, unsigned long long>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned long long> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: android::sp<android::MiniFence>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_9MiniFenceEED2Ev(void) {
    ALOGD("_ZN7android2spINS_9MiniFenceEED2Ev() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::updateTypeChanges(hwc_layer_1 const&, android::HWC2On1Adapter::Layer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display17updateTypeChangesERK11hwc_layer_1RKNS0_5LayerE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display17updateTypeChangesERK11hwc_layer_1RKNS0_5LayerE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::updateLayerRequests(hwc_layer_1 const&, android::HWC2On1Adapter::Layer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display19updateLayerRequestsERK11hwc_layer_1RKNS0_5LayerE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display19updateLayerRequestsERK11hwc_layer_1RKNS0_5LayerE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getChangedCompositionTypes(unsigned int*, unsigned long long*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display26getChangedCompositionTypesEPjPyPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display26getChangedCompositionTypesEPjPyPi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC212LayerRequestEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC212LayerRequestEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<android::MiniFence>, std::__1::allocator<android::sp<android::MiniFence> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<HWC2::Attribute, int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::__unordered_map_hasher<HWC2::Attribute, std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::hash<HWC2::Attribute>, true>, std::__1::__unordered_map_equal<HWC2::Attribute, std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::equal_to<HWC2::Attribute>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Attribute, int> > >::__emplace_unique_key_args<HWC2::Attribute, std::__1::piecewise_construct_t const&, std::__1::tuple<HWC2::Attribute const&>, std::__1::tuple<> >(HWC2::Attribute const&, std::__1::piecewise_construct_t const&, std::__1::tuple<HWC2::Attribute const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC29AttributeEiEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC29AttributeEiEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<android::MiniFence>, std::__1::allocator<android::sp<android::MiniFence> > >::__add_back_capacity(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE19__add_back_capacityEj(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE19__add_back_capacityEj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::getLayer(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter8getLayerEyy(void) {
    ALOGD("_ZN7android14HWC2On1Adapter8getLayerEyy() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned long long>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, unsigned long long>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned long long> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::doGetCapabilities(unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter17doGetCapabilitiesEPjPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter17doGetCapabilitiesEPjPi() called");
    return 0;
}

/* Exported Object: android::HWC2On1Adapter::Layer::sNextId */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14HWC2On1Adapter5Layer7sNextIdE = NULL;

/* Demangled: android::HWC2On1Adapter::Display::setColorMode(android_color_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display12setColorModeE20android_color_mode_t(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display12setColorModeE20android_color_mode_t() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::setHwc1Id(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display6Config9setHwc1IdEj(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display6Config9setHwc1IdEj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::toString(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display6Config8toStringEb(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display6Config8toStringEb() called");
    return 0;
}

/* Demangled: android::sp<android::MiniFence>& std::__1::deque<android::sp<android::MiniFence>, std::__1::allocator<android::sp<android::MiniFence> > >::emplace_back<android::MiniFence*>(android::MiniFence*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE12emplace_backIJPS3_EEERS4_DpOT_(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE12emplace_backIJPS3_EEERS4_DpOT_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setBlendMode(HWC2::BlendMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer12setBlendModeEN4HWC29BlendModeE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer12setBlendModeEN4HWC29BlendModeE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::createLayer(unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display11createLayerEPy(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display11createLayerEPy() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::prepare() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display7prepareEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display7prepareEv() called");
    return 0;
}

/* Demangled: android::dumpHWC1Message(hwc_composer_device_1*, unsigned int, hwc_display_contents_1**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15dumpHWC1MessageEP21hwc_composer_device_1jPP22hwc_display_contents_1(void) {
    ALOGD("_ZN7android15dumpHWC1MessageEP21hwc_composer_device_1jPP22hwc_display_contents_1() called");
    return 0;
}

/* Demangled: android::MiniFence::MiniFence() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9MiniFenceC1Ev(void) {
    ALOGD("_ZN7android9MiniFenceC1Ev() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::Layer(android::HWC2On1Adapter::Display&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5LayerC1ERNS0_7DisplayE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5LayerC1ERNS0_7DisplayE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getDozeSupport(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display14getDozeSupportEPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display14getDozeSupportEPi() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<HWC2::Capability, void*>*>, bool> std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::__emplace_unique_key_args<HWC2::Capability, HWC2::Capability>(HWC2::Capability const&, HWC2::Capability&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE25__emplace_unique_key_argsIS2_JS2_EEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::__unordered_map_hasher<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::hash<HWC2::Callback>, true>, std::__1::__unordered_map_equal<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::equal_to<HWC2::Callback>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo> > >::__erase_unique<HWC2::Callback>(HWC2::Callback const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIS3_EEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE14__erase_uniqueIS3_EEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::__unordered_map_hasher<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::hash<HWC2::Callback>, true>, std::__1::__unordered_map_equal<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::equal_to<HWC2::Callback>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Layer, std::__1::allocator<android::HWC2On1Adapter::Layer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter5LayerENS_9allocatorIS3_EEEE = NULL;

/* Demangled: android::HWC2On1Adapter::Layer::applyCommonState(hwc_layer_1&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer16applyCommonStateER11hwc_layer_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer16applyCommonStateER11hwc_layer_1() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setCursorPosition(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer17setCursorPositionEii(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer17setCursorPositionEii() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setBuffer(native_handle const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer9setBufferEPK13native_handlei(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer9setBufferEPK13native_handlei() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::setActiveConfig(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15setActiveConfigEj(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15setActiveConfigEj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Display(android::HWC2On1Adapter&, HWC2::DisplayType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7DisplayC2ERS0_N4HWC211DisplayTypeE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7DisplayC2ERS0_N4HWC211DisplayTypeE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::HWC2On1Adapter::~HWC2On1Adapter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1AdapterD2Ev(void) {
    ALOGD("_ZN7android14HWC2On1AdapterD2Ev() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setSidebandStream(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer17setSidebandStreamEPK13native_handle(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer17setSidebandStreamEPK13native_handle() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::populateColorModes() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display18populateColorModesEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display18populateColorModesEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::setAttribute(HWC2::Attribute, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display6Config12setAttributeEN4HWC29AttributeEi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display6Config12setAttributeEN4HWC29AttributeEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<android::MiniFence>*, std::__1::allocator<android::sp<android::MiniFence>*> >::push_back(android::sp<android::MiniFence>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEENS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEENS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::HWC2On1Adapter::Layer::setColor(hwc_color) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer8setColorE9hwc_color(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer8setColorE9hwc_color() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > >::__emplace_back_slow_path<int&, int&>(int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIiiEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRiS7_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIiiEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRiS7_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getAttribute(unsigned int, HWC2::Attribute, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display12getAttributeEjN4HWC29AttributeEPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display12getAttributeEjN4HWC29AttributeEPi() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getActiveConfig(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15getActiveConfigEPj(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15getActiveConfigEPj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<android::MiniFence>*, std::__1::allocator<android::sp<android::MiniFence>*>&>::push_back(android::sp<android::MiniFence>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEERNS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEERNS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: std::__1::vector<hwc_rect, std::__1::allocator<hwc_rect> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI8hwc_rectNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI8hwc_rectNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::prepareAllDisplays() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter18prepareAllDisplaysEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter18prepareAllDisplaysEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::createVirtualDisplay(unsigned int, unsigned int, unsigned long long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter20createVirtualDisplayEjjPy(void) {
    ALOGD("_ZN7android14HWC2On1Adapter20createVirtualDisplayEjjPy() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::HWC2On1Adapter(hwc_composer_device_1*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1AdapterC2EP21hwc_composer_device_1(void) {
    ALOGD("_ZN7android14HWC2On1AdapterC2EP21hwc_composer_device_1() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long const, HWC2::LayerRequest> >(unsigned long long const&, std::__1::pair<unsigned long long const, HWC2::LayerRequest>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC212LayerRequestEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJNS_4pairIKyS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC212LayerRequestEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJNS_4pairIKyS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Layer, std::__1::allocator<android::HWC2On1Adapter::Layer> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter5LayerENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter5LayerENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::applyCompositionType(hwc_layer_1&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer20applyCompositionTypeER11hwc_layer_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer20applyCompositionTypeER11hwc_layer_1() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getName(unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display7getNameEPjPc(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display7getNameEPjPc() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::__unordered_map_hasher<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::hash<android_color_mode_t>, true>, std::__1::__unordered_map_equal<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::equal_to<android_color_mode_t>, true>, std::__1::allocator<std::__1::__hash_value_type<android_color_mode_t, unsigned int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE6rehashEj() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<int, unsigned long long>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned long long> > >::__erase_unique<int>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<android::MiniFence>, std::__1::allocator<android::sp<android::MiniFence> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spINS1_9MiniFenceEEENS_9allocatorIS4_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getHdrCapabilities(unsigned int*, int*, float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display18getHdrCapabilitiesEPjPiPfS4_S4_(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display18getHdrCapabilitiesEPjPiPfS4_S4_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, unsigned long long>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned long long> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEj() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::shared_ptr<android::HWC2On1Adapter::Layer>, android::HWC2On1Adapter::SortLayersByZ, std::__1::allocator<std::__1::shared_ptr<android::HWC2On1Adapter::Layer> > >::destroy(std::__1::__tree_node<std::__1::shared_ptr<android::HWC2On1Adapter::Layer>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEENS3_13SortLayersByZENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEENS3_13SortLayersByZENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::setPowerMode(HWC2::PowerMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display12setPowerModeEN4HWC29PowerModeE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display12setPowerModeEN4HWC29PowerModeE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::setOutputBuffer(native_handle const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15setOutputBufferEPK13native_handlei(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15setOutputBufferEPK13native_handlei() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::getColorModeForHwc1Id(unsigned int, android_color_mode_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display6Config21getColorModeForHwc1IdEjP20android_color_mode_t(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display6Config21getColorModeForHwc1IdEjP20android_color_mode_t() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::getHwc1IdForColorMode(android_color_mode_t, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display6Config21getHwc1IdForColorModeE20android_color_mode_tPj(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display6Config21getHwc1IdForColorModeE20android_color_mode_tPj() called");
    return 0;
}

/* Demangled: void std::__1::vector<hwc_display_contents_1*, std::__1::allocator<hwc_display_contents_1*> >::__push_back_slow_path<hwc_display_contents_1*>(hwc_display_contents_1*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP22hwc_display_contents_1NS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP22hwc_display_contents_1NS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getConfigs(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display10getConfigsEPjS2_(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display10getConfigsEPjS2_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getReleaseFences(unsigned int*, unsigned long long*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display16getReleaseFencesEPjPyPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display16getReleaseFencesEPjPyPi() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned long long>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, unsigned long long>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned long long> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Display::Config, std::__1::allocator<android::HWC2On1Adapter::Display::Config> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7Display6ConfigENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7Display6ConfigENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::registerCallback(HWC2::Callback, void*, void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter16registerCallbackEN4HWC28CallbackEPvPFvvE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter16registerCallbackEN4HWC28CallbackEPvPFvvE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setZ(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer4setZEj(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer4setZEj() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<android_color_mode_t, std::__1::less<android_color_mode_t>, std::__1::allocator<android_color_mode_t> >::destroy(std::__1::__tree_node<android_color_mode_t, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI20android_color_mode_tNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE(void) {
    ALOGD("_ZNSt3__16__treeI20android_color_mode_tNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::dump(unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter4dumpEPjPc(void) {
    ALOGD("_ZN7android14HWC2On1Adapter4dumpEPjPc() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::applySolidColorState(hwc_layer_1&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer20applySolidColorStateER11hwc_layer_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer20applySolidColorStateER11hwc_layer_1() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::addReleaseFences(hwc_display_contents_1 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display16addReleaseFencesERK22hwc_display_contents_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display16addReleaseFencesERK22hwc_display_contents_1() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display4dumpEv(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display4dumpEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::__unordered_map_hasher<HWC2::Attribute, std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::hash<HWC2::Attribute>, true>, std::__1::__unordered_map_equal<HWC2::Attribute, std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::equal_to<HWC2::Attribute>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Attribute, int> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC29AttributeEiEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC29AttributeEiEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::__unordered_map_hasher<HWC2::Attribute, std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::hash<HWC2::Attribute>, true>, std::__1::__unordered_map_equal<HWC2::Attribute, std::__1::__hash_value_type<HWC2::Attribute, int>, std::__1::equal_to<HWC2::Attribute>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Attribute, int> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC29AttributeEiEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC29AttributeEiEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Display::Config, std::__1::allocator<android::HWC2On1Adapter::Display::Config> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7Display6ConfigENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7Display6ConfigENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Display, std::__1::allocator<android::HWC2On1Adapter::Display> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7DisplayENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7DisplayENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::setAllDisplays() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter14setAllDisplaysEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter14setAllDisplaysEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::getMaxVirtualDisplayCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter25getMaxVirtualDisplayCountEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter25getMaxVirtualDisplayCountEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::hwc1Hotplug(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter11hwc1HotplugEii(void) {
    ALOGD("_ZN7android14HWC2On1Adapter11hwc1HotplugEii() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setDataspace(android_dataspace_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer12setDataspaceE19android_dataspace_t(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer12setDataspaceE19android_dataspace_t() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::populateConfigs(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15populateConfigsEjj(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15populateConfigsEjj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::shared_ptr<android::HWC2On1Adapter::Layer>, android::HWC2On1Adapter::SortLayersByZ, std::__1::allocator<std::__1::shared_ptr<android::HWC2On1Adapter::Layer> > >::erase(std::__1::__tree_const_iterator<std::__1::shared_ptr<android::HWC2On1Adapter::Layer>, std::__1::__tree_node<std::__1::shared_ptr<android::HWC2On1Adapter::Layer>, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEENS3_13SortLayersByZENS_9allocatorIS5_EEE5eraseENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEENS3_13SortLayersByZENS_9allocatorIS5_EEE5eraseENS_21__tree_const_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getColorModes(unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display13getColorModesEPjPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display13getColorModesEPjPi() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::~HWC2On1Adapter() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1AdapterD1Ev(void) {
    ALOGD("_ZN7android14HWC2On1AdapterD1Ev() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::getReleaseFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter5Layer15getReleaseFenceEv(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter5Layer15getReleaseFenceEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::MiniFence::~MiniFence() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9MiniFenceD2Ev(void) {
    ALOGD("_ZN7android9MiniFenceD2Ev() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::addReleaseFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer15addReleaseFenceEi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer15addReleaseFenceEi() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::applyBufferState(hwc_layer_1&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer16applyBufferStateER11hwc_layer_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer16applyBufferStateER11hwc_layer_1() called");
    return 0;
}

/* Demangled: android::MiniFence::dup() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9MiniFence3dupEv(void) {
    ALOGD("_ZNK7android9MiniFence3dupEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter7DisplayEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter7DisplayEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setTransform(HWC2::Transform) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer12setTransformEN4HWC29TransformE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer12setTransformEN4HWC29TransformE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setVisibleRegion(hwc_region) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer16setVisibleRegionE10hwc_region(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer16setVisibleRegionE10hwc_region() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::validate(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display8validateEPjS2_(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display8validateEPjS2_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::Composition>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, HWC2::Composition> > >::__emplace_unique_key_args<unsigned long long, std::__1::pair<unsigned long long const, HWC2::Composition> >(unsigned long long const&, std::__1::pair<unsigned long long const, HWC2::Composition>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC211CompositionEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJNS_4pairIKyS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC211CompositionEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJNS_4pairIKyS3_EEEEENSH_INS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<android::MiniFence>*, std::__1::allocator<android::sp<android::MiniFence>*> >::push_front(android::sp<android::MiniFence>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEENS_9allocatorIS5_EEE10push_frontEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEENS_9allocatorIS5_EEE10push_frontEOS5_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<android::MiniFence>*, std::__1::allocator<android::sp<android::MiniFence>*>&>::push_front(android::sp<android::MiniFence>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEERNS_9allocatorIS5_EEE10push_frontERKS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spINS1_9MiniFenceEEERNS_9allocatorIS5_EEE10push_frontERKS5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<android::HWC2On1Adapter::Display::Config>, std::__1::allocator<std::__1::shared_ptr<android::HWC2On1Adapter::Display::Config> > >::__emplace_back_slow_path<std::__1::shared_ptr<android::HWC2On1Adapter::Display::Config> >(std::__1::shared_ptr<android::HWC2On1Adapter::Display::Config>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN7android14HWC2On1Adapter7Display6ConfigEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN7android14HWC2On1Adapter7Display6ConfigEEENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_() called");
    return 0;
}

/* Demangled: android::MiniFence::MiniFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9MiniFenceC2Ei(void) {
    ALOGD("_ZN7android9MiniFenceC2Ei() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::applySidebandState(hwc_layer_1&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer18applySidebandStateER11hwc_layer_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer18applySidebandStateER11hwc_layer_1() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setCompositionType(HWC2::Composition) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer18setCompositionTypeEN4HWC211CompositionE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer18setCompositionTypeEN4HWC211CompositionE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::present(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display7presentEPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display7presentEPi() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<int, long long>, std::__1::allocator<std::__1::pair<int, long long> > >::__emplace_back_slow_path<int&, long long&>(int&, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIixEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRiRxEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIixEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRiRxEEEvDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<unsigned long long, int>, std::__1::allocator<std::__1::pair<unsigned long long, int> > >::__emplace_back_slow_path<unsigned long long&, int>(unsigned long long&, int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIyiEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRyiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIyiEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRyiEEEvDpOT_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::hwc1Invalidate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter14hwc1InvalidateEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter14hwc1InvalidateEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getType(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display7getTypeEPi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display7getTypeEPi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::__unordered_map_hasher<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::hash<HWC2::Callback>, true>, std::__1::__unordered_map_equal<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::equal_to<HWC2::Callback>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::__unordered_map_hasher<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::hash<HWC2::Callback>, true>, std::__1::__unordered_map_equal<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::equal_to<HWC2::Callback>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo> > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<android_color_mode_t, std::__1::less<android_color_mode_t>, std::__1::allocator<android_color_mode_t> >::__find_equal<android_color_mode_t>(std::__1::__tree_const_iterator<android_color_mode_t, std::__1::__tree_node<android_color_mode_t, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, android_color_mode_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeI20android_color_mode_tNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_S9_EEiEERPNS_15__tree_end_nodeISB_EESC_RKT_(void) {
    ALOGD("_ZNSt3__16__treeI20android_color_mode_tNS_4lessIS1_EENS_9allocatorIS1_EEE12__find_equalIS1_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS1_PNS_11__tree_nodeIS1_S9_EEiEERPNS_15__tree_end_nodeISB_EESC_RKT_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::getDisplay(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter10getDisplayEy(void) {
    ALOGD("_ZN7android14HWC2On1Adapter10getDisplayEy() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::acceptChanges() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display13acceptChangesEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display13acceptChangesEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::addRetireFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display14addRetireFenceEi(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display14addRetireFenceEi() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::setVsyncEnabled(HWC2::Vsync) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15setVsyncEnabledEN4HWC25VsyncE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15setVsyncEnabledEN4HWC25VsyncE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::setColorTransform(android_color_transform_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display17setColorTransformE25android_color_transform_t(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display17setColorTransformE25android_color_transform_t() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getDisplayContents() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display18getDisplayContentsEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display18getDisplayContentsEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::hwc1Vsync(int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter9hwc1VsyncEix(void) {
    ALOGD("_ZN7android14HWC2On1Adapter9hwc1VsyncEix() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<unsigned long long, int>, std::__1::allocator<std::__1::pair<unsigned long long, int> > >::__emplace_back_slow_path<unsigned long long&, int&>(unsigned long long&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIyiEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRyRiEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIyiEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRyRiEEEvDpOT_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::assignHwc1LayerIds() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display18assignHwc1LayerIdsEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display18assignHwc1LayerIdsEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_22__unordered_map_hasherIjS7_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS7_NS_8equal_toIjEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Display::Config, std::__1::allocator<android::HWC2On1Adapter::Display::Config> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7Display6ConfigENS_9allocatorIS4_EEEE = NULL;

/* Demangled: android::HWC2On1Adapter::Layer::setSurfaceDamage(hwc_region) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer16setSurfaceDamageE10hwc_region(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer16setSurfaceDamageE10hwc_region() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::hasHwc1Id(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display6Config9hasHwc1IdEj(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display6Config9hasHwc1IdEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::__unordered_map_hasher<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::hash<HWC2::Callback>, true>, std::__1::__unordered_map_equal<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::equal_to<HWC2::Callback>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo> > >::__emplace_unique_key_args<HWC2::Callback, std::__1::piecewise_construct_t const&, std::__1::tuple<HWC2::Callback const&>, std::__1::tuple<> >(HWC2::Callback const&, std::__1::piecewise_construct_t const&, std::__1::tuple<HWC2::Callback const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::prepareFramebufferTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display24prepareFramebufferTargetEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display24prepareFramebufferTargetEv() called");
    return 0;
}

/* Exported Object: android::MiniFence::NO_FENCE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9MiniFence8NO_FENCEE = NULL;

/* Demangled: android::HWC2On1Adapter::Display::hasChanges() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display10hasChangesEv(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display10hasChangesEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, HWC2::LayerRequest> > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC212LayerRequestEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIyN4HWC212LayerRequestEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setSourceCrop(hwc_frect) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer13setSourceCropE9hwc_frect(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer13setSourceCropE9hwc_frect() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Config::getColorModes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display6Config13getColorModesEv(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display6Config13getColorModesEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE6rehashEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<HWC2::Capability, std::__1::hash<HWC2::Capability>, std::__1::equal_to<HWC2::Capability>, std::__1::allocator<HWC2::Capability> >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableIN4HWC210CapabilityENS_4hashIS2_EENS_8equal_toIS2_EENS_9allocatorIS2_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::__unordered_map_hasher<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::hash<HWC2::Callback>, true>, std::__1::__unordered_map_equal<HWC2::Callback, std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo>, std::__1::equal_to<HWC2::Callback>, true>, std::__1::allocator<std::__1::__hash_value_type<HWC2::Callback, android::HWC2On1Adapter::CallbackInfo> > >::__emplace_unique_key_args<HWC2::Callback, std::__1::piecewise_construct_t const&, std::__1::tuple<HWC2::Callback&&>, std::__1::tuple<> >(HWC2::Callback const&, std::__1::piecewise_construct_t const&, std::__1::tuple<HWC2::Callback&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4HWC28CallbackEN7android14HWC2On1Adapter12CallbackInfoEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> >, std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Display> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter7DisplayEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE5eraseENS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter7DisplayEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE5eraseENS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Display, std::__1::allocator<android::HWC2On1Adapter::Display> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7DisplayENS_9allocatorIS3_EEEE = NULL;

/* Demangled: android::HWC2On1Adapter::doGetFunction(HWC2::FunctionDescriptor) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter13doGetFunctionEN4HWC218FunctionDescriptorE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter13doGetFunctionEN4HWC218FunctionDescriptorE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::set(hwc_display_contents_1&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display3setER22hwc_display_contents_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display3setER22hwc_display_contents_1() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<android_color_mode_t, unsigned int>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::__unordered_map_hasher<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::hash<android_color_mode_t>, true>, std::__1::__unordered_map_equal<android_color_mode_t, std::__1::__hash_value_type<android_color_mode_t, unsigned int>, std::__1::equal_to<android_color_mode_t>, true>, std::__1::allocator<std::__1::__hash_value_type<android_color_mode_t, unsigned int> > >::__emplace_unique_key_args<android_color_mode_t, android_color_mode_t&, unsigned int&>(android_color_mode_t const&, android_color_mode_t&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRS2_RjEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeI20android_color_mode_tjEENS_22__unordered_map_hasherIS2_S3_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S3_NS_8equal_toIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRS2_RjEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: std::__1::insert_iterator<std::__1::set<android_color_mode_t, std::__1::less<android_color_mode_t>, std::__1::allocator<android_color_mode_t> > > std::__1::__set_intersection<std::__1::__less<android_color_mode_t, android_color_mode_t>&, std::__1::__tree_const_iterator<android_color_mode_t, std::__1::__tree_node<android_color_mode_t, void*>*, int>, std::__1::__tree_const_iterator<android_color_mode_t, std::__1::__tree_node<android_color_mode_t, void*>*, int>, std::__1::insert_iterator<std::__1::set<android_color_mode_t, std::__1::less<android_color_mode_t>, std::__1::allocator<android_color_mode_t> > > >(std::__1::__tree_const_iterator<android_color_mode_t, std::__1::__tree_node<android_color_mode_t, void*>*, int>, std::__1::__tree_const_iterator<android_color_mode_t, std::__1::__tree_node<android_color_mode_t, void*>*, int>, std::__1::__tree_const_iterator<android_color_mode_t, std::__1::__tree_node<android_color_mode_t, void*>*, int>, std::__1::__tree_const_iterator<android_color_mode_t, std::__1::__tree_node<android_color_mode_t, void*>*, int>, std::__1::insert_iterator<std::__1::set<android_color_mode_t, std::__1::less<android_color_mode_t>, std::__1::allocator<android_color_mode_t> > >, std::__1::__less<android_color_mode_t, android_color_mode_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__118__set_intersectionIRNS_6__lessI20android_color_mode_tS2_EENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEESA_NS_15insert_iteratorINS_3setIS2_NS_4lessIS2_EENS_9allocatorIS2_EEEEEEEET2_T0_SK_T1_SL_SJ_T_(void) {
    ALOGD("_ZNSt3__118__set_intersectionIRNS_6__lessI20android_color_mode_tS2_EENS_21__tree_const_iteratorIS2_PNS_11__tree_nodeIS2_PvEEiEESA_NS_15insert_iteratorINS_3setIS2_NS_4lessIS2_EENS_9allocatorIS2_EEEEEEEET2_T0_SK_T1_SL_SJ_T_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, unsigned long long>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, unsigned long long>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, unsigned long long> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, unsigned long long>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiyEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__emplace_back_slow_path<unsigned long long const&>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE24__emplace_back_slow_pathIJRKyEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE24__emplace_back_slow_pathIJRKyEEEvDpOT_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::populatePrimary() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter15populatePrimaryEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter15populatePrimaryEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getClientTargetSupport(unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display22getClientTargetSupportEjjii(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display22getClientTargetSupportEjjii() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::Display(android::HWC2On1Adapter&, HWC2::DisplayType) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7DisplayC1ERS0_N4HWC211DisplayTypeE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7DisplayC1ERS0_N4HWC211DisplayTypeE() called");
    return 0;
}

/* Demangled: android::MiniFence::~MiniFence() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9MiniFenceD1Ev(void) {
    ALOGD("_ZN7android9MiniFenceD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::__map_value_compare<unsigned long long, std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::less<unsigned long long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, std::__1::__tree_node<std::__1::__value_type<unsigned long long, std::__1::shared_ptr<android::HWC2On1Adapter::Layer> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE5eraseENS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIyNS_10shared_ptrIN7android14HWC2On1Adapter5LayerEEEEENS_19__map_value_compareIyS7_NS_4lessIyEELb1EEENS_9allocatorIS7_EEE5eraseENS_21__tree_const_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEE() called");
    return 0;
}

/* Demangled: android::MiniFence::MiniFence() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9MiniFenceC2Ev(void) {
    ALOGD("_ZN7android9MiniFenceC2Ev() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::Layer(android::HWC2On1Adapter::Display&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5LayerC2ERNS0_7DisplayE(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5LayerC2ERNS0_7DisplayE() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::getRequests(int*, unsigned int*, unsigned long long*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display11getRequestsEPiPjPyS2_(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display11getRequestsEPiPjPyS2_() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::initializeActiveConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display22initializeActiveConfigEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display22initializeActiveConfigEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Display, std::__1::allocator<android::HWC2On1Adapter::Display> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7DisplayENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter7DisplayENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: android::HWC2On1Adapter::populateCapabilities() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter20populateCapabilitiesEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter20populateCapabilitiesEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::applyState(hwc_layer_1&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer10applyStateER11hwc_layer_1(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer10applyStateER11hwc_layer_1() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::setDisplayFrame(hwc_rect) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer15setDisplayFrameE8hwc_rect(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer15setDisplayFrameE8hwc_rect() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::populateConfigs() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15populateConfigsEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15populateConfigsEv() called");
    return 0;
}

/* Demangled: android::MiniFence::MiniFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9MiniFenceC1Ei(void) {
    ALOGD("_ZN7android9MiniFenceC1Ei() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::updateLayerZ(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display12updateLayerZEyj(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display12updateLayerZEyj() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::generateChanges() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15generateChangesEv(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15generateChangesEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Layer::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter5Layer4dumpEv(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter5Layer4dumpEv() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::hasColorTransform() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android14HWC2On1Adapter7Display17hasColorTransformEv(void) {
    ALOGD("_ZNK7android14HWC2On1Adapter7Display17hasColorTransformEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::HWC2On1Adapter::Layer, std::__1::allocator<android::HWC2On1Adapter::Layer> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter5LayerENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android14HWC2On1Adapter5LayerENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: android::HWC2On1Adapter::Layer::setPlaneAlpha(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter5Layer13setPlaneAlphaEf(void) {
    ALOGD("_ZN7android14HWC2On1Adapter5Layer13setPlaneAlphaEf() called");
    return 0;
}

/* Demangled: android::HWC2On1Adapter::Display::setClientTarget(native_handle const*, int, int, hwc_region) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14HWC2On1Adapter7Display15setClientTargetEPK13native_handleii10hwc_region(void) {
    ALOGD("_ZN7android14HWC2On1Adapter7Display15setClientTargetEPK13native_handleii10hwc_region() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<unsigned long long, long long>, std::__1::allocator<std::__1::pair<unsigned long long, long long> > >::__emplace_back_slow_path<unsigned long long&, long long&>(unsigned long long&, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIyxEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRyRxEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIyxEENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRyRxEEEvDpOT_() called");
    return 0;
}
