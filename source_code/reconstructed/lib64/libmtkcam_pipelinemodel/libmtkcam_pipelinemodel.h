/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinemodel.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinemodel.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN24PipelineModelManagerImplD1Ev */
/* Demangled: PipelineModelManagerImpl::~PipelineModelManagerImpl() */
int _ZN24PipelineModelManagerImplD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJEEES3_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::EventLogPrinter> std::__1::shared_ptr<NSCam::EventLogPrinter>::make_shared<>() */
int _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJEEES3_DpOT_(void);

/* Symbol: _ZTC24PipelineModelManagerImpl0_N5NSCam2v38pipeline5model21IPipelineModelManagerE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModelManager-in-PipelineModelManagerImpl */
extern void* _ZTC24PipelineModelManagerImpl0_N5NSCam2v38pipeline5model21IPipelineModelManagerE;

/* Symbol: _ZTVN24PipelineModelManagerImpl10MyDebuggeeE */
/* Demangled: vtable for PipelineModelManagerImpl::MyDebuggee */
extern void* _ZTVN24PipelineModelManagerImpl10MyDebuggeeE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::PipelineModelInfo, std::__1::allocator<PipelineModelManagerImpl::PipelineModelInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl10beginFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::beginFlush() */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl10beginFlushEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl23waitUntilOpenDoneLockedEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::waitUntilOpenDoneLocked() */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl23waitUntilOpenDoneLockedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

/* Symbol: _ZN7android2spI24PipelineModelManagerImplEC2EPS1_ */
/* Demangled: android::sp<PipelineModelManagerImpl>::sp(PipelineModelManagerImpl*) */
int _ZN7android2spI24PipelineModelManagerImplEC2EPS1_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::MyDebuggee, std::__1::allocator<PipelineModelManagerImpl::MyDebuggee> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN5NSCam15EventLogPrinterE */
/* Demangled: vtable for NSCam::EventLogPrinter */
extern void* _ZTVN5NSCam15EventLogPrinterE;

/* Symbol: _ZNSt3__16vectorINS_6futureIbEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::future<bool>, std::__1::allocator<std::__1::future<bool> > >::__push_back_slow_path<std::__1::future<bool> >(std::__1::future<bool>&&) */
int _ZNSt3__16vectorINS_6futureIbEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN24PipelineModelManagerImplC2EPN5NSCam16IDebuggeeManagerE */
/* Demangled: PipelineModelManagerImpl::PipelineModelManagerImpl(NSCam::IDebuggeeManager*) */
int _ZN24PipelineModelManagerImplC2EPN5NSCam16IDebuggeeManagerE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEm */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned long) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEm(void);

