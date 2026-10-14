/*
 * Reverse-Engineered Source for: libmtkcam_mapping_mgr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_mapping_mgr"

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
#include "libmtkcam_mapping_mgr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: IdxMgrImplBase::~IdxMgrImplBase() */
extern "C" __attribute__((visibility("default"))) int _ZN14IdxMgrImplBaseD0Ev(void) {
    ALOGD("_ZN14IdxMgrImplBaseD0Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED0Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED0Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED0Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED0Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::init(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE4initEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE4initEPv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<ISP_MAPPING_INFO_T, std::__1::allocator<ISP_MAPPING_INFO_T> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI18ISP_MAPPING_INFO_TNS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI18ISP_MAPPING_INFO_TNS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE = NULL;

/* Demangled: IdxMgr::patchMappingInfo(NSIspTuning::ESensorDev_T, NSIspTuning::_CAM_IDX_QRY_COMB_&, NSIspTuning::EDim_T, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr16patchMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_ENS0_6EDim_TEPj(void) {
    ALOGD("_ZN6IdxMgr16patchMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_ENS0_6EDim_TEPj() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::vector(std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEEC2ERKS5_() called");
    return 0;
}

/* Exported Object: ut_ng_cnt */
extern "C" __attribute__((visibility("default"))) void* ut_ng_cnt = NULL;

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*)::link_singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE14link_singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::clearMapping_List() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE17clearMapping_ListEv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE17clearMapping_ListEv() called");
    return 0;
}

/* Demangled: find_ambigious(unsigned short, NSIspTuning::_CAM_IDX_QRY_COMB_&, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z14find_ambigioustRN11NSIspTuning18_CAM_IDX_QRY_COMB_Eii(void) {
    ALOGD("_Z14find_ambigioustRN11NSIspTuning18_CAM_IDX_QRY_COMB_Eii() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::__push_back_slow_path<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > const&>(std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: IdxDM::~IdxDM() */
extern "C" __attribute__((visibility("default"))) int _ZN5IdxDMD0Ev(void) {
    ALOGD("_ZN5IdxDMD0Ev() called");
    return 0;
}

/* Demangled: IdxMask::~IdxMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMaskD1Ev(void) {
    ALOGD("_ZN7IdxMaskD1Ev() called");
    return 0;
}

/* Exported Object: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE9singleton = NULL;

/* Demangled: IdxMgr::getMappingInfo(NSIspTuning::ESensorDev_T, NSIspTuning::_CAM_IDX_QRY_COMB_&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr14getMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_Ej(void) {
    ALOGD("_ZN6IdxMgr14getMappingInfoEN11NSIspTuning12ESensorDev_TERNS0_18_CAM_IDX_QRY_COMB_Ej() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImplBase::~IdxMgrImplBase() */
extern "C" __attribute__((visibility("default"))) int _ZN14IdxMgrImplBaseD1Ev(void) {
    ALOGD("_ZN14IdxMgrImplBaseD1Ev() called");
    return 0;
}

/* Demangled: IdxDM::init(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN5IdxDM4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt(void) {
    ALOGD("_ZN5IdxDM4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt() called");
    return 0;
}

/* Demangled: IdxMgr::IdxMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgrC1Ev(void) {
    ALOGD("_ZN6IdxMgrC1Ev() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE9singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgr::createInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr14createInstanceEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN6IdxMgr14createInstanceEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_EPKc(void) {
    ALOGD("_ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_EPKc() called");
    return 0;
}

/* Exported Object: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE = NULL;

/* Exported Object: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE9singleton = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, int (*)(int), int> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFiiEiEEEEEPvSA_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFiiEiEEEEEPvSA_() called");
    return 0;
}

/* Exported Object: goldenComb */
extern "C" __attribute__((visibility("default"))) void* goldenComb = NULL;

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE9singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::init(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE4initEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE4initEPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EEC2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EEC2Ev() called");
    return 0;
}

/* Demangled: IdxMask::query(NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMask5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN7IdxMask5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Exported Object: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)8> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE = NULL;

/* Demangled: std::__1::__split_buffer<COMB_TYPE, std::__1::allocator<COMB_TYPE>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<COMB_TYPE>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE9singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED0Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: IdxDM::~IdxDM() */
extern "C" __attribute__((visibility("default"))) int _ZN5IdxDMD1Ev(void) {
    ALOGD("_ZN5IdxDMD1Ev() called");
    return 0;
}

