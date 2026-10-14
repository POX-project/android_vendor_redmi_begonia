/*
 * Reverse-Engineered Source for: libcam.pdtblgen.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_pdtblgen"

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
#include "libcam_pdtblgen.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: PDTblGenImpl::pd_tbl_reader(unsigned short, unsigned short, unsigned char*, unsigned short, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImpl13pd_tbl_readerEttPhtPc(void) {
    ALOGD("_ZN12PDTblGenImpl13pd_tbl_readerEttPhtPc() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, PDTblGenImpl::TblData>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: IPDTblGen::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9IPDTblGen11getInstanceEv(void) {
    ALOGD("_ZN9IPDTblGen11getInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > >::operator[](int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEEixERS7_(void) {
    ALOGD("_ZNSt3__13mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS2_EEEEEixERS7_() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: PDTblGenImpl::transformCoordinate(NSCam::MSize, SET_PD_BLOCK_INFO_T&, int, unsigned short, PDTblGenImpl::point*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImpl19transformCoordinateEN5NSCam5MSizeER19SET_PD_BLOCK_INFO_TitPNS_5pointE(void) {
    ALOGD("_ZN12PDTblGenImpl19transformCoordinateEN5NSCam5MSizeER19SET_PD_BLOCK_INFO_TitPNS_5pointE() called");
    return 0;
}

/* Demangled: PDTblGenImpl::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImpl4stopEi(void) {
    ALOGD("_ZN12PDTblGenImpl4stopEi() called");
    return 0;
}

/* Demangled: PDTblGenImpl::getTbl(int, int, Tbl&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImpl6getTblEiiR3Tbl(void) {
    ALOGD("_ZN12PDTblGenImpl6getTblEiiR3Tbl() called");
    return 0;
}

/* Exported Object: vtable for PDTblGenImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV12PDTblGenImpl = NULL;

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

/* Demangled: PDTblGenImpl::generateTbl(NSCam::MSize, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, PDTblGenImpl::point*, PDTblGenImpl::TblBuf&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImpl11generateTblEN5NSCam5MSizeEtttttPNS_5pointERNS_6TblBufE(void) {
    ALOGD("_ZN12PDTblGenImpl11generateTblEN5NSCam5MSizeEtttttPNS_5pointERNS_6TblBufE() called");
    return 0;
}

/* Demangled: PDTblGenImpl::~PDTblGenImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImplD2Ev(void) {
    ALOGD("_ZN12PDTblGenImplD2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IImageBuffer>::sp(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IImageBufferEEC2EPS2_() called");
    return 0;
}

/* Demangled: PDTblGenImpl::~PDTblGenImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImplD1Ev(void) {
    ALOGD("_ZN12PDTblGenImplD1Ev() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*> > > > std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::__construct_node<std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > >(std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__construct_nodeIJNS8_IiSC_EEEEENS_10unique_ptrINS_11__tree_nodeISD_PvEENS_22__tree_node_destructorINS7_ISN_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__construct_nodeIJNS8_IiSC_EEEEENS_10unique_ptrINS_11__tree_nodeISD_PvEENS_22__tree_node_destructorINS7_ISN_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::__emplace_unique_key_args<int, std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > >(int const&, std::__1::pair<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE25__emplace_unique_key_argsIiJNS8_IiSC_EEEEENS8_INS_15__tree_iteratorISD_PNS_11__tree_nodeISD_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE25__emplace_unique_key_argsIiJNS8_IiSC_EEEEENS8_INS_15__tree_iteratorISD_PNS_11__tree_nodeISD_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: PDTblGenImpl::~PDTblGenImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImplD0Ev(void) {
    ALOGD("_ZN12PDTblGenImplD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSG_SG_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__tree_node<std::__1::__value_type<int, PDTblGenImpl::TblData>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSG_IJEEEEEENS_4pairINS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__push_back_slow_path<unsigned short const&>(unsigned short const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short, std::__1::allocator<unsigned short>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE() called");
    return 0;
}

/* Demangled: PDTblGenImpl::PDTblGenImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImplC2Ev(void) {
    ALOGD("_ZN12PDTblGenImplC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: PDTblGenImpl::mergeSort(PDTblGenImpl::point*, unsigned char, unsigned char, PDTblGenImpl::point*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImpl9mergeSortEPNS_5pointEhhS1_(void) {
    ALOGD("_ZN12PDTblGenImpl9mergeSortEPNS_5pointEhhS1_() called");
    return 0;
}

/* Demangled: PDTblGenImpl::PDTblGenImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImplC1Ev(void) {
    ALOGD("_ZN12PDTblGenImplC1Ev() called");
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

/* Demangled: PDTblGenImpl::start(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PDTblGenImpl5startEii(void) {
    ALOGD("_ZN12PDTblGenImpl5startEii() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__tree_node<std::__1::__value_type<int, PDTblGenImpl::TblData>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::__map_value_compare<int, std::__1::__value_type<int, PDTblGenImpl::TblData>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, PDTblGenImpl::TblData> > >::__emplace_unique_key_args<int, std::__1::pair<int, PDTblGenImpl::TblData> >(int const&, std::__1::pair<int, PDTblGenImpl::TblData>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN12PDTblGenImpl7TblDataEEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJNS_4pairIiS3_EEEEENSD_INS_15__tree_iteratorIS4_PNS_11__tree_nodeIS4_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::map<int, PDTblGenImpl::TblData, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, PDTblGenImpl::TblData> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE7destroyEPNS_11__tree_nodeISD_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_3mapIiN12PDTblGenImpl7TblDataENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEEEENS_19__map_value_compareIiSD_S6_Lb1EEENS7_ISD_EEE7destroyEPNS_11__tree_nodeISD_PvEE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
