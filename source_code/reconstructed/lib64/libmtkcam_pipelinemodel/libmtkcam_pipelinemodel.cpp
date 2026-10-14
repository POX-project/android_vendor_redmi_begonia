/*
 * Reverse-Engineered Source for: libmtkcam_pipelinemodel.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinemodel"

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
#include "libmtkcam_pipelinemodel.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: PipelineModelManagerImpl::~PipelineModelManagerImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN24PipelineModelManagerImplD1Ev(void) {
    ALOGD("_ZN24PipelineModelManagerImplD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::EventLogPrinter> std::__1::shared_ptr<NSCam::EventLogPrinter>::make_shared<>() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJEEES3_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJEEES3_DpOT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModelManager-in-PipelineModelManagerImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTC24PipelineModelManagerImpl0_N5NSCam2v38pipeline5model21IPipelineModelManagerE = NULL;

/* Exported Object: vtable for PipelineModelManagerImpl::MyDebuggee */
extern "C" __attribute__((visibility("default"))) void* _ZTVN24PipelineModelManagerImpl10MyDebuggeeE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::PipelineModelInfo, std::__1::allocator<PipelineModelManagerImpl::PipelineModelInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl10beginFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::waitUntilOpenDoneLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl23waitUntilOpenDoneLockedEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl23waitUntilOpenDoneLockedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int __cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int __getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}

/* Demangled: android::sp<PipelineModelManagerImpl>::sp(PipelineModelManagerImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI24PipelineModelManagerImplEC2EPS1_(void) {
    ALOGD("_ZN7android2spI24PipelineModelManagerImplEC2EPS1_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::MyDebuggee, std::__1::allocator<PipelineModelManagerImpl::MyDebuggee> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::EventLogPrinter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15EventLogPrinterE = NULL;

/* Demangled: void std::__1::vector<std::__1::future<bool>, std::__1::allocator<std::__1::future<bool> > >::__push_back_slow_path<std::__1::future<bool> >(std::__1::future<bool>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_6futureIbEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_6futureIbEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: PipelineModelManagerImpl::PipelineModelManagerImpl(NSCam::IDebuggeeManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN24PipelineModelManagerImplC2EPN5NSCam16IDebuggeeManagerE(void) {
    ALOGD("_ZN24PipelineModelManagerImplC2EPN5NSCam16IDebuggeeManagerE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEm() called");
    return 0;
}

/* Exported Object: VTT for PipelineModelManagerImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTT24PipelineModelManagerImpl = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl4initEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl4initEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: PipelineModelManagerImpl::getPipelineModel(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK24PipelineModelManagerImpl16getPipelineModelEi(void) {
    ALOGD("_ZNK24PipelineModelManagerImpl16getPipelineModelEi() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::EventLogPrinter> std::__1::shared_ptr<NSCam::EventLogPrinter>::make_shared<int, int>(int&&, int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJiiEEES3_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJiiEEES3_DpOT_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::EventLogPrinter>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IPipelineModel-in-NSCam::v3::pipeline::model::PipelineModelImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model17PipelineModelImplE0_NS2_14IPipelineModelE = NULL;

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int __eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int __netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Demangled: PipelineModelManagerImpl::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN24PipelineModelManagerImpl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE(void) {
    ALOGD("_ZN24PipelineModelManagerImpl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE() called");
    return 0;
}

/* Demangled: PipelineModelManagerImpl::~PipelineModelManagerImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN24PipelineModelManagerImplD2Ev(void) {
    ALOGD("_ZN24PipelineModelManagerImplD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::PipelineModelInfo, std::__1::allocator<PipelineModelManagerImpl::PipelineModelInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::initPipelineStaticInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl22initPipelineStaticInfoEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl22initPipelineStaticInfoEv() called");
    return 0;
}

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int __gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::createInstance(NSCam::v3::pipeline::model::PipelineModelImpl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl14createInstanceERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl14createInstanceERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: android::sp<PipelineModelManagerImpl>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI24PipelineModelManagerImplED2Ev(void) {
    ALOGD("_ZN7android2spI24PipelineModelManagerImplED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::open(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::wp<NSCam::v3::pipeline::model::IPipelineModelCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl4openERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2wpINS2_22IPipelineModelCallbackEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl4openERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2wpINS2_22IPipelineModelCallbackEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::endFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl8endFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl8endFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::PipelineModelImpl(NSCam::v3::pipeline::model::PipelineModelImpl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImplC2ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImplC2ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: PipelineModelManagerImpl::MyDebuggee::mName */
