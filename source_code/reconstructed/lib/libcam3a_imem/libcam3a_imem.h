/*
 * Reverse-Engineered ABI Specification for: libcam3a_imem.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam3a_imem.so
 */

#ifndef BEGONIA_RE_LIBCAM3A_IMEM_H
#define BEGONIA_RE_LIBCAM3A_IMEM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9IMem3AImp5resetEv */
/* Demangled: IMem3AImp::reset() */
int _ZN9IMem3AImp5resetEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, _imem_map_info_>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, _imem_map_info_> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, _imem_map_info_>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIj15_imem_map_info_EENS_19__map_value_compareIjS3_NS_4lessIjEELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN9IMem3AImp12unmapPhyAddrEP13IMEM_BUF_INFO */
/* Demangled: IMem3AImp::unmapPhyAddr(IMEM_BUF_INFO*) */
int _ZN9IMem3AImp12unmapPhyAddrEP13IMEM_BUF_INFO(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN9IMem3AImp10mapPhyAddrEP13IMEM_BUF_INFO */
/* Demangled: IMem3AImp::mapPhyAddr(IMEM_BUF_INFO*) */
int _ZN9IMem3AImp10mapPhyAddrEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN9IMem3AImpC1Ev */
/* Demangled: IMem3AImp::IMem3AImp() */
int _ZN9IMem3AImpC1Ev(void);

/* Symbol: _ZN9IMem3AImpD0Ev */
/* Demangled: IMem3AImp::~IMem3AImp() */
int _ZN9IMem3AImpD0Ev(void);

/* Symbol: _ZN9IMem3AImpD2Ev */
/* Demangled: IMem3AImp::~IMem3AImp() */
int _ZN9IMem3AImpD2Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN9IMem3AImp11freeVirtBufEP13IMEM_BUF_INFO */
/* Demangled: IMem3AImp::freeVirtBuf(IMEM_BUF_INFO*) */
int _ZN9IMem3AImp11freeVirtBufEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN9IMem3AImp11getInstanceEv */
/* Demangled: IMem3AImp::getInstance() */
int _ZN9IMem3AImp11getInstanceEv(void);

/* Symbol: _ZN9IMem3AImp12allocVirtBufEP13IMEM_BUF_INFO */
/* Demangled: IMem3AImp::allocVirtBuf(IMEM_BUF_INFO*) */
int _ZN9IMem3AImp12allocVirtBufEP13IMEM_BUF_INFO(void);

/* Symbol: _ZN9IMem3AImp13cacheFlushAllEv */
/* Demangled: IMem3AImp::cacheFlushAll() */
int _ZN9IMem3AImp13cacheFlushAllEv(void);

/* Symbol: _ZN9IMem3AImp15destroyInstanceEv */
/* Demangled: IMem3AImp::destroyInstance() */
int _ZN9IMem3AImp15destroyInstanceEv(void);

/* Symbol: _ZN9IMem3AImp6uninitEv */
/* Demangled: IMem3AImp::uninit() */
int _ZN9IMem3AImp6uninitEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9IMem3AImp4initEv */
/* Demangled: IMem3AImp::init() */
int _ZN9IMem3AImp4initEv(void);

/* Symbol: _ZN6IMem3A14createInstanceEv */
/* Demangled: IMem3A::createInstance() */
int _ZN6IMem3A14createInstanceEv(void);

/* Symbol: _ZN9IMem3AImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO */
/* Demangled: IMem3AImp::cacheSyncbyRange(IMEM_CACHECTRL_ENUM, IMEM_BUF_INFO*) */
int _ZN9IMem3AImp16cacheSyncbyRangeE19IMEM_CACHECTRL_ENUMP13IMEM_BUF_INFO(void);

/* Symbol: _ZN9IMem3AImpC2Ev */
/* Demangled: IMem3AImp::IMem3AImp() */
int _ZN9IMem3AImpC2Ev(void);

/* Symbol: _ZN9IMem3AImpD1Ev */
/* Demangled: IMem3AImp::~IMem3AImp() */
int _ZN9IMem3AImpD1Ev(void);

/* Symbol: _ZTV9IMem3AImp */
/* Demangled: vtable for IMem3AImp */
extern void* _ZTV9IMem3AImp;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM3A_IMEM_H */
