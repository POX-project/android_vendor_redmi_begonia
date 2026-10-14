/*
 * Reverse-Engineered ABI Specification for: libmtkcam_mapping_mgr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_mapping_mgr.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_MAPPING_MGR_H
#define BEGONIA_RE_LIBMTKCAM_MAPPING_MGR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN14IdxMgrImplBaseD0Ev */
/* Demangled: IdxMgrImplBase::~IdxMgrImplBase() */
int _ZN14IdxMgrImplBaseD0Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED0Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED0Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED0Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED0Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE4initEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::init(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE4initEPv(void);

/* Symbol: _ZNSt3__110__list_impI18ISP_MAPPING_INFO_TNS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<ISP_MAPPING_INFO_T, std::__1::allocator<ISP_MAPPING_INFO_T> >::clear() */
int _ZNSt3__110__list_impI18ISP_MAPPING_INFO_TNS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE */
/* Demangled: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)1> */
extern void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE;

/* Symbol: _ZN6IdxMgr16patchMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_ENS0_6EDim_TEPj */
/* Demangled: IdxMgr::patchMappingInfo(NSIspTuning::ESensorDev_T, NSIspTuning::_CAM_IDX_QRY_COMB_&, NSIspTuning::EDim_T, unsigned int*) */
int _ZN6IdxMgr16patchMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_ENS0_6EDim_TEPj(void);

/* Symbol: _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::vector(std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > > const&) */
int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEEC2ERKS5_(void);

/* Symbol: ut_ng_cnt */
/* Demangled: ut_ng_cnt */
extern void* ut_ng_cnt;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE14link_singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*)::link_singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE14link_singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE17clearMapping_ListEv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::clearMapping_List() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE17clearMapping_ListEv(void);

/* Symbol: _Z14find_ambigioustRN11NSIspTuning18_CAM_IDX_QRY_COMB_Eii */
/* Demangled: find_ambigious(unsigned short, NSIspTuning::_CAM_IDX_QRY_COMB_&, int, int) */
int _Z14find_ambigioustRN11NSIspTuning18_CAM_IDX_QRY_COMB_Eii(void);

/* Symbol: _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::__push_back_slow_path<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > const&>(std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > const&) */
int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5IdxDMD0Ev */
/* Demangled: IdxDM::~IdxDM() */
int _ZN5IdxDMD0Ev(void);

/* Symbol: _ZN7IdxMaskD1Ev */
/* Demangled: IdxMask::~IdxMask() */
int _ZN7IdxMaskD1Ev(void);

/* Symbol: _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE9singleton */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*)::singleton */
extern void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE9singleton;

/* Symbol: _ZN6IdxMgr14getMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_Ej */
/* Demangled: IdxMgr::getMappingInfo(NSIspTuning::ESensorDev_T, NSIspTuning::_CAM_IDX_QRY_COMB_&, unsigned int) */
int _ZN6IdxMgr14getMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_Ej(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN14IdxMgrImplBaseD1Ev */
/* Demangled: IdxMgrImplBase::~IdxMgrImplBase() */
int _ZN14IdxMgrImplBaseD1Ev(void);

/* Symbol: _ZN5IdxDM4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt */
/* Demangled: IdxDM::init(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
int _ZN5IdxDM4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt(void);

/* Symbol: _ZN6IdxMgrC1Ev */
/* Demangled: IdxMgr::IdxMgr() */
int _ZN6IdxMgrC1Ev(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE9singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*)::singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE9singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN6IdxMgr14createInstanceEN11NSIspTuning12ESensorDev_TE */
/* Demangled: IdxMgr::createInstance(NSIspTuning::ESensorDev_T) */
int _ZN6IdxMgr14createInstanceEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_EPKc */
/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, char const*) */
int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_EPKc(void);

/* Symbol: _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE */
/* Demangled: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)2> */
extern void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE;

/* Symbol: _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE9singleton */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*)::singleton */
extern void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE9singleton;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFiiEiEEEEEPvSA_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, int (*)(int), int> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFiiEiEEEEEPvSA_(void);

/* Symbol: goldenComb */
/* Demangled: goldenComb */
extern void* goldenComb;

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE9singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*)::singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE9singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE4initEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::init(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE4initEPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EEC2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EEC2Ev(void);

/* Symbol: _ZN7IdxMask5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMask::query(NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN7IdxMask5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE */
/* Demangled: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)8> */
extern void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE;

/* Symbol: _ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<COMB_TYPE, std::__1::allocator<COMB_TYPE>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<COMB_TYPE>&) */
int _ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE9singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*)::singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE9singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED0Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&) */
int _ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEEC2EjjS6_(void);

/* Symbol: _ZN5IdxDMD1Ev */
/* Demangled: IdxDM::~IdxDM() */
int _ZN5IdxDMD1Ev(void);

/* Symbol: _ZN7IdxMaskD2Ev */
/* Demangled: IdxMask::~IdxMask() */
int _ZN7IdxMaskD2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN7IdxBase16mismatchHandlingEN11NSIspTuning9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxBase::mismatchHandling(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN7IdxBase16mismatchHandlingEN11NSIspTuning9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE17clearMapping_ListEv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::clearMapping_List() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE17clearMapping_ListEv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_ */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_ */
/* Demangled: void std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__push_back_slow_path<unsigned short const&>(unsigned short const&) */
int _ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_(void);

/* Symbol: _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE9singleton */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*)::singleton */
extern void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE9singleton;

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFbP6IdxMgriNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiES8_iSE_iEEEEEPvSI_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, bool (*)(IdxMgr*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int), IdxMgr*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFbP6IdxMgriNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiES8_iSE_iEEEEEPvSI_(void);

/* Symbol: _ZN14IdxMgrImplBaseD2Ev */
/* Demangled: IdxMgrImplBase::~IdxMgrImplBase() */
int _ZN14IdxMgrImplBaseD2Ev(void);

/* Symbol: _ZN6IdxMgrC2Ev */
/* Demangled: IdxMgr::IdxMgr() */
int _ZN6IdxMgrC2Ev(void);

/* Symbol: _Z12ut_by_moduleP6IdxMgriNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: ut_by_module(IdxMgr*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
int _Z12ut_by_moduleP6IdxMgriNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED2Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED2Ev(void);

/* Symbol: _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE11__vallocateEj */
/* Demangled: std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::__vallocate(unsigned int) */
int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE11__vallocateEj(void);

/* Symbol: ut_ng_cnt_curMod */
/* Demangled: ut_ng_cnt_curMod */
extern void* ut_ng_cnt_curMod;

/* Symbol: _Z8nvram_uti */
/* Demangled: nvram_ut(int) */
int _Z8nvram_uti(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN6IdxMgr14setMappingInfoEN11NSIspTuning12ESensorDev_TERKNS0_18_CAM_IDX_QRY_COMB_Ej */
/* Demangled: IdxMgr::setMappingInfo(NSIspTuning::ESensorDev_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, unsigned int) */
int _ZN6IdxMgr14setMappingInfoEN11NSIspTuning12ESensorDev_TERKNS0_18_CAM_IDX_QRY_COMB_Ej(void);

/* Symbol: _ZN7IdxMask6genKeyERNSt3__16vectorItNS0_9allocatorItEEEE */
/* Demangled: IdxMask::genKey(std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >&) */
int _ZN7IdxMask6genKeyERNSt3__16vectorItNS0_9allocatorItEEEE(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE */
/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short, std::__1::allocator<unsigned short>&>&) */
int _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE17clearMapping_ListEv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::clearMapping_List() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE17clearMapping_ListEv(void);

/* Symbol: _ZN5IdxDMD2Ev */
/* Demangled: IdxDM::~IdxDM() */
int _ZN5IdxDMD2Ev(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: ut_ok_cnt */
/* Demangled: ut_ok_cnt */
extern void* ut_ok_cnt;

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE9singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*)::singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE9singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZTV14IdxMgrImplBase */
/* Demangled: vtable for IdxMgrImplBase */
extern void* _ZTV14IdxMgrImplBase;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE */
/* Demangled: std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&>&) */
int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorItNS_9allocatorItEEE11__vallocateEj(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE25updateMapping_List_By_DimEjjPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE25updateMapping_List_By_DimEjjPv(void);

/* Symbol: _ZN7IdxMaskC1Ev */
/* Demangled: IdxMask::IdxMask() */
int _ZN7IdxMaskC1Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED0Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED0Ev(void);

/* Symbol: _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ER16IDX_QUERY_RESULT */
/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, IDX_QUERY_RESULT&) */
int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ER16IDX_QUERY_RESULT(void);

/* Symbol: _ZNSt3__113__vector_baseINS_6vectorItNS_9allocatorItEEEENS2_IS4_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_6vectorItNS_9allocatorItEEEENS2_IS4_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<COMB_TYPE, std::__1::allocator<COMB_TYPE> >::__swap_out_circular_buffer(std::__1::__split_buffer<COMB_TYPE, std::__1::allocator<COMB_TYPE>&>&) */
int _ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_ */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void);

