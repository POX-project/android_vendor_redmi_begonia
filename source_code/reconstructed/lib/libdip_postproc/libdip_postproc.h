/*
 * Reverse-Engineered ABI Specification for: libdip_postproc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdip_postproc.so
 */

#ifndef BEGONIA_RE_LIBDIP_POSTPROC_H
#define BEGONIA_RE_LIBDIP_POSTPROC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN12DIP_ISP_PIPE7disableEPv */
/* Demangled: DIP_ISP_PIPE::disable(void*) */
int _ZN12DIP_ISP_PIPE7disableEPv(void);

/* Symbol: _ZN8IspDrv_B7setMix1ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setMix1(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setMix1ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9MdpMgrImpC2Ev */
/* Demangled: MdpMgrImp::MdpMgrImp() */
int _ZN9MdpMgrImpC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN8IspDrv_B7setSeeeER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSeee(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSeeeER12DIP_ISP_PIPE(void);

/* Symbol: _ZN16DipRingBufferImp4initEbj */
/* Demangled: DipRingBufferImp::init(bool, unsigned int) */
int _ZN16DipRingBufferImp4initEbj(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipeD2Ev */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::~WarpEnginePipe() */
int _ZN9NSImageio7NSIspio14WarpEnginePipeD2Ev(void);

/* Symbol: _ZN8IspDrv_B9setWshiftER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setWshift(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B9setWshiftER12DIP_ISP_PIPE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvj(void);

/* Symbol: _ZN16IspFunctionDip_B14m_pIspDrvShellE */
/* Demangled: IspFunctionDip_B::m_pIspDrvShell */
extern void* _ZN16IspFunctionDip_B14m_pIspDrvShellE;

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe12updateCQUserEi */
/* Demangled: NSImageio::NSIspio::PostProcPipe::updateCQUser(int) */
int _ZN9NSImageio7NSIspio12PostProcPipe12updateCQUserEi(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe4initEPKcj */
/* Demangled: NSImageio::NSIspio::PostProcPipe::init(char const*, unsigned int) */
int _ZN9NSImageio7NSIspio12PostProcPipe4initEPKcj(void);

/* Symbol: _ZN12DIP_ISP_PIPE6configEj */
/* Demangled: DIP_ISP_PIPE::config(unsigned int) */
int _ZN12DIP_ISP_PIPE6configEj(void);

/* Symbol: _Z23DpDmaOutColorFmtConvert12MdpRotDMACfgP13DP_COLOR_ENUM */
/* Demangled: DpDmaOutColorFmtConvert(MdpRotDMACfg, DP_COLOR_ENUM*) */
int _Z23DpDmaOutColorFmtConvert12MdpRotDMACfgP13DP_COLOR_ENUM(void);

/* Symbol: _ZN8IspDrv_B6setG2gER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setG2g(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setG2gER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe22getDMAConstrainErrCodeEPN5NSCam12IImageBufferE */
/* Demangled: NSImageio::NSIspio::PostProcPipe::getDMAConstrainErrCode(NSCam::IImageBuffer*) */
int _ZN9NSImageio7NSIspio12PostProcPipe22getDMAConstrainErrCodeEPN5NSCam12IImageBufferE(void);

/* Symbol: _ZN8IspDrv_B6setGgmER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setGgm(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setGgmER12DIP_ISP_PIPE(void);

/* Symbol: _Z9_startMdpI12DpVEncStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_ */
/* Demangled: int _startMdp<DpVEncStream>(MDPMGR_DPSTREAM_TYPE, MDPMGR_CFG_STRUCT_s&, DpVEncStream*) */
int _Z9_startMdpI12DpVEncStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvj(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe14getDipDumpInfoERjS2_S2_Ri */
/* Demangled: NSImageio::NSIspio::PostProcPipe::getDipDumpInfo(unsigned int&, unsigned int&, unsigned int&, int&) */
int _ZN9NSImageio7NSIspio12PostProcPipe14getDipDumpInfoERjS2_S2_Ri(void);

/* Symbol: _ZN8IspDrv_B7setSMX1ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSMX1(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSMX1ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN12DIP_MDP_PIPE12stopVencLinkEv */
/* Demangled: DIP_MDP_PIPE::stopVencLink() */
int _ZN12DIP_MDP_PIPE12stopVencLinkEv(void);

/* Symbol: _ZN9NSImageio7NSIspio29PostProc_DbgLogEnable_VERBOSEE */
/* Demangled: NSImageio::NSIspio::PostProc_DbgLogEnable_VERBOSE */
extern void* _ZN9NSImageio7NSIspio29PostProc_DbgLogEnable_VERBOSEE;

/* Symbol: _ZN14IspDrvShellImpC2Ev */
/* Demangled: IspDrvShellImp::IspDrvShellImp() */
int _ZN14IspDrvShellImpC2Ev(void);

/* Symbol: _ZN8IspDrv_B7setMix2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setMix2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setMix2ER12DIP_ISP_PIPE(void);

/* Symbol: function_Dip_DbgLogEnable_ASSERT */
/* Demangled: function_Dip_DbgLogEnable_ASSERT */
extern void* function_Dip_DbgLogEnable_ASSERT;

/* Symbol: _Z16_dequeueFrameEndI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_ */
/* Demangled: int _dequeueFrameEnd<DpIspStream>(MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
int _Z16_dequeueFrameEndI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe18HandleExtraCommandEN5NSCam8NSIoPipe7QParamsEPNS3_5NSWpe10WPEQParamsE */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::HandleExtraCommand(NSCam::NSIoPipe::QParams, NSCam::NSIoPipe::NSWpe::WPEQParams*) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe18HandleExtraCommandEN5NSCam8NSIoPipe7QParamsEPNS3_5NSWpe10WPEQParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvj(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: _ZN9NSImageio7NSIspio8u4PortIDE */
/* Demangled: NSImageio::NSIspio::u4PortID */
extern void* _ZN9NSImageio7NSIspio8u4PortIDE;

/* Symbol: _Z17DpColorFmtConvertN5NSCam12EImageFormatEP13DP_COLOR_ENUM */
/* Demangled: DpColorFmtConvert(NSCam::EImageFormat, DP_COLOR_ENUM*) */
int _Z17DpColorFmtConvertN5NSCam12EImageFormatEP13DP_COLOR_ENUM(void);

/* Symbol: _ZN16DipRingBufferImpD0Ev */
/* Demangled: DipRingBufferImp::~DipRingBufferImp() */
int _ZN16DipRingBufferImpD0Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe6uninitEPKc */
/* Demangled: NSImageio::NSIspio::PostProcPipe::uninit(char const*) */
int _ZN9NSImageio7NSIspio12PostProcPipe6uninitEPKc(void);

/* Symbol: _ZN9NSImageio7NSIspio13IPostProcPipe15destroyInstanceEv */
/* Demangled: NSImageio::NSIspio::IPostProcPipe::destroyInstance() */
int _ZN9NSImageio7NSIspio13IPostProcPipe15destroyInstanceEv(void);

/* Symbol: _ZTV9MdpMgrImp */
/* Demangled: vtable for MdpMgrImp */
extern void* _ZTV9MdpMgrImp;

/* Symbol: mdpmgr_DbgLogEnable_ASSERT */
/* Demangled: mdpmgr_DbgLogEnable_ASSERT */
extern void* mdpmgr_DbgLogEnable_ASSERT;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvj(void);

/* Symbol: _ZN12DIP_MDP_PIPE9configMDPEP16DipWorkingBuffer */
/* Demangled: DIP_MDP_PIPE::configMDP(DipWorkingBuffer*) */
int _ZN12DIP_MDP_PIPE9configMDPEP16DipWorkingBuffer(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe16configMdpOutPortEPKN5NSCam8NSIoPipe6OutputER12MdpRotDMACfgNS2_12EImageFormatE */
/* Demangled: NSImageio::NSIspio::PostProcPipe::configMdpOutPort(NSCam::NSIoPipe::Output const*, MdpRotDMACfg&, NSCam::EImageFormat) */
int _ZN9NSImageio7NSIspio12PostProcPipe16configMdpOutPortEPKN5NSCam8NSIoPipe6OutputER12MdpRotDMACfgNS2_12EImageFormatE(void);

/* Symbol: _ZN16DipRingBufferImp15BufferMutexLockEv */
/* Demangled: DipRingBufferImp::BufferMutexLock() */
int _ZN16DipRingBufferImp15BufferMutexLockEv(void);

/* Symbol: _ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<DipWorkingBuffer*, std::__1::allocator<DipWorkingBuffer*> >::__push_back_slow_path<DipWorkingBuffer* const&>(DipWorkingBuffer* const&) */
int _ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEj(void);

/* Symbol: _ZN8IspDrv_B7setSl2bER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2b(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2bER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipeC2Ev */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::WarpEnginePipe() */
int _ZN9NSImageio7NSIspio14WarpEnginePipeC2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipeD2Ev */
/* Demangled: NSImageio::NSIspio::PostProcPipe::~PostProcPipe() */
int _ZN9NSImageio7NSIspio12PostProcPipeD2Ev(void);

/* Symbol: _ZN13DipCmdQMgrImpD0Ev */
/* Demangled: DipCmdQMgrImp::~DipCmdQMgrImp() */
int _ZN13DipCmdQMgrImpD0Ev(void);

/* Symbol: _ZTV10DipCmdQMgr */
/* Demangled: vtable for DipCmdQMgr */
extern void* _ZTV10DipCmdQMgr;

/* Symbol: _ZN7DIP_DMA8write2CQEj */
/* Demangled: DIP_DMA::write2CQ(unsigned int) */
int _ZN7DIP_DMA8write2CQEj(void);

/* Symbol: _ZN8IspDrv_B6setUnpER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setUnp(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setUnpER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B8setPAKG2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setPAKG2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B8setPAKG2ER12DIP_ISP_PIPE(void);

/* Symbol: _Z12_wpestartMdpI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_ */
/* Demangled: int _wpestartMdp<DpIspStream>(MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
int _Z12_wpestartMdpI11DpIspStreamEiR19MDPMGR_CFG_STRUCT_sPT_(void);

/* Symbol: DipCQMgr_DbgLogEnable_ASSERT */
/* Demangled: DipCQMgr_DbgLogEnable_ASSERT */
extern void* DipCQMgr_DbgLogEnable_ASSERT;

/* Symbol: _ZN14IspDrvShellImp4initEPKcj */
/* Demangled: IspDrvShellImp::init(char const*, unsigned int) */
int _ZN14IspDrvShellImp4initEPKcj(void);

/* Symbol: _ZN7DIP_DMA6configEj */
/* Demangled: DIP_DMA::config(unsigned int) */
int _ZN7DIP_DMA6configEj(void);

/* Symbol: mdpmgr_DbgLogEnable_VERBOSE */
/* Demangled: mdpmgr_DbgLogEnable_VERBOSE */
extern void* mdpmgr_DbgLogEnable_VERBOSE;

/* Symbol: _ZN8IspDrv_B6setNbcER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setNbc(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setNbcER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setBnr2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setBnr2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setBnr2ER12DIP_ISP_PIPE(void);

/* Symbol: _Z16dumpWpeTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi */
/* Demangled: dumpWpeTPipeInfo(ISP_TPIPE_CONFIG_STRUCT, int) */
int _Z16dumpWpeTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi(void);

/* Symbol: WarpEngine_DbgLogEnable_ERROR */
/* Demangled: WarpEngine_DbgLogEnable_ERROR */
extern void* WarpEngine_DbgLogEnable_ERROR;

/* Symbol: WarpEngine_DbgLogEnable_INFO */
/* Demangled: WarpEngine_DbgLogEnable_INFO */
extern void* WarpEngine_DbgLogEnable_INFO;

/* Symbol: _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE8__appendEj */
/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__append(unsigned int) */
int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE8__appendEj(void);

/* Symbol: _ZN13DipCmdQMgrImp13releaseCQUserEi */
/* Demangled: DipCmdQMgrImp::releaseCQUser(int) */
int _ZN13DipCmdQMgrImp13releaseCQUserEi(void);

/* Symbol: _ZN8IspDrv_B7setSl2hER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2h(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2hER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9MdpMgrImp13startVencLinkEiii */
/* Demangled: MdpMgrImp::startVencLink(int, int, int) */
int _ZN9MdpMgrImp13startVencLinkEiii(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe7dequeueEiij */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::dequeue(int, int, unsigned int) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe7dequeueEiij(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN12DIP_ISP_PIPE15configTpipeDataEv */
/* Demangled: DIP_ISP_PIPE::configTpipeData() */
int _ZN12DIP_ISP_PIPE15configTpipeDataEv(void);

/* Symbol: _ZN9MdpMgrImp17selectDpIspStreamEjjjjj */
/* Demangled: MdpMgrImp::selectDpIspStream(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9MdpMgrImp17selectDpIspStreamEjjjjj(void);

/* Symbol: _ZN9MdpMgrImp7stopMdpER19MDPMGR_CFG_STRUCT_s */
/* Demangled: MdpMgrImp::stopMdp(MDPMGR_CFG_STRUCT_s&) */
int _ZN9MdpMgrImp7stopMdpER19MDPMGR_CFG_STRUCT_s(void);

/* Symbol: mdpmgr_DbgLogEnable_DEBUG */
/* Demangled: mdpmgr_DbgLogEnable_DEBUG */
extern void* mdpmgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe6uninitE18ISP_WPE_MODULE_IDX */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::uninit(ISP_WPE_MODULE_IDX) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe6uninitE18ISP_WPE_MODULE_IDX(void);

/* Symbol: _ZN8IspDrv_B7setNr3dER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setNr3d(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setNr3dER12DIP_ISP_PIPE(void);

/* Symbol: _Z8_stopMdpI11DpIspStreamEiPT_ */
/* Demangled: int _stopMdp<DpIspStream>(DpIspStream*) */
int _Z8_stopMdpI11DpIspStreamEiPT_(void);

/* Symbol: _ZN9MdpMgrImpD1Ev */
/* Demangled: MdpMgrImp::~MdpMgrImp() */
int _ZN9MdpMgrImpD1Ev(void);

/* Symbol: _ZN13DipRingBufferD0Ev */
/* Demangled: DipRingBuffer::~DipRingBuffer() */
int _ZN13DipRingBufferD0Ev(void);

/* Symbol: _ZN16DipRingBufferImp14getSMXIOBufferE12E_ISP_DIP_CQ15DipDmaSmxioEnumRjS2_S2_ */
/* Demangled: DipRingBufferImp::getSMXIOBuffer(E_ISP_DIP_CQ, DipDmaSmxioEnum, unsigned int&, unsigned int&, unsigned int&) */
int _ZN16DipRingBufferImp14getSMXIOBufferE12E_ISP_DIP_CQ15DipDmaSmxioEnumRjS2_S2_(void);

/* Symbol: _ZN16DipRingBufferImp17BufferMutexUnLockEv */
/* Demangled: DipRingBufferImp::BufferMutexUnLock() */
int _ZN16DipRingBufferImp17BufferMutexUnLockEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN8IspDrv_B7setSl2cER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2c(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2cER12DIP_ISP_PIPE(void);

/* Symbol: DipRingBuf_DbgLogEnable_ASSERT */
/* Demangled: DipRingBuf_DbgLogEnable_ASSERT */
extern void* DipRingBuf_DbgLogEnable_ASSERT;

/* Symbol: DipCQMgr_DbgLogEnable_ERROR */
/* Demangled: DipCQMgr_DbgLogEnable_ERROR */
extern void* DipCQMgr_DbgLogEnable_ERROR;

/* Symbol: _ZN8IspDrv_B5setFmER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setFm(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B5setFmER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B6setPcaER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setPca(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setPcaER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B6setRnrER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setRnr(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setRnrER12DIP_ISP_PIPE(void);

/* Symbol: _ZN12DIP_BUF_CTRL18dequeueMdpFrameEndEiiiij */
/* Demangled: DIP_BUF_CTRL::dequeueMdpFrameEnd(int, int, int, int, unsigned int) */
int _ZN12DIP_BUF_CTRL18dequeueMdpFrameEndEiiiij(void);

/* Symbol: _ZN14IspDrvShellImp16getDipRingBufMgrEv */
/* Demangled: IspDrvShellImp::getDipRingBufMgr() */
int _ZN14IspDrvShellImp16getDipRingBufMgrEv(void);

/* Symbol: _ZN8IspDrv_B6setOb2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setOb2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setOb2ER12DIP_ISP_PIPE(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN8IspDrv_B7setG2g2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setG2g2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setG2g2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setSl2iER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2i(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2iER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setSrz1ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSrz1(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSrz1ER12DIP_ISP_PIPE(void);

/* Symbol: _ZTT14IspDrvShellImp */
/* Demangled: VTT for IspDrvShellImp */
extern void* _ZTT14IspDrvShellImp;

/* Symbol: _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE6resizeEj */
/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::resize(unsigned int) */
int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE6resizeEj(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipeC2Ev */
/* Demangled: NSImageio::NSIspio::PostProcPipe::PostProcPipe() */
int _ZN9NSImageio7NSIspio12PostProcPipeC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN8IspDrv_B6setMfbER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setMfb(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setMfbER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setCrspER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setCrsp(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setCrspER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setLsc2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setLsc2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setLsc2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B8setColorER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setColor(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B8setColorER12DIP_ISP_PIPE(void);

/* Symbol: function_Dip_DbgLogEnable_INFO */
/* Demangled: function_Dip_DbgLogEnable_INFO */
extern void* function_Dip_DbgLogEnable_INFO;

/* Symbol: _Z5getUsv */
/* Demangled: getUs() */
int _Z5getUsv(void);

/* Symbol: _ZN9MdpMgrImp15dequeueFrameEndER19MDPMGR_CFG_STRUCT_s */
/* Demangled: MdpMgrImp::dequeueFrameEnd(MDPMGR_CFG_STRUCT_s&) */
int _ZN9MdpMgrImp15dequeueFrameEndER19MDPMGR_CFG_STRUCT_s(void);

/* Symbol: _ZTV6MdpMgr */
/* Demangled: vtable for MdpMgr */
extern void* _ZTV6MdpMgr;

/* Symbol: _ZN9NSImageio7NSIspio15IWarpEnginePipe14createInstanceEv */
/* Demangled: NSImageio::NSIspio::IWarpEnginePipe::createInstance() */
int _ZN9NSImageio7NSIspio15IWarpEnginePipe14createInstanceEv(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN12DIP_ISP_PIPE22PushFrameCQforMDPStartEv */
/* Demangled: DIP_ISP_PIPE::PushFrameCQforMDPStart() */
int _ZN12DIP_ISP_PIPE22PushFrameCQforMDPStartEv(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe10configPipeERKN5NSCam8NSIoPipe11FrameParamsEPNS0_15PipePackageInfoEPKc */
/* Demangled: NSImageio::NSIspio::PostProcPipe::configPipe(NSCam::NSIoPipe::FrameParams const&, NSImageio::NSIspio::PipePackageInfo*, char const*) */
int _ZN9NSImageio7NSIspio12PostProcPipe10configPipeERKN5NSCam8NSIoPipe11FrameParamsEPNS0_15PipePackageInfoEPKc(void);

/* Symbol: _ZN6MdpMgr14createInstanceEv */
/* Demangled: MdpMgr::createInstance() */
int _ZN6MdpMgr14createInstanceEv(void);

/* Symbol: function_Dip_DbgLogEnable_DEBUG */
/* Demangled: function_Dip_DbgLogEnable_DEBUG */
extern void* function_Dip_DbgLogEnable_DEBUG;

/* Symbol: _ZTV16IspFunctionDip_B */
/* Demangled: vtable for IspFunctionDip_B */
extern void* _ZTV16IspFunctionDip_B;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN8IspDrv_B7setGgm2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setGgm2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setGgm2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setRcp2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setRcp2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setRcp2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9MdpMgrImpC1Ev */
/* Demangled: MdpMgrImp::MdpMgrImp() */
int _ZN9MdpMgrImpC1Ev(void);

/* Symbol: DipRingBuf_DbgLogEnable_VERBOSE */
/* Demangled: DipRingBuf_DbgLogEnable_VERBOSE */
extern void* DipRingBuf_DbgLogEnable_VERBOSE;

/* Symbol: _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE */
/* Demangled: std::__1::vector<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*> >::__swap_out_circular_buffer(std::__1::__split_buffer<NSImageio::NSIspio::PortInfo const*, std::__1::allocator<NSImageio::NSIspio::PortInfo const*>&>&) */
int _ZNSt3__16vectorIPKN9NSImageio7NSIspio8PortInfoENS_9allocatorIS5_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS5_RS7_EE(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe11sendCommandEiiii */
/* Demangled: NSImageio::NSIspio::PostProcPipe::sendCommand(int, int, int, int) */
int _ZN9NSImageio7NSIspio12PostProcPipe11sendCommandEiiii(void);

/* Symbol: _ZN8IspDrv_B6setG2cER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setG2c(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setG2cER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setMix3ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setMix3(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setMix3ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setSrz2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSrz2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSrz2ER12DIP_ISP_PIPE(void);

/* Symbol: mdpmgr_DbgLogEnable_INFO */
/* Demangled: mdpmgr_DbgLogEnable_INFO */
extern void* mdpmgr_DbgLogEnable_INFO;

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipeD1Ev */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::~WarpEnginePipe() */
int _ZN9NSImageio7NSIspio14WarpEnginePipeD1Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvj(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: WarpEngine_DbgLogEnable_WARN */
/* Demangled: WarpEngine_DbgLogEnable_WARN */
extern void* WarpEngine_DbgLogEnable_WARN;

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe20configWpeCommandDataEN5NSCam8NSIoPipe9WPEConfigEi */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::configWpeCommandData(NSCam::NSIoPipe::WPEConfig, int) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe20configWpeCommandDataEN5NSCam8NSIoPipe9WPEConfigEi(void);

/* Symbol: _ZN9NSImageio7NSIspio26PostProc_DbgLogEnable_INFOE */
/* Demangled: NSImageio::NSIspio::PostProc_DbgLogEnable_INFO */
extern void* _ZN9NSImageio7NSIspio26PostProc_DbgLogEnable_INFOE;

/* Symbol: _ZTV12DIP_ISP_PIPE */
/* Demangled: vtable for DIP_ISP_PIPE */
extern void* _ZTV12DIP_ISP_PIPE;

/* Symbol: _ZN12DIP_ISP_PIPE8write2CQEj */
/* Demangled: DIP_ISP_PIPE::write2CQ(unsigned int) */
int _ZN12DIP_ISP_PIPE8write2CQEj(void);

/* Symbol: _ZN8IspDrv_B7setNbc2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setNbc2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setNbc2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B6setSl2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setSl2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe21getCropFunctionEnableENS0_12EDrvScenarioEiRj */
/* Demangled: NSImageio::NSIspio::PostProcPipe::getCropFunctionEnable(NSImageio::NSIspio::EDrvScenario, int, unsigned int&) */
int _ZN9NSImageio7NSIspio12PostProcPipe21getCropFunctionEnableENS0_12EDrvScenarioEiRj(void);

/* Symbol: _ZN9NSImageio7NSIspio17mTransformMappingE */
/* Demangled: NSImageio::NSIspio::mTransformMapping */
extern void* _ZN9NSImageio7NSIspio17mTransformMappingE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZN14IspDrvShellImpC1Ev */
/* Demangled: IspDrvShellImp::IspDrvShellImp() */
int _ZN14IspDrvShellImpC1Ev(void);

/* Symbol: _ZN8IspDrv_B8setAdbs2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setAdbs2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B8setAdbs2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9NSImageio7NSIspio15IWarpEnginePipe15destroyInstanceEv */
/* Demangled: NSImageio::NSIspio::IWarpEnginePipe::destroyInstance() */
int _ZN9NSImageio7NSIspio15IWarpEnginePipe15destroyInstanceEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe24checkFrameParamIsTheSameERKN5NSCam8NSIoPipe11FrameParamsES6_ */
/* Demangled: NSImageio::NSIspio::PostProcPipe::checkFrameParamIsTheSame(NSCam::NSIoPipe::FrameParams const&, NSCam::NSIoPipe::FrameParams const&) */
int _ZN9NSImageio7NSIspio12PostProcPipe24checkFrameParamIsTheSameERKN5NSCam8NSIoPipe11FrameParamsES6_(void);

/* Symbol: _ZN10DipCmdQMgr15destroyInstanceEv */
/* Demangled: DipCmdQMgr::destroyInstance() */
int _ZN10DipCmdQMgr15destroyInstanceEv(void);

/* Symbol: _ZN8IspDrv_B7setMfbwER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setMfbw(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setMfbwER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setMix4ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setMix4(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setMix4ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN16DipRingBufferImpD2Ev */
/* Demangled: DipRingBufferImp::~DipRingBufferImp() */
int _ZN16DipRingBufferImpD2Ev(void);

/* Symbol: _ZTV13DipRingBuffer */
/* Demangled: vtable for DipRingBuffer */
extern void* _ZTV13DipRingBuffer;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN9NSImageio7NSIspio13mCropPathInfoE */
/* Demangled: NSImageio::NSIspio::mCropPathInfo */
extern void* _ZN9NSImageio7NSIspio13mCropPathInfoE;

/* Symbol: _ZN14IspDrvShellImp11getInstanceEv */
/* Demangled: IspDrvShellImp::getInstance() */
int _ZN14IspDrvShellImp11getInstanceEv(void);

/* Symbol: _ZN8IspDrv_B6setNdgER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setNdg(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setNdgER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B8setDcpn2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setDcpn2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B8setDcpn2ER12DIP_ISP_PIPE(void);

/* Symbol: function_Dip_DbgLogEnable_VERBOSE */
/* Demangled: function_Dip_DbgLogEnable_VERBOSE */
extern void* function_Dip_DbgLogEnable_VERBOSE;

/* Symbol: _ZN16DipRingBufferImp16getSecureBufSizeERjS0_S0_ */
/* Demangled: DipRingBufferImp::getSecureBufSize(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16DipRingBufferImp16getSecureBufSizeERjS0_S0_(void);

/* Symbol: _ZTV16DipRingBufferImp */
/* Demangled: vtable for DipRingBufferImp */
extern void* _ZTV16DipRingBufferImp;

/* Symbol: _ZNSt3__110__list_impI16_CQ_CONFIG_INFO_NS_9allocatorIS1_EEE5clearEv */
/* Demangled: std::__1::__list_imp<_CQ_CONFIG_INFO_, std::__1::allocator<_CQ_CONFIG_INFO_> >::clear() */
int _ZNSt3__110__list_impI16_CQ_CONFIG_INFO_NS_9allocatorIS1_EEE5clearEv(void);

/* Symbol: _ZTV12DIP_MDP_PIPE */
/* Demangled: vtable for DIP_MDP_PIPE */
extern void* _ZTV12DIP_MDP_PIPE;

/* Symbol: _ZN13DipCmdQMgrImpD2Ev */
/* Demangled: DipCmdQMgrImp::~DipCmdQMgrImp() */
int _ZN13DipCmdQMgrImpD2Ev(void);

/* Symbol: function_Dip_DbgLogEnable_WARN */
/* Demangled: function_Dip_DbgLogEnable_WARN */
extern void* function_Dip_DbgLogEnable_WARN;

/* Symbol: DipRingBuf_DbgLogEnable_ERROR */
/* Demangled: DipRingBuf_DbgLogEnable_ERROR */
extern void* DipRingBuf_DbgLogEnable_ERROR;

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipeC1Ev */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::WarpEnginePipe() */
int _ZN9NSImageio7NSIspio14WarpEnginePipeC1Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipeD1Ev */
/* Demangled: NSImageio::NSIspio::PostProcPipe::~PostProcPipe() */
int _ZN9NSImageio7NSIspio12PostProcPipeD1Ev(void);

/* Symbol: _ZN13DipCmdQMgrImp6uninitEv */
/* Demangled: DipCmdQMgrImp::uninit() */
int _ZN13DipCmdQMgrImp6uninitEv(void);

/* Symbol: _ZN8IspDrv_B7setC24bER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setC24b(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setC24bER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setSl2dER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2d(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2dER12DIP_ISP_PIPE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: _ZN6MdpMgr15destroyInstanceEv */
/* Demangled: MdpMgr::destroyInstance() */
int _ZN6MdpMgr15destroyInstanceEv(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe16queryCropPathNumENS0_12EDrvScenarioERj */
/* Demangled: NSImageio::NSIspio::PostProcPipe::queryCropPathNum(NSImageio::NSIspio::EDrvScenario, unsigned int&) */
int _ZN9NSImageio7NSIspio12PostProcPipe16queryCropPathNumENS0_12EDrvScenarioERj(void);

/* Symbol: _ZN9NSImageio7NSIspio26PostProc_DbgLogEnable_WARNE */
/* Demangled: NSImageio::NSIspio::PostProc_DbgLogEnable_WARN */
extern void* _ZN9NSImageio7NSIspio26PostProc_DbgLogEnable_WARNE;

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe5startEiij */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::start(int, int, unsigned int) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe5startEiij(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvj(void);

/* Symbol: _ZN9MdpMgrImp15selectWpeStreamEjj */
/* Demangled: MdpMgrImp::selectWpeStream(unsigned int, unsigned int) */
int _ZN9MdpMgrImp15selectWpeStreamEjj(void);

/* Symbol: _ZN8IspDrv_B7setFlc2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setFlc2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setFlc2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9MdpMgrImp13allocDpStreamEj */
/* Demangled: MdpMgrImp::allocDpStream(unsigned int) */
int _ZN9MdpMgrImp13allocDpStreamEj(void);

/* Symbol: _ZN9MdpMgrImp8startMdpER19MDPMGR_CFG_STRUCT_s */
/* Demangled: MdpMgrImp::startMdp(MDPMGR_CFG_STRUCT_s&) */
int _ZN9MdpMgrImp8startMdpER19MDPMGR_CFG_STRUCT_s(void);

/* Symbol: mdpmgr_DbgLogEnable_WARN */
/* Demangled: mdpmgr_DbgLogEnable_WARN */
extern void* mdpmgr_DbgLogEnable_WARN;

/* Symbol: _ZN13DipRingBufferD2Ev */
/* Demangled: DipRingBuffer::~DipRingBuffer() */
int _ZN13DipRingBufferD2Ev(void);

/* Symbol: _ZN16DipRingBufferImp15destroyInstanceEv */
/* Demangled: DipRingBufferImp::destroyInstance() */
int _ZN16DipRingBufferImp15destroyInstanceEv(void);

/* Symbol: _ZN16DipRingBufferImp18getSecureBufHandleERjS0_S0_ */
/* Demangled: DipRingBufferImp::getSecureBufHandle(unsigned int&, unsigned int&, unsigned int&) */
int _ZN16DipRingBufferImp18getSecureBufHandleERjS0_S0_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvj(void);

/* Symbol: _Z11_dequeueBufI11DpIspStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_ */
/* Demangled: int _dequeueBuf<DpIspStream>(eMDPMGR_DEQUEUE_INDEX, MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
int _Z11_dequeueBufI11DpIspStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_(void);

/* Symbol: _ZN9MdpMgrImp4initEj */
/* Demangled: MdpMgrImp::init(unsigned int) */
int _ZN9MdpMgrImp4initEj(void);

/* Symbol: _ZN9MdpMgrImpD0Ev */
/* Demangled: MdpMgrImp::~MdpMgrImp() */
int _ZN9MdpMgrImpD0Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe17checkDMAConstrainEPN5NSCam12IImageBufferEjPc */
/* Demangled: NSImageio::NSIspio::PostProcPipe::checkDMAConstrain(NSCam::IImageBuffer*, unsigned int, char*) */
int _ZN9NSImageio7NSIspio12PostProcPipe17checkDMAConstrainEPN5NSCam12IImageBufferEjPc(void);

/* Symbol: _ZN16DipRingBufferImpC2Ev */
/* Demangled: DipRingBufferImp::DipRingBufferImp() */
int _ZN16DipRingBufferImpC2Ev(void);

/* Symbol: _ZN12DIP_ISP_PIPE13ConfigDipPipeEP16DipWorkingBuffer */
/* Demangled: DIP_ISP_PIPE::ConfigDipPipe(DipWorkingBuffer*) */
int _ZN12DIP_ISP_PIPE13ConfigDipPipeEP16DipWorkingBuffer(void);

/* Symbol: _ZN13DipCmdQMgrImp4initEv */
/* Demangled: DipCmdQMgrImp::init() */
int _ZN13DipCmdQMgrImp4initEv(void);

/* Symbol: _ZN8IspDrv_B6setPgnER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setPgn(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setPgnER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setSl2eER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2e(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2eER12DIP_ISP_PIPE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvj(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe7queryCQENS0_12EDrvScenarioEjiiRjS3_ */
/* Demangled: NSImageio::NSIspio::PostProcPipe::queryCQ(NSImageio::NSIspio::EDrvScenario, unsigned int, int, int, unsigned int&, unsigned int&) */
int _ZN9NSImageio7NSIspio12PostProcPipe7queryCQENS0_12EDrvScenarioEjiiRjS3_(void);

/* Symbol: _ZTV13DipCmdQMgrImp */
/* Demangled: vtable for DipCmdQMgrImp */
extern void* _ZTV13DipCmdQMgrImp;

/* Symbol: mMutex_DpStreamMap */
/* Demangled: mMutex_DpStreamMap */
extern void* mMutex_DpStreamMap;

/* Symbol: _ZN16DipRingBufferImp10getCmdqBufERjS0_ */
/* Demangled: DipRingBufferImp::getCmdqBuf(unsigned int&, unsigned int&) */
int _ZN16DipRingBufferImp10getCmdqBufERjS0_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvj(void);

/* Symbol: _ZN11IspDrvShell14createInstanceEv */
/* Demangled: IspDrvShell::createInstance() */
int _ZN11IspDrvShell14createInstanceEv(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii */
/* Demangled: NSImageio::NSIspio::PostProcPipe::bufferQueCtrl(NSImageio::NSIspio::EPIPE_P2BUFQUECmd, NSImageio::NSIspio::EPIPE_P2engine, unsigned int, int, int, int, int, int) */
int _ZN9NSImageio7NSIspio12PostProcPipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe15configInDmaPortEPKN5NSCam8NSIoPipe5InputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE */
/* Demangled: NSImageio::NSIspio::PostProcPipe::configInDmaPort(NSCam::NSIoPipe::Input const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::EIMAGE_STRIDE, NSCam::EImageFormat) */
int _ZN9NSImageio7NSIspio12PostProcPipe15configInDmaPortEPKN5NSCam8NSIoPipe5InputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE(void);

/* Symbol: _Z16_dequeueFrameEndI12DpVEncStreamEiR19MDPMGR_CFG_STRUCT_sPT_ */
/* Demangled: int _dequeueFrameEnd<DpVEncStream>(MDPMGR_CFG_STRUCT_s&, DpVEncStream*) */
int _Z16_dequeueFrameEndI12DpVEncStreamEiR19MDPMGR_CFG_STRUCT_sPT_(void);

/* Symbol: _Z16dumpIspTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi */
/* Demangled: dumpIspTPipeInfo(ISP_TPIPE_CONFIG_STRUCT, int) */
int _Z16dumpIspTPipeInfo23ISP_TPIPE_CONFIG_STRUCTi(void);

/* Symbol: _ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE */
/* Demangled: std::__1::vector<DipWorkingBuffer*, std::__1::allocator<DipWorkingBuffer*> >::__swap_out_circular_buffer(std::__1::__split_buffer<DipWorkingBuffer*, std::__1::allocator<DipWorkingBuffer*>&>&) */
int _ZNSt3__16vectorIP16DipWorkingBufferNS_9allocatorIS2_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS2_RS4_EE(void);

/* Symbol: DipCQMgr_DbgLogEnable_INFO */
/* Demangled: DipCQMgr_DbgLogEnable_INFO */
extern void* DipCQMgr_DbgLogEnable_INFO;

/* Symbol: _ZN13DipCmdQMgrImpC2Ev */
/* Demangled: DipCmdQMgrImp::DipCmdQMgrImp() */
int _ZN13DipCmdQMgrImpC2Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6resizeEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::resize(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6resizeEj(void);

/* Symbol: _ZN9MdpMgrImp11getJPEGSizeE19MDPMGR_CFG_STRUCT_s */
/* Demangled: MdpMgrImp::getJPEGSize(MDPMGR_CFG_STRUCT_s) */
int _ZN9MdpMgrImp11getJPEGSizeE19MDPMGR_CFG_STRUCT_s(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipeC1Ev */
/* Demangled: NSImageio::NSIspio::PostProcPipe::PostProcPipe() */
int _ZN9NSImageio7NSIspio12PostProcPipeC1Ev(void);

/* Symbol: _ZN8IspDrv_B7setSl2kER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2k(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2kER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setSrz3ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSrz3(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSrz3ER12DIP_ISP_PIPE(void);

/* Symbol: _ZTV14IspDrvShellImp */
/* Demangled: vtable for IspDrvShellImp */
extern void* _ZTV14IspDrvShellImp;

/* Symbol: _ZTVN9NSImageio7NSIspio15IWarpEnginePipeE */
/* Demangled: vtable for NSImageio::NSIspio::IWarpEnginePipe */
extern void* _ZTVN9NSImageio7NSIspio15IWarpEnginePipeE;

/* Symbol: _ZN8IspDrv_B6setUdmER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setUdm(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setUdmER12DIP_ISP_PIPE(void);

/* Symbol: _ZN16DipRingBufferImp23ReleaseDipWorkingBufferEP16DipWorkingBuffer12E_ISP_DIP_CQ */
/* Demangled: DipRingBufferImp::ReleaseDipWorkingBuffer(DipWorkingBuffer*, E_ISP_DIP_CQ) */
int _ZN16DipRingBufferImp23ReleaseDipWorkingBufferEP16DipWorkingBuffer12E_ISP_DIP_CQ(void);

/* Symbol: WarpEngine_DbgLogEnable_DEBUG */
/* Demangled: WarpEngine_DbgLogEnable_DEBUG */
extern void* WarpEngine_DbgLogEnable_DEBUG;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe18HandleExtraCommandEPNS0_15PipePackageInfoE */
/* Demangled: NSImageio::NSIspio::PostProcPipe::HandleExtraCommand(NSImageio::NSIspio::PipePackageInfo*) */
int _ZN9NSImageio7NSIspio12PostProcPipe18HandleExtraCommandEPNS0_15PipePackageInfoE(void);

/* Symbol: _ZN9NSImageio7NSIspio28PostProc_DbgLogEnable_ASSERTE */
/* Demangled: NSImageio::NSIspio::PostProc_DbgLogEnable_ASSERT */
extern void* _ZN9NSImageio7NSIspio28PostProc_DbgLogEnable_ASSERTE;

/* Symbol: _ZN8IspDrv_B7setNdg2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setNdg2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setNdg2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe17queryScenarioInfoENS0_12EDrvScenarioERNSt3__16vectorINS0_12CropPathInfoENS3_9allocatorIS5_EEEE */
/* Demangled: NSImageio::NSIspio::PostProcPipe::queryScenarioInfo(NSImageio::NSIspio::EDrvScenario, std::__1::vector<NSImageio::NSIspio::CropPathInfo, std::__1::allocator<NSImageio::NSIspio::CropPathInfo> >&) */
int _ZN9NSImageio7NSIspio12PostProcPipe17queryScenarioInfoENS0_12EDrvScenarioERNSt3__16vectorINS0_12CropPathInfoENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZN8IspDrv_B7setRmm2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setRmm2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setRmm2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN13DipRingBufferC2Ev */
/* Demangled: DipRingBuffer::DipRingBuffer() */
int _ZN13DipRingBufferC2Ev(void);

/* Symbol: _ZN12DIP_ISP_PIPE15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_ */
/* Demangled: DIP_ISP_PIPE::CalAlgoAndCStep(CRZ_DRV_MODE_ENUM, CRZ_DRV_RZ_ENUM, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CRZ_DRV_ALGO_ENUM*, CRZ_DRV_ALGO_ENUM*, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN12DIP_ISP_PIPE15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe26checkTuningModuleConstrainEPc */
/* Demangled: NSImageio::NSIspio::PostProcPipe::checkTuningModuleConstrain(char*) */
int _ZN9NSImageio7NSIspio12PostProcPipe26checkTuningModuleConstrainEPc(void);

/* Symbol: _ZN9NSImageio7NSIspio27PostProc_DbgLogEnable_DEBUGE */
/* Demangled: NSImageio::NSIspio::PostProc_DbgLogEnable_DEBUG */
extern void* _ZN9NSImageio7NSIspio27PostProc_DbgLogEnable_DEBUGE;

/* Symbol: _ZN9MdpMgrImp18selectDpVEncStreamEv */
/* Demangled: MdpMgrImp::selectDpVEncStream() */
int _ZN9MdpMgrImp18selectDpVEncStreamEv(void);

/* Symbol: _ZN9MdpMgrImp6uninitEj */
/* Demangled: MdpMgrImp::uninit(unsigned int) */
int _ZN9MdpMgrImp6uninitEj(void);

/* Symbol: _ZN16DipRingBufferImp11getTpipeBufERjS0_ */
/* Demangled: DipRingBufferImp::getTpipeBuf(unsigned int&, unsigned int&) */
int _ZN16DipRingBufferImp11getTpipeBufERjS0_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN9NSImageio7NSIspio13IPostProcPipeE */
/* Demangled: vtable for NSImageio::NSIspio::IPostProcPipe */
extern void* _ZTVN9NSImageio7NSIspio13IPostProcPipeE;

/* Symbol: DipCQMgr_DbgLogEnable_DEBUG */
/* Demangled: DipCQMgr_DbgLogEnable_DEBUG */
extern void* DipCQMgr_DbgLogEnable_DEBUG;

/* Symbol: _ZN9MdpMgrImp4initEv */
/* Demangled: MdpMgrImp::init() */
int _ZN9MdpMgrImp4initEv(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipeD0Ev */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::~WarpEnginePipe() */
int _ZN9NSImageio7NSIspio14WarpEnginePipeD0Ev(void);

/* Symbol: _ZN8IspDrv_B6setLceER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setLce(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setLceER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setSrz4ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSrz4(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSrz4ER12DIP_ISP_PIPE(void);

/* Symbol: _Z11_dequeueBufI12DpVEncStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_ */
/* Demangled: int _dequeueBuf<DpVEncStream>(eMDPMGR_DEQUEUE_INDEX, MDPMGR_CFG_STRUCT_s&, DpVEncStream*) */
int _Z11_dequeueBufI12DpVEncStreamEi21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_sPT_(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe31getTuningModuleConstrainErrCodeEv */
/* Demangled: NSImageio::NSIspio::PostProcPipe::getTuningModuleConstrainErrCode() */
int _ZN9NSImageio7NSIspio12PostProcPipe31getTuningModuleConstrainErrCodeEv(void);

/* Symbol: _ZN9NSImageio7NSIspio27PostProc_DbgLogEnable_ERRORE */
/* Demangled: NSImageio::NSIspio::PostProc_DbgLogEnable_ERROR */
extern void* _ZN9NSImageio7NSIspio27PostProc_DbgLogEnable_ERRORE;

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe19wpeconfigMdpOutPortEPKNS0_8PortInfoER12MdpRotDMACfgN5NSCam8NSIoPipe14EDIPSecureEnumE */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::wpeconfigMdpOutPort(NSImageio::NSIspio::PortInfo const*, MdpRotDMACfg&, NSCam::NSIoPipe::EDIPSecureEnum) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe19wpeconfigMdpOutPortEPKNS0_8PortInfoER12MdpRotDMACfgN5NSCam8NSIoPipe14EDIPSecureEnumE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe17PrintPipePortInfoERKN5NSCam8NSIoPipe11FrameParamsE */
/* Demangled: NSImageio::NSIspio::PostProcPipe::PrintPipePortInfo(NSCam::NSIoPipe::FrameParams const&) */
int _ZN9NSImageio7NSIspio12PostProcPipe17PrintPipePortInfoERKN5NSCam8NSIoPipe11FrameParamsE(void);

/* Symbol: _ZTV12DIP_BUF_CTRL */
/* Demangled: vtable for DIP_BUF_CTRL */
extern void* _ZTV12DIP_BUF_CTRL;

/* Symbol: _Z9_startMdpI11DpIspStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_ */
/* Demangled: int _startMdp<DpIspStream>(MDPMGR_DPSTREAM_TYPE, MDPMGR_CFG_STRUCT_s&, DpIspStream*) */
int _Z9_startMdpI11DpIspStreamEi20MDPMGR_DPSTREAM_TYPER19MDPMGR_CFG_STRUCT_sPT_(void);

/* Symbol: _ZN8IspDrv_B6setUfdER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setUfd(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setUfdER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setRmg2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setRmg2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setRmg2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN16DipRingBufferImp23skipTpipeCalculatebyIdxE12E_ISP_DIP_CQRjS1_P16DipWorkingBuffer */
/* Demangled: DipRingBufferImp::skipTpipeCalculatebyIdx(E_ISP_DIP_CQ, unsigned int&, unsigned int&, DipWorkingBuffer*) */
int _ZN16DipRingBufferImp23skipTpipeCalculatebyIdxE12E_ISP_DIP_CQRjS1_P16DipWorkingBuffer(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe19checkDipHWConstrainEv */
/* Demangled: NSImageio::NSIspio::PostProcPipe::checkDipHWConstrain() */
int _ZN9NSImageio7NSIspio12PostProcPipe19checkDipHWConstrainEv(void);

/* Symbol: _ZN8IspDrv_B7setDbs2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setDbs2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setDbs2ER12DIP_ISP_PIPE(void);

/* Symbol: mdpmgr_DbgLogEnable_ERROR */
/* Demangled: mdpmgr_DbgLogEnable_ERROR */
extern void* mdpmgr_DbgLogEnable_ERROR;

/* Symbol: _ZN14IspDrvShellImp15destroyInstanceEv */
/* Demangled: IspDrvShellImp::destroyInstance() */
int _ZN14IspDrvShellImp15destroyInstanceEv(void);

/* Symbol: _ZN8IspDrv_B6setC24ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setC24(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setC24ER12DIP_ISP_PIPE(void);

/* Symbol: WarpEngine_DbgLogEnable_VERBOSE */
/* Demangled: WarpEngine_DbgLogEnable_VERBOSE */
extern void* WarpEngine_DbgLogEnable_VERBOSE;

/* Symbol: _ZTVN9NSImageio7NSIspio14WarpEnginePipeE */
/* Demangled: vtable for NSImageio::NSIspio::WarpEnginePipe */
extern void* _ZTVN9NSImageio7NSIspio14WarpEnginePipeE;

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe8dequeBufERiRjS3_NS0_12EDrvScenarioEiiijj */
/* Demangled: NSImageio::NSIspio::PostProcPipe::dequeBuf(int&, unsigned int&, unsigned int&, NSImageio::NSIspio::EDrvScenario, int, int, int, unsigned int, unsigned int) */
int _ZN9NSImageio7NSIspio12PostProcPipe8dequeBufERiRjS3_NS0_12EDrvScenarioEiiijj(void);

/* Symbol: DipCQMgr_DbgLogEnable_VERBOSE */
/* Demangled: DipCQMgr_DbgLogEnable_VERBOSE */
extern void* DipCQMgr_DbgLogEnable_VERBOSE;

/* Symbol: _ZN9MdpMgrImp10dequeueBufE21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_s */
/* Demangled: MdpMgrImp::dequeueBuf(eMDPMGR_DEQUEUE_INDEX, MDPMGR_CFG_STRUCT_s&) */
int _ZN9MdpMgrImp10dequeueBufE21eMDPMGR_DEQUEUE_INDEXR19MDPMGR_CFG_STRUCT_s(void);

/* Symbol: _ZN16DipRingBufferImp23AcquireDipWorkingBufferE12E_ISP_DIP_CQ */
/* Demangled: DipRingBufferImp::AcquireDipWorkingBuffer(E_ISP_DIP_CQ) */
int _ZN16DipRingBufferImp23AcquireDipWorkingBufferE12E_ISP_DIP_CQ(void);

/* Symbol: _ZN16DipRingBufferImp24getDipWorkingBufferbyIdxE12E_ISP_DIP_CQji */
/* Demangled: DipRingBufferImp::getDipWorkingBufferbyIdx(E_ISP_DIP_CQ, unsigned int, int) */
int _ZN16DipRingBufferImp24getDipWorkingBufferbyIdxE12E_ISP_DIP_CQji(void);

/* Symbol: _ZN16DipRingBufferImpD1Ev */
/* Demangled: DipRingBufferImp::~DipRingBufferImp() */
int _ZN16DipRingBufferImpD1Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe9m_pWpeDrvE */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::m_pWpeDrv */
extern void* _ZN9NSImageio7NSIspio14WarpEnginePipe9m_pWpeDrvE;

/* Symbol: _ZN12DIP_MDP_PIPE13startVencLinkEiii */
/* Demangled: DIP_MDP_PIPE::startVencLink(int, int, int) */
int _ZN12DIP_MDP_PIPE13startVencLinkEiii(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe16configOutDmaPortEPKN5NSCam8NSIoPipe6OutputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE */
/* Demangled: NSImageio::NSIspio::PostProcPipe::configOutDmaPort(NSCam::NSIoPipe::Output const*, IspDMACfg&, unsigned int, unsigned int, unsigned int, NSImageio::NSIspio::EIMAGE_STRIDE, NSCam::EImageFormat) */
int _ZN9NSImageio7NSIspio12PostProcPipe16configOutDmaPortEPKN5NSCam8NSIoPipe6OutputER9IspDMACfgjjjNS0_13EIMAGE_STRIDEENS2_12EImageFormatE(void);

/* Symbol: _ZN16DipRingBufferImp16getCqDescBufSizeERj */
/* Demangled: DipRingBufferImp::getCqDescBufSize(unsigned int&) */
int _ZN16DipRingBufferImp16getCqDescBufSizeERj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvj(void);

/* Symbol: _ZN12DIP_ISP_PIPE6enableEPv */
/* Demangled: DIP_ISP_PIPE::enable(void*) */
int _ZN12DIP_ISP_PIPE6enableEPv(void);

/* Symbol: DipCQMgr_DbgLogEnable_WARN */
/* Demangled: DipCQMgr_DbgLogEnable_WARN */
extern void* DipCQMgr_DbgLogEnable_WARN;

/* Symbol: _ZN8IspDrv_B7setC02bER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setC02b(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setC02bER12DIP_ISP_PIPE(void);

/* Symbol: _ZN16DipRingBufferImp11getInstanceE13DIP_HW_MODULE */
/* Demangled: DipRingBufferImp::getInstance(DIP_HW_MODULE) */
int _ZN16DipRingBufferImp11getInstanceE13DIP_HW_MODULE(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe15getVssDipWBInfoERjii */
/* Demangled: NSImageio::NSIspio::PostProcPipe::getVssDipWBInfo(unsigned int&, int, int) */
int _ZN9NSImageio7NSIspio12PostProcPipe15getVssDipWBInfoERjii(void);

/* Symbol: _ZTV7DIP_DMA */
/* Demangled: vtable for DIP_DMA */
extern void* _ZTV7DIP_DMA;

/* Symbol: DipRingBuf_DbgLogEnable_INFO */
/* Demangled: DipRingBuf_DbgLogEnable_INFO */
extern void* DipRingBuf_DbgLogEnable_INFO;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN13DipCmdQMgrImpD1Ev */
/* Demangled: DipCmdQMgrImp::~DipCmdQMgrImp() */
int _ZN13DipCmdQMgrImpD1Ev(void);

/* Symbol: _ZN9MdpMgrImp6uninitEv */
/* Demangled: MdpMgrImp::uninit() */
int _ZN9MdpMgrImp6uninitEv(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipeD0Ev */
/* Demangled: NSImageio::NSIspio::PostProcPipe::~PostProcPipe() */
int _ZN9NSImageio7NSIspio12PostProcPipeD0Ev(void);

/* Symbol: _ZTVN9NSImageio7NSIspio12PostProcPipeE */
/* Demangled: vtable for NSImageio::NSIspio::PostProcPipe */
extern void* _ZTVN9NSImageio7NSIspio12PostProcPipeE;

/* Symbol: _ZN8IspDrv_B6setC02ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setC02(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setC02ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B5setFeER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setFe(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B5setFeER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B7setCpn2ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setCpn2(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setCpn2ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9MdpMgrImp17updateDpStreamMapEjjjj */
/* Demangled: MdpMgrImp::updateDpStreamMap(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9MdpMgrImp17updateDpStreamMapEjjjj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvj(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe14getCrzPositionENS0_12EDrvScenarioERiS3_ */
/* Demangled: NSImageio::NSIspio::PostProcPipe::getCrzPosition(NSImageio::NSIspio::EDrvScenario, int&, int&) */
int _ZN9NSImageio7NSIspio12PostProcPipe14getCrzPositionENS0_12EDrvScenarioERiS3_(void);

/* Symbol: _ZTC14IspDrvShellImp0_11IspDrvShell */
/* Demangled: construction vtable for IspDrvShell-in-IspDrvShellImp */
extern void* _ZTC14IspDrvShellImp0_11IspDrvShell;

/* Symbol: function_Dip_DbgLogEnable_ERROR */
/* Demangled: function_Dip_DbgLogEnable_ERROR */
extern void* function_Dip_DbgLogEnable_ERROR;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN8IspDrv_B8setWsyncER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setWsync(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B8setWsyncER12DIP_ISP_PIPE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void);

/* Symbol: _ZN8IspDrv_B6setHfgER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setHfg(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setHfgER12DIP_ISP_PIPE(void);

/* Symbol: _ZN9MdpMgrImpD2Ev */
/* Demangled: MdpMgrImp::~MdpMgrImp() */
int _ZN9MdpMgrImpD2Ev(void);

/* Symbol: _ZN13DipRingBufferD1Ev */
/* Demangled: DipRingBuffer::~DipRingBuffer() */
int _ZN13DipRingBufferD1Ev(void);

/* Symbol: _ZN10DipCmdQMgr14createInstanceEv */
/* Demangled: DipCmdQMgr::createInstance() */
int _ZN10DipCmdQMgr14createInstanceEv(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe4initE18ISP_WPE_MODULE_IDXj */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::init(ISP_WPE_MODULE_IDX, unsigned int) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe4initE18ISP_WPE_MODULE_IDXj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvj(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe16dequeMdpFrameEndEiiiij */
/* Demangled: NSImageio::NSIspio::PostProcPipe::dequeMdpFrameEnd(int, int, int, int, unsigned int) */
int _ZN9NSImageio7NSIspio12PostProcPipe16dequeMdpFrameEndEiiiij(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe4stopEPv */
/* Demangled: NSImageio::NSIspio::PostProcPipe::stop(void*) */
int _ZN9NSImageio7NSIspio12PostProcPipe4stopEPv(void);

/* Symbol: _ZN9NSImageio7NSIspio13IPostProcPipe14createInstanceEv */
/* Demangled: NSImageio::NSIspio::IPostProcPipe::createInstance() */
int _ZN9NSImageio7NSIspio13IPostProcPipe14createInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN16DipRingBufferImpC1Ev */
/* Demangled: DipRingBufferImp::DipRingBufferImp() */
int _ZN16DipRingBufferImpC1Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN9MdpMgrImp12stopVencLinkEv */
/* Demangled: MdpMgrImp::stopVencLink() */
int _ZN9MdpMgrImp12stopVencLinkEv(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe9configwpeE10WpePackagei */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::configwpe(WpePackage, int) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe9configwpeE10WpePackagei(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvj(void);

/* Symbol: _ZN13DipCmdQMgrImp11getDupCQIdxEiii12_debug_info_ */
/* Demangled: DipCmdQMgrImp::getDupCQIdx(int, int, int, _debug_info_) */
int _ZN13DipCmdQMgrImp11getDupCQIdxEiii12_debug_info_(void);

/* Symbol: _ZN14IspDrvShellImp6uninitEPKc */
/* Demangled: IspDrvShellImp::uninit(char const*) */
int _ZN14IspDrvShellImp6uninitEPKc(void);

/* Symbol: _ZN8IspDrv_B7setSl2gER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSl2g(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSl2gER12DIP_ISP_PIPE(void);

/* Symbol: _Z8_stopMdpI12DpVEncStreamEiPT_ */
/* Demangled: int _stopMdp<DpVEncStream>(DpVEncStream*) */
int _Z8_stopMdpI12DpVEncStreamEiPT_(void);

/* Symbol: WarpEngine_DbgLogEnable_ASSERT */
/* Demangled: WarpEngine_DbgLogEnable_ASSERT */
extern void* WarpEngine_DbgLogEnable_ASSERT;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvj(void);

/* Symbol: mMDPTransformMapping */
/* Demangled: mMDPTransformMapping */
extern void* mMDPTransformMapping;

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe8doUVSwapEPjS2_ */
/* Demangled: NSImageio::NSIspio::PostProcPipe::doUVSwap(unsigned int*, unsigned int*) */
int _ZN9NSImageio7NSIspio12PostProcPipe8doUVSwapEPjS2_(void);

/* Symbol: _ZN13DipCmdQMgrImp14checkCQUserNumEi */
/* Demangled: DipCmdQMgrImp::checkCQUserNum(int) */
int _ZN13DipCmdQMgrImp14checkCQUserNumEi(void);

/* Symbol: DipRingBuf_DbgLogEnable_DEBUG */
/* Demangled: DipRingBuf_DbgLogEnable_DEBUG */
extern void* DipRingBuf_DbgLogEnable_DEBUG;

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe14PixelIDMappingEj */
/* Demangled: NSImageio::NSIspio::PostProcPipe::PixelIDMapping(unsigned int) */
int _ZN9NSImageio7NSIspio12PostProcPipe14PixelIDMappingEj(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN13DipCmdQMgrImpC1Ev */
/* Demangled: DipCmdQMgrImp::DipCmdQMgrImp() */
int _ZN13DipCmdQMgrImpC1Ev(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::bufferQueCtrl(NSImageio::NSIspio::EPIPE_P2BUFQUECmd, NSImageio::NSIspio::EPIPE_P2engine, unsigned int, int, int, int, int, int) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe13bufferQueCtrlENS0_17EPIPE_P2BUFQUECmdENS0_14EPIPE_P2engineEjiiiii(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN9NSImageio7NSIspio14WarpEnginePipe15configTpipeDataEN5NSCam8NSIoPipe9WPEConfigEi */
/* Demangled: NSImageio::NSIspio::WarpEnginePipe::configTpipeData(NSCam::NSIoPipe::WPEConfig, int) */
int _ZN9NSImageio7NSIspio14WarpEnginePipe15configTpipeDataEN5NSCam8NSIoPipe9WPEConfigEi(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe9configSrzEP6SrzCfgP15_SRZ_SIZE_INFO_10EDipModule */
/* Demangled: NSImageio::NSIspio::PostProcPipe::configSrz(SrzCfg*, _SRZ_SIZE_INFO_*, EDipModule) */
int _ZN9NSImageio7NSIspio12PostProcPipe9configSrzEP6SrzCfgP15_SRZ_SIZE_INFO_10EDipModule(void);

/* Symbol: _ZN8IspDrv_B7setSrz5ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setSrz5(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B7setSrz5ER12DIP_ISP_PIPE(void);

/* Symbol: mdpPortMapping */
/* Demangled: mdpPortMapping */
extern void* mdpPortMapping;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvj(void);

/* Symbol: _ZN12DIP_BUF_CTRL10dequeHwBufERiP16DipWorkingBuffer */
/* Demangled: DIP_BUF_CTRL::dequeHwBuf(int&, DipWorkingBuffer*) */
int _ZN12DIP_BUF_CTRL10dequeHwBufERiP16DipWorkingBuffer(void);

/* Symbol: _ZN13DipRingBuffer14createInstanceE13DIP_HW_MODULE */
/* Demangled: DipRingBuffer::createInstance(DIP_HW_MODULE) */
int _ZN13DipRingBuffer14createInstanceE13DIP_HW_MODULE(void);

/* Symbol: _ZN9NSImageio7NSIspio12PostProcPipe5startEPv */
/* Demangled: NSImageio::NSIspio::PostProcPipe::start(void*) */
int _ZN9NSImageio7NSIspio12PostProcPipe5startEPv(void);

/* Symbol: _ZN16DipRingBufferImp6uninitEv */
/* Demangled: DipRingBufferImp::uninit() */
int _ZN16DipRingBufferImp6uninitEv(void);

/* Symbol: _ZN8IspDrv_B6setC42ER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setC42(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setC42ER12DIP_ISP_PIPE(void);

/* Symbol: _ZN8IspDrv_B6setFlcER12DIP_ISP_PIPE */
/* Demangled: IspDrv_B::setFlc(DIP_ISP_PIPE&) */
int _ZN8IspDrv_B6setFlcER12DIP_ISP_PIPE(void);

/* Symbol: DipRingBuf_DbgLogEnable_WARN */
/* Demangled: DipRingBuf_DbgLogEnable_WARN */
extern void* DipRingBuf_DbgLogEnable_WARN;

/* Symbol: _ZN16DipRingBufferImp29checkDipWorkingBufferAvaiableE12E_ISP_DIP_CQ */
/* Demangled: DipRingBufferImp::checkDipWorkingBufferAvaiable(E_ISP_DIP_CQ) */
int _ZN16DipRingBufferImp29checkDipWorkingBufferAvaiableE12E_ISP_DIP_CQ(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDIP_POSTPROC_H */
