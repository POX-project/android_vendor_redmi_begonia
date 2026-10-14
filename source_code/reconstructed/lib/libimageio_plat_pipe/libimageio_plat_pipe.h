/*
 * Reverse-Engineered ABI Specification for: libimageio_plat_pipe.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libimageio_plat_pipe.so
 */

#ifndef BEGONIA_RE_LIBIMAGEIO_PLAT_PIPE_H
#define BEGONIA_RE_LIBIMAGEIO_PLAT_PIPE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9NSImageio7NSIspio10ICamIOPipe15destroyInstanceEv */
/* Demangled: NSImageio::NSIspio::ICamIOPipe::destroyInstance() */
int _ZN9NSImageio7NSIspio10ICamIOPipe15destroyInstanceEv(void);

/* Symbol: _ZN9NSImageio7NSIspio23pipe_DbgLogEnable_DEBUGE */
/* Demangled: NSImageio::NSIspio::pipe_DbgLogEnable_DEBUG */
extern void* _ZN9NSImageio7NSIspio23pipe_DbgLogEnable_DEBUGE;

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipeC1Ev */
/* Demangled: NSImageio::NSIspio::CamIOPipe::CamIOPipe() */
int _ZN9NSImageio7NSIspio9CamIOPipeC1Ev(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT>&>&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void);

/* Symbol: _ZN10Cam_ResMgr13Res_RecursiveEPNSt3__16vectorI13_CAM_THRU_PUTNS0_9allocatorIS2_EEEE */
/* Demangled: Cam_ResMgr::Res_Recursive(std::__1::vector<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT> >*) */
int _ZN10Cam_ResMgr13Res_RecursiveEPNSt3__16vectorI13_CAM_THRU_PUTNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe11sendCommandEiiii */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::sendCommand(int, int, int, int) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe11sendCommandEiiii(void);

/* Symbol: _ZN9NSImageio7NSIspio14CamIO_PathCtrl14capibility_MapE13ISP_HW_MODULE */
/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::capibility_Map(ISP_HW_MODULE) */
int _ZN9NSImageio7NSIspio14CamIO_PathCtrl14capibility_MapE13ISP_HW_MODULE(void);

/* Symbol: _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC1EPv */
/* Demangled: NSImageio::NSIspio::CamIOPipe_cfgFrame::CamIOPipe_cfgFrame(void*) */
int _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC1EPv(void);