/* Demangled: IdxMask::~IdxMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMaskD2Ev(void) {
    ALOGD("_ZN7IdxMaskD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxBase::mismatchHandling(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxBase16mismatchHandlingEN11NSIspTuning9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN7IdxBase16mismatchHandlingEN11NSIspTuning9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::clearMapping_List() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE17clearMapping_ListEv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE17clearMapping_ListEv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__push_back_slow_path<unsigned short const&>(unsigned short const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE21__push_back_slow_pathIRKtEEvOT_() called");
    return 0;
}

/* Exported Object: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE9singleton = NULL;

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, bool (*)(IdxMgr*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int), IdxMgr*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFbP6IdxMgriNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiES8_iSE_iEEEEEPvSI_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFbP6IdxMgriNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiES8_iSE_iEEEEEPvSI_() called");
    return 0;
}

/* Demangled: IdxMgrImplBase::~IdxMgrImplBase() */
extern "C" __attribute__((visibility("default"))) int _ZN14IdxMgrImplBaseD2Ev(void) {
    ALOGD("_ZN14IdxMgrImplBaseD2Ev() called");
    return 0;
}

/* Demangled: IdxMgr::IdxMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgrC2Ev(void) {
    ALOGD("_ZN6IdxMgrC2Ev() called");
    return 0;
}

/* Demangled: ut_by_module(IdxMgr*, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
extern "C" __attribute__((visibility("default"))) int _Z12ut_by_moduleP6IdxMgriNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void) {
    ALOGD("_Z12ut_by_moduleP6IdxMgriNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EED2Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: ut_ng_cnt_curMod */
extern "C" __attribute__((visibility("default"))) void* ut_ng_cnt_curMod = NULL;

