/*
 * Reverse-Engineered ABI Specification for: libdip_imem.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdip_imem.so
 */

#ifndef BEGONIA_RE_LIBDIP_IMEM_H
#define BEGONIA_RE_LIBDIP_IMEM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN13DipIMemDrvImp15doIonCacheFlushEi18eIONCacheFlushType */
/* Demangled: DipIMemDrvImp::doIonCacheFlush(int, eIONCacheFlushType) */
int _ZN13DipIMemDrvImp15doIonCacheFlushEi18eIONCacheFlushType(void);

/* Symbol: _ZN13DipIMemDrvImpC1Ev */
/* Demangled: DipIMemDrvImp::DipIMemDrvImp() */
int _ZN13DipIMemDrvImpC1Ev(void);

/* Symbol: imem_drv_DbgLogEnable_VERBOSE */
/* Demangled: imem_drv_DbgLogEnable_VERBOSE */
extern void* imem_drv_DbgLogEnable_VERBOSE;

/* Symbol: _ZN13DipIMemDrvImp11getInstanceEv */
/* Demangled: DipIMemDrvImp::getInstance() */
int _ZN13DipIMemDrvImp11getInstanceEv(void);

/* Symbol: _ZN13DipIMemDrvImp13freeSecureBufEP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::freeSecureBuf(IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp13freeSecureBufEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN13DipIMemDrvImp14allocSecureBufEP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::allocSecureBuf(IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp14allocSecureBufEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN13DipIMemDrvImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::cacheSyncbyRange(IMEM_CACHECTRL_ENUM, IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIjEEjRKT_ */
/* Demangled: unsigned int std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__erase_unique<unsigned int>(unsigned int const&) */
int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE14__erase_uniqueIjEEjRKT_(void);

/* Symbol: _ZTV13DipIMemDrvImp */
/* Demangled: vtable for DipIMemDrvImp */
extern void* _ZTV13DipIMemDrvImp;

/* Symbol: _ZN13DipIMemDrvImp10mapPhyAddrEP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::mapPhyAddr(IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp10mapPhyAddrEP13IMEM_BUF_INFO(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: imem_drv_DbgLogEnable_ASSERT */
/* Demangled: imem_drv_DbgLogEnable_ASSERT */
extern void* imem_drv_DbgLogEnable_ASSERT;

/* Symbol: imem_drv_DbgLogEnable_WARN */
/* Demangled: imem_drv_DbgLogEnable_WARN */
extern void* imem_drv_DbgLogEnable_WARN;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN13DipIMemDrvImp16setBufferdbgNameEPKcP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::setBufferdbgName(char const*, IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp16setBufferdbgNameEPKcP13IMEM_BUF_INFO(void);

/* Symbol: _ZN13DipIMemDrvImp5resetEv */
/* Demangled: DipIMemDrvImp::reset() */
int _ZN13DipIMemDrvImp5resetEv(void);

/* Symbol: imem_drv_DbgLogEnable_ERROR */
/* Demangled: imem_drv_DbgLogEnable_ERROR */
extern void* imem_drv_DbgLogEnable_ERROR;

/* Symbol: _ZN13DipIMemDrvImp12unmapPhyAddrEP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::unmapPhyAddr(IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp12unmapPhyAddrEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN13DipIMemDrvImp15destroyInstanceEv */
/* Demangled: DipIMemDrvImp::destroyInstance() */
int _ZN13DipIMemDrvImp15destroyInstanceEv(void);

/* Symbol: _ZN13DipIMemDrvImp6uninitEv */
/* Demangled: DipIMemDrvImp::uninit() */
int _ZN13DipIMemDrvImp6uninitEv(void);

/* Symbol: imem_drv_DbgLogEnable_DEBUG */
/* Demangled: imem_drv_DbgLogEnable_DEBUG */
extern void* imem_drv_DbgLogEnable_DEBUG;

/* Symbol: _ZN13DipIMemDrvImpD2Ev */
/* Demangled: DipIMemDrvImp::~DipIMemDrvImp() */
int _ZN13DipIMemDrvImpD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: imem_drv_DbgLogEnable_INFO */
/* Demangled: imem_drv_DbgLogEnable_INFO */
extern void* imem_drv_DbgLogEnable_INFO;

/* Symbol: _ZN13DipIMemDrvImp11freeVirtBufEP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::freeVirtBuf(IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp11freeVirtBufEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN13DipIMemDrvImp12allocVirtBufEP13IMEM_BUF_INFO */
/* Demangled: DipIMemDrvImp::allocVirtBuf(IMEM_BUF_INFO*) */
int _ZN13DipIMemDrvImp12allocVirtBufEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN13DipIMemDrvImp13initSecureM4UEv */
/* Demangled: DipIMemDrvImp::initSecureM4U() */
int _ZN13DipIMemDrvImp13initSecureM4UEv(void);

/* Symbol: _ZN13DipIMemDrvImpD1Ev */
/* Demangled: DipIMemDrvImp::~DipIMemDrvImp() */
int _ZN13DipIMemDrvImpD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__tree_node<std::__1::__value_type<unsigned int, _imem_map_info_>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN13DipIMemDrvImp4initEv */
/* Demangled: DipIMemDrvImp::init() */
int _ZN13DipIMemDrvImp4initEv(void);

/* Symbol: _ZN13DipIMemDrvImpD0Ev */
/* Demangled: DipIMemDrvImp::~DipIMemDrvImp() */
int _ZN13DipIMemDrvImpD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, _imem_map_info_>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN10DipIMemDrv14createInstanceEv */
/* Demangled: DipIMemDrv::createInstance() */
int _ZN10DipIMemDrv14createInstanceEv(void);

/* Symbol: _ZN13DipIMemDrvImp13cacheFlushAllEv */
/* Demangled: DipIMemDrvImp::cacheFlushAll() */
int _ZN13DipIMemDrvImp13cacheFlushAllEv(void);

/* Symbol: _ZN13DipIMemDrvImpC2Ev */
/* Demangled: DipIMemDrvImp::DipIMemDrvImp() */
int _ZN13DipIMemDrvImpC2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDIP_IMEM_H */