/* Symbol: _ZN10Cam_ResMgrC2E13ISP_HW_MODULEPc */
/* Demangled: Cam_ResMgr::Cam_ResMgr(ISP_HW_MODULE, char*) */
int _ZN10Cam_ResMgrC2E13ISP_HW_MODULEPc(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe17HwValToSrcFmt_DMAEjji */
/* Demangled: NSImageio::NSIspio::CamIOPipe::HwValToSrcFmt_DMA(unsigned int, unsigned int, int) */
int _ZN9NSImageio7NSIspio9CamIOPipe17HwValToSrcFmt_DMAEjji(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT10PortID_MAPEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::PortID_MAP(unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT10PortID_MAPEj(void);

/* Symbol: _ZN10Cam_ResMgr5mLockE */
/* Demangled: Cam_ResMgr::mLock */
extern void* _ZN10Cam_ResMgr5mLockE;

/* Symbol: resmgr_DbgLogEnable_WARN */
/* Demangled: resmgr_DbgLogEnable_WARN */
extern void* resmgr_DbgLogEnable_WARN;

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe4stopEi */
/* Demangled: NSImageio::NSIspio::CamIOPipe::stop(int) */
int _ZN9NSImageio7NSIspio9CamIOPipe4stopEi(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe8TWIN_STT5clearEv */
/* Demangled: NSImageio::NSIspio::STTIOPipe::TWIN_STT::clear() */
int _ZN9NSImageio7NSIspio9STTIOPipe8TWIN_STT5clearEv(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void);

/* Symbol: _ZN10Cam_ResMgr13Res_Meter_YUVERK12Res_Meter_INR13Res_Meter_OUT */
/* Demangled: Cam_ResMgr::Res_Meter_YUV(Res_Meter_IN const&, Res_Meter_OUT&) */
int _ZN10Cam_ResMgr13Res_Meter_YUVERK12Res_Meter_INR13Res_Meter_OUT(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe4stopEi */
/* Demangled: NSImageio::NSIspio::STTIOPipe::stop(int) */
int _ZN9NSImageio7NSIspio9STTIOPipe4stopEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe4initEv */
/* Demangled: NSImageio::NSIspio::CamIOPipe::init() */
int _ZN9NSImageio7NSIspio9CamIOPipe4initEv(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe8abortDmaENS0_6PortIDE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::abortDma(NSImageio::NSIspio::PortID) */
int _ZN9NSImageio7NSIspio9CamIOPipe8abortDmaENS0_6PortIDE(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipeC2Ev */
/* Demangled: NSImageio::NSIspio::CamIOPipe::CamIOPipe() */
int _ZN9NSImageio7NSIspio9CamIOPipeC2Ev(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_ */
/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::vector(std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> > const&) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_(void);

/* Symbol: _ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<Cam_ResMgr*, std::__1::allocator<Cam_ResMgr*> >::__push_back_slow_path<Cam_ResMgr* const&>(Cam_ResMgr* const&) */
int _ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe11sendCommandEiiii */
/* Demangled: NSImageio::NSIspio::CamIOPipe::sendCommand(int, int, int, int) */
int _ZN9NSImageio7NSIspio9CamIOPipe11sendCommandEiiii(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe10FSM_UPDATEEj */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::FSM_UPDATE(unsigned int) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe10FSM_UPDATEEj(void);

/* Symbol: _ZN10Cam_ResMgrC1E13ISP_HW_MODULEPc */
/* Demangled: Cam_ResMgr::Cam_ResMgr(ISP_HW_MODULE, char*) */
int _ZN10Cam_ResMgrC1E13ISP_HW_MODULEPc(void);

/* Symbol: _ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev(void);

/* Symbol: _ZN10Cam_ResMgr10Res_AttachEjPcj */
/* Demangled: Cam_ResMgr::Res_Attach(unsigned int, char*, unsigned int) */
int _ZN10Cam_ResMgr10Res_AttachEjPcj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZTV7DMA_PDO */
/* Demangled: vtable for DMA_PDO */
extern void* _ZTV7DMA_PDO;

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO> >::__push_back_slow_path<NSImageio::NSIspio::ST_CAMIO_CROP_INFO const&>(NSImageio::NSIspio::ST_CAMIO_CROP_INFO const&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&>&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipeC1Ev */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::CamsvIOPipe() */
int _ZN9NSImageio7NSIspio11CamsvIOPipeC1Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe10PortID_MAPEj */
/* Demangled: NSImageio::NSIspio::STTIOPipe::PortID_MAP(unsigned int) */
int _ZN9NSImageio7NSIspio9STTIOPipe10PortID_MAPEj(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipeC1Ev */
/* Demangled: NSImageio::NSIspio::STTIOPipe::STTIOPipe() */
int _ZN9NSImageio7NSIspio9STTIOPipeC1Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi */
/* Demangled: NSImageio::NSIspio::CamIOPipe::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, int) */
int _ZN9NSImageio7NSIspio9CamIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe6CreateEPKaRK7E_INPUT */
/* Demangled: NSImageio::NSIspio::STTIOPipe::Create(signed char const*, E_INPUT const&) */
int _ZN9NSImageio7NSIspio9STTIOPipe6CreateEPKaRK7E_INPUT(void);

/* Symbol: _ZNSt3__113__vector_baseINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEENS5_IS7_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEENS5_IS7_EEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::E_CAMIO_CAM, std::__1::allocator<NSImageio::NSIspio::E_CAMIO_CAM> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::E_CAMIO_CAM, std::__1::allocator<NSImageio::NSIspio::E_CAMIO_CAM>&>&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE>(ISP_HW_MODULE&&) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe4initEv */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::init() */
int _ZN9NSImageio7NSIspio11CamsvIOPipe4initEv(void);

/* Symbol: _ZTV8QueueMgrI13ST_BUF_INFO__E */
/* Demangled: vtable for QueueMgr<ST_BUF_INFO__> */
extern void* _ZTV8QueueMgrI13ST_BUF_INFO__E;

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe5startEv */
/* Demangled: NSImageio::NSIspio::STTIOPipe::start() */
int _ZN9NSImageio7NSIspio9STTIOPipe5startEv(void);

/* Symbol: _ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQLPathEv */
/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ThreeRawIQLPath() */
int _ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQLPathEv(void);

/* Symbol: _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrame14p1TuningNotifyEPvS2_ */
/* Demangled: NSImageio::NSIspio::CamIOPipe_cfgFrame::p1TuningNotify(void*, void*) */
int _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrame14p1TuningNotifyEPvS2_(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY */
/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: _ZN7Central7ReleaseE13ISP_HW_MODULE */
/* Demangled: Central::Release(ISP_HW_MODULE) */
int _ZN7Central7ReleaseE13ISP_HW_MODULE(void);

/* Symbol: _ZN9NSImageio7NSIspio22pipe_DbgLogEnable_WARNE */
/* Demangled: NSImageio::NSIspio::pipe_DbgLogEnable_WARN */
extern void* _ZN9NSImageio7NSIspio22pipe_DbgLogEnable_WARNE;

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::__push_back_slow_path<NSImageio::NSIspio::ST_RECT const&>(NSImageio::NSIspio::ST_RECT const&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE */
/* Demangled: NSImageio::NSIspio::STTIOPipe::suspend(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
int _ZN9NSImageio7NSIspio9STTIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE(void);

/* Symbol: _ZNSt3__110__list_impI14IspP1TuningCfgNS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<IspP1TuningCfg, std::__1::allocator<IspP1TuningCfg> >::clear() */
int _ZNSt3__110__list_impI14IspP1TuningCfgNS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZTVN9NSImageio7NSIspio12CamIOPipe_BWE */
/* Demangled: vtable for NSImageio::NSIspio::CamIOPipe_BW */
extern void* _ZTVN9NSImageio7NSIspio12CamIOPipe_BWE;

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN9NSImageio7NSIspio14CamIO_PathCtrl20ResToTwinParamUpdateERK12Res_Meter_INRK13Res_Meter_OUTR26TWIN_MGR_PATH_CFG_IN_PARAM */
/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ResToTwinParamUpdate(Res_Meter_IN const&, Res_Meter_OUT const&, TWIN_MGR_PATH_CFG_IN_PARAM&) */
int _ZN9NSImageio7NSIspio14CamIO_PathCtrl20ResToTwinParamUpdateERK12Res_Meter_INRK13Res_Meter_OUTR26TWIN_MGR_PATH_CFG_IN_PARAM(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe5startEv */
/* Demangled: NSImageio::NSIspio::CamIOPipe::start() */
int _ZN9NSImageio7NSIspio9CamIOPipe5startEv(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEj(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT9QueryPortEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::QueryPort(unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT9QueryPortEj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_ */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::configPipe(std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, NSImageio::NSIspio::CAMIO_Func const*, NSImageio::NSIspio::CAMIO_Func*) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, int) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe9signalIrqENS0_5Irq_tE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::signalIrq(NSImageio::NSIspio::Irq_t) */
int _ZN9NSImageio7NSIspio9CamIOPipe9signalIrqENS0_5Irq_tE(void);

/* Symbol: resmgr_DbgLogEnable_VERBOSE */
/* Demangled: resmgr_DbgLogEnable_VERBOSE */
extern void* resmgr_DbgLogEnable_VERBOSE;

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipeC2Ev */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::CamsvIOPipe() */
int _ZN9NSImageio7NSIspio11CamsvIOPipeC2Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipeC2Ev */
/* Demangled: NSImageio::NSIspio::STTIOPipe::STTIOPipe() */
int _ZN9NSImageio7NSIspio9STTIOPipeC2Ev(void);

/* Symbol: _ZN6ResMgr10Res_AttachE6E_USER13ISP_HW_MODULEPc */
/* Demangled: ResMgr::Res_Attach(E_USER, ISP_HW_MODULE, char*) */
int _ZN6ResMgr10Res_AttachE6E_USER13ISP_HW_MODULEPc(void);

/* Symbol: _ZN6ResMgr13Res_GetModuleEv */
/* Demangled: ResMgr::Res_GetModule() */
int _ZN6ResMgr13Res_GetModuleEv(void);

/* Symbol: _ZN9NSImageio7NSIspio24pipe_DbgLogEnable_ASSERTE */
/* Demangled: NSImageio::NSIspio::pipe_DbgLogEnable_ASSERT */
extern void* _ZN9NSImageio7NSIspio24pipe_DbgLogEnable_ASSERTE;

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe15SrcPixIDToHwValENS0_9ERawPxlIDE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::SrcPixIDToHwVal(NSImageio::NSIspio::ERawPxlID) */
int _ZN9NSImageio7NSIspio9CamIOPipe15SrcPixIDToHwValENS0_9ERawPxlIDE(void);

/* Symbol: _ZTV8DMA_FLKO */
/* Demangled: vtable for DMA_FLKO */
extern void* _ZTV8DMA_FLKO;

/* Symbol: _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv */
/* Demangled: std::__1::__list_imp<unsigned int, std::__1::allocator<unsigned int> >::clear() */
int _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__push_back_slow_path<ST_BUF_INFO__ const&>(ST_BUF_INFO__ const&) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::clear() */
int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe11sendCommandEiiii */
/* Demangled: NSImageio::NSIspio::STTIOPipe::sendCommand(int, int, int, int) */
int _ZN9NSImageio7NSIspio9STTIOPipe11sendCommandEiiii(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZTVN9NSImageio7NSIspio10ICamIOPipeE */
/* Demangled: vtable for NSImageio::NSIspio::ICamIOPipe */
extern void* _ZTVN9NSImageio7NSIspio10ICamIOPipeE;

/* Symbol: resmgr_DbgLogEnable_ASSERT */
/* Demangled: resmgr_DbgLogEnable_ASSERT */
extern void* resmgr_DbgLogEnable_ASSERT;

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe19SrcFmtToHwVal_TG_SWEN5NSCam12EImageFormatE */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::SrcFmtToHwVal_TG_SW(NSCam::EImageFormat) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe19SrcFmtToHwVal_TG_SWEN5NSCam12EImageFormatE(void);

/* Symbol: _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::BufInfo>&) */
int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio23pipe_DbgLogEnable_ERRORE */
/* Demangled: NSImageio::NSIspio::pipe_DbgLogEnable_ERROR */
extern void* _ZN9NSImageio7NSIspio23pipe_DbgLogEnable_ERRORE;

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe16HwValToSrcFmt_TGEjji */
/* Demangled: NSImageio::NSIspio::CamIOPipe::HwValToSrcFmt_TG(unsigned int, unsigned int, int) */
int _ZN9NSImageio7NSIspio9CamIOPipe16HwValToSrcFmt_TGEjji(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipeD0Ev */
/* Demangled: NSImageio::NSIspio::CamIOPipe::~CamIOPipe() */
int _ZN9NSImageio7NSIspio9CamIOPipeD0Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe17getOutPxlByteNFmtEN5NSCam12EImageFormatEPiS4_ */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::getOutPxlByteNFmt(NSCam::EImageFormat, int*, int*) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe17getOutPxlByteNFmtEN5NSCam12EImageFormatEPiS4_(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe11UNI_ReadRegEji */
/* Demangled: NSImageio::NSIspio::CamIOPipe::UNI_ReadReg(unsigned int, int) */
int _ZN9NSImageio7NSIspio9CamIOPipe11UNI_ReadRegEji(void);

/* Symbol: _ZNSt3__110__list_impI9IspRrzCfgNS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<IspRrzCfg, std::__1::allocator<IspRrzCfg> >::clear() */
int _ZNSt3__110__list_impI9IspRrzCfgNS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::suspend(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE(void);

/* Symbol: _ZN9NSImageio7NSIspio10ICamIOPipe14createInstanceEPKaR7E_INPUTNS1_10E_PIPE_OPTEPKNS0_8PortInfoEj */
/* Demangled: NSImageio::NSIspio::ICamIOPipe::createInstance(signed char const*, E_INPUT&, NSImageio::NSIspio::ICamIOPipe::E_PIPE_OPT, NSImageio::NSIspio::PortInfo const*, unsigned int) */
int _ZN9NSImageio7NSIspio10ICamIOPipe14createInstanceEPKaR7E_INPUTNS1_10E_PIPE_OPTEPKNS0_8PortInfoEj(void);

/* Symbol: _ZN10Cam_ResMgr10Res_AttachE13ISP_HW_MODULEPc */
/* Demangled: Cam_ResMgr::Res_Attach(ISP_HW_MODULE, char*) */
int _ZN10Cam_ResMgr10Res_AttachE13ISP_HW_MODULEPc(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe12HeaderUpdateER15_stISP_BUF_INFORKS2_jj */
/* Demangled: NSImageio::NSIspio::STTIOPipe::HeaderUpdate(_stISP_BUF_INFO&, _stISP_BUF_INFO const&, unsigned int, unsigned int) */
int _ZN9NSImageio7NSIspio9STTIOPipe12HeaderUpdateER15_stISP_BUF_INFORKS2_jj(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe7DestroyEv */
/* Demangled: NSImageio::NSIspio::STTIOPipe::Destroy() */
int _ZN9NSImageio7NSIspio9STTIOPipe7DestroyEv(void);

/* Symbol: _ZNSt3__110__list_impIN9NSImageio7NSIspio13ISPIO_REG_CFGENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSImageio::NSIspio::ISPIO_REG_CFG, std::__1::allocator<NSImageio::NSIspio::ISPIO_REG_CFG> >::clear() */
int _ZNSt3__110__list_impIN9NSImageio7NSIspio13ISPIO_REG_CFGENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe8abortDmaENS0_6PortIDE */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::abortDma(NSImageio::NSIspio::PortID) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe8abortDmaENS0_6PortIDE(void);

/* Symbol: _ZTV13IspFunction_B */
/* Demangled: vtable for IspFunction_B */
extern void* _ZTV13IspFunction_B;

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY */
/* Demangled: NSImageio::NSIspio::STTIOPipe::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
int _ZN9NSImageio7NSIspio9STTIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr7Get_ResEv */
/* Demangled: NSImageio::NSIspio::STTIOPipe::ResMgr::Get_Res() */
int _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr7Get_ResEv(void);

/* Symbol: _ZN9NSImageio7NSIspio12CamIOPipe_BWC1EPv */
/* Demangled: NSImageio::NSIspio::CamIOPipe_BW::CamIOPipe_BW(void*) */
int _ZN9NSImageio7NSIspio12CamIOPipe_BWC1EPv(void);

/* Symbol: _ZN10Cam_ResMgr20Res_GetCurrentModuleEv */
/* Demangled: Cam_ResMgr::Res_GetCurrentModule() */
int _ZN10Cam_ResMgr20Res_GetCurrentModuleEv(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe10PortID_MAPEj */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::PortID_MAP(unsigned int) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe10PortID_MAPEj(void);

/* Symbol: _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev */
/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::~__deque_base() */
int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipeD1Ev */
/* Demangled: NSImageio::NSIspio::CamIOPipe::~CamIOPipe() */
int _ZN9NSImageio7NSIspio9CamIOPipeD1Ev(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN7Central15Register_searchEjPc */
/* Demangled: Central::Register_search(unsigned int, char*) */
int _ZN7Central15Register_searchEjPc(void);

/* Symbol: _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC2EPv */
/* Demangled: NSImageio::NSIspio::CamIOPipe_cfgFrame::CamIOPipe_cfgFrame(void*) */
int _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC2EPv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN7Central12get_availNumERNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPc */
/* Demangled: Central::get_availNum(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >&, char*) */
int _ZN7Central12get_availNumERNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPc(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__swap_out_circular_buffer(std::__1::__split_buffer<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE>&>&) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe8abortDmaENS0_6PortIDE */
/* Demangled: NSImageio::NSIspio::STTIOPipe::abortDma(NSImageio::NSIspio::PortID) */
int _ZN9NSImageio7NSIspio9STTIOPipe8abortDmaENS0_6PortIDE(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE11__vallocateEj(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr12Register_ResEPc */
/* Demangled: NSImageio::NSIspio::STTIOPipe::ResMgr::Register_Res(char*) */
int _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr12Register_ResEPc(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe10FSM_UPDATEEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::FSM_UPDATE(unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe10FSM_UPDATEEj(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipeD0Ev */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::~CamsvIOPipe() */
int _ZN9NSImageio7NSIspio11CamsvIOPipeD0Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipeD0Ev */
/* Demangled: NSImageio::NSIspio::STTIOPipe::~STTIOPipe() */
int _ZN9NSImageio7NSIspio9STTIOPipeD0Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio14CamIO_PathCtrl10SinglePathER13Res_Meter_OUT */
/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::SinglePath(Res_Meter_OUT&) */
int _ZN9NSImageio7NSIspio14CamIO_PathCtrl10SinglePathER13Res_Meter_OUT(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe11registerIrqEPKa */
/* Demangled: NSImageio::NSIspio::CamIOPipe::registerIrq(signed char const*) */
int _ZN9NSImageio7NSIspio9CamIOPipe11registerIrqEPKa(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe9FSM_CHECKEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::FSM_CHECK(unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe9FSM_CHECKEj(void);

/* Symbol: _ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_ */
/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<ST_BUF_INFO__>&) */
int _ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY */
/* Demangled: NSImageio::NSIspio::CamIOPipe::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
int _ZN9NSImageio7NSIspio9CamIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::SrcFmtToHwVal_TG(NSCam::EImageFormat) */
int _ZN9NSImageio7NSIspio9CamIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipeD2Ev */
/* Demangled: NSImageio::NSIspio::CamIOPipe::~CamIOPipe() */
int _ZN9NSImageio7NSIspio9CamIOPipeD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::E_CAMIO_CAM, std::__1::allocator<NSImageio::NSIspio::E_CAMIO_CAM> >::__push_back_slow_path<NSImageio::NSIspio::E_CAMIO_CAM>(NSImageio::NSIspio::E_CAMIO_CAM&&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::SrcFmtToHwVal_TG(NSCam::EImageFormat) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE(void);

/* Symbol: _ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&) */
int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZN7Central15Register_searchEjPcj */
/* Demangled: Central::Register_search(unsigned int, char*, unsigned int) */
int _ZN7Central15Register_searchEjPcj(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe4stopEi */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::stop(int) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe4stopEi(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE */
/* Demangled: NSImageio::NSIspio::STTIOPipe::configFrame(NSImageio::NSIspio::ICamIOPipe::E_FRM_EVENT, NSImageio::NSIspio::CAMIO_Func) */
int _ZN9NSImageio7NSIspio9STTIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe6uninitEv */
/* Demangled: NSImageio::NSIspio::STTIOPipe::uninit() */
int _ZN9NSImageio7NSIspio9STTIOPipe6uninitEv(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe17getOutPxlByteNFmtEjN5NSCam12EImageFormatEPiS4_ */
/* Demangled: NSImageio::NSIspio::CamIOPipe::getOutPxlByteNFmt(unsigned int, NSCam::EImageFormat, int*, int*) */
int _ZN9NSImageio7NSIspio9CamIOPipe17getOutPxlByteNFmtEjN5NSCam12EImageFormatEPiS4_(void);

/* Symbol: _ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::clear() */
int _ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZN10Cam_ResMgr17Res_Meter_ReleaseEv */
/* Demangled: Cam_ResMgr::Res_Meter_Release() */
int _ZN10Cam_ResMgr17Res_Meter_ReleaseEv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::configDmaPort(NSImageio::NSIspio::PortInfo const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::E_BufPlaneID) */
int _ZN9NSImageio7NSIspio9CamIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe17SrcFmtToHwVal_DMAEN5NSCam12EImageFormatEPj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::SrcFmtToHwVal_DMA(NSCam::EImageFormat, unsigned int*) */
int _ZN9NSImageio7NSIspio9CamIOPipe17SrcFmtToHwVal_DMAEN5NSCam12EImageFormatEPj(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe3irqEPNS0_5Irq_tE */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::irq(NSImageio::NSIspio::Irq_t*) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe3irqEPNS0_5Irq_tE(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_ */
/* Demangled: NSImageio::NSIspio::CamIOPipe::configPipe(std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, NSImageio::NSIspio::CAMIO_Func const*, NSImageio::NSIspio::CAMIO_Func*) */
int _ZN9NSImageio7NSIspio9CamIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE */
/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__swap_out_circular_buffer(std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>&) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void);

/* Symbol: _ZN10Cam_ResMgr9m_centralE */
/* Demangled: Cam_ResMgr::m_central */
extern void* _ZN10Cam_ResMgr9m_centralE;

/* Symbol: resmgr_DbgLogEnable_DEBUG */
/* Demangled: resmgr_DbgLogEnable_DEBUG */
extern void* resmgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipeD1Ev */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::~CamsvIOPipe() */
int _ZN9NSImageio7NSIspio11CamsvIOPipeD1Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr11Release_ResEv */
/* Demangled: NSImageio::NSIspio::STTIOPipe::ResMgr::Release_Res() */
int _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr11Release_ResEv(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipeD1Ev */
/* Demangled: NSImageio::NSIspio::STTIOPipe::~STTIOPipe() */
int _ZN9NSImageio7NSIspio9STTIOPipeD1Ev(void);

/* Symbol: _ZTVN9NSImageio7NSIspio11CamsvIOPipeE */
/* Demangled: vtable for NSImageio::NSIspio::CamsvIOPipe */
extern void* _ZTVN9NSImageio7NSIspio11CamsvIOPipeE;

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe6uninitEv */
/* Demangled: NSImageio::NSIspio::CamIOPipe::uninit() */
int _ZN9NSImageio7NSIspio9CamIOPipe6uninitEv(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe4initEv */
/* Demangled: NSImageio::NSIspio::STTIOPipe::init() */
int _ZN9NSImageio7NSIspio9STTIOPipe4initEv(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE */
/* Demangled: NSImageio::NSIspio::STTIOPipe::resume(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
int _ZN9NSImageio7NSIspio9STTIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe10enqueInBufENS0_6PortIDERKNS0_8QBufInfoE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::enqueInBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&) */
int _ZN9NSImageio7NSIspio9CamIOPipe10enqueInBufENS0_6PortIDERKNS0_8QBufInfoE(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::resume(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
int _ZN9NSImageio7NSIspio9CamIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::resume(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe9FSM_CHECKEj */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::FSM_CHECK(unsigned int) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe9FSM_CHECKEj(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe9preresumeEPKaj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::preresume(signed char const*, unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe9preresumeEPKaj(void);

/* Symbol: _ZN10Cam_ResMgr10Res_AttachEjPc */
/* Demangled: Cam_ResMgr::Res_Attach(unsigned int, char*) */
int _ZN10Cam_ResMgr10Res_AttachEjPc(void);

/* Symbol: _ZN7Central8RegisterE13ISP_HW_MODULEPcj */
/* Demangled: Central::Register(ISP_HW_MODULE, char*, unsigned int) */
int _ZN7Central8RegisterE13ISP_HW_MODULEPcj(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe6CreateEPKaRK7E_INPUT */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::Create(signed char const*, E_INPUT const&) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe6CreateEPKaRK7E_INPUT(void);

/* Symbol: _ZTV7DMA_AFO */
/* Demangled: vtable for DMA_AFO */
extern void* _ZTV7DMA_AFO;

/* Symbol: _ZN9NSImageio7NSIspio14CamIO_PathCtrl16ThreeRawFSMCheckEj */
/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ThreeRawFSMCheck(unsigned int) */
int _ZN9NSImageio7NSIspio14CamIO_PathCtrl16ThreeRawFSMCheckEj(void);

/* Symbol: _ZN10Cam_ResMgr10Res_DetachEv */
/* Demangled: Cam_ResMgr::Res_Detach() */
int _ZN10Cam_ResMgr10Res_DetachEv(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipeD2Ev */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::~CamsvIOPipe() */
int _ZN9NSImageio7NSIspio11CamsvIOPipeD2Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipeD2Ev */
/* Demangled: NSImageio::NSIspio::STTIOPipe::~STTIOPipe() */
int _ZN9NSImageio7NSIspio9STTIOPipeD2Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::suspend(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
int _ZN9NSImageio7NSIspio9CamIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv */
/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::clear() */
int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::configFrame(NSImageio::NSIspio::ICamIOPipe::E_FRM_EVENT, NSImageio::NSIspio::CAMIO_Func) */
int _ZN9NSImageio7NSIspio9CamIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEEC2ERKS6_ */
/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::vector(std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> > const&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEEC2ERKS6_(void);

/* Symbol: _ZTVN9NSImageio7NSIspio18CamIOPipe_cfgFrameE */
/* Demangled: vtable for NSImageio::NSIspio::CamIOPipe_cfgFrame */
extern void* _ZTVN9NSImageio7NSIspio18CamIOPipe_cfgFrameE;

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi */
/* Demangled: NSImageio::NSIspio::STTIOPipe::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, int) */
int _ZN9NSImageio7NSIspio9STTIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi(void);

/* Symbol: _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev */
/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::~__deque_base() */
int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev(void);

/* Symbol: _ZN6ResMgr10Res_AttachE6E_USERPcj */
/* Demangled: ResMgr::Res_Attach(E_USER, char*, unsigned int) */
int _ZN6ResMgr10Res_AttachE6E_USERPcj(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe10dequeInBufENS0_6PortIDERNS0_17QTimeStampBufInfoEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::dequeInBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe10dequeInBufENS0_6PortIDERNS0_17QTimeStampBufInfoEj(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe6TG_MAPE13ISP_HW_MODULE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::TG_MAP(ISP_HW_MODULE) */
int _ZN9NSImageio7NSIspio9CamIOPipe6TG_MAPE13ISP_HW_MODULE(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe7DestroyEv */
/* Demangled: NSImageio::NSIspio::CamIOPipe::Destroy() */
int _ZN9NSImageio7NSIspio9CamIOPipe7DestroyEv(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE const&>(ISP_HW_MODULE const&) */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<Cam_ResMgr*, std::__1::allocator<Cam_ResMgr*> >::__swap_out_circular_buffer(std::__1::__split_buffer<Cam_ResMgr*, std::__1::allocator<Cam_ResMgr*>&>&) */
int _ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe3irqEPNS0_5Irq_tE */
/* Demangled: NSImageio::NSIspio::CamIOPipe::irq(NSImageio::NSIspio::Irq_t*) */
int _ZN9NSImageio7NSIspio9CamIOPipe3irqEPNS0_5Irq_tE(void);

/* Symbol: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj */
/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN10Cam_ResMgr15Res_Meter_BayerERK12Res_Meter_INR13Res_Meter_OUTPKvj */
/* Demangled: Cam_ResMgr::Res_Meter_Bayer(Res_Meter_IN const&, Res_Meter_OUT&, void const*, unsigned int) */
int _ZN10Cam_ResMgr15Res_Meter_BayerERK12Res_Meter_INR13Res_Meter_OUTPKvj(void);

/* Symbol: _ZTV10Cam_ResMgr */
/* Demangled: vtable for Cam_ResMgr */
extern void* _ZTV10Cam_ResMgr;

/* Symbol: resmgr_DbgLogEnable_ERROR */
/* Demangled: resmgr_DbgLogEnable_ERROR */
extern void* resmgr_DbgLogEnable_ERROR;

/* Symbol: resmgr_DbgLogEnable_INFO */
/* Demangled: resmgr_DbgLogEnable_INFO */
extern void* resmgr_DbgLogEnable_INFO;

/* Symbol: _ZTV14DMA_CAMSV_IMGO */
/* Demangled: vtable for DMA_CAMSV_IMGO */
extern void* _ZTV14DMA_CAMSV_IMGO;

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe10FSM_UPDATEEj */
/* Demangled: NSImageio::NSIspio::STTIOPipe::FSM_UPDATE(unsigned int) */
int _ZN9NSImageio7NSIspio9STTIOPipe10FSM_UPDATEEj(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe9FSM_CHECKEj */
/* Demangled: NSImageio::NSIspio::STTIOPipe::FSM_CHECK(unsigned int) */
int _ZN9NSImageio7NSIspio9STTIOPipe9FSM_CHECKEj(void);

/* Symbol: _ZTV7DMA_AAO */
/* Demangled: vtable for DMA_AAO */
extern void* _ZTV7DMA_AAO;

/* Symbol: _ZTV7DMA_PSO */
/* Demangled: vtable for DMA_PSO */
extern void* _ZTV7DMA_PSO;

/* Symbol: _ZN9NSImageio7NSIspio22pipe_DbgLogEnable_INFOE */
/* Demangled: NSImageio::NSIspio::pipe_DbgLogEnable_INFO */
extern void* _ZN9NSImageio7NSIspio22pipe_DbgLogEnable_INFOE;

/* Symbol: _ZN10Cam_ResMgr12m_staticNameE */
/* Demangled: Cam_ResMgr::m_staticName */
extern void* _ZN10Cam_ResMgr12m_staticNameE;

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN9NSImageio7NSIspio12CamIOPipe_BW14p1TuningNotifyEPvS2_ */
/* Demangled: NSImageio::NSIspio::CamIOPipe_BW::p1TuningNotify(void*, void*) */
int _ZN9NSImageio7NSIspio12CamIOPipe_BW14p1TuningNotifyEPvS2_(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe10PortID_MAPEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::PortID_MAP(unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe10PortID_MAPEj(void);

/* Symbol: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN6ResMgr10Res_AttachE6E_USERPcjj */
/* Demangled: ResMgr::Res_Attach(E_USER, char*, unsigned int, unsigned int) */
int _ZN6ResMgr10Res_AttachE6E_USERPcjj(void);

/* Symbol: _ZN9NSImageio7NSIspio12CamIOPipe_BWC2EPv */
/* Demangled: NSImageio::NSIspio::CamIOPipe_BW::CamIOPipe_BW(void*) */
int _ZN9NSImageio7NSIspio12CamIOPipe_BWC2EPv(void);

/* Symbol: _ZN9NSImageio7NSIspio25pipe_DbgLogEnable_VERBOSEE */
/* Demangled: NSImageio::NSIspio::pipe_DbgLogEnable_VERBOSE */
extern void* _ZN9NSImageio7NSIspio25pipe_DbgLogEnable_VERBOSEE;

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe15HwValToSrcPixIDEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::HwValToSrcPixID(unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe15HwValToSrcPixIDEj(void);

/* Symbol: _ZNSt3__110__list_impI6DMACfgNS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<DMACfg, std::__1::allocator<DMACfg> >::clear() */
int _ZNSt3__110__list_impI6DMACfgNS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__push_back_slow_path<NSImageio::NSIspio::BufInfo const&>(NSImageio::NSIspio::BufInfo const&) */
int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQHPathEv */
/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ThreeRawIQHPath() */
int _ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQHPathEv(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe6CreateEPKaR7E_INPUTPKNS0_8PortInfoEj */
/* Demangled: NSImageio::NSIspio::CamIOPipe::Create(signed char const*, E_INPUT&, NSImageio::NSIspio::PortInfo const*, unsigned int) */
int _ZN9NSImageio7NSIspio9CamIOPipe6CreateEPKaR7E_INPUTPKNS0_8PortInfoEj(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe5startEv */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::start() */
int _ZN9NSImageio7NSIspio11CamsvIOPipe5startEv(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe7ReadRegEji */
/* Demangled: NSImageio::NSIspio::CamIOPipe::ReadReg(unsigned int, int) */
int _ZN9NSImageio7NSIspio9CamIOPipe7ReadRegEji(void);

/* Symbol: _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7ST_RECTERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::ST_RECT>&) */
int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7ST_RECTERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZN9NSImageio7NSIspio9STTIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_ */
/* Demangled: NSImageio::NSIspio::STTIOPipe::configPipe(std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, NSImageio::NSIspio::CAMIO_Func const*, NSImageio::NSIspio::CAMIO_Func*) */
int _ZN9NSImageio7NSIspio9STTIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_(void);

/* Symbol: _ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::clear() */
int _ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZN9NSImageio7NSIspio14CamIO_PathCtrl8TwinPathER13Res_Meter_OUT */
/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::TwinPath(Res_Meter_OUT&) */
int _ZN9NSImageio7NSIspio14CamIO_PathCtrl8TwinPathER13Res_Meter_OUT(void);

/* Symbol: _ZN9NSImageio7NSIspio9CamIOPipe7PxlModeEN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeENS2_12EImageFormatEPiS7_S7_S7_ */
/* Demangled: NSImageio::NSIspio::CamIOPipe::PxlMode(NSCam::NSIoPipe::NSCamIOPipe::E_CamPixelMode, NSCam::EImageFormat, int*, int*, int*, int*) */
int _ZN9NSImageio7NSIspio9CamIOPipe7PxlModeEN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeENS2_12EImageFormatEPiS7_S7_S7_(void);

/* Symbol: _ZTVN9NSImageio7NSIspio9CamIOPipeE */
/* Demangled: vtable for NSImageio::NSIspio::CamIOPipe */
extern void* _ZTVN9NSImageio7NSIspio9CamIOPipeE;

/* Symbol: _ZN10Cam_ResMgr9Res_MeterERK12Res_Meter_INR13Res_Meter_OUT */
/* Demangled: Cam_ResMgr::Res_Meter(Res_Meter_IN const&, Res_Meter_OUT&) */
int _ZN10Cam_ResMgr9Res_MeterERK12Res_Meter_INR13Res_Meter_OUT(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::configDmaPort(NSImageio::NSIspio::PortInfo const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::E_BufPlaneID) */
int _ZN9NSImageio7NSIspio11CamsvIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE(void);

/* Symbol: _ZTV8QueueMgrIjE */
/* Demangled: vtable for QueueMgr<unsigned int> */
extern void* _ZTV8QueueMgrIjE;

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe7DestroyEv */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::Destroy() */
int _ZN9NSImageio7NSIspio11CamsvIOPipe7DestroyEv(void);

/* Symbol: _ZN9NSImageio7NSIspio11CamsvIOPipe6uninitEv */
/* Demangled: NSImageio::NSIspio::CamsvIOPipe::uninit() */
int _ZN9NSImageio7NSIspio11CamsvIOPipe6uninitEv(void);

/* Symbol: _ZTVN9NSImageio7NSIspio9STTIOPipeE */
/* Demangled: vtable for NSImageio::NSIspio::STTIOPipe */
extern void* _ZTVN9NSImageio7NSIspio9STTIOPipeE;

__END_DECLS

#endif /* BEGONIA_RE_LIBIMAGEIO_PLAT_PIPE_H */
