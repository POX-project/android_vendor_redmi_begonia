/*
 * Reverse-Engineered ABI Specification for: libDefaultFpsActor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libDefaultFpsActor.so
 */

#ifndef BEGONIA_RE_LIBDEFAULTFPSACTOR_H
#define BEGONIA_RE_LIBDEFAULTFPSACTOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN3ARC5Actor14GetOptionFloatEPKcPf */
/* Demangled: ARC::Actor::GetOptionFloat(char const*, float*) */
int _ZN3ARC5Actor14GetOptionFloatEPKcPf(void);

/* Symbol: PassFpsLimitationPostSWBuf */
/* Demangled: PassFpsLimitationPostSWBuf */
int PassFpsLimitationPostSWBuf(void);

/* Symbol: _ZN15DefaultFPSActor10WaitIfNeedEi */
/* Demangled: DefaultFPSActor::WaitIfNeed(int) */
int _ZN15DefaultFPSActor10WaitIfNeedEi(void);

/* Symbol: _ZN15DefaultFPSActorC1Ev */
/* Demangled: DefaultFPSActor::DefaultFPSActor() */
int _ZN15DefaultFPSActorC1Ev(void);

/* Symbol: map_ctx2actor */
/* Demangled: map_ctx2actor */
extern void* map_ctx2actor;

/* Symbol: _ZN15DefaultFPSActor17passFpsLimitationEi */
/* Demangled: DefaultFPSActor::passFpsLimitation(int) */
int _ZN15DefaultFPSActor17passFpsLimitationEi(void);

/* Symbol: _ZN15DefaultFPSActorC2Ev */
/* Demangled: DefaultFPSActor::DefaultFPSActor() */
int _ZN15DefaultFPSActorC2Ev(void);

/* Symbol: _ZN15DefaultFPSActorD1Ev */
/* Demangled: DefaultFPSActor::~DefaultFPSActor() */
int _ZN15DefaultFPSActorD1Ev(void);

/* Symbol: _ZN3ARC5Actor12GetOptionIntEPKcPi */
/* Demangled: ARC::Actor::GetOptionInt(char const*, int*) */
int _ZN3ARC5Actor12GetOptionIntEPKcPi(void);

/* Symbol: _ZN15DefaultFPSActor26passFpsLimitationPostSWBufEi */
/* Demangled: DefaultFPSActor::passFpsLimitationPostSWBuf(int) */
int _ZN15DefaultFPSActor26passFpsLimitationPostSWBufEi(void);

/* Symbol: _ZN15DefaultFPSActorD2Ev */
/* Demangled: DefaultFPSActor::~DefaultFPSActor() */
int _ZN15DefaultFPSActorD2Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_S2_EE */
/* Demangled: std::__1::__tree<std::__1::__value_type<void*, DefaultFPSActor>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, DefaultFPSActor>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, DefaultFPSActor> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, DefaultFPSActor>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_S2_EE(void);

/* Symbol: _ZN3ARC5Actor16GetStepFramerateEi */
/* Demangled: ARC::Actor::GetStepFramerate(int) */
int _ZN3ARC5Actor16GetStepFramerateEi(void);

/* Symbol: _ZN3ARC5Actor24GetUserAssignedFramerateEi */
/* Demangled: ARC::Actor::GetUserAssignedFramerate(int) */
int _ZN3ARC5Actor24GetUserAssignedFramerateEi(void);

/* Symbol: PassFpsLimitation */
/* Demangled: PassFpsLimitation */
int PassFpsLimitation(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_S2_EEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<void*, DefaultFPSActor>, std::__1::__tree_node<std::__1::__value_type<void*, DefaultFPSActor>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<void*, DefaultFPSActor>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, DefaultFPSActor>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, DefaultFPSActor> > >::__emplace_unique_key_args<void*, std::__1::piecewise_construct_t const&, std::__1::tuple<void* const&>, std::__1::tuple<> >(void* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<void* const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_S2_EEiEEbEERKT_DpOT0_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDEFAULTFPSACTOR_H */
