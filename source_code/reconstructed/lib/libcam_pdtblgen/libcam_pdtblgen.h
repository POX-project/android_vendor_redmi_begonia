/*
 * Reverse-Engineered ABI Specification for: libcam.pdtblgen.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.pdtblgen.so
 */

#ifndef BEGONIA_RE_LIBCAM_PDTBLGEN_H
#define BEGONIA_RE_LIBCAM_PDTBLGEN_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12PDTblGenImpl13pd_tbl_readerEttPhtPc */
/* Demangled: PDTblGenImpl::pd_tbl_reader(unsigned short, unsigned short, unsigned char*, unsigned short, char*) */
int _ZN12PDTblGenImpl13pd_tbl_readerEttPhtPc(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, PDTblGenImpl::TblData>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN9IPDTblGen11getInstanceEv */
/* Demangled: IPDTblGen::getInstance() */
int _ZN9IPDTblGen11getInstanceEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__13mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEEixERS7_ */
/* Demangled: std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > >::operator[](int const&) */
int _ZNSt3__13mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEEixERS7_(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN12PDTblGenImpl19transformCoordinateEN5NSCam5MSizeER19SET_PD_BLOCK_INFO_TitPNS_5pointE */
/* Demangled: PDTblGenImpl::transformCoordinate(NSCam::MSize, SET_PD_BLOCK_INFO_T&, int, unsigned short, PDTblGenImpl::point*) */
int _ZN12PDTblGenImpl19transformCoordinateEN5NSCam5MSizeER19SET_PD_BLOCK_INFO_TitPNS_5pointE(void);

/* Symbol: _ZN12PDTblGenImpl4stopEi */
/* Demangled: PDTblGenImpl::stop(int) */
int _ZN12PDTblGenImpl4stopEi(void);

/* Symbol: _ZN12PDTblGenImpl6getTblEiiR3Tbl */
/* Demangled: PDTblGenImpl::getTbl(int, int, Tbl&) */
int _ZN12PDTblGenImpl6getTblEiiR3Tbl(void);

/* Symbol: _ZTV12PDTblGenImpl */
/* Demangled: vtable for PDTblGenImpl */
extern void* _ZTV12PDTblGenImpl;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN12PDTblGenImpl11generateTblEN5NSCam5MSizeEtttttPNS_5pointERNS_6TblBufE */
/* Demangled: PDTblGenImpl::generateTbl(NSCam::MSize, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, PDTblGenImpl::point*, PDTblGenImpl::TblBuf&) */
int _ZN12PDTblGenImpl11generateTblEN5NSCam5MSizeEtttttPNS_5pointERNS_6TblBufE(void);

/* Symbol: _ZN12PDTblGenImplD2Ev */
/* Demangled: PDTblGenImpl::~PDTblGenImpl() */
int _ZN12PDTblGenImplD2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void);

/* Symbol: _ZN12PDTblGenImplD1Ev */
/* Demangled: PDTblGenImpl::~PDTblGenImpl() */
int _ZN12PDTblGenImplD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__construct_nodeIJNS8_IiSC_EEEEENS_10unique_ptrINS_11__tree_nodeISD_PvEENS_22__tree_node_destructorINS7_ISN_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*> > > > std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::__construct_node<std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > >(std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >&&) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__construct_nodeIJNS8_IiSC_EEEEENS_10unique_ptrINS_11__tree_nodeISD_PvEENS_22__tree_node_destructorINS7_ISN_EEEEEEDpOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE25__emplace_unique_key_argsIiJNS8_IiSC_EEEEENS8_INS_15__tree_iteratorISD_PNS_11__tree_nodeISD_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::__emplace_unique_key_args<int, std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > >(int const&, std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >&&) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE25__emplace_unique_key_argsIiJNS8_IiSC_EEEEENS8_INS_15__tree_iteratorISD_PNS_11__tree_nodeISD_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN12PDTblGenImplD0Ev */
/* Demangled: PDTblGenImpl::~PDTblGenImpl() */
int _ZN12PDTblGenImplD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__tree_node<std::__1::__value_type<int, PDTblGenImpl::TblData>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_ */
/* Demangled: void std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__push_back_slow_path<unsigned short const&>(unsigned short const&) */
int _ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_(void);

/* Symbol: _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE */
/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short, std::__1::allocator<unsigned short>&>&) */
int _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE(void);

/* Symbol: _ZN12PDTblGenImplC2Ev */
/* Demangled: PDTblGenImpl::PDTblGenImpl() */
int _ZN12PDTblGenImplC2Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN12PDTblGenImpl9mergeSortEPNS_5pointEhhS1_ */
/* Demangled: PDTblGenImpl::mergeSort(PDTblGenImpl::point*, unsigned char, unsigned char, PDTblGenImpl::point*) */
int _ZN12PDTblGenImpl9mergeSortEPNS_5pointEhhS1_(void);

/* Symbol: _ZN12PDTblGenImplC1Ev */
/* Demangled: PDTblGenImpl::PDTblGenImpl() */
int _ZN12PDTblGenImplC1Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN12PDTblGenImpl5startEii */
/* Demangled: PDTblGenImpl::start(int, int) */
int _ZN12PDTblGenImpl5startEii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__tree_node<std::__1::__value_type<int, PDTblGenImpl::TblData>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::__emplace_unique_key_args<int, std::__1::pair<int, PDTblGenImpl::TblData> >(int const&, std::__1::pair<int, PDTblGenImpl::TblData>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE7destroyEPNS_11__tree_nodeISD_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE7destroyEPNS_11__tree_nodeISD_PvEE(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_PDTBLGEN_H */