/* Symbol: _ZTT24PipelineModelManagerImpl */
/* Demangled: VTT for PipelineModelManagerImpl */
extern void* _ZTT24PipelineModelManagerImpl;

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl4initEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::init() */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl4initEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK24PipelineModelManagerImpl16getPipelineModelEi */
/* Demangled: PipelineModelManagerImpl::getPipelineModel(int) const */
int _ZNK24PipelineModelManagerImpl16getPipelineModelEi(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJiiEEES3_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::EventLogPrinter> std::__1::shared_ptr<NSCam::EventLogPrinter>::make_shared<int, int>(int&&, int&&) */
int _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEE11make_sharedIJiiEEES3_DpOT_(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::EventLogPrinter>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam15EventLogPrinterEED2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model17PipelineModelImplE0_NS2_14IPipelineModelE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IPipelineModel-in-NSCam::v3::pipeline::model::PipelineModelImpl */
extern void* _ZTCN5NSCam2v38pipeline5model17PipelineModelImplE0_NS2_14IPipelineModelE;

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: _ZN24PipelineModelManagerImpl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE */
/* Demangled: PipelineModelManagerImpl::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN24PipelineModelManagerImpl10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS4_12basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS9_ISB_EEEE(void);

/* Symbol: _ZN24PipelineModelManagerImplD2Ev */
/* Demangled: PipelineModelManagerImpl::~PipelineModelManagerImpl() */
int _ZN24PipelineModelManagerImplD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::PipelineModelInfo, std::__1::allocator<PipelineModelManagerImpl::PipelineModelInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl22initPipelineStaticInfoEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::initPipelineStaticInfo() */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl22initPipelineStaticInfoEv(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl14createInstanceERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::createInstance(NSCam::v3::pipeline::model::PipelineModelImpl::CreationParams const&) */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl14createInstanceERKNS3_14CreationParamsE(void);

/* Symbol: _ZN7android2spI24PipelineModelManagerImplED2Ev */
/* Demangled: android::sp<PipelineModelManagerImpl>::~sp() */
int _ZN7android2spI24PipelineModelManagerImplED2Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl4openERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2wpINS2_22IPipelineModelCallbackEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::open(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::wp<NSCam::v3::pipeline::model::IPipelineModelCallback> const&) */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl4openERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKN7android2wpINS2_22IPipelineModelCallbackEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl8endFlushEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::endFlush() */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl8endFlushEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImplC2ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::PipelineModelImpl(NSCam::v3::pipeline::model::PipelineModelImpl::CreationParams const&) */
int _ZN5NSCam2v38pipeline5model17PipelineModelImplC2ERKNS3_14CreationParamsE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN24PipelineModelManagerImpl10MyDebuggee5mNameE */
/* Demangled: PipelineModelManagerImpl::MyDebuggee::mName */
extern void* _ZN24PipelineModelManagerImpl10MyDebuggee5mNameE;

/* Symbol: _ZN24PipelineModelManagerImplC1EPN5NSCam16IDebuggeeManagerE */
/* Demangled: PipelineModelManagerImpl::PipelineModelManagerImpl(NSCam::IDebuggeeManager*) */
int _ZN24PipelineModelManagerImplC1EPN5NSCam16IDebuggeeManagerE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTv0_n24_N24PipelineModelManagerImplD0Ev */
/* Demangled: virtual thunk to PipelineModelManagerImpl::~PipelineModelManagerImpl() */
int _ZTv0_n24_N24PipelineModelManagerImplD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl5closeEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::close() */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl5closeEv(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZTV24PipelineModelManagerImpl */
/* Demangled: vtable for PipelineModelManagerImpl */
extern void* _ZTV24PipelineModelManagerImpl;

/* Symbol: _ZTVN5NSCam2v38pipeline5model17PipelineModelImplE */
/* Demangled: vtable for NSCam::v3::pipeline::model::PipelineModelImpl */
extern void* _ZTVN5NSCam2v38pipeline5model17PipelineModelImplE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::MyDebuggee, std::__1::allocator<PipelineModelManagerImpl::MyDebuggee> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::MyDebuggee, std::__1::allocator<PipelineModelManagerImpl::MyDebuggee> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl10MyDebuggeeENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl17waitUntilOpenDoneEv */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::waitUntilOpenDone() */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl17waitUntilOpenDoneEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::pipeline::policy::PipelineStaticInfo, std::__1::allocator<NSCam::v3::pipeline::policy::PipelineStaticInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v38pipeline6policy18PipelineStaticInfoENS_9allocatorIS5_EEEE;

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::EventLogPrinter, std::__1::allocator<NSCam::EventLogPrinter> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam15EventLogPrinterENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImplC1ERKNS3_14CreationParamsE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::PipelineModelImpl(NSCam::v3::pipeline::model::PipelineModelImpl::CreationParams const&) */
int _ZN5NSCam2v38pipeline5model17PipelineModelImplC1ERKNS3_14CreationParamsE(void);

/* Symbol: _ZN24PipelineModelManagerImplD0Ev */
/* Demangled: PipelineModelManagerImpl::~PipelineModelManagerImpl() */
int _ZN24PipelineModelManagerImplD0Ev(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::submitRequest(std::__1::vector<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::pipeline::model::UserRequestParams> > > const&, unsigned int&) */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl13submitRequestERKNSt3__16vectorINS4_10shared_ptrINS2_17UserRequestParamsEEENS4_9allocatorIS8_EEEERj(void);

/* Symbol: _ZNSt3__113__assoc_stateIbE4moveEv */
/* Demangled: std::__1::__assoc_state<bool>::move() */
int _ZNSt3__113__assoc_stateIbE4moveEv(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

/* Symbol: _ZN5NSCam2v38pipeline5model21IPipelineModelManager3getEv */
/* Demangled: NSCam::v3::pipeline::model::IPipelineModelManager::get() */
int _ZN5NSCam2v38pipeline5model21IPipelineModelManager3getEv(void);

/* Symbol: _ZNSt3__110shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEED2Ev */
/* Demangled: std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEED2Ev(void);

/* Symbol: _ZTv0_n24_N24PipelineModelManagerImplD1Ev */
/* Demangled: virtual thunk to PipelineModelManagerImpl::~PipelineModelManagerImpl() */
int _ZTv0_n24_N24PipelineModelManagerImplD1Ev(void);

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int __subtf3(void);

/* Symbol: _ZN7android2spIN5NSCam2v38pipeline5model17PipelineModelImplEEaSEOS6_ */
/* Demangled: android::sp<NSCam::v3::pipeline::model::PipelineModelImpl>::operator=(android::sp<NSCam::v3::pipeline::model::PipelineModelImpl>&&) */
int _ZN7android2spIN5NSCam2v38pipeline5model17PipelineModelImplEEaSEOS6_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int __multf3(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<PipelineModelManagerImpl::PipelineModelInfo, std::__1::allocator<PipelineModelManagerImpl::PipelineModelInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN24PipelineModelManagerImpl17PipelineModelInfoENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__13mapIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_ */
/* Demangled: std::__1::map<int, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo>, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, std::__1::shared_ptr<PipelineModelManagerImpl::PipelineModelInfo> > > >::operator[](int const&) */
int _ZNSt3__13mapIiNS_10shared_ptrIN24PipelineModelManagerImpl17PipelineModelInfoEEENS_4lessIiEENS_9allocatorINS_4pairIKiS4_EEEEEixERS9_(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model17PipelineModelImplE */
/* Demangled: VTT for NSCam::v3::pipeline::model::PipelineModelImpl */
extern void* _ZTTN5NSCam2v38pipeline5model17PipelineModelImplE;

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int __floatditf(void);

/* Symbol: _ZN5NSCam2v38pipeline5model17PipelineModelImpl9configureERKNSt3__110shared_ptrINS2_23UserConfigurationParamsEEE */
/* Demangled: NSCam::v3::pipeline::model::PipelineModelImpl::configure(std::__1::shared_ptr<NSCam::v3::pipeline::model::UserConfigurationParams> const&) */
int _ZN5NSCam2v38pipeline5model17PipelineModelImpl9configureERKNSt3__110shared_ptrINS2_23UserConfigurationParamsEEE(void);

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZN24PipelineModelManagerImpl5debugERN7android7PrinterERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE */
/* Demangled: PipelineModelManagerImpl::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN24PipelineModelManagerImpl5debugERN7android7PrinterERKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_H */
