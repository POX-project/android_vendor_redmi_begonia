/*
 * Reverse-Engineered Source for: libSoftGatekeeper.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libSoftGatekeeper"

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
#include "libSoftGatekeeper.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int libSoftGatekeeper_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int libSoftGatekeeper_close(struct hw_device_t* dev);

static struct hw_module_methods_t libSoftGatekeeper_module_methods = {
    .open = libSoftGatekeeper_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "libSoftGatekeeper",
    .name = "Begonia libSoftGatekeeper Module",
    .author = "LineageOS / Community RE",
    .methods = &libSoftGatekeeper_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int libSoftGatekeeper_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int libSoftGatekeeper_close(struct hw_device_t* dev) {
    ALOGI("Closing libSoftGatekeeper module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t> > >::__emplace_unique_key_args<unsigned long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>, std::__1::tuple<> >(unsigned long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherImS4_NS_4hashImEELb1EEENS_21__unordered_map_equalImS4_NS_8equal_toImEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherImS4_NS_4hashImEELb1EEENS_21__unordered_map_equalImS4_NS_8equal_toImEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: soft_gatekeeper_open */
extern "C" __attribute__((visibility("default"))) int soft_gatekeeper_open(void) {
    ALOGD("soft_gatekeeper_open() called");
    return 0;
}

/* Demangled: HalAdaptationLayer::enroll(gatekeeper_device const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN18HalAdaptationLayer6enrollEPK17gatekeeper_devicejPKhjS4_jS4_jPPhPj(void) {
    ALOGD("_ZN18HalAdaptationLayer6enrollEPK17gatekeeper_devicejPKhjS4_jS4_jPPhPj() called");
    return 0;
}

/* Demangled: crypto_scrypt */
extern "C" __attribute__((visibility("default"))) int crypto_scrypt(void) {
    ALOGD("crypto_scrypt() called");
    return 0;
}

/* Demangled: soft_gatekeeper_close */
extern "C" __attribute__((visibility("default"))) int soft_gatekeeper_close(void) {
    ALOGD("soft_gatekeeper_close() called");
    return 0;
}

/* Demangled: HalAdaptationLayer::verify(gatekeeper_device const*, unsigned int, unsigned long, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char**, unsigned int*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN18HalAdaptationLayer6verifyEPK17gatekeeper_devicejmPKhjS4_jPPhPjPb(void) {
    ALOGD("_ZN18HalAdaptationLayer6verifyEPK17gatekeeper_devicejmPKhjS4_jPPhPjPb() called");
    return 0;
}

/* Demangled: HalAdaptationLayer::HalAdaptationLayer(hw_module_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN18HalAdaptationLayerC1EP11hw_module_t(void) {
    ALOGD("_ZN18HalAdaptationLayerC1EP11hw_module_t() called");
    return 0;
}

/* Demangled: HalAdaptationLayer::HalAdaptationLayer(hw_module_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN18HalAdaptationLayerC2EP11hw_module_t(void) {
    ALOGD("_ZN18HalAdaptationLayerC2EP11hw_module_t() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherImS4_NS_4hashImEELb1EEENS_21__unordered_map_equalImS4_NS_8equal_toImEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherImS4_NS_4hashImEELb1EEENS_21__unordered_map_equalImS4_NS_8equal_toImEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, gatekeeper::fast_hash_t> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherImS4_NS_4hashImEELb1EEENS_21__unordered_map_equalImS4_NS_8equal_toImEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherImS4_NS_4hashImEELb1EEENS_21__unordered_map_equalImS4_NS_8equal_toImEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for gatekeeper::SoftGateKeeperDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10gatekeeper20SoftGateKeeperDeviceE = NULL;
