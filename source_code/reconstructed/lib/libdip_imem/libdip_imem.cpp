/*
 * Reverse-Engineered Source for: libdip_imem.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdip_imem"

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
#include "libdip_imem.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: DipIMemDrvImp::doIonCacheFlush(int, eIONCacheFlushType) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp15doIonCacheFlushEi18eIONCacheFlushType(void) {
    ALOGD("_ZN13DipIMemDrvImp15doIonCacheFlushEi18eIONCacheFlushType() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::DipIMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImpC1Ev(void) {
    ALOGD("_ZN13DipIMemDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: DipIMemDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp11getInstanceEv(void) {
    ALOGD("_ZN13DipIMemDrvImp11getInstanceEv() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::freeSecureBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp13freeSecureBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp13freeSecureBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::allocSecureBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp14allocSecureBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp14allocSecureBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::cacheSyncbyRange(IMEM_CACHECTRL_ENUM, IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__erase_unique<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIjEEjRKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIjEEjRKT_() called");
    return 0;
}

/* Exported Object: vtable for DipIMemDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DipIMemDrvImp = NULL;

/* Demangled: DipIMemDrvImp::mapPhyAddr(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp10mapPhyAddrEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp10mapPhyAddrEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: imem_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_WARN = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::setBufferdbgName(char const*, IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp16setBufferdbgNameEPKcP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp16setBufferdbgNameEPKcP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp5resetEv(void) {
    ALOGD("_ZN13DipIMemDrvImp5resetEv() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: DipIMemDrvImp::unmapPhyAddr(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp12unmapPhyAddrEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp12unmapPhyAddrEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp15destroyInstanceEv(void) {
    ALOGD("_ZN13DipIMemDrvImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp6uninitEv(void) {
    ALOGD("_ZN13DipIMemDrvImp6uninitEv() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: DipIMemDrvImp::~DipIMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImpD2Ev(void) {
    ALOGD("_ZN13DipIMemDrvImpD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_INFO = NULL;

/* Demangled: DipIMemDrvImp::freeVirtBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp11freeVirtBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp11freeVirtBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::allocVirtBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp12allocVirtBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN13DipIMemDrvImp12allocVirtBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::initSecureM4U() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp13initSecureM4UEv(void) {
    ALOGD("_ZN13DipIMemDrvImp13initSecureM4UEv() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::~DipIMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImpD1Ev(void) {
    ALOGD("_ZN13DipIMemDrvImpD1Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__tree_node<std::__1::__value_type<unsigned int, _imem_map_info_>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp4initEv(void) {
    ALOGD("_ZN13DipIMemDrvImp4initEv() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::~DipIMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImpD0Ev(void) {
    ALOGD("_ZN13DipIMemDrvImpD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, _imem_map_info_>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: DipIMemDrv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10DipIMemDrv14createInstanceEv(void) {
    ALOGD("_ZN10DipIMemDrv14createInstanceEv() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::cacheFlushAll() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImp13cacheFlushAllEv(void) {
    ALOGD("_ZN13DipIMemDrvImp13cacheFlushAllEv() called");
    return 0;
}

/* Demangled: DipIMemDrvImp::DipIMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipIMemDrvImpC2Ev(void) {
    ALOGD("_ZN13DipIMemDrvImpC2Ev() called");
    return 0;
}