/* Symbol: _ZN7IdxMask10compareKeyEPjS0_ */
/* Demangled: IdxMask::compareKey(unsigned int*, unsigned int*) */
int _ZN7IdxMask10compareKeyEPjS0_(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE14link_singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*)::link_singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE14link_singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EEC2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EEC2Ev(void);

/* Symbol: _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE */
/* Demangled: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)4> */
extern void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE4initEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::init(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE4initEPv(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE14link_singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*)::link_singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE14link_singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED2Ev(void);

/* Symbol: _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE9singleton */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*)::singleton */
extern void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE9singleton;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _Z13nvram_ut_funci */
/* Demangled: nvram_ut_func(int) */
int _Z13nvram_ut_funci(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE4initEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::init(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE4initEPv(void);

/* Symbol: _ZN14IdxMgrImplBase11getInstanceEN11NSIspTuning12ESensorDev_TE */
/* Demangled: IdxMgrImplBase::getInstance(NSIspTuning::ESensorDev_T) */
int _ZN14IdxMgrImplBase11getInstanceEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN6IdxMgr12setValidFlagEN11NSIspTuning12ESensorDev_TE */
/* Demangled: IdxMgr::setValidFlag(NSIspTuning::ESensorDev_T) */
int _ZN6IdxMgr12setValidFlagEN11NSIspTuning12ESensorDev_TE(void);

/* Symbol: _ZN6IdxMgrD0Ev */
/* Demangled: IdxMgr::~IdxMgr() */
int _ZN6IdxMgrD0Ev(void);

/* Symbol: _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE9singleton */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*)::singleton */
extern void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE9singleton;

/* Symbol: _Z10readGoldenNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEj */
/* Demangled: readGolden(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int) */
int _Z10readGoldenNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN5IdxDMC1Ev */
/* Demangled: IdxDM::IdxDM() */
int _ZN5IdxDMC1Ev(void);

/* Symbol: _ZN7IdxMaskC2Ev */
/* Demangled: IdxMask::IdxMask() */
int _ZN7IdxMaskC2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__split_buffer<COMB_TYPE, std::__1::allocator<COMB_TYPE>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_ */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void);

/* Symbol: _ZTV6IdxMgr */
/* Demangled: vtable for IdxMgr */
extern void* _ZTV6IdxMgr;

