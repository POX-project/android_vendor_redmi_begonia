/*
 * Reverse-Engineered ABI Specification for: libmtkcam_hwutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_hwutils.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_HWUTILS_H
#define BEGONIA_RE_LIBMTKCAM_HWUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam15BssContainerImp5sLockE */
/* Demangled: NSCam::BssContainerImp::sLock */
extern void* _ZN5NSCam15BssContainerImp5sLockE;

/* Symbol: _ZN7NSCamHW12HwInfoHelper11updateInfosEv */
/* Demangled: NSCamHW::HwInfoHelper::updateInfos() */
int _ZN7NSCamHW12HwInfoHelper11updateInfosEv(void);

/* Symbol: _ZN7NSCamHW13HwTransHelperC1Ei */
/* Demangled: NSCamHW::HwTransHelper::HwTransHelper(int) */
int _ZN7NSCamHW13HwTransHelperC1Ei(void);

/* Symbol: _ZN5NSCam15ScenarioControlC2Ei */
/* Demangled: NSCam::ScenarioControl::ScenarioControl(int) */
int _ZN5NSCam15ScenarioControlC2Ei(void);

/* Symbol: _ZTCN5NSCam2v318TemperatureMonitorE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::TemperatureMonitor */
extern void* _ZTCN5NSCam2v318TemperatureMonitorE0_N7android6ThreadE;

/* Symbol: _ZN5NSCam14FDContainerImp9sInstanceE */
/* Demangled: NSCam::FDContainerImp::sInstance */
extern void* _ZN5NSCam14FDContainerImp9sInstanceE;

