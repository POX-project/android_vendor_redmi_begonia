/*
 * Reverse-Engineered Source for: libmtkcam_hwutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_hwutils"

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
#include "libmtkcam_hwutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: NSCam::BssContainerImp::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BssContainerImp5sLockE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::updateInfos() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper11updateInfosEv(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper11updateInfosEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::HwTransHelper(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelperC1Ei(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelperC1Ei() called");
    return 0;
}

/* Demangled: NSCam::ScenarioControl::ScenarioControl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControlC2Ei(void) {
    ALOGD("_ZN5NSCam15ScenarioControlC2Ei() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::TemperatureMonitor */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v318TemperatureMonitorE0_N7android6ThreadE = NULL;

/* Exported Object: NSCam::FDContainerImp::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam14FDContainerImp9sInstanceE = NULL;

/* Demangled: NSCam::IHwInfoHelperManager::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20IHwInfoHelperManager3getEv(void) {
    ALOGD("_ZN5NSCam20IHwInfoHelperManager3getEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5clearEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::Implementor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper11ImplementorC2Ei(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper11ImplementorC2Ei() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::Helper::~Helper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor6HelperD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor6HelperD1Ev() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::FDContainer(char const*, NSCam::IFDContainer::eFDContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainerC2EPKcNS_12IFDContainer16eFDContainer_OptE(void) {
    ALOGD("_ZN5NSCam11FDContainerC2EPKcNS_12IFDContainer16eFDContainer_OptE() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::~FVContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainerD0Ev(void) {
    ALOGD("_ZN5NSCam11FVContainerD0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasicD1Ev(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasicD1Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::initImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCell7initImpEv(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCell7initImpEv() called");
    return 0;
}

/* Exported Object: NSCam::FaceIQContainerImp::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam18FaceIQContainerImp5sLockE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getLpModeSupportBitDepthFormat(int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor30getLpModeSupportBitDepthFormatERiRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor30getLpModeSupportBitDepthFormatERiRj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSM_SM_() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::dumpInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainer8dumpInfoEv(void) {
    ALOGD("_ZN5NSCam12BssContainer8dumpInfoEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::shrinkCropRegion(NSCam::MSize, NSCam::MRect&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor16shrinkCropRegionEN5NSCam5MSizeERNS2_5MRectEi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor16shrinkCropRegionEN5NSCam5MSizeERNS2_5MRectEi() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::ResourceConcurrency::Control */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam19ResourceConcurrency7ControlE = NULL;

/* Demangled: NSCam::PlugProcessingBase::InitThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase10InitThread10threadLoopEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase10InitThread10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::queryUnlock(MTKBssContainerInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainer11queryUnlockEP19MTKBssContainerInfo(void) {
    ALOGD("_ZN5NSCam12BssContainer11queryUnlockEP19MTKBssContainerInfo() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::sem_timedwait_millsecs(sem_t&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor22sem_timedwait_millsecsER5sem_tl(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor22sem_timedwait_millsecsER5sem_tl() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::ResourceConcurrency::releaseResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_N5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZTv0_n28_N5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::editUnlock(MTKFDContainerInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainer10editUnlockEP18MTKFDContainerInfo(void) {
    ALOGD("_ZN5NSCam11FDContainer10editUnlockEP18MTKFDContainerInfo() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::FVContainer(char const*, NSCam::IFVContainer::eFVContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainerC2EPKcNS_12IFVContainer16eFVContainer_OptE(void) {
    ALOGD("_ZN5NSCam11FVContainerC2EPKcNS_12IFVContainer16eFVContainer_OptE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IFVContainer>::sp(NSCam::IFVContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IFVContainerEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IFVContainerEEC2EPS2_() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::returnClient(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::Helper::~Helper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam19PlugProcessingBasicD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam19PlugProcessingBasicD0Ev() called");
    return 0;
}

/* Demangled: std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::operator()(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_(void) {
    ALOGD("_ZNKSt3__14hashINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEclERKS6_() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::isYuv() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper5isYuvEv(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper5isYuvEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitorD2Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitorD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*> std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_multi<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE15__emplace_multiIJS6_EEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEDpOT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE15__emplace_multiIJS6_EEENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t const&>(NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKBssContainerInfo*, std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::less<MTKBssContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > > >::__emplace_unique_key_args<MTKBssContainerInfo*, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKBssContainerInfo* const&>, std::__1::tuple<> >(MTKBssContainerInfo* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKBssContainerInfo* const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::setThermalPolicy(char*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager16setThermalPolicyEPcb(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager16setThermalPolicyEPcb() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::DlFunc::libOpen(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase6DlFunc7libOpenEPKc(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase6DlFunc7libOpenEPKc() called");
    return 0;
}

/* Exported Object: VTT for NSCam::PlugProcessingBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam19PlugProcessingBasicE = NULL;

/* Demangled: NSCam::FDContainer::FDContainer(char const*, NSCam::IFDContainer::eFDContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainerC1EPKcNS_12IFDContainer16eFDContainer_OptE(void) {
    ALOGD("_ZN5NSCam11FDContainerC1EPKcNS_12IFDContainer16eFDContainer_OptE() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::push(int, NS3Av3::AF_FRAME_INFO_t) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainer4pushEiN6NS3Av315AF_FRAME_INFO_tE(void) {
    ALOGD("_ZN5NSCam11FVContainer4pushEiN6NS3Av315AF_FRAME_INFO_tE() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::~HwInfoHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelperD2Ev(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelperD2Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::alignPass1HwLimitation(unsigned int, int, int, NSCam::MSize&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEjiiRN5NSCam5MSizeERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEjiiRN5NSCam5MSizeERj() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::getMatrixToActive(unsigned int, NSCamHW::simplifiedMatrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelper17getMatrixToActiveEjRNS_16simplifiedMatrixE(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelper17getMatrixToActiveEjRNS_16simplifiedMatrixE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEEE = NULL;

/* Demangled: NSCam::ResourceConcurrency::Client::obtain() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency6Client6obtainEv(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency6Client6obtainEv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::setAvailableHint(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager16setAvailableHintEb(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager16setAvailableHintEb() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase6uninitEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase6uninitEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSERKS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSERKS6_() called");
    return 0;
}

/* Exported Object: NSCam::FaceIQContainerImp::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam18FaceIQContainerImp9sInstanceE = NULL;

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature6uninitEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperature6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor6uninitEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::waitInitDone() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam18PlugProcessingBase12waitInitDoneEv(void) {
    ALOGD("_ZTv0_n24_N5NSCam18PlugProcessingBase12waitInitDoneEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::~FVContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainerD2Ev(void) {
    ALOGD("_ZN5NSCam11FVContainerD2Ev() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::editLock(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainer8editLockEx(void) {
    ALOGD("_ZN5NSCam12BssContainer8editLockEx() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor10readyToRunEv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor10readyToRunEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::alignPass1HwLimitation(int, int, NSCam::MSize&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj() called");
    return 0;
}

/* Demangled: NSCam::ScenarioControl::exitPerfService() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControl15exitPerfServiceEv(void) {
    ALOGD("_ZN5NSCam15ScenarioControl15exitPerfServiceEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::shrinkCropRegion(NSCam::MSize, NSCam::MRect&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper16shrinkCropRegionEN5NSCam5MSizeERNS1_5MRectEi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper16shrinkCropRegionEN5NSCam5MSizeERNS1_5MRectEi() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::isType3PDSensorWithoutPDE(unsigned int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper25isType3PDSensorWithoutPDEEji(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper25isType3PDSensorWithoutPDEEji() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam5Utils13GyroCollector8GyroInfoERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam5Utils13GyroCollector8GyroInfoERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::FVContainer(char const*, NSCam::IFVContainer::eFVContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainerC1EPKcNS_12IFVContainer16eFVContainer_OptE(void) {
    ALOGD("_ZN5NSCam11FVContainerC1EPKcNS_12IFVContainer16eFVContainer_OptE() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::quertMaxRrzoWidth(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper17quertMaxRrzoWidthERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper17quertMaxRrzoWidthERi() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::alignPass1HwLimitation(int, int, NSCam::MSize&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEiiRN5NSCam5MSizeERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper22alignPass1HwLimitationEiiRN5NSCam5MSizeERj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEENS6_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEENS6_IS8_EEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::ScenarioControl::exitScenario() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControl12exitScenarioEv(void) {
    ALOGD("_ZN5NSCam15ScenarioControl12exitScenarioEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::TemperatureMonitor::SensorTemperature */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v318TemperatureMonitor17SensorTemperatureE = NULL;

