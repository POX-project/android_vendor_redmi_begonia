/*
 * Reverse-Engineered Source for: libdip_postproc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdip_postproc"

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
#include "libdip_postproc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: DIP_ISP_PIPE::disable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE7disableEPv(void) {
    ALOGD("_ZN12DIP_ISP_PIPE7disableEPv() called");
    return 0;
}

/* Demangled: IspDrv_B::setMix1(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setMix1ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setMix1ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: MdpMgrImp::MdpMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImpC2Ev(void) {
    ALOGD("_ZN9MdpMgrImpC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: IspDrv_B::setSeee(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSeeeER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSeeeER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DipRingBufferImp::init(bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp4initEbj(void) {
    ALOGD("_ZN16DipRingBufferImp4initEbj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::~WarpEnginePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipeD2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipeD2Ev() called");
    return 0;
}

/* Demangled: IspDrv_B::setWshift(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B9setWshiftER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B9setWshiftER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: IspFunctionDip_B::m_pIspDrvShell */
extern "C" __attribute__((visibility("default"))) void* _ZN16IspFunctionDip_B14m_pIspDrvShellE = NULL;

/* Demangled: NSImageio::NSIspio::PostProcPipe::updateCQUser(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe12updateCQUserEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe12updateCQUserEi() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::init(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe4initEPKcj(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe4initEPKcj() called");
    return 0;
}

/* Demangled: DIP_ISP_PIPE::config(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE6configEj(void) {
    ALOGD("_ZN12DIP_ISP_PIPE6configEj() called");
    return 0;
}

/* Demangled: DpDmaOutColorFmtConvert(MdpRotDMACfg, DP_COLOR_ENUM*) */
extern "C" __attribute__((visibility("default"))) int _Z23DpDmaOutColorFmtConvert12MdpRotDMACfgP13DP_COLOR_ENUM(void) {
    ALOGD("_Z23DpDmaOutColorFmtConvert12MdpRotDMACfgP13DP_COLOR_ENUM() called");
    return 0;
}

/* Demangled: IspDrv_B::setG2g(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setG2gER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setG2gER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::getDMAConstrainErrCode(NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe22getDMAConstrainErrCodeEPN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe22getDMAConstrainErrCodeEPN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: IspDrv_B::setGgm(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setGgmER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setGgmER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: int _startMdp<DpVEncStream>(MDPMGR_DPSTREAM_TYPE, MDPMGR_CFG_STRUCT_s&, DpVEncStream*) */
extern "C" __attribute__((visibility("default"))) int _Z9_startMdpI12DpVEncStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_(void) {
    ALOGD("_Z9_startMdpI12DpVEncStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::getDipDumpInfo(unsigned int&, unsigned int&, unsigned int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe14getDipDumpInfoERjS2_S2_Ri(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe14getDipDumpInfoERjS2_S2_Ri() called");
    return 0;
}