/* Symbol: _ZN5NSCam20IHwInfoHelperManager3getEv */
/* Demangled: NSCam::IHwInfoHelperManager::get() */
int _ZN5NSCam20IHwInfoHelperManager3getEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5clearEv */
/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::clear() */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5clearEv(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper11ImplementorC2Ei */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::Implementor(int) */
int _ZN7NSCamHW12HwInfoHelper11ImplementorC2Ei(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor6HelperD1Ev */
/* Demangled: NSCam::Utils::JobMonitor::Helper::~Helper() */
int _ZN5NSCam5Utils10JobMonitor6HelperD1Ev(void);

/* Symbol: _ZN5NSCam11FDContainerC2EPKcNS_12IFDContainer16eFDContainer_OptE */
/* Demangled: NSCam::FDContainer::FDContainer(char const*, NSCam::IFDContainer::eFDContainer_Opt) */
int _ZN5NSCam11FDContainerC2EPKcNS_12IFDContainer16eFDContainer_OptE(void);

/* Symbol: _ZN5NSCam11FVContainerD0Ev */
/* Demangled: NSCam::FVContainer::~FVContainer() */
int _ZN5NSCam11FVContainerD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN5NSCam19PlugProcessingBasicD1Ev */
/* Demangled: NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
int _ZN5NSCam19PlugProcessingBasicD1Ev(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCell7initImpEv */
/* Demangled: NSCam::PlugProcessingFCell::initImp() */
int _ZN5NSCam19PlugProcessingFCell7initImpEv(void);

/* Symbol: _ZN5NSCam18FaceIQContainerImp5sLockE */
/* Demangled: NSCam::FaceIQContainerImp::sLock */
extern void* _ZN5NSCam18FaceIQContainerImp5sLockE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor30getLpModeSupportBitDepthFormatERiRj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getLpModeSupportBitDepthFormat(int&, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor30getLpModeSupportBitDepthFormatERiRj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_(void);

/* Symbol: _ZN5NSCam12BssContainer8dumpInfoEv */
/* Demangled: NSCam::BssContainer::dumpInfo() */
int _ZN5NSCam12BssContainer8dumpInfoEv(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor16shrinkCropRegionEN5NSCam5MSizeERNS2_5MRectEi */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::shrinkCropRegion(NSCam::MSize, NSCam::MRect&, int) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor16shrinkCropRegionEN5NSCam5MSizeERNS2_5MRectEi(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZTVN5NSCam19ResourceConcurrency7ControlE */
/* Demangled: vtable for NSCam::ResourceConcurrency::Control */
extern void* _ZTVN5NSCam19ResourceConcurrency7ControlE;

/* Symbol: _ZN5NSCam18PlugProcessingBase10InitThread10threadLoopEv */
/* Demangled: NSCam::PlugProcessingBase::InitThread::threadLoop() */
int _ZN5NSCam18PlugProcessingBase10InitThread10threadLoopEv(void);

/* Symbol: _ZN5NSCam12BssContainer11queryUnlockEP19MTKBssContainerInfo */
/* Demangled: NSCam::BssContainer::queryUnlock(MTKBssContainerInfo*) */
int _ZN5NSCam12BssContainer11queryUnlockEP19MTKBssContainerInfo(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor22sem_timedwait_millsecsER5sem_tl */
/* Demangled: NSCam::v3::TemperatureMonitor::sem_timedwait_millsecs(sem_t&, long) */
int _ZN5NSCam2v318TemperatureMonitor22sem_timedwait_millsecsER5sem_tl(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZTv0_n28_N5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: virtual thunk to NSCam::ResourceConcurrency::releaseResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZTv0_n28_N5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZN5NSCam11FDContainer10editUnlockEP18MTKFDContainerInfo */
/* Demangled: NSCam::FDContainer::editUnlock(MTKFDContainerInfo*) */
int _ZN5NSCam11FDContainer10editUnlockEP18MTKFDContainerInfo(void);

/* Symbol: _ZN5NSCam11FVContainerC2EPKcNS_12IFVContainer16eFVContainer_OptE */
/* Demangled: NSCam::FVContainer::FVContainer(char const*, NSCam::IFVContainer::eFVContainer_Opt) */
int _ZN5NSCam11FVContainerC2EPKcNS_12IFVContainer16eFVContainer_OptE(void);

/* Symbol: _ZN7android2spIN5NSCam12IFVContainerEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IFVContainer>::sp(NSCam::IFVContainer*) */
int _ZN7android2spIN5NSCam12IFVContainerEEC2EPS2_(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor10threadLoopEv */
/* Demangled: NSCam::v3::TemperatureMonitor::threadLoop() */
int _ZN5NSCam2v318TemperatureMonitor10threadLoopEv(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: NSCam::ResourceConcurrency::returnClient(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZN5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD0Ev */
/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::Helper::~Helper() */
int _ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD0Ev(void);

/* Symbol: _ZTv0_n12_N5NSCam19PlugProcessingBasicD0Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
int _ZTv0_n12_N5NSCam19PlugProcessingBasicD0Ev(void);

/* Symbol: _ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_ */
/* Demangled: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper5isYuvEv */
/* Demangled: NSCamHW::HwInfoHelper::isYuv() const */
int _ZNK7NSCamHW12HwInfoHelper5isYuvEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitorD2Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
int _ZN5NSCam2v318TemperatureMonitorD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_destroyEPvj(void);

/* Symbol: _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE15__emplace_multiIJS6_EEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEDpOT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*> std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_multi<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE15__emplace_multiIJS6_EEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEDpOT_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t const&>(NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKBssContainerInfo*, std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::less<MTKBssContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > > >::__emplace_unique_key_args<MTKBssContainerInfo*, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKBssContainerInfo* const&>, std::__1::tuple<> >(MTKBssContainerInfo* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKBssContainerInfo* const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam5Utils10CamManager16setThermalPolicyEPcb */
/* Demangled: NSCam::Utils::CamManager::setThermalPolicy(char*, bool) */
int _ZN5NSCam5Utils10CamManager16setThermalPolicyEPcb(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase6DlFunc7libOpenEPKc */
/* Demangled: NSCam::PlugProcessingBase::DlFunc::libOpen(char const*) */
int _ZN5NSCam18PlugProcessingBase6DlFunc7libOpenEPKc(void);

/* Symbol: _ZTTN5NSCam19PlugProcessingBasicE */
/* Demangled: VTT for NSCam::PlugProcessingBasic */
extern void* _ZTTN5NSCam19PlugProcessingBasicE;

/* Symbol: _ZN5NSCam11FDContainerC1EPKcNS_12IFDContainer16eFDContainer_OptE */
/* Demangled: NSCam::FDContainer::FDContainer(char const*, NSCam::IFDContainer::eFDContainer_Opt) */
int _ZN5NSCam11FDContainerC1EPKcNS_12IFDContainer16eFDContainer_OptE(void);

/* Symbol: _ZN5NSCam11FVContainer4pushEiN6NS3Av315AF_FRAME_INFO_tE */
/* Demangled: NSCam::FVContainer::push(int, NS3Av3::AF_FRAME_INFO_t) */
int _ZN5NSCam11FVContainer4pushEiN6NS3Av315AF_FRAME_INFO_tE(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelperD2Ev */
/* Demangled: NSCamHW::HwInfoHelper::~HwInfoHelper() */
int _ZN7NSCamHW12HwInfoHelperD2Ev(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEjiiRN5NSCam5MSizeERj */
/* Demangled: NSCamHW::HwInfoHelper::alignPass1HwLimitation(unsigned int, int, int, NSCam::MSize&, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEjiiRN5NSCam5MSizeERj(void);

/* Symbol: _ZN7NSCamHW13HwTransHelper17getMatrixToActiveEjRNS_16simplifiedMatrixE */
/* Demangled: NSCamHW::HwTransHelper::getMatrixToActive(unsigned int, NSCamHW::simplifiedMatrix&) */
int _ZN7NSCamHW13HwTransHelper17getMatrixToActiveEjRNS_16simplifiedMatrixE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEEE;

/* Symbol: _ZN5NSCam19ResourceConcurrency6Client6obtainEv */
/* Demangled: NSCam::ResourceConcurrency::Client::obtain() */
int _ZN5NSCam19ResourceConcurrency6Client6obtainEv(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase15onLastStrongRefEPKv */
/* Demangled: NSCam::PlugProcessingBase::onLastStrongRef(void const*) */
int _ZN5NSCam18PlugProcessingBase15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam5Utils10CamManager16setAvailableHintEb */
/* Demangled: NSCam::Utils::CamManager::setAvailableHint(bool) */
int _ZN5NSCam5Utils10CamManager16setAvailableHintEb(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase6uninitEv */
/* Demangled: NSCam::PlugProcessingBase::uninit() */
int _ZN5NSCam18PlugProcessingBase6uninitEv(void);

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSERKS6_ */
/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> const&) */
int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSERKS6_(void);

/* Symbol: _ZN5NSCam18FaceIQContainerImp9sInstanceE */
/* Demangled: NSCam::FaceIQContainerImp::sInstance */
extern void* _ZN5NSCam18FaceIQContainerImp9sInstanceE;

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperature6uninitEv */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::uninit() */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature6uninitEv(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor6uninitEv */
/* Demangled: NSCam::v3::TemperatureMonitor::uninit() */
int _ZN5NSCam2v318TemperatureMonitor6uninitEv(void);

/* Symbol: _ZTv0_n24_N5NSCam18PlugProcessingBase12waitInitDoneEv */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::waitInitDone() */
int _ZTv0_n24_N5NSCam18PlugProcessingBase12waitInitDoneEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN5NSCam11FVContainerD2Ev */
/* Demangled: NSCam::FVContainer::~FVContainer() */
int _ZN5NSCam11FVContainerD2Ev(void);

/* Symbol: _ZN5NSCam12BssContainer8editLockEx */
/* Demangled: NSCam::BssContainer::editLock(long long) */
int _ZN5NSCam12BssContainer8editLockEx(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor10readyToRunEv */
/* Demangled: NSCam::Utils::JobMonitor::readyToRun() */
int _ZN5NSCam5Utils10JobMonitor10readyToRunEv(void);

/* Symbol: _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::alignPass1HwLimitation(int, int, NSCam::MSize&, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj(void);

/* Symbol: _ZN5NSCam15ScenarioControl15exitPerfServiceEv */
/* Demangled: NSCam::ScenarioControl::exitPerfService() */
int _ZN5NSCam15ScenarioControl15exitPerfServiceEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper16shrinkCropRegionEN5NSCam5MSizeERNS1_5MRectEi */
/* Demangled: NSCamHW::HwInfoHelper::shrinkCropRegion(NSCam::MSize, NSCam::MRect&, int) const */
int _ZNK7NSCamHW12HwInfoHelper16shrinkCropRegionEN5NSCam5MSizeERNS1_5MRectEi(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper25isType3PDSensorWithoutPDEEji */
/* Demangled: NSCamHW::HwInfoHelper::isType3PDSensorWithoutPDE(unsigned int, int) const */
int _ZNK7NSCamHW12HwInfoHelper25isType3PDSensorWithoutPDEEji(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam5Utils13GyroCollector8GyroInfoERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo>&) */
int _ZNSt3__114__split_bufferIN5NSCam5Utils13GyroCollector8GyroInfoERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZN5NSCam11FVContainerC1EPKcNS_12IFVContainer16eFVContainer_OptE */
/* Demangled: NSCam::FVContainer::FVContainer(char const*, NSCam::IFVContainer::eFVContainer_Opt) */
int _ZN5NSCam11FVContainerC1EPKcNS_12IFVContainer16eFVContainer_OptE(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper17quertMaxRrzoWidthERi */
/* Demangled: NSCamHW::HwInfoHelper::quertMaxRrzoWidth(int&) const */
int _ZNK7NSCamHW12HwInfoHelper17quertMaxRrzoWidthERi(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEiiRN5NSCam5MSizeERj */
/* Demangled: NSCamHW::HwInfoHelper::alignPass1HwLimitation(int, int, NSCam::MSize&, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEiiRN5NSCam5MSizeERj(void);

/* Symbol: _ZNSt3__113__vector_baseINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEENS6_IS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEENS6_IS8_EEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam15ScenarioControl12exitScenarioEv */
/* Demangled: NSCam::ScenarioControl::exitScenario() */
int _ZN5NSCam15ScenarioControl12exitScenarioEv(void);

/* Symbol: _ZTTN5NSCam2v318TemperatureMonitor17SensorTemperatureE */
/* Demangled: VTT for NSCam::v3::TemperatureMonitor::SensorTemperature */
extern void* _ZTTN5NSCam2v318TemperatureMonitor17SensorTemperatureE;

/* Symbol: _ZTTN5NSCam2v318TemperatureMonitorE */
/* Demangled: VTT for NSCam::v3::TemperatureMonitor */
extern void* _ZTTN5NSCam2v318TemperatureMonitorE;

/* Symbol: _ZN5NSCam5Utils10JobMonitor15timeoutHandlingERNS1_3JobE */
/* Demangled: NSCam::Utils::JobMonitor::timeoutHandling(NSCam::Utils::JobMonitor::Job&) */
int _ZN5NSCam5Utils10JobMonitor15timeoutHandlingERNS1_3JobE(void);

/* Symbol: _ZN7android2spIN5NSCam18PlugProcessingBase6DlFuncEEaSEPS3_ */
/* Demangled: android::sp<NSCam::PlugProcessingBase::DlFunc>::operator=(NSCam::PlugProcessingBase::DlFunc*) */
int _ZN7android2spIN5NSCam18PlugProcessingBase6DlFuncEEaSEPS3_(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FDContainerImp*, std::__1::default_delete<NSCam::FDContainerImp>, std::__1::allocator<NSCam::FDContainerImp> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam11FVContainer5queryEv */
/* Demangled: NSCam::FVContainer::query() */
int _ZN5NSCam11FVContainer5queryEv(void);

/* Symbol: _ZN5NSCam15FaceIQContainer8dumpInfoEv */
/* Demangled: NSCam::FaceIQContainer::dumpInfo() */
int _ZN5NSCam15FaceIQContainer8dumpInfoEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrI16HwInfoHelperImplEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrI16HwInfoHelperImplEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTTN5NSCam15ScenarioControlE */
/* Demangled: VTT for NSCam::ScenarioControl */
extern void* _ZTTN5NSCam15ScenarioControlE;

/* Symbol: _ZN5NSCam13IBssContainer14createInstanceEPKcNS0_17eBssContainer_OptE */
/* Demangled: NSCam::IBssContainer::createInstance(char const*, NSCam::IBssContainer::eBssContainer_Opt) */
int _ZN5NSCam13IBssContainer14createInstanceEPKcNS0_17eBssContainer_OptE(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN7NSCamHW12HwInfoHelper27getCameraSensorPowerOnCountEv */
/* Demangled: NSCamHW::HwInfoHelper::getCameraSensorPowerOnCount() */
int _ZN7NSCamHW12HwInfoHelper27getCameraSensorPowerOnCountEv(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils10JobMonitorEED2Ev */
/* Demangled: android::sp<NSCam::Utils::JobMonitor>::~sp() */
int _ZN7android2spIN5NSCam5Utils10JobMonitorEED2Ev(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCellC2Ej */
/* Demangled: NSCam::PlugProcessingFCell::PlugProcessingFCell(unsigned int) */
int _ZN5NSCam19PlugProcessingFCellC2Ej(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor11requestExitEv */
/* Demangled: NSCam::v3::TemperatureMonitor::requestExit() */
int _ZN5NSCam2v318TemperatureMonitor11requestExitEv(void);

/* Symbol: _ZN7android2spIN5NSCam20IResourceConcurrencyEEC2INS1_19ResourceConcurrencyEEEPT_ */
/* Demangled: android::sp<NSCam::IResourceConcurrency>::sp<NSCam::ResourceConcurrency>(NSCam::ResourceConcurrency*) */
int _ZN7android2spIN5NSCam20IResourceConcurrencyEEC2INS1_19ResourceConcurrencyEEEPT_(void);

/* Symbol: _ZTCN5NSCam18PlugProcessingBase10InitThreadE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::PlugProcessingBase::InitThread */
extern void* _ZTCN5NSCam18PlugProcessingBase10InitThreadE0_N7android6ThreadE;

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS6_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__deallocate_node(std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*>*) */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS6_PvEEEE(void);

/* Symbol: _ZN5NSCam11FVContainer5queryERKiS2_ */
/* Demangled: NSCam::FVContainer::query(int const&, int const&) */
int _ZN5NSCam11FVContainer5queryERKiS2_(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor11getInstanceEv */
/* Demangled: NSCam::Utils::JobMonitor::getInstance() */
int _ZN5NSCam5Utils10JobMonitor11getInstanceEv(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase6DlFunc11getFunctionEPKcPPv */
/* Demangled: NSCam::PlugProcessingBase::DlFunc::getFunction(char const*, void**) */
int _ZN5NSCam18PlugProcessingBase6DlFunc11getFunctionEPKcPPv(void);

/* Symbol: _ZTv0_n32_N5NSCam19PlugProcessingBasicD1Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
int _ZTv0_n32_N5NSCam19PlugProcessingBasicD1Ev(void);

/* Symbol: _ZN5NSCam5Utils10CamManager23releaseStartPreviewLockEv */
/* Demangled: NSCam::Utils::CamManager::releaseStartPreviewLock() */
int _ZN5NSCam5Utils10CamManager23releaseStartPreviewLockEv(void);

/* Symbol: _ZN7NSCamHW13HwTransHelperD2Ev */
/* Demangled: NSCamHW::HwTransHelper::~HwTransHelper() */
int _ZN7NSCamHW13HwTransHelperD2Ev(void);

/* Symbol: _ZTCN5NSCam18PlugProcessingBaseE0_NS_15IPlugProcessingE */
/* Demangled: construction vtable for NSCam::IPlugProcessing-in-NSCam::PlugProcessingBase */
extern void* _ZTCN5NSCam18PlugProcessingBaseE0_NS_15IPlugProcessingE;

/* Symbol: _ZN5NSCam19PlugProcessingBasic7initImpEv */
/* Demangled: NSCam::PlugProcessingBasic::initImp() */
int _ZN5NSCam19PlugProcessingBasic7initImpEv(void);

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSERKS7_ */
/* Demangled: android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> const&) */
int _ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSERKS7_(void);

/* Symbol: _ZN5NSCam12BssContainerD0Ev */
/* Demangled: NSCam::BssContainer::~BssContainer() */
int _ZN5NSCam12BssContainerD0Ev(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper15DualImplementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj */
/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::alignPass1HwLimitation(int, int, NSCam::MSize&, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper15DualImplementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: NSCam::ResourceConcurrency::acquireResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZN5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZTVN5NSCam11FDContainerE */
/* Demangled: vtable for NSCam::FDContainer */
extern void* _ZTVN5NSCam11FDContainerE;

/* Symbol: _ZN5NSCam19ResourceConcurrency7Control7acquireENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: NSCam::ResourceConcurrency::Control::acquire(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZN5NSCam19ResourceConcurrency7Control7acquireENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSEPS6_ */
/* Demangled: android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>::operator=(NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta*) */
int _ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSEPS6_(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam15BssContainerImpEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::BssContainerImp>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam15BssContainerImpEED2Ev(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper14queryPixelModeEjiRj */
/* Demangled: NSCamHW::HwInfoHelper::queryPixelMode(unsigned int, int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper14queryPixelModeEjiRj(void);

/* Symbol: gEnterLock */
/* Demangled: gEnterLock */
extern void* gEnterLock;

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN5NSCam5Utils10CamManager19getStartPreviewLockEv */
/* Demangled: NSCam::Utils::CamManager::getStartPreviewLock() */
int _ZN5NSCam5Utils10CamManager19getStartPreviewLockEv(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor25getShutterDelayFrameCountERi */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getShutterDelayFrameCount(int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor25getShutterDelayFrameCountERi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZTVN5NSCam19ResourceConcurrency6ClientE */
/* Demangled: vtable for NSCam::ResourceConcurrency::Client */
extern void* _ZTVN5NSCam19ResourceConcurrency6ClientE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::FDContainerImp*, std::__1::default_delete<NSCam::FDContainerImp>, std::__1::allocator<NSCam::FDContainerImp> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam15ScenarioControl15onLastStrongRefEPKv */
/* Demangled: NSCam::ScenarioControl::onLastStrongRef(void const*) */
int _ZN5NSCam15ScenarioControl15onLastStrongRefEPKv(void);

/* Symbol: gLock */
/* Demangled: gLock */
extern void* gLock;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev */
/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
int _ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__emplace_unique_key_args<long long, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>, std::__1::tuple<> >(long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam15FaceIQContainerD1Ev */
/* Demangled: NSCam::FaceIQContainer::~FaceIQContainer() */
int _ZN5NSCam15FaceIQContainerD1Ev(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN7NSCamHW13HwTransHelper19getMatrixFromActiveEjRNS_16simplifiedMatrixE */
/* Demangled: NSCamHW::HwTransHelper::getMatrixFromActive(unsigned int, NSCamHW::simplifiedMatrix&) */
int _ZN7NSCamHW13HwTransHelper19getMatrixFromActiveEjRNS_16simplifiedMatrixE(void);

/* Symbol: _ZTCN5NSCam2v318TemperatureMonitorE0_NS0_19ITemperatureMonitorE */
/* Demangled: construction vtable for NSCam::v3::ITemperatureMonitor-in-NSCam::v3::TemperatureMonitor */
extern void* _ZTCN5NSCam2v318TemperatureMonitorE0_NS0_19ITemperatureMonitorE;

/* Symbol: _ZTv0_n12_N5NSCam2v318TemperatureMonitorD1Ev */
/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
int _ZTv0_n12_N5NSCam2v318TemperatureMonitorD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSEPS5_ */
/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>::operator=(NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta*) */
int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSEPS5_(void);

/* Symbol: _ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t> >::__push_back_slow_path<NS3Av3::AF_FRAME_INFO_t const&>(NS3Av3::AF_FRAME_INFO_t const&) */
int _ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNK5NSCam5Utils10CamManager13isMultiDeviceEv */
/* Demangled: NSCam::Utils::CamManager::isMultiDevice() const */
int _ZNK5NSCam5Utils10CamManager13isMultiDeviceEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE6resizeEj */
/* Demangled: std::__1::vector<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo> >::resize(unsigned int) */
int _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE6resizeEj(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor23getRecommendRawBitDepthERi */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getRecommendRawBitDepth(int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor23getRecommendRawBitDepthERi(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: NSCam::ResourceConcurrency::releaseResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZN5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCellD1Ev */
/* Demangled: NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
int _ZN5NSCam19PlugProcessingFCellD1Ev(void);

/* Symbol: _ZN5NSCam11FDContainer9queryLockERKxS2_ */
/* Demangled: NSCam::FDContainer::queryLock(long long const&, long long const&) */
int _ZN5NSCam11FDContainer9queryLockERKxS2_(void);

/* Symbol: _ZN7android2spIN5NSCam12IFDContainerEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IFDContainer>::sp(NSCam::IFDContainer*) */
int _ZN7android2spIN5NSCam12IFDContainerEEC2EPS2_(void);

/* Symbol: _ZN7android2spIN5NSCam15ScenarioControlEEaSEOS3_ */
/* Demangled: android::sp<NSCam::ScenarioControl>::operator=(android::sp<NSCam::ScenarioControl>&&) */
int _ZN7android2spIN5NSCam15ScenarioControlEEaSEOS3_(void);

/* Symbol: _ZN5NSCam11FVContainer8dumpInfoEv */
/* Demangled: NSCam::FVContainer::dumpInfo() */
int _ZN5NSCam11FVContainer8dumpInfoEv(void);

/* Symbol: _ZN5NSCam15FaceIQContainer8editLockEx */
/* Demangled: NSCam::FaceIQContainer::editLock(long long) */
int _ZN5NSCam15FaceIQContainer8editLockEx(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::BssContainerImp*, std::__1::default_delete<NSCam::BssContainerImp>, std::__1::allocator<NSCam::BssContainerImp> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper23getRecommendRawBitDepthERi */
/* Demangled: NSCamHW::HwInfoHelper::getRecommendRawBitDepth(int&) const */
int _ZNK7NSCamHW12HwInfoHelper23getRecommendRawBitDepthERi(void);

/* Symbol: _ZTVN5NSCam14FDContainerImpE */
/* Demangled: vtable for NSCam::FDContainerImp */
extern void* _ZTVN5NSCam14FDContainerImpE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor10getImgoFmtEjRiii */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getImgoFmt(unsigned int, int&, int, int) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor10getImgoFmtEjRiii(void);

/* Symbol: _ZN5NSCam18PlugProcessingBaseC1Ev */
/* Demangled: NSCam::PlugProcessingBase::PlugProcessingBase() */
int _ZN5NSCam18PlugProcessingBaseC1Ev(void);

/* Symbol: _ZN5NSCam18PlugProcessingBaseD0Ev */
/* Demangled: NSCam::PlugProcessingBase::~PlugProcessingBase() */
int _ZN5NSCam18PlugProcessingBaseD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__push_back_slow_path<NSCam::BufPlane>(NSCam::BufPlane&&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_fstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZTVN5NSCam2v318TemperatureMonitor17SensorTemperatureE */
/* Demangled: vtable for NSCam::v3::TemperatureMonitor::SensorTemperature */
extern void* _ZTVN5NSCam2v318TemperatureMonitor17SensorTemperatureE;

/* Symbol: _ZN5NSCam5Utils10JobMonitorC1Ev */
/* Demangled: NSCam::Utils::JobMonitor::JobMonitor() */
int _ZN5NSCam5Utils10JobMonitorC1Ev(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitorD0Ev */
/* Demangled: NSCam::Utils::JobMonitor::~JobMonitor() */
int _ZN5NSCam5Utils10JobMonitorD0Ev(void);

/* Symbol: _ZTv0_n20_N5NSCam5Utils10JobMonitor15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::onLastStrongRef(void const*) */
int _ZTv0_n20_N5NSCam5Utils10JobMonitor15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase6DlFunc7isValidEv */
/* Demangled: NSCam::PlugProcessingBase::DlFunc::isValid() */
int _ZN5NSCam18PlugProcessingBase6DlFunc7isValidEv(void);

/* Symbol: _ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t>&>&) */
int _ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZTVN5NSCam14FVContainerImpE */
/* Demangled: vtable for NSCam::FVContainerImp */
extern void* _ZTVN5NSCam14FVContainerImpE;

/* Symbol: _ZN5NSCam15FaceIQContainer11queryUnlockEP18MTKFDContainerInfo */
/* Demangled: NSCam::FaceIQContainer::queryUnlock(MTKFDContainerInfo*) */
int _ZN5NSCam15FaceIQContainer11queryUnlockEP18MTKFDContainerInfo(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZN5NSCam11FDContainer11queryUnlockERKNSt3__16vectorIP18MTKFDContainerInfoNS1_9allocatorIS4_EEEE */
/* Demangled: NSCam::FDContainer::queryUnlock(std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> > const&) */
int _ZN5NSCam11FDContainer11queryUnlockERKNSt3__16vectorIP18MTKFDContainerInfoNS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5NSCam11FDContainer9queryLockERKNSt3__16vectorIxNS1_9allocatorIxEEEE */
/* Demangled: NSCam::FDContainer::queryLock(std::__1::vector<long long, std::__1::allocator<long long> > const&) */
int _ZN5NSCam11FDContainer9queryLockERKNSt3__16vectorIxNS1_9allocatorIxEEEE(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper13getSensorSizeEjRN5NSCam5MSizeE */
/* Demangled: NSCamHW::HwInfoHelper::getSensorSize(unsigned int, NSCam::MSize&) const */
int _ZNK7NSCamHW12HwInfoHelper13getSensorSizeEjRN5NSCam5MSizeE(void);

/* Symbol: _ZN5NSCam12BssContainer9queryLockExx */
/* Demangled: NSCam::BssContainer::queryLock(long long, long long) */
int _ZN5NSCam12BssContainer9queryLockExx(void);

/* Symbol: _ZN5NSCam5Utils10CamManager16setRecordingHintEb */
/* Demangled: NSCam::Utils::CamManager::setRecordingHint(bool) */
int _ZN5NSCam5Utils10CamManager16setRecordingHintEb(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZTv0_n12_N5NSCam19PlugProcessingFCellD0Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
int _ZTv0_n12_N5NSCam19PlugProcessingFCellD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper15DualImplementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_ */
/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::alignRrzoHwLimitation(NSCam::MSize, NSCam::MSize, NSCam::MSize&) const */
int _ZNK7NSCamHW12HwInfoHelper15DualImplementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_(void);

/* Symbol: _ZN5NSCam14FDContainerImp5sLockE */
/* Demangled: NSCam::FDContainerImp::sLock */
extern void* _ZN5NSCam14FDContainerImp5sLockE;

/* Symbol: _ZN5NSCam12IFVContainer14createInstanceEPKcNS0_16eFVContainer_OptE */
/* Demangled: NSCam::IFVContainer::createInstance(char const*, NSCam::IFVContainer::eFVContainer_Opt) */
int _ZN5NSCam12IFVContainer14createInstanceEPKcNS0_16eFVContainer_OptE(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::BufPlane>&) */
int _ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZN5NSCam15ScenarioControl16enterPerfServiceERKNS_16IScenarioControl12ControlParamE */
/* Demangled: NSCam::ScenarioControl::enterPerfService(NSCam::IScenarioControl::ControlParam const&) */
int _ZN5NSCam15ScenarioControl16enterPerfServiceERKNS_16IScenarioControl12ControlParamE(void);

/* Symbol: _ZN7android2wpIN5NSCam5Utils10JobMonitorEEaSERKNS_2spIS3_EE */
/* Demangled: android::wp<NSCam::Utils::JobMonitor>::operator=(android::sp<NSCam::Utils::JobMonitor> const&) */
int _ZN7android2wpIN5NSCam5Utils10JobMonitorEEaSERKNS_2spIS3_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam11FDContainerD1Ev */
/* Demangled: NSCam::FDContainer::~FDContainer() */
int _ZN5NSCam11FDContainerD1Ev(void);

/* Symbol: _ZN5NSCam15FaceIQContainer9queryLockExx */
/* Demangled: NSCam::FaceIQContainer::queryLock(long long, long long) */
int _ZN5NSCam15FaceIQContainer9queryLockExx(void);

/* Symbol: _ZN5NSCam15FaceIQContainerC1EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE */
/* Demangled: NSCam::FaceIQContainer::FaceIQContainer(char const*, NSCam::IFaceIQContainer::eFaceIQContainer_Opt) */
int _ZN5NSCam15FaceIQContainerC1EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE(void);

/* Symbol: _ZN5NSCam12BssContainerD2Ev */
/* Demangled: NSCam::BssContainer::~BssContainer() */
int _ZN5NSCam12BssContainerD2Ev(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor19getSensorRawFmtTypeERj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorRawFmtType(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor19getSensorRawFmtTypeERj(void);

/* Symbol: _ZN7android2spIN5NSCam16IScenarioControlEEaSEPS2_ */
/* Demangled: android::sp<NSCam::IScenarioControl>::operator=(NSCam::IScenarioControl*) */
int _ZN7android2spIN5NSCam16IScenarioControlEEaSEPS2_(void);

/* Symbol: _ZTVN5NSCam19PlugProcessingBasicE */
/* Demangled: vtable for NSCam::PlugProcessingBasic */
extern void* _ZTVN5NSCam19PlugProcessingBasicE;

/* Symbol: _ZTVN5NSCam11FVContainerE */
/* Demangled: vtable for NSCam::FVContainer */
extern void* _ZTVN5NSCam11FVContainerE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportVHDRModeEjRj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportVHDRMode(unsigned int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportVHDRModeEjRj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor32getSensorPowerOnPredictionResultERi */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorPowerOnPredictionResult(int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor32getSensorPowerOnPredictionResultERi(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper16getPDAFSupportedEj */
/* Demangled: NSCamHW::HwInfoHelper::getPDAFSupported(unsigned int) const */
int _ZNK7NSCamHW12HwInfoHelper16getPDAFSupportedEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC2Ejji */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::SensorTemperature(unsigned int, unsigned int, int) */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC2Ejji(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor11killProcessEv */
/* Demangled: NSCam::Utils::JobMonitor::killProcess() */
int _ZN5NSCam5Utils10JobMonitor11killProcessEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v319ITemperatureMonitorEEC2INS2_18TemperatureMonitorEEEPT_ */
/* Demangled: android::sp<NSCam::v3::ITemperatureMonitor>::sp<NSCam::v3::TemperatureMonitor>(NSCam::v3::TemperatureMonitor*) */
int _ZN7android2spIN5NSCam2v319ITemperatureMonitorEEC2INS2_18TemperatureMonitorEEEPT_(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam18FaceIQContainerImpEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::FaceIQContainerImp>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam18FaceIQContainerImpEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::BssContainerImp*, std::__1::default_delete<NSCam::BssContainerImp>, std::__1::allocator<NSCam::BssContainerImp> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper15getSensorPDSizeEjRj */
/* Demangled: NSCamHW::HwInfoHelper::getSensorPDSize(unsigned int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper15getSensorPDSizeEjRj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper21alignRrzoHwLimitationEN5NSCam5MSizeES2_RS2_ */
/* Demangled: NSCamHW::HwInfoHelper::alignRrzoHwLimitation(NSCam::MSize, NSCam::MSize, NSCam::MSize&) const */
int _ZNK7NSCamHW12HwInfoHelper21alignRrzoHwLimitationEN5NSCam5MSizeES2_RS2_(void);

/* Symbol: _ZN5NSCam19PlugProcessingBasicC1Ej */
/* Demangled: NSCam::PlugProcessingBasic::PlugProcessingBasic(unsigned int) */
int _ZN5NSCam19PlugProcessingBasicC1Ej(void);

/* Symbol: _ZTv0_n32_N5NSCam18PlugProcessingBaseD1Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
int _ZTv0_n32_N5NSCam18PlugProcessingBaseD1Ev(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FDContainerImp*, std::__1::default_delete<NSCam::FDContainerImp>, std::__1::allocator<NSCam::FDContainerImp> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::FaceIQContainerImp*, std::__1::default_delete<NSCam::FaceIQContainerImp>, std::__1::allocator<NSCam::FaceIQContainerImp> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZNK5NSCam5Utils10CamManager14getFirstOpenIdEv */
/* Demangled: NSCam::Utils::CamManager::getFirstOpenId() const */
int _ZNK5NSCam5Utils10CamManager14getFirstOpenIdEv(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN5NSCam5Utils10JobMonitor11registerJobENS1_3JobE */
/* Demangled: NSCam::Utils::JobMonitor::registerJob(NSCam::Utils::JobMonitor::Job) */
int _ZN5NSCam5Utils10JobMonitor11registerJobENS1_3JobE(void);

/* Symbol: _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> >::__push_back_slow_path<MTKFDContainerInfo* const&>(MTKFDContainerInfo* const&) */
int _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZTVN7NSCamHW12HwInfoHelper15DualImplementorE */
/* Demangled: vtable for NSCamHW::HwInfoHelper::DualImplementor */
extern void* _ZTVN7NSCamHW12HwInfoHelper15DualImplementorE;

/* Symbol: _ZTv0_n28_N5NSCam18PlugProcessingBase11sendCommandEiiiii */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::sendCommand(int, int, int, int, int) */
int _ZTv0_n28_N5NSCam18PlugProcessingBase11sendCommandEiiiii(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCell9uninitImpEv */
/* Demangled: NSCam::PlugProcessingFCell::uninitImp() */
int _ZN5NSCam19PlugProcessingFCell9uninitImpEv(void);

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSERKS6_ */
/* Demangled: android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> const&) */
int _ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSERKS6_(void);

/* Symbol: _ZN5NSCam20IResourceConcurrency14createInstanceEPKcx */
/* Demangled: NSCam::IResourceConcurrency::createInstance(char const*, long long) */
int _ZN5NSCam20IResourceConcurrency14createInstanceEPKcx(void);

/* Symbol: _ZN7android2wpIN5NSCam15IPlugProcessingEED2Ev */
/* Demangled: android::wp<NSCam::IPlugProcessing>::~wp() */
int _ZN7android2wpIN5NSCam15IPlugProcessingEED2Ev(void);

/* Symbol: _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EEE */
/* Demangled: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u> */
extern void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EEE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor12getSensorFpsEjRi */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorFps(unsigned int, int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor12getSensorFpsEjRi(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor22querySupportRawPatternERj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportRawPattern(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor22querySupportRawPatternERj(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperature14getTemperatureEv */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::getTemperature() */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature14getTemperatureEv(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor13unregisterJobEyi */
/* Demangled: NSCam::Utils::JobMonitor::unregisterJob(unsigned long long, int) */
int _ZN5NSCam5Utils10JobMonitor13unregisterJobEyi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam15FaceIQContainer10editUnlockEP18MTKFDContainerInfo */
/* Demangled: NSCam::FaceIQContainer::editUnlock(MTKFDContainerInfo*) */
int _ZN5NSCam15FaceIQContainer10editUnlockEP18MTKFDContainerInfo(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper15DualImplementorC1Ei */
/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::DualImplementor(int) */
int _ZN7NSCamHW12HwInfoHelper15DualImplementorC1Ei(void);

/* Symbol: _ZNSt3__110shared_ptrI16HwInfoHelperImplE11make_sharedIJRKiEEES2_DpOT_ */
/* Demangled: std::__1::shared_ptr<HwInfoHelperImpl> std::__1::shared_ptr<HwInfoHelperImpl>::make_shared<int const&>(int const&) */
int _ZNSt3__110shared_ptrI16HwInfoHelperImplE11make_sharedIJRKiEEES2_DpOT_(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev(void);

/* Symbol: _ZTVN5NSCam5Utils10JobMonitorE */
/* Demangled: vtable for NSCam::Utils::JobMonitor */
extern void* _ZTVN5NSCam5Utils10JobMonitorE;

/* Symbol: _ZN5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE */
/* Demangled: NSCam::PlugProcessingBase::init(NSCam::IPlugProcessing::OP_MODE) */
int _ZN5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE(void);

/* Symbol: _ZNK5NSCam5Utils10CamManager15getFirstUsingIdEv */
/* Demangled: NSCam::Utils::CamManager::getFirstUsingId() const */
int _ZNK5NSCam5Utils10CamManager15getFirstUsingIdEv(void);

/* Symbol: _ZTVN5NSCam15ScenarioControlE */
/* Demangled: vtable for NSCam::ScenarioControl */
extern void* _ZTVN5NSCam15ScenarioControlE;

/* Symbol: _ZTv0_n20_N5NSCam15ScenarioControl15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::ScenarioControl::onLastStrongRef(void const*) */
int _ZTv0_n20_N5NSCam15ScenarioControl15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam18PlugProcessingBaseD2Ev */
/* Demangled: NSCam::PlugProcessingBase::~PlugProcessingBase() */
int _ZN5NSCam18PlugProcessingBaseD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FaceIQContainerImp*, std::__1::default_delete<NSCam::FaceIQContainerImp>, std::__1::allocator<NSCam::FaceIQContainerImp> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitorD2Ev */
/* Demangled: NSCam::Utils::JobMonitor::~JobMonitor() */
int _ZN5NSCam5Utils10JobMonitorD2Ev(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase6DlFunc8libCloseEv */
/* Demangled: NSCam::PlugProcessingBase::DlFunc::libClose() */
int _ZN5NSCam18PlugProcessingBase6DlFunc8libCloseEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEED2Ev(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper11Implementor11updateInfosEv */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::updateInfos() */
int _ZN7NSCamHW12HwInfoHelper11Implementor11updateInfosEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*>&>&) */
int _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZN5NSCam15ScenarioControlC1Ei */
/* Demangled: NSCam::ScenarioControl::ScenarioControl(int) */
int _ZN5NSCam15ScenarioControlC1Ei(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperature4initEv */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::init() */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature4initEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor14queryPixelModeEjiRj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::queryPixelMode(unsigned int, int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor14queryPixelModeEjiRj(void);

/* Symbol: _ZN7NSCamHW13HwTransHelper29getMatrixFromActiveRatioAlignEjRNS_16simplifiedMatrixE */
/* Demangled: NSCamHW::HwTransHelper::getMatrixFromActiveRatioAlign(unsigned int, NSCamHW::simplifiedMatrix&) */
int _ZN7NSCamHW13HwTransHelper29getMatrixFromActiveRatioAlignEjRNS_16simplifiedMatrixE(void);

/* Symbol: _ZTCN5NSCam5Utils10JobMonitorE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::Utils::JobMonitor */
extern void* _ZTCN5NSCam5Utils10JobMonitorE0_N7android6ThreadE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSO_SO_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<NS3Av3::AF_FRAME_INFO_t*, std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<NS3Av3::AF_FRAME_INFO_t*>, true>, std::__1::allocator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSO_SO_(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper11ImplementorC1Ei */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::Implementor(int) */
int _ZN7NSCamHW12HwInfoHelper11ImplementorC1Ei(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor6HelperD0Ev */
/* Demangled: NSCam::Utils::JobMonitor::Helper::~Helper() */
int _ZN5NSCam5Utils10JobMonitor6HelperD0Ev(void);

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSEPS5_ */
/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>::operator=(NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta*) */
int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSEPS5_(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor20getDualPDAFSupportedEj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getDualPDAFSupported(unsigned int) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor20getDualPDAFSupportedEj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper5isRawEv */
/* Demangled: NSCamHW::HwInfoHelper::isRaw() const */
int _ZNK7NSCamHW12HwInfoHelper5isRawEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam19PlugProcessingBasicD0Ev */
/* Demangled: NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
int _ZN5NSCam19PlugProcessingBasicD0Ev(void);

/* Symbol: _ZTv0_n32_N5NSCam19PlugProcessingFCellD1Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
int _ZTv0_n32_N5NSCam19PlugProcessingFCellD1Ev(void);

/* Symbol: _ZN5NSCam14FVContainerImp9sInstanceE */
/* Demangled: NSCam::FVContainerImp::sInstance */
extern void* _ZN5NSCam14FVContainerImp9sInstanceE;

/* Symbol: _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaE */
/* Demangled: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta */
extern void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKBssContainerInfo*, std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::less<MTKBssContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZTv0_n16_N5NSCam19ResourceConcurrency13requestClientEv */
/* Demangled: virtual thunk to NSCam::ResourceConcurrency::requestClient() */
int _ZTv0_n16_N5NSCam19ResourceConcurrency13requestClientEv(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor15onLastStrongRefEPKv */
/* Demangled: NSCam::Utils::JobMonitor::onLastStrongRef(void const*) */
int _ZN5NSCam5Utils10JobMonitor15onLastStrongRefEPKv(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelperC2Ei */
/* Demangled: NSCamHW::HwInfoHelper::HwInfoHelper(int) */
int _ZN7NSCamHW12HwInfoHelperC2Ei(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper20getDualPDAFSupportedEj */
/* Demangled: NSCamHW::HwInfoHelper::getDualPDAFSupported(unsigned int) const */
int _ZNK7NSCamHW12HwInfoHelper20getDualPDAFSupportedEj(void);

/* Symbol: _ZTv0_n12_N5NSCam18PlugProcessingBaseD1Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
int _ZTv0_n12_N5NSCam18PlugProcessingBaseD1Ev(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam14FVContainerImpEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::FVContainerImp>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam14FVContainerImpEED2Ev(void);

/* Symbol: _ZTv0_n12_N5NSCam5Utils10JobMonitorD1Ev */
/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::~JobMonitor() */
int _ZTv0_n12_N5NSCam5Utils10JobMonitorD1Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::FVContainerImp*, std::__1::default_delete<NSCam::FVContainerImp>, std::__1::allocator<NSCam::FVContainerImp> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > > >::__emplace_unique_key_args<MTKFDContainerInfo*, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>, std::__1::tuple<> >(MTKFDContainerInfo* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EEE */
/* Demangled: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u> */
extern void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EEE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_ */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::alignRrzoHwLimitation(NSCam::MSize, NSCam::MSize, NSCam::MSize&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperature13getSensorNameEv */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::getSensorName() */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature13getSensorNameEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase12waitInitDoneEv */
/* Demangled: NSCam::PlugProcessingBase::waitInitDone() */
int _ZN5NSCam18PlugProcessingBase12waitInitDoneEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FVContainerImp*, std::__1::default_delete<NSCam::FVContainerImp>, std::__1::allocator<NSCam::FVContainerImp> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor11writeToFileENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: NSCam::v3::TemperatureMonitor::writeToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5NSCam2v318TemperatureMonitor11writeToFileENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor6HelperC1EN7android7String8EiNS3_2wpINS1_8CallbackEEEj */
/* Demangled: NSCam::Utils::JobMonitor::Helper::Helper(android::String8, int, android::wp<NSCam::Utils::JobMonitor::Callback>, unsigned int) */
int _ZN5NSCam5Utils10JobMonitor6HelperC1EN7android7String8EiNS3_2wpINS1_8CallbackEEEj(void);

/* Symbol: _ZN5NSCam16IFaceIQContainer14createInstanceEPKcNS0_20eFaceIQContainer_OptE */
/* Demangled: NSCam::IFaceIQContainer::createInstance(char const*, NSCam::IFaceIQContainer::eFaceIQContainer_Opt) */
int _ZN5NSCam16IFaceIQContainer14createInstanceEPKcNS0_20eFaceIQContainer_OptE(void);

/* Symbol: _ZNSt3__18weak_ptrIN5NSCam15BssContainerImpEED2Ev */
/* Demangled: std::__1::weak_ptr<NSCam::BssContainerImp>::~weak_ptr() */
int _ZNSt3__18weak_ptrIN5NSCam15BssContainerImpEED2Ev(void);

/* Symbol: _ZN5NSCam5Utils10CamManager14incSensorCountEPKc */
/* Demangled: NSCam::Utils::CamManager::incSensorCount(char const*) */
int _ZN5NSCam5Utils10CamManager14incSensorCountEPKc(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<HwInfoHelperImpl, std::__1::allocator<HwInfoHelperImpl> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor10threadLoopEv */
/* Demangled: NSCam::Utils::JobMonitor::threadLoop() */
int _ZN5NSCam5Utils10JobMonitor10threadLoopEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE6resizeEjRKS9_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE6resizeEjRKS9_(void);

/* Symbol: _ZN7android2spIN5NSCam16IFaceIQContainerEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IFaceIQContainer>::sp(NSCam::IFaceIQContainer*) */
int _ZN7android2spIN5NSCam16IFaceIQContainerEEC2EPS2_(void);

/* Symbol: _ZN5NSCam15BssContainerImp5sCondE */
/* Demangled: NSCam::BssContainerImp::sCond */
extern void* _ZN5NSCam15BssContainerImp5sCondE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor13getSensorSizeEjRN5NSCam5MSizeE */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorSize(unsigned int, NSCam::MSize&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor13getSensorSizeEjRN5NSCam5MSizeE(void);

/* Symbol: _ZTCN5NSCam19PlugProcessingFCellE0_NS_15IPlugProcessingE */
/* Demangled: construction vtable for NSCam::IPlugProcessing-in-NSCam::PlugProcessingFCell */
extern void* _ZTCN5NSCam19PlugProcessingFCellE0_NS_15IPlugProcessingE;

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FVContainerImp*, std::__1::default_delete<NSCam::FVContainerImp>, std::__1::allocator<NSCam::FVContainerImp> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaE */
/* Demangled: vtable for NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta */
extern void* _ZTVN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper10getImgoFmtEjRiii */
/* Demangled: NSCamHW::HwInfoHelper::getImgoFmt(unsigned int, int&, int, int) const */
int _ZNK7NSCamHW12HwInfoHelper10getImgoFmtEjRiii(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitorC2Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::TemperatureMonitor() */
int _ZN5NSCam2v318TemperatureMonitorC2Ev(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitorD1Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
int _ZN5NSCam2v318TemperatureMonitorD1Ev(void);

/* Symbol: _ZTTN5NSCam19ResourceConcurrencyE */
/* Demangled: VTT for NSCam::ResourceConcurrency */
extern void* _ZTTN5NSCam19ResourceConcurrencyE;

/* Symbol: _ZNSt3__18weak_ptrIN5NSCam14FVContainerImpEED2Ev */
/* Demangled: std::__1::weak_ptr<NSCam::FVContainerImp>::~weak_ptr() */
int _ZNSt3__18weak_ptrIN5NSCam14FVContainerImpEED2Ev(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor14getTemperatureEi */
/* Demangled: NSCam::v3::TemperatureMonitor::getTemperature(int) */
int _ZN5NSCam2v318TemperatureMonitor14getTemperatureEi(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD2Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD2Ev(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper15getSensorVBTimeEjRj */
/* Demangled: NSCamHW::HwInfoHelper::getSensorVBTime(unsigned int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper15getSensorVBTimeEjRj(void);

/* Symbol: _ZN7NSCamHW13HwTransHelper22calculateFovDifferenceEjPfS1_ */
/* Demangled: NSCamHW::HwTransHelper::calculateFovDifference(unsigned int, float*, float*) */
int _ZN7NSCamHW13HwTransHelper22calculateFovDifferenceEjPfS1_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam18FaceIQContainerImp5sCondE */
/* Demangled: NSCam::FaceIQContainerImp::sCond */
extern void* _ZN5NSCam18FaceIQContainerImp5sCondE;

/* Symbol: _ZN5NSCam12BssContainerC2EPKcNS_13IBssContainer17eBssContainer_OptE */
/* Demangled: NSCam::BssContainer::BssContainer(char const*, NSCam::IBssContainer::eBssContainer_Opt) */
int _ZN5NSCam12BssContainerC2EPKcNS_13IBssContainer17eBssContainer_OptE(void);

/* Symbol: _ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingFCellEEERS3_PT_ */
/* Demangled: android::sp<NSCam::IPlugProcessing>& android::sp<NSCam::IPlugProcessing>::operator=<NSCam::PlugProcessingFCell>(NSCam::PlugProcessingFCell*) */
int _ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingFCellEEERS3_PT_(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelperD1Ev */
/* Demangled: NSCamHW::HwInfoHelper::~HwInfoHelper() */
int _ZN7NSCamHW12HwInfoHelperD1Ev(void);

/* Symbol: _ZN7NSCamHW13HwTransHelperC2Ei */
/* Demangled: NSCamHW::HwTransHelper::HwTransHelper(int) */
int _ZN7NSCamHW13HwTransHelperC2Ei(void);

/* Symbol: _ZTVN5NSCam5Utils10JobMonitor6HelperE */
/* Demangled: vtable for NSCam::Utils::JobMonitor::Helper */
extern void* _ZTVN5NSCam5Utils10JobMonitor6HelperE;

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvj */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor10getRrzoFmtEjRii */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getRrzoFmt(unsigned int, int&, int) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor10getRrzoFmtEjRii(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN5NSCam14FVContainerImp5sLockE */
/* Demangled: NSCam::FVContainerImp::sLock */
extern void* _ZN5NSCam14FVContainerImp5sLockE;

/* Symbol: _ZN5NSCam15FaceIQContainerC2EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE */
/* Demangled: NSCam::FaceIQContainer::FaceIQContainer(char const*, NSCam::IFaceIQContainer::eFaceIQContainer_Opt) */
int _ZN5NSCam15FaceIQContainerC2EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::BssContainerImp*, std::__1::default_delete<NSCam::BssContainerImp>, std::__1::allocator<NSCam::BssContainerImp> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN5NSCam5Utils10JobMonitor6HelperD2Ev */
/* Demangled: NSCam::Utils::JobMonitor::Helper::~Helper() */
int _ZN5NSCam5Utils10JobMonitor6HelperD2Ev(void);

/* Symbol: _ZN5NSCam11FVContainer5queryERKNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: NSCam::FVContainer::query(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam11FVContainer5queryERKNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZN5NSCam11FVContainerD1Ev */
/* Demangled: NSCam::FVContainer::~FVContainer() */
int _ZN5NSCam11FVContainerD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper10getRrzoFmtEjRii */
/* Demangled: NSCamHW::HwInfoHelper::getRrzoFmt(unsigned int, int&, int) const */
int _ZNK7NSCamHW12HwInfoHelper10getRrzoFmtEjRii(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorPDSizeEjRj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorPDSize(unsigned int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorPDSizeEjRj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor23querySupportResizeRatioERj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportResizeRatio(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor23querySupportResizeRatioERj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper19getSensorRawFmtTypeERj */
/* Demangled: NSCamHW::HwInfoHelper::getSensorRawFmtType(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper19getSensorRawFmtTypeERj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN5NSCam19PlugProcessingBasicD2Ev */
/* Demangled: NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
int _ZN5NSCam19PlugProcessingBasicD2Ev(void);

/* Symbol: _ZTTN5NSCam19PlugProcessingFCellE */
/* Demangled: VTT for NSCam::PlugProcessingFCell */
extern void* _ZTTN5NSCam19PlugProcessingFCellE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper25getShutterDelayFrameCountERi */
/* Demangled: NSCamHW::HwInfoHelper::getShutterDelayFrameCount(int&) const */
int _ZNK7NSCamHW12HwInfoHelper25getShutterDelayFrameCountERi(void);

/* Symbol: _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN7NSCamHW12HwInfoHelper28getSecureSensorModeSupportedEj */
/* Demangled: NSCamHW::HwInfoHelper::getSecureSensorModeSupported(unsigned int) */
int _ZN7NSCamHW12HwInfoHelper28getSecureSensorModeSupportedEj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor17quertMaxRrzoWidthERi */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::quertMaxRrzoWidth(int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor17quertMaxRrzoWidthERi(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper23querySupportResizeRatioERj */
/* Demangled: NSCamHW::HwInfoHelper::querySupportResizeRatio(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper23querySupportResizeRatioERj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper30getLpModeSupportBitDepthFormatERiRj */
/* Demangled: NSCamHW::HwInfoHelper::getLpModeSupportBitDepthFormat(int&, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper30getLpModeSupportBitDepthFormatERiRj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void);

/* Symbol: _ZTVN5NSCam19PlugProcessingFCellE */
/* Demangled: vtable for NSCam::PlugProcessingFCell */
extern void* _ZTVN5NSCam19PlugProcessingFCellE;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZTVN5NSCam18PlugProcessingBase10InitThreadE */
/* Demangled: vtable for NSCam::PlugProcessingBase::InitThread */
extern void* _ZTVN5NSCam18PlugProcessingBase10InitThreadE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam5Utils10CamManager9decDeviceEi */
/* Demangled: NSCam::Utils::CamManager::decDevice(int) */
int _ZN5NSCam5Utils10CamManager9decDeviceEi(void);

/* Symbol: _ZN7android2spIN5NSCam15ScenarioControlEEaSEPS2_ */
/* Demangled: android::sp<NSCam::ScenarioControl>::operator=(NSCam::ScenarioControl*) */
int _ZN7android2spIN5NSCam15ScenarioControlEEaSEPS2_(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase11sendCommandEiiiii */
/* Demangled: NSCam::PlugProcessingBase::sendCommand(int, int, int, int, int) */
int _ZN5NSCam18PlugProcessingBase11sendCommandEiiiii(void);

/* Symbol: _ZTTN5NSCam18PlugProcessingBaseE */
/* Demangled: VTT for NSCam::PlugProcessingBase */
extern void* _ZTTN5NSCam18PlugProcessingBaseE;

/* Symbol: _ZTVN5NSCam15BssContainerImpE */
/* Demangled: vtable for NSCam::BssContainerImp */
extern void* _ZTVN5NSCam15BssContainerImpE;

/* Symbol: _ZN5NSCam19ResourceConcurrency7Control6settleEv */
/* Demangled: NSCam::ResourceConcurrency::Control::settle() */
int _ZN5NSCam19ResourceConcurrency7Control6settleEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FaceIQContainerImp*, std::__1::default_delete<NSCam::FaceIQContainerImp>, std::__1::allocator<NSCam::FaceIQContainerImp> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam5Utils13GyroCollector7triggerEv */
/* Demangled: NSCam::Utils::GyroCollector::trigger() */
int _ZN5NSCam5Utils13GyroCollector7triggerEv(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCellC1Ej */
/* Demangled: NSCam::PlugProcessingFCell::PlugProcessingFCell(unsigned int) */
int _ZN5NSCam19PlugProcessingFCellC1Ej(void);

/* Symbol: _ZTVN5NSCam18PlugProcessingBaseE */
/* Demangled: vtable for NSCam::PlugProcessingBase */
extern void* _ZTVN5NSCam18PlugProcessingBaseE;

/* Symbol: _ZTv0_n20_N5NSCam18PlugProcessingBase15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::onLastStrongRef(void const*) */
int _ZTv0_n20_N5NSCam18PlugProcessingBase15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6rehashEj(void);

/* Symbol: _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> >::__push_back_slow_path<MTKFDContainerInfo*>(MTKFDContainerInfo*&&) */
int _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSEPS5_ */
/* Demangled: android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>::operator=(NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta*) */
int _ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSEPS5_(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD1Ev */
/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::Helper::~Helper() */
int _ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD1Ev(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper12getSensorFpsEjRi */
/* Demangled: NSCamHW::HwInfoHelper::getSensorFps(unsigned int, int&) const */
int _ZNK7NSCamHW12HwInfoHelper12getSensorFpsEjRi(void);

/* Symbol: _ZTv0_n12_N5NSCam19PlugProcessingBasicD1Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
int _ZTv0_n12_N5NSCam19PlugProcessingBasicD1Ev(void);

/* Symbol: _ZTVN5NSCam18FaceIQContainerImpE */
/* Demangled: vtable for NSCam::FaceIQContainerImp */
extern void* _ZTVN5NSCam18FaceIQContainerImpE;

/* Symbol: _ZN7NSCamHW13HwTransHelper27getMatrixToActiveRatioAlignEjRNS_16simplifiedMatrixE */
/* Demangled: NSCamHW::HwTransHelper::getMatrixToActiveRatioAlign(unsigned int, NSCamHW::simplifiedMatrix&) */
int _ZN7NSCamHW13HwTransHelper27getMatrixToActiveRatioAlignEjRNS_16simplifiedMatrixE(void);

/* Symbol: _ZTv0_n32_N5NSCam19PlugProcessingBasicD0Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
int _ZTv0_n32_N5NSCam19PlugProcessingBasicD0Ev(void);

/* Symbol: _ZN7NSCamHW13HwTransHelperD1Ev */
/* Demangled: NSCamHW::HwTransHelper::~HwTransHelper() */
int _ZN7NSCamHW13HwTransHelperD1Ev(void);

/* Symbol: gScenarioControlMap */
/* Demangled: gScenarioControlMap */
extern void* gScenarioControlMap;

/* Symbol: _ZNK5NSCam19ResourceConcurrency6Client9isAppliedEv */
/* Demangled: NSCam::ResourceConcurrency::Client::isApplied() const */
int _ZNK5NSCam19ResourceConcurrency6Client9isAppliedEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >&) */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor4initEv */
/* Demangled: NSCam::v3::TemperatureMonitor::init() */
int _ZN5NSCam2v318TemperatureMonitor4initEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEEE;

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEEC2EjjSC_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >&) */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEEC2EjjSC_(void);

/* Symbol: _ZN5NSCam15BssContainerImp9sInstanceE */
/* Demangled: NSCam::BssContainerImp::sInstance */
extern void* _ZN5NSCam15BssContainerImp9sInstanceE;

/* Symbol: _ZTVN5NSCam12BssContainerE */
/* Demangled: vtable for NSCam::BssContainer */
extern void* _ZTVN5NSCam12BssContainerE;

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvj */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIiE10do_destroyEPvj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportBurstNumERj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportBurstNum(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportBurstNumERj(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency6Client7acquireEv */
/* Demangled: NSCam::ResourceConcurrency::Client::acquire() */
int _ZN5NSCam19ResourceConcurrency6Client7acquireEv(void);

/* Symbol: _ZTCN5NSCam19PlugProcessingFCellE0_NS_18PlugProcessingBaseE */
/* Demangled: construction vtable for NSCam::PlugProcessingBase-in-NSCam::PlugProcessingFCell */
extern void* _ZTCN5NSCam19PlugProcessingFCellE0_NS_18PlugProcessingBaseE;

/* Symbol: _ZN5NSCam5Utils10CamManager13setStereoHintEb */
/* Demangled: NSCam::Utils::CamManager::setStereoHint(bool) */
int _ZN5NSCam5Utils10CamManager13setStereoHintEb(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor16getPDAFSupportedEj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getPDAFSupported(unsigned int) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor16getPDAFSupportedEj(void);

/* Symbol: _ZN5NSCam15ScenarioControl13enterScenarioEi */
/* Demangled: NSCam::ScenarioControl::enterScenario(int) */
int _ZN5NSCam15ScenarioControl13enterScenarioEi(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase10InitThread10readyToRunEv */
/* Demangled: NSCam::PlugProcessingBase::InitThread::readyToRun() */
int _ZN5NSCam18PlugProcessingBase10InitThread10readyToRunEv(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase10InitThread4exitEv */
/* Demangled: NSCam::PlugProcessingBase::InitThread::exit() */
int _ZN5NSCam18PlugProcessingBase10InitThread4exitEv(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper20querySupportBurstNumERj */
/* Demangled: NSCamHW::HwInfoHelper::querySupportBurstNum(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper20querySupportBurstNumERj(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam14FDContainerImpEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::FDContainerImp>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam14FDContainerImpEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >&) */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEED2Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNK5NSCam5Utils10CamManager14getSensorCountEv */
/* Demangled: NSCam::Utils::CamManager::getSensorCount() const */
int _ZNK5NSCam5Utils10CamManager14getSensorCountEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_(void);

/* Symbol: _ZN5NSCam15FaceIQContainerD0Ev */
/* Demangled: NSCam::FaceIQContainer::~FaceIQContainer() */
int _ZN5NSCam15FaceIQContainerD0Ev(void);

/* Symbol: _ZTVN5NSCam15FaceIQContainerE */
/* Demangled: vtable for NSCam::FaceIQContainer */
extern void* _ZTVN5NSCam15FaceIQContainerE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKBssContainerInfo*, std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::less<MTKBssContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void);

/* Symbol: _ZN5NSCam5Utils10CamManager12setFrameRateEjj */
/* Demangled: NSCam::Utils::CamManager::setFrameRate(unsigned int, unsigned int) */
int _ZN5NSCam5Utils10CamManager12setFrameRateEjj(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper11Implementor28getSecureSensorModeSupportedEj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSecureSensorModeSupported(unsigned int) */
int _ZN7NSCamHW12HwInfoHelper11Implementor28getSecureSensorModeSupportedEj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor21get4CellSensorPatternEv */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::get4CellSensorPattern() const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor21get4CellSensorPatternEv(void);

/* Symbol: _ZTV23HwInfoHelperManagerImpl */
/* Demangled: vtable for HwInfoHelperManagerImpl */
extern void* _ZTV23HwInfoHelperManagerImpl;

/* Symbol: _ZTv0_n12_N5NSCam2v318TemperatureMonitorD0Ev */
/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
int _ZTv0_n12_N5NSCam2v318TemperatureMonitorD0Ev(void);

/* Symbol: _ZN5NSCam11FDContainer9queryLockEv */
/* Demangled: NSCam::FDContainer::queryLock() */
int _ZN5NSCam11FDContainer9queryLockEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__emplace_unique_key_args<long long, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>, std::__1::tuple<> >(long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN5NSCam12BssContainer10editUnlockEP19MTKBssContainerInfo */
/* Demangled: NSCam::BssContainer::editUnlock(MTKBssContainerInfo*) */
int _ZN5NSCam12BssContainer10editUnlockEP19MTKBssContainerInfo(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper21get4CellSensorPatternEv */
/* Demangled: NSCamHW::HwInfoHelper::get4CellSensorPattern() const */
int _ZNK7NSCamHW12HwInfoHelper21get4CellSensorPatternEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo>&>&) */
int _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCellD0Ev */
/* Demangled: NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
int _ZN5NSCam19PlugProcessingFCellD0Ev(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency6Client7releaseEv */
/* Demangled: NSCam::ResourceConcurrency::Client::release() */
int _ZN5NSCam19ResourceConcurrency6Client7releaseEv(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvj */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils10JobMonitorEEaSEPS3_ */
/* Demangled: android::sp<NSCam::Utils::JobMonitor>::operator=(NSCam::Utils::JobMonitor*) */
int _ZN7android2spIN5NSCam5Utils10JobMonitorEEaSEPS3_(void);

/* Symbol: _ZTv0_n16_N5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::init(NSCam::IPlugProcessing::OP_MODE) */
int _ZTv0_n16_N5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE(void);

/* Symbol: _ZNK5NSCam5Utils10CamManager12getFrameRateEj */
/* Demangled: NSCam::Utils::CamManager::getFrameRate(unsigned int) const */
int _ZNK5NSCam5Utils10CamManager12getFrameRateEj(void);

/* Symbol: _ZNK5NSCam5Utils10CamManager14getDeviceCountEv */
/* Demangled: NSCam::Utils::CamManager::getDeviceCount() const */
int _ZNK5NSCam5Utils10CamManager14getDeviceCountEv(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper11Implementor27getCameraSensorPowerOnCountEv */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getCameraSensorPowerOnCount() */
int _ZN7NSCamHW12HwInfoHelper11Implementor27getCameraSensorPowerOnCountEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv */
/* Demangled: NSCam::Utils::JobMonitor::Helper::onLastStrongRef(void const*) */
int _ZN5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam19PlugProcessingBasic14sendCommandImpEiiiii */
/* Demangled: NSCam::PlugProcessingBasic::sendCommandImp(int, int, int, int, int) */
int _ZN5NSCam19PlugProcessingBasic14sendCommandImpEiiiii(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__emplace_unique_key_args<MTKFDContainerInfo*, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>, std::__1::tuple<> >(MTKFDContainerInfo* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam5Utils10CamManager14decUsingDeviceEi */
/* Demangled: NSCam::Utils::CamManager::decUsingDevice(int) */
int _ZN5NSCam5Utils10CamManager14decUsingDeviceEi(void);

/* Symbol: _ZN5NSCam5Utils13GyroCollector7getDataExx */
/* Demangled: NSCam::Utils::GyroCollector::getData(long long, long long) */
int _ZN5NSCam5Utils13GyroCollector7getDataExx(void);

/* Symbol: _ZNSt3__18weak_ptrIN5NSCam14FDContainerImpEED2Ev */
/* Demangled: std::__1::weak_ptr<NSCam::FDContainerImp>::~weak_ptr() */
int _ZNSt3__18weak_ptrIN5NSCam14FDContainerImpEED2Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZTVN5NSCam2v318TemperatureMonitorE */
/* Demangled: vtable for NSCam::v3::TemperatureMonitor */
extern void* _ZTVN5NSCam2v318TemperatureMonitorE;

/* Symbol: _ZN5NSCam19ResourceConcurrency6Client6cancelEv */
/* Demangled: NSCam::ResourceConcurrency::Client::cancel() */
int _ZN5NSCam19ResourceConcurrency6Client6cancelEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEED2Ev(void);

/* Symbol: _ZN5NSCam5Utils10CamManager14decSensorCountEPKc */
/* Demangled: NSCam::Utils::CamManager::decSensorCount(char const*) */
int _ZN5NSCam5Utils10CamManager14decSensorCountEPKc(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorVBTimeEjRj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorVBTime(unsigned int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorVBTimeEjRj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper22querySupportRawPatternERj */
/* Demangled: NSCamHW::HwInfoHelper::querySupportRawPattern(unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper22querySupportRawPatternERj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo> >::__append(unsigned int) */
int _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZN5NSCam18PlugProcessingBase12waitInitExitEv */
/* Demangled: NSCam::PlugProcessingBase::waitInitExit() */
int _ZN5NSCam18PlugProcessingBase12waitInitExitEv(void);

/* Symbol: _ZTCN5NSCam19PlugProcessingBasicE0_NS_18PlugProcessingBaseE */
/* Demangled: construction vtable for NSCam::PlugProcessingBase-in-NSCam::PlugProcessingBasic */
extern void* _ZTCN5NSCam19PlugProcessingBasicE0_NS_18PlugProcessingBaseE;

/* Symbol: _ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<MTKBssContainerInfo*, std::__1::allocator<MTKBssContainerInfo*> >::__swap_out_circular_buffer(std::__1::__split_buffer<MTKBssContainerInfo*, std::__1::allocator<MTKBssContainerInfo*>&>&) */
int _ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZTCN5NSCam19ResourceConcurrencyE0_NS_20IResourceConcurrencyE */
/* Demangled: construction vtable for NSCam::IResourceConcurrency-in-NSCam::ResourceConcurrency */
extern void* _ZTCN5NSCam19ResourceConcurrencyE0_NS_20IResourceConcurrencyE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> >::__swap_out_circular_buffer(std::__1::__split_buffer<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*>&>&) */
int _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor23get4CellSensorSupportedEv */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::get4CellSensorSupported() const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor23get4CellSensorSupportedEv(void);

/* Symbol: _Z11isMultiOpenv */
/* Demangled: isMultiOpen() */
int _Z11isMultiOpenv(void);

/* Symbol: _ZTVN5NSCam19ResourceConcurrencyE */
/* Demangled: vtable for NSCam::ResourceConcurrency */
extern void* _ZTVN5NSCam19ResourceConcurrencyE;

/* Symbol: _ZNSt3__114__split_bufferIN6NS3Av315AF_FRAME_INFO_tERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t>&) */
int _ZNSt3__114__split_bufferIN6NS3Av315AF_FRAME_INFO_tERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSO_IJEEEEEENS_4pairINS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<NS3Av3::AF_FRAME_INFO_t*, std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<NS3Av3::AF_FRAME_INFO_t*>, true>, std::__1::allocator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__emplace_unique_key_args<NS3Av3::AF_FRAME_INFO_t*, std::__1::piecewise_construct_t const&, std::__1::tuple<NS3Av3::AF_FRAME_INFO_t* const&>, std::__1::tuple<> >(NS3Av3::AF_FRAME_INFO_t* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NS3Av3::AF_FRAME_INFO_t* const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSO_IJEEEEEENS_4pairINS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam12BssContainerC1EPKcNS_13IBssContainer17eBssContainer_OptE */
/* Demangled: NSCam::BssContainer::BssContainer(char const*, NSCam::IBssContainer::eBssContainer_Opt) */
int _ZN5NSCam12BssContainerC1EPKcNS_13IBssContainer17eBssContainer_OptE(void);

/* Symbol: _ZTVN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EEE */
/* Demangled: vtable for NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u> */
extern void* _ZTVN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam11FDContainerD0Ev */
/* Demangled: NSCam::FDContainer::~FDContainer() */
int _ZN5NSCam11FDContainerD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE8__appendEjRKS9_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE8__appendEjRKS9_(void);

/* Symbol: _ZN5NSCam12BssContainerD1Ev */
/* Demangled: NSCam::BssContainer::~BssContainer() */
int _ZN5NSCam12BssContainerD1Ev(void);

/* Symbol: _ZTVN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaE */
/* Demangled: vtable for NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta */
extern void* _ZTVN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaE;

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZTCN5NSCam15ScenarioControlE0_NS_16IScenarioControlE */
/* Demangled: construction vtable for NSCam::IScenarioControl-in-NSCam::ScenarioControl */
extern void* _ZTCN5NSCam15ScenarioControlE0_NS_16IScenarioControlE;

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC1Ejji */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::SensorTemperature(unsigned int, unsigned int, int) */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC1Ejji(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor14doBeforeKillCbEv */
/* Demangled: NSCam::Utils::JobMonitor::doBeforeKillCb() */
int _ZN5NSCam5Utils10JobMonitor14doBeforeKillCbEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEEE;

/* Symbol: _ZN7android2spIN5NSCam18PlugProcessingBase10InitThreadEEaSEPS3_ */
/* Demangled: android::sp<NSCam::PlugProcessingBase::InitThread>::operator=(NSCam::PlugProcessingBase::InitThread*) */
int _ZN7android2spIN5NSCam18PlugProcessingBase10InitThreadEEaSEPS3_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void);

/* Symbol: _ZTVN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EEE */
/* Demangled: vtable for NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u> */
extern void* _ZTVN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EEE;

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor25isType3PDSensorWithoutPDEEji */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::isType3PDSensorWithoutPDE(unsigned int, int) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor25isType3PDSensorWithoutPDEEji(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper20querySupportVHDRModeEjRj */
/* Demangled: NSCamHW::HwInfoHelper::querySupportVHDRMode(unsigned int, unsigned int&) const */
int _ZNK7NSCamHW12HwInfoHelper20querySupportVHDRModeEjRj(void);

/* Symbol: _Z14isInStereoModei */
/* Demangled: isInStereoMode(int) */
int _Z14isInStereoModei(void);

/* Symbol: _ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev */
/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
int _ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev(void);

/* Symbol: _ZTTN5NSCam18PlugProcessingBase10InitThreadE */
/* Demangled: VTT for NSCam::PlugProcessingBase::InitThread */
extern void* _ZTTN5NSCam18PlugProcessingBase10InitThreadE;

/* Symbol: _ZTv0_n32_N5NSCam18PlugProcessingBaseD0Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
int _ZTv0_n32_N5NSCam18PlugProcessingBaseD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam15FaceIQContainerD2Ev */
/* Demangled: NSCam::FaceIQContainer::~FaceIQContainer() */
int _ZN5NSCam15FaceIQContainerD2Ev(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: _ZN5NSCam11FDContainer8dumpInfoEv */
/* Demangled: NSCam::FDContainer::dumpInfo() */
int _ZN5NSCam11FDContainer8dumpInfoEv(void);

/* Symbol: _ZN5NSCam5Utils10CamManager11getInstanceEv */
/* Demangled: NSCam::Utils::CamManager::getInstance() */
int _ZN5NSCam5Utils10CamManager11getInstanceEv(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<HwInfoHelperImpl, std::__1::allocator<HwInfoHelperImpl> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEEE;

/* Symbol: _Z14isDualZoomModei */
/* Demangled: isDualZoomMode(int) */
int _Z14isDualZoomModei(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*> >::__push_back_slow_path<NS3Av3::AF_FRAME_INFO_t* const&>(NS3Av3::AF_FRAME_INFO_t* const&) */
int _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >&) */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency7Control7releaseENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: NSCam::ResourceConcurrency::Control::release(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZN5NSCam19ResourceConcurrency7Control7releaseENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCellD2Ev */
/* Demangled: NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
int _ZN5NSCam19PlugProcessingFCellD2Ev(void);

/* Symbol: _ZN5NSCam15IPlugProcessing14createInstanceEjNS0_6DEV_IDE */
/* Demangled: NSCam::IPlugProcessing::createInstance(unsigned int, NSCam::IPlugProcessing::DEV_ID) */
int _ZN5NSCam15IPlugProcessing14createInstanceEjNS0_6DEV_IDE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void);

/* Symbol: _ZN7android2wpIN5NSCam15IPlugProcessingEEaSERKNS_2spIS2_EE */
/* Demangled: android::wp<NSCam::IPlugProcessing>::operator=(android::sp<NSCam::IPlugProcessing> const&) */
int _ZN7android2wpIN5NSCam15IPlugProcessingEEaSERKNS_2spIS2_EE(void);

/* Symbol: _ZN5NSCam11FVContainer5clearEv */
/* Demangled: NSCam::FVContainer::clear() */
int _ZN5NSCam11FVContainer5clearEv(void);

/* Symbol: _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*> >::__push_back_slow_path<NS3Av3::AF_FRAME_INFO_t*>(NS3Av3::AF_FRAME_INFO_t*&&) */
int _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void);

/* Symbol: _ZTV16HwInfoHelperImpl */
/* Demangled: vtable for HwInfoHelperImpl */
extern void* _ZTV16HwInfoHelperImpl;

/* Symbol: _ZN5NSCam18PlugProcessingBaseC2Ev */
/* Demangled: NSCam::PlugProcessingBase::PlugProcessingBase() */
int _ZN5NSCam18PlugProcessingBaseC2Ev(void);

/* Symbol: _ZN5NSCam18PlugProcessingBaseD1Ev */
/* Demangled: NSCam::PlugProcessingBase::~PlugProcessingBase() */
int _ZN5NSCam18PlugProcessingBaseD1Ev(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper11Implementor23getDynamicTwinSupportedEv */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::getDynamicTwinSupported() */
int _ZN7NSCamHW12HwInfoHelper11Implementor23getDynamicTwinSupportedEv(void);

/* Symbol: _ZTv0_n24_N5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: virtual thunk to NSCam::ResourceConcurrency::acquireResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZTv0_n24_N5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor9dumpStackEv */
/* Demangled: NSCam::Utils::JobMonitor::dumpStack() */
int _ZN5NSCam5Utils10JobMonitor9dumpStackEv(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitorC2Ev */
/* Demangled: NSCam::Utils::JobMonitor::JobMonitor() */
int _ZN5NSCam5Utils10JobMonitorC2Ev(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitorD1Ev */
/* Demangled: NSCam::Utils::JobMonitor::~JobMonitor() */
int _ZN5NSCam5Utils10JobMonitorD1Ev(void);

/* Symbol: _ZTVN5NSCam18PlugProcessingBase6DlFuncE */
/* Demangled: vtable for NSCam::PlugProcessingBase::DlFunc */
extern void* _ZTVN5NSCam18PlugProcessingBase6DlFuncE;

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvj */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIiE12do_constructEPvj(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<HwInfoHelperImpl, std::__1::allocator<HwInfoHelperImpl> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZNSt3__18weak_ptrIN5NSCam18FaceIQContainerImpEED2Ev */
/* Demangled: std::__1::weak_ptr<NSCam::FaceIQContainerImp>::~weak_ptr() */
int _ZNSt3__18weak_ptrIN5NSCam18FaceIQContainerImpEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZTVN7NSCamHW12HwInfoHelper11ImplementorE */
/* Demangled: vtable for NSCamHW::HwInfoHelper::Implementor */
extern void* _ZTVN7NSCamHW12HwInfoHelper11ImplementorE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<NS3Av3::AF_FRAME_INFO_t*, std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<NS3Av3::AF_FRAME_INFO_t*>, true>, std::__1::allocator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN5NSCam16IScenarioControl6createEi */
/* Demangled: NSCam::IScenarioControl::create(int) */
int _ZN5NSCam16IScenarioControl6createEi(void);

/* Symbol: _ZTTN5NSCam5Utils10JobMonitor6HelperE */
/* Demangled: VTT for NSCam::Utils::JobMonitor::Helper */
extern void* _ZTTN5NSCam5Utils10JobMonitor6HelperE;

/* Symbol: _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSERKS6_ */
/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> const&) */
int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSERKS6_(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper23get4CellSensorSupportedEv */
/* Demangled: NSCamHW::HwInfoHelper::get4CellSensorSupported() const */
int _ZNK7NSCamHW12HwInfoHelper23get4CellSensorSupportedEv(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency9getClientENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: NSCam::ResourceConcurrency::getClient(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZN5NSCam19ResourceConcurrency9getClientENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZTv0_n12_N5NSCam19PlugProcessingFCellD1Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
int _ZTv0_n12_N5NSCam19PlugProcessingFCellD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZTv0_n20_N5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::Helper::onLastStrongRef(void const*) */
int _ZTv0_n20_N5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv(void);

/* Symbol: _ZTv0_n32_N5NSCam19PlugProcessingFCellD0Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
int _ZTv0_n32_N5NSCam19PlugProcessingFCellD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTv0_n20_N5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE */
/* Demangled: virtual thunk to NSCam::ResourceConcurrency::returnClient(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
int _ZTv0_n20_N5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE(void);

/* Symbol: _ZN5NSCam11FDContainerD2Ev */
/* Demangled: NSCam::FDContainer::~FDContainer() */
int _ZN5NSCam11FDContainerD2Ev(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelperC1Ei */
/* Demangled: NSCamHW::HwInfoHelper::HwInfoHelper(int) */
int _ZN7NSCamHW12HwInfoHelperC1Ei(void);

/* Symbol: _ZTv0_n12_N5NSCam18PlugProcessingBaseD0Ev */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
int _ZTv0_n12_N5NSCam18PlugProcessingBaseD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__110shared_ptrI16HwInfoHelperImplED2Ev */
/* Demangled: std::__1::shared_ptr<HwInfoHelperImpl>::~shared_ptr() */
int _ZNSt3__110shared_ptrI16HwInfoHelperImplED2Ev(void);

/* Symbol: _ZN5NSCam15ScenarioControl13enterScenarioERKNS_16IScenarioControl12ControlParamE */
/* Demangled: NSCam::ScenarioControl::enterScenario(NSCam::IScenarioControl::ControlParam const&) */
int _ZN5NSCam15ScenarioControl13enterScenarioERKNS_16IScenarioControl12ControlParamE(void);

/* Symbol: _ZTv0_n12_N5NSCam5Utils10JobMonitorD0Ev */
/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::~JobMonitor() */
int _ZTv0_n12_N5NSCam5Utils10JobMonitorD0Ev(void);

/* Symbol: _ZN5NSCam19PlugProcessingBasic9uninitImpEv */
/* Demangled: NSCam::PlugProcessingBasic::uninitImp() */
int _ZN5NSCam19PlugProcessingBasic9uninitImpEv(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper32getSensorPowerOnPredictionResultERi */
/* Demangled: NSCamHW::HwInfoHelper::getSensorPowerOnPredictionResult(int&) const */
int _ZNK7NSCamHW12HwInfoHelper32getSensorPowerOnPredictionResultERi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5NSCam11FDContainer8editLockEx */
/* Demangled: NSCam::FDContainer::editLock(long long) */
int _ZN5NSCam11FDContainer8editLockEx(void);

/* Symbol: _ZN5NSCam5Utils10CamManager9incDeviceEi */
/* Demangled: NSCam::Utils::CamManager::incDevice(int) */
int _ZN5NSCam5Utils10CamManager9incDeviceEi(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZN5NSCam19ResourceConcurrency13requestClientEv */
/* Demangled: NSCam::ResourceConcurrency::requestClient() */
int _ZN5NSCam19ResourceConcurrency13requestClientEv(void);

/* Symbol: _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaE */
/* Demangled: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta */
extern void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaE;

/* Symbol: _ZN7android2spIN5NSCam13IBssContainerEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IBssContainer>::sp(NSCam::IBssContainer*) */
int _ZN7android2spIN5NSCam13IBssContainerEEC2EPS2_(void);

/* Symbol: _ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<MTKBssContainerInfo*, std::__1::allocator<MTKBssContainerInfo*> >::__push_back_slow_path<MTKBssContainerInfo* const&>(MTKBssContainerInfo* const&) */
int _ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam19PlugProcessingBasicC2Ej */
/* Demangled: NSCam::PlugProcessingBasic::PlugProcessingBasic(unsigned int) */
int _ZN5NSCam19PlugProcessingBasicC2Ej(void);

/* Symbol: _ZTCN5NSCam19PlugProcessingBasicE0_NS_15IPlugProcessingE */
/* Demangled: construction vtable for NSCam::IPlugProcessing-in-NSCam::PlugProcessingBasic */
extern void* _ZTCN5NSCam19PlugProcessingBasicE0_NS_15IPlugProcessingE;

/* Symbol: _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN5NSCam5Utils10CamManager14incUsingDeviceEi */
/* Demangled: NSCam::Utils::CamManager::incUsingDevice(int) */
int _ZN5NSCam5Utils10CamManager14incUsingDeviceEi(void);

/* Symbol: _ZN5NSCam5Utils10CamManager21configUsingDeviceDoneEi */
/* Demangled: NSCam::Utils::CamManager::configUsingDeviceDone(int) */
int _ZN5NSCam5Utils10CamManager21configUsingDeviceDoneEi(void);

/* Symbol: _ZNK5NSCam5Utils10CamManager13getPermissionEv */
/* Demangled: NSCam::Utils::CamManager::getPermission() const */
int _ZNK5NSCam5Utils10CamManager13getPermissionEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE4findIS6_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_ */
/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*> std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE4findIS6_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper11Implementor14queryUFOStrideEiN5NSCam5MSizeEPj */
/* Demangled: NSCamHW::HwInfoHelper::Implementor::queryUFOStride(int, NSCam::MSize, unsigned int*) const */
int _ZNK7NSCamHW12HwInfoHelper11Implementor14queryUFOStrideEiN5NSCam5MSizeEPj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void);

/* Symbol: _ZTTN5NSCam5Utils10JobMonitorE */
/* Demangled: VTT for NSCam::Utils::JobMonitor */
extern void* _ZTTN5NSCam5Utils10JobMonitorE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_compareEPKvS8_(void);

/* Symbol: _Z15mapToBWCProfilei */
/* Demangled: mapToBWCProfile(int) */
int _Z15mapToBWCProfilei(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor12addToObserveEjj */
/* Demangled: NSCam::v3::TemperatureMonitor::addToObserve(unsigned int, unsigned int) */
int _ZN5NSCam2v318TemperatureMonitor12addToObserveEjj(void);

/* Symbol: _ZN5NSCam5Utils10JobMonitor6HelperC2EN7android7String8EiNS3_2wpINS1_8CallbackEEEj */
/* Demangled: NSCam::Utils::JobMonitor::Helper::Helper(android::String8, int, android::wp<NSCam::Utils::JobMonitor::Callback>, unsigned int) */
int _ZN5NSCam5Utils10JobMonitor6HelperC2EN7android7String8EiNS3_2wpINS1_8CallbackEEEj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE8__rehashEj(void);

/* Symbol: _ZNK7NSCamHW12HwInfoHelper14queryUFOStrideEiN5NSCam5MSizeEPj */
/* Demangled: NSCamHW::HwInfoHelper::queryUFOStride(int, NSCam::MSize, unsigned int*) const */
int _ZNK7NSCamHW12HwInfoHelper14queryUFOStrideEiN5NSCam5MSizeEPj(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitorC1Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::TemperatureMonitor() */
int _ZN5NSCam2v318TemperatureMonitorC1Ev(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitorD0Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
int _ZN5NSCam2v318TemperatureMonitorD0Ev(void);

/* Symbol: _ZN5NSCam2v319ITemperatureMonitor6createEv */
/* Demangled: NSCam::v3::ITemperatureMonitor::create() */
int _ZN5NSCam2v319ITemperatureMonitor6createEv(void);

/* Symbol: _ZTv0_n20_N5NSCam18PlugProcessingBase6uninitEv */
/* Demangled: virtual thunk to NSCam::PlugProcessingBase::uninit() */
int _ZTv0_n20_N5NSCam18PlugProcessingBase6uninitEv(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper15DualImplementorC2Ei */
/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::DualImplementor(int) */
int _ZN7NSCamHW12HwInfoHelper15DualImplementorC2Ei(void);

/* Symbol: _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev */
/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingBasicEEERS3_PT_ */
/* Demangled: android::sp<NSCam::IPlugProcessing>& android::sp<NSCam::IPlugProcessing>::operator=<NSCam::PlugProcessingBasic>(NSCam::PlugProcessingBasic*) */
int _ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingBasicEEERS3_PT_(void);

/* Symbol: _ZN5NSCam12IFDContainer14createInstanceEPKcNS0_16eFDContainer_OptE */
/* Demangled: NSCam::IFDContainer::createInstance(char const*, NSCam::IFDContainer::eFDContainer_Opt) */
int _ZN5NSCam12IFDContainer14createInstanceEPKcNS0_16eFDContainer_OptE(void);

/* Symbol: _ZNSt3__114__split_bufferIxRNS_9allocatorIxEEEC2EjjS3_ */
/* Demangled: std::__1::__split_buffer<long long, std::__1::allocator<long long>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<long long>&) */
int _ZNSt3__114__split_bufferIxRNS_9allocatorIxEEEC2EjjS3_(void);

/* Symbol: _ZNSt3__16vectorIxNS_9allocatorIxEEE21__push_back_slow_pathIxEEvOT_ */
/* Demangled: void std::__1::vector<long long, std::__1::allocator<long long> >::__push_back_slow_path<long long>(long long&&) */
int _ZNSt3__16vectorIxNS_9allocatorIxEEE21__push_back_slow_pathIxEEvOT_(void);

/* Symbol: _ZNK7NSCamHW16simplifiedMatrix4dumpEPKc */
/* Demangled: NSCamHW::simplifiedMatrix::dump(char const*) const */
int _ZNK7NSCamHW16simplifiedMatrix4dumpEPKc(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN5NSCam19PlugProcessingFCell14sendCommandImpEiiiii */
/* Demangled: NSCam::PlugProcessingFCell::sendCommandImp(int, int, int, int, int) */
int _ZN5NSCam19PlugProcessingFCell14sendCommandImpEiiiii(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_ */
/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_(void);

/* Symbol: _ZNSt3__16vectorIxNS_9allocatorIxEEE26__swap_out_circular_bufferERNS_14__split_bufferIxRS2_EE */
/* Demangled: std::__1::vector<long long, std::__1::allocator<long long> >::__swap_out_circular_buffer(std::__1::__split_buffer<long long, std::__1::allocator<long long>&>&) */
int _ZNSt3__16vectorIxNS_9allocatorIxEEE26__swap_out_circular_bufferERNS_14__split_bufferIxRS2_EE(void);

/* Symbol: _ZN7NSCamHW12HwInfoHelper23getDynamicTwinSupportedEv */
/* Demangled: NSCamHW::HwInfoHelper::getDynamicTwinSupported() */
int _ZN7NSCamHW12HwInfoHelper23getDynamicTwinSupportedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_HWUTILS_H */
