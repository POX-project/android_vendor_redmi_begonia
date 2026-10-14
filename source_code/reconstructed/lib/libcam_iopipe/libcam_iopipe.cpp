/*
 * Reverse-Engineered Source for: libcam.iopipe.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_iopipe"

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
#include "libcam_iopipe.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttSuspendStateCB(CAM_STATE_OP, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17sttSuspendStateCBE12CAM_STATE_OPPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17sttSuspendStateCBE12CAM_STATE_OPPv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSImageio::NSIspio::STImgResize, std::__1::allocator<NSImageio::NSIspio::STImgResize> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN9NSImageio7NSIspio11STImgResizeENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN9NSImageio7NSIspio11STImgResizeENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::~ImageTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD1Ev() called");
    return 0;
}

/* Demangled: getUs() */
extern "C" __attribute__((visibility("default"))) int _Z5getUsv(void) {
    ALOGD("_Z5getUsv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: iospipe_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* iospipe_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::IsDMAPortSupport(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEC2ERKS7_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEC2ERKS7_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::ispDequeThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispDequeThreadEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispDequeThreadEPv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*>&>::push_front(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE10push_frontERKS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE10push_frontERKS5_() called");
    return 0;
}

/* Exported Object: iocamsvspipe_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipe_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::GetOpenedPortInfo(NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::ePortInfoCmd, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_DEBUG = NULL;

/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::MRect, std::__1::allocator<NSCam::MRect>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEventSystem::PostThread>::operator=(NSCam::NSIoPipe::IoPipeEventSystem::PostThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadEEaSEPS4_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NPipeCfgGLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe13NPipeCfgGLockE = NULL;

/* Demangled: std::__1::__list_imp<unsigned int, std::__1::allocator<unsigned int> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::ECmd> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Exported Object: iospipe_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* iospipe_DbgLogEnable_ERROR = NULL;

/* Exported Object: P2NormalStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_VERBOSE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_INFO = NULL;

/* Exported Object: g_FakeClk */
extern "C" __attribute__((visibility("default"))) void* g_FakeClk = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::StatisticPipe(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC2EjPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC2EjPKc() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::SPipeGLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10SPipeGLockE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::JpegCodec() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setCropROI(NSCam::MRect) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager10setCropROIENS_5MRectE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager10setCropROIENS_5MRectE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::addUser(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7addUserEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7addUserEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4stopEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4stopEi() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::CamsvStatisticPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC1EPNS1_18CamsvStatisticPipeE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC1EPNS1_18CamsvStatisticPipeE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::push_back(NSCam::NSIoPipe::NSWpe::WPEFrameUnit const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: TS_FakeSensorList::querySensorStaticInfo(unsigned int, NSCam::SensorStaticInfo*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17TS_FakeSensorList21querySensorStaticInfoEjPN5NSCam16SensorStaticInfoE(void) {
    ALOGD("_ZNK17TS_FakeSensorList21querySensorStaticInfoEjPN5NSCam16SensorStaticInfoE() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_ERROR = NULL;

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::reserve(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE7reserveEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE7reserveEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DipModuleCfg>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__push_back_slow_path<NSCam::MRect const&>(NSCam::MRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::list<unsigned int, std::__1::allocator<unsigned int> >::erase(std::__1::__list_const_iterator<unsigned int, void*>, std::__1::__list_const_iterator<unsigned int, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIjNS_9allocatorIjEEE5eraseENS_21__list_const_iteratorIjPvEES6_(void) {
    ALOGD("_ZNSt3__14listIjNS_9allocatorIjEEE5eraseENS_21__list_const_iteratorIjPvEES6_() called");
    return 0;
}

/* Exported Object: iocamsvspipet_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipet_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: P2NormalStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mEnablePath */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11mEnablePathE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::attach(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6attachEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6attachEPKc() called");
    return 0;
}

/* Demangled: ISImagerBridge::setCropROI(NSCam::MRect) */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridge10setCropROIEN5NSCam5MRectE(void) {
    ALOGD("_ZN14ISImagerBridge10setCropROIEN5NSCam5MRectE() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_DEBUG = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mSemWpeThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mSemWpeThreadE = NULL;

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::lock(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform4lockEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform4lockEj() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Exported Object: P2NormalStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doMdpStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::checkWPEEnqueuedUserNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv() called");
    return 0;
}

/* Exported Object: iopipe_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* iopipe_DbgLogEnable_DEBUG = NULL;

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t const&>(NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: RssP1CbImpl::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11RssP1CbImpl14p1TuningNotifyEPvS0_(void) {
    ALOGD("_ZN11RssP1CbImpl14p1TuningNotifyEPvS0_() called");
    return 0;
}

/* Demangled: ISImagerBridge::~ISImagerBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridgeD1Ev(void) {
    ALOGD("_ZN14ISImagerBridgeD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::Dump_Tpipe(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4stopEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4stopEi() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6uninitEv() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__swap_out_circular_buffer(std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void) {
    ALOGD("_ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::BufInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::needSecureBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE8__appendEj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NPipeGLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10NPipeGLockE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::dmaCfg(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6dmaCfgEPNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6dmaCfgEPNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_WARN = NULL;

/* Demangled: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::pStatisticPipe */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe14pStatisticPipeE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::execute(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager7executeEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager7executeEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::configPipe_bh() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13configPipe_bhEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13configPipe_bhEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getIspUniReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::GetCapibility(unsigned int, E_CAM_Query, CAM_Queryrst&) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITY13GetCapibilityEj11E_CAM_QueryR12CAM_Queryrst(void) {
    ALOGD("_ZN14CAM_CAPIBILITY13GetCapibilityEj11E_CAM_QueryR12CAM_Queryrst() called");
    return 0;
}

/* Demangled: saveToFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z10saveToFilePKcPhj(void) {
    ALOGD("_Z10saveToFilePKcPhj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*>&>::push_front(android::sp<NSCam::NSIoPipe::IoPipeEvent>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE10push_frontERKS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE10push_frontERKS7_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void) {
    ALOGD("_ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::addCommand(NSCam::NSIoPipe::NSWpe::ECmd const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::GetOpenedPortInfo(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::ePortInfoCmd, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj() called");
    return 0;
}

/* Demangled: IImageTransformBridge::getPQParameter() const */
extern "C" __attribute__((visibility("default"))) int _ZNK21IImageTransformBridge14getPQParameterEv(void) {
    ALOGD("_ZNK21IImageTransformBridge14getPQParameterEv() called");
    return 0;
}

/* Exported Object: P2NormalStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWpeStreamImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::NormalPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC1EPNS1_10NormalPipeE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC1EPNS1_10NormalPipeE() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIjNS_9allocatorIjEEE6insertINS_21__list_const_iteratorIjPvEEEENS_15__list_iteratorIjS6_EES7_T_SA_PNS_9enable_ifIXsr19__is_input_iteratorISA_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIjNS_9allocatorIjEEE6insertINS_21__list_const_iteratorIjPvEEEENS_15__list_iteratorIjS6_EES7_T_SA_PNS_9enable_ifIXsr19__is_input_iteratorISA_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIjNS_9allocatorIjEEE6insertINS_21__list_const_iteratorIjPvEEEENS_15__list_iteratorIjS6_EES7_T_SA_PNS_9enable_ifIXsr19__is_input_iteratorISA_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::IoPipeEventHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe17IoPipeEventHandleE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::dequeJudgement() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doDeque(int, NSCam::NSIoPipe::NSPostProc::FrameUnit&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi() called");
    return 0;
}

/* Demangled: DrvMkdir(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8DrvMkdirPKcj(void) {
    ALOGD("_Z8DrvMkdirPKcj() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_ASSERT = NULL;

/* Exported Object: WpeStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_INFO = NULL;

/* Exported Object: gWPELastTpipeStructure */
extern "C" __attribute__((visibility("default"))) void* gWPELastTpipeStructure = NULL;

/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::configEnquePath(NSImageio::NSIspio::ICamIOPipe::E_FRM_EVENT) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15configEnquePathEN9NSImageio7NSIspio10ICamIOPipe11E_FRM_EVENTE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15configEnquePathEN9NSImageio7NSIspio10ICamIOPipe11E_FRM_EVENTE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void) {
    ALOGD("_ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mUniLinkTG */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10mUniLinkTGE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4stopEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4stopEi() called");
    return 0;
}

/* Demangled: std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__swap_out_circular_buffer(std::__1::__split_buffer<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg const&>(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128> std::__1::move<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128, IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>(std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void) {
    ALOGD("_ZNSt3__14moveI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_() called");
    return 0;
}

/* Demangled: IImageTransformBridge::setPQParameter(NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridge14setPQParameterERKN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamE(void) {
    ALOGD("_ZN21IImageTransformBridge14setPQParameterERKN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::eraseNotify(NSCam::NSIoPipe::NSWpe::EWPEBufferListTag, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::getPQParameter() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam8NSIoPipe9NSSImager14ImageTransform14getPQParameterEv(void) {
    ALOGD("_ZNK5NSCam8NSIoPipe9NSSImager14ImageTransform14getPQParameterEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::sendSyncEvent(NSCam::NSIoPipe::IoPipeEvent&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystem13sendSyncEventERNS0_11IoPipeEventE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystem13sendSyncEventERNS0_11IoPipeEventE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe10NSPostProc12NormalStreamE = NULL;

/* Exported Object: vtable for TS_FakeSensor */
extern "C" __attribute__((visibility("default"))) void* _ZTV13TS_FakeSensor = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::deque(NSCam::NSIoPipe::NSCamIOPipe::QPortID&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5dequeERNS1_7QPortIDERNS1_8QBufInfoEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5dequeERNS1_7QPortIDERNS1_8QBufInfoEj() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::IoPipeEventSystem::PostThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void) {
    ALOGD("_ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::checkVssStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mWPESemEQDone */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mWPESemEQDoneE = NULL;

/* Exported Object: iopipe_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* iopipe_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::configPipe(NSCam::NSIoPipe::NSCamIOPipe::QInitStatParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe10configPipeERKNS1_14QInitStatParamEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe10configPipeERKNS1_14QInitStatParamEi() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::delUser(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7delUserEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7delUserEPKc() called");
    return 0;
}

/* Demangled: IJpegCodecBridge::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16IJpegCodecBridge15destroyInstanceEv(void) {
    ALOGD("_ZN16IJpegCodecBridge15destroyInstanceEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: WpeUtility_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* WpeUtility_DbgLogEnable_DEBUG = NULL;

/* Demangled: FAKE_CLK::FAKE_CLK() */
extern "C" __attribute__((visibility("default"))) int _ZN8FAKE_CLKC1Ev(void) {
    ALOGD("_ZN8FAKE_CLKC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getIspReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEPNS1_10IspP1RegIoEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEPNS1_10IspP1RegIoEji() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::addUser(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7addUserEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7addUserEPKc() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__emplace_unique_key_args<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>, std::__1::tuple<> >(NSCam::NSIoPipe::EDIPInfoEnum const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: iopipet_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* iopipet_DbgLogEnable_ERROR = NULL;

/* Demangled: DrvMakePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11DrvMakePathPKcj(void) {
    ALOGD("_Z11DrvMakePathPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::resume(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const*, E_SUSPEND_TPYE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEPKNS1_8QBufInfoE14E_SUSPEND_TPYE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEPKNS1_8QBufInfoE14E_SUSPEND_TPYE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::enqueBuffer(unsigned int, NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11enqueBufferEjPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11enqueBufferEjPKNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void) {
    ALOGD("_ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::updateFrameTime(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15updateFrameTimeEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15updateFrameTimeEjj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::IJpegCodec::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager10IJpegCodec14createInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager10IJpegCodec14createInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*> >::push_front(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE10push_frontEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE10push_frontEOS6_() called");
    return 0;
}

/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::push_back(IMEM_BUF_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_(void) {
    ALOGD("_ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEventHandle>::operator=(NSCam::NSIoPipe::IoPipeEventHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEPS3_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_WARN = NULL;

/* Demangled: TS_FakeSensor::powerOff(char const*, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TS_FakeSensor8powerOffEPKcjPKj(void) {
    ALOGD("_ZN13TS_FakeSensor8powerOffEPKcjPKj() called");
    return 0;
}

/* Demangled: FAKE_CLK::Get_Fake_Clk(FAKE_CLK_LEVEL) */
extern "C" __attribute__((visibility("default"))) int _ZN8FAKE_CLK12Get_Fake_ClkE14FAKE_CLK_LEVEL(void) {
    ALOGD("_ZN8FAKE_CLK12Get_Fake_ClkE14FAKE_CLK_LEVEL() called");
    return 0;
}

/* Exported Object: iopipe_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* iopipe_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7suspendEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7suspendEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::deque(NSCam::NSIoPipe::PortID, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::ESTT_CACHE_SYNC_POLICY, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEEC2ERKS7_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEEC2ERKS7_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS8_EE(void) {
    ALOGD("_ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS8_EE() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::CAM_CAPIBILITY() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITYC1Ev(void) {
    ALOGD("_ZN14CAM_CAPIBILITYC1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Exported Object: WpeThread_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_ASSERT = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::MRect, std::__1::allocator<NSCam::MRect>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::MRect>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam5MRectERNS_9allocatorIS2_EEEC2EjjS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam5MRectERNS_9allocatorIS2_EEEC2EjjS5_() called");
    return 0;
}

/* Exported Object: vtable for IJpegCodecBridge */
extern "C" __attribute__((visibility("default"))) void* _ZTV16IJpegCodecBridge = NULL;

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEEC2EjjS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEEC2EjjS9_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::updateThreadProperty(NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::PixelIDMapping(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::delUser(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7delUserEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7delUserEPKc() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::IoPipeEventSystem(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystemC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystemC1EPKc() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQUserLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*> >::push_front(IMEM_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::IoPipeEvent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe11IoPipeEventE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NPipeDbgLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe12NPipeDbgLockE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getIspReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEPNS1_10IspP1RegIoEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEPNS1_10IspP1RegIoEji() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: IImageTransformBridge::~IImageTransformBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridgeD2Ev(void) {
    ALOGD("_ZN21IImageTransformBridgeD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> > >::__push_back_slow_path<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> const&>(android::sp<NSCam::NSIoPipe::IoPipeEventHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: IImageTransformBridge::getLastErrorCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK21IImageTransformBridge16getLastErrorCodeEv(void) {
    ALOGD("_ZNK21IImageTransformBridge16getLastErrorCodeEv() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void) {
    ALOGD("_ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::createInstance(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14createInstanceEPNS1_10NormalPipeE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14createInstanceEPNS1_10NormalPipeE() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<IMEM_BUF_INFO> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrI13IMEM_BUF_INFOE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::enquePQParam(unsigned int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform12enquePQParamEjRKNS1_15IImageTransform7PQParamE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform12enquePQParamEjRKNS1_15IImageTransform7PQParamE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getIspReg(unsigned int, unsigned int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEjjPji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEjjPji() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEEE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::eraseNotify(NSCam::NSIoPipe::NSPostProc::EBufferListTag, int, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj() called");
    return 0;
}

/* Exported Object: WpeUtility_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* WpeUtility_DbgLogEnable_INFO = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NpipeIQContol::NPipeIQGlock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13NpipeIQContol12NPipeIQGlockE = NULL;

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::erase(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const* const*, int, 42>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_iLi42EEE(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_iLi42EEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::createInstance(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14createInstanceEPNS1_18CamsvStatisticPipeE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14createInstanceEPNS1_18CamsvStatisticPipeE() called");
    return 0;
}

/* Exported Object: iopipe_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* iopipe_DbgLogEnable_ASSERT = NULL;

/* Exported Object: vtable for NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeE = NULL;

/* Exported Object: iocamsvspipe_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipe_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: vtable for RssP1CbImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTV11RssP1CbImpl = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform6unlockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform6unlockEv() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::signal(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6signalENS1_11EPipeSignalEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6signalENS1_11EPipeSignalEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::freeYuvMem(NSCam::IImageBuffer**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec10freeYuvMemEPPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec10freeYuvMemEPPNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventHandleD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getIspUniReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe12getIspUniRegEPNS1_10IspP1RegIoEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe12getIspUniRegEPNS1_10IspP1RegIoEji() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::SPipeGLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe10SPipeGLockE = NULL;

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::~CAM_CAPIBILITY() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITYD2Ev(void) {
    ALOGD("_ZN14CAM_CAPIBILITYD2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6resumeEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6resumeEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::SPipeDbgLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe12SPipeDbgLockE = NULL;

/* Demangled: getRssP1CbImpl(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14getRssP1CbImpliPKc(void) {
    ALOGD("_Z14getRssP1CbImpliPKc() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*>&>::push_back(IMEM_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getIspReg(unsigned int, unsigned int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEjjPji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEjjPji() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::queryFrame(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi() called");
    return 0;
}

/* Exported Object: WpeUtility_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* WpeUtility_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::configPipe(NSCam::NSIoPipe::NSCamIOPipe::QInitParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10configPipeERKNS1_10QInitParamEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10configPipeERKNS1_10QInitParamEi() called");
    return 0;
}

/* Exported Object: iopipe_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* iopipe_DbgLogEnable_WARN = NULL;

/* Demangled: IImageTransformBridge::IImageTransformBridge(NSCam::NSIoPipe::NSSImager::ImageTransform*) */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridgeC1EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE(void) {
    ALOGD("_ZN21IImageTransformBridgeC1EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE() called");
    return 0;
}

/* Demangled: IImageTransformBridge::~IImageTransformBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridgeD0Ev(void) {
    ALOGD("_ZN21IImageTransformBridgeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSWpe::WpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSWpe9WpeStreamE = NULL;

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO const&>(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSCamIOPipe::NormalPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeE = NULL;

/* Demangled: std::__1::__deque_base<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__14moveIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSCamIOPipe::IStatisticPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipeE = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void) {
    ALOGD("_ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev() called");
    return 0;
}

/* Demangled: RssP1CbImpl::RssP1CbImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN11RssP1CbImplC1Ev(void) {
    ALOGD("_ZN11RssP1CbImplC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::getAlignment(unsigned int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec12getAlignmentEjiPjS3_S3_S3_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec12getAlignmentEjiPjS3_S3_S3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSPostProc::FramePackage const&>(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::resume(unsigned long long, E_SUSPEND_TPYE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEy14E_SUSPEND_TPYE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEy14E_SUSPEND_TPYE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEEC2ERKS7_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEEC2ERKS7_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getIspReg(unsigned int, unsigned int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEjjPji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEjjPji() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::addUser(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7addUserEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7addUserEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::CamsvStatisticPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC2EPNS1_18CamsvStatisticPipeE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC2EPNS1_18CamsvStatisticPipeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::IoPipeEventSystem::PostThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15destroyInstanceEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::allocYuvMem(NSCam::IImageBuffer**, NSCam::MSize const&, int, NSCam::MSize const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11allocYuvMemEPPNS_12IImageBufferERKNS_5MSizeEiS8_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11allocYuvMemEPPNS_12IImageBufferERKNS_5MSizeEiS8_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5enqueERKNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5enqueERKNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::enqueRequestCB(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14enqueRequestCBEPvS3_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14enqueRequestCBEPvS3_() called");
    return 0;
}

/* Exported Object: iocamsvspipet_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipet_DbgLogEnable_INFO = NULL;

/* Demangled: ISImagerBridge::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridge15destroyInstanceEv(void) {
    ALOGD("_ZN14ISImagerBridge15destroyInstanceEv() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Exported Object: vtable for TS_FakeSensorList */
extern "C" __attribute__((visibility("default"))) void* _ZTV17TS_FakeSensorList = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*> >::push_front(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE10push_frontEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE10push_frontEOS5_() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::~CAM_CAPIBILITY() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITYD0Ev(void) {
    ALOGD("_ZN14CAM_CAPIBILITYD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: WpeUtility_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* WpeUtility_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::delUser(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7delUserEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7delUserEPKc() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE5clearEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mCmdListCondE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8mCmdListE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mFirstConfgCam */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14mFirstConfgCamE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttStateNotify(CAM_STATE_OP, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe14sttStateNotifyE12CAM_STATE_OPPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe14sttStateNotifyE12CAM_STATE_OPPv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6uninitEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::wait(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, NSCam::NSIoPipe::NSCamIOPipe::EPipeSignalClearType, int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::SignalTimeInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE() called");
    return 0;
}

/* Exported Object: iopipet_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* iopipet_DbgLogEnable_ASSERT = NULL;

/* Demangled: IJpegCodecBridge::getLastErrorCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK16IJpegCodecBridge16getLastErrorCodeEv(void) {
    ALOGD("_ZNK16IJpegCodecBridge16getLastErrorCodeEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_WpeStreamInit */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15m_WpeStreamInitE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::saveToFile(char const*, NSCam::NSIoPipe::WPEBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::wait(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, NSCam::NSIoPipe::NSCamIOPipe::EPipeSignalClearType, int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::SignalTimeInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NpipeIQContol::sIQData */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13NpipeIQContol7sIQDataE = NULL;

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9push_backERKS5_(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9push_backERKS5_() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128> std::__1::move_backward<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128, IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>(std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void) {
    ALOGD("_ZNSt3__113move_backwardI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::tuningUpdate(std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12tuningUpdateEPNSt3__14listIjNS3_9allocatorIjEEEES8_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12tuningUpdateEPNSt3__14listIjNS3_9allocatorIjEEEES8_() called");
    return 0;
}

/* Exported Object: iopipet_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* iopipet_DbgLogEnable_VERBOSE = NULL;

/* Demangled: IJpegCodecBridge::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16IJpegCodecBridge6encodeEPKN5NSCam12IImageBufferES3_NS0_5MRectEjjjjji(void) {
    ALOGD("_ZN16IJpegCodecBridge6encodeEPKN5NSCam12IImageBufferES3_NS0_5MRectEjjjjji() called");
    return 0;
}

/* Demangled: IJpegCodecBridge::~IJpegCodecBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN16IJpegCodecBridgeD1Ev(void) {
    ALOGD("_ZN16IJpegCodecBridgeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::mapToJpgFmt(int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11mapToJpgFmtEiPjS3_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11mapToJpgFmtEiPjS3_() called");
    return 0;
}

/* Exported Object: vtable for CAM_CAPIBILITY */
extern "C" __attribute__((visibility("default"))) void* _ZTV14CAM_CAPIBILITY = NULL;

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::FrameMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8FrameMgrE = NULL;

/* Exported Object: iospipe_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* iospipe_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::SImager(NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImagerC2EPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImagerC2EPKNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setJpegParam(NSCam::NSIoPipe::NSPostProc::EJpgCmd, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQDone */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQDoneE = NULL;

/* Exported Object: TS_FakeSensorList::mSInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN17TS_FakeSensorList6mSInfoE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createInstance(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE() called");
    return 0;
}

/* Exported Object: nsTimeoutToWaitEnQ */
extern "C" __attribute__((visibility("default"))) void* nsTimeoutToWaitEnQ = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4initEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4initEi() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::idleStateHold(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::E_ThreadGrop) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSIoPipe::NSPostProc::INormalStream-in-NSCam::NSIoPipe::NSPostProc::NormalStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe10NSPostProc12NormalStreamE0_NS1_13INormalStreamE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mTotalCmdNumE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe11sendCommandEiiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe11sendCommandEiiii() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*>&>::push_back(android::sp<NSCam::NSIoPipe::IoPipeEvent>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::enqueJudgement() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_WARN = NULL;

/* Demangled: ISImagerBridge::execute(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridge7executeEj(void) {
    ALOGD("_ZN14ISImagerBridge7executeEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_bSaveReqToFile */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16m_bSaveReqToFileE = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void) {
    ALOGD("_ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5startEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5startEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5enqueEPNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5enqueEPNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: TS_FakeSensor::configure(unsigned int, NSCam::IHalSensor::ConfigParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TS_FakeSensor9configureEjPKN5NSCam10IHalSensor11ConfigParamE(void) {
    ALOGD("_ZN13TS_FakeSensor9configureEjPKN5NSCam10IHalSensor11ConfigParamE() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::ICamsvStatisticPipe::createInstance(unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe14createInstanceEjPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe14createInstanceEjPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: QueueMgr<IMEM_BUF_INFO>::sendCmd(QueueMgr<IMEM_BUF_INFO>::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrI13IMEM_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrI13IMEM_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Exported Object: iospipe_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* iospipe_DbgLogEnable_ASSERT = NULL;

/* Exported Object: iocamsvspipet_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipet_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::ImageTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC1Ev() called");
    return 0;
}

/* Exported Object: iocamsvspipet_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipet_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::isSupportedFormat(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec17isSupportedFormatENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec17isSupportedFormatENS_12EImageFormatE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSWpe::WPEFramePackage const&>(NSCam::NSIoPipe::NSWpe::WPEFramePackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_pathCfg_fsm */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe13m_pathCfg_fsmE = NULL;

/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<IMEM_BUF_INFO>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI13IMEM_BUF_INFORNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI13IMEM_BUF_INFORNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_pathCfgQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14m_pathCfgQueueE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::attach(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6attachEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6attachEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEvent::operator=(NSCam::NSIoPipe::IoPipeEvent const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11IoPipeEventaSERKS1_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11IoPipeEventaSERKS1_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void) {
    ALOGD("_ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_ERROR = NULL;

/* Demangled: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4stopEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4stopEi() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::deque(NSCam::NSIoPipe::PortID, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::ESTT_CACHE_SYNC_POLICY, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5startEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5startEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::setFps(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::swap(std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::NSWpe::WpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe5NSWpe9WpeStreamE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::pAllSensorInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14pAllSensorInfoE = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::~IoPipeEventSystem() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystemD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystemD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NormalPipe(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC1EjPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC1EjPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4initEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4initEi() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::addCmd(NSCam::NSIoPipe::NSPostProc::ECmd const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9pop_frontEv() called");
    return 0;
}

/* Exported Object: iocamsvspipet_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipet_DbgLogEnable_ASSERT = NULL;

/* Demangled: IImageTransformBridge::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridge15destroyInstanceEv(void) {
    ALOGD("_ZN21IImageTransformBridge15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::IImageTransform::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager15IImageTransform14createInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager15IImageTransform14createInstanceEv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mWPEUserInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper12mWPEUserInfoE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe11sendCommandEiiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe11sendCommandEiiii() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQUser */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQUserE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::pCamsvStatisticPipe */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe19pCamsvStatisticPipeE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::dequeDstBuffer(unsigned int, NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14dequeDstBufferEjPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14dequeDstBufferEjPKNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::~ImageTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD2Ev() called");
    return 0;
}

/* Demangled: ISImagerBridge::setTransform(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridge12setTransformEj(void) {
    ALOGD("_ZN14ISImagerBridge12setTransformEj() called");
    return 0;
}

/* Demangled: TS_FakeSensor::querySensorDynamicInfo(unsigned int, NSCam::SensorDynamicInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TS_FakeSensor22querySensorDynamicInfoEjPN5NSCam17SensorDynamicInfoE(void) {
    ALOGD("_ZN13TS_FakeSensor22querySensorDynamicInfoEjPN5NSCam17SensorDynamicInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::abortDma(NSCam::NSIoPipe::PortID, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe8abortDmaENS0_6PortIDEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe8abortDmaENS0_6PortIDEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::getSubscriberList(NSCam::NSIoPipe::IoPipeEventId) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystem17getSubscriberListENS0_13IoPipeEventIdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystem17getSubscriberListENS0_13IoPipeEventIdE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getIspReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEPNS1_10IspP1RegIoEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEPNS1_10IspP1RegIoEji() called");
    return 0;
}

/* Exported Object: iocamsvspipe_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipe_DbgLogEnable_ASSERT = NULL;

/* Demangled: std::__1::__list_imp<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::IStatisticPipe::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: IJpegCodecBridge::IJpegCodecBridge(NSCam::NSIoPipe::NSSImager::JpegCodec*) */
extern "C" __attribute__((visibility("default"))) int _ZN16IJpegCodecBridgeC2EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE(void) {
    ALOGD("_ZN16IJpegCodecBridgeC2EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: TS_FakeSensor::setFakeAttribute(TS_FakeSensor::eFakeAttr, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13TS_FakeSensor16setFakeAttributeENS_9eFakeAttrEj(void) {
    ALOGD("_ZN13TS_FakeSensor16setFakeAttributeENS_9eFakeAttrEj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_occupyingCtlPath */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18m_occupyingCtlPathE = NULL;

/* Demangled: ISImagerBridge::getLastErrorCode() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14ISImagerBridge16getLastErrorCodeEv(void) {
    ALOGD("_ZNK14ISImagerBridge16getLastErrorCodeEv() called");
    return 0;
}

/* Exported Object: vtable for ISImagerBridge */
extern "C" __attribute__((visibility("default"))) void* _ZTV14ISImagerBridge = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::acceptEnqRequest(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe16acceptEnqRequestERKNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe16acceptEnqRequestERKNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::abortDma(NSCam::NSIoPipe::PortID, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8abortDmaENS0_6PortIDEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8abortDmaENS0_6PortIDEPKc() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSCamIOPipe::ICamsvStatisticPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipeE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setTargetImgBuffer(NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager18setTargetImgBufferEPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager18setTargetImgBufferEPKNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: DipUtility_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_VERBOSE = NULL;

/* Demangled: getInstance_FakeSensorList */
extern "C" __attribute__((visibility("default"))) int getInstance_FakeSensorList(void) {
    ALOGD("getInstance_FakeSensorList() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void) {
    ALOGD("_ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::IStatisticPipe::createInstance(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe14createInstanceEjPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe14createInstanceEjPKc() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::JpegCodec() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSSImager::SImager */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe9NSSImager7SImagerE = NULL;

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5enqueERKNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5enqueERKNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5startEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5startEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::~ImageTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttEnqueStateCB(CAM_STATE_OP, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15sttEnqueStateCBE12CAM_STATE_OPPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15sttEnqueStateCBE12CAM_STATE_OPPv() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIjNS_9allocatorIjEEE6assignINS_21__list_const_iteratorIjPvEEEEvT_S8_PNS_9enable_ifIXsr19__is_input_iteratorIS8_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIjNS_9allocatorIjEEE6assignINS_21__list_const_iteratorIjPvEEEEvT_S8_PNS_9enable_ifIXsr19__is_input_iteratorIS8_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIjNS_9allocatorIjEEE6assignINS_21__list_const_iteratorIjPvEEEEvT_S8_PNS_9enable_ifIXsr19__is_input_iteratorIS8_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::checkIfNeedImgTransform(unsigned int, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec23checkIfNeedImgTransformEjPKNS_12IImageBufferES5_NS_5MRectEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec23checkIfNeedImgTransformEjPKNS_12IImageBufferES5_NS_5MRectEj() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::vector(std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Exported Object: iopipet_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* iopipet_DbgLogEnable_DEBUG = NULL;

/* Demangled: RssP1CbImpl::SetCropSize(_RSS_CROP_SIZE) */
extern "C" __attribute__((visibility("default"))) int _ZN11RssP1CbImpl11SetCropSizeE14_RSS_CROP_SIZE(void) {
    ALOGD("_ZN11RssP1CbImpl11SetCropSizeE14_RSS_CROP_SIZE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::immediateEnque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14immediateEnqueERKNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14immediateEnqueERKNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::enque(NSCam::NSIoPipe::EStreamPipeID, unsigned int, int, NSCam::NSIoPipe::QParams const&, std::__1::vector<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >&, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getUs() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, NSCam::MRect, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectES6_jjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectES6_jjj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::isSupportedSrcFormat(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager20isSupportedSrcFormatENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager20isSupportedSrcFormatENS_12EImageFormatE() called");
    return 0;
}

/* Demangled: TS_FakeSensorList::getTestModel() */
extern "C" __attribute__((visibility("default"))) int _ZN17TS_FakeSensorList12getTestModelEv(void) {
    ALOGD("_ZN17TS_FakeSensorList12getTestModelEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7suspendEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7suspendEv() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::CreateInsatnce(char const*, NSCam::NSIoPipe::NSCamIOPipe::ENPipe_CAM) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITY14CreateInsatnceEPKcN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME(void) {
    ALOGD("_ZN14CAM_CAPIBILITY14CreateInsatnceEPKcN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getTotalUserNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15getTotalUserNumEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15getTotalUserNumEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*>&>::push_back(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setEncodeParam(unsigned int const&, unsigned int const&, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager14setEncodeParamERKjS4_ji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager14setEncodeParamERKjS4_ji() called");
    return 0;
}

/* Demangled: ISImagerBridge::~ISImagerBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridgeD2Ev(void) {
    ALOGD("_ZN14ISImagerBridgeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQUserLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: IImageTransformBridge::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectEjj(void) {
    ALOGD("_ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectEjj() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitDequeVSSAgain() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: TS_FakeSensor::sendCommand(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13TS_FakeSensor11sendCommandEjjjjj(void) {
    ALOGD("_ZN13TS_FakeSensor11sendCommandEjjjjj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectEjji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectEjji() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitEnqueVSSAgain() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dumpToFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*>&>::push_front(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE10push_frontERKS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE10push_frontERKS6_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__push_back_slow_path<NSImageio::NSIspio::PortInfo const*>(NSImageio::NSIspio::PortInfo const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEEC2ERKS7_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEEC2ERKS7_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::ispEnqueThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispEnqueThreadEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispEnqueThreadEPv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe10NSPostProc12NormalStreamE = NULL;

/* Demangled: ISImagerBridge::ISImagerBridge(NSCam::NSIoPipe::NSSImager::SImager*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridgeC1EPN5NSCam8NSIoPipe9NSSImager7SImagerE(void) {
    ALOGD("_ZN14ISImagerBridgeC1EPN5NSCam8NSIoPipe9NSSImager7SImagerE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ISImager::createInstance(NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager8ISImager14createInstanceEPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager8ISImager14createInstanceEPKNS_12IImageBufferE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::IoPipeEventSystem::sGlobalSystem */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe17IoPipeEventSystem13sGlobalSystemE = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::suspend(E_SUSPEND_TPYE) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7suspendE14E_SUSPEND_TPYE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7suspendE14E_SUSPEND_TPYE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::estimateFrameTime() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread17estimateFrameTimeEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread17estimateFrameTimeEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*>&>::push_back(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::abortDma(NSCam::NSIoPipe::PortID, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe8abortDmaENS0_6PortIDEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe8abortDmaENS0_6PortIDEPKc() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEEC2EjjSA_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEEC2EjjSA_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Exported Object: P2PipeWrapper_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_ASSERT = NULL;

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev() called");
    return 0;
}

/* Demangled: android::wp<NSCam::NSIoPipe::IoPipeEventHandle>::operator=(android::sp<NSCam::NSIoPipe::IoPipeEventHandle> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSERKNS_2spIS3_EE(void) {
    ALOGD("_ZN7android2wpIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSERKNS_2spIS3_EE() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void) {
    ALOGD("_ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__push_back_slow_path<NSImageio::NSIspio::PortInfo const* const&>(NSImageio::NSIspio::PortInfo const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::convertTransform(unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform16convertTransformEjRjS3_(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform16convertTransformEjRjS3_() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::push_back(android::sp<NSCam::NSIoPipe::IoPipeEvent> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9push_backERKS6_(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9push_backERKS6_() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_ERROR = NULL;

/* Demangled: saveToTextFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14saveToTextFilePKcPhj(void) {
    ALOGD("_Z14saveToTextFilePKcPhj() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_DEBUG = NULL;

/* Exported Object: WpeUtility_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* WpeUtility_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::frameToEnque() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12frameToEnqueEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12frameToEnqueEv() called");
    return 0;
}

/* Demangled: ISImagerBridge::~ISImagerBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridgeD0Ev(void) {
    ALOGD("_ZN14ISImagerBridgeD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::NormalPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC2EPNS1_10NormalPipeE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC2EPNS1_10NormalPipeE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_ASSERT = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_pathCfg_TGnum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15m_pathCfg_TGnumE = NULL;

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::IoPipeEventSystem(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystemC2EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystemC2EPKc() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::wait(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, NSCam::NSIoPipe::NSCamIOPipe::EPipeSignalClearType, int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::SignalTimeInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE() called");
    return 0;
}

/* Exported Object: iopipet_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* iopipet_DbgLogEnable_INFO = NULL;

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__emplace_unique_key_args<DP_ISP_FEATURE_ENUM, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>, std::__1::tuple<> >(DP_ISP_FEATURE_ENUM const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void) {
    ALOGD("_ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*> >::push_back(IMEM_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::PostThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystem10PostThread10threadLoopEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystem10PostThread10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::unsubscribe(NSCam::NSIoPipe::IoPipeEventHandle&, NSCam::NSIoPipe::IoPipeEventHandle::Admission&&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystem11unsubscribeERNS0_17IoPipeEventHandleEONS2_9AdmissionE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystem11unsubscribeERNS0_17IoPipeEventHandleEONS2_9AdmissionE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQLock() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_ASSERT = NULL;

/* Demangled: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getPostProcPipeInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::vector(std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::GetCapibility(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::ENPipeQueryCmd, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_InputInfo, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_QueryInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITY13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoERNS2_20NormalPipe_QueryInfoE(void) {
    ALOGD("_ZN14CAM_CAPIBILITY13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoERNS2_20NormalPipe_QueryInfoE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv() called");
    return 0;
}

/* Demangled: FAKE_CLK::FAKE_CLK() */
extern "C" __attribute__((visibility("default"))) int _ZN8FAKE_CLKC2Ev(void) {
    ALOGD("_ZN8FAKE_CLKC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE8__appendEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttIdleStateHoldCB(CAM_STATE_OP, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe18sttIdleStateHoldCBE12CAM_STATE_OPPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe18sttIdleStateHoldCBE12CAM_STATE_OPPv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::FSM_CHECK(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::_E_FSM, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9FSM_CHECKENS2_6_E_FSMEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9FSM_CHECKENS2_6_E_FSMEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::prestop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread7prestopEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread7prestopEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::enqueRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12enqueRequestEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12enqueRequestEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__move_assign(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE13__move_assignERS7_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE13__move_assignERS7_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dequeueJudgement() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv() called");
    return 0;
}

/* Demangled: FAKE_CLK::Start_Cfg() */
extern "C" __attribute__((visibility("default"))) int _ZN8FAKE_CLK9Start_CfgEv(void) {
    ALOGD("_ZN8FAKE_CLK9Start_CfgEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::prestop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread7prestopEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread7prestopEv() called");
    return 0;
}

/* Exported Object: iocamsvspipe_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipe_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doEnque(NSCam::NSIoPipe::NSPostProc::FramePackage&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_ERROR = NULL;

/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE8pop_backEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::attach(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6attachEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6attachEPKc() called");
    return 0;
}

/* Demangled: QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO>::sendCmd(QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO>::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEE7sendCmdENS5_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEE7sendCmdENS5_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::GetOpenedPortInfo(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::ePortInfoCmd, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::CAM_CAPIBILITY() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITYC2Ev(void) {
    ALOGD("_ZN14CAM_CAPIBILITYC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*> >::push_back(android::sp<NSCam::NSIoPipe::IoPipeEvent>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE9push_backEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE9push_backEOS7_() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128> std::__1::move<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void) {
    ALOGD("_ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_() called");
    return 0;
}

/* Demangled: std::__1::deque<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NormalPipe(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC2EjPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC2EjPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5startEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5startEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::configPort(unsigned int, NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform10configPortEjPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform10configPortEjPKNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE8__appendEj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEvent>::operator=(android::sp<NSCam::NSIoPipe::IoPipeEvent> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEaSERKS4_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::NSIoPipe::NSWpe::IWpeStream-in-NSCam::NSIoPipe::NSWpe::WpeStream */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe5NSWpe9WpeStreamE0_NS1_10IWpeStreamE = NULL;

/* Demangled: void std::__1::vector<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > > >::__push_back_slow_path<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > const&>(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Exported Object: iopipet_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* iopipet_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setFps(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::ICamsvStatisticPipe::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::SImager(NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImagerC1EPKNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImagerC1EPKNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::dumpSeninfDebugCB(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17dumpSeninfDebugCBEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17dumpSeninfDebugCBEjj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::dequeResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13dequeResponseEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13dequeResponseEv() called");
    return 0;
}

/* Exported Object: P2NormalStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_ASSERT = NULL;

/* Exported Object: DipUtility_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_ERROR = NULL;

/* Exported Object: DipUtility_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getCommand(NSCam::NSIoPipe::NSWpe::ECmd&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::abort() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5abortEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5abortEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6uninitEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::enqueInternal(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13enqueInternalERKNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13enqueInternalERKNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::setPQParameter(NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14setPQParameterERKNS1_15IImageTransform7PQParamE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14setPQParameterERKNS1_15IImageTransform7PQParamE() called");
    return 0;
}

/* Demangled: TS_FakeSensorList::createSensor(char const*, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17TS_FakeSensorList12createSensorEPKcjPKj(void) {
    ALOGD("_ZN17TS_FakeSensorList12createSensorEPKcjPKj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::dumpSeninfDebugCB(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17dumpSeninfDebugCBEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17dumpSeninfDebugCBEjj() called");
    return 0;
}

/* Exported Object: iocamsvspipet_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipet_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx() called");
    return 0;
}

/* Exported Object: nsTimeoutToWait */
extern "C" __attribute__((visibility("default"))) void* nsTimeoutToWait = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mModuleMtxE = NULL;

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__construct_at_end(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE18__construct_at_endEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE18__construct_at_endEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEED2Ev() called");
    return 0;
}

/* Exported Object: P2NormalStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* P2NormalStream_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::deque(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mMemInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8mMemInfoE = NULL;

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::erase(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const* const*, int, 128>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi128EEE(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi128EEE() called");
    return 0;
}

/* Exported Object: iopipe_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* iopipe_DbgLogEnable_ERROR = NULL;

/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventHandleD2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventHandleD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::postAsyncEvent(android::sp<NSCam::NSIoPipe::IoPipeEvent>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystem14postAsyncEventEN7android2spINS0_11IoPipeEventEEE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystem14postAsyncEventEN7android2spINS0_11IoPipeEventEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__map_value_compare<NSCam::NSIoPipe::IoPipeEventId, std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::less<NSCam::NSIoPipe::IoPipeEventId>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(char const*, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5resetEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5resetEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::CamsvStatisticPipe(unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC2EjPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC2EjPKcj() called");
    return 0;
}

/* Exported Object: WpeStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::checkEnque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10checkEnqueERKNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10checkEnqueERKNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42> std::__1::move<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void) {
    ALOGD("_ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::releaseLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE() called");
    return 0;
}

/* Exported Object: WpeThread_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* WpeThread_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::mMemInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe8mMemInfoE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::wpeGlobalListCtrl(WpePackage, unsigned int, unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::StatisticPipe(unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC1EjPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC1EjPKc() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::configPipe(NSCam::NSIoPipe::NSCamIOPipe::QInitStatParam const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10configPipeERKNS1_14QInitStatParamEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10configPipeERKNS1_14QInitStatParamEi() called");
    return 0;
}

/* Demangled: IImageTransformBridge::~IImageTransformBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridgeD1Ev(void) {
    ALOGD("_ZN21IImageTransformBridgeD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::sendCommand(NSCam::NSIoPipe::NSPostProc::ESDCmd, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::idleStateHold(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::E_ThreadGrop) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4initEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::FSM_UPDATE(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::_E_FSM) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10FSM_UPDATEENS2_6_E_FSME(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10FSM_UPDATEENS2_6_E_FSME() called");
    return 0;
}

/* Demangled: RssP1CbImpl::registerP1Notify(NSCam::NSIoPipe::NSCamIOPipe::INormalPipe*) */
extern "C" __attribute__((visibility("default"))) int _ZN11RssP1CbImpl16registerP1NotifyEPN5NSCam8NSIoPipe11NSCamIOPipe11INormalPipeE(void) {
    ALOGD("_ZN11RssP1CbImpl16registerP1NotifyEPN5NSCam8NSIoPipe11NSCamIOPipe11INormalPipeE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: P2PipeWrapper_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* P2PipeWrapper_DbgLogEnable_WARN = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5enqueERKNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5enqueERKNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::procCamsvEnque(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14procCamsvEnqueEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14procCamsvEnqueEPv() called");
    return 0;
}

/* Demangled: RssP1CbImpl::RssP1CbImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN11RssP1CbImplC2Ev(void) {
    ALOGD("_ZN11RssP1CbImplC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getTotalUserNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15getTotalUserNumEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15getTotalUserNumEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__map_value_compare<NSCam::NSIoPipe::IoPipeEventId, std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::less<NSCam::NSIoPipe::IoPipeEventId>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSQ_SQ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSQ_SQ_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*> >::push_front(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE10push_frontEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE10push_frontEOS5_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*>&>::push_back(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: createInstance_INormalPipe */
extern "C" __attribute__((visibility("default"))) int createInstance_INormalPipe(void) {
    ALOGD("createInstance_INormalPipe() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread6uninitEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEventHandle>::operator=(android::sp<NSCam::NSIoPipe::IoPipeEventHandle>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEOS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEOS4_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::getCmd(NSCam::NSIoPipe::NSPostProc::ECmd&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE() called");
    return 0;
}

/* Exported Object: DipUtility_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* DipUtility_DbgLogEnable_WARN = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mWpeCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11mWpeCmdLockE = NULL;

/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024> std::__1::move<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void) {
    ALOGD("_ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeE = NULL;

/* Demangled: IJpegCodecBridge::IJpegCodecBridge(NSCam::NSIoPipe::NSSImager::JpegCodec*) */
extern "C" __attribute__((visibility("default"))) int _ZN16IJpegCodecBridgeC1EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE(void) {
    ALOGD("_ZN16IJpegCodecBridgeC1EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventHandleD0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventHandleD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::WPEQuerySupportImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe18WPEQuerySupportImpEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe18WPEQuerySupportImpEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*>&>::push_front(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE10push_frontERKS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE10push_frontERKS5_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getTotalUserNum() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15getTotalUserNumEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15getTotalUserNumEv() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::~CAM_CAPIBILITY() */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITYD1Ev(void) {
    ALOGD("_ZN14CAM_CAPIBILITYD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6resumeEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6resumeEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6resizeEj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__map_value_compare<NSCam::NSIoPipe::IoPipeEventId, std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::less<NSCam::NSIoPipe::IoPipeEventId>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > > > >::__emplace_unique_key_args<NSCam::NSIoPipe::IoPipeEventId, NSCam::NSIoPipe::IoPipeEventId&, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >(NSCam::NSIoPipe::IoPipeEventId const&, NSCam::NSIoPipe::IoPipeEventId&, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE25__emplace_unique_key_argsIS4_JRS4_SE_EEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEEiEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE25__emplace_unique_key_argsIS4_JRS4_SE_EEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEEiEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii() called");
    return 0;
}

/* Demangled: IImageTransformBridge::IImageTransformBridge(NSCam::NSIoPipe::NSSImager::ImageTransform*) */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridgeC2EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE(void) {
    ALOGD("_ZN21IImageTransformBridgeC2EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::updateFrameTime(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15updateFrameTimeEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15updateFrameTimeEjj() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEE = NULL;

/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128> std::__1::move_backward<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void) {
    ALOGD("_ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4stopEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4stopEi() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mInitCountE = NULL;

/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6resizeEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: IJpegCodecBridge::~IJpegCodecBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN16IJpegCodecBridgeD2Ev(void) {
    ALOGD("_ZN16IJpegCodecBridgeD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj() called");
    return 0;
}

/* Exported Object: TS_FakeSensorList::mDummyMetadata */
extern "C" __attribute__((visibility("default"))) void* _ZN17TS_FakeSensorList14mDummyMetadataE = NULL;

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::mapDpFormat(NSCam::EImageFormat, DP_COLOR_ENUM*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11mapDpFormatENS_12EImageFormatEP13DP_COLOR_ENUM(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11mapDpFormatENS_12EImageFormatEP13DP_COLOR_ENUM() called");
    return 0;
}

/* Exported Object: WpeUtility_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* WpeUtility_DbgLogEnable_ERROR = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FrameUnit> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE6resizeEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::getRegTableSize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv() called");
    return 0;
}

/* Exported Object: iocamsvspipe_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipe_DbgLogEnable_INFO = NULL;

/* Exported Object: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mUserInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper9mUserInfoE = NULL;

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024> std::__1::move_backward<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void) {
    ALOGD("_ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, unsigned int, unsigned int, unsigned int, unsigned int, int, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_jjjjiNS_5MSizeE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_jjjjiNS_5MSizeE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void) {
    ALOGD("_ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE() called");
    return 0;
}

/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Exported Object: iospipe_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* iospipe_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::ImageTransform() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQUserNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_wpeEQUserNumE = NULL;

/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6uninitEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSSImager::JpegCodec */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe9NSSImager9JpegCodecE = NULL;

/* Demangled: ISImagerBridge::setTargetImgBuffer(NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridge18setTargetImgBufferEPKN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN14ISImagerBridge18setTargetImgBufferEPKN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::unsubscribe() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventHandle11unsubscribeEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventHandle11unsubscribeEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyThread() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv() called");
    return 0;
}

/* Exported Object: vtable for IImageTransformBridge */
extern "C" __attribute__((visibility("default"))) void* _ZTV21IImageTransformBridge = NULL;

/* Demangled: IJpegCodecBridge::~IJpegCodecBridge() */
extern "C" __attribute__((visibility("default"))) int _ZN16IJpegCodecBridgeD0Ev(void) {
    ALOGD("_ZN16IJpegCodecBridgeD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*> >::push_front(android::sp<NSCam::NSIoPipe::IoPipeEvent>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE10push_frontEOS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE10push_frontEOS7_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::queryDIPInfo(std::__1::map<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, std::__1::allocator<std::__1::pair<NSCam::NSIoPipe::EDIPInfoEnum const, unsigned int> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::push_back(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: TS_FakeSensor::powerOn(char const*, unsigned int, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13TS_FakeSensor7powerOnEPKcjPKj(void) {
    ALOGD("_ZN13TS_FakeSensor7powerOnEPKcjPKj() called");
    return 0;
}

/* Demangled: QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg>::sendCmd(QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg>::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEE7sendCmdENS4_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEE7sendCmdENS4_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Demangled: QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo>::sendCmd(QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo>::QueueMgr_cmd, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEE7sendCmdENS4_12QueueMgr_cmdEjj(void) {
    ALOGD("_ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEE7sendCmdENS4_12QueueMgr_cmdEjj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::estimateFrameTime() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread17estimateFrameTimeEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread17estimateFrameTimeEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::NSIoPipe::IoPipeEventSystem::PostThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE0_N7android6ThreadE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_iWpeEnqueReq */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_iWpeEnqueReqE = NULL;

/* Demangled: FAKE_CLK::Init_Info(unsigned int, unsigned int, unsigned int, FAKE_CLK::E_pixmode) */
extern "C" __attribute__((visibility("default"))) int _ZN8FAKE_CLK9Init_InfoEjjjNS_9E_pixmodeE(void) {
    ALOGD("_ZN8FAKE_CLK9Init_InfoEjjjNS_9E_pixmodeE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9push_backERKS4_(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9push_backERKS4_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE() called");
    return 0;
}

/* Demangled: ISImagerBridge::ISImagerBridge(NSCam::NSIoPipe::NSSImager::SImager*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridgeC2EPN5NSCam8NSIoPipe9NSSImager7SImagerE(void) {
    ALOGD("_ZN14ISImagerBridgeC2EPN5NSCam8NSIoPipe9NSSImager7SImagerE() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::preCheckSubscribe(android::sp<NSCam::NSIoPipe::IoPipeEventHandle>&, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >*&, NSCam::NSIoPipe::IoPipeEventId, void (*)(), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystem17preCheckSubscribeERN7android2spINS0_17IoPipeEventHandleEEERPNSt3__16vectorINS7_10unique_ptrINS1_15SubscriberProxyENS7_14default_deleteISA_EEEENS7_9allocatorISD_EEEENS0_13IoPipeEventIdEPFvvEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystem17preCheckSubscribeERN7android2spINS0_17IoPipeEventHandleEEERPNSt3__16vectorINS7_10unique_ptrINS1_15SubscriberProxyENS7_14default_deleteISA_EEEENS7_9allocatorISD_EEEENS0_13IoPipeEventIdEPFvvEPv() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11sendCommandEiiii(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11sendCommandEiiii() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::pop_front() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9pop_frontEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9pop_frontEv() called");
    return 0;
}

/* Demangled: RunningThread(void*) */
extern "C" __attribute__((visibility("default"))) int _Z13RunningThreadPv(void) {
    ALOGD("_Z13RunningThreadPv() called");
    return 0;
}

/* Demangled: ISImagerBridge::setEncodeParam(unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14ISImagerBridge14setEncodeParamEjjji(void) {
    ALOGD("_ZN14ISImagerBridge14setEncodeParamEjjji() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSIoPipe::IoPipeEventHandle */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam8NSIoPipe17IoPipeEventHandleE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::enque() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5enqueEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5enqueEv() called");
    return 0;
}

/* Demangled: get_mtkcam_module_iopipe_CamIO_NormalPipe */
extern "C" __attribute__((visibility("default"))) int get_mtkcam_module_iopipe_CamIO_NormalPipe(void) {
    ALOGD("get_mtkcam_module_iopipe_CamIO_NormalPipe() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream7mThreadE = NULL;

/* Exported Object: WpeStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* WpeStream_DbgLogEnable_VERBOSE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQDupIdx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13m_wpeEQDupIdxE = NULL;

/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::erase(std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO const*, IMEM_BUF_INFO const&, IMEM_BUF_INFO const* const*, int, 128>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi128EEE(void) {
    ALOGD("_ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi128EEE() called");
    return 0;
}

/* Demangled: std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE6resizeEj() called");
    return 0;
}

/* Exported Object: iospipe_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* iospipe_DbgLogEnable_INFO = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::checkDropEnque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14checkDropEnqueEPNS1_8QBufInfoE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14checkDropEnqueEPNS1_8QBufInfoE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*>&>::push_front(IMEM_BUF_INFO* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::signal(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6signalENS1_11EPipeSignalEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6signalENS1_11EPipeSignalEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::clearCmds() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSPostProc::FramePackage, void*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSWpe::WpeStream::mDumpCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mDumpCountE = NULL;

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getIspUniReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSSImager::ImageTransform */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe9NSSImager14ImageTransformE = NULL;

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setTransform(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager12setTransformEj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager12setTransformEj() called");
    return 0;
}

/* Demangled: CAM_CAPIBILITY::DestroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CAM_CAPIBILITY15DestroyInstanceEPKc(void) {
    ALOGD("_ZN14CAM_CAPIBILITY15DestroyInstanceEPKc() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEEC2EjjS7_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEEC2EjjS7_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE11__vallocateEj() called");
    return 0;
}

/* Exported Object: iocamsvspipe_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* iocamsvspipe_DbgLogEnable_WARN = NULL;

/* Demangled: IImageTransformBridge::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, NSCam::MRect, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectES4_jjj(void) {
    ALOGD("_ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectES4_jjj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5startEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5startEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42> std::__1::move_backward<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void) {
    ALOGD("_ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_() called");
    return 0;
}

/* Exported Object: p2HP_EQNode_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* p2HP_EQNode_DbgLogEnable_DEBUG = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::MdpStartInfo, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::MdpStartInfo> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::imgTransform(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe9NSSImager7SImager12imgTransformEPKNS_12IImageBufferES5_NS_5MRectEjj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe9NSSImager7SImager12imgTransformEPKNS_12IImageBufferES5_NS_5MRectEjj() called");
    return 0;
}

/* Demangled: saveToRegFmtFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16saveToRegFmtFilePKcPhj(void) {
    ALOGD("_Z16saveToRegFmtFilePKcPhj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::clearCommands() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::pNormalPipe */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11pNormalPipeE = NULL;

/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::~IoPipeEventSystem() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe17IoPipeEventSystemD1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe17IoPipeEventSystemD1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::CamsvStatisticPipe(unsigned int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC1EjPKcj(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC1EjPKcj() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__push_back_slow_path<DipModuleCfg const&>(DipModuleCfg const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::erase(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const* const*, int, 1024>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi1024EEE(void) {
    ALOGD("_ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi1024EEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__push_back_slow_path<IMEM_BUF_INFO const&>(IMEM_BUF_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::pAllSensorInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14pAllSensorInfoE = NULL;

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::signal(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6signalENS1_11EPipeSignalEi(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6signalENS1_11EPipeSignalEi() called");
    return 0;
}

/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::camStateNotify(CAM_STATE_OP, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14camStateNotifyE12CAM_STATE_OPPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14camStateNotifyE12CAM_STATE_OPPv() called");
    return 0;
}

/* Exported Object: p2HP_DQNode_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* p2HP_DQNode_DbgLogEnable_WARN = NULL;

/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void) {
    ALOGD("_ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx() called");
    return 0;
}
