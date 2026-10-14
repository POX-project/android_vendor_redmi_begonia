/*
 * Reverse-Engineered ABI Specification for: libcam.iopipe.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.iopipe.so
 */

#ifndef BEGONIA_RE_LIBCAM_IOPIPE_H
#define BEGONIA_RE_LIBCAM_IOPIPE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17sttSuspendStateCBE12CAM_STATE_OPPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttSuspendStateCB(CAM_STATE_OP, void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17sttSuspendStateCBE12CAM_STATE_OPPv(void);

/* Symbol: _ZNSt3__110__list_impIN9NSImageio7NSIspio11STImgResizeENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSImageio::NSIspio::STImgResize, std::__1::allocator<NSImageio::NSIspio::STImgResize> >::clear() */
int _ZNSt3__110__list_impIN9NSImageio7NSIspio11STImgResizeENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC2Ej(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD1Ev */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::~ImageTransform() */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD1Ev(void);

/* Symbol: _Z5getUsv */
/* Demangled: getUs() */
int _Z5getUsv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEE11__vallocateEj(void);

/* Symbol: iospipe_DbgLogEnable_WARN */
/* Demangled: iospipe_DbgLogEnable_WARN */
extern void* iospipe_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::IsDMAPortSupport(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread16IsDMAPortSupportEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispDequeThreadEPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::ispDequeThread(void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispDequeThreadEPv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6uninitEPKcNS0_13EStreamPipeIDE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj(void);

/* Symbol: _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__add_back_capacity() */
int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSF_SF_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE10push_frontERKS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*>&>::push_front(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg* const&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE10push_frontERKS5_(void);

/* Symbol: iocamsvspipe_DbgLogEnable_DEBUG */
/* Demangled: iocamsvspipe_DbgLogEnable_DEBUG */
extern void* iocamsvspipe_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::GetOpenedPortInfo(NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::ePortInfoCmd, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_DEBUG */
/* Demangled: p2HP_DQNode_DbgLogEnable_DEBUG */
extern void* p2HP_DQNode_DbgLogEnable_DEBUG;

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::~__deque_base() */
int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::MRect, std::__1::allocator<NSCam::MRect>&>&) */
int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadEEaSEPS4_ */
/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEventSystem::PostThread>::operator=(NSCam::NSIoPipe::IoPipeEventSystem::PostThread*) */
int _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadEEaSEPS4_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe13NPipeCfgGLockE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NPipeCfgGLock */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe13NPipeCfgGLockE;

/* Symbol: _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv */
/* Demangled: std::__1::__list_imp<unsigned int, std::__1::allocator<unsigned int> >::clear() */
int _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::ECmd> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc4ECmdENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: iospipe_DbgLogEnable_ERROR */
/* Demangled: iospipe_DbgLogEnable_ERROR */
extern void* iospipe_DbgLogEnable_ERROR;

/* Symbol: P2NormalStream_DbgLogEnable_VERBOSE */
/* Demangled: P2NormalStream_DbgLogEnable_VERBOSE */
extern void* P2NormalStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_INFO */
/* Demangled: p2HP_EQNode_DbgLogEnable_INFO */
extern void* p2HP_EQNode_DbgLogEnable_INFO;

/* Symbol: g_FakeClk */
/* Demangled: g_FakeClk */
extern void* g_FakeClk;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC2EjPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::StatisticPipe(unsigned int, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC2EjPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10SPipeGLockE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::SPipeGLock */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10SPipeGLockE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC1Ev */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::JpegCodec() */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager10setCropROIENS_5MRectE */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setCropROI(NSCam::MRect) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager10setCropROIENS_5MRectE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::resize(unsigned int) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6resizeEj(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_ASSERT */
/* Demangled: p2HP_DQNode_DbgLogEnable_ASSERT */
extern void* p2HP_DQNode_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7addUserEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::addUser(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7addUserEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4stopEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::stop(int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4stopEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC1EPNS1_18CamsvStatisticPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::CamsvStatisticPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC1EPNS1_18CamsvStatisticPipeE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::push_back(NSCam::NSIoPipe::NSWpe::WPEFrameUnit const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZNK17TS_FakeSensorList21querySensorStaticInfoEjPN5NSCam16SensorStaticInfoE */
/* Demangled: TS_FakeSensorList::querySensorStaticInfo(unsigned int, NSCam::SensorStaticInfo*) const */
int _ZNK17TS_FakeSensorList21querySensorStaticInfoEjPN5NSCam16SensorStaticInfoE(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_ERROR */
/* Demangled: P2PipeWrapper_DbgLogEnable_ERROR */
extern void* P2PipeWrapper_DbgLogEnable_ERROR;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE7reserveEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::reserve(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE7reserveEj(void);

/* Symbol: _ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<DipModuleCfg>&) */
int _ZNSt3__114__split_bufferI12DipModuleCfgRNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__push_back_slow_path<NSCam::MRect const&>(NSCam::MRect const&) */
int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNSt3__14listIjNS_9allocatorIjEEE5eraseENS_21__list_const_iteratorIjPvEES6_ */
/* Demangled: std::__1::list<unsigned int, std::__1::allocator<unsigned int> >::erase(std::__1::__list_const_iterator<unsigned int, void*>, std::__1::__list_const_iterator<unsigned int, void*>) */
int _ZNSt3__14listIjNS_9allocatorIjEEE5eraseENS_21__list_const_iteratorIjPvEES6_(void);

/* Symbol: iocamsvspipet_DbgLogEnable_VERBOSE */
/* Demangled: iocamsvspipet_DbgLogEnable_VERBOSE */
extern void* iocamsvspipet_DbgLogEnable_VERBOSE;

/* Symbol: P2NormalStream_DbgLogEnable_INFO */
/* Demangled: P2NormalStream_DbgLogEnable_INFO */
extern void* P2NormalStream_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11mEnablePathE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mEnablePath */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11mEnablePathE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6attachEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::attach(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6attachEPKc(void);

/* Symbol: _ZN14ISImagerBridge10setCropROIEN5NSCam5MRectE */
/* Demangled: ISImagerBridge::setCropROI(NSCam::MRect) */
int _ZN14ISImagerBridge10setCropROIEN5NSCam5MRectE(void);

/* Symbol: DipUtility_DbgLogEnable_DEBUG */
/* Demangled: DipUtility_DbgLogEnable_DEBUG */
extern void* DipUtility_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mSemWpeThreadE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mSemWpeThread */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mSemWpeThreadE;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::destroyInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform4lockEj */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::lock(unsigned int) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform4lockEj(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10unique_ptrIN5NSCam8NSIoPipe17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS5_EEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: P2NormalStream_DbgLogEnable_DEBUG */
/* Demangled: P2NormalStream_DbgLogEnable_DEBUG */
extern void* P2NormalStream_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doMdpStart() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread10doMdpStartEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::checkWPEEnqueuedUserNum() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream23checkWPEEnqueuedUserNumEv(void);

/* Symbol: iopipe_DbgLogEnable_DEBUG */
/* Demangled: iopipe_DbgLogEnable_DEBUG */
extern void* iopipe_DbgLogEnable_DEBUG;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t const&>(NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN11RssP1CbImpl14p1TuningNotifyEPvS0_ */
/* Demangled: RssP1CbImpl::p1TuningNotify(void*, void*) */
int _ZN11RssP1CbImpl14p1TuningNotifyEPvS0_(void);

/* Symbol: _ZN14ISImagerBridgeD1Ev */
/* Demangled: ISImagerBridge::~ISImagerBridge() */
int _ZN14ISImagerBridgeD1Ev(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::Dump_Tpipe(unsigned int*) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10Dump_TpipeEPj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4stopEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::stop(int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4stopEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::uninit() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6uninitEv(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__swap_out_circular_buffer(std::__1::__split_buffer<DipModuleCfg, std::__1::allocator<DipModuleCfg>&>&) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__append(unsigned int) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEenque(NSCam::NSIoPipe::QParams const&, unsigned int) */
int _ZTv0_n32_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEenqueERKNS0_7QParamsEj(void);

/* Symbol: _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::BufInfo>&) */
int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::needSecureBuffer(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream16needSecureBufferEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE8__appendEj */
/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__append(unsigned int) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE8__appendEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10NPipeGLockE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NPipeGLock */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10NPipeGLockE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6dmaCfgEPNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::dmaCfg(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread6dmaCfgEPNS1_8QBufInfoE(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_WARN */
/* Demangled: p2HP_EQNode_DbgLogEnable_WARN */
extern void* p2HP_EQNode_DbgLogEnable_WARN;

/* Symbol: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe14pStatisticPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::pStatisticPipe */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe14pStatisticPipeE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager7executeEj */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::execute(unsigned int) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager7executeEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13configPipe_bhEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::configPipe_bh() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13configPipe_bhEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getIspUniReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji(void);

/* Symbol: _ZN14CAM_CAPIBILITY13GetCapibilityEj11E_CAM_QueryR12CAM_Queryrst */
/* Demangled: CAM_CAPIBILITY::GetCapibility(unsigned int, E_CAM_Query, CAM_Queryrst&) */
int _ZN14CAM_CAPIBILITY13GetCapibilityEj11E_CAM_QueryR12CAM_Queryrst(void);

/* Symbol: _Z10saveToFilePKcPhj */
/* Demangled: saveToFile(char const*, unsigned char*, unsigned int) */
int _Z10saveToFilePKcPhj(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE10push_frontERKS7_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*>&>::push_front(android::sp<NSCam::NSIoPipe::IoPipeEvent>* const&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE10push_frontERKS7_(void);

/* Symbol: _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*>&>&) */
int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::addCommand(NSCam::NSIoPipe::NSWpe::ECmd const&) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10addCommandERKNS1_4ECmdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::GetOpenedPortInfo(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::ePortInfoCmd, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj(void);

/* Symbol: _ZNK21IImageTransformBridge14getPQParameterEv */
/* Demangled: IImageTransformBridge::getPQParameter() const */
int _ZNK21IImageTransformBridge14getPQParameterEv(void);

/* Symbol: P2NormalStream_DbgLogEnable_WARN */
/* Demangled: P2NormalStream_DbgLogEnable_WARN */
extern void* P2NormalStream_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWpeStreamImp() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15getWpeStreamImpEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC1EPNS1_10NormalPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::NormalPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC1EPNS1_10NormalPipeE(void);

/* Symbol: _ZNSt3__14listIjNS_9allocatorIjEEE6insertINS_21__list_const_iteratorIjPvEEEENS_15__list_iteratorIjS6_EES7_T_SA_PNS_9enable_ifIXsr19__is_input_iteratorISA_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIjNS_9allocatorIjEEE6insertINS_21__list_const_iteratorIjPvEEEENS_15__list_iteratorIjS6_EES7_T_SA_PNS_9enable_ifIXsr19__is_input_iteratorISA_EE5valueEvE4typeE */
int _ZNSt3__14listIjNS_9allocatorIjEEE6insertINS_21__list_const_iteratorIjPvEEEENS_15__list_iteratorIjS6_EES7_T_SA_PNS_9enable_ifIXsr19__is_input_iteratorISA_EE5valueEvE4typeE(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe17IoPipeEventHandleE */
/* Demangled: vtable for NSCam::NSIoPipe::IoPipeEventHandle */
extern void* _ZTVN5NSCam8NSIoPipe17IoPipeEventHandleE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::dequeJudgement() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14dequeJudgementEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doDeque(int, NSCam::NSIoPipe::NSPostProc::FrameUnit&, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doDequeEiRNS1_9FrameUnitEi(void);

/* Symbol: _Z8DrvMkdirPKcj */
/* Demangled: DrvMkdir(char const*, unsigned int) */
int _Z8DrvMkdirPKcj(void);

/* Symbol: DipUtility_DbgLogEnable_ASSERT */
/* Demangled: DipUtility_DbgLogEnable_ASSERT */
extern void* DipUtility_DbgLogEnable_ASSERT;

/* Symbol: WpeStream_DbgLogEnable_INFO */
/* Demangled: WpeStream_DbgLogEnable_INFO */
extern void* WpeStream_DbgLogEnable_INFO;

/* Symbol: gWPELastTpipeStructure */
/* Demangled: gWPELastTpipeStructure */
extern void* gWPELastTpipeStructure;

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::~__deque_base() */
int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15configEnquePathEN9NSImageio7NSIspio10ICamIOPipe11E_FRM_EVENTE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::configEnquePath(NSImageio::NSIspio::ICamIOPipe::E_FRM_EVENT) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15configEnquePathEN9NSImageio7NSIspio10ICamIOPipe11E_FRM_EVENTE(void);

/* Symbol: _ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
int _ZTv0_n28_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10mUniLinkTGE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mUniLinkTG */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10mUniLinkTGE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4stopEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::stop(int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4stopEi(void);

/* Symbol: _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__swap_out_circular_buffer(std::__1::__split_buffer<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO>&>&) */
int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg const&>(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZNSt3__14moveI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_ */
/* Demangled: std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128> std::__1::move<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128, IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>(std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>) */
int _ZNSt3__14moveI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void);

/* Symbol: _ZN21IImageTransformBridge14setPQParameterERKN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamE */
/* Demangled: IImageTransformBridge::setPQParameter(NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam const&) */
int _ZN21IImageTransformBridge14setPQParameterERKN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::eraseNotify(NSCam::NSIoPipe::NSWpe::EWPEBufferListTag, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11eraseNotifyENS1_17EWPEBufferListTagEiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createThread() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12createThreadEv(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::~__deque_base() */
int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNK5NSCam8NSIoPipe9NSSImager14ImageTransform14getPQParameterEv */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::getPQParameter() const */
int _ZNK5NSCam8NSIoPipe9NSSImager14ImageTransform14getPQParameterEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystem13sendSyncEventERNS0_11IoPipeEventE */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::sendSyncEvent(NSCam::NSIoPipe::IoPipeEvent&) */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystem13sendSyncEventERNS0_11IoPipeEventE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe10NSPostProc12NormalStreamE */
/* Demangled: VTT for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern void* _ZTTN5NSCam8NSIoPipe10NSPostProc12NormalStreamE;

/* Symbol: _ZTV13TS_FakeSensor */
/* Demangled: vtable for TS_FakeSensor */
extern void* _ZTV13TS_FakeSensor;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5dequeERNS1_7QPortIDERNS1_8QBufInfoEj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::deque(NSCam::NSIoPipe::NSCamIOPipe::QPortID&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5dequeERNS1_7QPortIDERNS1_8QBufInfoEj(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE8pop_backEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::pop_back() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE8pop_backEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE */
/* Demangled: VTT for NSCam::NSIoPipe::IoPipeEventSystem::PostThread */
extern void* _ZTTN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj(void);

/* Symbol: _ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
int _ZTv0_n48_N5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::checkVssStatus() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14checkVssStatusEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mWPESemEQDoneE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mWPESemEQDone */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mWPESemEQDoneE;

/* Symbol: iopipe_DbgLogEnable_VERBOSE */
/* Demangled: iopipe_DbgLogEnable_VERBOSE */
extern void* iopipe_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe10configPipeERKNS1_14QInitStatParamEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::configPipe(NSCam::NSIoPipe::NSCamIOPipe::QInitStatParam const&, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe10configPipeERKNS1_14QInitStatParamEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4initEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::init() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4initEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7delUserEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::delUser(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7delUserEPKc(void);

/* Symbol: _ZN16IJpegCodecBridge15destroyInstanceEv */
/* Demangled: IJpegCodecBridge::destroyInstance() */
int _ZN16IJpegCodecBridge15destroyInstanceEv(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
int _ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj(void);

/* Symbol: WpeUtility_DbgLogEnable_DEBUG */
/* Demangled: WpeUtility_DbgLogEnable_DEBUG */
extern void* WpeUtility_DbgLogEnable_DEBUG;

/* Symbol: _ZN8FAKE_CLKC1Ev */
/* Demangled: FAKE_CLK::FAKE_CLK() */
int _ZN8FAKE_CLKC1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEPNS1_10IspP1RegIoEji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getIspReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEPNS1_10IspP1RegIoEji(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7addUserEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::addUser(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7addUserEPKc(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__emplace_unique_key_args<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>, std::__1::tuple<> >(NSCam::NSIoPipe::EDIPInfoEnum const&, std::__1::piecewise_construct_t const&, std::__1::tuple<NSCam::NSIoPipe::EDIPInfoEnum&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsIS4_JRKNS_21piecewise_construct_tENS_5tupleIJOS4_EEENSH_IJEEEEEENS_4pairINS_15__tree_iteratorIS5_PNS_11__tree_nodeIS5_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: iopipet_DbgLogEnable_ERROR */
/* Demangled: iopipet_DbgLogEnable_ERROR */
extern void* iopipet_DbgLogEnable_ERROR;

/* Symbol: _Z11DrvMakePathPKcj */
/* Demangled: DrvMakePath(char const*, unsigned int) */
int _Z11DrvMakePathPKcj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEPKNS1_8QBufInfoE14E_SUSPEND_TPYE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::resume(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const*, E_SUSPEND_TPYE) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEPKNS1_8QBufInfoE14E_SUSPEND_TPYE(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11enqueBufferEjPKNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::enqueBuffer(unsigned int, NSCam::IImageBuffer const*) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11enqueBufferEjPKNS_12IImageBufferE(void);

/* Symbol: _ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
int _ZTv0_n44_N5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15updateFrameTimeEjj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::updateFrameTime(unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15updateFrameTimeEjj(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager10IJpegCodec14createInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSSImager::IJpegCodec::createInstance() */
int _ZN5NSCam8NSIoPipe9NSSImager10IJpegCodec14createInstanceEv(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE10push_frontEOS6_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*> >::push_front(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE10push_frontEOS6_(void);

/* Symbol: _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_ */
/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::push_back(IMEM_BUF_INFO const&) */
int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9push_backERKS1_(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEPS3_ */
/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEventHandle>::operator=(NSCam::NSIoPipe::IoPipeEventHandle*) */
int _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEPS3_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::createInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper14createInstanceEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj(void);

/* Symbol: WpeStream_DbgLogEnable_WARN */
/* Demangled: WpeStream_DbgLogEnable_WARN */
extern void* WpeStream_DbgLogEnable_WARN;

/* Symbol: _ZN13TS_FakeSensor8powerOffEPKcjPKj */
/* Demangled: TS_FakeSensor::powerOff(char const*, unsigned int, unsigned int const*) */
int _ZN13TS_FakeSensor8powerOffEPKcjPKj(void);

/* Symbol: _ZN8FAKE_CLK12Get_Fake_ClkE14FAKE_CLK_LEVEL */
/* Demangled: FAKE_CLK::Get_Fake_Clk(FAKE_CLK_LEVEL) */
int _ZN8FAKE_CLK12Get_Fake_ClkE14FAKE_CLK_LEVEL(void);

/* Symbol: iopipe_DbgLogEnable_INFO */
/* Demangled: iopipe_DbgLogEnable_INFO */
extern void* iopipe_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7suspendEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::suspend() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe7suspendEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::deque(NSCam::NSIoPipe::PortID, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::ESTT_CACHE_SYNC_POLICY, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryInData_t> > const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe13QueryInData_tENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS8_EE */
/* Demangled: std::__1::vector<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&>&) */
int _ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS7_RS8_EE(void);

/* Symbol: _ZN14CAM_CAPIBILITYC1Ev */
/* Demangled: CAM_CAPIBILITY::CAM_CAPIBILITY() */
int _ZN14CAM_CAPIBILITYC1Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: WpeThread_DbgLogEnable_ASSERT */
/* Demangled: WpeThread_DbgLogEnable_ASSERT */
extern void* WpeThread_DbgLogEnable_ASSERT;

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam5MRectERNS_9allocatorIS2_EEEC2EjjS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::MRect, std::__1::allocator<NSCam::MRect>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::MRect>&) */
int _ZNSt3__114__split_bufferIN5NSCam5MRectERNS_9allocatorIS2_EEEC2EjjS5_(void);

/* Symbol: _ZTV16IJpegCodecBridge */
/* Demangled: vtable for IJpegCodecBridge */
extern void* _ZTV16IJpegCodecBridge;

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEEC2EjjS9_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> >&) */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEEC2EjjS9_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper7getLockENS1_9ELockEnumE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::updateThreadProperty(NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread20updateThreadPropertyENS1_15EThreadPropertyE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::PixelIDMapping(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14PixelIDMappingEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7delUserEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::delUser(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7delUserEPKc(void);

/* Symbol: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
int _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystemC1EPKc */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::IoPipeEventSystem(char const*) */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystemC1EPKc(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQUserLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13getEQUserLockEv(void);

/* Symbol: _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*> >::push_front(IMEM_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> > >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe11IoPipeEventE */
/* Demangled: vtable for NSCam::NSIoPipe::IoPipeEvent */
extern void* _ZTVN5NSCam8NSIoPipe11IoPipeEventE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe12NPipeDbgLockE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NPipeDbgLock */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe12NPipeDbgLockE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEPNS1_10IspP1RegIoEji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getIspReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEPNS1_10IspP1RegIoEji(void);

/* Symbol: _ZNSt3__113__vector_baseIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: _ZN21IImageTransformBridgeD2Ev */
/* Demangled: IImageTransformBridge::~IImageTransformBridge() */
int _ZN21IImageTransformBridgeD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> > >::__push_back_slow_path<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> const&>(android::sp<NSCam::NSIoPipe::IoPipeEventHandle> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNK21IImageTransformBridge16getLastErrorCodeEv */
/* Demangled: IImageTransformBridge::getLastErrorCode() const */
int _ZNK21IImageTransformBridge16getLastErrorCodeEv(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
int _ZTv0_n16_N5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14createInstanceEPNS1_10NormalPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::createInstance(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14createInstanceEPNS1_10NormalPipeE(void);

/* Symbol: _ZTV8QueueMgrI13IMEM_BUF_INFOE */
/* Demangled: vtable for QueueMgr<IMEM_BUF_INFO> */
extern void* _ZTV8QueueMgrI13IMEM_BUF_INFOE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform12enquePQParamEjRKNS1_15IImageTransform7PQParamE */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::enquePQParam(unsigned int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam const&) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform12enquePQParamEjRKNS1_15IImageTransform7PQParamE(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::~__deque_base() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEjjPji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getIspReg(unsigned int, unsigned int, unsigned int*, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe9getIspRegEjjPji(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEEE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getEQLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream9getEQLockEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_VERBOSE */
/* Demangled: P2PipeWrapper_DbgLogEnable_VERBOSE */
extern void* P2PipeWrapper_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::eraseNotify(NSCam::NSIoPipe::NSPostProc::EBufferListTag, int, int, int, NSImageio::NSIspio::EPIPE_P2BUFQUECmd, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread11eraseNotifyENS1_14EBufferListTagEiiiN9NSImageio7NSIspio17EPIPE_P2BUFQUECmdEj(void);

/* Symbol: WpeUtility_DbgLogEnable_INFO */
/* Demangled: WpeUtility_DbgLogEnable_INFO */
extern void* WpeUtility_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13NpipeIQContol12NPipeIQGlockE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NpipeIQContol::NPipeIQGlock */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13NpipeIQContol12NPipeIQGlockE;

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_iLi42EEE */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::erase(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const* const*, int, 42>) */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_iLi42EEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14createInstanceEPNS1_18CamsvStatisticPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::createInstance(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14createInstanceEPNS1_18CamsvStatisticPipeE(void);

/* Symbol: iopipe_DbgLogEnable_ASSERT */
/* Demangled: iopipe_DbgLogEnable_ASSERT */
extern void* iopipe_DbgLogEnable_ASSERT;

/* Symbol: _ZTVN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeE */
/* Demangled: vtable for NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe */
extern void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeE;

/* Symbol: iocamsvspipe_DbgLogEnable_VERBOSE */
/* Demangled: iocamsvspipe_DbgLogEnable_VERBOSE */
extern void* iocamsvspipe_DbgLogEnable_VERBOSE;

/* Symbol: _ZTV11RssP1CbImpl */
/* Demangled: vtable for RssP1CbImpl */
extern void* _ZTV11RssP1CbImpl;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform6unlockEv */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::unlock() */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform6unlockEv(void);

/* Symbol: WpeThread_DbgLogEnable_ERROR */
/* Demangled: WpeThread_DbgLogEnable_ERROR */
extern void* WpeThread_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6signalENS1_11EPipeSignalEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::signal(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6signalENS1_11EPipeSignalEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec10freeYuvMemEPPNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::freeYuvMem(NSCam::IImageBuffer**) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec10freeYuvMemEPPNS_12IImageBufferE(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventHandleD1Ev */
/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
int _ZN5NSCam8NSIoPipe17IoPipeEventHandleD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe12getIspUniRegEPNS1_10IspP1RegIoEji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getIspUniReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe12getIspUniRegEPNS1_10IspP1RegIoEji(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe10SPipeGLockE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::SPipeGLock */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe10SPipeGLockE;

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN14CAM_CAPIBILITYD2Ev */
/* Demangled: CAM_CAPIBILITY::~CAM_CAPIBILITY() */
int _ZN14CAM_CAPIBILITYD2Ev(void);

/* Symbol: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgES4_S5_RS4_PS5_iLi1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6resumeEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::resume() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6resumeEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe12SPipeDbgLockE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::SPipeDbgLock */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe12SPipeDbgLockE;

/* Symbol: _Z14getRssP1CbImpliPKc */
/* Demangled: getRssP1CbImpl(int, char const*) */
int _Z14getRssP1CbImpliPKc(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*>&>::push_back(IMEM_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEjjPji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getIspReg(unsigned int, unsigned int, unsigned int*, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEjjPji(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::queryFrame(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper10queryFrameENS0_13EStreamPipeIDERNS0_7QParamsEi(void);

/* Symbol: WpeUtility_DbgLogEnable_ASSERT */
/* Demangled: WpeUtility_DbgLogEnable_ASSERT */
extern void* WpeUtility_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10configPipeERKNS1_10QInitParamEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::configPipe(NSCam::NSIoPipe::NSCamIOPipe::QInitParam const&, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10configPipeERKNS1_10QInitParamEi(void);

/* Symbol: iopipe_DbgLogEnable_WARN */
/* Demangled: iopipe_DbgLogEnable_WARN */
extern void* iopipe_DbgLogEnable_WARN;

/* Symbol: _ZN21IImageTransformBridgeC1EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE */
/* Demangled: IImageTransformBridge::IImageTransformBridge(NSCam::NSIoPipe::NSSImager::ImageTransform*) */
int _ZN21IImageTransformBridgeC1EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE(void);

/* Symbol: _ZN21IImageTransformBridgeD0Ev */
/* Demangled: IImageTransformBridge::~IImageTransformBridge() */
int _ZN21IImageTransformBridgeD0Ev(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe5NSWpe9WpeStreamE */
/* Demangled: vtable for NSCam::NSIoPipe::NSWpe::WpeStream */
extern void* _ZTVN5NSCam8NSIoPipe5NSWpe9WpeStreamE;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO const&>(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeE */
/* Demangled: vtable for NSCam::NSIoPipe::NSCamIOPipe::NormalPipe */
extern void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeE;

/* Symbol: _ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__deque_base<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::~__deque_base() */
int _ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZNSt3__14moveIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
int _ZNSt3__14moveIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipeE */
/* Demangled: vtable for NSCam::NSIoPipe::NSCamIOPipe::IStatisticPipe */
extern void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipeE;

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
int _ZTv0_n24_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcNS0_13EStreamPipeIDEj(void);

/* Symbol: _ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
int _ZTv0_n52_N5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC2Ev(void);

/* Symbol: _ZN11RssP1CbImplC1Ev */
/* Demangled: RssP1CbImpl::RssP1CbImpl() */
int _ZN11RssP1CbImplC1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec12getAlignmentEjiPjS3_S3_S3_ */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::getAlignment(unsigned int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec12getAlignmentEjiPjS3_S3_S3_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSPostProc::FramePackage const&>(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: WpeThread_DbgLogEnable_INFO */
/* Demangled: WpeThread_DbgLogEnable_INFO */
extern void* WpeThread_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEy14E_SUSPEND_TPYE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::resume(unsigned long long, E_SUSPEND_TPYE) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6resumeEy14E_SUSPEND_TPYE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> > const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEjjPji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getIspReg(unsigned int, unsigned int, unsigned int*, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe9getIspRegEjjPji(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__append(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE8__appendEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7addUserEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::addUser(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7addUserEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC2EPNS1_18CamsvStatisticPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::CamsvStatisticPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_ThreadC2EPNS1_18CamsvStatisticPipeE(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE */
/* Demangled: vtable for NSCam::NSIoPipe::IoPipeEventSystem::PostThread */
extern void* _ZTVN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::destroyInstance() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15destroyInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_ */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11allocYuvMemEPPNS_12IImageBufferERKNS_5MSizeEiS8_ */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::allocYuvMem(NSCam::IImageBuffer**, NSCam::MSize const&, int, NSCam::MSize const&) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11allocYuvMemEPPNS_12IImageBufferERKNS_5MSizeEiS8_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5enqueERKNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5enqueERKNS1_8QBufInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14enqueRequestCBEPvS3_ */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::enqueRequestCB(void*, void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14enqueRequestCBEPvS3_(void);

/* Symbol: iocamsvspipet_DbgLogEnable_INFO */
/* Demangled: iocamsvspipet_DbgLogEnable_INFO */
extern void* iocamsvspipet_DbgLogEnable_INFO;

/* Symbol: _ZN14ISImagerBridge15destroyInstanceEv */
/* Demangled: ISImagerBridge::destroyInstance() */
int _ZN14ISImagerBridge15destroyInstanceEv(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZTV17TS_FakeSensorList */
/* Demangled: vtable for TS_FakeSensorList */
extern void* _ZTV17TS_FakeSensorList;

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE10push_frontEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*> >::push_front(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS5_EEE10push_frontEOS5_(void);

/* Symbol: _ZN14CAM_CAPIBILITYD0Ev */
/* Demangled: CAM_CAPIBILITY::~CAM_CAPIBILITY() */
int _ZN14CAM_CAPIBILITYD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj(void);

/* Symbol: WpeUtility_DbgLogEnable_WARN */
/* Demangled: WpeUtility_DbgLogEnable_WARN */
extern void* WpeUtility_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7delUserEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::delUser(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7delUserEPKc(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE5clearEv */
/* Demangled: std::__1::__deque_base<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::clear() */
int _ZNSt3__112__deque_baseIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mCmdListCondE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdListCond */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mCmdListCondE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8mCmdListE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mCmdList */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream8mCmdListE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14mFirstConfgCamE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mFirstConfgCam */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14mFirstConfgCamE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe14sttStateNotifyE12CAM_STATE_OPPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttStateNotify(CAM_STATE_OP, void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe14sttStateNotifyE12CAM_STATE_OPPv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::uninit() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6uninitEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::wait(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, NSCam::NSIoPipe::NSCamIOPipe::EPipeSignalClearType, int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::SignalTimeInfo*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE(void);

/* Symbol: iopipet_DbgLogEnable_ASSERT */
/* Demangled: iopipet_DbgLogEnable_ASSERT */
extern void* iopipet_DbgLogEnable_ASSERT;

/* Symbol: _ZNK16IJpegCodecBridge16getLastErrorCodeEv */
/* Demangled: IJpegCodecBridge::getLastErrorCode() const */
int _ZNK16IJpegCodecBridge16getLastErrorCodeEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15m_WpeStreamInitE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_WpeStreamInit */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream15m_WpeStreamInitE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::saveToFile(char const*, NSCam::NSIoPipe::WPEBufInfo*) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10saveToFileEPKcPNS0_10WPEBufInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::wait(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, NSCam::NSIoPipe::NSCamIOPipe::EPipeSignalClearType, int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::SignalTimeInfo*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13NpipeIQContol7sIQDataE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NpipeIQContol::sIQData */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13NpipeIQContol7sIQDataE;

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9push_backERKS5_ */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO const&) */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9push_backERKS5_(void);

/* Symbol: _ZNSt3__113move_backwardI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_ */
/* Demangled: std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128> std::__1::move_backward<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128, IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>(std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>, std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO*, IMEM_BUF_INFO&, IMEM_BUF_INFO**, int, 128>) */
int _ZNSt3__113move_backwardI13IMEM_BUF_INFOPS1_RS1_PS2_iLi128ES1_S2_S3_S4_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS5_IT_T0_T1_T2_T3_XT4_EEESH_SB_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12tuningUpdateEPNSt3__14listIjNS3_9allocatorIjEEEES8_ */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::tuningUpdate(std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*, std::__1::list<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12tuningUpdateEPNSt3__14listIjNS3_9allocatorIjEEEES8_(void);

/* Symbol: iopipet_DbgLogEnable_VERBOSE */
/* Demangled: iopipet_DbgLogEnable_VERBOSE */
extern void* iopipet_DbgLogEnable_VERBOSE;

/* Symbol: _ZN16IJpegCodecBridge6encodeEPKN5NSCam12IImageBufferES3_NS0_5MRectEjjjjji */
/* Demangled: IJpegCodecBridge::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int) */
int _ZN16IJpegCodecBridge6encodeEPKN5NSCam12IImageBufferES3_NS0_5MRectEjjjjji(void);

/* Symbol: _ZN16IJpegCodecBridgeD1Ev */
/* Demangled: IJpegCodecBridge::~IJpegCodecBridge() */
int _ZN16IJpegCodecBridgeD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11mapToJpgFmtEiPjS3_ */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::mapToJpgFmt(int, unsigned int*, unsigned int*) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec11mapToJpgFmtEiPjS3_(void);

/* Symbol: _ZTV14CAM_CAPIBILITY */
/* Demangled: vtable for CAM_CAPIBILITY */
extern void* _ZTV14CAM_CAPIBILITY;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8FrameMgrE */
/* Demangled: vtable for NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::FrameMgr */
extern void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8FrameMgrE;

/* Symbol: iospipe_DbgLogEnable_DEBUG */
/* Demangled: iospipe_DbgLogEnable_DEBUG */
extern void* iospipe_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImagerC2EPKNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::SImager(NSCam::IImageBuffer const*) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImagerC2EPKNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setJpegParam(NSCam::NSIoPipe::NSPostProc::EJpgCmd, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream12setJpegParamENS1_7EJpgCmdEii(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQDoneE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQDone */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQDoneE;

/* Symbol: _ZN17TS_FakeSensorList6mSInfoE */
/* Demangled: TS_FakeSensorList::mSInfo */
extern void* _ZN17TS_FakeSensorList6mSInfoE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createInstance(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14createInstanceEPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void);

/* Symbol: nsTimeoutToWaitEnQ */
/* Demangled: nsTimeoutToWaitEnQ */
extern void* nsTimeoutToWaitEnQ;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4initEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::init(int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe4initEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::idleStateHold(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::E_ThreadGrop) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE(void);

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe7QParamsENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZTCN5NSCam8NSIoPipe10NSPostProc12NormalStreamE0_NS1_13INormalStreamE */
/* Demangled: construction vtable for NSCam::NSIoPipe::NSPostProc::INormalStream-in-NSCam::NSIoPipe::NSPostProc::NormalStream */
extern void* _ZTCN5NSCam8NSIoPipe10NSPostProc12NormalStreamE0_NS1_13INormalStreamE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mTotalCmdNumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mTotalCmdNum */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12mTotalCmdNumE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe11sendCommandEiiii */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::sendCommand(int, int, int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe11sendCommandEiiii(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*>&>::push_back(android::sp<NSCam::NSIoPipe::IoPipeEvent>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEERNS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_DEBUG */
/* Demangled: P2PipeWrapper_DbgLogEnable_DEBUG */
extern void* P2PipeWrapper_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::enqueJudgement() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread14enqueJudgementEv(void);

/* Symbol: WpeThread_DbgLogEnable_WARN */
/* Demangled: WpeThread_DbgLogEnable_WARN */
extern void* WpeThread_DbgLogEnable_WARN;

/* Symbol: _ZN14ISImagerBridge7executeEj */
/* Demangled: ISImagerBridge::execute(unsigned int) */
int _ZN14ISImagerBridge7executeEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_VERBOSE */
/* Demangled: p2HP_DQNode_DbgLogEnable_VERBOSE */
extern void* p2HP_DQNode_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16m_bSaveReqToFileE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_bSaveReqToFile */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16m_bSaveReqToFileE;

/* Symbol: _ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
int _ZTv0_n20_N5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE8pop_backEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::pop_back() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE8pop_backEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5startEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::start() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5startEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4initEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::init() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread4initEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5enqueEPNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5enqueEPNS1_8QBufInfoE(void);

/* Symbol: _ZN13TS_FakeSensor9configureEjPKN5NSCam10IHalSensor11ConfigParamE */
/* Demangled: TS_FakeSensor::configure(unsigned int, NSCam::IHalSensor::ConfigParam const*) */
int _ZN13TS_FakeSensor9configureEjPKN5NSCam10IHalSensor11ConfigParamE(void);

/* Symbol: _ZNSt3__113move_backwardIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIP13IMEM_BUF_INFOS1_S2_RS1_PS2_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SC_SB_PNS_9enable_ifIXsr27__is_random_access_iteratorISC_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe14createInstanceEjPKcj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::ICamsvStatisticPipe::createInstance(unsigned int, char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe14createInstanceEjPKcj(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEventHandle>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEventHandle> >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEERNS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZN8QueueMgrI13IMEM_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<IMEM_BUF_INFO>::sendCmd(QueueMgr<IMEM_BUF_INFO>::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrI13IMEM_BUF_INFOE7sendCmdENS1_12QueueMgr_cmdEjj(void);

/* Symbol: iospipe_DbgLogEnable_ASSERT */
/* Demangled: iospipe_DbgLogEnable_ASSERT */
extern void* iospipe_DbgLogEnable_ASSERT;

/* Symbol: iocamsvspipet_DbgLogEnable_ERROR */
/* Demangled: iocamsvspipet_DbgLogEnable_ERROR */
extern void* iocamsvspipet_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC1Ev */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::ImageTransform() */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC1Ev(void);

/* Symbol: iocamsvspipet_DbgLogEnable_WARN */
/* Demangled: iocamsvspipet_DbgLogEnable_WARN */
extern void* iocamsvspipet_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec17isSupportedFormatENS_12EImageFormatE */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::isSupportedFormat(NSCam::EImageFormat) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec17isSupportedFormatENS_12EImageFormatE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKc(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::__push_back_slow_path<NSCam::NSIoPipe::NSWpe::WPEFramePackage const&>(NSCam::NSIoPipe::NSWpe::WPEFramePackage const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe13m_pathCfg_fsmE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_pathCfg_fsm */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe13m_pathCfg_fsmE;

/* Symbol: _ZNSt3__114__split_bufferI13IMEM_BUF_INFORNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<IMEM_BUF_INFO>&) */
int _ZNSt3__114__split_bufferI13IMEM_BUF_INFORNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14m_pathCfgQueueE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_pathCfgQueue */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14m_pathCfgQueueE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6attachEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::attach(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6attachEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11IoPipeEventaSERKS1_ */
/* Demangled: NSCam::NSIoPipe::IoPipeEvent::operator=(NSCam::NSIoPipe::IoPipeEvent const&) */
int _ZN5NSCam8NSIoPipe11IoPipeEventaSERKS1_(void);

/* Symbol: _ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
int _ZTv0_n20_N5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void);

/* Symbol: WpeStream_DbgLogEnable_ERROR */
/* Demangled: WpeStream_DbgLogEnable_ERROR */
extern void* WpeStream_DbgLogEnable_ERROR;

/* Symbol: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOES5_S6_RS5_PS6_iLi42EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4stopEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::stop(int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4stopEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC2EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::deque(NSCam::NSIoPipe::PortID, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::ESTT_CACHE_SYNC_POLICY, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5dequeENS0_6PortIDERNS1_8QBufInfoENS1_22ESTT_CACHE_SYNC_POLICYEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5startEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::start() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe5startEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::setFps(int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper6setFpsEi(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_ */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::swap(std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >&) */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEE4swapERS7_(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe5NSWpe9WpeStreamE */
/* Demangled: VTT for NSCam::NSIoPipe::NSWpe::WpeStream */
extern void* _ZTTN5NSCam8NSIoPipe5NSWpe9WpeStreamE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14pAllSensorInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::pAllSensorInfo */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14pAllSensorInfoE;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystemD2Ev */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::~IoPipeEventSystem() */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystemD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC1EjPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NormalPipe(unsigned int, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC1EjPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4initEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::init(int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread4initEi(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::EImageFormat, std::__1::allocator<NSCam::EImageFormat> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam12EImageFormatENS_9allocatorIS2_EEE11__vallocateEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::addCmd(NSCam::NSIoPipe::NSPostProc::ECmd const&) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6addCmdERKNS1_4ECmdE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_destroyEPvj(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9pop_frontEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::pop_front() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9pop_frontEv(void);

/* Symbol: iocamsvspipet_DbgLogEnable_ASSERT */
/* Demangled: iocamsvspipet_DbgLogEnable_ASSERT */
extern void* iocamsvspipet_DbgLogEnable_ASSERT;

/* Symbol: _ZN21IImageTransformBridge15destroyInstanceEv */
/* Demangled: IImageTransformBridge::destroyInstance() */
int _ZN21IImageTransformBridge15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager15IImageTransform14createInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSSImager::IImageTransform::createInstance() */
int _ZN5NSCam8NSIoPipe9NSSImager15IImageTransform14createInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper12mWPEUserInfoE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mWPEUserInfo */
extern void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper12mWPEUserInfoE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::createThread() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12createThreadEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe11sendCommandEiiii */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sendCommand(int, int, int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe11sendCommandEiiii(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQUserE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mMutex_EQUser */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13mMutex_EQUserE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe19pCamsvStatisticPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::pCamsvStatisticPipe */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe19pCamsvStatisticPipeE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14dequeDstBufferEjPKNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::dequeDstBuffer(unsigned int, NSCam::IImageBuffer const*) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14dequeDstBufferEjPKNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD2Ev */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::~ImageTransform() */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD2Ev(void);

/* Symbol: _ZN14ISImagerBridge12setTransformEj */
/* Demangled: ISImagerBridge::setTransform(unsigned int) */
int _ZN14ISImagerBridge12setTransformEj(void);

/* Symbol: _ZN13TS_FakeSensor22querySensorDynamicInfoEjPN5NSCam17SensorDynamicInfoE */
/* Demangled: TS_FakeSensor::querySensorDynamicInfo(unsigned int, NSCam::SensorDynamicInfo*) */
int _ZN13TS_FakeSensor22querySensorDynamicInfoEjPN5NSCam17SensorDynamicInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe8abortDmaENS0_6PortIDEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::abortDma(NSCam::NSIoPipe::PortID, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe8abortDmaENS0_6PortIDEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystem17getSubscriberListENS0_13IoPipeEventIdE */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::getSubscriberList(NSCam::NSIoPipe::IoPipeEventId) */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystem17getSubscriberListENS0_13IoPipeEventIdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEPNS1_10IspP1RegIoEji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getIspReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9getIspRegEPNS1_10IspP1RegIoEji(void);

/* Symbol: iocamsvspipe_DbgLogEnable_ASSERT */
/* Demangled: iocamsvspipe_DbgLogEnable_ASSERT */
extern void* iocamsvspipe_DbgLogEnable_ASSERT;

/* Symbol: _ZNSt3__110__list_impIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >::clear() */
int _ZNSt3__110__list_impIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::IStatisticPipe::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe15destroyInstanceEPKc(void);

/* Symbol: _ZN16IJpegCodecBridgeC2EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE */
/* Demangled: IJpegCodecBridge::IJpegCodecBridge(NSCam::NSIoPipe::NSSImager::JpegCodec*) */
int _ZN16IJpegCodecBridgeC2EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN13TS_FakeSensor16setFakeAttributeENS_9eFakeAttrEj */
/* Demangled: TS_FakeSensor::setFakeAttribute(TS_FakeSensor::eFakeAttr, unsigned int) */
int _ZN13TS_FakeSensor16setFakeAttributeENS_9eFakeAttrEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18m_occupyingCtlPathE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_occupyingCtlPath */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18m_occupyingCtlPathE;

/* Symbol: _ZNK14ISImagerBridge16getLastErrorCodeEv */
/* Demangled: ISImagerBridge::getLastErrorCode() const */
int _ZNK14ISImagerBridge16getLastErrorCodeEv(void);

/* Symbol: _ZTV14ISImagerBridge */
/* Demangled: vtable for ISImagerBridge */
extern void* _ZTV14ISImagerBridge;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe16acceptEnqRequestERKNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::acceptEnqRequest(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe16acceptEnqRequestERKNS1_8QBufInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8abortDmaENS0_6PortIDEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::abortDma(NSCam::NSIoPipe::PortID, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8abortDmaENS0_6PortIDEPKc(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipeE */
/* Demangled: vtable for NSCam::NSIoPipe::NSCamIOPipe::ICamsvStatisticPipe */
extern void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipeE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager18setTargetImgBufferEPKNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setTargetImgBuffer(NSCam::IImageBuffer const*) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager18setTargetImgBufferEPKNS_12IImageBufferE(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: DipUtility_DbgLogEnable_VERBOSE */
/* Demangled: DipUtility_DbgLogEnable_VERBOSE */
extern void* DipUtility_DbgLogEnable_VERBOSE;

/* Symbol: getInstance_FakeSensorList */
/* Demangled: getInstance_FakeSensorList */
int getInstance_FakeSensorList(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::__add_back_capacity() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void);

/* Symbol: _ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::uninit() */
int _ZTv0_n24_N5NSCam8NSIoPipe5NSWpe9WpeStream6uninitEv(void);

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe14createInstanceEjPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::IStatisticPipe::createInstance(unsigned int, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe14IStatisticPipe14createInstanceEjPKc(void);

/* Symbol: _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEE */
/* Demangled: vtable for QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> */
extern void* _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC2Ev */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::JpegCodec() */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodecC2Ev(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe9NSSImager7SImagerE */
/* Demangled: vtable for NSCam::NSIoPipe::NSSImager::SImager */
extern void* _ZTVN5NSCam8NSIoPipe9NSSImager7SImagerE;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5enqueERKNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe5enqueERKNS1_8QBufInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::NormalStream(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamC1Ej(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const&) */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv */
/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::pop_front() */
int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE9pop_frontEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::destroyInstance() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5startEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::start() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5startEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD0Ev */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::~ImageTransform() */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_compareEPKvS8_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE10do_compareEPKvS8_(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::clear() */
int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15sttEnqueStateCBE12CAM_STATE_OPPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttEnqueStateCB(CAM_STATE_OP, void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15sttEnqueStateCBE12CAM_STATE_OPPv(void);

/* Symbol: _ZNSt3__14listIjNS_9allocatorIjEEE6assignINS_21__list_const_iteratorIjPvEEEEvT_S8_PNS_9enable_ifIXsr19__is_input_iteratorIS8_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIjNS_9allocatorIjEEE6assignINS_21__list_const_iteratorIjPvEEEEvT_S8_PNS_9enable_ifIXsr19__is_input_iteratorIS8_EE5valueEvE4typeE */
int _ZNSt3__14listIjNS_9allocatorIjEEE6assignINS_21__list_const_iteratorIjPvEEEEvT_S8_PNS_9enable_ifIXsr19__is_input_iteratorIS8_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec23checkIfNeedImgTransformEjPKNS_12IImageBufferES5_NS_5MRectEj */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::checkIfNeedImgTransform(unsigned int, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec23checkIfNeedImgTransformEjPKNS_12IImageBufferES5_NS_5MRectEj(void);

/* Symbol: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::vector(std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> > const&) */
int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEEC2ERKS5_(void);

/* Symbol: iopipet_DbgLogEnable_DEBUG */
/* Demangled: iopipet_DbgLogEnable_DEBUG */
extern void* iopipet_DbgLogEnable_DEBUG;

/* Symbol: _ZN11RssP1CbImpl11SetCropSizeE14_RSS_CROP_SIZE */
/* Demangled: RssP1CbImpl::SetCropSize(_RSS_CROP_SIZE) */
int _ZN11RssP1CbImpl11SetCropSizeE14_RSS_CROP_SIZE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__tree_node<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJOiEEENSJ_IJEEEEEENS_4pairINS_15__tree_iteratorIS7_PNS_11__tree_nodeIS7_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14immediateEnqueERKNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::immediateEnque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe14immediateEnqueERKNS1_8QBufInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::enque(NSCam::NSIoPipe::EStreamPipeID, unsigned int, int, NSCam::NSIoPipe::QParams const&, std::__1::vector<NSCam::NSIoPipe::QParams, std::__1::allocator<NSCam::NSIoPipe::QParams> >&, char*) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5enqueENS0_13EStreamPipeIDEjiRKNS0_7QParamsERNSt3__16vectorIS4_NS7_9allocatorIS4_EEEEPc(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14releaseWPELockENS1_12EWPELockEnumE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getUs() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream5getUsEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectES6_jjj */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, NSCam::MRect, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectES6_jjj(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager20isSupportedSrcFormatENS_12EImageFormatE */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::isSupportedSrcFormat(NSCam::EImageFormat) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager20isSupportedSrcFormatENS_12EImageFormatE(void);

/* Symbol: _ZN17TS_FakeSensorList12getTestModelEv */
/* Demangled: TS_FakeSensorList::getTestModel() */
int _ZN17TS_FakeSensorList12getTestModelEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7suspendEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::suspend() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe7suspendEv(void);

/* Symbol: _ZN14CAM_CAPIBILITY14CreateInsatnceEPKcN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME */
/* Demangled: CAM_CAPIBILITY::CreateInsatnce(char const*, NSCam::NSIoPipe::NSCamIOPipe::ENPipe_CAM) */
int _ZN14CAM_CAPIBILITY14CreateInsatnceEPKcN5NSCam8NSIoPipe11NSCamIOPipe10ENPipe_CAME(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getWPELock(NSCam::NSIoPipe::NSWpe::EWPELockEnum) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getWPELockENS1_12EWPELockEnumE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15getTotalUserNumEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::getTotalUserNum() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15getTotalUserNumEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*>&>::push_back(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgERNS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager14setEncodeParamERKjS4_ji */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setEncodeParam(unsigned int const&, unsigned int const&, unsigned int, int) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager14setEncodeParamERKjS4_ji(void);

/* Symbol: _ZN14ISImagerBridgeD2Ev */
/* Demangled: ISImagerBridge::~ISImagerBridge() */
int _ZN14ISImagerBridgeD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQUserLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17releaseEQUserLockEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectEjj */
/* Demangled: IImageTransformBridge::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int) */
int _ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectEjj(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_VERBOSE */
/* Demangled: p2HP_EQNode_DbgLogEnable_VERBOSE */
extern void* p2HP_EQNode_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitDequeVSSAgain() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitDequeVSSAgainEv(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZN13TS_FakeSensor11sendCommandEjjjjj */
/* Demangled: TS_FakeSensor::sendCommand(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN13TS_FakeSensor11sendCommandEjjjjj(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectEjji */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, int) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform7executeEPKNS_12IImageBufferES5_S5_NS_5MRectEjji(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::waitEnqueVSSAgain() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread17waitEnqueVSSAgainEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dumpToFile(char const*, unsigned char*, unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10dumpToFileEPKcPhj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE10push_frontERKS6_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*>&>::push_front(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO* const&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE10push_frontERKS6_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSH_SH_(void);

/* Symbol: _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__push_back_slow_path<NSImageio::NSIspio::PortInfo const*>(NSImageio::NSIspio::PortInfo const*&&) */
int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEEC2ERKS7_ */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo> >::vector(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::statPortInfo> > const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe12statPortInfoENS_9allocatorIS4_EEEC2ERKS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispEnqueThreadEPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::ispEnqueThread(void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14ispEnqueThreadEPv(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe10NSPostProc12NormalStreamE */
/* Demangled: vtable for NSCam::NSIoPipe::NSPostProc::NormalStream */
extern void* _ZTVN5NSCam8NSIoPipe10NSPostProc12NormalStreamE;

/* Symbol: _ZN14ISImagerBridgeC1EPN5NSCam8NSIoPipe9NSSImager7SImagerE */
/* Demangled: ISImagerBridge::ISImagerBridge(NSCam::NSIoPipe::NSSImager::SImager*) */
int _ZN14ISImagerBridgeC1EPN5NSCam8NSIoPipe9NSSImager7SImagerE(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager8ISImager14createInstanceEPKNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::ISImager::createInstance(NSCam::IImageBuffer const*) */
int _ZN5NSCam8NSIoPipe9NSSImager8ISImager14createInstanceEPKNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystem13sGlobalSystemE */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::sGlobalSystem */
extern void* _ZN5NSCam8NSIoPipe17IoPipeEventSystem13sGlobalSystemE;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::enque(NSCam::NSIoPipe::QParams const&) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5enqueERKNS0_7QParamsE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7suspendE14E_SUSPEND_TPYE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::suspend(E_SUSPEND_TPYE) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe7suspendE14E_SUSPEND_TPYE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread17estimateFrameTimeEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::estimateFrameTime() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread17estimateFrameTimeEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15destroyInstanceEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*>&>::push_back(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOERNS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe8abortDmaENS0_6PortIDEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::abortDma(NSCam::NSIoPipe::PortID, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe8abortDmaENS0_6PortIDEPKc(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEEC2EjjSA_ */
/* Demangled: std::__1::__split_buffer<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&) */
int _ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEEC2EjjSA_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: P2PipeWrapper_DbgLogEnable_ASSERT */
/* Demangled: P2PipeWrapper_DbgLogEnable_ASSERT */
extern void* P2PipeWrapper_DbgLogEnable_ASSERT;

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSWpe::WPEFrameUnit, void*>) */
int _ZNSt3__14listIN5NSCam8NSIoPipe5NSWpe12WPEFrameUnitENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void);

/* Symbol: _ZN7android2wpIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSERKNS_2spIS3_EE */
/* Demangled: android::wp<NSCam::NSIoPipe::IoPipeEventHandle>::operator=(android::sp<NSCam::NSIoPipe::IoPipeEventHandle> const&) */
int _ZN7android2wpIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSERKNS_2spIS3_EE(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9pop_frontEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::pop_front() */
int _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9pop_frontEv(void);

/* Symbol: _ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::destroyInstance() */
int _ZTv0_n16_N5NSCam8NSIoPipe5NSWpe9WpeStream15destroyInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__push_back_slow_path<NSImageio::NSIspio::PortInfo const* const&>(NSImageio::NSIspio::PortInfo const* const&) */
int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform16convertTransformEjRjS3_ */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::convertTransform(unsigned int, unsigned int&, unsigned int&) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform16convertTransformEjRjS3_(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9push_backERKS6_ */
/* Demangled: std::__1::deque<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::push_back(android::sp<NSCam::NSIoPipe::IoPipeEvent> const&) */
int _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE9push_backERKS6_(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_ERROR */
/* Demangled: p2HP_EQNode_DbgLogEnable_ERROR */
extern void* p2HP_EQNode_DbgLogEnable_ERROR;

/* Symbol: _Z14saveToTextFilePKcPhj */
/* Demangled: saveToTextFile(char const*, unsigned char*, unsigned int) */
int _Z14saveToTextFilePKcPhj(void);

/* Symbol: WpeThread_DbgLogEnable_DEBUG */
/* Demangled: WpeThread_DbgLogEnable_DEBUG */
extern void* WpeThread_DbgLogEnable_DEBUG;

/* Symbol: WpeUtility_DbgLogEnable_VERBOSE */
/* Demangled: WpeUtility_DbgLogEnable_VERBOSE */
extern void* WpeUtility_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12frameToEnqueEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::frameToEnque() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12frameToEnqueEv(void);

/* Symbol: _ZN14ISImagerBridgeD0Ev */
/* Demangled: ISImagerBridge::~ISImagerBridge() */
int _ZN14ISImagerBridgeD0Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::init(unsigned int) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream4initEj(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC2EPNS1_10NormalPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::NormalPipe_Thread(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_ThreadC2EPNS1_10NormalPipeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11getInstanceEv(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_ASSERT */
/* Demangled: p2HP_EQNode_DbgLogEnable_ASSERT */
extern void* p2HP_EQNode_DbgLogEnable_ASSERT;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15m_pathCfg_TGnumE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::m_pathCfg_TGnum */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe15m_pathCfg_TGnumE;

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystemC2EPKc */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::IoPipeEventSystem(char const*) */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystemC2EPKc(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::wait(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, NSCam::NSIoPipe::NSCamIOPipe::EPipeSignalClearType, int, unsigned int, NSCam::NSIoPipe::NSCamIOPipe::SignalTimeInfo*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4waitENS1_11EPipeSignalENS1_20EPipeSignalClearTypeEijPNS1_14SignalTimeInfoE(void);

/* Symbol: iopipet_DbgLogEnable_INFO */
/* Demangled: iopipet_DbgLogEnable_INFO */
extern void* iopipet_DbgLogEnable_INFO;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::__emplace_unique_key_args<DP_ISP_FEATURE_ENUM, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>, std::__1::tuple<> >(DP_ISP_FEATURE_ENUM const&, std::__1::piecewise_construct_t const&, std::__1::tuple<DP_ISP_FEATURE_ENUM&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIS2_JRKNS_21piecewise_construct_tENS_5tupleIJOS2_EEENSF_IJEEEEEENS_4pairINS_15__tree_iteratorIS3_PNS_11__tree_nodeIS3_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::stopVideoRecord() */
int _ZTv0_n56_N5NSCam8NSIoPipe10NSPostProc12NormalStream15stopVideoRecordEv(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::~WpeStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe5NSWpe9WpeStreamD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*> >::push_back(IMEM_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFONS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystem10PostThread10threadLoopEv */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::PostThread::threadLoop() */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystem10PostThread10threadLoopEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystem11unsubscribeERNS0_17IoPipeEventHandleEONS2_9AdmissionE */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::unsubscribe(NSCam::NSIoPipe::IoPipeEventHandle&, NSCam::NSIoPipe::IoPipeEventHandle::Admission&&) */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystem11unsubscribeERNS0_17IoPipeEventHandleEONS2_9AdmissionE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::releaseEQLock() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13releaseEQLockEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::resetDequeVariables() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream19resetDequeVariablesEv(void);

/* Symbol: WpeStream_DbgLogEnable_ASSERT */
/* Demangled: WpeStream_DbgLogEnable_ASSERT */
extern void* WpeStream_DbgLogEnable_ASSERT;

/* Symbol: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE */
int _ZNSt3__14moveIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoES4_S5_RS4_PS5_iLi128EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SF_SE_PNS_9enable_ifIXsr27__is_random_access_iteratorISF_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::getPostProcPipeInstance(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper23getPostProcPipeInstanceEj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> >::vector(std::__1::vector<NSCam::SeninfConfigInfo, std::__1::allocator<NSCam::SeninfConfigInfo> > const&) */
int _ZNSt3__16vectorIN5NSCam16SeninfConfigInfoENS_9allocatorIS2_EEEC2ERKS5_(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE8pop_backEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::pop_back() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE8pop_backEv(void);

/* Symbol: _ZN14CAM_CAPIBILITY13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoERNS2_20NormalPipe_QueryInfoE */
/* Demangled: CAM_CAPIBILITY::GetCapibility(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::ENPipeQueryCmd, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_InputInfo, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_QueryInfo&) */
int _ZN14CAM_CAPIBILITY13GetCapibilityEjN5NSCam8NSIoPipe11NSCamIOPipe14ENPipeQueryCmdENS2_20NormalPipe_InputInfoERNS2_20NormalPipe_QueryInfoE(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
int _ZTv0_n12_N5NSCam8NSIoPipe17IoPipeEventHandleD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::createInstance() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14createInstanceEv(void);

/* Symbol: _ZN8FAKE_CLKC2Ev */
/* Demangled: FAKE_CLK::FAKE_CLK() */
int _ZN8FAKE_CLKC2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__append(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe18sttIdleStateHoldCBE12CAM_STATE_OPPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::sttIdleStateHoldCB(CAM_STATE_OP, void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe18sttIdleStateHoldCBE12CAM_STATE_OPPv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9FSM_CHECKENS2_6_E_FSMEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::FSM_CHECK(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::_E_FSM, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe9FSM_CHECKENS2_6_E_FSMEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread7prestopEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::prestop() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread7prestopEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12enqueRequestEj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::enqueRequest(unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread12enqueRequestEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE13__move_assignERS7_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__move_assign(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE13__move_assignERS7_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::dequeueJudgement() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream16dequeueJudgementEv(void);

/* Symbol: _ZN8FAKE_CLK9Start_CfgEv */
/* Demangled: FAKE_CLK::Start_Cfg() */
int _ZN8FAKE_CLK9Start_CfgEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread7prestopEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::prestop() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread7prestopEv(void);

/* Symbol: iocamsvspipe_DbgLogEnable_ERROR */
/* Demangled: iocamsvspipe_DbgLogEnable_ERROR */
extern void* iocamsvspipe_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::doEnque(NSCam::NSIoPipe::NSPostProc::FramePackage&) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread7doEnqueERNS1_12FramePackageE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t>&>&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS4_RS6_EE(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_ERROR */
/* Demangled: p2HP_DQNode_DbgLogEnable_ERROR */
extern void* p2HP_DQNode_DbgLogEnable_ERROR;

/* Symbol: _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE8pop_backEv */
/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::pop_back() */
int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE8pop_backEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStreamD0Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6attachEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::attach(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6attachEPKc(void);

/* Symbol: _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEE7sendCmdENS5_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO>::sendCmd(QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO>::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEE7sendCmdENS5_12QueueMgr_cmdEjj(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::__add_back_capacity() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::GetOpenedPortInfo(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::ePortInfoCmd, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17GetOpenedPortInfoENS2_12ePortInfoCmdEj(void);

/* Symbol: _ZN14CAM_CAPIBILITYC2Ev */
/* Demangled: CAM_CAPIBILITY::CAM_CAPIBILITY() */
int _ZN14CAM_CAPIBILITYC2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE9push_backEOS7_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*> >::push_back(android::sp<NSCam::NSIoPipe::IoPipeEvent>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE9push_backEOS7_(void);

/* Symbol: _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_ */
/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128> std::__1::move<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>) */
int _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void);

/* Symbol: _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::sp<NSCam::NSIoPipe::IoPipeEvent>, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent> > >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS6_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEj(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_INFO */
/* Demangled: P2PipeWrapper_DbgLogEnable_INFO */
extern void* P2PipeWrapper_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread12onThreadLoopEPv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC2EjPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::NormalPipe(unsigned int, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipeC2EjPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5startEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::start() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread5startEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform10configPortEjPKNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::configPort(unsigned int, NSCam::IImageBuffer const*) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform10configPortEjPKNS_12IImageBufferE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE8__appendEj */
/* Demangled: std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__append(unsigned int) */
int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE8__appendEj(void);

/* Symbol: _ZN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEaSERKS4_ */
/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEvent>::operator=(android::sp<NSCam::NSIoPipe::IoPipeEvent> const&) */
int _ZN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEaSERKS4_(void);

/* Symbol: _ZTCN5NSCam8NSIoPipe5NSWpe9WpeStreamE0_NS1_10IWpeStreamE */
/* Demangled: construction vtable for NSCam::NSIoPipe::NSWpe::IWpeStream-in-NSCam::NSIoPipe::NSWpe::WpeStream */
extern void* _ZTCN5NSCam8NSIoPipe5NSWpe9WpeStreamE0_NS1_10IWpeStreamE;

/* Symbol: _ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > > >::__push_back_slow_path<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > const&>(std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > const&) */
int _ZNSt3__16vectorINS0_IN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEEENS5_IS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: iopipet_DbgLogEnable_WARN */
/* Demangled: iopipet_DbgLogEnable_WARN */
extern void* iopipet_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::destroyInstance() */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::setFps(int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream6setFpsEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::ICamsvStatisticPipe::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe19ICamsvStatisticPipe15destroyInstanceEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImagerC1EPKNS_12IImageBufferE */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::SImager(NSCam::IImageBuffer const*) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImagerC1EPKNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::init(char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream4initEPKcj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17dumpSeninfDebugCBEjj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::dumpSeninfDebugCB(unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe17dumpSeninfDebugCBEjj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13dequeResponseEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::dequeResponse() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13dequeResponseEv(void);

/* Symbol: P2NormalStream_DbgLogEnable_ASSERT */
/* Demangled: P2NormalStream_DbgLogEnable_ASSERT */
extern void* P2NormalStream_DbgLogEnable_ASSERT;

/* Symbol: DipUtility_DbgLogEnable_ERROR */
/* Demangled: DipUtility_DbgLogEnable_ERROR */
extern void* DipUtility_DbgLogEnable_ERROR;

/* Symbol: DipUtility_DbgLogEnable_INFO */
/* Demangled: DipUtility_DbgLogEnable_INFO */
extern void* DipUtility_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::getCommand(NSCam::NSIoPipe::NSWpe::ECmd&) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10getCommandERNS1_4ECmdE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5abortEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::abort() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5abortEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::uninit() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe6uninitEv(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::clear() */
int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13enqueInternalERKNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::enqueInternal(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe13enqueInternalERKNS1_8QBufInfoE(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14setPQParameterERKNS1_15IImageTransform7PQParamE */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::setPQParameter(NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam const&) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform14setPQParameterERKNS1_15IImageTransform7PQParamE(void);

/* Symbol: _ZN17TS_FakeSensorList12createSensorEPKcjPKj */
/* Demangled: TS_FakeSensorList::createSensor(char const*, unsigned int, unsigned int const*) */
int _ZN17TS_FakeSensorList12createSensorEPKcjPKj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17dumpSeninfDebugCBEjj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::dumpSeninfDebugCB(unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe17dumpSeninfDebugCBEjj(void);

/* Symbol: iocamsvspipet_DbgLogEnable_DEBUG */
/* Demangled: iocamsvspipet_DbgLogEnable_DEBUG */
extern void* iocamsvspipet_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::deque(NSCam::NSIoPipe::QParams&, long long) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream5dequeERNS0_7QParamsEx(void);

/* Symbol: nsTimeoutToWait */
/* Demangled: nsTimeoutToWait */
extern void* nsTimeoutToWait;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mModuleMtxE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mModuleMtx */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mModuleMtxE;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE18__construct_at_endEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__construct_at_end(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE18__construct_at_endEj(void);

/* Symbol: _ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >, std::__1::allocator<std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> > >&>::~__split_buffer() */
int _ZNSt3__114__split_bufferINS_6vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS5_EEEERNS6_IS8_EEED2Ev(void);

/* Symbol: P2NormalStream_DbgLogEnable_ERROR */
/* Demangled: P2NormalStream_DbgLogEnable_ERROR */
extern void* P2NormalStream_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::deque(NSCam::NSIoPipe::EStreamPipeID, NSCam::NSIoPipe::QParams&, unsigned int, long long) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper5dequeENS0_13EStreamPipeIDERNS0_7QParamsEjx(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8mMemInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::mMemInfo */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe8mMemInfoE;

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi128EEE */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::erase(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const* const*, int, 128>) */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi128EEE(void);

/* Symbol: iopipe_DbgLogEnable_ERROR */
/* Demangled: iopipe_DbgLogEnable_ERROR */
extern void* iopipe_DbgLogEnable_ERROR;

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventHandleD2Ev */
/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
int _ZN5NSCam8NSIoPipe17IoPipeEventHandleD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystem14postAsyncEventEN7android2spINS0_11IoPipeEventEEE */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::postAsyncEvent(android::sp<NSCam::NSIoPipe::IoPipeEvent>) */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystem14postAsyncEventEN7android2spINS0_11IoPipeEventEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__map_value_compare<NSCam::NSIoPipe::IoPipeEventId, std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::less<NSCam::NSIoPipe::IoPipeEventId>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::createInstance(char const*, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag, unsigned int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream14createInstanceEPKcNS1_16ENormalStreamTagEji(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5resetEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::reset() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5resetEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15destroyInstanceEPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC2EjPKcj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::CamsvStatisticPipe(unsigned int, char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC2EjPKcj(void);

/* Symbol: WpeStream_DbgLogEnable_DEBUG */
/* Demangled: WpeStream_DbgLogEnable_DEBUG */
extern void* WpeStream_DbgLogEnable_DEBUG;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10checkEnqueERKNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::checkEnque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe10checkEnqueERKNS1_8QBufInfoE(void);

/* Symbol: _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_ */
/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42> std::__1::move<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>) */
int _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::releaseLock(NSCam::NSIoPipe::NSPostProc::ELockEnum) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11releaseLockENS1_9ELockEnumE(void);

/* Symbol: WpeThread_DbgLogEnable_VERBOSE */
/* Demangled: WpeThread_DbgLogEnable_VERBOSE */
extern void* WpeThread_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe8mMemInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::mMemInfo */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe8mMemInfoE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::wpeGlobalListCtrl(WpePackage, unsigned int, unsigned int, int&) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream17wpeGlobalListCtrlE10WpePackagejjRi(void);

/* Symbol: _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEE */
/* Demangled: vtable for QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> */
extern void* _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC1EjPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::StatisticPipe(unsigned int, char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeC1EjPKc(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10configPipeERKNS1_14QInitStatParamEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::configPipe(NSCam::NSIoPipe::NSCamIOPipe::QInitStatParam const&, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10configPipeERKNS1_14QInitStatParamEi(void);

/* Symbol: _ZN21IImageTransformBridgeD1Ev */
/* Demangled: IImageTransformBridge::~IImageTransformBridge() */
int _ZN21IImageTransformBridgeD1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::sendCommand(NSCam::NSIoPipe::NSPostProc::ESDCmd, int, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream11sendCommandENS1_6ESDCmdEiii(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::idleStateHold(unsigned int, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::E_ThreadGrop) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread13idleStateHoldEjNS2_12E_ThreadGropE(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4initEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::init() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe4initEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10FSM_UPDATEENS2_6_E_FSME */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::FSM_UPDATE(NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::_E_FSM) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe10FSM_UPDATEENS2_6_E_FSME(void);

/* Symbol: _ZN11RssP1CbImpl16registerP1NotifyEPN5NSCam8NSIoPipe11NSCamIOPipe11INormalPipeE */
/* Demangled: RssP1CbImpl::registerP1Notify(NSCam::NSIoPipe::NSCamIOPipe::INormalPipe*) */
int _ZN11RssP1CbImpl16registerP1NotifyEPN5NSCam8NSIoPipe11NSCamIOPipe11INormalPipeE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj(void);

/* Symbol: P2PipeWrapper_DbgLogEnable_WARN */
/* Demangled: P2PipeWrapper_DbgLogEnable_WARN */
extern void* P2PipeWrapper_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5enqueERKNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::enque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5enqueERKNS1_8QBufInfoE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QueryOutData_t> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe14QueryOutData_tENS_9allocatorIS4_EEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14procCamsvEnqueEPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::procCamsvEnque(void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread14procCamsvEnqueEPv(void);

/* Symbol: _ZN11RssP1CbImplC2Ev */
/* Demangled: RssP1CbImpl::RssP1CbImpl() */
int _ZN11RssP1CbImplC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15getTotalUserNumEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::getTotalUserNum() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe15getTotalUserNumEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSQ_SQ_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__map_value_compare<NSCam::NSIoPipe::IoPipeEventId, std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::less<NSCam::NSIoPipe::IoPipeEventId>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > > > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSQ_SQ_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE10push_frontEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*> >::push_front(NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEE10push_frontEOS5_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE9push_backEOS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*>&>::push_back(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE9push_backEOS5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_ */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::__map_value_compare<int, std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, NSCam::NSIoPipe::NSSImager::IImageTransform::PQParam> > >::__insert_node_at(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*, std::__1::__tree_node_base<void*>*&, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiN5NSCam8NSIoPipe9NSSImager15IImageTransform7PQParamEEENS_19__map_value_compareIiS7_NS_4lessIiEELb1EEENS_9allocatorIS7_EEE16__insert_node_atEPNS_15__tree_end_nodeIPNS_16__tree_node_baseIPvEEEERSJ_SJ_(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe10NSPostProc12FramePackageERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: createInstance_INormalPipe */
/* Demangled: createInstance_INormalPipe */
int createInstance_INormalPipe(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::uninit() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread6uninitEv(void);

/* Symbol: _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEOS4_ */
/* Demangled: android::sp<NSCam::NSIoPipe::IoPipeEventHandle>::operator=(android::sp<NSCam::NSIoPipe::IoPipeEventHandle>&&) */
int _ZN7android2spIN5NSCam8NSIoPipe17IoPipeEventHandleEEaSEOS4_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::getCmd(NSCam::NSIoPipe::NSPostProc::ECmd&) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread6getCmdERNS1_4ECmdE(void);

/* Symbol: DipUtility_DbgLogEnable_WARN */
/* Demangled: DipUtility_DbgLogEnable_WARN */
extern void* DipUtility_DbgLogEnable_WARN;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11mWpeCmdLockE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mWpeCmdLock */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream11mWpeCmdLockE;

/* Symbol: _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_ */
/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024> std::__1::move<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>) */
int _ZNSt3__14moveIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeE */
/* Demangled: vtable for NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe */
extern void* _ZTVN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipeE;

/* Symbol: _ZN16IJpegCodecBridgeC1EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE */
/* Demangled: IJpegCodecBridge::IJpegCodecBridge(NSCam::NSIoPipe::NSSImager::JpegCodec*) */
int _ZN16IJpegCodecBridgeC1EPN5NSCam8NSIoPipe9NSSImager9JpegCodecE(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventHandleD0Ev */
/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::~IoPipeEventHandle() */
int _ZN5NSCam8NSIoPipe17IoPipeEventHandleD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::HalPipeWrapper_Thread(NSCam::NSIoPipe::NSPostProc::HalPipeWrapper*, NSCam::NSIoPipe::NSPostProc::EThreadType, NSCam::NSIoPipe::NSPostProc::EThreadProperty) */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_ThreadC1EPNS1_14HalPipeWrapperENS1_11EThreadTypeENS1_15EThreadPropertyE(void);

/* Symbol: _ZN5NSCam8NSIoPipe18WPEQuerySupportImpEv */
/* Demangled: NSCam::NSIoPipe::WPEQuerySupportImp() */
int _ZN5NSCam8NSIoPipe18WPEQuerySupportImpEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::IImageBuffer*> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiPN5NSCam12IImageBufferEEEE12do_constructEPvj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE10push_frontERKS5_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*>&>::push_front(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo* const&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoERNS_9allocatorIS5_EEE10push_frontERKS5_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15getTotalUserNumEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getTotalUserNum() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15getTotalUserNumEv(void);

/* Symbol: _ZN14CAM_CAPIBILITYD1Ev */
/* Demangled: CAM_CAPIBILITY::~CAM_CAPIBILITY() */
int _ZN14CAM_CAPIBILITYD1Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6resumeEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::resume() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6resumeEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6resizeEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::resize(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6resizeEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE25__emplace_unique_key_argsIS4_JRS4_SE_EEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEEiEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, void*>*, int>, bool> std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::__map_value_compare<NSCam::NSIoPipe::IoPipeEventId, std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >, std::__1::less<NSCam::NSIoPipe::IoPipeEventId>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::IoPipeEventId, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > > > >::__emplace_unique_key_args<NSCam::NSIoPipe::IoPipeEventId, NSCam::NSIoPipe::IoPipeEventId&, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > > >(NSCam::NSIoPipe::IoPipeEventId const&, NSCam::NSIoPipe::IoPipeEventId&, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >&&) */
int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe13IoPipeEventIdENS_6vectorINS_10unique_ptrINS3_17IoPipeEventSystem15SubscriberProxyENS_14default_deleteIS8_EEEENS_9allocatorISB_EEEEEENS_19__map_value_compareIS4_SF_NS_4lessIS4_EELb1EEENSC_ISF_EEE25__emplace_unique_key_argsIS4_JRS4_SE_EEENS_4pairINS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEEiEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::sendCommand(int, int, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper11sendCommandEiiii(void);

/* Symbol: _ZN21IImageTransformBridgeC2EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE */
/* Demangled: IImageTransformBridge::IImageTransformBridge(NSCam::NSIoPipe::NSSImager::ImageTransform*) */
int _ZN21IImageTransformBridgeC2EPN5NSCam8NSIoPipe9NSSImager14ImageTransformE(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15updateFrameTimeEjj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::updateFrameTime(unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread15updateFrameTimeEjj(void);

/* Symbol: _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEE */
/* Demangled: vtable for QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> */
extern void* _ZTV8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEE;

/* Symbol: _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_ */
/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128> std::__1::move_backward<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo&, NSCam::NSIoPipe::NSCamIOPipe::QBufInfo**, int, 128>) */
int _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEPS4_RS4_PS5_iLi128ES4_S5_S6_S7_iLi128EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4stopEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::stop(int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe4stopEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::HalPipeWrapper() */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapperC1Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mInitCountE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mInitCount */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mInitCountE;

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6resizeEj */
/* Demangled: std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::resize(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE6resizeEj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN16IJpegCodecBridgeD2Ev */
/* Demangled: IJpegCodecBridge::~IJpegCodecBridge() */
int _ZN16IJpegCodecBridgeD2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::init(char const*, NSCam::NSIoPipe::EStreamPipeID, unsigned int) */
int _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper4initEPKcNS0_13EStreamPipeIDEj(void);

/* Symbol: _ZN17TS_FakeSensorList14mDummyMetadataE */
/* Demangled: TS_FakeSensorList::mDummyMetadata */
extern void* _ZN17TS_FakeSensorList14mDummyMetadataE;

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_XXXReg>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_XXXRegERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9pop_frontEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::pop_front() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9pop_frontEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11mapDpFormatENS_12EImageFormatEP13DP_COLOR_ENUM */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::mapDpFormat(NSCam::EImageFormat, DP_COLOR_ENUM*) */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransform11mapDpFormatENS_12EImageFormatEP13DP_COLOR_ENUM(void);

/* Symbol: WpeUtility_DbgLogEnable_ERROR */
/* Demangled: WpeUtility_DbgLogEnable_ERROR */
extern void* WpeUtility_DbgLogEnable_ERROR;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FrameUnit, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FrameUnit> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc9FrameUnitENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE6resizeEj */
/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::resize(unsigned int) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE6resizeEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::getRegTableSize() */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream15getRegTableSizeEv(void);

/* Symbol: iocamsvspipe_DbgLogEnable_INFO */
/* Demangled: iocamsvspipe_DbgLogEnable_INFO */
extern void* iocamsvspipe_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper9mUserInfoE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper::mUserInfo */
extern void* _ZN5NSCam8NSIoPipe10NSPostProc14HalPipeWrapper9mUserInfoE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::destroyThread() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13destroyThreadEv(void);

/* Symbol: _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_ */
/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024> std::__1::move_backward<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg**, int, 1024>) */
int _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEPS4_RS4_PS5_iLi1024ES4_S5_S6_S7_iLi1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS8_IT_T0_T1_T2_T3_XT4_EEESK_SE_(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_jjjjiNS_5MSizeE */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, unsigned int, unsigned int, unsigned int, unsigned int, int, NSCam::MSize) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_jjjjiNS_5MSizeE(void);

/* Symbol: _ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::uninit(char const*, NSCam::NSIoPipe::EStreamPipeID) */
int _ZTv0_n32_N5NSCam8NSIoPipe10NSPostProc12NormalStream6uninitEPKcNS0_13EStreamPipeIDE(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: iospipe_DbgLogEnable_VERBOSE */
/* Demangled: iospipe_DbgLogEnable_VERBOSE */
extern void* iospipe_DbgLogEnable_VERBOSE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC2Ev */
/* Demangled: NSCam::NSIoPipe::NSSImager::ImageTransform::ImageTransform() */
int _ZN5NSCam8NSIoPipe9NSSImager14ImageTransformC2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii */
/* Demangled: NSCam::NSIoPipe::NSPostProc::NormalStream::startVideoRecord(int, int, int) */
int _ZN5NSCam8NSIoPipe10NSPostProc12NormalStream16startVideoRecordEiii(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_wpeEQUserNumE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQUserNum */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_wpeEQUserNumE;

/* Symbol: _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__vector_base<NSCam::NSIoPipe::NSWpe::WPEFramePackage, std::__1::allocator<NSCam::NSIoPipe::NSWpe::WPEFramePackage> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN5NSCam8NSIoPipe5NSWpe15WPEFramePackageENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6uninitEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::uninit() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6uninitEv(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe9NSSImager9JpegCodecE */
/* Demangled: vtable for NSCam::NSIoPipe::NSSImager::JpegCodec */
extern void* _ZTVN5NSCam8NSIoPipe9NSSImager9JpegCodecE;

/* Symbol: _ZN14ISImagerBridge18setTargetImgBufferEPKN5NSCam12IImageBufferE */
/* Demangled: ISImagerBridge::setTargetImgBuffer(NSCam::IImageBuffer const*) */
int _ZN14ISImagerBridge18setTargetImgBufferEPKN5NSCam12IImageBufferE(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventHandle11unsubscribeEv */
/* Demangled: NSCam::NSIoPipe::IoPipeEventHandle::unsubscribe() */
int _ZN5NSCam8NSIoPipe17IoPipeEventHandle11unsubscribeEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::destroyThread() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread13destroyThreadEv(void);

/* Symbol: _ZTV21IImageTransformBridge */
/* Demangled: vtable for IImageTransformBridge */
extern void* _ZTV21IImageTransformBridge;

/* Symbol: _ZN16IJpegCodecBridgeD0Ev */
/* Demangled: IJpegCodecBridge::~IJpegCodecBridge() */
int _ZN16IJpegCodecBridgeD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE10push_frontEOS7_ */
/* Demangled: std::__1::__split_buffer<android::sp<NSCam::NSIoPipe::IoPipeEvent>*, std::__1::allocator<android::sp<NSCam::NSIoPipe::IoPipeEvent>*> >::push_front(android::sp<NSCam::NSIoPipe::IoPipeEvent>*&&) */
int _ZNSt3__114__split_bufferIPN7android2spIN5NSCam8NSIoPipe11IoPipeEventEEENS_9allocatorIS7_EEE10push_frontEOS7_(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE */
/* Demangled: NSCam::NSIoPipe::NSPostProc::INormalStream::queryDIPInfo(std::__1::map<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, std::__1::allocator<std::__1::pair<NSCam::NSIoPipe::EDIPInfoEnum const, unsigned int> > >&) */
int _ZN5NSCam8NSIoPipe10NSPostProc13INormalStream12queryDIPInfoERNSt3__13mapINS0_12EDIPInfoEnumEjNS3_4lessIS5_EENS3_9allocatorINS3_4pairIKS5_jEEEEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::push_back(NSCam::NSIoPipe::NSPostProc::FramePackage const&) */
int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZN13TS_FakeSensor7powerOnEPKcjPKj */
/* Demangled: TS_FakeSensor::powerOn(char const*, unsigned int, unsigned int const*) */
int _ZN13TS_FakeSensor7powerOnEPKcjPKj(void);

/* Symbol: _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEE7sendCmdENS4_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg>::sendCmd(QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg>::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgEE7sendCmdENS4_12QueueMgr_cmdEjj(void);

/* Symbol: _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEE7sendCmdENS4_12QueueMgr_cmdEjj */
/* Demangled: QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo>::sendCmd(QueueMgr<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo>::QueueMgr_cmd, unsigned int, unsigned int) */
int _ZN8QueueMgrIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoEE7sendCmdENS4_12QueueMgr_cmdEjj(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*&&) */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread17estimateFrameTimeEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::estimateFrameTime() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread17estimateFrameTimeEv(void);

/* Symbol: _ZTCN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::NSIoPipe::IoPipeEventSystem::PostThread */
extern void* _ZTCN5NSCam8NSIoPipe17IoPipeEventSystem10PostThreadE0_N7android6ThreadE;

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_iWpeEnqueReqE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_iWpeEnqueReq */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream14m_iWpeEnqueReqE;

/* Symbol: _ZN8FAKE_CLK9Init_InfoEjjjNS_9E_pixmodeE */
/* Demangled: FAKE_CLK::Init_Info(unsigned int, unsigned int, unsigned int, FAKE_CLK::E_pixmode) */
int _ZN8FAKE_CLK9Init_InfoEjjjNS_9E_pixmodeE(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS5_EEED2Ev(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9push_backERKS4_ */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::QBufInfo> >::push_back(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo const&) */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe8QBufInfoENS_9allocatorIS4_EEE9push_backERKS4_(void);

/* Symbol: _ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__deque_base<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::clear() */
int _ZNSt3__112__deque_baseI13IMEM_BUF_INFONS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::__map_value_compare<DP_ISP_FEATURE_ENUM, std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, std::__1::less<DP_ISP_FEATURE_ENUM>, true>, std::__1::allocator<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool> > >::destroy(std::__1::__tree_node<std::__1::__value_type<DP_ISP_FEATURE_ENUM, bool>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeI19DP_ISP_FEATURE_ENUMbEENS_19__map_value_compareIS2_S3_NS_4lessIS2_EELb1EEENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN14ISImagerBridgeC2EPN5NSCam8NSIoPipe9NSSImager7SImagerE */
/* Demangled: ISImagerBridge::ISImagerBridge(NSCam::NSIoPipe::NSSImager::SImager*) */
int _ZN14ISImagerBridgeC2EPN5NSCam8NSIoPipe9NSSImager7SImagerE(void);

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystem17preCheckSubscribeERN7android2spINS0_17IoPipeEventHandleEEERPNSt3__16vectorINS7_10unique_ptrINS1_15SubscriberProxyENS7_14default_deleteISA_EEEENS7_9allocatorISD_EEEENS0_13IoPipeEventIdEPFvvEPv */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::preCheckSubscribe(android::sp<NSCam::NSIoPipe::IoPipeEventHandle>&, std::__1::vector<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> >, std::__1::allocator<std::__1::unique_ptr<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy, std::__1::default_delete<NSCam::NSIoPipe::IoPipeEventSystem::SubscriberProxy> > > >*&, NSCam::NSIoPipe::IoPipeEventId, void (*)(), void*) */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystem17preCheckSubscribeERN7android2spINS0_17IoPipeEventHandleEEERPNSt3__16vectorINS7_10unique_ptrINS1_15SubscriberProxyENS7_14default_deleteISA_EEEENS7_9allocatorISD_EEEENS0_13IoPipeEventIdEPFvvEPv(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_INFO */
/* Demangled: p2HP_DQNode_DbgLogEnable_INFO */
extern void* p2HP_DQNode_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11sendCommandEiiii */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::sendCommand(int, int, int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11sendCommandEiiii(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9pop_frontEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::pop_front() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE9pop_frontEv(void);

/* Symbol: _Z13RunningThreadPv */
/* Demangled: RunningThread(void*) */
int _Z13RunningThreadPv(void);

/* Symbol: _ZN14ISImagerBridge14setEncodeParamEjjji */
/* Demangled: ISImagerBridge::setEncodeParam(unsigned int, unsigned int, unsigned int, int) */
int _ZN14ISImagerBridge14setEncodeParamEjjji(void);

/* Symbol: _ZTTN5NSCam8NSIoPipe17IoPipeEventHandleE */
/* Demangled: VTT for NSCam::NSIoPipe::IoPipeEventHandle */
extern void* _ZTTN5NSCam8NSIoPipe17IoPipeEventHandleE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5enqueEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe_Thread::enque() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe25CamsvStatisticPipe_Thread5enqueEv(void);

/* Symbol: get_mtkcam_module_iopipe_CamIO_NormalPipe */
/* Demangled: get_mtkcam_module_iopipe_CamIO_NormalPipe */
int get_mtkcam_module_iopipe_CamIO_NormalPipe(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji */
/* Demangled: NSCam::NSIoPipe::NSSImager::JpegCodec::encode(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int) */
int _ZN5NSCam8NSIoPipe9NSSImager9JpegCodec6encodeEPKNS_12IImageBufferES5_NS_5MRectEjjjjji(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::onThreadLoop(void*) */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream12onThreadLoopEPv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream7mThreadE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mThread */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream7mThreadE;

/* Symbol: WpeStream_DbgLogEnable_VERBOSE */
/* Demangled: WpeStream_DbgLogEnable_VERBOSE */
extern void* WpeStream_DbgLogEnable_VERBOSE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13m_wpeEQDupIdxE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::m_wpeEQDupIdx */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13m_wpeEQDupIdxE;

/* Symbol: _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi128EEE */
/* Demangled: std::__1::deque<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::erase(std::__1::__deque_iterator<IMEM_BUF_INFO, IMEM_BUF_INFO const*, IMEM_BUF_INFO const&, IMEM_BUF_INFO const* const*, int, 128>) */
int _ZNSt3__15dequeI13IMEM_BUF_INFONS_9allocatorIS1_EEE5eraseENS_16__deque_iteratorIS1_PKS1_RS6_PKS7_iLi128EEE(void);

/* Symbol: _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE6resizeEj */
/* Demangled: std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::resize(unsigned int) */
int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE6resizeEj(void);

/* Symbol: iospipe_DbgLogEnable_INFO */
/* Demangled: iospipe_DbgLogEnable_INFO */
extern void* iospipe_DbgLogEnable_INFO;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15destroyInstanceEPKc */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::destroyInstance(char const*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe15destroyInstanceEPKc(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14checkDropEnqueEPNS1_8QBufInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::checkDropEnque(NSCam::NSIoPipe::NSCamIOPipe::QBufInfo*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14checkDropEnqueEPNS1_8QBufInfoE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::BufInfo const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<IMEM_BUF_INFO*, std::__1::allocator<IMEM_BUF_INFO*>&>::push_front(IMEM_BUF_INFO* const&) */
int _ZNSt3__114__split_bufferIP13IMEM_BUF_INFORNS_9allocatorIS2_EEE10push_frontERKS2_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6signalENS1_11EPipeSignalEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::signal(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipe6signalENS1_11EPipeSignalEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv */
/* Demangled: NSCam::NSIoPipe::NSPostProc::HalPipeWrapper_Thread::clearCmds() */
int _ZN5NSCam8NSIoPipe10NSPostProc21HalPipeWrapper_Thread9clearCmdsEv(void);

/* Symbol: _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE */
/* Demangled: std::__1::list<NSCam::NSIoPipe::NSPostProc::FramePackage, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::FramePackage> >::erase(std::__1::__list_const_iterator<NSCam::NSIoPipe::NSPostProc::FramePackage, void*>) */
int _ZNSt3__14listIN5NSCam8NSIoPipe10NSPostProc12FramePackageENS_9allocatorIS4_EEE5eraseENS_21__list_const_iteratorIS4_PvEE(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mDumpCountE */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::mDumpCount */
extern void* _ZN5NSCam8NSIoPipe5NSWpe9WpeStream10mDumpCountE;

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO> >::__add_back_capacity() */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOENS_9allocatorIS5_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::getIspUniReg(NSCam::NSIoPipe::NSCamIOPipe::IspP1RegIo*, unsigned int, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe12getIspUniRegEPNS1_10IspP1RegIoEji(void);

/* Symbol: _ZTVN5NSCam8NSIoPipe9NSSImager14ImageTransformE */
/* Demangled: vtable for NSCam::NSIoPipe::NSSImager::ImageTransform */
extern void* _ZTVN5NSCam8NSIoPipe9NSSImager14ImageTransformE;

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager12setTransformEj */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::setTransform(unsigned int) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager12setTransformEj(void);

/* Symbol: _ZN14CAM_CAPIBILITY15DestroyInstanceEPKc */
/* Demangled: CAM_CAPIBILITY::DestroyInstance(char const*) */
int _ZN14CAM_CAPIBILITY15DestroyInstanceEPKc(void);

/* Symbol: _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::clear() */
int _ZNSt3__112__deque_baseIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEEC2EjjS7_ */
/* Demangled: std::__1::__split_buffer<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_CROP_INFO>&) */
int _ZNSt3__114__split_bufferIN5NSCam8NSIoPipe11NSCamIOPipe20NormalPipe_CROP_INFOERNS_9allocatorIS4_EEEC2EjjS7_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::MRect, std::__1::allocator<NSCam::MRect> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam5MRectENS_9allocatorIS2_EEE11__vallocateEj(void);

/* Symbol: iocamsvspipe_DbgLogEnable_WARN */
/* Demangled: iocamsvspipe_DbgLogEnable_WARN */
extern void* iocamsvspipe_DbgLogEnable_WARN;

/* Symbol: _ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectES4_jjj */
/* Demangled: IImageTransformBridge::execute(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, NSCam::MRect, unsigned int, unsigned int, unsigned int) */
int _ZN21IImageTransformBridge7executeEPKN5NSCam12IImageBufferES3_S3_NS0_5MRectES4_jjj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5startEv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::start() */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe5startEv(void);

/* Symbol: _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_ */
/* Demangled: std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42> std::__1::move_backward<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>, std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO*, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO&, NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::IMEM_MUTI_BUF_INFO**, int, 42>) */
int _ZNSt3__113move_backwardIN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe18IMEM_MUTI_BUF_INFOEPS5_RS5_PS6_iLi42ES5_S6_S7_S8_iLi42EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void);

/* Symbol: p2HP_EQNode_DbgLogEnable_DEBUG */
/* Demangled: p2HP_EQNode_DbgLogEnable_DEBUG */
extern void* p2HP_EQNode_DbgLogEnable_DEBUG;

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSPostProc::MdpStartInfo, std::__1::allocator<NSCam::NSIoPipe::NSPostProc::MdpStartInfo> >::clear() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe10NSPostProc12MdpStartInfoENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSWpe::ECmd, std::__1::allocator<NSCam::NSIoPipe::NSWpe::ECmd> >::~__list_imp() */
int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSWpe4ECmdENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe9NSSImager7SImager12imgTransformEPKNS_12IImageBufferES5_NS_5MRectEjj */
/* Demangled: NSCam::NSIoPipe::NSSImager::SImager::imgTransform(NSCam::IImageBuffer const*, NSCam::IImageBuffer const*, NSCam::MRect, unsigned int, unsigned int) */
int _ZN5NSCam8NSIoPipe9NSSImager7SImager12imgTransformEPKNS_12IImageBufferES5_NS_5MRectEjj(void);

/* Symbol: _Z16saveToRegFmtFilePKcPhj */
/* Demangled: saveToRegFmtFile(char const*, unsigned char*, unsigned int) */
int _Z16saveToRegFmtFilePKcPhj(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::clearCommands() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStream13clearCommandsEv(void);

/* Symbol: _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev */
/* Demangled: NSCam::NSIoPipe::NSWpe::WpeStream::WpeStream() */
int _ZN5NSCam8NSIoPipe5NSWpe9WpeStreamC2Ev(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11pNormalPipeE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::pNormalPipe */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe11pNormalPipeE;

/* Symbol: _ZN5NSCam8NSIoPipe17IoPipeEventSystemD1Ev */
/* Demangled: NSCam::NSIoPipe::IoPipeEventSystem::~IoPipeEventSystem() */
int _ZN5NSCam8NSIoPipe17IoPipeEventSystemD1Ev(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC1EjPKcj */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::CamsvStatisticPipe::CamsvStatisticPipe(unsigned int, char const*, unsigned int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe18CamsvStatisticPipeC1EjPKcj(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSPostProc::NormalStream::~NormalStream() */
int _ZTv0_n12_N5NSCam8NSIoPipe10NSPostProc12NormalStreamD1Ev(void);

/* Symbol: _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<DipModuleCfg, std::__1::allocator<DipModuleCfg> >::__push_back_slow_path<DipModuleCfg const&>(DipModuleCfg const&) */
int _ZNSt3__16vectorI12DipModuleCfgNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi1024EEE */
/* Demangled: std::__1::deque<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg> >::erase(std::__1::__deque_iterator<NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const*, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const&, NSCam::NSIoPipe::NSCamIOPipe::E_CamHwPathCfg const* const*, int, 1024>) */
int _ZNSt3__15dequeIN5NSCam8NSIoPipe11NSCamIOPipe14E_CamHwPathCfgENS_9allocatorIS4_EEE5eraseENS_16__deque_iteratorIS4_PKS4_RS9_PKSA_iLi1024EEE(void);

/* Symbol: _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<IMEM_BUF_INFO, std::__1::allocator<IMEM_BUF_INFO> >::__push_back_slow_path<IMEM_BUF_INFO const&>(IMEM_BUF_INFO const&) */
int _ZNSt3__16vectorI13IMEM_BUF_INFONS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14pAllSensorInfoE */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe::pAllSensorInfo */
extern void* _ZN5NSCam8NSIoPipe11NSCamIOPipe10NormalPipe14pAllSensorInfoE;

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6signalENS1_11EPipeSignalEi */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::StatisticPipe::signal(NSCam::NSIoPipe::NSCamIOPipe::EPipeSignal, int) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe13StatisticPipe6signalENS1_11EPipeSignalEi(void);

/* Symbol: _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14camStateNotifyE12CAM_STATE_OPPv */
/* Demangled: NSCam::NSIoPipe::NSCamIOPipe::NormalPipe_Thread::camStateNotify(CAM_STATE_OP, void*) */
int _ZN5NSCam8NSIoPipe11NSCamIOPipe17NormalPipe_Thread14camStateNotifyE12CAM_STATE_OPPv(void);

/* Symbol: p2HP_DQNode_DbgLogEnable_WARN */
/* Demangled: p2HP_DQNode_DbgLogEnable_WARN */
extern void* p2HP_DQNode_DbgLogEnable_WARN;

/* Symbol: _ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx */
/* Demangled: virtual thunk to NSCam::NSIoPipe::NSWpe::WpeStream::WPEdeque(unsigned int, long long) */
int _ZTv0_n36_N5NSCam8NSIoPipe5NSWpe9WpeStream8WPEdequeEjx(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_IOPIPE_H */
