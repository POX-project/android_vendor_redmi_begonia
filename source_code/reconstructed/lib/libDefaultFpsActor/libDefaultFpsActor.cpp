/*
 * Reverse-Engineered Source for: libDefaultFpsActor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libDefaultFpsActor"

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
#include "libDefaultFpsActor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ARC::Actor::GetOptionFloat(char const*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor14GetOptionFloatEPKcPf(void) {
    ALOGD("_ZN3ARC5Actor14GetOptionFloatEPKcPf() called");
    return 0;
}

/* Demangled: PassFpsLimitationPostSWBuf */
extern "C" __attribute__((visibility("default"))) int PassFpsLimitationPostSWBuf(void) {
    ALOGD("PassFpsLimitationPostSWBuf() called");
    return 0;
}

/* Demangled: DefaultFPSActor::WaitIfNeed(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultFPSActor10WaitIfNeedEi(void) {
    ALOGD("_ZN15DefaultFPSActor10WaitIfNeedEi() called");
    return 0;
}

/* Demangled: DefaultFPSActor::DefaultFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultFPSActorC1Ev(void) {
    ALOGD("_ZN15DefaultFPSActorC1Ev() called");
    return 0;
}

/* Exported Object: map_ctx2actor */
extern "C" __attribute__((visibility("default"))) void* map_ctx2actor = NULL;

/* Demangled: DefaultFPSActor::passFpsLimitation(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultFPSActor17passFpsLimitationEi(void) {
    ALOGD("_ZN15DefaultFPSActor17passFpsLimitationEi() called");
    return 0;
}

/* Demangled: DefaultFPSActor::DefaultFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultFPSActorC2Ev(void) {
    ALOGD("_ZN15DefaultFPSActorC2Ev() called");
    return 0;
}

/* Demangled: DefaultFPSActor::~DefaultFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultFPSActorD1Ev(void) {
    ALOGD("_ZN15DefaultFPSActorD1Ev() called");
    return 0;
}

/* Demangled: ARC::Actor::GetOptionInt(char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor12GetOptionIntEPKcPi(void) {
    ALOGD("_ZN3ARC5Actor12GetOptionIntEPKcPi() called");
    return 0;
}

/* Demangled: DefaultFPSActor::passFpsLimitationPostSWBuf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultFPSActor26passFpsLimitationPostSWBufEi(void) {
    ALOGD("_ZN15DefaultFPSActor26passFpsLimitationPostSWBufEi() called");
    return 0;
}

/* Demangled: DefaultFPSActor::~DefaultFPSActor() */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultFPSActorD2Ev(void) {
    ALOGD("_ZN15DefaultFPSActorD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<void*, DefaultFPSActor>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, DefaultFPSActor>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, DefaultFPSActor> > >::destroy(std::__1::__tree_node<std::__1::__value_type<void*, DefaultFPSActor>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_S2_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_S2_EE() called");
    return 0;
}

/* Demangled: ARC::Actor::GetStepFramerate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor16GetStepFramerateEi(void) {
    ALOGD("_ZN3ARC5Actor16GetStepFramerateEi() called");
    return 0;
}

/* Demangled: ARC::Actor::GetUserAssignedFramerate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3ARC5Actor24GetUserAssignedFramerateEi(void) {
    ALOGD("_ZN3ARC5Actor24GetUserAssignedFramerateEi() called");
    return 0;
}

/* Demangled: PassFpsLimitation */
extern "C" __attribute__((visibility("default"))) int PassFpsLimitation(void) {
    ALOGD("PassFpsLimitation() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<void*, DefaultFPSActor>, std::__1::__tree_node<std::__1::__value_type<void*, DefaultFPSActor>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<void*, DefaultFPSActor>, std::__1::__map_value_compare<void*, std::__1::__value_type<void*, DefaultFPSActor>, std::__1::less<void*>, true>, std::__1::allocator<std::__1::__value_type<void*, DefaultFPSActor> > >::__emplace_unique_key_args<void*, std::__1::piecewise_construct_t const&, std::__1::tuple<void* const&>, std::__1::tuple<> >(void* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<void* const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_S2_EEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPv15DefaultFPSActorEENS_19__map_value_compareIS2_S4_NS_4lessIS2_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJRKS2_EEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_S2_EEiEEbEERKT_DpOT0_() called");
    return 0;
}