/* Exported Object: VTT for NSCam::v3::TemperatureMonitor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v318TemperatureMonitorE = NULL;

/* Demangled: NSCam::Utils::JobMonitor::timeoutHandling(NSCam::Utils::JobMonitor::Job&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor15timeoutHandlingERNS1_3JobE(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor15timeoutHandlingERNS1_3JobE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::PlugProcessingBase::DlFunc>::operator=(NSCam::PlugProcessingBase::DlFunc*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam18PlugProcessingBase6DlFuncEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam18PlugProcessingBase6DlFuncEEaSEPS3_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FDContainerImp*, std::__1::default_delete<NSCam::FDContainerImp>, std::__1::allocator<NSCam::FDContainerImp> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::query() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainer5queryEv(void) {
    ALOGD("_ZN5NSCam11FVContainer5queryEv() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::dumpInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainer8dumpInfoEv(void) {
    ALOGD("_ZN5NSCam15FaceIQContainer8dumpInfoEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::shared_ptr<HwInfoHelperImpl> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrI16HwInfoHelperImplEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_10shared_ptrI16HwInfoHelperImplEEEENS_19__map_value_compareIiS5_NS_4lessIiEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::ScenarioControl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam15ScenarioControlE = NULL;

/* Demangled: NSCam::IBssContainer::createInstance(char const*, NSCam::IBssContainer::eBssContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13IBssContainer14createInstanceEPKcNS0_17eBssContainer_OptE(void) {
    ALOGD("_ZN5NSCam13IBssContainer14createInstanceEPKcNS0_17eBssContainer_OptE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSCamHW::HwInfoHelper::getCameraSensorPowerOnCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper27getCameraSensorPowerOnCountEv(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper27getCameraSensorPowerOnCountEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::JobMonitor>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils10JobMonitorEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils10JobMonitorEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::PlugProcessingFCell(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCellC2Ej(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCellC2Ej() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor11requestExitEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor11requestExitEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IResourceConcurrency>::sp<NSCam::ResourceConcurrency>(NSCam::ResourceConcurrency*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam20IResourceConcurrencyEEC2INS1_19ResourceConcurrencyEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam20IResourceConcurrencyEEC2INS1_19ResourceConcurrencyEEEPT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::PlugProcessingBase::InitThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam18PlugProcessingBase10InitThreadE0_N7android6ThreadE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__deallocate_node(std::__1::__hash_node_base<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS6_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE17__deallocate_nodeEPNS_16__hash_node_baseIPNS_11__hash_nodeIS6_PvEEEE() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::query(int const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainer5queryERKiS2_(void) {
    ALOGD("_ZN5NSCam11FVContainer5queryERKiS2_() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor11getInstanceEv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::DlFunc::getFunction(char const*, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase6DlFunc11getFunctionEPKcPPv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase6DlFunc11getFunctionEPKcPPv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam19PlugProcessingBasicD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam19PlugProcessingBasicD1Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::releaseStartPreviewLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager23releaseStartPreviewLockEv(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager23releaseStartPreviewLockEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::~HwTransHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelperD2Ev(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelperD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::IPlugProcessing-in-NSCam::PlugProcessingBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam18PlugProcessingBaseE0_NS_15IPlugProcessingE = NULL;

/* Demangled: NSCam::PlugProcessingBasic::initImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasic7initImpEv(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasic7initImpEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSERKS7_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSERKS7_() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::~BssContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainerD0Ev(void) {
    ALOGD("_ZN5NSCam12BssContainerD0Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::alignPass1HwLimitation(int, int, NSCam::MSize&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper15DualImplementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper15DualImplementor22alignPass1HwLimitationEiiRN5NSCam5MSizeERj() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::acquireResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FDContainer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam11FDContainerE = NULL;

/* Demangled: NSCam::ResourceConcurrency::Control::acquire(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency7Control7acquireENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency7Control7acquireENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>::operator=(NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEaSEPS6_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::BssContainerImp>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam15BssContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam15BssContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::queryPixelMode(unsigned int, int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper14queryPixelModeEjiRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper14queryPixelModeEjiRj() called");
    return 0;
}

/* Exported Object: gEnterLock */
extern "C" __attribute__((visibility("default"))) void* gEnterLock = NULL;

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::getStartPreviewLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager19getStartPreviewLockEv(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager19getStartPreviewLockEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getShutterDelayFrameCount(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor25getShutterDelayFrameCountERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor25getShutterDelayFrameCountERi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Exported Object: vtable for NSCam::ResourceConcurrency::Client */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam19ResourceConcurrency6ClientE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::FDContainerImp*, std::__1::default_delete<NSCam::FDContainerImp>, std::__1::allocator<NSCam::FDContainerImp> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::ScenarioControl::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControl15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam15ScenarioControl15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: gLock */
extern "C" __attribute__((visibility("default"))) void* gLock = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__emplace_unique_key_args<long long, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>, std::__1::tuple<> >(long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEEEENS_19__map_value_compareIxSA_NS_4lessIxEELb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSM_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::~FaceIQContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainerD1Ev(void) {
    ALOGD("_ZN5NSCam15FaceIQContainerD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::getMatrixFromActive(unsigned int, NSCamHW::simplifiedMatrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelper19getMatrixFromActiveEjRNS_16simplifiedMatrixE(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelper19getMatrixFromActiveEjRNS_16simplifiedMatrixE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::ITemperatureMonitor-in-NSCam::v3::TemperatureMonitor */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v318TemperatureMonitorE0_NS0_19ITemperatureMonitorE = NULL;

/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v318TemperatureMonitorD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v318TemperatureMonitorD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>::operator=(NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEaSEPS5_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t> >::__push_back_slow_path<NS3Av3::AF_FRAME_INFO_t const&>(NS3Av3::AF_FRAME_INFO_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::isMultiDevice() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamManager13isMultiDeviceEv(void) {
    ALOGD("_ZNK5NSCam5Utils10CamManager13isMultiDeviceEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE6resizeEj() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getRecommendRawBitDepth(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor23getRecommendRawBitDepthERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor23getRecommendRawBitDepthERi() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::releaseResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency15releaseResourceENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCellD1Ev(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCellD1Ev() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::queryLock(long long const&, long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainer9queryLockERKxS2_(void) {
    ALOGD("_ZN5NSCam11FDContainer9queryLockERKxS2_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IFDContainer>::sp(NSCam::IFDContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam12IFDContainerEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam12IFDContainerEEC2EPS2_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::ScenarioControl>::operator=(android::sp<NSCam::ScenarioControl>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam15ScenarioControlEEaSEOS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam15ScenarioControlEEaSEOS3_() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::dumpInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainer8dumpInfoEv(void) {
    ALOGD("_ZN5NSCam11FVContainer8dumpInfoEv() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::editLock(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainer8editLockEx(void) {
    ALOGD("_ZN5NSCam15FaceIQContainer8editLockEx() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::BssContainerImp*, std::__1::default_delete<NSCam::BssContainerImp>, std::__1::allocator<NSCam::BssContainerImp> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getRecommendRawBitDepth(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper23getRecommendRawBitDepthERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper23getRecommendRawBitDepthERi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FDContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam14FDContainerImpE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getImgoFmt(unsigned int, int&, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor10getImgoFmtEjRiii(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor10getImgoFmtEjRiii() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBaseC1Ev(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBaseC1Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::~PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBaseD0Ev(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBaseD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__push_back_slow_path<NSCam::BufPlane>(NSCam::BufPlane&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_fstream<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_fstreamIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::TemperatureMonitor::SensorTemperature */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v318TemperatureMonitor17SensorTemperatureE = NULL;

/* Demangled: NSCam::Utils::JobMonitor::JobMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitorC1Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitorC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::~JobMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitorD0Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitorD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam5Utils10JobMonitor15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N5NSCam5Utils10JobMonitor15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::DlFunc::isValid() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase6DlFunc7isValidEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase6DlFunc7isValidEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FVContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam14FVContainerImpE = NULL;

/* Demangled: NSCam::FaceIQContainer::queryUnlock(MTKFDContainerInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainer11queryUnlockEP18MTKFDContainerInfo(void) {
    ALOGD("_ZN5NSCam15FaceIQContainer11queryUnlockEP18MTKFDContainerInfo() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::queryUnlock(std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainer11queryUnlockERKNSt3__16vectorIP18MTKFDContainerInfoNS1_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN5NSCam11FDContainer11queryUnlockERKNSt3__16vectorIP18MTKFDContainerInfoNS1_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::queryLock(std::__1::vector<long long, std::__1::allocator<long long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainer9queryLockERKNSt3__16vectorIxNS1_9allocatorIxEEEE(void) {
    ALOGD("_ZN5NSCam11FDContainer9queryLockERKNSt3__16vectorIxNS1_9allocatorIxEEEE() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getSensorSize(unsigned int, NSCam::MSize&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper13getSensorSizeEjRN5NSCam5MSizeE(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper13getSensorSizeEjRN5NSCam5MSizeE() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::queryLock(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainer9queryLockExx(void) {
    ALOGD("_ZN5NSCam12BssContainer9queryLockExx() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::setRecordingHint(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager16setRecordingHintEb(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager16setRecordingHintEb() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam19PlugProcessingFCellD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam19PlugProcessingFCellD0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::alignRrzoHwLimitation(NSCam::MSize, NSCam::MSize, NSCam::MSize&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper15DualImplementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper15DualImplementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_() called");
    return 0;
}

/* Exported Object: NSCam::FDContainerImp::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam14FDContainerImp5sLockE = NULL;

/* Demangled: NSCam::IFVContainer::createInstance(char const*, NSCam::IFVContainer::eFVContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12IFVContainer14createInstanceEPKcNS0_16eFVContainer_OptE(void) {
    ALOGD("_ZN5NSCam12IFVContainer14createInstanceEPKcNS0_16eFVContainer_OptE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::BufPlane>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8BufPlaneERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Demangled: NSCam::ScenarioControl::enterPerfService(NSCam::IScenarioControl::ControlParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControl16enterPerfServiceERKNS_16IScenarioControl12ControlParamE(void) {
    ALOGD("_ZN5NSCam15ScenarioControl16enterPerfServiceERKNS_16IScenarioControl12ControlParamE() called");
    return 0;
}

/* Demangled: android::wp<NSCam::Utils::JobMonitor>::operator=(android::sp<NSCam::Utils::JobMonitor> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam5Utils10JobMonitorEEaSERKNS_2spIS3_EE(void) {
    ALOGD("_ZN7android2wpIN5NSCam5Utils10JobMonitorEEaSERKNS_2spIS3_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::~FDContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainerD1Ev(void) {
    ALOGD("_ZN5NSCam11FDContainerD1Ev() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::queryLock(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainer9queryLockExx(void) {
    ALOGD("_ZN5NSCam15FaceIQContainer9queryLockExx() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::FaceIQContainer(char const*, NSCam::IFaceIQContainer::eFaceIQContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainerC1EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE(void) {
    ALOGD("_ZN5NSCam15FaceIQContainerC1EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::~BssContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainerD2Ev(void) {
    ALOGD("_ZN5NSCam12BssContainerD2Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorRawFmtType(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor19getSensorRawFmtTypeERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor19getSensorRawFmtTypeERj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IScenarioControl>::operator=(NSCam::IScenarioControl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IScenarioControlEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IScenarioControlEEaSEPS2_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::PlugProcessingBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam19PlugProcessingBasicE = NULL;

/* Exported Object: vtable for NSCam::FVContainer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam11FVContainerE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportVHDRMode(unsigned int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportVHDRModeEjRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportVHDRModeEjRj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorPowerOnPredictionResult(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor32getSensorPowerOnPredictionResultERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor32getSensorPowerOnPredictionResultERi() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getPDAFSupported(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper16getPDAFSupportedEj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper16getPDAFSupportedEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::SensorTemperature(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC2Ejji(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC2Ejji() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::killProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor11killProcessEv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor11killProcessEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::ITemperatureMonitor>::sp<NSCam::v3::TemperatureMonitor>(NSCam::v3::TemperatureMonitor*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v319ITemperatureMonitorEEC2INS2_18TemperatureMonitorEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v319ITemperatureMonitorEEC2INS2_18TemperatureMonitorEEEPT_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE8_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__1::shared_ptr<NSCam::FaceIQContainerImp>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam18FaceIQContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam18FaceIQContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::BssContainerImp*, std::__1::default_delete<NSCam::BssContainerImp>, std::__1::allocator<NSCam::BssContainerImp> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getSensorPDSize(unsigned int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper15getSensorPDSizeEjRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper15getSensorPDSizeEjRj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::alignRrzoHwLimitation(NSCam::MSize, NSCam::MSize, NSCam::MSize&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper21alignRrzoHwLimitationEN5NSCam5MSizeES2_RS2_(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper21alignRrzoHwLimitationEN5NSCam5MSizeES2_RS2_() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBasic::PlugProcessingBasic(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasicC1Ej(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasicC1Ej() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam18PlugProcessingBaseD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam18PlugProcessingBaseD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FDContainerImp*, std::__1::default_delete<NSCam::FDContainerImp>, std::__1::allocator<NSCam::FDContainerImp> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam14FDContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::FaceIQContainerImp*, std::__1::default_delete<NSCam::FaceIQContainerImp>, std::__1::allocator<NSCam::FaceIQContainerImp> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::Utils::CamManager::getFirstOpenId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamManager14getFirstOpenIdEv(void) {
    ALOGD("_ZNK5NSCam5Utils10CamManager14getFirstOpenIdEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: NSCam::Utils::JobMonitor::registerJob(NSCam::Utils::JobMonitor::Job) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor11registerJobENS1_3JobE(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor11registerJobENS1_3JobE() called");
    return 0;
}

/* Demangled: void std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> >::__push_back_slow_path<MTKFDContainerInfo* const&>(MTKFDContainerInfo* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCamHW::HwInfoHelper::DualImplementor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCamHW12HwInfoHelper15DualImplementorE = NULL;

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::sendCommand(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_N5NSCam18PlugProcessingBase11sendCommandEiiiii(void) {
    ALOGD("_ZTv0_n28_N5NSCam18PlugProcessingBase11sendCommandEiiiii() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::uninitImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCell9uninitImpEv(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCell9uninitImpEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSERKS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSERKS6_() called");
    return 0;
}

/* Demangled: NSCam::IResourceConcurrency::createInstance(char const*, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam20IResourceConcurrency14createInstanceEPKcx(void) {
    ALOGD("_ZN5NSCam20IResourceConcurrency14createInstanceEPKcx() called");
    return 0;
}

/* Demangled: android::wp<NSCam::IPlugProcessing>::~wp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam15IPlugProcessingEED2Ev(void) {
    ALOGD("_ZN7android2wpIN5NSCam15IPlugProcessingEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EEE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorFps(unsigned int, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor12getSensorFpsEjRi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor12getSensorFpsEjRi() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportRawPattern(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor22querySupportRawPatternERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor22querySupportRawPatternERj() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::getTemperature() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature14getTemperatureEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperature14getTemperatureEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::unregisterJob(unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor13unregisterJobEyi(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor13unregisterJobEyi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::editUnlock(MTKFDContainerInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainer10editUnlockEP18MTKFDContainerInfo(void) {
    ALOGD("_ZN5NSCam15FaceIQContainer10editUnlockEP18MTKFDContainerInfo() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::DualImplementor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper15DualImplementorC1Ei(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper15DualImplementorC1Ei() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<HwInfoHelperImpl> std::__1::shared_ptr<HwInfoHelperImpl>::make_shared<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrI16HwInfoHelperImplE11make_sharedIJRKiEEES2_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrI16HwInfoHelperImplE11make_sharedIJRKiEEES2_DpOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::JobMonitor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils10JobMonitorE = NULL;

/* Demangled: NSCam::PlugProcessingBase::init(NSCam::IPlugProcessing::OP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::getFirstUsingId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamManager15getFirstUsingIdEv(void) {
    ALOGD("_ZNK5NSCam5Utils10CamManager15getFirstUsingIdEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::ScenarioControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15ScenarioControlE = NULL;

/* Demangled: virtual thunk to NSCam::ScenarioControl::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam15ScenarioControl15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N5NSCam15ScenarioControl15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::~PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBaseD2Ev(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBaseD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FaceIQContainerImp*, std::__1::default_delete<NSCam::FaceIQContainerImp>, std::__1::allocator<NSCam::FaceIQContainerImp> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::~JobMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitorD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitorD2Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::DlFunc::libClose() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase6DlFunc8libCloseEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase6DlFunc8libCloseEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::updateInfos() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper11Implementor11updateInfosEv(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper11Implementor11updateInfosEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEEE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_() called");
    return 0;
}

/* Demangled: std::__1::vector<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: NSCam::ScenarioControl::ScenarioControl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControlC1Ei(void) {
    ALOGD("_ZN5NSCam15ScenarioControlC1Ei() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature4initEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperature4initEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::queryPixelMode(unsigned int, int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor14queryPixelModeEjiRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor14queryPixelModeEjiRj() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::getMatrixFromActiveRatioAlign(unsigned int, NSCamHW::simplifiedMatrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelper29getMatrixFromActiveRatioAlignEjRNS_16simplifiedMatrixE(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelper29getMatrixFromActiveRatioAlignEjRNS_16simplifiedMatrixE() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::Utils::JobMonitor */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam5Utils10JobMonitorE0_N7android6ThreadE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<NS3Av3::AF_FRAME_INFO_t*, std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<NS3Av3::AF_FRAME_INFO_t*>, true>, std::__1::allocator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSO_SO_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSO_SO_() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::Implementor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper11ImplementorC1Ei(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper11ImplementorC1Ei() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::Helper::~Helper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor6HelperD0Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor6HelperD0Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>::operator=(NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSEPS5_() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getDualPDAFSupported(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor20getDualPDAFSupportedEj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor20getDualPDAFSupportedEj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::isRaw() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper5isRawEv(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper5isRawEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasicD0Ev(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasicD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam19PlugProcessingFCellD1Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam19PlugProcessingFCellD1Ev() called");
    return 0;
}

/* Exported Object: NSCam::FVContainerImp::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam14FVContainerImp9sInstanceE = NULL;

/* Exported Object: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKBssContainerInfo*, std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::less<MTKBssContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::ResourceConcurrency::requestClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam19ResourceConcurrency13requestClientEv(void) {
    ALOGD("_ZTv0_n16_N5NSCam19ResourceConcurrency13requestClientEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::HwInfoHelper(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelperC2Ei(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelperC2Ei() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getDualPDAFSupported(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper20getDualPDAFSupportedEj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper20getDualPDAFSupportedEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam18PlugProcessingBaseD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam18PlugProcessingBaseD1Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::FVContainerImp>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam14FVContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam14FVContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::~JobMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam5Utils10JobMonitorD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam5Utils10JobMonitorD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::FVContainerImp*, std::__1::default_delete<NSCam::FVContainerImp>, std::__1::allocator<NSCam::FVContainerImp> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > > >::__emplace_unique_key_args<MTKFDContainerInfo*, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>, std::__1::tuple<> >(MTKFDContainerInfo* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EEE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::alignRrzoHwLimitation(NSCam::MSize, NSCam::MSize, NSCam::MSize&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor21alignRrzoHwLimitationEN5NSCam5MSizeES3_RS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::getSensorName() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperature13getSensorNameEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperature13getSensorNameEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::waitInitDone() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase12waitInitDoneEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase12waitInitDoneEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FVContainerImp*, std::__1::default_delete<NSCam::FVContainerImp>, std::__1::allocator<NSCam::FVContainerImp> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::writeToFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor11writeToFileENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor11writeToFileENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::Helper::Helper(android::String8, int, android::wp<NSCam::Utils::JobMonitor::Callback>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor6HelperC1EN7android7String8EiNS3_2wpINS1_8CallbackEEEj(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor6HelperC1EN7android7String8EiNS3_2wpINS1_8CallbackEEEj() called");
    return 0;
}

/* Demangled: NSCam::IFaceIQContainer::createInstance(char const*, NSCam::IFaceIQContainer::eFaceIQContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16IFaceIQContainer14createInstanceEPKcNS0_20eFaceIQContainer_OptE(void) {
    ALOGD("_ZN5NSCam16IFaceIQContainer14createInstanceEPKcNS0_20eFaceIQContainer_OptE() called");
    return 0;
}

/* Demangled: std::__1::weak_ptr<NSCam::BssContainerImp>::~weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18weak_ptrIN5NSCam15BssContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__18weak_ptrIN5NSCam15BssContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::incSensorCount(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager14incSensorCountEPKc(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager14incSensorCountEPKc() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<HwInfoHelperImpl, std::__1::allocator<HwInfoHelperImpl> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor10threadLoopEv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor10threadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE6resizeEjRKS9_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE6resizeEjRKS9_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IFaceIQContainer>::sp(NSCam::IFaceIQContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam16IFaceIQContainerEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam16IFaceIQContainerEEC2EPS2_() called");
    return 0;
}

/* Exported Object: NSCam::BssContainerImp::sCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BssContainerImp5sCondE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorSize(unsigned int, NSCam::MSize&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor13getSensorSizeEjRN5NSCam5MSizeE(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor13getSensorSizeEjRN5NSCam5MSizeE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::IPlugProcessing-in-NSCam::PlugProcessingFCell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam19PlugProcessingFCellE0_NS_15IPlugProcessingE = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FVContainerImp*, std::__1::default_delete<NSCam::FVContainerImp>, std::__1::allocator<NSCam::FVContainerImp> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam14FVContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::getImgoFmt(unsigned int, int&, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper10getImgoFmtEjRiii(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper10getImgoFmtEjRiii() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::TemperatureMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitorC2Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitorC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitorD1Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitorD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::ResourceConcurrency */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam19ResourceConcurrencyE = NULL;

/* Demangled: std::__1::weak_ptr<NSCam::FVContainerImp>::~weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18weak_ptrIN5NSCam14FVContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__18weak_ptrIN5NSCam14FVContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::getTemperature(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor14getTemperatureEi(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor14getTemperatureEi() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD2Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD2Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getSensorVBTime(unsigned int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper15getSensorVBTimeEjRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper15getSensorVBTimeEjRj() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::calculateFovDifference(unsigned int, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelper22calculateFovDifferenceEjPfS1_(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelper22calculateFovDifferenceEjPfS1_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__write_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE12__write_modeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: NSCam::FaceIQContainerImp::sCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam18FaceIQContainerImp5sCondE = NULL;

/* Demangled: NSCam::BssContainer::BssContainer(char const*, NSCam::IBssContainer::eBssContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainerC2EPKcNS_13IBssContainer17eBssContainer_OptE(void) {
    ALOGD("_ZN5NSCam12BssContainerC2EPKcNS_13IBssContainer17eBssContainer_OptE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IPlugProcessing>& android::sp<NSCam::IPlugProcessing>::operator=<NSCam::PlugProcessingFCell>(NSCam::PlugProcessingFCell*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingFCellEEERS3_PT_(void) {
    ALOGD("_ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingFCellEEERS3_PT_() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::~HwInfoHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelperD1Ev(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelperD1Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::HwTransHelper(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelperC2Ei(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelperC2Ei() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::JobMonitor::Helper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils10JobMonitor6HelperE = NULL;

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getRrzoFmt(unsigned int, int&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor10getRrzoFmtEjRii(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor10getRrzoFmtEjRii() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: NSCam::FVContainerImp::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam14FVContainerImp5sLockE = NULL;

/* Demangled: NSCam::FaceIQContainer::FaceIQContainer(char const*, NSCam::IFaceIQContainer::eFaceIQContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainerC2EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE(void) {
    ALOGD("_ZN5NSCam15FaceIQContainerC2EPKcNS_16IFaceIQContainer20eFaceIQContainer_OptE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::BssContainerImp*, std::__1::default_delete<NSCam::BssContainerImp>, std::__1::allocator<NSCam::BssContainerImp> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam15BssContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: NSCam::Utils::JobMonitor::Helper::~Helper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor6HelperD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor6HelperD2Ev() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::query(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainer5queryERKNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam11FVContainer5queryERKNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::~FVContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainerD1Ev(void) {
    ALOGD("_ZN5NSCam11FVContainerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getRrzoFmt(unsigned int, int&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper10getRrzoFmtEjRii(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper10getRrzoFmtEjRii() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorPDSize(unsigned int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorPDSizeEjRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorPDSizeEjRj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportResizeRatio(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor23querySupportResizeRatioERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor23querySupportResizeRatioERj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getSensorRawFmtType(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper19getSensorRawFmtTypeERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper19getSensorRawFmtTypeERj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasicD2Ev(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasicD2Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::PlugProcessingFCell */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam19PlugProcessingFCellE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::getShutterDelayFrameCount(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper25getShutterDelayFrameCountERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper25getShutterDelayFrameCountERi() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_fstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__113basic_fstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::getSecureSensorModeSupported(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper28getSecureSensorModeSupportedEj(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper28getSecureSensorModeSupportedEj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::quertMaxRrzoWidth(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor17quertMaxRrzoWidthERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor17quertMaxRrzoWidthERi() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::querySupportResizeRatio(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper23querySupportResizeRatioERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper23querySupportResizeRatioERj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getLpModeSupportBitDepthFormat(int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper30getLpModeSupportBitDepthFormatERiRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper30getLpModeSupportBitDepthFormatERiRj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::open(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4openEPKcj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::PlugProcessingFCell */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam19PlugProcessingFCellE = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::PlugProcessingBase::InitThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam18PlugProcessingBase10InitThreadE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::Utils::CamManager::decDevice(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager9decDeviceEi(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager9decDeviceEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::ScenarioControl>::operator=(NSCam::ScenarioControl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam15ScenarioControlEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam15ScenarioControlEEaSEPS2_() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::sendCommand(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase11sendCommandEiiiii(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase11sendCommandEiiiii() called");
    return 0;
}

/* Exported Object: VTT for NSCam::PlugProcessingBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam18PlugProcessingBaseE = NULL;

/* Exported Object: vtable for NSCam::BssContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15BssContainerImpE = NULL;

/* Demangled: NSCam::ResourceConcurrency::Control::settle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency7Control6settleEv(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency7Control6settleEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::FaceIQContainerImp*, std::__1::default_delete<NSCam::FaceIQContainerImp>, std::__1::allocator<NSCam::FaceIQContainerImp> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam18FaceIQContainerImpENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::GyroCollector::trigger() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13GyroCollector7triggerEv(void) {
    ALOGD("_ZN5NSCam5Utils13GyroCollector7triggerEv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::PlugProcessingFCell(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCellC1Ej(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCellC1Ej() called");
    return 0;
}

/* Exported Object: vtable for NSCam::PlugProcessingBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam18PlugProcessingBaseE = NULL;

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam18PlugProcessingBase15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N5NSCam18PlugProcessingBase15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6rehashEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> >::__push_back_slow_path<MTKFDContainerInfo*>(MTKFDContainerInfo*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>::operator=(NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEaSEPS5_() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::Helper::~Helper() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam5Utils10JobMonitor6HelperD1Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getSensorFps(unsigned int, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper12getSensorFpsEjRi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper12getSensorFpsEjRi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam19PlugProcessingBasicD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam19PlugProcessingBasicD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FaceIQContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam18FaceIQContainerImpE = NULL;

/* Demangled: NSCamHW::HwTransHelper::getMatrixToActiveRatioAlign(unsigned int, NSCamHW::simplifiedMatrix&) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelper27getMatrixToActiveRatioAlignEjRNS_16simplifiedMatrixE(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelper27getMatrixToActiveRatioAlignEjRNS_16simplifiedMatrixE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBasic::~PlugProcessingBasic() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam19PlugProcessingBasicD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam19PlugProcessingBasicD0Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwTransHelper::~HwTransHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW13HwTransHelperD1Ev(void) {
    ALOGD("_ZN7NSCamHW13HwTransHelperD1Ev() called");
    return 0;
}

/* Exported Object: gScenarioControlMap */
extern "C" __attribute__((visibility("default"))) void* gScenarioControlMap = NULL;

/* Demangled: NSCam::ResourceConcurrency::Client::isApplied() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam19ResourceConcurrency6Client9isAppliedEv(void) {
    ALOGD("_ZNK5NSCam19ResourceConcurrency6Client9isAppliedEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor4initEv(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor4initEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned long long, NSCam::Utils::JobMonitor::Job> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIyN5NSCam5Utils10JobMonitor3JobEEEEE = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEEC2EjjSC_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEERNS_9allocatorIS9_EEEC2EjjSC_() called");
    return 0;
}

/* Exported Object: NSCam::BssContainerImp::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BssContainerImp9sInstanceE = NULL;

/* Exported Object: vtable for NSCam::BssContainer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12BssContainerE = NULL;

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::querySupportBurstNum(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportBurstNumERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor20querySupportBurstNumERj() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::Client::acquire() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency6Client7acquireEv(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency6Client7acquireEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::PlugProcessingBase-in-NSCam::PlugProcessingFCell */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam19PlugProcessingFCellE0_NS_18PlugProcessingBaseE = NULL;

/* Demangled: NSCam::Utils::CamManager::setStereoHint(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager13setStereoHintEb(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager13setStereoHintEb() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getPDAFSupported(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor16getPDAFSupportedEj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor16getPDAFSupportedEj() called");
    return 0;
}

/* Demangled: NSCam::ScenarioControl::enterScenario(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControl13enterScenarioEi(void) {
    ALOGD("_ZN5NSCam15ScenarioControl13enterScenarioEi() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::InitThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase10InitThread10readyToRunEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase10InitThread10readyToRunEv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::InitThread::exit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase10InitThread4exitEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase10InitThread4exitEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::querySupportBurstNum(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper20querySupportBurstNumERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper20querySupportBurstNumERj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::FDContainerImp>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam14FDContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam14FDContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEED2Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NSCam::Utils::CamManager::getSensorCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamManager14getSensorCountEv(void) {
    ALOGD("_ZNK5NSCam5Utils10CamManager14getSensorCountEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE8__appendEjRKS8_() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::~FaceIQContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainerD0Ev(void) {
    ALOGD("_ZN5NSCam15FaceIQContainerD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FaceIQContainer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15FaceIQContainerE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKBssContainerInfo*, std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >, std::__1::less<MTKBssContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKBssContainerInfo*, android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP19MTKBssContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj3ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::setFrameRate(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager12setFrameRateEjj(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager12setFrameRateEjj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSecureSensorModeSupported(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper11Implementor28getSecureSensorModeSupportedEj(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper11Implementor28getSecureSensorModeSupportedEj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::get4CellSensorPattern() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor21get4CellSensorPatternEv(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor21get4CellSensorPatternEv() called");
    return 0;
}

/* Exported Object: vtable for HwInfoHelperManagerImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV23HwInfoHelperManagerImpl = NULL;

/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v318TemperatureMonitorD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v318TemperatureMonitorD0Ev() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::queryLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainer9queryLockEv(void) {
    ALOGD("_ZN5NSCam11FDContainer9queryLockEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__emplace_unique_key_args<long long, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>, std::__1::tuple<> >(long long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<long long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIxJRKNS_21piecewise_construct_tENS_5tupleIJRKxEEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::editUnlock(MTKBssContainerInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainer10editUnlockEP19MTKBssContainerInfo(void) {
    ALOGD("_ZN5NSCam12BssContainer10editUnlockEP19MTKBssContainerInfo() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::get4CellSensorPattern() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper21get4CellSensorPatternEv(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper21get4CellSensorPatternEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCellD0Ev(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCellD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::Client::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency6Client7releaseEv(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency6Client7releaseEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::JobMonitor>::operator=(NSCam::Utils::JobMonitor*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils10JobMonitorEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils10JobMonitorEEaSEPS3_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::init(NSCam::IPlugProcessing::OP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE(void) {
    ALOGD("_ZTv0_n16_N5NSCam18PlugProcessingBase4initENS_15IPlugProcessing7OP_MODEE() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::getFrameRate(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamManager12getFrameRateEj(void) {
    ALOGD("_ZNK5NSCam5Utils10CamManager12getFrameRateEj() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::getDeviceCount() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamManager14getDeviceCountEv(void) {
    ALOGD("_ZNK5NSCam5Utils10CamManager14getDeviceCountEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getCameraSensorPowerOnCount() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper11Implementor27getCameraSensorPowerOnCountEv(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper11Implementor27getCameraSensorPowerOnCountEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::Helper::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBasic::sendCommandImp(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasic14sendCommandImpEiiiii(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasic14sendCommandImpEiiiii() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::__emplace_unique_key_args<MTKFDContainerInfo*, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>, std::__1::tuple<> >(MTKFDContainerInfo* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<MTKFDContainerInfo* const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__tree_iteratorISB_PNS_11__tree_nodeISB_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::decUsingDevice(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager14decUsingDeviceEi(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager14decUsingDeviceEi() called");
    return 0;
}

/* Demangled: NSCam::Utils::GyroCollector::getData(long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13GyroCollector7getDataExx(void) {
    ALOGD("_ZN5NSCam5Utils13GyroCollector7getDataExx() called");
    return 0;
}

/* Demangled: std::__1::weak_ptr<NSCam::FDContainerImp>::~weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18weak_ptrIN5NSCam14FDContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__18weak_ptrIN5NSCam14FDContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::TemperatureMonitor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v318TemperatureMonitorE = NULL;

/* Demangled: NSCam::ResourceConcurrency::Client::cancel() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency6Client6cancelEv(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency6Client6cancelEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::decSensorCount(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager14decSensorCountEPKc(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager14decSensorCountEPKc() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getSensorVBTime(unsigned int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorVBTimeEjRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor15getSensorVBTimeEjRj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::querySupportRawPattern(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper22querySupportRawPatternERj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper22querySupportRawPatternERj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::Utils::GyroCollector::GyroInfo, std::__1::allocator<NSCam::Utils::GyroCollector::GyroInfo> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5Utils13GyroCollector8GyroInfoENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::waitInitExit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBase12waitInitExitEv(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBase12waitInitExitEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::PlugProcessingBase-in-NSCam::PlugProcessingBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam19PlugProcessingBasicE0_NS_18PlugProcessingBaseE = NULL;

/* Demangled: std::__1::vector<MTKBssContainerInfo*, std::__1::allocator<MTKBssContainerInfo*> >::__swap_out_circular_buffer(std::__1::__split_buffer<MTKBssContainerInfo*, std::__1::allocator<MTKBssContainerInfo*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::IResourceConcurrency-in-NSCam::ResourceConcurrency */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam19ResourceConcurrencyE0_NS_20IResourceConcurrencyE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj56ELj4EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: std::__1::vector<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*> >::__swap_out_circular_buffer(std::__1::__split_buffer<MTKFDContainerInfo*, std::__1::allocator<MTKFDContainerInfo*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP18MTKFDContainerInfoNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::get4CellSensorSupported() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor23get4CellSensorSupportedEv(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor23get4CellSensorSupportedEv() called");
    return 0;
}

/* Demangled: isMultiOpen() */
extern "C" __attribute__((visibility("default"))) int _Z11isMultiOpenv(void) {
    ALOGD("_Z11isMultiOpenv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::ResourceConcurrency */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam19ResourceConcurrencyE = NULL;

/* Demangled: std::__1::__split_buffer<NS3Av3::AF_FRAME_INFO_t, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN6NS3Av315AF_FRAME_INFO_tERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN6NS3Av315AF_FRAME_INFO_tERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__tree_node<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<NS3Av3::AF_FRAME_INFO_t*, std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<NS3Av3::AF_FRAME_INFO_t*>, true>, std::__1::allocator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::__emplace_unique_key_args<NS3Av3::AF_FRAME_INFO_t*, std::__1::piecewise_construct_t const&, std::__1::tuple<NS3Av3::AF_FRAME_INFO_t* const&>, std::__1::tuple<> >(NS3Av3::AF_FRAME_INFO_t* const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NS3Av3::AF_FRAME_INFO_t* const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSO_IJEEEEEENS_4pairINS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJRKS4_EEENSO_IJEEEEEENS_4pairINS_15__tree_iteratorISC_PNS_11__tree_nodeISC_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::BssContainer(char const*, NSCam::IBssContainer::eBssContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainerC1EPKcNS_13IBssContainer17eBssContainer_OptE(void) {
    ALOGD("_ZN5NSCam12BssContainerC1EPKcNS_13IBssContainer17eBssContainer_OptE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::~FDContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainerD0Ev(void) {
    ALOGD("_ZN5NSCam11FDContainerD0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > >::__append(unsigned int, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE8__appendEjRKS9_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEENS_9allocatorIS9_EEE8__appendEjRKS9_() called");
    return 0;
}

/* Demangled: NSCam::BssContainer::~BssContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12BssContainerD1Ev(void) {
    ALOGD("_ZN5NSCam12BssContainerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaE = NULL;

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Exported Object: construction vtable for NSCam::IScenarioControl-in-NSCam::ScenarioControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam15ScenarioControlE0_NS_16IScenarioControlE = NULL;

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::SensorTemperature(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC1Ejji(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperatureC1Ejji() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<long long, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIxN7android2spIN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EE5QMetaEEEEENS_19__map_value_compareIxSB_NS_4lessIxEELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::doBeforeKillCb() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor14doBeforeKillCbEv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor14doBeforeKillCbEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEEE = NULL;

/* Demangled: android::sp<NSCam::PlugProcessingBase::InitThread>::operator=(NSCam::PlugProcessingBase::InitThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam18PlugProcessingBase10InitThreadEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam18PlugProcessingBase10InitThreadEEaSEPS3_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueIN6NS3Av315AF_FRAME_INFO_tELj26ELj4EEE = NULL;

/* Demangled: NSCamHW::HwInfoHelper::Implementor::isType3PDSensorWithoutPDE(unsigned int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor25isType3PDSensorWithoutPDEEji(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor25isType3PDSensorWithoutPDEEji() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::querySupportVHDRMode(unsigned int, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper20querySupportVHDRModeEjRj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper20querySupportVHDRModeEjRj() called");
    return 0;
}

/* Demangled: isInStereoMode(int) */
extern "C" __attribute__((visibility("default"))) int _Z14isInStereoModei(void) {
    ALOGD("_Z14isInStereoModei() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::PlugProcessingBase::InitThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam18PlugProcessingBase10InitThreadE = NULL;

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam18PlugProcessingBaseD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam18PlugProcessingBaseD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::erase(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE5eraseENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::FaceIQContainer::~FaceIQContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15FaceIQContainerD2Ev(void) {
    ALOGD("_ZN5NSCam15FaceIQContainerD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::dumpInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainer8dumpInfoEv(void) {
    ALOGD("_ZN5NSCam11FDContainer8dumpInfoEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager11getInstanceEv(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager11getInstanceEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<HwInfoHelperImpl, std::__1::allocator<HwInfoHelperImpl> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEEE = NULL;

/* Demangled: isDualZoomMode(int) */
extern "C" __attribute__((visibility("default"))) int _Z14isDualZoomModei(void) {
    ALOGD("_Z14isDualZoomModei() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*> >::__push_back_slow_path<NS3Av3::AF_FRAME_INFO_t* const&>(NS3Av3::AF_FRAME_INFO_t* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKBssContainerInfo, 3u, 2u>::QMeta> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI19MTKBssContainerInfoLj3ELj2EE5QMetaEEERNS_9allocatorIS8_EEEC2EjjSB_() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::Control::release(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency7Control7releaseENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency7Control7releaseENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCellD2Ev(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCellD2Ev() called");
    return 0;
}

/* Demangled: NSCam::IPlugProcessing::createInstance(unsigned int, NSCam::IPlugProcessing::DEV_ID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15IPlugProcessing14createInstanceEjNS0_6DEV_IDE(void) {
    ALOGD("_ZN5NSCam15IPlugProcessing14createInstanceEjNS0_6DEV_IDE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE7destroyEPNS_11__tree_nodeISB_PvEE() called");
    return 0;
}

/* Demangled: android::wp<NSCam::IPlugProcessing>::operator=(android::sp<NSCam::IPlugProcessing> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam15IPlugProcessingEEaSERKNS_2spIS2_EE(void) {
    ALOGD("_ZN7android2wpIN5NSCam15IPlugProcessingEEaSERKNS_2spIS2_EE() called");
    return 0;
}

/* Demangled: NSCam::FVContainer::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FVContainer5clearEv(void) {
    ALOGD("_ZN5NSCam11FVContainer5clearEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::AF_FRAME_INFO_t*, std::__1::allocator<NS3Av3::AF_FRAME_INFO_t*> >::__push_back_slow_path<NS3Av3::AF_FRAME_INFO_t*>(NS3Av3::AF_FRAME_INFO_t*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av315AF_FRAME_INFO_tENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::__map_value_compare<MTKFDContainerInfo*, std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >, std::__1::less<MTKFDContainerInfo*>, true>, std::__1::allocator<std::__1::__value_type<MTKFDContainerInfo*, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP18MTKFDContainerInfoN7android2spIN5NSCam13FleetingQueueIS2_Lj18ELj2EE5QMetaEEEEENS_19__map_value_compareIS3_SB_NS_4lessIS3_EELb1EEENS_9allocatorISB_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSN_SN_() called");
    return 0;
}

/* Exported Object: vtable for HwInfoHelperImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV16HwInfoHelperImpl = NULL;

/* Demangled: NSCam::PlugProcessingBase::PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBaseC2Ev(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBaseC2Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBase::~PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18PlugProcessingBaseD1Ev(void) {
    ALOGD("_ZN5NSCam18PlugProcessingBaseD1Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::getDynamicTwinSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper11Implementor23getDynamicTwinSupportedEv(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper11Implementor23getDynamicTwinSupportedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::ResourceConcurrency::acquireResource(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZTv0_n24_N5NSCam19ResourceConcurrency15acquireResourceENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::dumpStack() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor9dumpStackEv(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor9dumpStackEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::JobMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitorC2Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitorC2Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::~JobMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitorD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitorD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::PlugProcessingBase::DlFunc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam18PlugProcessingBase6DlFuncE = NULL;

/* Demangled: android::Vector<int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<HwInfoHelperImpl, std::__1::allocator<HwInfoHelperImpl> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceI16HwInfoHelperImplNS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEERNS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::weak_ptr<NSCam::FaceIQContainerImp>::~weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18weak_ptrIN5NSCam18FaceIQContainerImpEED2Ev(void) {
    ALOGD("_ZNSt3__18weak_ptrIN5NSCam18FaceIQContainerImpEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCamHW::HwInfoHelper::Implementor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7NSCamHW12HwInfoHelper11ImplementorE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::__map_value_compare<NS3Av3::AF_FRAME_INFO_t*, std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, std::__1::less<NS3Av3::AF_FRAME_INFO_t*>, true>, std::__1::allocator<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<NS3Av3::AF_FRAME_INFO_t*, android::sp<NSCam::FleetingQueue<NS3Av3::AF_FRAME_INFO_t, 26u, 4u>::QMeta> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPN6NS3Av315AF_FRAME_INFO_tEN7android2spIN5NSCam13FleetingQueueIS3_Lj26ELj4EE5QMetaEEEEENS_19__map_value_compareIS4_SC_NS_4lessIS4_EELb1EEENS_9allocatorISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::IScenarioControl::create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam16IScenarioControl6createEi(void) {
    ALOGD("_ZN5NSCam16IScenarioControl6createEi() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Utils::JobMonitor::Helper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam5Utils10JobMonitor6HelperE = NULL;

/* Demangled: android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta>::operator=(android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 18u, 2u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSERKS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj18ELj2EE5QMetaEEaSERKS6_() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::get4CellSensorSupported() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper23get4CellSensorSupportedEv(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper23get4CellSensorSupportedEv() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::getClient(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency9getClientENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency9getClientENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam19PlugProcessingFCellD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam19PlugProcessingFCellD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::Helper::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N5NSCam5Utils10JobMonitor6Helper15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingFCell::~PlugProcessingFCell() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam19PlugProcessingFCellD0Ev(void) {
    ALOGD("_ZTv0_n32_N5NSCam19PlugProcessingFCellD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::ResourceConcurrency::returnClient(NSCam::IResourceConcurrency::CLIENT_HANDLER) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE(void) {
    ALOGD("_ZTv0_n20_N5NSCam19ResourceConcurrency12returnClientENS_20IResourceConcurrency14CLIENT_HANDLERE() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::~FDContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainerD2Ev(void) {
    ALOGD("_ZN5NSCam11FDContainerD2Ev() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::HwInfoHelper(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelperC1Ei(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelperC1Ei() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::~PlugProcessingBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam18PlugProcessingBaseD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam18PlugProcessingBaseD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<HwInfoHelperImpl>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrI16HwInfoHelperImplED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrI16HwInfoHelperImplED2Ev() called");
    return 0;
}

/* Demangled: NSCam::ScenarioControl::enterScenario(NSCam::IScenarioControl::ControlParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15ScenarioControl13enterScenarioERKNS_16IScenarioControl12ControlParamE(void) {
    ALOGD("_ZN5NSCam15ScenarioControl13enterScenarioERKNS_16IScenarioControl12ControlParamE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Utils::JobMonitor::~JobMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam5Utils10JobMonitorD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam5Utils10JobMonitorD0Ev() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBasic::uninitImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasic9uninitImpEv(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasic9uninitImpEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getSensorPowerOnPredictionResult(int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper32getSensorPowerOnPredictionResultERi(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper32getSensorPowerOnPredictionResultERi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: NSCam::FDContainer::editLock(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11FDContainer8editLockEx(void) {
    ALOGD("_ZN5NSCam11FDContainer8editLockEx() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::incDevice(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager9incDeviceEi(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager9incDeviceEi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: NSCam::ResourceConcurrency::requestClient() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19ResourceConcurrency13requestClientEv(void) {
    ALOGD("_ZN5NSCam19ResourceConcurrency13requestClientEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaE = NULL;

/* Demangled: android::sp<NSCam::IBssContainer>::sp(NSCam::IBssContainer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam13IBssContainerEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam13IBssContainerEEC2EPS2_() called");
    return 0;
}

/* Demangled: void std::__1::vector<MTKBssContainerInfo*, std::__1::allocator<MTKBssContainerInfo*> >::__push_back_slow_path<MTKBssContainerInfo* const&>(MTKBssContainerInfo* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP19MTKBssContainerInfoNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::TemperatureMonitor::SensorTemperature*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjPN5NSCam2v318TemperatureMonitor17SensorTemperatureEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingBasic::PlugProcessingBasic(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingBasicC2Ej(void) {
    ALOGD("_ZN5NSCam19PlugProcessingBasicC2Ej() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::IPlugProcessing-in-NSCam::PlugProcessingBasic */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam19PlugProcessingBasicE0_NS_15IPlugProcessingE = NULL;

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NSCam::Utils::CamManager::incUsingDevice(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager14incUsingDeviceEi(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager14incUsingDeviceEi() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::configUsingDeviceDone(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamManager21configUsingDeviceDoneEi(void) {
    ALOGD("_ZN5NSCam5Utils10CamManager21configUsingDeviceDoneEi() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamManager::getPermission() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamManager13getPermissionEv(void) {
    ALOGD("_ZNK5NSCam5Utils10CamManager13getPermissionEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_iterator<std::__1::__hash_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*> std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE4findIS6_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE4findIS6_EENS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEERKT_() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::Implementor::queryUFOStride(int, NSCam::MSize, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper11Implementor14queryUFOStrideEiN5NSCam5MSizeEPj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper11Implementor14queryUFOStrideEiN5NSCam5MSizeEPj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::close() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5closeEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::Utils::JobMonitor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam5Utils10JobMonitorE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::PlugProcessingFCell::bufferInfo> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam19PlugProcessingFCell10bufferInfoEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: mapToBWCProfile(int) */
extern "C" __attribute__((visibility("default"))) int _Z15mapToBWCProfilei(void) {
    ALOGD("_Z15mapToBWCProfilei() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::addToObserve(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor12addToObserveEjj(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor12addToObserveEjj() called");
    return 0;
}

/* Demangled: NSCam::Utils::JobMonitor::Helper::Helper(android::String8, int, android::wp<NSCam::Utils::JobMonitor::Callback>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10JobMonitor6HelperC2EN7android7String8EiNS3_2wpINS1_8CallbackEEEj(void) {
    ALOGD("_ZN5NSCam5Utils10JobMonitor6HelperC2EN7android7String8EiNS3_2wpINS1_8CallbackEEEj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4hashIS6_EENS_8equal_toIS6_EENS4_IS6_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::queryUFOStride(int, NSCam::MSize, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW12HwInfoHelper14queryUFOStrideEiN5NSCam5MSizeEPj(void) {
    ALOGD("_ZNK7NSCamHW12HwInfoHelper14queryUFOStrideEiN5NSCam5MSizeEPj() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::TemperatureMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitorC1Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitorC1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::~TemperatureMonitor() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitorD0Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitorD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::ITemperatureMonitor::create() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319ITemperatureMonitor6createEv(void) {
    ALOGD("_ZN5NSCam2v319ITemperatureMonitor6createEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::PlugProcessingBase::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam18PlugProcessingBase6uninitEv(void) {
    ALOGD("_ZTv0_n20_N5NSCam18PlugProcessingBase6uninitEv() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::DualImplementor::DualImplementor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper15DualImplementorC2Ei(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper15DualImplementorC2Ei() called");
    return 0;
}

/* Demangled: NSCam::v3::TemperatureMonitor::SensorTemperature::~SensorTemperature() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev(void) {
    ALOGD("_ZN5NSCam2v318TemperatureMonitor17SensorTemperatureD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IPlugProcessing>& android::sp<NSCam::IPlugProcessing>::operator=<NSCam::PlugProcessingBasic>(NSCam::PlugProcessingBasic*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingBasicEEERS3_PT_(void) {
    ALOGD("_ZN7android2spIN5NSCam15IPlugProcessingEEaSINS1_19PlugProcessingBasicEEERS3_PT_() called");
    return 0;
}

/* Demangled: NSCam::IFDContainer::createInstance(char const*, NSCam::IFDContainer::eFDContainer_Opt) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12IFDContainer14createInstanceEPKcNS0_16eFDContainer_OptE(void) {
    ALOGD("_ZN5NSCam12IFDContainer14createInstanceEPKcNS0_16eFDContainer_OptE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<long long, std::__1::allocator<long long>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIxRNS_9allocatorIxEEEC2EjjS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIxRNS_9allocatorIxEEEC2EjjS3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<long long, std::__1::allocator<long long> >::__push_back_slow_path<long long>(long long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIxNS_9allocatorIxEEE21__push_back_slow_pathIxEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIxNS_9allocatorIxEEE21__push_back_slow_pathIxEEvOT_() called");
    return 0;
}

/* Demangled: NSCamHW::simplifiedMatrix::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7NSCamHW16simplifiedMatrix4dumpEPKc(void) {
    ALOGD("_ZNK7NSCamHW16simplifiedMatrix4dumpEPKc() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: NSCam::PlugProcessingFCell::sendCommandImp(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam19PlugProcessingFCell14sendCommandImpEiiiii(void) {
    ALOGD("_ZN5NSCam19PlugProcessingFCell14sendCommandImpEiiiii() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta>, std::__1::allocator<android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> > >::resize(unsigned int, android::sp<NSCam::FleetingQueue<MTKFDContainerInfo, 56u, 4u>::QMeta> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam13FleetingQueueI18MTKFDContainerInfoLj56ELj4EE5QMetaEEENS_9allocatorIS8_EEE6resizeEjRKS8_() called");
    return 0;
}

/* Demangled: std::__1::vector<long long, std::__1::allocator<long long> >::__swap_out_circular_buffer(std::__1::__split_buffer<long long, std::__1::allocator<long long>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIxNS_9allocatorIxEEE26__swap_out_circular_bufferERNS_14__split_bufferIxRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIxNS_9allocatorIxEEE26__swap_out_circular_bufferERNS_14__split_bufferIxRS2_EE() called");
    return 0;
}

/* Demangled: NSCamHW::HwInfoHelper::getDynamicTwinSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN7NSCamHW12HwInfoHelper23getDynamicTwinSupportedEv(void) {
    ALOGD("_ZN7NSCamHW12HwInfoHelper23getDynamicTwinSupportedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::wp<NSCam::ScenarioControl> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2wpIN5NSCam15ScenarioControlEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::__read_mode() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE11__read_modeEv() called");
    return 0;
}
