/*
 * Reverse-Engineered Source for: libcamdrv_imem.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcamdrv_imem"

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
#include "libcamdrv_imem.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: IMemDrvImp::allocSecBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp11allocSecBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN10IMemDrvImp11allocSecBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: IMemDrvImp::cacheSyncbyRange(IMEM_CACHECTRL_ENUM, IMEM_BUF_INFO*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFOi(void) {
    ALOGD("_ZN10IMemDrvImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFOi() called");
    return 0;
}

/* Demangled: IMemDrvImp::~IMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImpD0Ev(void) {
    ALOGD("_ZN10IMemDrvImpD0Ev() called");
    return 0;
}

/* Demangled: IMemDrv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7IMemDrv14createInstanceEv(void) {
    ALOGD("_ZN7IMemDrv14createInstanceEv() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: IMemDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp11getInstanceEv(void) {
    ALOGD("_ZN10IMemDrvImp11getInstanceEv() called");
    return 0;
}

/* Demangled: IMemDrvImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp15destroyInstanceEv(void) {
    ALOGD("_ZN10IMemDrvImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: IMemDrvImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp6uninitEv(void) {
    ALOGD("_ZN10IMemDrvImp6uninitEv() called");
    return 0;
}

/* Demangled: IMemDrvImp::IMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImpC2Ev(void) {
    ALOGD("_ZN10IMemDrvImpC2Ev() called");
    return 0;
}

/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__erase_unique<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIjEEjRKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIjEEjRKT_() called");
    return 0;
}

/* Demangled: IMemDrvImp::IMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImpC1Ev(void) {
    ALOGD("_ZN10IMemDrvImpC1Ev() called");
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

/* Demangled: globalcacheFlushAll() */
extern "C" __attribute__((visibility("default"))) int _Z19globalcacheFlushAllv(void) {
    ALOGD("_Z19globalcacheFlushAllv() called");
    return 0;
}

/* Demangled: IMemDrvImp::cacheFlushAll() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp13cacheFlushAllEv(void) {
    ALOGD("_ZN10IMemDrvImp13cacheFlushAllEv() called");
    return 0;
}

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

/* Demangled: IMemDrvImp::freeSecBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp10freeSecBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN10IMemDrvImp10freeSecBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: IMemDrvImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp4initEv(void) {
    ALOGD("_ZN10IMemDrvImp4initEv() called");
    return 0;
}

/* Demangled: IMemDrvImp::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp5resetEv(void) {
    ALOGD("_ZN10IMemDrvImp5resetEv() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: IMemDrvImp::mapPhyAddr(IMEM_BUF_INFO*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp10mapPhyAddrEP13IMEM_BUF_INFOi(void) {
    ALOGD("_ZN10IMemDrvImp10mapPhyAddrEP13IMEM_BUF_INFOi() called");
    return 0;
}

/* Exported Object: vtable for IMemDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10IMemDrvImp = NULL;

/* Exported Object: imem_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: IMemDrvImp::freeVirtBuf(IMEM_BUF_INFO*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp11freeVirtBufEP13IMEM_BUF_INFOi(void) {
    ALOGD("_ZN10IMemDrvImp11freeVirtBufEP13IMEM_BUF_INFOi() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Exported Object: imem_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* imem_drv_DbgLogEnable_INFO = NULL;

/* Demangled: IMemDrvImp::unmapPhyAddr(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp12unmapPhyAddrEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN10IMemDrvImp12unmapPhyAddrEP13IMEM_BUF_INFO() called");
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

/* Demangled: IMemDrvImp::~IMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImpD2Ev(void) {
    ALOGD("_ZN10IMemDrvImpD2Ev() called");
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

/* Demangled: IMemDrvImp::allocVirtBuf(IMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp12allocVirtBufEP13IMEM_BUF_INFO(void) {
    ALOGD("_ZN10IMemDrvImp12allocVirtBufEP13IMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: IMemDrvImp::doIonCacheFlush(IMEM_BUF_INFO*, eIONCacheFlushType, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImp15doIonCacheFlushEP13IMEM_BUF_INFO18eIONCacheFlushTypei(void) {
    ALOGD("_ZN10IMemDrvImp15doIonCacheFlushEP13IMEM_BUF_INFO18eIONCacheFlushTypei() called");
    return 0;
}

/* Demangled: IMemDrvImp::~IMemDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10IMemDrvImpD1Ev(void) {
    ALOGD("_ZN10IMemDrvImpD1Ev() called");
    return 0;
}