/* Demangled: IspDrv_B::setSMX1(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSMX1ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSMX1ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DIP_MDP_PIPE::stopVencLink() */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_MDP_PIPE12stopVencLinkEv(void) {
    ALOGD("_ZN12DIP_MDP_PIPE12stopVencLinkEv() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::PostProc_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio29PostProc_DbgLogEnable_VERBOSEE = NULL;

/* Demangled: IspDrvShellImp::IspDrvShellImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14IspDrvShellImpC2Ev(void) {
    ALOGD("_ZN14IspDrvShellImpC2Ev() called");
    return 0;
}

/* Demangled: IspDrv_B::setMix2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setMix2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setMix2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: function_Dip_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* function_Dip_DbgLogEnable_ASSERT = NULL;

/* Demangled: int _dequeueFrameEnd<DpIspStream>(MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
extern "C" __attribute__((visibility("default"))) int _Z16_dequeueFrameEndI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_(void) {
    ALOGD("_Z16_dequeueFrameEndI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::HandleExtraCommand(NSCam::NSIoPipe::QParams, NSCam::NSIoPipe::NSWpe::WPEQParams*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe18HandleExtraCommandEN5NSCam8NSIoPipe7QParamsEPNS3_5NSWpe10WPEQParamsE(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe18HandleExtraCommandEN5NSCam8NSIoPipe7QParamsEPNS3_5NSWpe10WPEQParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::u4PortID */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio8u4PortIDE = NULL;

/* Demangled: DpColorFmtConvert(NSCam::EImageFormat, DP_COLOR_ENUM*) */
extern "C" __attribute__((visibility("default"))) int _Z17DpColorFmtConvertN5NSCam12EImageFormatEP13DP_COLOR_ENUM(void) {
    ALOGD("_Z17DpColorFmtConvertN5NSCam12EImageFormatEP13DP_COLOR_ENUM() called");
    return 0;
}

/* Demangled: DipRingBufferImp::~DipRingBufferImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImpD0Ev(void) {
    ALOGD("_ZN16DipRingBufferImpD0Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe6uninitEPKc(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe6uninitEPKc() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::IPostProcPipe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio13IPostProcPipe15destroyInstanceEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio13IPostProcPipe15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for MdpMgrImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9MdpMgrImp = NULL;

/* Exported Object: mdpmgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* mdpmgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DIP_MDP_PIPE::configMDP(DipWorkingBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_MDP_PIPE9configMDPEP16DipWorkingBuffer(void) {
    ALOGD("_ZN12DIP_MDP_PIPE9configMDPEP16DipWorkingBuffer() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::configMdpOutPort(NSCam::NSIoPipe::Output const*, MdpRotDMACfg&, NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe16configMdpOutPortEPKN5NSCam8NSIoPipe6OutputER12MdpRotDMACfgNS2_12EImageFormatE(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe16configMdpOutPortEPKN5NSCam8NSIoPipe6OutputER12MdpRotDMACfgNS2_12EImageFormatE() called");
    return 0;
}

/* Demangled: DipRingBufferImp::BufferMutexLock() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp15BufferMutexLockEv(void) {
    ALOGD("_ZN16DipRingBufferImp15BufferMutexLockEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<DipWorkingBuffer*, std::__1::allocator<DipWorkingBuffer*> >::__push_back_slow_path<DipWorkingBuffer* const&>(DipWorkingBuffer* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2b(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2bER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2bER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::WarpEnginePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipeC2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipeC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: NSImageio::NSIspio::PostProcPipe::~PostProcPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipeD2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipeD2Ev() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::~DipCmdQMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImpD0Ev(void) {
    ALOGD("_ZN13DipCmdQMgrImpD0Ev() called");
    return 0;
}

/* Exported Object: vtable for DipCmdQMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV10DipCmdQMgr = NULL;

/* Demangled: DIP_DMA::write2CQ(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DIP_DMA8write2CQEj(void) {
    ALOGD("_ZN7DIP_DMA8write2CQEj() called");
    return 0;
}

/* Demangled: IspDrv_B::setUnp(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setUnpER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setUnpER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setPAKG2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B8setPAKG2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B8setPAKG2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: int _wpestartMdp<DpIspStream>(MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
extern "C" __attribute__((visibility("default"))) int _Z12_wpestartMdpI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_(void) {
    ALOGD("_Z12_wpestartMdpI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_() called");
    return 0;
}

/* Exported Object: DipCQMgr_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* DipCQMgr_DbgLogEnable_ASSERT = NULL;

/* Demangled: IspDrvShellImp::init(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14IspDrvShellImp4initEPKcj(void) {
    ALOGD("_ZN14IspDrvShellImp4initEPKcj() called");
    return 0;
}

/* Demangled: DIP_DMA::config(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7DIP_DMA6configEj(void) {
    ALOGD("_ZN7DIP_DMA6configEj() called");
    return 0;
}

/* Exported Object: mdpmgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* mdpmgr_DbgLogEnable_VERBOSE = NULL;

/* Demangled: IspDrv_B::setNbc(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setNbcER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setNbcER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setBnr2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setBnr2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setBnr2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: dumpWpeTPipeInfo(ISP_TPIPE_CONFIG_STRUCT, int) */
extern "C" __attribute__((visibility("default"))) int _Z16dumpWpeTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi(void) {
    ALOGD("_Z16dumpWpeTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi() called");
    return 0;
}

/* Exported Object: WarpEngine_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* WarpEngine_DbgLogEnable_ERROR = NULL;

/* Exported Object: WarpEngine_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* WarpEngine_DbgLogEnable_INFO = NULL;

/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE8__appendEj() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::releaseCQUser(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImp13releaseCQUserEi(void) {
    ALOGD("_ZN13DipCmdQMgrImp13releaseCQUserEi() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2h(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2hER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2hER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: MdpMgrImp::startVencLink(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp13startVencLinkEiii(void) {
    ALOGD("_ZN9MdpMgrImp13startVencLinkEiii() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::dequeue(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe7dequeueEiij(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe7dequeueEiij() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: DIP_ISP_PIPE::configTpipeData() */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE15configTpipeDataEv(void) {
    ALOGD("_ZN12DIP_ISP_PIPE15configTpipeDataEv() called");
    return 0;
}

/* Demangled: MdpMgrImp::selectDpIspStream(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp17selectDpIspStreamEjjjjj(void) {
    ALOGD("_ZN9MdpMgrImp17selectDpIspStreamEjjjjj() called");
    return 0;
}

/* Demangled: MdpMgrImp::stopMdp(MDPMGR_CFG_STRUCT_s&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp7stopMdpER19MDPMGR_CFG_STRUCT_s(void) {
    ALOGD("_ZN9MdpMgrImp7stopMdpER19MDPMGR_CFG_STRUCT_s() called");
    return 0;
}

/* Exported Object: mdpmgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* mdpmgr_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::uninit(ISP_WPE_MODULE_IDX) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe6uninitE18ISP_WPE_MODULE_IDX(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe6uninitE18ISP_WPE_MODULE_IDX() called");
    return 0;
}

/* Demangled: IspDrv_B::setNr3d(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setNr3dER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setNr3dER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: int _stopMdp<DpIspStream>(DpIspStream*) */
extern "C" __attribute__((visibility("default"))) int _Z8_stopMdpI11DpIspStreamEiPT_(void) {
    ALOGD("_Z8_stopMdpI11DpIspStreamEiPT_() called");
    return 0;
}

/* Demangled: MdpMgrImp::~MdpMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImpD1Ev(void) {
    ALOGD("_ZN9MdpMgrImpD1Ev() called");
    return 0;
}

/* Demangled: DipRingBuffer::~DipRingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipRingBufferD0Ev(void) {
    ALOGD("_ZN13DipRingBufferD0Ev() called");
    return 0;
}

/* Demangled: DipRingBufferImp::getSMXIOBuffer(E_ISP_DIP_CQ, DipDmaSmxioEnum, unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp14getSMXIOBufferE12E_ISP_DIP_CQ15DipDmaSmxioEnumRjS2_S2_(void) {
    ALOGD("_ZN16DipRingBufferImp14getSMXIOBufferE12E_ISP_DIP_CQ15DipDmaSmxioEnumRjS2_S2_() called");
    return 0;
}

/* Demangled: DipRingBufferImp::BufferMutexUnLock() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp17BufferMutexUnLockEv(void) {
    ALOGD("_ZN16DipRingBufferImp17BufferMutexUnLockEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2c(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2cER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2cER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: DipRingBuf_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* DipRingBuf_DbgLogEnable_ASSERT = NULL;

/* Exported Object: DipCQMgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* DipCQMgr_DbgLogEnable_ERROR = NULL;

/* Demangled: IspDrv_B::setFm(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B5setFmER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B5setFmER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setPca(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setPcaER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setPcaER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setRnr(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setRnrER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setRnrER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DIP_BUF_CTRL::dequeueMdpFrameEnd(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_BUF_CTRL18dequeueMdpFrameEndEiiiij(void) {
    ALOGD("_ZN12DIP_BUF_CTRL18dequeueMdpFrameEndEiiiij() called");
    return 0;
}

/* Demangled: IspDrvShellImp::getDipRingBufMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN14IspDrvShellImp16getDipRingBufMgrEv(void) {
    ALOGD("_ZN14IspDrvShellImp16getDipRingBufMgrEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setOb2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setOb2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setOb2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: IspDrv_B::setG2g2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setG2g2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setG2g2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2i(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2iER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2iER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSrz1(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSrz1ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSrz1ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: VTT for IspDrvShellImp */
extern "C" __attribute__((visibility("default"))) void* _ZTT14IspDrvShellImp = NULL;

/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE6resizeEj() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::PostProcPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipeC2Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipeC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: IspDrv_B::setMfb(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setMfbER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setMfbER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setCrsp(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setCrspER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setCrspER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setLsc2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setLsc2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setLsc2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setColor(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B8setColorER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B8setColorER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: function_Dip_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* function_Dip_DbgLogEnable_INFO = NULL;

/* Demangled: getUs() */
extern "C" __attribute__((visibility("default"))) int _Z5getUsv(void) {
    ALOGD("_Z5getUsv() called");
    return 0;
}

/* Demangled: MdpMgrImp::dequeueFrameEnd(MDPMGR_CFG_STRUCT_s&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp15dequeueFrameEndER19MDPMGR_CFG_STRUCT_s(void) {
    ALOGD("_ZN9MdpMgrImp15dequeueFrameEndER19MDPMGR_CFG_STRUCT_s() called");
    return 0;
}

/* Exported Object: vtable for MdpMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MdpMgr = NULL;

/* Demangled: NSImageio::NSIspio::IWarpEnginePipe::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio15IWarpEnginePipe14createInstanceEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio15IWarpEnginePipe14createInstanceEv() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: DIP_ISP_PIPE::PushFrameCQforMDPStart() */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE22PushFrameCQforMDPStartEv(void) {
    ALOGD("_ZN12DIP_ISP_PIPE22PushFrameCQforMDPStartEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::configPipe(NSCam::NSIoPipe::FrameParams const&, NSImageio::NSIspio::PipePackageInfo*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe10configPipeERKN5NSCam8NSIoPipe11FrameParamsEPNS0_15PipePackageInfoEPKc(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe10configPipeERKN5NSCam8NSIoPipe11FrameParamsEPNS0_15PipePackageInfoEPKc() called");
    return 0;
}

/* Demangled: MdpMgr::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6MdpMgr14createInstanceEv(void) {
    ALOGD("_ZN6MdpMgr14createInstanceEv() called");
    return 0;
}

/* Exported Object: function_Dip_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* function_Dip_DbgLogEnable_DEBUG = NULL;

/* Exported Object: vtable for IspFunctionDip_B */
extern "C" __attribute__((visibility("default"))) void* _ZTV16IspFunctionDip_B = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: IspDrv_B::setGgm2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setGgm2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setGgm2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setRcp2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setRcp2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setRcp2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: MdpMgrImp::MdpMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImpC1Ev(void) {
    ALOGD("_ZN9MdpMgrImpC1Ev() called");
    return 0;
}

/* Exported Object: DipRingBuf_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* DipRingBuf_DbgLogEnable_VERBOSE = NULL;

/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void) {
    ALOGD("_ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::sendCommand(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe11sendCommandEiiii(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe11sendCommandEiiii() called");
    return 0;
}

/* Demangled: IspDrv_B::setG2c(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setG2cER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setG2cER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setMix3(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setMix3ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setMix3ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSrz2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSrz2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSrz2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: mdpmgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* mdpmgr_DbgLogEnable_INFO = NULL;

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::~WarpEnginePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipeD1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipeD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Exported Object: WarpEngine_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* WarpEngine_DbgLogEnable_WARN = NULL;

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::configWpeCommandData(NSCam::NSIoPipe::WPEConfig, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe20configWpeCommandDataEN5NSCam8NSIoPipe9WPEConfigEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe20configWpeCommandDataEN5NSCam8NSIoPipe9WPEConfigEi() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::PostProc_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio26PostProc_DbgLogEnable_INFOE = NULL;

/* Exported Object: vtable for DIP_ISP_PIPE */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DIP_ISP_PIPE = NULL;

/* Demangled: DIP_ISP_PIPE::write2CQ(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE8write2CQEj(void) {
    ALOGD("_ZN12DIP_ISP_PIPE8write2CQEj() called");
    return 0;
}

/* Demangled: IspDrv_B::setNbc2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setNbc2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setNbc2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setSl2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setSl2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::getCropFunctionEnable(NSImageio::NSIspio::EDrvScenario, int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe21getCropFunctionEnableENS0_12EDrvScenarioEiRj(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe21getCropFunctionEnableENS0_12EDrvScenarioEiRj() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::mTransformMapping */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio17mTransformMappingE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: IspDrvShellImp::IspDrvShellImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14IspDrvShellImpC1Ev(void) {
    ALOGD("_ZN14IspDrvShellImpC1Ev() called");
    return 0;
}

/* Demangled: IspDrv_B::setAdbs2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B8setAdbs2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B8setAdbs2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::IWarpEnginePipe::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio15IWarpEnginePipe15destroyInstanceEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio15IWarpEnginePipe15destroyInstanceEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: NSImageio::NSIspio::PostProcPipe::checkFrameParamIsTheSame(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::FrameParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe24checkFrameParamIsTheSameERKN5NSCam8NSIoPipe11FrameParamsES6_(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe24checkFrameParamIsTheSameERKN5NSCam8NSIoPipe11FrameParamsES6_() called");
    return 0;
}

/* Demangled: DipCmdQMgr::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10DipCmdQMgr15destroyInstanceEv(void) {
    ALOGD("_ZN10DipCmdQMgr15destroyInstanceEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setMfbw(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setMfbwER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setMfbwER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setMix4(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setMix4ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setMix4ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DipRingBufferImp::~DipRingBufferImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImpD2Ev(void) {
    ALOGD("_ZN16DipRingBufferImpD2Ev() called");
    return 0;
}

/* Exported Object: vtable for DipRingBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DipRingBuffer = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::mCropPathInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio13mCropPathInfoE = NULL;

/* Demangled: IspDrvShellImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14IspDrvShellImp11getInstanceEv(void) {
    ALOGD("_ZN14IspDrvShellImp11getInstanceEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setNdg(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setNdgER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setNdgER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setDcpn2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B8setDcpn2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B8setDcpn2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: function_Dip_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* function_Dip_DbgLogEnable_VERBOSE = NULL;

/* Demangled: DipRingBufferImp::getSecureBufSize(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp16getSecureBufSizeERjS0_S0_(void) {
    ALOGD("_ZN16DipRingBufferImp16getSecureBufSizeERjS0_S0_() called");
    return 0;
}

/* Exported Object: vtable for DipRingBufferImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV16DipRingBufferImp = NULL;

/* Demangled: std::__1::__list_imp<_CQ_CONFIG_INFO_, std::__1::allocator<_CQ_CONFIG_INFO_> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI16_CQ_CONFIG_INFO_NS_9allocatorIS1_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impI16_CQ_CONFIG_INFO_NS_9allocatorIS1_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for DIP_MDP_PIPE */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DIP_MDP_PIPE = NULL;

/* Demangled: DipCmdQMgrImp::~DipCmdQMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImpD2Ev(void) {
    ALOGD("_ZN13DipCmdQMgrImpD2Ev() called");
    return 0;
}

/* Exported Object: function_Dip_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* function_Dip_DbgLogEnable_WARN = NULL;

/* Exported Object: DipRingBuf_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* DipRingBuf_DbgLogEnable_ERROR = NULL;

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::WarpEnginePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipeC1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipeC1Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::~PostProcPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipeD1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipeD1Ev() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImp6uninitEv(void) {
    ALOGD("_ZN13DipCmdQMgrImp6uninitEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setC24b(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setC24bER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setC24bER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2d(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2dER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2dER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Demangled: MdpMgr::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6MdpMgr15destroyInstanceEv(void) {
    ALOGD("_ZN6MdpMgr15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::queryCropPathNum(NSImageio::NSIspio::EDrvScenario, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe16queryCropPathNumENS0_12EDrvScenarioERj(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe16queryCropPathNumENS0_12EDrvScenarioERj() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::PostProc_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio26PostProc_DbgLogEnable_WARNE = NULL;

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::start(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe5startEiij(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe5startEiij() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: MdpMgrImp::selectWpeStream(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp15selectWpeStreamEjj(void) {
    ALOGD("_ZN9MdpMgrImp15selectWpeStreamEjj() called");
    return 0;
}

/* Demangled: IspDrv_B::setFlc2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setFlc2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setFlc2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: MdpMgrImp::allocDpStream(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp13allocDpStreamEj(void) {
    ALOGD("_ZN9MdpMgrImp13allocDpStreamEj() called");
    return 0;
}

/* Demangled: MdpMgrImp::startMdp(MDPMGR_CFG_STRUCT_s&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp8startMdpER19MDPMGR_CFG_STRUCT_s(void) {
    ALOGD("_ZN9MdpMgrImp8startMdpER19MDPMGR_CFG_STRUCT_s() called");
    return 0;
}

/* Exported Object: mdpmgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* mdpmgr_DbgLogEnable_WARN = NULL;

/* Demangled: DipRingBuffer::~DipRingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipRingBufferD2Ev(void) {
    ALOGD("_ZN13DipRingBufferD2Ev() called");
    return 0;
}

/* Demangled: DipRingBufferImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp15destroyInstanceEv(void) {
    ALOGD("_ZN16DipRingBufferImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DipRingBufferImp::getSecureBufHandle(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp18getSecureBufHandleERjS0_S0_(void) {
    ALOGD("_ZN16DipRingBufferImp18getSecureBufHandleERjS0_S0_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: int _dequeueBuf<DpIspStream>(eMDPMGR_DEQUEUE_INDEX, MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
extern "C" __attribute__((visibility("default"))) int _Z11_dequeueBufI11DpIspStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_(void) {
    ALOGD("_Z11_dequeueBufI11DpIspStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_() called");
    return 0;
}

/* Demangled: MdpMgrImp::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp4initEj(void) {
    ALOGD("_ZN9MdpMgrImp4initEj() called");
    return 0;
}

/* Demangled: MdpMgrImp::~MdpMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImpD0Ev(void) {
    ALOGD("_ZN9MdpMgrImpD0Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::checkDMAConstrain(NSCam::IImageBuffer*, unsigned int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe17checkDMAConstrainEPN5NSCam12IImageBufferEjPc(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe17checkDMAConstrainEPN5NSCam12IImageBufferEjPc() called");
    return 0;
}

/* Demangled: DipRingBufferImp::DipRingBufferImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImpC2Ev(void) {
    ALOGD("_ZN16DipRingBufferImpC2Ev() called");
    return 0;
}

/* Demangled: DIP_ISP_PIPE::ConfigDipPipe(DipWorkingBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE13ConfigDipPipeEP16DipWorkingBuffer(void) {
    ALOGD("_ZN12DIP_ISP_PIPE13ConfigDipPipeEP16DipWorkingBuffer() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImp4initEv(void) {
    ALOGD("_ZN13DipCmdQMgrImp4initEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setPgn(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setPgnER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setPgnER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2e(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2eER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2eER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::queryCQ(NSImageio::NSIspio::EDrvScenario, unsigned int, int, int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe7queryCQENS0_12EDrvScenarioEjiiRjS3_(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe7queryCQENS0_12EDrvScenarioEjiiRjS3_() called");
    return 0;
}

/* Exported Object: vtable for DipCmdQMgrImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DipCmdQMgrImp = NULL;

/* Exported Object: mMutex_DpStreamMap */
extern "C" __attribute__((visibility("default"))) void* mMutex_DpStreamMap = NULL;

/* Demangled: DipRingBufferImp::getCmdqBuf(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp10getCmdqBufERjS0_(void) {
    ALOGD("_ZN16DipRingBufferImp10getCmdqBufERjS0_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: IspDrvShell::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11IspDrvShell14createInstanceEv(void) {
    ALOGD("_ZN11IspDrvShell14createInstanceEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::bufferQueCtrl(NSImageio::NSIspio::EPIPE_P2BUFQUECmd, NSImageio::NSIspio::EPIPE_P2engine, unsigned int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::configInDmaPort(NSCam::NSIoPipe::Input const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::EIMAGE_STRIDE, NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe15configInDmaPortEPKN5NSCam8NSIoPipe5InputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe15configInDmaPortEPKN5NSCam8NSIoPipe5InputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE() called");
    return 0;
}

/* Demangled: int _dequeueFrameEnd<DpVEncStream>(MDPMGR_CFG_STRUCT_s&, DpVEncStream*) */
extern "C" __attribute__((visibility("default"))) int _Z16_dequeueFrameEndI12DpVEncStreamEiR19MDPMGR_CFG_STRUCT_sPT_(void) {
    ALOGD("_Z16_dequeueFrameEndI12DpVEncStreamEiR19MDPMGR_CFG_STRUCT_sPT_() called");
    return 0;
}

/* Demangled: dumpIspTPipeInfo(ISP_TPIPE_CONFIG_STRUCT, int) */
extern "C" __attribute__((visibility("default"))) int _Z16dumpIspTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi(void) {
    ALOGD("_Z16dumpIspTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi() called");
    return 0;
}

/* Demangled: std::__1::vector<DipWorkingBuffer*, std::__1::allocator<DipWorkingBuffer*> >::__swap_out_circular_buffer(std::__1::__split_buffer<DipWorkingBuffer*, std::__1::allocator<DipWorkingBuffer*>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void) {
    ALOGD("_ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE() called");
    return 0;
}

/* Exported Object: DipCQMgr_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* DipCQMgr_DbgLogEnable_INFO = NULL;

/* Demangled: DipCmdQMgrImp::DipCmdQMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImpC2Ev(void) {
    ALOGD("_ZN13DipCmdQMgrImpC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6resizeEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6resizeEj() called");
    return 0;
}

/* Demangled: MdpMgrImp::getJPEGSize(MDPMGR_CFG_STRUCT_s) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp11getJPEGSizeE19MDPMGR_CFG_STRUCT_s(void) {
    ALOGD("_ZN9MdpMgrImp11getJPEGSizeE19MDPMGR_CFG_STRUCT_s() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::PostProcPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipeC1Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipeC1Ev() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2k(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2kER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2kER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSrz3(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSrz3ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSrz3ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: vtable for IspDrvShellImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV14IspDrvShellImp = NULL;

/* Exported Object: vtable for NSImageio::NSIspio::IWarpEnginePipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio15IWarpEnginePipeE = NULL;

/* Demangled: IspDrv_B::setUdm(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setUdmER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setUdmER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DipRingBufferImp::ReleaseDipWorkingBuffer(DipWorkingBuffer*, E_ISP_DIP_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp23ReleaseDipWorkingBufferEP16DipWorkingBuffer12E_ISP_DIP_CQ(void) {
    ALOGD("_ZN16DipRingBufferImp23ReleaseDipWorkingBufferEP16DipWorkingBuffer12E_ISP_DIP_CQ() called");
    return 0;
}

/* Exported Object: WarpEngine_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* WarpEngine_DbgLogEnable_DEBUG = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::HandleExtraCommand(NSImageio::NSIspio::PipePackageInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe18HandleExtraCommandEPNS0_15PipePackageInfoE(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe18HandleExtraCommandEPNS0_15PipePackageInfoE() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::PostProc_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio28PostProc_DbgLogEnable_ASSERTE = NULL;

/* Demangled: IspDrv_B::setNdg2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setNdg2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setNdg2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::queryScenarioInfo(NSImageio::NSIspio::EDrvScenario, std::__1::vector<NSImageio::NSIspio::CropPathInfo, std::__1::allocator<NSImageio::NSIspio::CropPathInfo> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe17queryScenarioInfoENS0_12EDrvScenarioERNSt3__16vectorINS0_12CropPathInfoENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe17queryScenarioInfoENS0_12EDrvScenarioERNSt3__16vectorINS0_12CropPathInfoENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: IspDrv_B::setRmm2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setRmm2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setRmm2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DipRingBuffer::DipRingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipRingBufferC2Ev(void) {
    ALOGD("_ZN13DipRingBufferC2Ev() called");
    return 0;
}

/* Demangled: DIP_ISP_PIPE::CalAlgoAndCStep(CRZ_DRV_MODE_ENUM, CRZ_DRV_RZ_ENUM, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CRZ_DRV_ALGO_ENUM*, CRZ_DRV_ALGO_ENUM*, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_(void) {
    ALOGD("_ZN12DIP_ISP_PIPE15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::checkTuningModuleConstrain(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe26checkTuningModuleConstrainEPc(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe26checkTuningModuleConstrainEPc() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::PostProc_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio27PostProc_DbgLogEnable_DEBUGE = NULL;

/* Demangled: MdpMgrImp::selectDpVEncStream() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp18selectDpVEncStreamEv(void) {
    ALOGD("_ZN9MdpMgrImp18selectDpVEncStreamEv() called");
    return 0;
}

/* Demangled: MdpMgrImp::uninit(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp6uninitEj(void) {
    ALOGD("_ZN9MdpMgrImp6uninitEj() called");
    return 0;
}

/* Demangled: DipRingBufferImp::getTpipeBuf(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp11getTpipeBufERjS0_(void) {
    ALOGD("_ZN16DipRingBufferImp11getTpipeBufERjS0_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::IPostProcPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio13IPostProcPipeE = NULL;

/* Exported Object: DipCQMgr_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* DipCQMgr_DbgLogEnable_DEBUG = NULL;

/* Demangled: MdpMgrImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp4initEv(void) {
    ALOGD("_ZN9MdpMgrImp4initEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::~WarpEnginePipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipeD0Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipeD0Ev() called");
    return 0;
}

/* Demangled: IspDrv_B::setLce(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setLceER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setLceER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setSrz4(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSrz4ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSrz4ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: int _dequeueBuf<DpVEncStream>(eMDPMGR_DEQUEUE_INDEX, MDPMGR_CFG_STRUCT_s&, DpVEncStream*) */
extern "C" __attribute__((visibility("default"))) int _Z11_dequeueBufI12DpVEncStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_(void) {
    ALOGD("_Z11_dequeueBufI12DpVEncStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::getTuningModuleConstrainErrCode() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe31getTuningModuleConstrainErrCodeEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe31getTuningModuleConstrainErrCodeEv() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::PostProc_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio27PostProc_DbgLogEnable_ERRORE = NULL;

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::wpeconfigMdpOutPort(NSImageio::NSIspio::PortInfo const*, MdpRotDMACfg&, NSCam::NSIoPipe::EDIPSecureEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe19wpeconfigMdpOutPortEPKNS0_8PortInfoER12MdpRotDMACfgN5NSCam8NSIoPipe14EDIPSecureEnumE(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe19wpeconfigMdpOutPortEPKNS0_8PortInfoER12MdpRotDMACfgN5NSCam8NSIoPipe14EDIPSecureEnumE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::PrintPipePortInfo(NSCam::NSIoPipe::FrameParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe17PrintPipePortInfoERKN5NSCam8NSIoPipe11FrameParamsE(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe17PrintPipePortInfoERKN5NSCam8NSIoPipe11FrameParamsE() called");
    return 0;
}

/* Exported Object: vtable for DIP_BUF_CTRL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DIP_BUF_CTRL = NULL;

/* Demangled: int _startMdp<DpIspStream>(MDPMGR_DPSTREAM_TYPE, MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
extern "C" __attribute__((visibility("default"))) int _Z9_startMdpI11DpIspStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_(void) {
    ALOGD("_Z9_startMdpI11DpIspStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_() called");
    return 0;
}

/* Demangled: IspDrv_B::setUfd(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setUfdER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setUfdER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setRmg2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setRmg2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setRmg2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DipRingBufferImp::skipTpipeCalculatebyIdx(E_ISP_DIP_CQ, unsigned int&, unsigned int&, DipWorkingBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp23skipTpipeCalculatebyIdxE12E_ISP_DIP_CQRjS1_P16DipWorkingBuffer(void) {
    ALOGD("_ZN16DipRingBufferImp23skipTpipeCalculatebyIdxE12E_ISP_DIP_CQRjS1_P16DipWorkingBuffer() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::checkDipHWConstrain() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe19checkDipHWConstrainEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe19checkDipHWConstrainEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setDbs2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setDbs2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setDbs2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: mdpmgr_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* mdpmgr_DbgLogEnable_ERROR = NULL;

/* Demangled: IspDrvShellImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14IspDrvShellImp15destroyInstanceEv(void) {
    ALOGD("_ZN14IspDrvShellImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setC24(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setC24ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setC24ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: WarpEngine_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* WarpEngine_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: vtable for NSImageio::NSIspio::WarpEnginePipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio14WarpEnginePipeE = NULL;

/* Demangled: NSImageio::NSIspio::PostProcPipe::dequeBuf(int&, unsigned int&, unsigned int&, NSImageio::NSIspio::EDrvScenario, int, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe8dequeBufERiRjS3_NS0_12EDrvScenarioEiiijj(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe8dequeBufERiRjS3_NS0_12EDrvScenarioEiiijj() called");
    return 0;
}

/* Exported Object: DipCQMgr_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* DipCQMgr_DbgLogEnable_VERBOSE = NULL;

/* Demangled: MdpMgrImp::dequeueBuf(eMDPMGR_DEQUEUE_INDEX, MDPMGR_CFG_STRUCT_s&) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp10dequeueBufE21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_s(void) {
    ALOGD("_ZN9MdpMgrImp10dequeueBufE21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_s() called");
    return 0;
}

/* Demangled: DipRingBufferImp::AcquireDipWorkingBuffer(E_ISP_DIP_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp23AcquireDipWorkingBufferE12E_ISP_DIP_CQ(void) {
    ALOGD("_ZN16DipRingBufferImp23AcquireDipWorkingBufferE12E_ISP_DIP_CQ() called");
    return 0;
}

/* Demangled: DipRingBufferImp::getDipWorkingBufferbyIdx(E_ISP_DIP_CQ, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp24getDipWorkingBufferbyIdxE12E_ISP_DIP_CQji(void) {
    ALOGD("_ZN16DipRingBufferImp24getDipWorkingBufferbyIdxE12E_ISP_DIP_CQji() called");
    return 0;
}

/* Demangled: DipRingBufferImp::~DipRingBufferImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImpD1Ev(void) {
    ALOGD("_ZN16DipRingBufferImpD1Ev() called");
    return 0;
}

/* Exported Object: NSImageio::NSIspio::WarpEnginePipe::m_pWpeDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN9NSImageio7NSIspio14WarpEnginePipe9m_pWpeDrvE = NULL;

/* Demangled: DIP_MDP_PIPE::startVencLink(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_MDP_PIPE13startVencLinkEiii(void) {
    ALOGD("_ZN12DIP_MDP_PIPE13startVencLinkEiii() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::configOutDmaPort(NSCam::NSIoPipe::Output const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::EIMAGE_STRIDE, NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe16configOutDmaPortEPKN5NSCam8NSIoPipe6OutputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe16configOutDmaPortEPKN5NSCam8NSIoPipe6OutputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE() called");
    return 0;
}

/* Demangled: DipRingBufferImp::getCqDescBufSize(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp16getCqDescBufSizeERj(void) {
    ALOGD("_ZN16DipRingBufferImp16getCqDescBufSizeERj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DIP_ISP_PIPE::enable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_ISP_PIPE6enableEPv(void) {
    ALOGD("_ZN12DIP_ISP_PIPE6enableEPv() called");
    return 0;
}

/* Exported Object: DipCQMgr_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* DipCQMgr_DbgLogEnable_WARN = NULL;

/* Demangled: IspDrv_B::setC02b(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setC02bER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setC02bER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: DipRingBufferImp::getInstance(DIP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp11getInstanceE13DIP_HW_MODULE(void) {
    ALOGD("_ZN16DipRingBufferImp11getInstanceE13DIP_HW_MODULE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::getVssDipWBInfo(unsigned int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe15getVssDipWBInfoERjii(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe15getVssDipWBInfoERjii() called");
    return 0;
}

/* Exported Object: vtable for DIP_DMA */
extern "C" __attribute__((visibility("default"))) void* _ZTV7DIP_DMA = NULL;

/* Exported Object: DipRingBuf_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* DipRingBuf_DbgLogEnable_INFO = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::~DipCmdQMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImpD1Ev(void) {
    ALOGD("_ZN13DipCmdQMgrImpD1Ev() called");
    return 0;
}

/* Demangled: MdpMgrImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp6uninitEv(void) {
    ALOGD("_ZN9MdpMgrImp6uninitEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::~PostProcPipe() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipeD0Ev(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSImageio::NSIspio::PostProcPipe */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSImageio7NSIspio12PostProcPipeE = NULL;

/* Demangled: IspDrv_B::setC02(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setC02ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setC02ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setFe(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B5setFeER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B5setFeER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setCpn2(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setCpn2ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setCpn2ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: MdpMgrImp::updateDpStreamMap(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp17updateDpStreamMapEjjjj(void) {
    ALOGD("_ZN9MdpMgrImp17updateDpStreamMapEjjjj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::getCrzPosition(NSImageio::NSIspio::EDrvScenario, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe14getCrzPositionENS0_12EDrvScenarioERiS3_(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe14getCrzPositionENS0_12EDrvScenarioERiS3_() called");
    return 0;
}

/* Exported Object: construction vtable for IspDrvShell-in-IspDrvShellImp */
extern "C" __attribute__((visibility("default"))) void* _ZTC14IspDrvShellImp0_11IspDrvShell = NULL;

/* Exported Object: function_Dip_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* function_Dip_DbgLogEnable_ERROR = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: IspDrv_B::setWsync(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B8setWsyncER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B8setWsyncER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE() called");
    return 0;
}

/* Demangled: IspDrv_B::setHfg(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setHfgER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setHfgER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: MdpMgrImp::~MdpMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImpD2Ev(void) {
    ALOGD("_ZN9MdpMgrImpD2Ev() called");
    return 0;
}

/* Demangled: DipRingBuffer::~DipRingBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipRingBufferD1Ev(void) {
    ALOGD("_ZN13DipRingBufferD1Ev() called");
    return 0;
}

/* Demangled: DipCmdQMgr::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10DipCmdQMgr14createInstanceEv(void) {
    ALOGD("_ZN10DipCmdQMgr14createInstanceEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::init(ISP_WPE_MODULE_IDX, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe4initE18ISP_WPE_MODULE_IDXj(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe4initE18ISP_WPE_MODULE_IDXj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::dequeMdpFrameEnd(int, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe16dequeMdpFrameEndEiiiij(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe16dequeMdpFrameEndEiiiij() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::stop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe4stopEPv(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe4stopEPv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::IPostProcPipe::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio13IPostProcPipe14createInstanceEv(void) {
    ALOGD("_ZN9NSImageio7NSIspio13IPostProcPipe14createInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: DipRingBufferImp::DipRingBufferImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImpC1Ev(void) {
    ALOGD("_ZN16DipRingBufferImpC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: MdpMgrImp::stopVencLink() */
extern "C" __attribute__((visibility("default"))) int _ZN9MdpMgrImp12stopVencLinkEv(void) {
    ALOGD("_ZN9MdpMgrImp12stopVencLinkEv() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::configwpe(WpePackage, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe9configwpeE10WpePackagei(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe9configwpeE10WpePackagei() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::getDupCQIdx(int, int, int, _debug_info_) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImp11getDupCQIdxEiii12_debug_info_(void) {
    ALOGD("_ZN13DipCmdQMgrImp11getDupCQIdxEiii12_debug_info_() called");
    return 0;
}

/* Demangled: IspDrvShellImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14IspDrvShellImp6uninitEPKc(void) {
    ALOGD("_ZN14IspDrvShellImp6uninitEPKc() called");
    return 0;
}

/* Demangled: IspDrv_B::setSl2g(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSl2gER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSl2gER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: int _stopMdp<DpVEncStream>(DpVEncStream*) */
extern "C" __attribute__((visibility("default"))) int _Z8_stopMdpI12DpVEncStreamEiPT_(void) {
    ALOGD("_Z8_stopMdpI12DpVEncStreamEiPT_() called");
    return 0;
}

/* Exported Object: WarpEngine_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* WarpEngine_DbgLogEnable_ASSERT = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: mMDPTransformMapping */
extern "C" __attribute__((visibility("default"))) void* mMDPTransformMapping = NULL;

/* Demangled: NSImageio::NSIspio::PostProcPipe::doUVSwap(unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe8doUVSwapEPjS2_(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe8doUVSwapEPjS2_() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::checkCQUserNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImp14checkCQUserNumEi(void) {
    ALOGD("_ZN13DipCmdQMgrImp14checkCQUserNumEi() called");
    return 0;
}

/* Exported Object: DipRingBuf_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* DipRingBuf_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSImageio::NSIspio::PostProcPipe::PixelIDMapping(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe14PixelIDMappingEj(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe14PixelIDMappingEj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: DipCmdQMgrImp::DipCmdQMgrImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13DipCmdQMgrImpC1Ev(void) {
    ALOGD("_ZN13DipCmdQMgrImpC1Ev() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::bufferQueCtrl(NSImageio::NSIspio::EPIPE_P2BUFQUECmd, NSImageio::NSIspio::EPIPE_P2engine, unsigned int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::WarpEnginePipe::configTpipeData(NSCam::NSIoPipe::WPEConfig, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio14WarpEnginePipe15configTpipeDataEN5NSCam8NSIoPipe9WPEConfigEi(void) {
    ALOGD("_ZN9NSImageio7NSIspio14WarpEnginePipe15configTpipeDataEN5NSCam8NSIoPipe9WPEConfigEi() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::configSrz(SrzCfg*, _SRZ_SIZE_INFO_*, EDipModule) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe9configSrzEP6SrzCfgP15_SRZ_SIZE_INFO_10EDipModule(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe9configSrzEP6SrzCfgP15_SRZ_SIZE_INFO_10EDipModule() called");
    return 0;
}

/* Demangled: IspDrv_B::setSrz5(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B7setSrz5ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B7setSrz5ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: mdpPortMapping */
extern "C" __attribute__((visibility("default"))) void* mdpPortMapping = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DIP_BUF_CTRL::dequeHwBuf(int&, DipWorkingBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DIP_BUF_CTRL10dequeHwBufERiP16DipWorkingBuffer(void) {
    ALOGD("_ZN12DIP_BUF_CTRL10dequeHwBufERiP16DipWorkingBuffer() called");
    return 0;
}

/* Demangled: DipRingBuffer::createInstance(DIP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN13DipRingBuffer14createInstanceE13DIP_HW_MODULE(void) {
    ALOGD("_ZN13DipRingBuffer14createInstanceE13DIP_HW_MODULE() called");
    return 0;
}

/* Demangled: NSImageio::NSIspio::PostProcPipe::start(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9NSImageio7NSIspio12PostProcPipe5startEPv(void) {
    ALOGD("_ZN9NSImageio7NSIspio12PostProcPipe5startEPv() called");
    return 0;
}

/* Demangled: DipRingBufferImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp6uninitEv(void) {
    ALOGD("_ZN16DipRingBufferImp6uninitEv() called");
    return 0;
}

/* Demangled: IspDrv_B::setC42(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setC42ER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setC42ER12DIP_ISP_PIPE() called");
    return 0;
}

/* Demangled: IspDrv_B::setFlc(DIP_ISP_PIPE&) */
extern "C" __attribute__((visibility("default"))) int _ZN8IspDrv_B6setFlcER12DIP_ISP_PIPE(void) {
    ALOGD("_ZN8IspDrv_B6setFlcER12DIP_ISP_PIPE() called");
    return 0;
}

/* Exported Object: DipRingBuf_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* DipRingBuf_DbgLogEnable_WARN = NULL;

/* Demangled: DipRingBufferImp::checkDipWorkingBufferAvaiable(E_ISP_DIP_CQ) */
extern "C" __attribute__((visibility("default"))) int _ZN16DipRingBufferImp29checkDipWorkingBufferAvaiableE12E_ISP_DIP_CQ(void) {
    ALOGD("_ZN16DipRingBufferImp29checkDipWorkingBufferAvaiableE12E_ISP_DIP_CQ() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