/* Symbol: _ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<COMB_TYPE, std::__1::allocator<COMB_TYPE> >::__push_back_slow_path<COMB_TYPE const&>(COMB_TYPE const&) */
int _ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEEC2ERKS3_ */
/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::vector(std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > const&) */
int _ZNSt3__16vectorItNS_9allocatorItEEEC2ERKS3_(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE17clearMapping_ListEv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::clearMapping_List() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE17clearMapping_ListEv(void);

/* Symbol: _ZN6IdxMgr15getScenarioInfoEN11NSIspTuning12ESensorDev_TEPPcRt */
/* Demangled: IdxMgr::getScenarioInfo(NSIspTuning::ESensorDev_T, char**, unsigned short&) */
int _ZN6IdxMgr15getScenarioInfoEN11NSIspTuning12ESensorDev_TEPPcRt(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN14IdxMgrImplBaseC2Ev */
/* Demangled: IdxMgrImplBase::IdxMgrImplBase() */
int _ZN14IdxMgrImplBaseC2Ev(void);

/* Symbol: _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ERt */
/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, unsigned short&) */
int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ERt(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE9singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*)::singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE9singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EEC2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EEC2Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EEC2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EEC2Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_ */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _Z17do_DFS_userDefineiR9COMB_TYPERNSt3__16vectorItNS1_9allocatorItEEEEP6IdxMgrtii */
/* Demangled: do_DFS_userDefine(int, COMB_TYPE&, std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >&, IdxMgr*, unsigned short, int, int) */
int _Z17do_DFS_userDefineiR9COMB_TYPERNSt3__16vectorItNS1_9allocatorItEEEEP6IdxMgrtii(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void);

/* Symbol: _ZN6IdxMgrD1Ev */
/* Demangled: IdxMgr::~IdxMgr() */
int _ZN6IdxMgrD1Ev(void);

/* Symbol: _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE */
/* Demangled: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)16> */
extern void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE;

/* Symbol: _ZTV5IdxDM */
/* Demangled: vtable for IdxDM */
extern void* _ZTV5IdxDM;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE25updateMapping_List_By_DimEjjPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE25updateMapping_List_By_DimEjjPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE4initEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::init(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE4initEPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED0Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED0Ev(void);

/* Symbol: _ZN5IdxDMC2Ev */
/* Demangled: IdxDM::IdxDM() */
int _ZN5IdxDMC2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openERKNS_12basic_stringIcS2_NS_9allocatorIcEEEEj */
/* Demangled: std::__1::basic_ifstream<char, std::__1::char_traits<char> >::open(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
int _ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openERKNS_12basic_stringIcS2_NS_9allocatorIcEEEEj(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE14link_singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*)::link_singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE14link_singleton;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_ */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::~IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED2Ev(void);

/* Symbol: _ZTV7IdxMask */
/* Demangled: vtable for IdxMask */
extern void* _ZTV7IdxMask;

/* Symbol: _ZNSt3__113__vector_baseI9COMB_TYPENS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__vector_base<COMB_TYPE, std::__1::allocator<COMB_TYPE> >::~__vector_base() */
int _ZNSt3__113__vector_baseI9COMB_TYPENS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void);

/* Symbol: _ZN7IdxMask4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt */
/* Demangled: IdxMask::init(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
int _ZN7IdxMask4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE25updateMapping_List_By_DimEjjPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE25updateMapping_List_By_DimEjjPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: ut_ok_cnt_curMod */
/* Demangled: ut_ok_cnt_curMod */
extern void* ut_ok_cnt_curMod;

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE25updateMapping_List_By_DimEjjPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE25updateMapping_List_By_DimEjjPv(void);

/* Symbol: _ZN5IdxDM5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxDM::query(NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN5IdxDM5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE14link_singleton */
/* Demangled: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*)::link_singleton */
extern void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE14link_singleton;

/* Symbol: _ZN7IdxMaskD0Ev */
/* Demangled: IdxMask::~IdxMask() */
int _ZN7IdxMaskD0Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE17clearMapping_ListEv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::clearMapping_List() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE17clearMapping_ListEv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE25updateMapping_List_By_DimEjjPv */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE25updateMapping_List_By_DimEjjPv(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EEC2Ev */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::IdxMgrImpl() */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EEC2Ev(void);

/* Symbol: _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E */
/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void);

/* Symbol: _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TEj */
/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, unsigned int) */
int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TEj(void);

/* Symbol: _ZN6IdxMgrD2Ev */
/* Demangled: IdxMgr::~IdxMgr() */
int _ZN6IdxMgrD2Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_MAPPING_MGR_H */