/* Demangled: nvram_ut(int) */
extern "C" __attribute__((visibility("default"))) int _Z8nvram_uti(void) {
    ALOGD("_Z8nvram_uti() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgr::setMappingInfo(NSIspTuning::ESensorDev_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr14setMappingInfoEN11NSIspTuning12ESensorDev_TERKNS0_18_CAM_IDX_QRY_COMB_Ej(void) {
    ALOGD("_ZN6IdxMgr14setMappingInfoEN11NSIspTuning12ESensorDev_TERKNS0_18_CAM_IDX_QRY_COMB_Ej() called");
    return 0;
}

/* Demangled: IdxMask::genKey(std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMask6genKeyERNSt3__16vectorItNS0_9allocatorItEEEE(void) {
    ALOGD("_ZN7IdxMask6genKeyERNSt3__16vectorItNS0_9allocatorItEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned short, std::__1::allocator<unsigned short>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE26__swap_out_circular_bufferERNS_14__split_bufferItRS2_EE() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::clearMapping_List() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE17clearMapping_ListEv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE17clearMapping_ListEv() called");
    return 0;
}

/* Demangled: IdxDM::~IdxDM() */
extern "C" __attribute__((visibility("default"))) int _ZN5IdxDMD2Ev(void) {
    ALOGD("_ZN5IdxDMD2Ev() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: ut_ok_cnt */
extern "C" __attribute__((visibility("default"))) void* ut_ok_cnt = NULL;

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE9singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Exported Object: vtable for IdxMgrImplBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV14IdxMgrImplBase = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorItNS_9allocatorItEEEERNS2_IS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorINS0_ItNS_9allocatorItEEEENS1_IS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS4_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE25updateMapping_List_By_DimEjjPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE25updateMapping_List_By_DimEjjPv() called");
    return 0;
}

/* Demangled: IdxMask::IdxMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMaskC1Ev(void) {
    ALOGD("_ZN7IdxMaskC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED0Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED0Ev() called");
    return 0;
}

/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, IDX_QUERY_RESULT&) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ER16IDX_QUERY_RESULT(void) {
    ALOGD("_ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ER16IDX_QUERY_RESULT() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >, std::__1::allocator<std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_6vectorItNS_9allocatorItEEEENS2_IS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_6vectorItNS_9allocatorItEEEENS2_IS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<COMB_TYPE, std::__1::allocator<COMB_TYPE> >::__swap_out_circular_buffer(std::__1::__split_buffer<COMB_TYPE, std::__1::allocator<COMB_TYPE>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_() called");
    return 0;
}

/* Demangled: IdxMask::compareKey(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMask10compareKeyEPjS0_(void) {
    ALOGD("_ZN7IdxMask10compareKeyEPjS0_() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getInstance(void*)::link_singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE11getInstanceEPvE14link_singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EEC2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EEC2Ev() called");
    return 0;
}

/* Exported Object: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::init(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE4initEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE4initEPv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*)::link_singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPvE14link_singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EED2Ev() called");
    return 0;
}

/* Exported Object: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE9singleton = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: nvram_ut_func(int) */
extern "C" __attribute__((visibility("default"))) int _Z13nvram_ut_funci(void) {
    ALOGD("_Z13nvram_ut_funci() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::init(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE4initEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE4initEPv() called");
    return 0;
}

/* Demangled: IdxMgrImplBase::getInstance(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN14IdxMgrImplBase11getInstanceEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN14IdxMgrImplBase11getInstanceEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: IdxMgr::setValidFlag(NSIspTuning::ESensorDev_T) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr12setValidFlagEN11NSIspTuning12ESensorDev_TE(void) {
    ALOGD("_ZN6IdxMgr12setValidFlagEN11NSIspTuning12ESensorDev_TE() called");
    return 0;
}

/* Demangled: IdxMgr::~IdxMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgrD0Ev(void) {
    ALOGD("_ZN6IdxMgrD0Ev() called");
    return 0;
}

/* Exported Object: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE9singleton = NULL;

/* Demangled: readGolden(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z10readGoldenNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEj(void) {
    ALOGD("_Z10readGoldenNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE15getMapping_ListEjRNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxDM::IdxDM() */
extern "C" __attribute__((visibility("default"))) int _ZN5IdxDMC1Ev(void) {
    ALOGD("_ZN5IdxDMC1Ev() called");
    return 0;
}

/* Demangled: IdxMask::IdxMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMaskC2Ev(void) {
    ALOGD("_ZN7IdxMaskC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<COMB_TYPE, std::__1::allocator<COMB_TYPE>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferI9COMB_TYPERNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_() called");
    return 0;
}

/* Exported Object: vtable for IdxMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV6IdxMgr = NULL;

/* Demangled: void std::__1::vector<COMB_TYPE, std::__1::allocator<COMB_TYPE> >::__push_back_slow_path<COMB_TYPE const&>(COMB_TYPE const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI9COMB_TYPENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >::vector(std::__1::vector<unsigned short, std::__1::allocator<unsigned short> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorItNS_9allocatorItEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorItNS_9allocatorItEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::clearMapping_List() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE17clearMapping_ListEv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE17clearMapping_ListEv() called");
    return 0;
}

/* Demangled: IdxMgr::getScenarioInfo(NSIspTuning::ESensorDev_T, char**, unsigned short&) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr15getScenarioInfoEN11NSIspTuning12ESensorDev_TEPPcRt(void) {
    ALOGD("_ZN6IdxMgr15getScenarioInfoEN11NSIspTuning12ESensorDev_TEPPcRt() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: IdxMgrImplBase::IdxMgrImplBase() */
extern "C" __attribute__((visibility("default"))) int _ZN14IdxMgrImplBaseC2Ev(void) {
    ALOGD("_ZN14IdxMgrImplBaseC2Ev() called");
    return 0;
}

/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&, unsigned short&) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ERt(void) {
    ALOGD("_ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_ERt() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPvE9singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EEC2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EEC2Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EEC2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EEC2Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: do_DFS_userDefine(int, COMB_TYPE&, std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >&, IdxMgr*, unsigned short, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17do_DFS_userDefineiR9COMB_TYPERNSt3__16vectorItNS1_9allocatorItEEEEP6IdxMgrtii(void) {
    ALOGD("_Z17do_DFS_userDefineiR9COMB_TYPERNSt3__16vectorItNS1_9allocatorItEEEEP6IdxMgrtii() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt() called");
    return 0;
}

/* Demangled: IdxMgr::~IdxMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgrD1Ev(void) {
    ALOGD("_ZN6IdxMgrD1Ev() called");
    return 0;
}

/* Exported Object: vtable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)16> */
extern "C" __attribute__((visibility("default"))) void* _ZTV10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE = NULL;

/* Exported Object: vtable for IdxDM */
extern "C" __attribute__((visibility("default"))) void* _ZTV5IdxDM = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE25updateMapping_List_By_DimEjjPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE25updateMapping_List_By_DimEjjPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::init(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE4initEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE4initEPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED0Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EED0Ev() called");
    return 0;
}

/* Demangled: IdxDM::IdxDM() */
extern "C" __attribute__((visibility("default"))) int _ZN5IdxDMC2Ev(void) {
    ALOGD("_ZN5IdxDMC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ifstream<char, std::__1::char_traits<char> >::open(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openERKNS_12basic_stringIcS2_NS_9allocatorIcEEEEj(void) {
    ALOGD("_ZNSt3__114basic_ifstreamIcNS_11char_traitsIcEEE4openERKNS_12basic_stringIcS2_NS_9allocatorIcEEEEj() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*)::link_singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPvE14link_singleton = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::addMappingFunction(unsigned int, unsigned int (NSIspTuning::IspTuningCustom::*)(unsigned int, void*), NSIspTuning::IspTuningCustom&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE18addMappingFunctionEjMNS0_15IspTuningCustomEFjjPvERS3_() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::~IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EED2Ev() called");
    return 0;
}

/* Exported Object: vtable for IdxMask */
extern "C" __attribute__((visibility("default"))) void* _ZTV7IdxMask = NULL;

/* Demangled: std::__1::__vector_base<COMB_TYPE, std::__1::allocator<COMB_TYPE> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseI9COMB_TYPENS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseI9COMB_TYPENS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::getInstance(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE11getInstanceEPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt() called");
    return 0;
}

/* Demangled: IdxMask::init(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMask4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt(void) {
    ALOGD("_ZN7IdxMask4initEN11NSIspTuning9EModule_TEP10IDX_BASE_TPt() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE25updateMapping_List_By_DimEjjPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE25updateMapping_List_By_DimEjjPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)4>::getMapping_List_Last(NSIspTuning::_CAM_IDX_QRY_COMB_&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE4EE20getMapping_List_LastERNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Exported Object: ut_ok_cnt_curMod */
extern "C" __attribute__((visibility("default"))) void* ut_ok_cnt_curMod = NULL;

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::classFactory(NSIspTuning::EModule_T, IDX_BASE_T*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE12classFactoryENS0_9EModule_TEP10IDX_BASE_TPt() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::getInstance(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE11getInstanceEPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE25updateMapping_List_By_DimEjjPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE25updateMapping_List_By_DimEjjPv() called");
    return 0;
}

/* Demangled: IdxDM::query(NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5IdxDM5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN5IdxDM5queryERKN11NSIspTuning18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: guard variable for IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::getInstance(void*)::link_singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE11getInstanceEPvE14link_singleton = NULL;

/* Demangled: IdxMask::~IdxMask() */
extern "C" __attribute__((visibility("default"))) int _ZN7IdxMaskD0Ev(void) {
    ALOGD("_ZN7IdxMaskD0Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::clearMapping_List() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE17clearMapping_ListEv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE17clearMapping_ListEv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)2>::updateMapping_List(unsigned int, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE2EE18updateMapping_ListEjRKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)8>::getInstance(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE8EE11getInstanceEPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::updateMapping_List_By_Dim(unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE25updateMapping_List_By_DimEjjPv(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EE25updateMapping_List_By_DimEjjPv() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)16>::IdxMgrImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EEC2Ev(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE16EEC2Ev() called");
    return 0;
}

/* Demangled: IdxMgrImpl<(NSIspTuning::ESensorDev_T)1>::query(NSIspTuning::EModule_T, NSIspTuning::_CAM_IDX_QRY_COMB_ const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E(void) {
    ALOGD("_ZN10IdxMgrImplILN11NSIspTuning12ESensorDev_TE1EE5queryENS0_9EModule_TERKNS0_18_CAM_IDX_QRY_COMB_E() called");
    return 0;
}

/* Demangled: IdxMgr::query(NSIspTuning::ESensorDev_T, NSIspTuning::EModule_T, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TEj(void) {
    ALOGD("_ZN6IdxMgr5queryEN11NSIspTuning12ESensorDev_TENS0_9EModule_TEj() called");
    return 0;
}

/* Demangled: IdxMgr::~IdxMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN6IdxMgrD2Ev(void) {
    ALOGD("_ZN6IdxMgrD2Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;