extern "C" __attribute__((visibility("default"))) void* _ZN24PipelineModelManagerImpl10MyDebuggee5mNameE = NULL;

/* Demangled: PipelineModelManagerImpl::PipelineModelManagerImpl(NSCam::IDebuggeeManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN24PipelineModelManagerImplC1EPN5NSCam16IDebuggeeManagerE(void) {
    ALOGD("_ZN24PipelineModelManagerImplC1EPN5NSCam16IDebuggeeManagerE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: virtual thunk to PipelineModelManagerImpl::~PipelineModelManagerImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N24PipelineModelManagerImplD0Ev(void) {
    ALOGD("_ZTv0_n24_N24PipelineModelManagerImplD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::close() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl5closeEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl5closeEv() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: vtable for PipelineModelManagerImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV24PipelineModelManagerImpl = NULL;

/* Exported Object: vtable for NSCam::v3::pipeline::model::PipelineModelImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model17PipelineModelImplE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::MyDebuggee, std::__1::allocator<PipelineModelManagerImpl::MyDebuggee> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::MyDebuggee, std::__1::allocator<PipelineModelManagerImpl::MyDebuggee> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::waitUntilOpenDone() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl17waitUntilOpenDoneEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl17waitUntilOpenDoneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEEE = NULL;

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int __fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::PipelineModelImpl(NSCam::v3::pipeline::model::PipelineModelImpl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImplC1ERKNS3_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImplC1ERKNS3_14CreationParamsE() called");
    return 0;
}

/* Demangled: PipelineModelManagerImpl::~PipelineModelManagerImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN24PipelineModelManagerImplD0Ev(void) {
    ALOGD("_ZN24PipelineModelManagerImplD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::submitRequest(std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams> > > const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<bool>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIbE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIbE4moveEv() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int __unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int __fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::IPipelineModelManager::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model21IPipelineModelManager3getEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model21IPipelineModelManager3getEv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to PipelineModelManagerImpl::~PipelineModelManagerImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N24PipelineModelManagerImplD1Ev(void) {
    ALOGD("_ZTv0_n24_N24PipelineModelManagerImplD1Ev() called");
    return 0;
}

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int __subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::pipeline::model::PipelineModelImpl>::operator=(android::sp<NSCam::v3::pipeline::model::PipelineModelImpl>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v38pipeline5model17PipelineModelImplEEaSEOS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v38pipeline5model17PipelineModelImplEEaSEOS6_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int __multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::PipelineModelInfo, std::__1::allocator<PipelineModelManagerImpl::PipelineModelInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::map<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo>, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> > > >::operator[](int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__13mapIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void) {
    ALOGD("_ZNSt3__13mapIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::PipelineModelImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model17PipelineModelImplE = NULL;

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int __floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::configure(std::__1::shared_ptr<NSCam::v3::pipeline::model::UserConfigurationParams> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model17PipelineModelImpl9configureERKNSt3__110shared_ptrINS2_23UserConfigurationParamsEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model17PipelineModelImpl9configureERKNSt3__110shared_ptrINS2_23UserConfigurationParamsEEE() called");
    return 0;
}

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int __addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: PipelineModelManagerImpl::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN24PipelineModelManagerImpl5debugERN7android7PrinterERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void) {
    ALOGD("_ZN24PipelineModelManagerImpl5debugERN7android7PrinterERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE() called");
    return 0;
}
