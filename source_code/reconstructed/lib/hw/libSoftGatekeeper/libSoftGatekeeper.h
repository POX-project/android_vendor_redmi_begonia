/*
 * Reverse-Engineered ABI Specification for: libSoftGatekeeper.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libSoftGatekeeper.so
 */

#ifndef BEGONIA_RE_LIBSOFTGATEKEEPER_H
#define BEGONIA_RE_LIBSOFTGATEKEEPER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: soft_gatekeeper_open */
/* Demangled: soft_gatekeeper_open */
int soft_gatekeeper_open(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN18HalAdaptationLayer6enrollEPK17gatekeeper_devicejPKhjS4_jS4_jPPhPj */
/* Demangled: HalAdaptationLayer::enroll(gatekeeper_device const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char**, unsigned int*) */
int _ZN18HalAdaptationLayer6enrollEPK17gatekeeper_devicejPKhjS4_jS4_jPPhPj(void);

/* Symbol: _ZN18HalAdaptationLayer6verifyEPK17gatekeeper_devicejyPKhjS4_jPPhPjPb */
/* Demangled: HalAdaptationLayer::verify(gatekeeper_device const*, unsigned int, unsigned long long, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char**, unsigned int*, bool*) */
int _ZN18HalAdaptationLayer6verifyEPK17gatekeeper_devicejyPKhjS4_jPPhPjPb(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN18HalAdaptationLayerC1EP11hw_module_t */
/* Demangled: HalAdaptationLayer::HalAdaptationLayer(hw_module_t*) */
int _ZN18HalAdaptationLayerC1EP11hw_module_t(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t> > >::__emplace_unique_key_args<unsigned long long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>, std::__1::tuple<> >(unsigned long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIyJRKNS_21piecewise_construct_tENS_5tupleIJRKyEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE6rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void);

/* Symbol: _ZTVN10gatekeeper20SoftGateKeeperDeviceE */
/* Demangled: vtable for gatekeeper::SoftGateKeeperDevice */
extern void* _ZTVN10gatekeeper20SoftGateKeeperDeviceE;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t> > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE8__rehashEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t> > >::find<unsigned long long>(unsigned long long const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEE4findIyEENS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEERKT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, gatekeeper::fast_hash_t> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIyN10gatekeeper11fast_hash_tEEENS_22__unordered_map_hasherIyS4_NS_4hashIyEELb1EEENS_21__unordered_map_equalIyS4_NS_8equal_toIyEELb1EEENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: crypto_scrypt */
/* Demangled: crypto_scrypt */
int crypto_scrypt(void);

/* Symbol: soft_gatekeeper_close */
/* Demangled: soft_gatekeeper_close */
int soft_gatekeeper_close(void);

/* Symbol: _ZN18HalAdaptationLayerC2EP11hw_module_t */
/* Demangled: HalAdaptationLayer::HalAdaptationLayer(hw_module_t*) */
int _ZN18HalAdaptationLayerC2EP11hw_module_t(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, gatekeeper::failure_record_t> > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjN10gatekeeper16failure_record_tEEENS_22__unordered_map_hasherIjS4_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS4_NS_8equal_toIjEELb1EEENS_9allocatorIS4_EEE6rehashEj(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSOFTGATEKEEPER_H */
