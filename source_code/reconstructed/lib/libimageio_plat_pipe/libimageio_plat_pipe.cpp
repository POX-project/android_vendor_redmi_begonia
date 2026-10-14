/*
 * Reverse-Engineered Source for: libimageio_plat_pipe.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libimageio_plat_pipe"

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
#include "libimageio_plat_pipe.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSImageio::NSIspio::ICamIOPipe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio10ICamIOPipe15destroyInstanceEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio10ICamIOPipe15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::pipe_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio23pipe_DbgLogEnable_DEBUGE = NULL;

/* Demangled: NSImageio::NSIspio::CamIOPipe::CamIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipeC1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipeC1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Recursive(std::__1::vector<_CAM_THRU_PUT, std::__1::allocator<_CAM_THRU_PUT> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr13Res_RecursiveEPNSt3__16vectorI13_CAM_THRU_PUTNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN10Cam_ResMgr13Res_RecursiveEPNSt3__16vectorI13_CAM_THRU_PUTNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe11sendCommandEiiii(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe11sendCommandEiiii() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::capibility_Map(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14CamIO_PathCtrl14capibility_MapE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9NSImageio7NSIspio14CamIO_PathCtrl14capibility_MapE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe_cfgFrame::CamIOPipe_cfgFrame(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC1EPv(void) {
    ALOGD("_ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC1EPv() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Cam_ResMgr(ISP_HW_MODULE, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgrC2E13ISP_HW_MODULEPc(void) {
    ALOGD("_ZN10Cam_ResMgrC2E13ISP_HW_MODULEPc() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::HwValToSrcFmt_DMA(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe17HwValToSrcFmt_DMAEjji(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe17HwValToSrcFmt_DMAEjji() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::PortID_MAP(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT10PortID_MAPEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT10PortID_MAPEj() called");
    return 0;
}

/* Exported Object: Cam_ResMgr::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN10Cam_ResMgr5mLockE = NULL;

/* Exported Object: resmgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* resmgr_DbgLogEnable_WARN = NULL;

/* Demangled: NSImageio::NSIspio::CamIOPipe::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe4stopEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe4stopEi() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::TWIN_STT::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe8TWIN_STT5clearEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe8TWIN_STT5clearEv() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Meter_YUV(Res_Meter_IN const&, Res_Meter_OUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr13Res_Meter_YUVERK12Res_Meter_INR13Res_Meter_OUT(void) {
    ALOGD("_ZN10Cam_ResMgr13Res_Meter_YUVERK12Res_Meter_INR13Res_Meter_OUT() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe4stopEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe4stopEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<unsigned int*, std::__1::allocator<unsigned int*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPjNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe4initEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe4initEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::abortDma(NSImageio::NSIspio::PortID) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe8abortDmaENS0_6PortIDE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe8abortDmaENS0_6PortIDE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::CamIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipeC2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipeC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::vector(std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEEC2ERKS4_() called");
    return 0;
}

/* Demangled: void std::__1::vector<Cam_ResMgr*, std::__1::allocator<Cam_ResMgr*> >::__push_back_slow_path<Cam_ResMgr* const&>(Cam_ResMgr* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe11sendCommandEiiii(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe11sendCommandEiiii() called");
    return 0;
}

/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::FSM_UPDATE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe10FSM_UPDATEEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe10FSM_UPDATEEj() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Cam_ResMgr(ISP_HW_MODULE, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgrC1E13ISP_HW_MODULEPc(void) {
    ALOGD("_ZN10Cam_ResMgrC1E13ISP_HW_MODULEPc() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >, std::__1::allocator<std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_6vectorI13ISP_HW_MODULENS_9allocatorIS2_EEEENS3_IS5_EEED2Ev() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Attach(unsigned int, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr10Res_AttachEjPcj(void) {
    ALOGD("_ZN10Cam_ResMgr10Res_AttachEjPcj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: vtable for DMA_PDO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_PDO = NULL;

/* Demangled: void std::__1::vector<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO> >::__push_back_slow_path<NSImageio::NSIspio::ST_CAMIO_CROP_INFO const&>(NSImageio::NSIspio::ST_CAMIO_CROP_INFO const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::CamsvIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipeC1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipeC1Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::PortID_MAP(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe10PortID_MAPEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe10PortID_MAPEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::STTIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipeC1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipeC1Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::Create(signed char const*, E_INPUT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe6CreateEPKaRK7E_INPUT(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe6CreateEPKaRK7E_INPUT() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> >, std::__1::allocator<std::__1::vector<NSImageio::NSIspio::STImgCrop, std::__1::allocator<NSImageio::NSIspio::STImgCrop> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEENS5_IS7_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_6vectorIN9NSImageio7NSIspio9STImgCropENS_9allocatorIS4_EEEENS5_IS7_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::E_CAMIO_CAM, std::__1::allocator<NSImageio::NSIspio::E_CAMIO_CAM> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::E_CAMIO_CAM, std::__1::allocator<NSImageio::NSIspio::E_CAMIO_CAM>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE>(ISP_HW_MODULE&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe4initEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe4initEv() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<ST_BUF_INFO__> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrI13ST_BUF_INFO__E = NULL;

/* Demangled: NSImageio::NSIspio::STTIOPipe::start() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe5startEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe5startEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ThreeRawIQLPath() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQLPathEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQLPathEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe_cfgFrame::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrame14p1TuningNotifyEPvS2_(void) {
    ALOGD("_ZN9NSImageio7NSIspio18CamIOPipe_cfgFrame14p1TuningNotifyEPvS2_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: Central::Release(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN7Central7ReleaseE13ISP_HW_MODULE(void) {
    ALOGD("_ZN7Central7ReleaseE13ISP_HW_MODULE() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::pipe_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio22pipe_DbgLogEnable_WARNE = NULL;

/* Demangled: void std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::__push_back_slow_path<NSImageio::NSIspio::ST_RECT const&>(NSImageio::NSIspio::ST_RECT const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::suspend(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<IspP1TuningCfg, std::__1::allocator<IspP1TuningCfg> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI14IspP1TuningCfgNS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI14IspP1TuningCfgNS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::CamIOPipe_BW */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio12CamIOPipe_BWE = NULL;

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ResToTwinParamUpdate(Res_Meter_IN const&, Res_Meter_OUT const&, TWIN_MGR_PATH_CFG_IN_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14CamIO_PathCtrl20ResToTwinParamUpdateERK12Res_Meter_INRK13Res_Meter_OUTR26TWIN_MGR_PATH_CFG_IN_PARAM(void) {
    ALOGD("_ZN9NSImageio7NSIspio14CamIO_PathCtrl20ResToTwinParamUpdateERK12Res_Meter_INRK13Res_Meter_OUTR26TWIN_MGR_PATH_CFG_IN_PARAM() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::start() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe5startEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe5startEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::CAMIO_STT::QueryPort(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT9QueryPortEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe9CAMIO_STT9QueryPortEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::configPipe(std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, NSImageio::NSIspio::CAMIO_Func const*, NSImageio::NSIspio::CAMIO_Func*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::signalIrq(NSImageio::NSIspio::Irq_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe9signalIrqENS0_5Irq_tE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe9signalIrqENS0_5Irq_tE() called");
    return 0;
}

/* Exported Object: resmgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* resmgr_DbgLogEnable_VERBOSE = NULL;

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::CamsvIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipeC2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipeC2Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::STTIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipeC2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipeC2Ev() called");
    return 0;
}

/* Demangled: ResMgr::Res_Attach(E_USER, ISP_HW_MODULE, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6ResMgr10Res_AttachE6E_USER13ISP_HW_MODULEPc(void) {
    ALOGD("_ZN6ResMgr10Res_AttachE6E_USER13ISP_HW_MODULEPc() called");
    return 0;
}

/* Demangled: ResMgr::Res_GetModule() */
extern "C" __attribute__((visibility("default"))) int _ZN6ResMgr13Res_GetModuleEv(void) {
    ALOGD("_ZN6ResMgr13Res_GetModuleEv() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::pipe_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio24pipe_DbgLogEnable_ASSERTE = NULL;

/* Demangled: NSImageio::NSIspio::CamIOPipe::SrcPixIDToHwVal(NSImageio::NSIspio::ERawPxlID) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe15SrcPixIDToHwValENS0_9ERawPxlIDE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe15SrcPixIDToHwValENS0_9ERawPxlIDE() called");
    return 0;
}

/* Exported Object: vtable for DMA_FLKO */
extern "C" __attribute__((visibility("default"))) void* _ZTV8DMA_FLKO = NULL;

/* Demangled: std::__1::__list_imp<unsigned int, std::__1::allocator<unsigned int> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIjNS_9allocatorIjEEE5clearEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__push_back_slow_path<ST_BUF_INFO__ const&>(ST_BUF_INFO__ const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe11sendCommandEiiii(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe11sendCommandEiiii() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::ICamIOPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio10ICamIOPipeE = NULL;

/* Exported Object: resmgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* resmgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::SrcFmtToHwVal_TG_SW(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe19SrcFmtToHwVal_TG_SWEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe19SrcFmtToHwVal_TG_SWEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::BufInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN9NSImageio7NSIspio7BufInfoERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__*, std::__1::allocator<ST_BUF_INFO__*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIP13ST_BUF_INFO__NS_9allocatorIS2_EEED2Ev() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::pipe_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio23pipe_DbgLogEnable_ERRORE = NULL;

/* Demangled: NSImageio::NSIspio::CamIOPipe::HwValToSrcFmt_TG(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe16HwValToSrcFmt_TGEjji(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe16HwValToSrcFmt_TGEjji() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::~CamIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipeD0Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipeD0Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::getOutPxlByteNFmt(NSCam::EImageFormat, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe17getOutPxlByteNFmtEN5NSCam12EImageFormatEPiS4_(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe17getOutPxlByteNFmtEN5NSCam12EImageFormatEPiS4_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::UNI_ReadReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe11UNI_ReadRegEji(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe11UNI_ReadRegEji() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<IspRrzCfg, std::__1::allocator<IspRrzCfg> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI9IspRrzCfgNS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI9IspRrzCfgNS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::suspend(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::ICamIOPipe::createInstance(signed char const*, E_INPUT&, NSImageio::NSIspio::ICamIOPipe::E_PIPE_OPT, NSImageio::NSIspio::PortInfo const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio10ICamIOPipe14createInstanceEPKaR7E_INPUTNS1_10E_PIPE_OPTEPKNS0_8PortInfoEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio10ICamIOPipe14createInstanceEPKaR7E_INPUTNS1_10E_PIPE_OPTEPKNS0_8PortInfoEj() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Attach(ISP_HW_MODULE, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr10Res_AttachE13ISP_HW_MODULEPc(void) {
    ALOGD("_ZN10Cam_ResMgr10Res_AttachE13ISP_HW_MODULEPc() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::HeaderUpdate(_stISP_BUF_INFO&, _stISP_BUF_INFO const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe12HeaderUpdateER15_stISP_BUF_INFORKS2_jj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe12HeaderUpdateER15_stISP_BUF_INFORKS2_jj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::Destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe7DestroyEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe7DestroyEv() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSImageio::NSIspio::ISPIO_REG_CFG, std::__1::allocator<NSImageio::NSIspio::ISPIO_REG_CFG> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN9NSImageio7NSIspio13ISPIO_REG_CFGENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN9NSImageio7NSIspio13ISPIO_REG_CFGENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::abortDma(NSImageio::NSIspio::PortID) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe8abortDmaENS0_6PortIDE(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe8abortDmaENS0_6PortIDE() called");
    return 0;
}

/* Exported Object: vtable for IspFunction_B */
extern "C" __attribute__((visibility("default"))) void* _ZTV13IspFunction_B = NULL;

/* Demangled: NSImageio::NSIspio::STTIOPipe::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::ResMgr::Get_Res() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr7Get_ResEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe6ResMgr7Get_ResEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe_BW::CamIOPipe_BW(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12CamIOPipe_BWC1EPv(void) {
    ALOGD("_ZN9NSImageio7NSIspio12CamIOPipe_BWC1EPv() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_GetCurrentModule() */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr20Res_GetCurrentModuleEv(void) {
    ALOGD("_ZN10Cam_ResMgr20Res_GetCurrentModuleEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::PortID_MAP(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe10PortID_MAPEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe10PortID_MAPEj() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseI13ST_BUF_INFO__NS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::~CamIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipeD1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipeD1Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: Central::Register_search(unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7Central15Register_searchEjPc(void) {
    ALOGD("_ZN7Central15Register_searchEjPc() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe_cfgFrame::CamIOPipe_cfgFrame(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC2EPv(void) {
    ALOGD("_ZN9NSImageio7NSIspio18CamIOPipe_cfgFrameC2EPv() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: Central::get_availNum(std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >&, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7Central12get_availNumERNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPc(void) {
    ALOGD("_ZN7Central12get_availNumERNSt3__16vectorI13ISP_HW_MODULENS0_9allocatorIS2_EEEEPc() called");
    return 0;
}

/* Demangled: std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__swap_out_circular_buffer(std::__1::__split_buffer<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::abortDma(NSImageio::NSIspio::PortID) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe8abortDmaENS0_6PortIDE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe8abortDmaENS0_6PortIDE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::ResMgr::Register_Res(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr12Register_ResEPc(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe6ResMgr12Register_ResEPc() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::FSM_UPDATE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe10FSM_UPDATEEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe10FSM_UPDATEEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::~CamsvIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipeD0Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipeD0Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::~STTIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipeD0Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipeD0Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::SinglePath(Res_Meter_OUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14CamIO_PathCtrl10SinglePathER13Res_Meter_OUT(void) {
    ALOGD("_ZN9NSImageio7NSIspio14CamIO_PathCtrl10SinglePathER13Res_Meter_OUT() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::registerIrq(signed char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe11registerIrqEPKa(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe11registerIrqEPKa() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::FSM_CHECK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe9FSM_CHECKEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe9FSM_CHECKEj() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<ST_BUF_INFO__>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI13ST_BUF_INFO__RNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::dequeOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int, _CAM_STATE_NOTIFY*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe11dequeOutBufENS0_6PortIDERNS0_17QTimeStampBufInfoEjP17_CAM_STATE_NOTIFY() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::SrcFmtToHwVal_TG(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::~CamIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipeD2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipeD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSImageio::NSIspio::E_CAMIO_CAM, std::__1::allocator<NSImageio::NSIspio::E_CAMIO_CAM> >::__push_back_slow_path<NSImageio::NSIspio::E_CAMIO_CAM>(NSImageio::NSIspio::E_CAMIO_CAM&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio11E_CAMIO_CAMENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::SrcFmtToHwVal_TG(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe16SrcFmtToHwVal_TGEN5NSCam12EImageFormatE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::ST_CAMIO_CROP_INFO, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::ST_CAMIO_CROP_INFO>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN9NSImageio7NSIspio18ST_CAMIO_CROP_INFOERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: Central::Register_search(unsigned int, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Central15Register_searchEjPcj(void) {
    ALOGD("_ZN7Central15Register_searchEjPcj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe4stopEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe4stopEi() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::configFrame(NSImageio::NSIspio::ICamIOPipe::E_FRM_EVENT, NSImageio::NSIspio::CAMIO_Func) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe6uninitEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe6uninitEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::getOutPxlByteNFmt(unsigned int, NSCam::EImageFormat, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe17getOutPxlByteNFmtEjN5NSCam12EImageFormatEPiS4_(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe17getOutPxlByteNFmtEjN5NSCam12EImageFormatEPiS4_() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<_stISP_BUF_INFO, std::__1::allocator<_stISP_BUF_INFO> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI15_stISP_BUF_INFONS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Meter_Release() */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr17Res_Meter_ReleaseEv(void) {
    ALOGD("_ZN10Cam_ResMgr17Res_Meter_ReleaseEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::configDmaPort(NSImageio::NSIspio::PortInfo const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::E_BufPlaneID) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::SrcFmtToHwVal_DMA(NSCam::EImageFormat, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe17SrcFmtToHwVal_DMAEN5NSCam12EImageFormatEPj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe17SrcFmtToHwVal_DMAEN5NSCam12EImageFormatEPj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::irq(NSImageio::NSIspio::Irq_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe3irqEPNS0_5Irq_tE(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe3irqEPNS0_5Irq_tE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::configPipe(std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, NSImageio::NSIspio::CAMIO_Func const*, NSImageio::NSIspio::CAMIO_Func*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_() called");
    return 0;
}

/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__swap_out_circular_buffer(std::__1::__split_buffer<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Exported Object: Cam_ResMgr::m_central */
extern "C" __attribute__((visibility("default"))) void* _ZN10Cam_ResMgr9m_centralE = NULL;

/* Exported Object: resmgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* resmgr_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::~CamsvIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipeD1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipeD1Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::ResMgr::Release_Res() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe6ResMgr11Release_ResEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe6ResMgr11Release_ResEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::~STTIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipeD1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipeD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::CamsvIOPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio11CamsvIOPipeE = NULL;

/* Demangled: NSImageio::NSIspio::CamIOPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe6uninitEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe6uninitEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::init() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe4initEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe4initEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::resume(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::enqueInBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe10enqueInBufENS0_6PortIDERKNS0_8QBufInfoE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe10enqueInBufENS0_6PortIDERKNS0_8QBufInfoE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::resume(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::resume(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe6resumeENS0_10ICamIOPipe14E_SUSPEND_MODEE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::FSM_CHECK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe9FSM_CHECKEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe9FSM_CHECKEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::preresume(signed char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe9preresumeEPKaj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe9preresumeEPKaj() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Attach(unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr10Res_AttachEjPc(void) {
    ALOGD("_ZN10Cam_ResMgr10Res_AttachEjPc() called");
    return 0;
}

/* Demangled: Central::Register(ISP_HW_MODULE, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7Central8RegisterE13ISP_HW_MODULEPcj(void) {
    ALOGD("_ZN7Central8RegisterE13ISP_HW_MODULEPcj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::Create(signed char const*, E_INPUT const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe6CreateEPKaRK7E_INPUT(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe6CreateEPKaRK7E_INPUT() called");
    return 0;
}

/* Exported Object: vtable for DMA_AFO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_AFO = NULL;

/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ThreeRawFSMCheck(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14CamIO_PathCtrl16ThreeRawFSMCheckEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio14CamIO_PathCtrl16ThreeRawFSMCheckEj() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Detach() */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr10Res_DetachEv(void) {
    ALOGD("_ZN10Cam_ResMgr10Res_DetachEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::~CamsvIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipeD2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipeD2Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::~STTIOPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipeD2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipeD2Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::suspend(NSImageio::NSIspio::ICamIOPipe::E_SUSPEND_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe7suspendENS0_10ICamIOPipe14E_SUSPEND_MODEE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIjNS_9allocatorIjEEE5clearEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::configFrame(NSImageio::NSIspio::ICamIOPipe::E_FRM_EVENT, NSImageio::NSIspio::CAMIO_Func) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe11configFrameENS0_10ICamIOPipe11E_FRM_EVENTENS0_10CAMIO_FuncE() called");
    return 0;
}

/* Demangled: std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> >::vector(std::__1::vector<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEEC2ERKS6_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7ST_RECTENS_9allocatorIS3_EEEC2ERKS6_() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::CamIOPipe_cfgFrame */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio18CamIOPipe_cfgFrameE = NULL;

/* Demangled: NSImageio::NSIspio::STTIOPipe::enqueOutBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QBufInfo const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe11enqueOutBufENS0_6PortIDERKNS0_8QBufInfoEi() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<unsigned int, std::__1::allocator<unsigned int> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIjNS_9allocatorIjEEED2Ev() called");
    return 0;
}

/* Demangled: ResMgr::Res_Attach(E_USER, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6ResMgr10Res_AttachE6E_USERPcj(void) {
    ALOGD("_ZN6ResMgr10Res_AttachE6E_USERPcj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::dequeInBuf(NSImageio::NSIspio::PortID, NSImageio::NSIspio::QTimeStampBufInfo&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe10dequeInBufENS0_6PortIDERNS0_17QTimeStampBufInfoEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe10dequeInBufENS0_6PortIDERNS0_17QTimeStampBufInfoEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE6assignIPS1_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::TG_MAP(ISP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe6TG_MAPE13ISP_HW_MODULE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe6TG_MAPE13ISP_HW_MODULE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::Destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe7DestroyEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe7DestroyEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::__push_back_slow_path<ISP_HW_MODULE const&>(ISP_HW_MODULE const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<Cam_ResMgr*, std::__1::allocator<Cam_ResMgr*> >::__swap_out_circular_buffer(std::__1::__split_buffer<Cam_ResMgr*, std::__1::allocator<Cam_ResMgr*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP10Cam_ResMgrNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::irq(NSImageio::NSIspio::Irq_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe3irqEPNS0_5Irq_tE(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe3irqEPNS0_5Irq_tE() called");
    return 0;
}

/* Demangled: std::__1::vector<ST_BUF_INFO__, std::__1::allocator<ST_BUF_INFO__> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorI13ST_BUF_INFO__NS_9allocatorIS1_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: Cam_ResMgr::Res_Meter_Bayer(Res_Meter_IN const&, Res_Meter_OUT&, void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr15Res_Meter_BayerERK12Res_Meter_INR13Res_Meter_OUTPKvj(void) {
    ALOGD("_ZN10Cam_ResMgr15Res_Meter_BayerERK12Res_Meter_INR13Res_Meter_OUTPKvj() called");
    return 0;
}

/* Exported Object: vtable for Cam_ResMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV10Cam_ResMgr = NULL;

/* Exported Object: resmgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* resmgr_DbgLogEnable_ERROR = NULL;

/* Exported Object: resmgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* resmgr_DbgLogEnable_INFO = NULL;

/* Exported Object: vtable for DMA_CAMSV_IMGO */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DMA_CAMSV_IMGO = NULL;

/* Demangled: NSImageio::NSIspio::STTIOPipe::FSM_UPDATE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe10FSM_UPDATEEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe10FSM_UPDATEEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::FSM_CHECK(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe9FSM_CHECKEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe9FSM_CHECKEj() called");
    return 0;
}

/* Exported Object: vtable for DMA_AAO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_AAO = NULL;

/* Exported Object: vtable for DMA_PSO */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DMA_PSO = NULL;

/* Exported Object: NSImageio::NSIspio::pipe_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio22pipe_DbgLogEnable_INFOE = NULL;

/* Exported Object: Cam_ResMgr::m_staticName */
extern "C" __attribute__((visibility("default"))) void* _ZN10Cam_ResMgr12m_staticNameE = NULL;

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe_BW::p1TuningNotify(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12CamIOPipe_BW14p1TuningNotifyEPvS2_(void) {
    ALOGD("_ZN9NSImageio7NSIspio12CamIOPipe_BW14p1TuningNotifyEPvS2_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::PortID_MAP(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe10PortID_MAPEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe10PortID_MAPEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorI13ISP_HW_MODULENS_9allocatorIS1_EEE6assignINS_11__wrap_iterIPS1_EEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS1_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignINS_11__wrap_iterIPjEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: ResMgr::Res_Attach(E_USER, char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6ResMgr10Res_AttachE6E_USERPcjj(void) {
    ALOGD("_ZN6ResMgr10Res_AttachE6E_USERPcjj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe_BW::CamIOPipe_BW(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12CamIOPipe_BWC2EPv(void) {
    ALOGD("_ZN9NSImageio7NSIspio12CamIOPipe_BWC2EPv() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::pipe_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio25pipe_DbgLogEnable_VERBOSEE = NULL;

/* Demangled: NSImageio::NSIspio::CamIOPipe::HwValToSrcPixID(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe15HwValToSrcPixIDEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe15HwValToSrcPixIDEj() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<DMACfg, std::__1::allocator<DMACfg> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI6DMACfgNS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI6DMACfgNS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSImageio::NSIspio::BufInfo, std::__1::allocator<NSImageio::NSIspio::BufInfo> >::__push_back_slow_path<NSImageio::NSIspio::BufInfo const&>(NSImageio::NSIspio::BufInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN9NSImageio7NSIspio7BufInfoENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::ThreeRawIQHPath() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQHPathEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio14CamIO_PathCtrl15ThreeRawIQHPathEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::Create(signed char const*, E_INPUT&, NSImageio::NSIspio::PortInfo const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe6CreateEPKaR7E_INPUTPKNS0_8PortInfoEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe6CreateEPKaR7E_INPUTPKNS0_8PortInfoEj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::start() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe5startEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe5startEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::ReadReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe7ReadRegEji(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe7ReadRegEji() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSImageio::NSIspio::ST_RECT, std::__1::allocator<NSImageio::NSIspio::ST_RECT>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<NSImageio::NSIspio::ST_RECT>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN9NSImageio7NSIspio7ST_RECTERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIN9NSImageio7NSIspio7ST_RECTERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::STTIOPipe::configPipe(std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> > const&, NSImageio::NSIspio::CAMIO_Func const*, NSImageio::NSIspio::CAMIO_Func*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9STTIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_(void) {
    ALOGD("_ZN9NSImageio7NSIspio9STTIOPipe10configPipeERKNSt3__16vectorIPKNS0_8PortInfoENS2_9allocatorIS6_EEEESB_PKNS0_10CAMIO_FuncEPSC_() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<ISP_HW_MODULE, std::__1::allocator<ISP_HW_MODULE> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI13ISP_HW_MODULENS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIO_PathCtrl::TwinPath(Res_Meter_OUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14CamIO_PathCtrl8TwinPathER13Res_Meter_OUT(void) {
    ALOGD("_ZN9NSImageio7NSIspio14CamIO_PathCtrl8TwinPathER13Res_Meter_OUT() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamIOPipe::PxlMode(NSCam::NSIoPipe::NSCamIOPipe::E_CamPixelMode, NSCam::EImageFormat, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio9CamIOPipe7PxlModeEN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeENS2_12EImageFormatEPiS7_S7_S7_(void) {
    ALOGD("_ZN9NSImageio7NSIspio9CamIOPipe7PxlModeEN5NSCam8NSIoPipe11NSCamIOPipe14E_CamPixelModeENS2_12EImageFormatEPiS7_S7_S7_() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::CamIOPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio9CamIOPipeE = NULL;

/* Demangled: Cam_ResMgr::Res_Meter(Res_Meter_IN const&, Res_Meter_OUT&) */
extern "C" __attribute__((visibility("default"))) int _ZN10Cam_ResMgr9Res_MeterERK12Res_Meter_INR13Res_Meter_OUT(void) {
    ALOGD("_ZN10Cam_ResMgr9Res_MeterERK12Res_Meter_INR13Res_Meter_OUT() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::configDmaPort(NSImageio::NSIspio::PortInfo const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::E_BufPlaneID) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe13configDmaPortEPKNS0_8PortInfoER9IspDMACfgjjjNS0_12E_BufPlaneIDE() called");
    return 0;
}

/* Exported Object: vtable for QueueMgr<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTV8QueueMgrIjE = NULL;

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::Destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe7DestroyEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe7DestroyEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::CamsvIOPipe::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio11CamsvIOPipe6uninitEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio11CamsvIOPipe6uninitEv() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::STTIOPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio9STTIOPipeE = NULL;
